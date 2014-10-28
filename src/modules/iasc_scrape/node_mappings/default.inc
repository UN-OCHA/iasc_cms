<?php
/**
 * @file
 * Default mappings for nodes.
 */

/**
 * Class IASCDefault
 */
class IASCDefault {
  public $entity;
  public $values;

  protected $wrapper;
  protected $fields = array();
  protected $plain = array();
  protected $hardcoded = array();
  protected $created = '';
  protected $term = NULL;
  protected $terms = array();
  protected $lists = array();
  protected $groups = array();
  protected $space = array();
  protected $dates = array();

  /**
   * Constructor.
   */
  public function __construct($type) {
    // Check to see if we're updating an existing entity.
    if ($this->values['entity_id']) {
      $this->wrapper = entity_metadata_wrapper('node', $this->values['entity_id']);
      $this->entity = $this->wrapper->value();
    }
    else {
      $defaults = array(
        'type' => $type,
        'uid' => 1,
        'status' => 1,
        'comment' => 1,
        'promote' => 0,
      );

      $this->entity = entity_create('node', $defaults);
      $this->wrapper = entity_metadata_wrapper('node', $this->entity);
    }

    // Set the field values.
    $this->wrapper->title->set($this->values['data']['title']);
    $this->setCreated();
    $this->setHardcoded();
    $this->setFields();
    $this->setPlain();
    $this->setTerm();
    $this->setTerms();
    $this->setLists();
    // $this->setGroups();
    $this->setSpace();
    $this->setDates();

    // Save the entity.
    $this->wrapper->save(TRUE);
    entity_save('node', $this->entity);
  }

  /**
   * Set entity created.
   */
  protected function setCreated() {
    if (($this->values['data'][$this->created])) {
      $fixed_date = str_replace('/', '-', $this->values['data'][$this->created]);
      $unix = strtotime($fixed_date);
      $this->wrapper->created->set($unix);
    }
  }

  /**
   * Set hardcoded values.
   */
  protected function setHardcoded() {
    foreach ($this->hardcoded as $field => $value) {
      try {
        $this->wrapper->{$field}->set($value);
      }
      catch (Exception $e) {
        echo 'Caught exception on ' . $field . ': ',  $e->getMessage(), "\n";
      }
    }
  }

  /**
   * Set plain fields.
   */
  protected function setPlain() {
    foreach ($this->plain as $field) {
      try {
        $this->wrapper->{$field}->set($this->values['data'][$field]);
      }
      catch (Exception $e) {
        echo 'Caught exception on ' . $field . ': ',  $e->getMessage(), "\n";
      }
    }
  }

  /**
   * Set plain text fields.
   */
  protected function setFields() {
    foreach ($this->fields as $field) {
      try {
        $this->wrapper->{$field}->set(array('value' => $this->values['data'][$field]));
      }
      catch (Exception $e) {
        echo 'Caught exception on ' . $field . ': ',  $e->getMessage(), "\n";
      }
    }
  }

  /**
   * Set term reference field.
   *
   * This is different than setTerms as it is for term reference
   * fields where only one value can be set.
   */
  protected function setTerm() {
    foreach ($this->term as $term => $vocab) {
      if (!empty($this->values['data'][$term])) {
        $full_term = taxonomy_get_term_by_name($this->values['data'][$term], $vocab['name']);
        $full_term = reset($full_term);
        try {
          $this->wrapper->{$term}->set($full_term->tid);
        }
        catch (Exception $e) {
          echo 'Caught exception on ' . $term . ': ', $e->getMessage(), "\n";
        }
      }
    }
  }

  /**
   * Set term reference fields.
   */
  protected function setTerms() {
    foreach ($this->terms as $term => $vocab) {
      if (!empty($this->values['data'][$term])) {
        $full_term = taxonomy_get_term_by_name($this->values['data'][$term], $vocab['name']);
        $full_term = reset($full_term);
        try {
          $this->wrapper->{$term}->set(array($full_term->tid));
        }
        catch (Exception $e) {
          echo 'Caught exception on ' . $term . ': ', $e->getMessage(), "\n";
        }
      }
    }
  }

  /**
   * Set predetermined list fields.
   */
  protected function setLists() {
    foreach ($this->lists as $list) {
      $options = field_info_field($list);
      $values = array_flip($options['settings']['allowed_values']);
      try {
        $this->wrapper->{$list}->set($values[$this->values['data'][$list]]);
      }
      catch (Exception $e) {
        echo 'Caught exception on ' . $list . ': ',  $e->getMessage(), "\n";
      }
    }
  }

  /**
   * Get group id based on the name.
   */
  protected function getSpaceId($name) {
    $result = db_select('field_data_field_legacy_space_name', 'flsn')
      ->fields('flsn', array('entity_id'))
      ->condition('bundle', 'oa_space')
      ->condition('field_legacy_space_name_value', $name)
      ->execute()
      ->fetchAssoc();
    $nid = (!empty($result['entity_id'])) ? $result['entity_id'] : 0;
    return $nid;
  }

  /**
   * Set predetermined space field.
   */
  protected function setSpace() {
    foreach ($this->space as $space) {
      if (!empty($this->values['data'][$space])) {
        $space_id = $other_space_id = 0;

        // Remove spaces on data.
        $value = trim($this->values['data'][$space]);
        $value = str_replace('  ', ' ', $value);

        // Possible main spaces.
        // Not a fan of hard-coding, but no legacy name to lookup.
        $main_spaces = array(
          'Subsidiary Bodies' => 2606,
          'Other' => 2608,
          'Weekly' => 2609,
          'Working Group' => 2605,
        );

        foreach ($main_spaces as $space_name => $entity_id) {
          // Attempt to see if named space is part of main space.
          $match = preg_match("/$space_name+/", $value);

          // If so, set main space, then other space.
          if ($match) {
            $space_id = $entity_id;
            $other_space_id = $this->getSpaceId($value);
            break;
          }
        }

        // If no matches were found, attempt to set the space.
        if (!isset($match)) {
          $space_id = $this->getSpaceId($value);
        }

        // Save to main space.
        if ($space_id) {
          try {
            $this->wrapper->og_group_ref->set($space_id);
          }
          catch (Exception $e) {
            echo 'Caught exception on ' . $space . ': ', $e->getMessage(), "\n";
          }
        }

        // Save to other space.
        if ($other_space_id) {
          try {
            $this->wrapper->oa_other_spaces_ref->set(array($other_space_id));
          }
          catch (Exception $e) {
            echo 'Caught exception on ' . $space . ': ', $e->getMessage(), "\n";
          }
        }
      }
    }
  }

  /**
   * Set predetermined date fields.
   */
  protected function setDates() {
    foreach ($this->dates as $date_field => $date) {
      // If date is type published, then this is just a single m/d/y date value.
      // Published is similar to the node->created timestamp.
      if (!empty($date['published'])) {
        $fixed_date = str_replace('/', '-', $this->values['data'][$date['published']['date']]);
        $unix = strtotime($fixed_date);
        if (!empty($unix)) {
          try {
            $this->wrapper->{$date_field}->set($unix);
          }
          catch (Exception $e) {
            echo 'Caught exception on ' . $date_field . ': ',  $e->getMessage(), "\n";
          }
        }

        continue;
      }

      $start_hour = $this->values['data'][$date['start']['hour']];
      $end_hour = $this->values['data'][$date['end']['hour']];

      // Adjust for timezone.
      switch ($this->values['data']['field_time_zone']) {
        case 'Geneva':
          $start_hour += 1;
          break;

        case 'New York':
          $start_hour -= 5;
          break;

        case 'Uganda':
          $start_hour += 3;
          break;
      }
      // Reformat date.
      $fixed_date = array();
      foreach (array(
                 $this->values['data'][$date['start']['date']],
                 $this->values['data'][$date['end']['date']],
               ) as $weird_date) {
        $fixed_date[] = str_replace('/', '-', $weird_date);
      }
      $start = $fixed_date[0]
        . ' '
        . $start_hour
        . ':'
        . $this->values['data'][$date['start']['min']];
      $end = $fixed_date[1]
        . ' '
        . $end_hour
        . ':'
        . $this->values['data'][$date['end']['min']];
      $unix_start = strtotime($start);
      $unix_end = strtotime($end);
      if (!empty($unix_start) && (!empty($unix_end))) {
        try {
          $this->wrapper->{$date_field}[0]->set(array(
            'value' => $unix_start,
            'value2' => $unix_end,
          ));
        }
        catch (Exception $e) {
          echo 'Caught exception on ' . $date_field . ': ', $e->getMessage(), "\n";
        }
      }
    }
  }
}

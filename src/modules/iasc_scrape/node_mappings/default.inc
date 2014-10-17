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
  protected $terms = array();
  protected $lists = array();
  protected $groups = array();
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
    $this->setTerms();
    $this->setLists();
    // $this->setGroups();
    $this->setDates();

    // Save the entity.
    $this->wrapper->save(TRUE);
    entity_save('node', $this->entity);
  }

  /**
   * Set entity created.
   */
  protected function setCreated() {
    if (!empty($this->created)) {
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
   * Set term reference fields.
   */
  protected function setTerms() {
    foreach ($this->terms as $term => $vocab) {
      $full_term = taxonomy_get_term_by_name($this->values['data'][$term], $vocab['name']);
      try {
        $this->wrapper->{$term}->set(array(reset($full_term)->tid));
      }
      catch (Exception $e) {
        echo 'Caught exception on ' . $term . ': ',  $e->getMessage(), "\n";
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
  protected function getGroupId($name) {
    $result = db_select('node', 'n')
      ->fields('n', array('nid'))
      ->condition('type', 'oa_space')
      ->condition('title', $name)
      ->execute()
      ->fetchAssoc();
    return $result['title'];
  }

  /**
   * Set predetermined groups / spaces fields.
   */
  protected function setGroups() {
    foreach ($this->groups as $group) {
      $group_id = $this->getGroupId($this->values['data'][$group]);
      try {
        $this->wrapper->{$group}->set(array($group_id));
      }
      catch (Exception $e) {
        echo 'Caught exception on ' . $group . ': ',  $e->getMessage(), "\n";
      }
    }
  }

  /**
   * Set predetermined date fields.
   */
  protected function setDates() {
    foreach ($this->dates as $date_field => $date) {
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

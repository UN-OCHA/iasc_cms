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
  protected $terms = array();
  protected $lists = array();

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
    $this->setFields();
    $this->setTerms();
    $this->setLists();

    // Save the entity.
    $this->wrapper->save(true);
    entity_save('node', $this->entity);
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
}

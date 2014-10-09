<?php

class IASCDefault {
  public $entity;
  public $wrapper;
  public $values;
  public $fields;

  public function __construct($type) {
    $defaults = array(
      'type' => $type,
      'uid' => 1,
      'status' => 1,
      'comment' => 1,
      'promote' => 0,
    );
    $this->entity = entity_create('node', $defaults);
    $this->wrapper = entity_metadata_wrapper('node', $this->entity);
    $this->wrapper->title->set($this->values['title']);
    $this->setFields($this->fields);
    $this->wrapper->save(true);
    entity_save('node', $this->entity);
  }

  protected function setFields($fields) {
    foreach ($fields as $field) {
      $this->wrapper->{$field}->set(array('value' => $this->values[$field]));
    }
  }
}
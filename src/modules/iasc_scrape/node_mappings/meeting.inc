<?php

class IASCMeeting extends IASCDefault {

  public function __construct($values) {
    $this->values = $values;
    $this->fields = array(
      'field_time_zone',
      'field_oa_address',
      'body',
      'field_info_private',
    );
    parent::__construct('oa_event');

    $terms = array(
      'field_host',
      'field_authoring_bodies',
    );

    $reference = array(
      'og_group_ref',
      'field_contact',
    );
  }
}
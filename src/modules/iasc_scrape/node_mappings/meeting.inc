<?php
/**
 * @file
 * Meeting node mappings.
 */

/**
 * Class IASCMeeting
 */
class IASCMeeting extends IASCDefault {

  /**
   * Constructor.
   */
  public function __construct($values) {
    $this->values = $values;

    // Plain text fields.
    $this->fields = array(
      'field_oa_address',
      'body',
      'field_info_private',
    );

    // Taxonomy term references.
    $this->terms = array(
      'field_host' => array(
        'name' => 'hosts',
      ),
      'field_authoring_bodies' => array(
        'name' => 'authoring_bodies',
      ),
    );

    // List fields.
    $this->lists = array(
      'field_time_zone',
    );

    // Groups.
    $this->groups = array(
      'og_group_ref',
    );

    // Date fields.
    $this->dates = array(
      'field_oa_date' => array(
        'start' => array(
          'date' => 'field_oa_start_date',
          'hour' => 'field_oa_start_time_hour',
          'min' => 'field_oa_start_time_min',
        ),
        'end' => array(
          'date' => 'field_oa_end_date',
          'hour' => 'field_oa_end_time_hour',
          'min' => 'field_oa_end_time_min',
        ),
      ),
    );
    parent::__construct('oa_event');

    $references = array(
      'field_contact',
    );
  }
}

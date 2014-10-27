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
    $this->plain = array(
      'field_city',
      'field_venue',
      'field_room',
      'field_legacy_publish',
    );

    // Text area fields.
    $this->fields = array(
      'body',
      'field_info_private',
    );

    // Taxonomy term references.
    $this->terms = array(
      'field_host' => array(
        'name' => 'hosts',
      ),
    );

    // List fields.
    $this->lists = array(
      'field_time_zone',
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

    // Space.
    $this->space = array(
      'og_group_ref',
    );

    parent::__construct('oa_event');

    $references = array(
      'field_contact',
    );
  }
}

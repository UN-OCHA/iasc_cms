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
    parent::__construct('oa_event');

    $references = array(
      'field_contact',
    );
  }
}

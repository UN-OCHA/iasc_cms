<?php
/**
 * @file
 * News node mappings.
 */

/**
 * Class IASCNews
 */
class IASCNews extends IASCDefault {

  /**
   * Constructor.
   */
  public function __construct($values) {
    $this->values = $values;

    // Plain fields.
    $this->plain = array(
      'field_legacy_publish',
    );

    // Combine fields.
    $this->combineFields = array(
      'body' => array(
        'intro',
        'intro_link',
        'body',
      ),
    );

    // Created date.
    $this->created = 'field_published_date';

    // Date fields.
    $this->dates = array(
      'field_published_date' => array(
        'published' => array(
          'date' => 'field_published_date',
        ),
      ),
    );

    // Space.
    $this->space = array(
      'og_group_ref',
    );

    // Contact.
    $this->contact = array(
      'field_contact',
    );

    parent::__construct('announcement');
  }
}

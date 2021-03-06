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
    $this->summaryFields = array(
      'summary' => array(
        'intro',
        'intro_link',
      ),
      'value' => array(
        'body',
      ),
    );

    // Flags.
    $this->flags = array(
      'show_on_home',
    );

    // Links.
    $this->links = array(
      'field_links',
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

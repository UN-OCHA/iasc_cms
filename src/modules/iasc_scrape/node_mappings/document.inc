<?php
/**
 * @file
 * Document node mappings.
 */

/**
 * Class IASCDocument
 */
class IASCDocument extends IASCDefault {

  /**
   * Constructor.
   */
  public function __construct($values) {
    $this->values = $values;

    // Plain fields.
    $this->plain = array(
      'field_document_no',
    );

    // Created date.
    $this->created = 'posted_date';

    // Hardcoded values.
    $term = taxonomy_get_term_by_name('Document', 'document_types');
    $tid = reset($term)->tid;
    $this->hardcoded = array(
      'field_document_type' => $tid,
    );

    // Groups.
    $this->groups = array(
      'og_group_ref',
    );

    parent::__construct('oa_wiki_page');

    $references = array(
      'field_contact',
    );
  }
}

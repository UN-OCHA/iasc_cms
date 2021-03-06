<?php
/**
 * @file
 * Product node mappings.
 */

/**
 * Class IASCProduct
 */
class IASCProduct extends IASCDefault {

  /**
   * Constructor.
   */
  public function __construct($values) {
    $this->values = $values;

    // Plain fields.
    $this->plain = array(
      'field_document_no',
      'field_legacy_publish',
    );

    // Created date.
    $this->created = 'posted_date';

    // Date fields.
    $this->dates = array(
      'field_published_date' => array(
        'published' => array(
          'date' => 'posted_date',
        ),
      ),
    );

    // Hardcoded values.
    $term = taxonomy_get_term_by_name('Product', 'document_types');
    $tid = reset($term)->tid;
    $this->hardcoded = array(
      'field_document_type' => $tid,
    );

    // Taxonomy term references.
    $this->term = array(
      'field_category' => array(
        'name' => 'product_categories',
      ),
    );

    // Space.
    $this->space = array(
      'og_group_ref',
    );

    parent::__construct('oa_wiki_page');
  }
}

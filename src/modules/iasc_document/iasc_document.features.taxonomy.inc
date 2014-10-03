<?php
/**
 * @file
 * iasc_document.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function iasc_document_taxonomy_default_vocabularies() {
  return array(
    'document_types' => array(
      'name' => 'Document Types',
      'machine_name' => 'document_types',
      'description' => 'Types of Documents.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'product_categories' => array(
      'name' => 'Product Categories',
      'machine_name' => 'product_categories',
      'description' => 'A list of terms that a user can associate with a particular Product (document).',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}

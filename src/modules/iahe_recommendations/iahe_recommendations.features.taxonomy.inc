<?php
/**
 * @file
 * iahe_recommendations.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function iahe_recommendations_taxonomy_default_vocabularies() {
  return array(
    'addressee' => array(
      'name' => 'Addressee',
      'machine_name' => 'addressee',
      'description' => 'Responsibility for Recommendation Implementation',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'country' => array(
      'name' => 'Country',
      'machine_name' => 'country',
      'description' => 'Countries of the world',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}

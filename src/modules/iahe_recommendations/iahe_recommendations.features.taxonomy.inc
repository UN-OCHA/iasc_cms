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

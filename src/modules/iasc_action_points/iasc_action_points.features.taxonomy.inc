<?php
/**
 * @file
 * iasc_action_points.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function iasc_action_points_taxonomy_default_vocabularies() {
  return array(
    'ap_responsibility' => array(
      'name' => 'Action Point Responsibility',
      'machine_name' => 'ap_responsibility',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}

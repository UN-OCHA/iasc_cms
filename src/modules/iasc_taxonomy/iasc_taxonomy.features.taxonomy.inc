<?php
/**
 * @file
 * iasc_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function iasc_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'authoring_bodies' => array(
      'name' => 'Authoring Bodies',
      'machine_name' => 'authoring_bodies',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'hosts' => array(
      'name' => 'Hosts',
      'machine_name' => 'hosts',
      'description' => 'The name of the organization hosting a meeting.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}

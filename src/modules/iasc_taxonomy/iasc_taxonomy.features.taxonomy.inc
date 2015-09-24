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
    'hosts' => array(
      'name' => 'Organizations',
      'machine_name' => 'hosts',
      'description' => 'The name of the organization hosting a Meeting or associated with a Contact.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}

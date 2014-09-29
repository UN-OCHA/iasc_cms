<?php
/**
 * @file
 * iasc_meeting.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function iasc_meeting_taxonomy_default_vocabularies() {
  return array(
    'meeting_type' => array(
      'name' => 'Meeting Type',
      'machine_name' => 'meeting_type',
      'description' => 'Meeting type',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}

<?php
/**
 * @file
 * iasc_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function iasc_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_view_modes';
  $strongarm->value = array(
    'node' => array(
      'bio_full' => array(
        'label' => 'Bio (full)',
        'custom settings' => 1,
      ),
      'bio_long' => array(
        'label' => 'Bio (long)',
        'custom settings' => 1,
      ),
      'bio_short' => array(
        'label' => 'Bio (short)',
        'custom settings' => 1,
      ),
      'link_only' => array(
        'label' => 'Link Only',
        'custom settings' => 1,
      ),
    ),
  );
  $export['entity_view_modes'] = $strongarm;

  return $export;
}

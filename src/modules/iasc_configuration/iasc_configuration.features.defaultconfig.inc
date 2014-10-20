<?php
/**
 * @file
 * iasc_configuration.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function iasc_configuration_defaultconfig_features() {
  return array(
    'iasc_configuration' => array(
      'panelizer_defaults' => 'panelizer_defaults',
    ),
  );
}

/**
 * Implements hook_defaultconfig_panelizer_defaults().
 */
function iasc_configuration_defaultconfig_panelizer_defaults() {
  $export = array();

  return $export;
}

<?php
/**
 * @file
 * iasc_document.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function iasc_document_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-iasc_products_desc'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'iasc_products_desc',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'iasc' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'iasc',
        'weight' => 0,
      ),
      'oa_radix' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oa_radix',
        'weight' => 0,
      ),
      'radix' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'radix',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-other_products_desc'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'other_products_desc',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'iasc' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'iasc',
        'weight' => 0,
      ),
      'oa_radix' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oa_radix',
        'weight' => 0,
      ),
      'radix' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'radix',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}

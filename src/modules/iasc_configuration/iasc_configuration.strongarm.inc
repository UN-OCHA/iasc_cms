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
      'link_to_document' => array(
        'label' => 'Link to Document',
        'custom settings' => 1,
      ),
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
    ),
  );
  $export['entity_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_accesskey_default';
  $strongarm->value = '';
  $export['menu_attributes_accesskey_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_accesskey_enable';
  $strongarm->value = 0;
  $export['menu_attributes_accesskey_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_class_default';
  $strongarm->value = '';
  $export['menu_attributes_class_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_class_enable';
  $strongarm->value = 1;
  $export['menu_attributes_class_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_id_default';
  $strongarm->value = '';
  $export['menu_attributes_id_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_id_enable';
  $strongarm->value = 0;
  $export['menu_attributes_id_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_name_default';
  $strongarm->value = '';
  $export['menu_attributes_name_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_name_enable';
  $strongarm->value = 0;
  $export['menu_attributes_name_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_rel_default';
  $strongarm->value = '';
  $export['menu_attributes_rel_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_rel_enable';
  $strongarm->value = 0;
  $export['menu_attributes_rel_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_style_default';
  $strongarm->value = '';
  $export['menu_attributes_style_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_style_enable';
  $strongarm->value = 0;
  $export['menu_attributes_style_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_target_default';
  $strongarm->value = '';
  $export['menu_attributes_target_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_target_enable';
  $strongarm->value = 0;
  $export['menu_attributes_target_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_title_default';
  $strongarm->value = '';
  $export['menu_attributes_title_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_title_enable';
  $strongarm->value = 0;
  $export['menu_attributes_title_enable'] = $strongarm;

  return $export;
}

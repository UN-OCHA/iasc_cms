<?php
/**
 * @file
 * iasc_announcements.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function iasc_announcements_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_oa_access|node|announcement|form';
  $field_group->group_name = 'group_oa_access';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'announcement';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Access',
    'weight' => '6',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_oa_section',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-oa-access field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_oa_access|node|announcement|form'] = $field_group;

  return $export;
}

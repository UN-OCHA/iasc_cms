<?php
/**
 * @file
 * iasc_contact.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function iasc_contact_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org_info|node|contact|form';
  $field_group->group_name = 'group_org_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organization Information',
    'weight' => '6',
    'children' => array(
      0 => 'body',
      1 => 'field_branch',
      2 => 'field_department',
      3 => 'field_homepage',
      4 => 'field_position',
      5 => 'field_organisation',
      6 => 'field_membership',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-org-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_org_info|node|contact|form'] = $field_group;

  return $export;
}

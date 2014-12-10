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
  $field_group->identifier = 'group_contact_info|node|contact|bio_full';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'bio_full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_address',
      1 => 'field_branch',
      2 => 'field_department',
      3 => 'field_email',
      4 => 'field_fax',
      5 => 'field_homepage',
      6 => 'field_membership',
      7 => 'field_mobile',
      8 => 'field_organisation',
      9 => 'field_phone',
      10 => 'field_org_address',
      11 => 'field_org_fax',
      12 => 'field_org_phone',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-contact-info field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contact_info|node|contact|bio_full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|contact|bio_long';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'bio_long';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_branch',
      1 => 'field_email',
      2 => 'field_mobile',
      3 => 'field_phone',
      4 => 'field_org_address',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-contact-info field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contact_info|node|contact|bio_long'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|contact|bio_short';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'bio_short';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '8',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => 'Info',
      'instance_settings' => array(
        'classes' => 'group-contact-info',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
      'formatter' => '',
    ),
  );
  $export['group_contact_info|node|contact|bio_short'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_name|node|contact|bio_full';
  $field_group->group_name = 'group_contact_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'bio_full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'name',
        'element' => 'h4',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_contact_name|node|contact|bio_full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_name|node|contact|bio_long';
  $field_group->group_name = 'group_contact_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'bio_long';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name',
    'weight' => '1',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Name',
      'instance_settings' => array(
        'classes' => 'name',
        'element' => 'h4',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_contact_name|node|contact|bio_long'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_name|node|contact|bio_short';
  $field_group->group_name = 'group_contact_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'bio_short';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name',
    'weight' => '5',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Name',
      'instance_settings' => array(
        'classes' => 'name',
        'element' => 'h4',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_contact_name|node|contact|bio_short'] = $field_group;

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
      4 => 'field_organisation',
      5 => 'field_position',
      6 => 'field_org_address',
      7 => 'field_org_phone',
      8 => 'field_org_fax',
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

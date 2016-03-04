<?php
/**
 * @file
 * iasc_meeting.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function iasc_meeting_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_presenters|field_collection_item|field_agenda_items|default';
  $field_group->group_name = 'group_presenters';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_agenda_items';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Presenters',
    'weight' => '2',
    'children' => array(
      0 => 'field_contact',
      1 => 'field_presenter_external',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-presenters field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_presenters|field_collection_item|field_agenda_items|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_primary_location|node|oa_event|form';
  $field_group->group_name = 'group_primary_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'oa_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Primary Location',
    'weight' => '3',
    'children' => array(
      0 => 'field_oa_date',
      1 => 'field_city',
      2 => 'field_room',
      3 => 'field_venue',
      4 => 'field_dial_in_meeting',
      5 => 'field_primary_geofield',
      6 => 'field_primary_timezone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-primary-location field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_primary_location|node|oa_event|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Presenters');
  t('Primary Location');

  return $field_groups;
}

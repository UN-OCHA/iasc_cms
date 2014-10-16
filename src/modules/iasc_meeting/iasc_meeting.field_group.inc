<?php
/**
 * @file
 * iasc_meeting.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function iasc_meeting_field_group_info() {
  $export = array();

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
  $export['group_presenters|field_collection_item|field_agenda_items|default'] = $field_group;

  return $export;
}
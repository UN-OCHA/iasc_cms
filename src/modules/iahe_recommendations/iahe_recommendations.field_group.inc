<?php
/**
 * @file
 * iahe_recommendations.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function iahe_recommendations_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_iahe_database|node|oa_worktracker_task|form';
  $field_group->group_name = 'group_iahe_database';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'oa_worktracker_task';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'IAHE Database',
    'weight' => '5',
    'children' => array(
      0 => 'field_date',
      1 => 'field_description_implementation',
      2 => 'field_recomendation',
      3 => 'field_worktracker_country',
      4 => 'field_summary_of_recommendat',
      5 => 'field_evaluation_title',
      6 => 'field_timeframe',
      7 => 'field_addressee',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-iahe-database field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_iahe_database|node|oa_worktracker_task|form'] = $field_group;

  return $export;
}

<?php
/**
 * @file
 * iasc_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iasc_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function iasc_configuration_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info_alter().
 */
function iasc_configuration_node_info_alter(&$data) {
  if (isset($data['oa_space'])) {
    $data['oa_space']['title_label'] = 'Full Name'; /* WAS: 'Title' */
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function iasc_configuration_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:oa_section:calendar_section'])) {
    $data['node:oa_section:calendar_section']->display->content['new-5241f5c7-9e10-4e79-a1ce-84f68ad200f3']->position = 0; /* WAS: 1 */
    $data['node:oa_section:calendar_section']->display->content['new-c5f294ed-58bb-4218-8dc6-ef07c0b83628'] = (object) array(
          'pid' => 'new-c5f294ed-58bb-4218-8dc6-ef07c0b83628',
          'panel' => 'contentmain',
          'type' => 'views_panes',
          'subtype' => 'oa_fullcalendar-oa_calendar_month',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'exposed' => array(
              'og_group_ref_target_id' => '',
              'og_group_ref_target_id_mine' => 0,
              'og_subspaces_view_all' => 0,
              'og_subspaces_view_parent' => 0,
              'oa_section_ref_target_id' => '',
              'flagged' => 0,
            ),
            'include_attachments' => 1,
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => 'c5f294ed-58bb-4218-8dc6-ef07c0b83628',
        ); /* WAS: '' */
    $data['node:oa_section:calendar_section']->display->content['new-f7576cce-3df6-4498-89b5-77da59c5f99c']->position = 1; /* WAS: 2 */
    $data['node:oa_section:calendar_section']->display->panels['contentmain'][0] = 'new-c5f294ed-58bb-4218-8dc6-ef07c0b83628'; /* WAS: 'new-39b87a40-e27c-45b0-8bdf-6a9c3f117695' */
    $data['node:oa_section:calendar_section']->display->panels['sidebar'][0] = 'new-5241f5c7-9e10-4e79-a1ce-84f68ad200f3'; /* WAS: 'new-81942150-4ee9-4396-8371-b94f72b18f6a' */
    $data['node:oa_section:calendar_section']->display->panels['sidebar'][1] = 'new-f7576cce-3df6-4498-89b5-77da59c5f99c'; /* WAS: 'new-5241f5c7-9e10-4e79-a1ce-84f68ad200f3' */
    unset($data['node:oa_section:calendar_section']->display->content['new-39b87a40-e27c-45b0-8bdf-6a9c3f117695']);
    unset($data['node:oa_section:calendar_section']->display->content['new-81942150-4ee9-4396-8371-b94f72b18f6a']);
    unset($data['node:oa_section:calendar_section']->display->panels['sidebar'][2]);
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function iasc_configuration_views_default_views_alter(&$data) {
  if (isset($data['oa_fullcalendar'])) {
    $data['oa_fullcalendar']->display['default']->display_options['filters']['field_city_value'] = array(
      'id' => 'field_city_value',
      'table' => 'field_data_field_city',
      'field' => 'field_city_value',
      'operator' => 'word',
      'group' => 1,
      'exposed' => TRUE,
      'expose' => array(
        'operator_id' => 'field_city_value_op',
        'label' => 'City',
        'operator' => 'field_city_value_op',
        'identifier' => 'field_city_value',
        'remember_roles' => array(
          2 => 2,
          1 => 0,
          3 => 0,
          4 => 0,
        ),
        'autocomplete_raw_suggestion' => 1,
        'autocomplete_raw_dropdown' => 1,
        'autocomplete_dependent' => 0,
      ),
    ); /* WAS: '' */
    $data['oa_fullcalendar']->display['default']->display_options['filters']['field_oa_date_value'] = array(
      'id' => 'field_oa_date_value',
      'table' => 'field_data_field_oa_date',
      'field' => 'field_oa_date_value',
      'ui_name' => 'Start from Date range',
      'operator' => '>=',
      'group' => 1,
      'exposed' => TRUE,
      'expose' => array(
        'operator_id' => 'field_oa_date_value_op',
        'label' => 'Date Range',
        'operator' => 'field_oa_date_value_op',
        'identifier' => 'field_oa_date_value',
        'remember_roles' => array(
          2 => 2,
          1 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'form_type' => 'date_popup',
    ); /* WAS: '' */
    $data['oa_fullcalendar']->display['default']->display_options['filters']['field_oa_date_value_1'] = array(
      'id' => 'field_oa_date_value_1',
      'table' => 'field_data_field_oa_date',
      'field' => 'field_oa_date_value',
      'ui_name' => 'End Date Range',
      'operator' => '<=',
      'group' => 1,
      'exposed' => TRUE,
      'expose' => array(
        'operator_id' => 'field_oa_date_value_1_op',
        'operator' => 'field_oa_date_value_1_op',
        'identifier' => 'field_oa_date_value_1',
        'remember_roles' => array(
          2 => 2,
          1 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'form_type' => 'date_popup',
    ); /* WAS: '' */
    $data['oa_fullcalendar']->display['default']->display_options['filters']['flagged']['group'] = 1; /* WAS: '' */
    $data['oa_fullcalendar']->display['default']->display_options['filters']['keys'] = array(
      'id' => 'keys',
      'table' => 'search_index',
      'field' => 'keys',
      'group' => 1,
      'exposed' => TRUE,
      'expose' => array(
        'operator_id' => 'keys_op',
        'label' => 'Search',
        'operator' => 'keys_op',
        'identifier' => 'keys',
        'remember_roles' => array(
          2 => 2,
          1 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
    ); /* WAS: '' */
    $data['oa_fullcalendar']->display['default']->display_options['filters']['oa_section_ref_target_id']['group'] = 1; /* WAS: '' */
    $data['oa_fullcalendar']->display['default']->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Group'; /* WAS: 'Space' */
    $data['oa_fullcalendar']->display['default']->display_options['filters']['og_group_ref_target_id']['group'] = 1; /* WAS: '' */
    $data['oa_fullcalendar']->display['default']->display_options['filters']['type']['group'] = 1; /* WAS: '' */
    $data['oa_fullcalendar']->display['default']->display_options['sorts']['field_oa_date_value'] = array(
      'id' => 'field_oa_date_value',
      'table' => 'field_data_field_oa_date',
      'field' => 'field_oa_date_value',
      'order' => 'DESC',
    ); /* WAS: '' */
    $data['oa_fullcalendar']->display['oa_calendar_day']->display_options['exposed_form_overrides']['filters']['field_city_value'] = 'exposed'; /* WAS: '' */
    $data['oa_fullcalendar']->display['oa_calendar_day']->display_options['exposed_form_overrides']['filters']['field_oa_date_value'] = 'exposed'; /* WAS: '' */
    $data['oa_fullcalendar']->display['oa_calendar_day']->display_options['exposed_form_overrides']['filters']['field_oa_date_value_1'] = 'exposed'; /* WAS: '' */
    $data['oa_fullcalendar']->display['oa_calendar_day']->display_options['exposed_form_overrides']['filters']['keys'] = 'exposed'; /* WAS: '' */
    $data['oa_fullcalendar']->display['oa_calendar_month']->display_options['exposed_form_overrides']['filters']['field_city_value'] = 'exposed'; /* WAS: '' */
    $data['oa_fullcalendar']->display['oa_calendar_month']->display_options['exposed_form_overrides']['filters']['field_oa_date_value'] = 'exposed'; /* WAS: '' */
    $data['oa_fullcalendar']->display['oa_calendar_month']->display_options['exposed_form_overrides']['filters']['field_oa_date_value_1'] = 'exposed'; /* WAS: '' */
    $data['oa_fullcalendar']->display['oa_calendar_month']->display_options['exposed_form_overrides']['filters']['keys'] = 'exposed'; /* WAS: '' */
    $data['oa_fullcalendar']->display['oa_calendar_week']->display_options['exposed_form_overrides']['filters']['field_city_value'] = 'exposed'; /* WAS: '' */
    $data['oa_fullcalendar']->display['oa_calendar_week']->display_options['exposed_form_overrides']['filters']['field_oa_date_value'] = 'exposed'; /* WAS: '' */
    $data['oa_fullcalendar']->display['oa_calendar_week']->display_options['exposed_form_overrides']['filters']['field_oa_date_value_1'] = 'exposed'; /* WAS: '' */
    $data['oa_fullcalendar']->display['oa_calendar_week']->display_options['exposed_form_overrides']['filters']['keys'] = 'exposed'; /* WAS: '' */
    $data['oa_fullcalendar']->display['page_calendar'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:5:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:19:"display_description";s:31:"A chronological list of events.";s:8:"defaults";a:3:{s:13:"relationships";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:7:"filters";a:2:{s:6:"status";a:6:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;s:6:"expose";a:1:{s:8:"operator";b:0;}}s:4:"type";a:5:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:8:"oa_event";s:8:"oa_event";}s:5:"group";i:1;}}s:4:"path";s:8:"calendar";}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:13:"page_calendar";s:13:"display_title";s:13:"Calendar Page";s:14:"display_plugin";s:4:"page";s:8:"position";i:0;}'); /* WAS: '' */
    unset($data['oa_fullcalendar']->display['default']->display_options['sorts']['created']);
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function iasc_configuration_flag_default_flags() {
  $flags = array();
  // Exported flag: "Featured".
  $flags['featured'] = array(
    'content_type' => 'node',
    'title' => 'Featured',
    'global' => 1,
    'types' => array(
      0 => 'oa_wiki_page',
    ),
    'flag_short' => 'Featured',
    'flag_long' => 'Mark as Featured',
    'flag_message' => 'Flagged as Featured!',
    'unflag_short' => 'Remove Featured flag',
    'unflag_long' => 'Remove item from Featured list',
    'unflag_message' => 'Removed Featured flag',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'iasc_configuration',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Show on Homepage".
  $flags['show_on_home'] = array(
    'content_type' => 'node',
    'title' => 'Show on Homepage',
    'global' => 1,
    'types' => array(
      0 => 'announcement',
    ),
    'flag_short' => 'Show on Homepage',
    'flag_long' => 'Mark to promote the content to the homepage.',
    'flag_message' => 'Marked to display on Home!',
    'unflag_short' => 'Remove display on homepage.',
    'unflag_long' => 'Unmark to remove the content from the homepage.',
    'unflag_message' => 'Removed from Home!',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 3,
      ),
      'unflag' => array(
        0 => 3,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'iasc_configuration',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Special".
  $flags['special'] = array(
    'content_type' => 'node',
    'title' => 'Special',
    'global' => 1,
    'types' => array(
      0 => 'announcement',
    ),
    'flag_short' => 'Special',
    'flag_long' => 'Mark as Special',
    'flag_message' => 'Flagged as Special!',
    'unflag_short' => 'Remove Special',
    'unflag_long' => 'Unmark as Special',
    'unflag_message' => 'Removed Special flag!',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 3,
      ),
      'unflag' => array(
        0 => 3,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'iasc_configuration',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}

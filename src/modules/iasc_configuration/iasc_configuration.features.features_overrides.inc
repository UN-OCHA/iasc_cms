<?php
/**
 * @file
 * iasc_configuration.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function iasc_configuration_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: node
  $overrides["node.oa_space.title_label"] = 'Full Name';

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|content|new-39b87a40-e27c-45b0-8bdf-6a9c3f117695"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|content|new-5241f5c7-9e10-4e79-a1ce-84f68ad200f3|position"] = 0;
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|content|new-72532a34-7123-45bb-88ef-b02e101c1bd4"] = (object) array(
      'pid' => 'new-72532a34-7123-45bb-88ef-b02e101c1bd4',
      'panel' => 'contentmain',
      'type' => 'views_panes',
      'subtype' => 'oa_event_list-panel_pane_upcoming_meetings',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'exposed' => array(
          'filter-field_oa_date_value' => array(
            'expose_to_visitor' => 1,
          ),
          'field_oa_date_value' => array(
            'value' => '2014-10-01',
          ),
          'filter-field_oa_date_value2' => array(
            'expose_to_visitor' => 1,
          ),
          'field_oa_date_value2' => array(
            'value' => NULL,
          ),
          'filter-field_city_value' => array(
            'expose_to_visitor' => 1,
          ),
          'field_city_value' => '',
          'og_group_ref_target_id' => '',
          'og_group_ref_target_id_mine' => 0,
          'og_subspaces_view_all' => 1,
          'og_subspaces_view_parent' => 0,
          'oa_section_ref_target_id' => '',
          'filter-keys' => array(
            'expose_to_visitor' => 1,
          ),
          'keys' => '',
        ),
        'items_per_page' => 10,
        'override_title' => '',
        'override_title_text' => '',
        'view_mode' => 'teaser',
        'widget_title' => 'Upcoming Meetings',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '72532a34-7123-45bb-88ef-b02e101c1bd4',
    );
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|content|new-81942150-4ee9-4396-8371-b94f72b18f6a"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|content|new-9ea94d4c-567b-404f-9aec-386ae14a1aea"] = (object) array(
      'pid' => 'new-9ea94d4c-567b-404f-9aec-386ae14a1aea',
      'panel' => 'contentmain',
      'type' => 'iasc_meeting.add_meeting',
      'subtype' => 'iasc_meeting.add_meeting',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => '9ea94d4c-567b-404f-9aec-386ae14a1aea',
    );
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|content|new-f7576cce-3df6-4498-89b5-77da59c5f99c"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|panels|contentmain|0"] = 'new-72532a34-7123-45bb-88ef-b02e101c1bd4';
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|panels|contentmain|1"] = 'new-9ea94d4c-567b-404f-9aec-386ae14a1aea';
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|panels|sidebar|0"] = 'new-5241f5c7-9e10-4e79-a1ce-84f68ad200f3';
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|panels|sidebar|1"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|panels|sidebar|2"]["DELETED"] = TRUE;


  // Exported overrides for: panels_mini
  $overrides["panels_mini.default_section_sidebar.display|content|new-e88f722e-09b5-451c-b694-f6b79c2d8554|style|settings|secondary_options"] = 'panel-primary';
  $overrides["panels_mini.default_section_sidebar.display|content|new-e88f722e-09b5-451c-b694-f6b79c2d8554|style|style"] = 'secondary';

  // Exported overrides for: views_view
  $overrides["views_view.oa_fullcalendar.display|default|display_options|filters|field_city_value"] = array(
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
  );
  $overrides["views_view.oa_fullcalendar.display|default|display_options|filters|field_oa_date_value"] = array(
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
  );
  $overrides["views_view.oa_fullcalendar.display|default|display_options|filters|field_oa_date_value_1"] = array(
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
  );
  $overrides["views_view.oa_fullcalendar.display|default|display_options|filters|flagged|group"] = 1;
  $overrides["views_view.oa_fullcalendar.display|default|display_options|filters|keys"] = array(
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
  );
  $overrides["views_view.oa_fullcalendar.display|default|display_options|filters|oa_section_ref_target_id|group"] = 1;
  $overrides["views_view.oa_fullcalendar.display|default|display_options|filters|og_group_ref_target_id|expose|label"] = 'Group';
  $overrides["views_view.oa_fullcalendar.display|default|display_options|filters|og_group_ref_target_id|group"] = 1;
  $overrides["views_view.oa_fullcalendar.display|default|display_options|filters|type|group"] = 1;
  $overrides["views_view.oa_fullcalendar.display|default|display_options|sorts|created"]["DELETED"] = TRUE;
  $overrides["views_view.oa_fullcalendar.display|default|display_options|sorts|field_oa_date_value"] = array(
    'id' => 'field_oa_date_value',
    'table' => 'field_data_field_oa_date',
    'field' => 'field_oa_date_value',
    'order' => 'DESC',
  );
  $overrides["views_view.oa_fullcalendar.display|oa_calendar_day|display_options|exposed_form_overrides|filters|field_city_value"] = 'exposed';
  $overrides["views_view.oa_fullcalendar.display|oa_calendar_day|display_options|exposed_form_overrides|filters|field_oa_date_value"] = 'exposed';
  $overrides["views_view.oa_fullcalendar.display|oa_calendar_day|display_options|exposed_form_overrides|filters|field_oa_date_value_1"] = 'exposed';
  $overrides["views_view.oa_fullcalendar.display|oa_calendar_day|display_options|exposed_form_overrides|filters|keys"] = 'exposed';
  $overrides["views_view.oa_fullcalendar.display|oa_calendar_month|display_options|exposed_form_overrides|filters|field_city_value"] = 'exposed';
  $overrides["views_view.oa_fullcalendar.display|oa_calendar_month|display_options|exposed_form_overrides|filters|field_oa_date_value"] = 'exposed';
  $overrides["views_view.oa_fullcalendar.display|oa_calendar_month|display_options|exposed_form_overrides|filters|field_oa_date_value_1"] = 'exposed';
  $overrides["views_view.oa_fullcalendar.display|oa_calendar_month|display_options|exposed_form_overrides|filters|keys"] = 'exposed';
  $overrides["views_view.oa_fullcalendar.display|oa_calendar_week|display_options|exposed_form_overrides|filters|field_city_value"] = 'exposed';
  $overrides["views_view.oa_fullcalendar.display|oa_calendar_week|display_options|exposed_form_overrides|filters|field_oa_date_value"] = 'exposed';
  $overrides["views_view.oa_fullcalendar.display|oa_calendar_week|display_options|exposed_form_overrides|filters|field_oa_date_value_1"] = 'exposed';
  $overrides["views_view.oa_fullcalendar.display|oa_calendar_week|display_options|exposed_form_overrides|filters|keys"] = 'exposed';
  $overrides["views_view.oa_fullcalendar.display|page_calendar"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:5:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:19:"display_description";s:31:"A chronological list of events.";s:8:"defaults";a:3:{s:13:"relationships";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:7:"filters";a:2:{s:6:"status";a:6:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;s:6:"expose";a:1:{s:8:"operator";b:0;}}s:4:"type";a:5:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:8:"oa_event";s:8:"oa_event";}s:5:"group";i:1;}}s:4:"path";s:8:"calendar";}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:13:"page_calendar";s:13:"display_title";s:13:"Calendar Page";s:14:"display_plugin";s:4:"page";s:8:"position";i:0;}');

 return $overrides;
}

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

 return $overrides;
}

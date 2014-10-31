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
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|content|new-81942150-4ee9-4396-8371-b94f72b18f6a"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|content|new-c5f294ed-58bb-4218-8dc6-ef07c0b83628"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|content|new-f7576cce-3df6-4498-89b5-77da59c5f99c|position"] = 1;
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|panels|contentmain|0"] = 'new-c5f294ed-58bb-4218-8dc6-ef07c0b83628';
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|panels|sidebar|0"] = 'new-5241f5c7-9e10-4e79-a1ce-84f68ad200f3';
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|panels|sidebar|1"] = 'new-f7576cce-3df6-4498-89b5-77da59c5f99c';
  $overrides["panelizer_defaults.node:oa_section:calendar_section.display|panels|sidebar|2"]["DELETED"] = TRUE;

 return $overrides;
}

<?php
/**
 * @file
 * iahe_recommendations.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function iahe_recommendations_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:oa_section:oa_section_worktracker.display|content|new-083432ea-5fb3-4e40-8c9d-09ed848deab7"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_worktracker.display|content|new-bb4d24a8-400f-4710-8ed8-4617dcb6a89d"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_worktracker.display|content|new-d9d3303b-f59f-4e65-bcd7-67a42b55cdda"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_worktracker.display|content|new-da9053d3-c4a2-4bb4-a0d0-9e66b49efabc"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_worktracker.display|content|new-e0562fa4-45f2-4e30-ab1d-da180812171e"] = (object) array(
      'pid' => 'new-e0562fa4-45f2-4e30-ab1d-da180812171e',
      'panel' => 'contentmain',
      'type' => 'views_panes',
      'subtype' => 'new_task_view-panel_pane_1',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'exposed' => array(
          'field_summary_of_the_recommendat_value' => '',
        ),
        'view_settings' => 'table',
        'header_type' => 'titles',
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
      'uuid' => 'e0562fa4-45f2-4e30-ab1d-da180812171e',
    );
  $overrides["panelizer_defaults.node:oa_section:oa_section_worktracker.display|content|new-f2dfa2bb-79a3-4e2e-89b9-d6d048e6846f"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_worktracker.display|layout"] = 'radix_boxton';
  $overrides["panelizer_defaults.node:oa_section:oa_section_worktracker.display|panels|contentmain|0"] = 'new-e0562fa4-45f2-4e30-ab1d-da180812171e';
  $overrides["panelizer_defaults.node:oa_section:oa_section_worktracker.display|panels|contentmain|1"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_worktracker.display|panels|contentmain|2"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_worktracker.display|panels|contentmain|3"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_worktracker.display|panels|sidebar"]["DELETED"] = TRUE;

 return $overrides;
}
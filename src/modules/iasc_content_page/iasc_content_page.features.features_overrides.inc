<?php
/**
 * @file
 * iasc_content_pages.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function iasc_content_page_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-24b4fd91-7bea-46c2-8e7d-aeb45612a3ea"] = (object) array(
      'pid' => 'new-24b4fd91-7bea-46c2-8e7d-aeb45612a3ea',
      'panel' => 'sidebar',
      'type' => 'panels_mini',
      'subtype' => 'section_sidebar_top',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => array(
          0 => 'panelizer',
        ),
        'override_title' => 0,
        'override_title_text' => 'Security Level',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '24b4fd91-7bea-46c2-8e7d-aeb45612a3ea',
    );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-283f2993-8a04-4655-b53e-b3d0f77715b5"] = (object) array(
      'pid' => 'new-283f2993-8a04-4655-b53e-b3d0f77715b5',
      'panel' => 'contentmain',
      'type' => 'node_title',
      'subtype' => 'node_title',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'link' => 0,
        'markup' => 'h1',
        'id' => '',
        'class' => '',
        'context' => 'panelizer',
        'override_title' => 1,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '283f2993-8a04-4655-b53e-b3d0f77715b5',
    );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1|position"] = 1;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b|position"] = 2;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-f3bf9c22-9b22-41d2-a57e-110951093871"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|layout"] = 'radix_bryant_flipped';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|panels|contentmain|0"] = 'new-283f2993-8a04-4655-b53e-b3d0f77715b5';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|panels|contentmain|1"] = 'new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|panels|contentmain|2"] = 'new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|panels|contentmain|3"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|panels|sidebar|0"] = 'new-24b4fd91-7bea-46c2-8e7d-aeb45612a3ea';

 return $overrides;
}

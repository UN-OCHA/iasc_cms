<?php
/**
 * @file
 * iasc_content_page.features.inc
 */

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function iasc_content_page_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:panopoly_page:default'])) {
    $data['node:panopoly_page:default']->display->content['new-24b4fd91-7bea-46c2-8e7d-aeb45612a3ea'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-283f2993-8a04-4655-b53e-b3d0f77715b5'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1']->position = 1; /* WAS: 0 */
    $data['node:panopoly_page:default']->display->content['new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b']->position = 2; /* WAS: 1 */
    $data['node:panopoly_page:default']->display->layout = 'radix_bryant_flipped'; /* WAS: 'radix_bryant' */
    $data['node:panopoly_page:default']->display->panels['contentmain'][0] = 'new-283f2993-8a04-4655-b53e-b3d0f77715b5'; /* WAS: 'new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1' */
    $data['node:panopoly_page:default']->display->panels['contentmain'][1] = 'new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1'; /* WAS: 'new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b' */
    $data['node:panopoly_page:default']->display->panels['contentmain'][2] = 'new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b'; /* WAS: 'new-f3bf9c22-9b22-41d2-a57e-110951093871' */
    $data['node:panopoly_page:default']->display->panels['sidebar'][0] = 'new-24b4fd91-7bea-46c2-8e7d-aeb45612a3ea'; /* WAS: 'new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1' */
    unset($data['node:panopoly_page:default']->display->content['new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71']);
    unset($data['node:panopoly_page:default']->display->content['new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1']);
    unset($data['node:panopoly_page:default']->display->content['new-f3bf9c22-9b22-41d2-a57e-110951093871']);
    unset($data['node:panopoly_page:default']->display->panels['contentmain'][3]);
  }
}

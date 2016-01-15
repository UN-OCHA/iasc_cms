<?php
/**
 * @file
 * iasc_login.features.inc
 */

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function iasc_login_default_page_manager_handlers_alter(&$data) {
  if (isset($data['pm_existing_pages_user_login_panel_context'])) {
    $data['pm_existing_pages_user_login_panel_context']->conf['display']->content['new-56815e2a-96b1-400d-9b4e-79e775c4900a'] = (object) array(
          'pid' => 'new-56815e2a-96b1-400d-9b4e-79e775c4900a',
          'panel' => 'column1',
          'type' => 'block',
          'subtype' => 'openid_connect-openid_connect_login',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 1,
            'override_title_text' => 'Log In with a Personal Account',
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
          'uuid' => '56815e2a-96b1-400d-9b4e-79e775c4900a',
        ); /* WAS: '' */
    $data['pm_existing_pages_user_login_panel_context']->conf['display']->content['new-bd855a17-48a7-4824-b02b-38a2f1e6bf63'] = (object) array(
          'pid' => 'new-bd855a17-48a7-4824-b02b-38a2f1e6bf63',
          'panel' => 'column2',
          'type' => 'block',
          'subtype' => 'access_code-access_code',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 1,
            'override_title_text' => 'Log In with an Access Code',
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
          'uuid' => 'bd855a17-48a7-4824-b02b-38a2f1e6bf63',
        ); /* WAS: '' */
    $data['pm_existing_pages_user_login_panel_context']->conf['display']->panel_settings['style_settings']['column1'] = NULL; /* WAS: '' */
    $data['pm_existing_pages_user_login_panel_context']->conf['display']->panel_settings['style_settings']['column2'] = NULL; /* WAS: '' */
    $data['pm_existing_pages_user_login_panel_context']->conf['display']->panels['column1'] = array(
      0 => 'new-56815e2a-96b1-400d-9b4e-79e775c4900a',
    ); /* WAS: '' */
    $data['pm_existing_pages_user_login_panel_context']->conf['display']->panels['column2'] = array(
      0 => 'new-bd855a17-48a7-4824-b02b-38a2f1e6bf63',
    ); /* WAS: '' */
    unset($data['pm_existing_pages_user_login_panel_context']->conf['display']->content['new-36405db8-54c5-495c-ba8a-0a5f7ade185a']);
    unset($data['pm_existing_pages_user_login_panel_context']->conf['display']->panels['contentmain']);
  }
}

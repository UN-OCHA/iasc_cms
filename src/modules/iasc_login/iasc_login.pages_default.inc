<?php
/**
 * @file
 * iasc_login.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function iasc_login_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'iasc_user_login';
  $page->task = 'page';
  $page->admin_title = 'User login';
  $page->admin_description = '';
  $page->path = 'user/iasc_login';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_iasc_user_login__panel';
  $handler->task = 'page';
  $handler->subtask = 'iasc_user_login';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'radix_phelan';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'column1' => NULL,
      'column2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fdcc5ec0-dedf-4612-98a6-73db36490e76';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4d915b05-1280-4391-98c6-db9131a910ac';
  $pane->panel = 'column1';
  $pane->type = 'block';
  $pane->subtype = 'openid_connect-openid_connect_login';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Log In with a Personal Account',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4d915b05-1280-4391-98c6-db9131a910ac';
  $display->content['new-4d915b05-1280-4391-98c6-db9131a910ac'] = $pane;
  $display->panels['column1'][0] = 'new-4d915b05-1280-4391-98c6-db9131a910ac';
  $pane = new stdClass();
  $pane->pid = 'new-ab44a549-12f4-42f7-9762-ccb50a10f42c';
  $pane->panel = 'column2';
  $pane->type = 'block';
  $pane->subtype = 'access_code-access_code';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Log In with an Access Code',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ab44a549-12f4-42f7-9762-ccb50a10f42c';
  $display->content['new-ab44a549-12f4-42f7-9762-ccb50a10f42c'] = $pane;
  $display->panels['column2'][0] = 'new-ab44a549-12f4-42f7-9762-ccb50a10f42c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4d915b05-1280-4391-98c6-db9131a910ac';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['iasc_user_login'] = $page;

  return $pages;

}

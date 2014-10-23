<?php
/**
 * @file
 * oa_apachesolr.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function oa_apachesolr_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'search_node_panel_context_apachesolr';
  $handler->task = 'search';
  $handler->subtask = 'node';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Apache Solr',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'brenham_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
    'sidebar' => array(
      'style' => 'oa_styles_well',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'df282994-1e48-4474-809a-eb91e23cd74a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-695c1617-3221-4eb9-9f6e-8d132ece2cf6';
    $pane->panel = 'contentmain';
    $pane->type = 'apachesolr_result';
    $pane->subtype = 'apachesolr_result';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'keys_action' => 'none',
      'keys' => '',
      'keys_required' => 1,
      'filters_action' => 'append',
      'filters' => '!bundle:user',
      'rows' => '10',
      'env_id' => '',
      'sort_action' => 'none',
      'sort' => '',
      'breadcrumb' => 1,
      'title_override' => 0,
      'title_override_text' => '',
      'empty_override' => 0,
      'empty_override_title' => '',
      'empty_override_text' => array(
        'value' => '',
        'format' => 'plain_text',
      ),
      'empty_override_format' => 'plain_text',
      'log' => 0,
      'substitute' => 0,
      'context' => 'argument_string_1',
      'path_type' => 'custom',
      'path' => 'search/node',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '695c1617-3221-4eb9-9f6e-8d132ece2cf6';
    $display->content['new-695c1617-3221-4eb9-9f6e-8d132ece2cf6'] = $pane;
    $display->panels['contentmain'][0] = 'new-695c1617-3221-4eb9-9f6e-8d132ece2cf6';
    $pane = new stdClass();
    $pane->pid = 'new-7515ef83-23e2-40e0-8890-04e618fa7b48';
    $pane->panel = 'header';
    $pane->type = 'apachesolr_form';
    $pane->subtype = 'apachesolr_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path_type' => 'custom',
      'path' => 'search/node',
      'override_prompt' => 0,
      'prompt' => 'Search',
      'show_keys' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7515ef83-23e2-40e0-8890-04e618fa7b48';
    $display->content['new-7515ef83-23e2-40e0-8890-04e618fa7b48'] = $pane;
    $display->panels['header'][0] = 'new-7515ef83-23e2-40e0-8890-04e618fa7b48';
    $pane = new stdClass();
    $pane->pid = 'new-4fc47958-90ce-46dd-b187-d9f3eee98de7';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-GiIy4zr9Gu0ZSa0bumw1Y9qIIpIDf1wu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Type',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4fc47958-90ce-46dd-b187-d9f3eee98de7';
    $display->content['new-4fc47958-90ce-46dd-b187-d9f3eee98de7'] = $pane;
    $display->panels['sidebar'][0] = 'new-4fc47958-90ce-46dd-b187-d9f3eee98de7';
    $pane = new stdClass();
    $pane->pid = 'new-f3bdafc7-f1bc-4d50-9522-6c9595542d2d';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-n18E4x0qRRaIP7nV6I0SDYiCJsq77HCB';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Post date',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f3bdafc7-f1bc-4d50-9522-6c9595542d2d';
    $display->content['new-f3bdafc7-f1bc-4d50-9522-6c9595542d2d'] = $pane;
    $display->panels['sidebar'][1] = 'new-f3bdafc7-f1bc-4d50-9522-6c9595542d2d';
    $pane = new stdClass();
    $pane->pid = 'new-eed5638b-f350-4b54-b718-1ad25538945c';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-jT15GyNyHehtSR0AlXu87EG0gh912BRj';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Section',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'eed5638b-f350-4b54-b718-1ad25538945c';
    $display->content['new-eed5638b-f350-4b54-b718-1ad25538945c'] = $pane;
    $display->panels['sidebar'][2] = 'new-eed5638b-f350-4b54-b718-1ad25538945c';
    $pane = new stdClass();
    $pane->pid = 'new-693a6a4c-b829-490a-b985-ef3b1452bc62';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-CpjIe0iO04QY4VGdG5PfZfBQqRWCmc4G';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Space',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '693a6a4c-b829-490a-b985-ef3b1452bc62';
    $display->content['new-693a6a4c-b829-490a-b985-ef3b1452bc62'] = $pane;
    $display->panels['sidebar'][3] = 'new-693a6a4c-b829-490a-b985-ef3b1452bc62';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7515ef83-23e2-40e0-8890-04e618fa7b48';
  $handler->conf['display'] = $display;
  $export['search_node_panel_context_apachesolr'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'search_user_panel_context_apachesolr';
  $handler->task = 'search';
  $handler->subtask = 'user';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Apache Solr',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'brenham_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
    'sidebar' => array(
      'style' => 'oa_styles_well',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c2f69551-2323-402d-90a6-056429c700f2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5ddb023c-f79d-4e01-8e75-e266bc12f24f';
    $pane->panel = 'contentmain';
    $pane->type = 'apachesolr_result';
    $pane->subtype = 'apachesolr_result';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'keys_action' => 'none',
      'keys' => '',
      'keys_required' => 1,
      'filters_action' => 'append',
      'filters' => 'bundle:user',
      'rows' => '10',
      'env_id' => '',
      'sort_action' => 'none',
      'sort' => '',
      'breadcrumb' => 1,
      'title_override' => 0,
      'title_override_text' => '',
      'empty_override' => 0,
      'empty_override_title' => '',
      'empty_override_text' => array(
        'value' => '',
        'format' => 'plain_text',
      ),
      'empty_override_format' => 'plain_text',
      'log' => 0,
      'substitute' => 0,
      'context' => 'argument_string_1',
      'path_type' => 'custom',
      'path' => 'search/user',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5ddb023c-f79d-4e01-8e75-e266bc12f24f';
    $display->content['new-5ddb023c-f79d-4e01-8e75-e266bc12f24f'] = $pane;
    $display->panels['contentmain'][0] = 'new-5ddb023c-f79d-4e01-8e75-e266bc12f24f';
    $pane = new stdClass();
    $pane->pid = 'new-acaa91dd-4f13-4495-9377-984b72357619';
    $pane->panel = 'header';
    $pane->type = 'apachesolr_form';
    $pane->subtype = 'apachesolr_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path_type' => 'custom',
      'path' => 'search/user',
      'override_prompt' => 0,
      'prompt' => '',
      'show_keys' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'acaa91dd-4f13-4495-9377-984b72357619';
    $display->content['new-acaa91dd-4f13-4495-9377-984b72357619'] = $pane;
    $display->panels['header'][0] = 'new-acaa91dd-4f13-4495-9377-984b72357619';
    $pane = new stdClass();
    $pane->pid = 'new-23407cfe-d7c4-44dd-a87b-788189b197bf';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-CpjIe0iO04QY4VGdG5PfZfBQqRWCmc4G';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Group / Space',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '23407cfe-d7c4-44dd-a87b-788189b197bf';
    $display->content['new-23407cfe-d7c4-44dd-a87b-788189b197bf'] = $pane;
    $display->panels['sidebar'][0] = 'new-23407cfe-d7c4-44dd-a87b-788189b197bf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-acaa91dd-4f13-4495-9377-984b72357619';
  $handler->conf['display'] = $display;
  $export['search_user_panel_context_apachesolr'] = $handler;

  return $export;
}

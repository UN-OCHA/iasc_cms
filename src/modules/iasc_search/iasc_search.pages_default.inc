<?php
/**
 * @file
 * iasc_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function iasc_search_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'solr';
  $page->task = 'page';
  $page->admin_title = 'Apache Solr';
  $page->admin_description = '';
  $page->path = 'site/search/!query';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'query' => array(
      'id' => 1,
      'identifier' => 'Search query',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_solr_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'solr';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
    'sidebar' => array(
      'style' => 'oa_styles_well',
    ),
  );
  $display->cache = array();
  $display->title = 'Search';
  $display->uuid = '8bc7d406-dfb5-42c4-b759-049e49701b7a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-67fb30a3-ace4-4a0a-a379-eafcb4ce6946';
    $pane->panel = 'contentmain';
    $pane->type = 'apachesolr_form';
    $pane->subtype = 'apachesolr_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path_type' => 'same',
      'path' => '',
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
    $pane->locks = '';
    $pane->uuid = '67fb30a3-ace4-4a0a-a379-eafcb4ce6946';
    $display->content['new-67fb30a3-ace4-4a0a-a379-eafcb4ce6946'] = $pane;
    $display->panels['contentmain'][0] = 'new-67fb30a3-ace4-4a0a-a379-eafcb4ce6946';
    $pane = new stdClass();
    $pane->pid = 'new-fa1bdd9f-29db-4eec-93e0-9513bed113be';
    $pane->panel = 'contentmain';
    $pane->type = 'block';
    $pane->subtype = 'iasc_search-search_results_login_cta';
    $pane->shown = TRUE;
    $pane->access = array(
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
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fa1bdd9f-29db-4eec-93e0-9513bed113be';
    $display->content['new-fa1bdd9f-29db-4eec-93e0-9513bed113be'] = $pane;
    $display->panels['contentmain'][1] = 'new-fa1bdd9f-29db-4eec-93e0-9513bed113be';
    $pane = new stdClass();
    $pane->pid = 'new-15c4fdb7-8600-4bf7-a414-2ecea16a27f4';
    $pane->panel = 'contentmain';
    $pane->type = 'apachesolr_info';
    $pane->subtype = 'apachesolr_info';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '15c4fdb7-8600-4bf7-a414-2ecea16a27f4';
    $display->content['new-15c4fdb7-8600-4bf7-a414-2ecea16a27f4'] = $pane;
    $display->panels['contentmain'][2] = 'new-15c4fdb7-8600-4bf7-a414-2ecea16a27f4';
    $pane = new stdClass();
    $pane->pid = 'new-5f9beaf3-4d74-4180-861f-74dba8b68bb3';
    $pane->panel = 'contentmain';
    $pane->type = 'apachesolr_result';
    $pane->subtype = 'apachesolr_result';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'keys_action' => 'none',
      'keys' => '',
      'keys_required' => 1,
      'filters_action' => 'none',
      'filters' => '',
      'sort_action' => 'none',
      'sort' => '',
      'breadcrumb' => 1,
      'title_override' => 1,
      'title_override_text' => '',
      'empty_override' => 0,
      'empty_override_title' => '',
      'empty_override_text' => array(
        'value' => '',
        'format' => 'iasc_wysiwyg',
      ),
      'empty_override_format' => 'iasc_wysiwyg',
      'log' => 0,
      'substitute' => 0,
      'context' => 'argument_string_1',
      'path_type' => 'same',
      'path' => '',
      'rows' => 10,
      'env_id' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $pane->uuid = '5f9beaf3-4d74-4180-861f-74dba8b68bb3';
    $display->content['new-5f9beaf3-4d74-4180-861f-74dba8b68bb3'] = $pane;
    $display->panels['contentmain'][3] = 'new-5f9beaf3-4d74-4180-861f-74dba8b68bb3';
    $pane = new stdClass();
    $pane->pid = 'new-72cdea83-3c01-4303-b673-94a262575c1b';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-4Vz370gMmnKGJCiukSHNt0D4hRqaxLYs';
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
    $pane->uuid = '72cdea83-3c01-4303-b673-94a262575c1b';
    $display->content['new-72cdea83-3c01-4303-b673-94a262575c1b'] = $pane;
    $display->panels['sidebar'][0] = 'new-72cdea83-3c01-4303-b673-94a262575c1b';
    $pane = new stdClass();
    $pane->pid = 'new-4ce45dac-e6a1-4272-8064-dba41ddb3643';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-av0IuBb1jDL8cMnUTjccJUC7FPxIlak6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Authoring Bodies',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4ce45dac-e6a1-4272-8064-dba41ddb3643';
    $display->content['new-4ce45dac-e6a1-4272-8064-dba41ddb3643'] = $pane;
    $display->panels['sidebar'][1] = 'new-4ce45dac-e6a1-4272-8064-dba41ddb3643';
    $pane = new stdClass();
    $pane->pid = 'new-bcfb58dc-9c68-449b-aa2b-e500babec91f';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-SeT1d5d1P5hQuGTewaUX6o656F6FYxDr';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Document Type',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'bcfb58dc-9c68-449b-aa2b-e500babec91f';
    $display->content['new-bcfb58dc-9c68-449b-aa2b-e500babec91f'] = $pane;
    $display->panels['sidebar'][2] = 'new-bcfb58dc-9c68-449b-aa2b-e500babec91f';
    $pane = new stdClass();
    $pane->pid = 'new-3d089d05-a198-4bfa-b389-dcadcb332975';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-7vVT5ZdRaPCxJhNt6RD1oLxLY6VbVocP';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Product Category',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3d089d05-a198-4bfa-b389-dcadcb332975';
    $display->content['new-3d089d05-a198-4bfa-b389-dcadcb332975'] = $pane;
    $display->panels['sidebar'][3] = 'new-3d089d05-a198-4bfa-b389-dcadcb332975';
    $pane = new stdClass();
    $pane->pid = 'new-088d4ef7-8d07-44f2-8df7-1817f5ea3d99';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Y1t40rsjat1a4m99ecaycHGxy5tjizUf';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Published Date',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '088d4ef7-8d07-44f2-8df7-1817f5ea3d99';
    $display->content['new-088d4ef7-8d07-44f2-8df7-1817f5ea3d99'] = $pane;
    $display->panels['sidebar'][4] = 'new-088d4ef7-8d07-44f2-8df7-1817f5ea3d99';
    $pane = new stdClass();
    $pane->pid = 'new-211cc328-5670-4f7d-b4e1-3fba83285ad1';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-OSNwUl67P1Su1yrShSvfsUIV2ygrQenu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Meeting Date',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '211cc328-5670-4f7d-b4e1-3fba83285ad1';
    $display->content['new-211cc328-5670-4f7d-b4e1-3fba83285ad1'] = $pane;
    $display->panels['sidebar'][5] = 'new-211cc328-5670-4f7d-b4e1-3fba83285ad1';
    $pane = new stdClass();
    $pane->pid = 'new-28d8222a-2abf-4dc7-bc3b-e9683e21820c';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-97jErKjIikKwQSNIU1xC1rW0AnV0EYam';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Meeting Hosts',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '28d8222a-2abf-4dc7-bc3b-e9683e21820c';
    $display->content['new-28d8222a-2abf-4dc7-bc3b-e9683e21820c'] = $pane;
    $display->panels['sidebar'][6] = 'new-28d8222a-2abf-4dc7-bc3b-e9683e21820c';
    $pane = new stdClass();
    $pane->pid = 'new-a14994f1-77f6-497f-9f47-dca0d864eccf';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-GiIy4zr9Gu0ZSa0bumw1Y9qIIpIDf1wu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_string_1',
      'override_title' => 1,
      'override_title_text' => 'Type',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'a14994f1-77f6-497f-9f47-dca0d864eccf';
    $display->content['new-a14994f1-77f6-497f-9f47-dca0d864eccf'] = $pane;
    $display->panels['sidebar'][7] = 'new-a14994f1-77f6-497f-9f47-dca0d864eccf';
    $pane = new stdClass();
    $pane->pid = 'new-c5e5f19c-b94c-49c9-b8f4-796ceb329322';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-CpjIe0iO04QY4VGdG5PfZfBQqRWCmc4G';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_string_1',
      'override_title' => 1,
      'override_title_text' => 'Authoring Body',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'c5e5f19c-b94c-49c9-b8f4-796ceb329322';
    $display->content['new-c5e5f19c-b94c-49c9-b8f4-796ceb329322'] = $pane;
    $display->panels['sidebar'][8] = 'new-c5e5f19c-b94c-49c9-b8f4-796ceb329322';
    $pane = new stdClass();
    $pane->pid = 'new-4605280c-7f2f-4d0a-9144-26909420366e';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-rdivo01SKN5F1E4FueqZJl3JRX19bxQ4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_string_1',
      'override_title' => 1,
      'override_title_text' => 'Document Type',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '4605280c-7f2f-4d0a-9144-26909420366e';
    $display->content['new-4605280c-7f2f-4d0a-9144-26909420366e'] = $pane;
    $display->panels['sidebar'][9] = 'new-4605280c-7f2f-4d0a-9144-26909420366e';
    $pane = new stdClass();
    $pane->pid = 'new-0f93bd12-fc1d-446b-a4d7-980b7e630199';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-4Zh0ggJMBgeeYbrLPJCe8EML3A6PLE0J';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_string_1',
      'override_title' => 1,
      'override_title_text' => 'Product Category',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '0f93bd12-fc1d-446b-a4d7-980b7e630199';
    $display->content['new-0f93bd12-fc1d-446b-a4d7-980b7e630199'] = $pane;
    $display->panels['sidebar'][10] = 'new-0f93bd12-fc1d-446b-a4d7-980b7e630199';
    $pane = new stdClass();
    $pane->pid = 'new-7cc044f2-a794-4c40-9749-f7f3acb4ad94';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-4tlFBXQsusEWPvDYbaIuku11CSsa9PaJ';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_string_1',
      'override_title' => 1,
      'override_title_text' => 'Published Date',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '7cc044f2-a794-4c40-9749-f7f3acb4ad94';
    $display->content['new-7cc044f2-a794-4c40-9749-f7f3acb4ad94'] = $pane;
    $display->panels['sidebar'][11] = 'new-7cc044f2-a794-4c40-9749-f7f3acb4ad94';
    $pane = new stdClass();
    $pane->pid = 'new-895dabdf-656b-4daf-8931-3d982bd83865';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Twu0IoflQ0tCVFvfi2LFrGPGO28QTKg2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_string_1',
      'override_title' => 1,
      'override_title_text' => 'Meeting Date',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '895dabdf-656b-4daf-8931-3d982bd83865';
    $display->content['new-895dabdf-656b-4daf-8931-3d982bd83865'] = $pane;
    $display->panels['sidebar'][12] = 'new-895dabdf-656b-4daf-8931-3d982bd83865';
    $pane = new stdClass();
    $pane->pid = 'new-e9447f70-b338-41c1-a8a3-3ad5baa9b420';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-CoAiUJ4oF1m1W4ZI3N00oQL1yBDDz2zJ';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_string_1',
      'override_title' => 1,
      'override_title_text' => 'Meeting Hosts',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = 'e9447f70-b338-41c1-a8a3-3ad5baa9b420';
    $display->content['new-e9447f70-b338-41c1-a8a3-3ad5baa9b420'] = $pane;
    $display->panels['sidebar'][13] = 'new-e9447f70-b338-41c1-a8a3-3ad5baa9b420';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-67fb30a3-ace4-4a0a-a379-eafcb4ce6946';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['solr'] = $page;

  return $pages;

}

<?php
/**
 * @file
 * iasc_document.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function iasc_document_field_default_field_instances_alter(&$data) {
  if (isset($data['node-oa_wiki_page-body'])) {
    $data['node-oa_wiki_page-body']['comment_alter'] = 0; /* WAS: '' */
    $data['node-oa_wiki_page-body']['description'] = 'Enter a description of the product.'; /* WAS: 'Enter the content of the document or wiki here.' */
    $data['node-oa_wiki_page-body']['label'] = 'Description'; /* WAS: 'Body' */
    $data['node-oa_wiki_page-body']['widget']['weight'] = 4; /* WAS: 3 */
  }
  if (isset($data['node-oa_wiki_page-field_oa_media'])) {
    $data['node-oa_wiki_page-field_oa_media']['widget']['weight'] = 7; /* WAS: 6 */
  }
  if (isset($data['node-oa_wiki_page-og_vocabulary'])) {
    $data['node-oa_wiki_page-og_vocabulary']['widget']['weight'] = 8; /* WAS: 7 */
  }
}

/**
 * Implements hook_node_info_alter().
 */
function iasc_document_node_info_alter(&$data) {
  if (isset($data['oa_wiki_page'])) {
    $data['oa_wiki_page']['description'] = 'A Document or Product page.'; /* WAS: 'An Open Atrium Document/Wiki page' */
    $data['oa_wiki_page']['name'] = 'Document/Product'; /* WAS: 'Document Page' */
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function iasc_document_default_page_manager_handlers_alter(&$data) {
  if (isset($data['node_edit_panel_context_6'])) {
    $data['node_edit_panel_context_6']->conf['display']->content['new-2362dc2f-60f2-42e4-b13f-82918fd4b1a8']->position = 2; /* WAS: 3 */
    $data['node_edit_panel_context_6']->conf['display']->content['new-250cd2f8-caf7-437c-9177-3babe6738d57']->position = 5; /* WAS: 6 */
    $data['node_edit_panel_context_6']->conf['display']->content['new-3e512c5d-c078-4846-80be-8af3e1542958']->position = 1; /* WAS: 2 */
    $data['node_edit_panel_context_6']->conf['display']->content['new-9393082c-61cd-4cc5-801f-bfe809fcbd43']->access['plugins'] = array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer content types',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ); /* WAS: '' */
    $data['node_edit_panel_context_6']->conf['display']->content['new-9393082c-61cd-4cc5-801f-bfe809fcbd43']->position = 4; /* WAS: 5 */
    $data['node_edit_panel_context_6']->conf['display']->content['new-ff7df286-18fd-4ab0-bd53-1102821bc86f']->position = 3; /* WAS: 4 */
    $data['node_edit_panel_context_6']->conf['display']->panels['sidebar'][1] = 'new-3e512c5d-c078-4846-80be-8af3e1542958'; /* WAS: 'new-316932d4-d342-45ef-8ddd-3aee5f75adc2' */
    $data['node_edit_panel_context_6']->conf['display']->panels['sidebar'][2] = 'new-2362dc2f-60f2-42e4-b13f-82918fd4b1a8'; /* WAS: 'new-3e512c5d-c078-4846-80be-8af3e1542958' */
    $data['node_edit_panel_context_6']->conf['display']->panels['sidebar'][3] = 'new-ff7df286-18fd-4ab0-bd53-1102821bc86f'; /* WAS: 'new-2362dc2f-60f2-42e4-b13f-82918fd4b1a8' */
    $data['node_edit_panel_context_6']->conf['display']->panels['sidebar'][4] = 'new-9393082c-61cd-4cc5-801f-bfe809fcbd43'; /* WAS: 'new-ff7df286-18fd-4ab0-bd53-1102821bc86f' */
    $data['node_edit_panel_context_6']->conf['display']->panels['sidebar'][5] = 'new-250cd2f8-caf7-437c-9177-3babe6738d57'; /* WAS: 'new-9393082c-61cd-4cc5-801f-bfe809fcbd43' */
    unset($data['node_edit_panel_context_6']->conf['display']->content['new-316932d4-d342-45ef-8ddd-3aee5f75adc2']);
    unset($data['node_edit_panel_context_6']->conf['display']->panels['sidebar'][6]);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function iasc_document_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_node__oa_wiki_page'])) {
    $data['field_bundle_settings_node__oa_wiki_page']->value['extra_fields']['form']['path']['weight'] = 1; /* WAS: 2 */
  }
}
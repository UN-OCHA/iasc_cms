<?php
/**
 * @file
 * iasc_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iasc_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_apachesolr_environments_alter().
 */
function iasc_search_apachesolr_environments_alter(&$data) {
  if (isset($data['solr'])) {
    $data['solr']->conf['apachesolr_direct_commit'] = 1; /* WAS: '' */
    $data['solr']->conf['apachesolr_read_only'] = 0; /* WAS: '' */
    $data['solr']->conf['apachesolr_soft_commit'] = 1; /* WAS: '' */
    $data['solr']->index_bundles['node'][0] = 'announcement'; /* WAS: 'oa_discussion_post' */
    $data['solr']->index_bundles['node'][3] = 'oa_space'; /* WAS: 'oa_ical_importer' */
    $data['solr']->index_bundles['node'][4] = 'oa_wiki_page'; /* WAS: 'oa_section' */
    $data['solr']->index_bundles['node'][5] = 'panopoly_page'; /* WAS: 'oa_space' */
    unset($data['solr']->index_bundles['node'][10]);
    unset($data['solr']->index_bundles['node'][6]);
    unset($data['solr']->index_bundles['node'][7]);
    unset($data['solr']->index_bundles['node'][8]);
    unset($data['solr']->index_bundles['node'][9]);
    unset($data['solr']->index_bundles['user']);
  }
}

/**
 * Implements hook_facetapi_default_facet_settings_alter().
 */
function iasc_search_facetapi_default_facet_settings_alter(&$data) {
  if (isset($data['apachesolr@solr:block:created'])) {
    $data['apachesolr@solr:block:created']->enabled = FALSE; /* WAS: TRUE */
  }
  if (isset($data['apachesolr@solr:block:sm_oa_section_ref'])) {
    $data['apachesolr@solr:block:sm_oa_section_ref']->enabled = FALSE; /* WAS: TRUE */
  }
}

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function iasc_search_default_page_manager_pages_alter(&$data) {
  if (isset($data['solr'])) {
    $data['solr']->default_handlers['page_solr_panel_context']->conf['display']->content['new-0f93bd12-fc1d-446b-a4d7-980b7e630199']->shown = TRUE; /* WAS: FALSE */
    $data['solr']->default_handlers['page_solr_panel_context']->conf['display']->content['new-4605280c-7f2f-4d0a-9144-26909420366e']->shown = TRUE; /* WAS: FALSE */
    $data['solr']->default_handlers['page_solr_panel_context']->conf['display']->content['new-7cc044f2-a794-4c40-9749-f7f3acb4ad94']->shown = TRUE; /* WAS: FALSE */
    $data['solr']->default_handlers['page_solr_panel_context']->conf['display']->content['new-895dabdf-656b-4daf-8931-3d982bd83865']->shown = TRUE; /* WAS: FALSE */
    $data['solr']->default_handlers['page_solr_panel_context']->conf['display']->content['new-a14994f1-77f6-497f-9f47-dca0d864eccf']->shown = TRUE; /* WAS: FALSE */
    $data['solr']->default_handlers['page_solr_panel_context']->conf['display']->content['new-c5e5f19c-b94c-49c9-b8f4-796ceb329322']->shown = TRUE; /* WAS: FALSE */
    $data['solr']->default_handlers['page_solr_panel_context']->conf['display']->content['new-e9447f70-b338-41c1-a8a3-3ad5baa9b420']->shown = TRUE; /* WAS: FALSE */
  }
}

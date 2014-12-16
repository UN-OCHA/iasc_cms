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
 * Implements hook_field_default_field_instances_alter().
 */
function iasc_search_field_default_field_instances_alter(&$data) {
  if (isset($data['node-oa_discussion_post-og_group_ref'])) {
    $data['node-oa_discussion_post-og_group_ref']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
}

<?php
/**
 * @file
 * iasc_search.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function iasc_search_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: apachesolr_environment
  $overrides["apachesolr_environment.solr.conf|apachesolr_direct_commit"] = 1;
  $overrides["apachesolr_environment.solr.conf|apachesolr_read_only"] = 0;
  $overrides["apachesolr_environment.solr.conf|apachesolr_soft_commit"] = 1;
  $overrides["apachesolr_environment.solr.index_bundles|node|0"] = 'announcement';
  $overrides["apachesolr_environment.solr.index_bundles|node|10"]["DELETED"] = TRUE;
  $overrides["apachesolr_environment.solr.index_bundles|node|3"] = 'oa_space';
  $overrides["apachesolr_environment.solr.index_bundles|node|4"] = 'oa_wiki_page';
  $overrides["apachesolr_environment.solr.index_bundles|node|5"] = 'panopoly_page';
  $overrides["apachesolr_environment.solr.index_bundles|node|6"]["DELETED"] = TRUE;
  $overrides["apachesolr_environment.solr.index_bundles|node|7"]["DELETED"] = TRUE;
  $overrides["apachesolr_environment.solr.index_bundles|node|8"]["DELETED"] = TRUE;
  $overrides["apachesolr_environment.solr.index_bundles|node|9"]["DELETED"] = TRUE;
  $overrides["apachesolr_environment.solr.index_bundles|user"]["DELETED"] = TRUE;

  // Exported overrides for: facetapi
  $overrides["facetapi.apachesolr@solr:block:created.enabled"] = FALSE;
  $overrides["facetapi.apachesolr@solr:block:sm_oa_section_ref.enabled"] = FALSE;

 return $overrides;
}

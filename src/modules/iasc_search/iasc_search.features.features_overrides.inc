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

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.solr.default_handlers|page_solr_panel_context|conf|display|content|new-0f93bd12-fc1d-446b-a4d7-980b7e630199|shown"] = TRUE;
  $overrides["page_manager_pages.solr.default_handlers|page_solr_panel_context|conf|display|content|new-4605280c-7f2f-4d0a-9144-26909420366e|shown"] = TRUE;
  $overrides["page_manager_pages.solr.default_handlers|page_solr_panel_context|conf|display|content|new-7cc044f2-a794-4c40-9749-f7f3acb4ad94|shown"] = TRUE;
  $overrides["page_manager_pages.solr.default_handlers|page_solr_panel_context|conf|display|content|new-895dabdf-656b-4daf-8931-3d982bd83865|shown"] = TRUE;
  $overrides["page_manager_pages.solr.default_handlers|page_solr_panel_context|conf|display|content|new-a14994f1-77f6-497f-9f47-dca0d864eccf|shown"] = TRUE;
  $overrides["page_manager_pages.solr.default_handlers|page_solr_panel_context|conf|display|content|new-c5e5f19c-b94c-49c9-b8f4-796ceb329322|shown"] = TRUE;
  $overrides["page_manager_pages.solr.default_handlers|page_solr_panel_context|conf|display|content|new-e9447f70-b338-41c1-a8a3-3ad5baa9b420|shown"] = TRUE;

 return $overrides;
}

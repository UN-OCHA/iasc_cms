core = 7.x
api = 2

; Drupal Core
projects[drupal][type] = core
projects[drupal][version] = 7.34

; *********** PATCHES ************
; Patch for handling inherited profiles
projects[drupal][patch][1356276] = http://drupal.org/files/1356276-make-D7-21.patch

; Patch for fixing node_access across non-required Views relationships
; NOTE: This patch is not fully reviewed/accepted yet, so review the latest status
projects[drupal][patch][1349080] = http://drupal.org/files/d7_move_access_to_join_condition-1349080-89.patch

; Patch for simpletest
projects[drupal][patch][911354] = http://drupal.org/files/911354-drupal-profile-85.patch

; Patch to allow install profile enabling to enable dependencies correctly.
projects[drupal][patch][1093420] = http://drupal.org/files/1093420-22.patch

; Patch to prevent empty titles when menu_check_access called more than once
projects[drupal][patch][1697570] = http://drupal.org/files/drupal-menu_always_load_objects-1697570-5.patch

; Patch to fix sanitization of titles in entity_reference
projects[drupal][patch][1919338] = http://drupal.org/files/issues/options_drupal7-1919338-58.patch

; =====================================
; PANOPOLY
; =====================================
; We are using Drush 6 so Panopoly needs to be on top
; in this make file.

; Someday maybe we can turn this on to just inherit Panopoly
;projects[panopoly][type] = profile
;projects[panopoly][version] = 1.10
; but, Drupal.org does not support recursive profiles
; and also does not support include[]
; so we need to copy the panopoly.make file here

projects[panopoly_core][version] = 1.14
projects[panopoly_core][subdir] = panopoly

projects[panopoly_images][version] = 1.14
projects[panopoly_images][subdir] = panopoly

projects[panopoly_theme][version] = 1.14
projects[panopoly_theme][subdir] = panopoly

projects[panopoly_magic][version] = 1.14
projects[panopoly_magic][subdir] = panopoly

projects[panopoly_widgets][version] = 1.14
projects[panopoly_widgets][subdir] = panopoly

projects[panopoly_admin][version] = 1.14
projects[panopoly_admin][subdir] = panopoly

projects[panopoly_users][version] = 1.14
projects[panopoly_users][subdir] = panopoly

projects[panopoly_pages][version] = 1.14
projects[panopoly_pages][subdir] = panopoly

projects[panopoly_wysiwyg][version] = 1.14
projects[panopoly_wysiwyg][subdir] = panopoly

projects[panopoly_search][version] = 1.14
projects[panopoly_search][subdir] = panopoly

; =====================================
; Open Atrium 2.x
; =====================================
includes[openatrium] = openatrium.make

; =====================================
; PERFORMANCE MODULES
; =====================================
projects[memcache][type] = module
projects[memcache][version] = 1.2
projects[memcache][subdir] = contrib
projects[memcache][download][type] = git

projects[entitycache][type] = module
projects[entitycache][version] = 1.2
projects[entitycache][subdir] = contrib
projects[entitycache][download][type] = git

projects[views_cache_bully][type] = module
projects[views_cache_bully][version] = 3.1
projects[views_cache_bully][subdir] = contrib
projects[views_cache_bully][download][type] = git

projects[XHProf][type] = module
projects[XHProf][version] = 1.0-beta3
projects[XHProf][subdir] = contrib
projects[XHProf][download][type] = git

; =====================================
; Other contrib
; =====================================
projects[fullcalendar][version] = 2.x-dev
projects[fullcalendar][subdir] = contrib
projects[fullcalendar][download][type] = git
projects[fullcalendar][download][branch] = 7.x-2.x
projects[fullcalendar][download][revision] = e416e7
projects[fullcalendar][patch][2044391] = http://drupal.org/files/fullcalendar-legend-entityreference_taxonomy-2044391-1.patch
projects[fullcalendar][patch][2333883] = https://www.drupal.org/files/issues/fullcalendar-update-fullcalendar-download-url-2333883-1.patch

projects[migrate][version] = 2.6-rc1
projects[migrate][subdir] = contrib

projects[xautoload][version] = 5.0
projects[xautoload][subdir] = contrib

projects[colorbox][version] = 2.8
projects[colorbox][subdir] = contrib

; Allows for creation of documents nodes when creating an event node.
projects[references_dialog][version] = 1.0-beta1
projects[references_dialog][subdir] = contrib

projects[styleguide][version] = 1.1
projects[styleguide][subdir] = contrib

projects[radix_layouts][version] = 3.3
projects[radix_layouts][subdir] = contrib

; Supports grouping of fields for Agenda items
projects[field_collection][version] = 1.0-beta7
projects[field_collection][subdir] = contrib

; Supports more standardized addresses.
projects[addressfield][version] = 1.0-beta5
projects[addressfield][subdir] = contrib

projects[entity_view_mode][version] = 1.0-rc1
projects[entity_view_mode][subdir] = contrib

projects[menu_attributes][subdir] = contrib
projects[menu_attributes][version] = 1.0-rc3

; Apache Solr modules
projects[apachesolr][subdir] = contrib
projects[apachesolr][version] = 1.7

projects[apachesolr_autocomplete][subdir] = contrib
projects[apachesolr_autocomplete][version] = 1.3
projects[apachesolr_autocomplete][patch][1444038] = http://drupal.org/files/1444038-custom-page-autocomplete-with-panels-2.patch

projects[apachesolr_panels][subdir] = contrib
projects[apachesolr_panels][version] = 1.1
projects[apachesolr_panels][patch][2241541] = http://drupal.org/files/issues/apachesolr_panels-facet-blocks-2241541.patch

projects[apachesolr_user][type] = module
projects[apachesolr_user][version] = 1.x-dev
projects[apachesolr_user][subdir] = contrib
projects[apachesolr_user][download][type] = git
projects[apachesolr_user][download][branch] = 7.x-1.x
projects[apachesolr_user][download][revision] = cadb26b

projects[apachesolr_attachments][type] = module
projects[apachesolr_attachments][version] = 1.3
projects[apachesolr_attachments][subdir] = contrib

projects[title][type] = module
projects[title][version] = 1.0-alpha7
projects[title][subdir] = contrib

projects[nodequeue][type] = module
projects[nodequeue][version] = 2.0-beta1
projects[nodequeue][subdir] = contrib
projects[nodequeue][patch][1402634] = https://www.drupal.org/files/node-mark-deprecated-1402634-7.patch
projects[nodequeue][patch][2231793] = https://www.drupal.org/files/issues/nodequeue-query_add_tag-2231793-9.patch

projects[date_facets][subdir] = contrib
projects[date_facets][download][type] = git
projects[date_facets][download][branch] = 7.x-1.x
projects[date_facets][download][revision] = 9037608

projects[access_code][type] = module
projects[access_code][version] = 1.1
projects[access_code][subdir] = contrib

projects[og_role_override][type] = module
projects[og_role_override][version] = 2.2
projects[og_role_override][subdir] = contrib

; Views
; Override oa_core.make: 3.8
projects[views][version] = 3.8
projects[views][subdir] = contrib
; patches from Panopoly
projects[views][patch][2037469] = http://drupal.org/files/views-exposed-sorts-2037469-1.patch
; additional patches for OA
projects[views][patch][1979926] = http://drupal.org/files/1979926-views-reset_fetch_data-2.patch
projects[views][patch][1735096] = http://drupal.org/files/1735096-views-mltiple-instance-exposed-form-8.patch
; fixes "Notice: Undefined index: data in views_plugin_cache->restore_headers()"
projects[views][patch][2272439] = https://www.drupal.org/files/issues/views-views-undefined_index_data-2272439-18.patch
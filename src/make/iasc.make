core = 7.x
api = 2

; =====================================
; Drupal Core
; =====================================
includes[core] = includes/drupal-org-core.make

; =====================================
; PANOPOLY
; =====================================
; We are using Drush 6 so Panopoly needs to be on top
; in this make file.

includes[panopoly] = includes/panopoly.make

; =====================================
; Open Atrium 2.x
; =====================================
includes[openatrium] = includes/openatrium.make

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
; Fix theme links fatal error.
projects[references_dialog][patch][2315905] = https://www.drupal.org/files/issues/references_dialog_fix_theme_links-2315905-5.patch.patch

projects[styleguide][version] = 1.1
projects[styleguide][subdir] = contrib

projects[radix_layouts][version] = 3.3
projects[radix_layouts][subdir] = contrib

; Supports grouping of fields for Agenda items
projects[field_collection][version] = 1.0-beta8
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

projects[shield][type] = module
projects[shield][version] = 1.2
projects[shield][subdir] = contrib

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

projects[securelogin][type] = module
projects[securelogin][subdir] = contrib
projects[securelogin][version] = 1.4

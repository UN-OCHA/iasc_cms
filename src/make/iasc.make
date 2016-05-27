core = 7.x
api = 2

; =====================================
; Drupal Core
; =====================================
includes[core] = includes/drupal-org-core.make

; =====================================
; Open Atrium 2.x
; =====================================
includes[openatrium] = includes/openatrium.make

; =====================================
; PERFORMANCE MODULES
; =====================================
projects[memcache][type] = module
projects[memcache][version] = 1.5
projects[memcache][subdir] = iasc_contrib
projects[memcache][download][type] = git

projects[entitycache][type] = module
projects[entitycache][version] = 1.5
projects[entitycache][subdir] = iasc_contrib
projects[entitycache][download][type] = git

projects[views_cache_bully][type] = module
projects[views_cache_bully][version] = 3.1
projects[views_cache_bully][subdir] = iasc_contrib
projects[views_cache_bully][download][type] = git

projects[XHProf][type] = module
projects[XHProf][version] = 1.0-beta3
projects[XHProf][subdir] = iasc_contrib
projects[XHProf][download][type] = git

; =====================================
; Other contrib
; =====================================
projects[xautoload][version] = 5.5
projects[xautoload][subdir] = iasc_contrib

projects[styleguide][version] = 1.1
projects[styleguide][subdir] = iasc_contrib

; Supports grouping of fields for Agenda items
projects[field_collection][version] = 1.0-beta10
projects[field_collection][subdir] = iasc_contrib

; Supports more standardized addresses.
projects[addressfield][version] = 1.2
projects[addressfield][subdir] = iasc_contrib

projects[entity_view_mode][version] = 1.0-rc1
projects[entity_view_mode][subdir] = iasc_contrib

projects[menu_attributes][subdir] = iasc_contrib
projects[menu_attributes][version] = 1.0-rc3

projects[extlink][subdir] = iasc_contrib
projects[extlink][version] = 1.18

; Apache Solr modules
projects[apachesolr][subdir] = iasc_contrib
projects[apachesolr][version] = 1.8

projects[apachesolr_autocomplete][subdir] = iasc_contrib
projects[apachesolr_autocomplete][version] = 1.5

projects[apachesolr_panels][subdir] = iasc_contrib
projects[apachesolr_panels][version] = 1.1
projects[apachesolr_panels][patch][2241541] = http://drupal.org/files/issues/apachesolr_panels-facet-blocks-2241541.patch

projects[apachesolr_user][type] = module
projects[apachesolr_user][version] = 1.x-dev
projects[apachesolr_user][subdir] = iasc_contrib
projects[apachesolr_user][download][type] = git
projects[apachesolr_user][download][branch] = 7.x-1.x
projects[apachesolr_user][download][revision] = cadb26b

projects[apachesolr_attachments][type] = module
projects[apachesolr_attachments][version] = 1.4
projects[apachesolr_attachments][subdir] = iasc_contrib

projects[title][type] = module
projects[title][version] = 1.0-alpha7
projects[title][subdir] = iasc_contrib

projects[nodequeue][type] = module
projects[nodequeue][version] = 2.0
projects[nodequeue][subdir] = iasc_contrib

projects[access_code][type] = module
projects[access_code][version] = 1.1
projects[access_code][subdir] = iasc_contrib

projects[og_role_override][type] = module
projects[og_role_override][version] = 2.2
projects[og_role_override][subdir] = iasc_contrib

projects[shield][type] = module
projects[shield][version] = 1.2
projects[shield][subdir] = iasc_contrib

projects[securepages][type] = module
projects[securepages][subdir] = iasc_contrib
projects[securepages][version] = 1.0-beta2

; Override location of respond.js library file
libraries[respondjs][download][type] = get
libraries[respondjs][download][url] = https://raw.githubusercontent.com/scottjehl/Respond/master/dest/respond.min.js

projects[features_extra][type] = module
projects[features_extra][version] = 1.0
projects[features_extra][subdir] = iasc_contrib

projects[taxonomy_csv][type] = module
projects[taxonomy_csv][version] = 5.10
projects[taxonomy_csv][subdir] = iasc_contrib

projects[tzfield][type] = module
projects[tzfield][version] = 1.1
projects[tzfield][subdir] = iasc_contrib

projects[responsive_imagemaps][type] = module
projects[responsive_imagemaps][version] = 1.1
projects[responsive_imagemaps][subdir] = iasc_contrib

; Humanitarian ID support
projects[openid_connect][type] = module
projects[openid_connect][version] = 1.0-beta6
projects[openid_connect][subdir] = iasc_contrib

; Event registration
projects[registration][type] = module
projects[registration][version] = 2.0-beta1
projects[registration][subdir] = iasc_contrib
projects[registration][patch][1473714] = https://www.drupal.org/files/issues/registration_views-default-registration-list-replacement-1473714-94.patch

; Action points matrix
projects[nodeaccess][type] = module
projects[nodeaccess][version] = 1.4
projects[nodeaccess][subdir] = iasc_contrib

projects[feeds_tamper][type] = module
projects[feeds_tamper][version] = 1.1
projects[feeds_tamper][subdir] = iasc_contrib

projects[entityreference_filter][type] = module
projects[entityreference_filter][version] = 1.5
projects[entityreference_filter][subdir] = iasc_contrib

projects[jquery_expander][type] = module
projects[jquery_expander][version] = 1.0
projects[jquery_expander][subdir] = iasc_contrib

projects[views_data_export][type] = module
projects[views_data_export][version] = 3.0-beta9
projects[views_data_export][subdir] = iasc_contrib

libraries[responsive-imagemaps][download][type] = get
libraries[responsive-imagemaps][download][url] = https://github.com/stowball/jQuery-rwdImageMaps/archive/master.zip

libraries[jquery.expander][download][type] = get
libraries[jquery.expander][download][url] = https://github.com/kswedberg/jquery-expander/archive/master.zip

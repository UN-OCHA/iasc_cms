core = 7.x
api = 2

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

projects[panopoly_core][version] = 1.10
projects[panopoly_core][subdir] = panopoly

projects[panopoly_images][version] = 1.10
projects[panopoly_images][subdir] = panopoly

projects[panopoly_theme][version] = 1.10
projects[panopoly_theme][subdir] = panopoly

projects[panopoly_magic][version] = 1.10
projects[panopoly_magic][subdir] = panopoly

projects[panopoly_widgets][version] = 1.10
projects[panopoly_widgets][subdir] = panopoly

projects[panopoly_admin][version] = 1.10
projects[panopoly_admin][subdir] = panopoly

projects[panopoly_users][version] = 1.10
projects[panopoly_users][subdir] = panopoly

projects[panopoly_pages][version] = 1.10
projects[panopoly_pages][subdir] = panopoly

projects[panopoly_wysiwyg][version] = 1.10
projects[panopoly_wysiwyg][subdir] = panopoly

projects[panopoly_search][version] = 1.10
projects[panopoly_search][subdir] = panopoly

; =====================================
; Open Atrium 2.x
; =====================================

projects[oa_core][type] = module
projects[oa_core][subdir] = contrib
projects[oa_core][download][url] = git@github.com:phase2/oa_core.git
projects[oa_core][download][type] = git
projects[oa_core][download][tag] = 7.x-2.21

projects[oa_discussion][type] = module
projects[oa_discussion][subdir] = contrib
projects[oa_discussion][download][url] = git@github.com:phase2/oa_discussion.git
projects[oa_discussion][download][type] = git
projects[oa_discussion][download][tag] = 7.x-2.20

projects[oa_wiki][type] = module
projects[oa_wiki][subdir] = contrib
projects[oa_wiki][download][url] = git@github.com:phase2/oa_wiki.git
projects[oa_wiki][download][type] = git
projects[oa_wiki][download][tag] = 7.x-2.20



projects[openatrium][type] = profile
projects[openatrium][download][type] = git
projects[openatrium][download][url] = http://git.drupal.org/project/openatrium.git
projects[openatrium][download][tag] = 7.x-2.21

projects[oa_contextual_tabs][type] = module
projects[oa_contextual_tabs][subdir] = contrib
projects[oa_contextual_tabs][download][url] = git@github.com:phase2/oa_contextual_tabs.git
projects[oa_contextual_tabs][download][type] = git
projects[oa_contextual_tabs][download][tag] = 7.x-2.21





projects[oa_events][type] = module
projects[oa_events][subdir] = contrib
projects[oa_events][download][url] = git@github.com:phase2/oa_events.git
projects[oa_events][download][type] = git
projects[oa_events][download][tag] = 7.x-2.21
projects[oa_events][patch][2333881] = https://www.drupal.org/files/issues/oa_events-update-fullcalendar-download-url-2333881-1.patch

projects[oa_events_import][type] = module
projects[oa_events_import][subdir] = contrib
projects[oa_events_import][download][url] = git@github.com:phase2/oa_events_import.git
projects[oa_events_import][download][type] = git
projects[oa_events_import][download][tag] = 7.x-2.20

projects[oa_ldap][type] = module
projects[oa_ldap][subdir] = contrib
projects[oa_ldap][download][type] = git
projects[oa_ldap][download][url] = http://git.drupal.org/project/oa_ldap.git
projects[oa_ldap][download][revision] = b2892c7

projects[oa_mailhandler][type] = module
projects[oa_mailhandler][subdir] = contrib
projects[oa_mailhandler][download][url] = http://git.drupal.org/project/oa_mailhandler.git
projects[oa_mailhandler][download][type] = git
projects[oa_mailhandler][download][revision] = 34596ff

projects[oa_media][type] = module
projects[oa_media][subdir] = contrib
projects[oa_media][download][url] = git@github.com:phase2/oa_media.git
projects[oa_media][download][type] = git
projects[oa_media][download][tag] = 7.x-2.20

projects[oa_notifications][type] = module
projects[oa_notifications][subdir] = contrib
projects[oa_notifications][download][url] = git@github.com:phase2/oa_notifications.git
projects[oa_notifications][download][type] = git
projects[oa_notifications][download][tag] = 7.x-2.20

projects[oa_profile2][type] = module
projects[oa_profile2][subdir] = contrib
projects[oa_profile2][download][url] = git@github.com:phase2/oa_profile2.git
projects[oa_profile2][download][type] = git
projects[oa_profile2][download][revision] = 832e064

projects[oa_radix][type] = theme
projects[oa_radix][download][url] = git@github.com:phase2/oa_radix.git
projects[oa_radix][download][type] = git
projects[oa_radix][download][tag] = 7.x-2.21

projects[oa_subspaces][type] = module
projects[oa_subspaces][subdir] = contrib
projects[oa_subspaces][download][url] = git@github.com:phase2/oa_subspaces.git
projects[oa_subspaces][download][type] = git
projects[oa_subspaces][download][revision] = 243ae8d5



;projects[oa_workbench][type] = module
;projects[oa_workbench][subdir] = contrib
;projects[oa_workbench][download][type] = git
;projects[oa_workbench][download][url] = git@github.com:phase2/oa_workbench.git
;projects[oa_workbench][download][revision] = d0b8e7a

; =====================================
; Fields & Entities.
; =====================================

projects[entity][subdir] = contrib
projects[entity][version] = 1.3
projects[entity][patch][2171689] = http://drupal.org/files/issues/entity-missing-bundle-property-2171689-3.patch

projects[field_collection][subdir] = contrib
projects[field_collection][version] = 1.x-dev

; =====================================
; The rest.
; =====================================

; Full Calendar
projects[fullcalendar][version] = 2.x-dev
projects[fullcalendar][subdir] = contrib
projects[fullcalendar][download][type] = git
projects[fullcalendar][download][branch] = 7.x-2.x
projects[fullcalendar][download][revision] = e416e7
projects[fullcalendar][patch][2044391] = http://drupal.org/files/fullcalendar-legend-entityreference_taxonomy-2044391-1.patch
projects[fullcalendar][patch][2333883] = https://www.drupal.org/files/issues/fullcalendar-update-fullcalendar-download-url-2333883-1.patch

projects[autologout][subdir] = contrib
projects[autologout][version] = 4.3

projects[og_theme][subdir] = contrib
projects[og_theme][version] = 2.0
projects[og_theme][patch][2215689] = http://drupal.org/files/issues/og_theme-integration-with-og_subgroups-2215689-1.patch

projects[workbench_moderation_scheduled_transition][type] = module
projects[workbench_moderation_scheduled_transition][subdir] = contrib
projects[workbench_moderation_scheduled_transition][download][type] = git
projects[workbench_moderation_scheduled_transition][download][url] = http://git.drupal.org/sandbox/srjosh/2191231.git
projects[workbench_moderation_scheduled_transition][download][branch] = 7.x-1.x
projects[workbench_moderation_scheduled_transition][download][revision] = 2edeff2

projects[profile2_apachesolr][version] = 1.6
projects[profile2_apachesolr][subdir] = contrib
projects[profile2_apachesolr][patch][2296931] = http://drupal.org/files/issues/profile2_apachesolr-2296931-1-support_any_entity_type.patch
projects[profile2_apachesolr][patch][2297617] = http://drupal.org/files/issues/profile2_apachesolr-2297617-1-fix_bundle_facet_labels.patch

projects[oa_plupload][type] = module
projects[oa_plupload][subdir] = contrib
projects[oa_plupload][download][type] = git
projects[oa_plupload][download][url] = git@github.com:phase2/oa_plupload.git
projects[oa_plupload][download][revision] = e8b1849

projects[taxonomy_menu][type] = module
projects[taxonomy_menu][version] = 1.5
projects[taxonomy_menu][subdir] = contrib

projects[entity_view_mode][version] = 1.0-rc1
projects[entity_view_mode][subdir] = contrib

projects[views_slideshow][version] = 3.1
projects[views_slideshow][subdir] = contrib

projects[field_countdown][version] = 3.0
projects[field_countdown][subdir] = contrib

projects[image_link_formatter][version] = 1.0
projects[image_link_formatter][subdir] = contrib

projects[inline_entity_form][version] = 1.5
projects[inline_entity_form][subdir] = contrib

projects[weather][version] = 2.5
projects[weather][subdir] = contrib

projects[jquery_plugin][version] = 1.0
projects[jquery_plugin][subdir] = contrib

projects[gauth][version] = 1.3
projects[gauth][subdir] = contrib

projects[conditional_fields][patch][1542706] = http://drupal.org/files/issues/conditional-fields-1542706-values-not-saving-72.patch
projects[conditional_fields][subdir] = contrib

projects[special_menu_items][version] = 2.0
projects[special_menu_items][subdir] = contrib

projects[superfish][version] = 1.9
projects[superfish][subdir] = contrib

libraries[jquery-countdown][download][type] = file
libraries[jquery-countdown][download][url] = http://demo.tutorialzine.com/2011/12/countdown-jquery/countdown.zip

libraries[google-api-php-client][download][type] = file
libraries[google-api-php-client][download][url] = http://google-api-php-client.googlecode.com/files/google-api-php-client-0.6.0.tar.gz

libraries[superfish][download][type] = file
libraries[superfish][download][url] = https://github.com/mehrpadin/Superfish-for-Drupal/archive/1.x.zip


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

core = 7.x
api = 2

; Drupal Core
projects[drupal][type] = core
projects[drupal][version] = 7.26

; Patch for handling inherited profiles
projects[drupal][patch][1356276] = http://drupal.org/files/1356276-make-D7-21.patch

; Patch for simpletest
projects[drupal][patch][911354] = http://drupal.org/files/911354-drupal-profile-85.patch

; Patch to allow install profile enabling to enable dependencies correctly.
projects[drupal][patch][1093420] = http://drupal.org/files/1093420-22.patch

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

projects[panopoly_test][version] = 1.10
projects[panopoly_test][subdir] = panopoly

; =====================================
; Open Atrium 2.x
; =====================================

projects[oa_core][type] = module
projects[oa_core][subdir] = contrib
projects[oa_core][download][url] = https://github.com/phase2/oa_core.git
projects[oa_core][download][type] = git
projects[oa_core][download][tag] = 7.x-2.21
projects[oa_core][patch][] = oa_core-parent-cache.patch

projects[oa_discussion][type] = module
projects[oa_discussion][subdir] = contrib
projects[oa_discussion][download][url] = https://github.com/phase2/oa_discussion.git
projects[oa_discussion][download][type] = git
projects[oa_discussion][download][tag] = 7.x-2.20

projects[oa_wiki][type] = module
projects[oa_wiki][subdir] = contrib
projects[oa_wiki][download][url] = https://github.com/phase2/oa_wiki.git
projects[oa_wiki][download][type] = git
projects[oa_wiki][download][tag] = 7.x-2.20

projects[oa_events][type] = module
projects[oa_events][subdir] = contrib
projects[oa_events][download][url] = https://github.com/phase2/oa_events.git
projects[oa_events][download][type] = git
projects[oa_events][download][tag] = 7.x-2.21
projects[oa_events][patch][2333881] = https://www.drupal.org/files/issues/oa_events-update-fullcalendar-download-url-2333881-1.patch

projects[oa_events_import][type] = module
projects[oa_events_import][subdir] = contrib
projects[oa_events_import][download][url] = https://github.com/phase2/oa_events_import.git
projects[oa_events_import][download][type] = git
projects[oa_events_import][download][tag] = 7.x-2.20

projects[oa_contextual_tabs][type] = module
projects[oa_contextual_tabs][subdir] = contrib
projects[oa_contextual_tabs][download][url] = https://github.com/phase2/oa_contextual_tabs.git
projects[oa_contextual_tabs][download][type] = git
projects[oa_contextual_tabs][download][tag] = 7.x-2.21

projects[oa_notifications][type] = module
projects[oa_notifications][subdir] = contrib
projects[oa_notifications][download][url] = https://github.com/phase2/oa_notifications.git
projects[oa_notifications][download][type] = git
projects[oa_notifications][download][tag] = 7.x-2.20

projects[oa_media][type] = module
projects[oa_media][subdir] = contrib
projects[oa_media][download][url] = https://github.com/phase2/oa_media.git
projects[oa_media][download][type] = git
projects[oa_media][download][tag] = 7.x-2.20

projects[oa_subspaces][type] = module
projects[oa_subspaces][subdir] = contrib
projects[oa_subspaces][download][url] = https://github.com/phase2/oa_subspaces.git
projects[oa_subspaces][download][type] = git
projects[oa_subspaces][download][revision] = 243ae8d5

projects[oa_radix][type] = theme
projects[oa_radix][version] = 3.x-dev
projects[oa_radix][download][url] = https://github.com/phase2/oa_radix.git
projects[oa_radix][download][type] = git
projects[oa_radix][download][branch] = 7.x-3.x

projects[openatrium][type] = profile
projects[openatrium][download][type] = git
projects[openatrium][download][url] = http://git.drupal.org/project/openatrium.git
projects[openatrium][download][tag] = 7.x-2.21

projects[oa_mailhandler][type] = module
projects[oa_mailhandler][subdir] = contrib
projects[oa_mailhandler][download][url] = http://git.drupal.org/project/oa_mailhandler.git
projects[oa_mailhandler][download][type] = git
projects[oa_mailhandler][download][revision] = 34596ff

;projects[oa_workbench][type] = module
;projects[oa_workbench][subdir] = contrib
;projects[oa_workbench][download][type] = git
;projects[oa_workbench][download][url] = https://github.com/phase2/oa_workbench.git
;projects[oa_workbench][download][revision] = d0b8e7a

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

projects[radix_layouts][version] = 3.0
projects[radix_layouts][subdir] = contrib

; Supports grouping of fields for Agenda items
projects[field_collection][version] = 1.0-beta7
projects[field_collection][subdir] = contrib

; Supports more standardized addresses.
projects[addressfield][version] = 1.0-beta5
projects[addressfield][subdir] = contrib
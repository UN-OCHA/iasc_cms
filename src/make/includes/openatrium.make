api = 2
core = 7.x

; MAKE file for Open Atrium.

; ******************** RELEASE *******************

projects[oa_core][subdir] = contrib
projects[oa_core][download][type] = git
projects[oa_core][download][branch] = 7.x-2.x
projects[oa_core][download][revision] = 295e7c3

; ************************************************
; ************* Open Atrium Builtin Apps *********

projects[oa_discussion][subdir] = apps
projects[oa_discussion][version] = 2.23

projects[oa_events][subdir] = apps
projects[oa_events][version] = 2.25

projects[oa_wiki][subdir] = apps
projects[oa_wiki][version] = 2.23

projects[oa_worktracker][subdir] = apps
projects[oa_worktracker][version] = 2.0-beta17

; ******** End Open Atrium Builtin Apps **********
; ************************************************


; ************************************************
; ************* Open Atrium Core Addon Apps ******
; (Local optional apps that included by default)

projects[oa_admin][version] = 2.0-rc1
projects[oa_admin][subdir] = apps

projects[oa_analytics][version] = 2.0-rc2
projects[oa_analytics][subdir] = apps

projects[oa_appearance][version] = 2.0-rc1
projects[oa_appearance][subdir] = apps

projects[oa_archive][version] = 2.0-rc2
projects[oa_archive][subdir] = apps

projects[oa_clone][version] = 2.0-rc3
projects[oa_clone][subdir] = apps

projects[oa_contextual_tabs][subdir] = apps
projects[oa_contextual_tabs][version] = 2.22

projects[oa_devel][version] = 2.0-rc2
projects[oa_devel][subdir] = apps

projects[oa_domains][version] = 2.0-rc1
projects[oa_domains][subdir] = apps

projects[oa_events_import][subdir] = apps
projects[oa_events_import][version] = 2.23

projects[oa_favorites][version] = 2.0-rc1
projects[oa_favorites][subdir] = apps

;oa_files not quite ready for release yet
;projects[oa_files][version] = 2.0-rc1
;projects[oa_files][subdir] = apps

projects[oa_home][version] = 2.0
projects[oa_home][subdir] = apps

projects[oa_htmlmail][version] = 2.0-rc2
projects[oa_htmlmail][subdir] = apps

projects[oa_mailhandler][version] = 2.16
projects[oa_mailhandler][subdir] = apps

projects[oa_markdown][version] = 2.0-rc1
projects[oa_markdown][subdir] = apps

projects[oa_media][subdir] = apps
projects[oa_media][version] = 2.21

projects[oa_messages_digest][version] = 2.0-rc2
projects[oa_messages_digest][subdir] = apps

projects[oa_notifications][subdir] = apps
projects[oa_notifications][version] = 2.21

projects[oa_sandbox][version] = 2.0-rc1
projects[oa_sandbox][subdir] = apps

projects[oa_search][version] = 2.0
projects[oa_search][subdir] = apps

projects[oa_sitemap][version] = 2.0
projects[oa_sitemap][subdir] = apps

projects[oa_styles][version] = 2.0-rc2
projects[oa_styles][subdir] = apps

projects[oa_subspaces][subdir] = apps
projects[oa_subspaces][version] = 2.22

projects[oa_toolbar][version] = 2.0-rc2
projects[oa_toolbar][subdir] = apps

projects[oa_tour][version] = 2.0-rc1
projects[oa_tour][subdir] = apps

projects[oa_tour_defaults][version] = 2.0-rc1
projects[oa_tour_defaults][subdir] = apps

projects[oa_wizard][version] = 2.0-rc2
projects[oa_wizard][subdir] = apps

; ***************** End Apps *********************
; ************************************************


; ************************************************
; ************** Open Atrium Themes **************

projects[oa_radix][type] = theme
projects[oa_radix][version] = 3.5

; *********** End Open Atrium Themes *************
; ************************************************

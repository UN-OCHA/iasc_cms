; Open Atrium Apache Solr Makefile

api = 2
core = 7.x

projects[apachesolr][subdir] = contrib
projects[apachesolr][version] = 1.6

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

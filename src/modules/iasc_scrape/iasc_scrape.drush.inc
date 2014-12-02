<?php
/**
 * @file
 * Drush commands for IASC Scrape module.
 */

/**
 * Implements hook_drush_command().
 */
function iasc_scrape_drush_command() {
  $items = array();

  $items['iasc-scrape-scrape'] = array(
    'description' => 'Scrape elements from the old IASC site',
    'arguments' => array(
      'type' => 'The type of element to scrape',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_LOGIN,
    'callback' => 'drush_iasc_scrape_scrape',
    'aliases' => array('iasc-sc'),
    'options' => array(
      'page' => 'The page to scrape',
      'position' => 'The position to start with to scrape',
    ),
    'examples' => array(
      'drush iasc-sc contact --page=2 --position=5' => 'Scrape page 2, position 5 of the contacts on the old IASC site.',
    ),
  );

  $items['iasc-scrape-legacy-fid'] = array(
    'description' => 'Get the next legacy fid from the old IASC site',
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_LOGIN,
    'callback' => 'drush_iasc_scrape_legacy_fid',
    'aliases' => array('iasc-slf'),
  );

  $items['iasc-scrape-update-legacy-fid'] = array(
    'description' => 'Update the legacy fid to note that it\'s saved',
    'arguments' => array(
      'legacy_fid' => 'The legacy fid to update',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_LOGIN,
    'callback' => 'drush_iasc_scrape_update_legacy_fid',
    'aliases' => array('iasc-sulf'),
  );

  $items['iasc-scrape-save-node'] = array(
    'description' => 'Save node from scrape',
    'arguments' => array(
      'type' => 'The type of element to save',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_LOGIN,
    'callback' => 'drush_iasc_scrape_save_node',
    'aliases' => array('iasc-sn'),
    'examples' => array(
      'drush iasc-sn meeting' => 'Save a meeting node using the latest unsaved scrape.',
    ),
  );

  $items['iasc-scrape-save-agenda'] = array(
    'description' => 'Save agenda from iasc scrape agendas table',
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_LOGIN,
    'callback' => 'drush_iasc_scrape_save_agenda',
    'aliases' => array('iasc-sa'),
    'options' => array(
      'nid' => 'The nid to save',
    ),
    'examples' => array(
      'drush iasc-sa --nid=999' => 'Save a meeting node and update it\'s agenda using the latest unsaved.',
    ),
  );

  return $items;
}

/**
 * Implements hook_drush_help().
 */
function iasc_scrape_drush_help($section) {
  switch ($section) {
    case 'drush:iasc-scrape-scrape':
      return dt('Scrape elements from the old IASC site.');
  }
}

/**
 * Callback to execute 'iasc-scrape-scrape'.
 */
function drush_iasc_scrape_scrape($type, $page = 1, $position = 1) {
  // Start process.
  drush_print('Checking options...');

  // If we don't have a type, then don't continue.
  if (empty($type)) {
    drush_set_error('Missing type', dt('You need to set the type to scrape, i.e. \'contact\'.'));
    return;
  }

  // Set required options.
  $options = array();
  $options['type'] = $type;

  // Set additional options if set. If not, get last index.
  $index = iasc_scrape_get_index($type);
  $page = drush_get_option('page');
  $page = ($page == NULL) ? $index['page'] : $page;
  $position = drush_get_option('position');
  $position = ($position == NULL) ? $index['position'] : $position;

  // Scrape.
  iasc_scrape_scrape($type, $page, $position);
}

/**
 * Callback to execute 'iasc-scrape-save-node'.
 */
function drush_iasc_scrape_save_node($type) {
  // Start process.
  drush_print('Checking options...');

  // If we don't have a type, then don't continue.
  if (empty($type)) {
    drush_set_error('Missing type', dt('You need to set the type to save, i.e. \'meeting\'.'));
    return;
  }

  // Save.
  iasc_scrape_save_node($type);
}

/**
 * Callback to execute 'iasc-scrape-save-agenda'.
 */
function drush_iasc_scrape_save_agenda($nid = NULL) {
  // Start process.
  drush_print('Checking options...');

  // Save.
  iasc_scrape_save_agenda($nid);
}

/**
 * Get latest fid.
 */
function drush_iasc_scrape_legacy_fid() {
  return iasc_scrape_get_scraped_legacy_fid();
}

/**
 * Update legacy fid to saved.
 */
function drush_iasc_scrape_update_legacy_fid($legacy_fid) {
  // If we don't have a type, then don't continue.
  if (empty($legacy_fid)) {
    drush_set_error('Missing legacy fid', dt('You need to set the legacy fid to save.'));
    return;
  }

  iasc_scrape_update_legacy_fid($legacy_fid);
}

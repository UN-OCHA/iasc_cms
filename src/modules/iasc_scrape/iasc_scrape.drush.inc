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

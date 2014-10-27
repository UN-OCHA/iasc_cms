<?php
/**
 * @file
 * Drush commands for IASC Configuration module.
 */

/**
 * Implements hook_drush_command().
 */
function iasc_configuration_drush_command() {
  $items = array();

  $items['iasc-import-spaces'] = array(
    'description' => 'Imports spaces and sections from a given csv file',
    'arguments' => array(
      'file' => 'The file containing the spaces and section hierarchy',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_LOGIN,
    'callback' => 'drush_iasc_configuration_iasc_import_spaces',
    'aliases' => array('iasc-spaces'),
    'options' => array(
      'delimiter'     => 'CSV delimiter (default: ",")',
      'enclosure'     => "CSV enclosure (default: '\"')",
      'delete-all'  => 'Delete all spaces and sections before import',
    ),
    'examples' => array(
      'drush iasc-spaces <path>/data/bodiescategories.csv --delimiter=";" --delete-all' => 'Import the spaces and sections in iasc_spaces.csv, using delimiter ";" and delete all spaces and sections before importing.',
    ),
  );

  return $items;
}

/**
 * Implements hook_drush_help().
 */
function iasc_configuration_drush_help($section) {
  switch ($section) {
    case 'drush:iasc-import-spaces':
      return dt('Import spaces and sections with a CSV file.');
  }
}

/**
 * Callback to execute 'drush iasc-import-spaces'.
 */
function drush_iasc_configuration_iasc_import_spaces($file = '') {
  // Start process.
  drush_print('Checking options...');

  // If we don't have a file, then don't continue.
  if (empty($file) || !file_exists($file)) {
    drush_set_error('Missing csv file', dt('You need to set the correct path to the file to import.'));
    return;
  }

  // Set required options.
  $options = array();
  $options['file'] = $file;

  // Set additional options.
  $delimiter = drush_get_option('delimiter');
  $options['delimiter'] = ($delimiter == NULL) ? ',' : $delimiter;

  $enclosure = drush_get_option('enclosure');
  $options['enclosure'] = ($enclosure == NULL) ? '"' : $enclosure;

  $options['delete_all'] = (drush_get_option('delete-all') == NULL) ? FALSE : TRUE;

  // Login as the admin user.
  global $user;
  $user = user_load(1);

  // Setup our batch process.
  $messages = iasc_configuration_import($options);

  if (count($messages)) {
    foreach ($messages as $message) {
      $msg = str_replace('<br />', " \n", $message);
      drush_log('- ' . $msg, 'error');
    }
    return;
  }

  // Process the batch.
  drush_print('Starting import process. Please wait...');
  $batch =& batch_get();
  $batch['progressive'] = FALSE;
  drush_backend_batch_process();

  drush_print('Finished importing!');
}

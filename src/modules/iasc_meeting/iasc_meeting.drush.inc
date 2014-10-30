<?php
/**
 * @file
 * Drush commands for IASC Meeting module.
 */

/**
 * Implements hook_drush_command().
 */
function iasc_meeting_drush_command() {
  $items = array();

  $items['iasc-import-meeting-agendas'] = array(
    'description' => 'Imports and creates agenda details on meeting nodes from a given csv file',
    'arguments' => array(
      'file' => 'The file containing the agenda data',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_LOGIN,
    'callback' => 'drush_iasc_meeting_iasc_import_meeting_agendas',
    'aliases' => array('iasc-meeting-agendas'),
    'options' => array(
      'delimiter'     => 'CSV delimiter (default: ",")',
      'enclosure'     => "CSV enclosure (default: '\"')",
    ),
    'examples' => array(
      'drush iasc-meeting-agendas <path>/data/meeting_agendas.csv --delimiter=","' => 'Import the agendas to meetings in meeting_agendas.csv using delimiter ",".',
    ),
  );

  return $items;
}

/**
 * Implements hook_drush_help().
 */
function iasc_contact_drush_help($section) {
  switch ($section) {
    case 'drush:iasc-import-meeting-agendas':
      return dt('Update meetings with agenda items from a CSV file.');
  }
}

/**
 * Callback to execute 'drush iasc-import-meeting-agendas'.
 */
function drush_iasc_meeting_iasc_import_meeting_agendas($file = '') {
  iasc_meeting_batch_import('agendas', $file);
}

/**
 * Starts batch import for agendas.
 *
 * @param string $type
 *   The type of import: contacts, orgs, bodies
 * @param string $file
 *   The file with the data.
 */
function iasc_meeting_batch_import($type, $file) {
  // Start process.
  drush_print('Checking options...');

  // If we don't have the files, then don't continue.
  if (empty($file) || !file_exists($file)) {
    drush_set_error('Missing csv file', dt('You need to set the correct path to the file to import.'));
    return;
  }

  // Set required options.
  $options = array();
  $options['type'] = $type;
  $options['file'] = $file;

  // Set additional options.
  $delimiter = drush_get_option('delimiter');
  $options['delimiter'] = ($delimiter == NULL) ? ',' : $delimiter;

  $enclosure = drush_get_option('enclosure');
  $options['enclosure'] = ($enclosure == NULL) ? '"' : $enclosure;

  // Login as the admin user.
  global $user;
  $user = user_load(1);

  $messages = iasc_meeting_agenda_import($options);
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

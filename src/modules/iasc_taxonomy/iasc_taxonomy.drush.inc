<?php
/**
 * @file
 * Drush commands for IASC Taxonomy module.
 */

/**
 * Implements hook_drush_command().
 */
function iasc_taxonomy_drush_command() {
  $items = array();

  $items['iasc-import-taxonomy-terms'] = array(
    'description' => 'Imports taxonomy terms from a given csv file',
    'arguments' => array(
      'file' => 'The file containing the taxonomy terms',
      'vocabulary' => 'The machine name for the vocabulary',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_LOGIN,
    'callback' => 'drush_iasc_taxonomy_import_terms',
    'aliases' => array('iasc-terms'),
    'options' => array(
      'delimiter'     => 'CSV delimiter (default: ";")',
      'enclosure'     => "CSV enclosure (default: '\"')",
      'delete-terms'  => 'Delete all terms before import',
    ),
    'examples' => array(
      'drush iasc-terms <path>/hosts.csv hosts --delimiter="," --delete-terms' => 'Import the terms in hosts.csv into the hosts vocabulary, using delimiter "," and delete all terms first before importing.',
    ),
  );

  return $items;
}

/**
 * Implements hook_drush_help().
 */
function iasc_taxonomy_drush_help($section) {
  switch ($section) {
    case 'drush:iasc-import-taxonomy-terms':
      return dt('Import taxonomy terms into an existing vocabulary with a CSV file.');
  }
}

/**
 * Callback to execute 'drush iasc-import-taxonomy-terms'.
 */
function drush_iasc_taxonomy_import_terms($file = '', $vocabulary = '') {
  // Start process.
  drush_print('Checking options...');

  // If we don't have a file, then don't continue.
  if (empty($file) || !file_exists($file)) {
    drush_set_error('Missing csv file', dt('You need to set the correct path to the file to import.'));
    return;
  }

  // If we don't have a proper vocabulary machine name, then don't continue.
  if (empty($vocabulary) || !$vocab = taxonomy_vocabulary_machine_name_load($vocabulary)) {
    return drush_set_error('Missing vocabulary name', dt('The vocabulary machine name is required.'));
  }

  // Set required options.
  $options = array();
  $options['file'] = $file;
  $options['vid'] = $vocab->vid;

  // Set additional options.
  $delimiter = drush_get_option('delimiter');
  $options['delimiter'] = ($delimiter == NULL) ? ';' : $delimiter;

  $enclosure = drush_get_option('enclosure');
  $options['enclosure'] = ($enclosure == NULL) ? '"' : $enclosure;

  $options['delete_terms'] = (drush_get_option('delete-terms') == NULL) ? FALSE : TRUE;

  // Login as the admin user.
  global $user;
  $user = user_load(1);

  // Setup our batch process.
  $messages = iasc_taxonomy_import($options);

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

  drush_print('Finished importing terms!');
}

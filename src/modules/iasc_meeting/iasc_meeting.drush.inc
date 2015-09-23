<?php
/**
 * @file
 * IASC Meeting Drush commands.
 */

/**
 * Implements hook_drush_command().
 */
function iasc_meeting_drush_command() {
  $items['iasc_up_event_geocode'] = array(
    'description' => 'Update the primary city, geocode, and timezone as well as additional location information for events missing this information.',
    'callback' => 'iasc_meeting_drush_up_event_geocode',
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_ROOT,
  );

  return $items;
}

/**
 * Implements drush_COMMANDFILE().
 */
function iasc_meeting_drush_up_event_geocode() {
  $events = iasc_meeting_get_events_missing_primary_geocode();

  if ($events) {
    // We have to track number of results
    $num_results = count($events);

    // Check to see if this number matches the last number recorded. If the
    // number is the same, then we don't want to try to update the events again
    // because they may have invalid location information (like tbc) in the
    // primary city field.
    $last_num = variable_get('iasc_meeting_num_events_missing_primary_geocode', 0);
    if ($last_num == $num_results) {
      $message = dt('Last recorded number of events missing primary geocode matches current number of results returned from the database (num = %num)');
      watchdog('iasc_meeting', $message, array('num' => $num_results));

      return drush_set_error('iasc_meeting', $message);
    }

    variable_set('iasc_meeting_num_events_missing_primary_geocode', $num_results);

    watchdog('iasc_meeting', 'Have %num event nodes to update', array('%num' => $num_results));

    // We need to keep track of all of our geocode requests to Google to ensure
    // that we don't go over the daily limit.
    $geocode_request_counter = 0;

    foreach ($events as $node) {
      $meeting = node_load($node->entity_id);

      $city = $meeting->field_city[LANGUAGE_NONE][0]['value'];
      $safe_city = $meeting->field_city[LANGUAGE_NONE][0]['value'];

      if (!empty($city) && 'tbc' != $city) {
        watchdog('iasc_meeting', "Updated city (%city) for: %nid", array(
            '%city' => $city,
            '%nid' => $meeting->nid,
          )
        );

        // If the city has the text: By Phone, Video Conference, or
        // teleconference, we need to set the dial-in meeting flag.
        // We should just update this field and ignore additional geocode +
        // timezone handling.
        $match_found = preg_match('/(By Phone|Video\s?Conference|teleconference)/i', $city);
        if ($match_found) {
          $meeting->field_dial_in_meeting[LANGUAGE_NONE][0]['value'] = TRUE;
          field_attach_update('node', $meeting);
          entity_get_controller('node')->resetCache(array($meeting->nid));

          watchdog('iasc_meeting', "Updated event dial-in for: %nid", array('%nid' => $meeting->nid));
          continue;
        }

        if ($geocode_request_counter >= 400) {
          // We can only make so many requests to Google for geocodes in a day.
          watchdog('iasc_meeting',
            'Reached limit for Google geocode requests. Have %num remaining potential records to update.',
            array('%num' => ($num_results - $geocode_request_counter)));
          break;
        }

        // If the city has the text: dial-in, dial in, webex, we need to set the
        // dial-in meeting flag. Also remove the dial-in/webex information from
        // the city field.
        $city = preg_replace('/\(?\+?\s(dial-?\s?in\)?|webex)/i', '', $city, -1, $count);

        if ($count) {
          $meeting->field_dial_in_meeting[LANGUAGE_NONE][0]['value'] = TRUE;
        }

        // Replace '-' with spaces.
        $city = str_replace(array('-', ')'), ' ', $city);

        // We need to separate out the additional locations and add them to the
        // the additional locations field collection.
        $delimiters = array(' and ', '/', '(+', '(', '+');
        if (!iasc_meeting_split_city_locations($meeting, $delimiters, $city, $geocode_request_counter)) {
          // Nothing was changed so we just need to update the geofield and
          // timezone field.

          // Have to do a full node_save() instead of using
          // field_attach_update() + resetCache to be sure that the geofield can
          // be saved later. Geofield does not send in an api request for the
          // geocode if the value of the city remains the same. So it ensure
          // that the geocode update later works as expected (and also updates
          // the dependent timezone field), we have to start with a blank slate
          // for the city initially.
          $meeting->field_city[LANGUAGE_NONE][0]['value'] = '';
          $meeting->field_city[LANGUAGE_NONE][0]['safe_value'] = '';
          node_save($meeting);
          // Update the counter to keep track of the number of geocode requests
          // we are making. Even tho the value is empty, it appears that geofield
          // still makes a request.
          $geocode_request_counter++;

          // Reset the original city value.
          $meeting->field_city[LANGUAGE_NONE][0]['value'] = $city;
          $meeting->field_city[LANGUAGE_NONE][0]['safe_value'] = $safe_city;
          node_save($meeting);
          $geocode_request_counter++;
        }

        watchdog('iasc_meeting', "Updated event location and timezones: %nid", array('%nid' => $meeting->nid));
      }
    }
  }
}

/**
 * Get the event nids that have a primary city but not a matching primary
 * geocode field.
 *
 * @return array
 *  Array of event nids, otherwise returns an empty array if there are no
 *  results.
 */
function iasc_meeting_get_events_missing_primary_geocode() {
  // Get all of the events with a value in field_data_field_city that are
  // missing the geofield information for the primary city.
  $result = db_query('SELECT c.entity_id
    FROM {field_data_field_city} AS c
    LEFT OUTER JOIN {field_data_field_primary_geofield} AS g ON c.entity_id = g.entity_id
    WHERE g.entity_id IS NULL;')->fetchAll();

  return $result;
}

/**
 * Handle saving additional cities.
 *
 * @param object $meeting
 *   The meeting node.
 * @param array $delimiters
 *   An array of delimiters that separate the additional cities.
 * @param string $city
 *   The starting string for the city.
 *
 * @return bool
 *   TRUE if a change was made (additional cities added), otherwise FALSE.
 */
function iasc_meeting_split_city_locations(&$meeting, $delimiters, &$city, &$geocode_counter) {
  $changed = FALSE;
  foreach ($delimiters as $delimiter) {
    if (stripos($city, $delimiter) !== FALSE) {
      $cities = explode($delimiter, $city);

      if (!empty($cities)) {
        $changed = TRUE;
        // The first item in the array should be the primary location.
        $city = trim(array_shift($cities));
        $meeting->field_city[LANGUAGE_NONE][0]['value'] = $city;

        // Create a new field collection entity for additional cities.
        foreach ($cities as $additional_city) {
          $additional_city = trim(str_replace(')', '', $additional_city));

          $collection = entity_create('field_collection_item', array('field_name' => 'field_additional_locations'));
          $collection->setHostEntity('node', $meeting);
          $collection->field_additional_city[LANGUAGE_NONE][0]['value'] = $additional_city;

          // Saving the new field collection will also save the parent node.
          $collection->save();

          // Adding a new city also triggers a call to get the Google geocode
          // for this additional location.
          $geocode_counter++;
        }
      }
    }
  }

  return $changed;
}

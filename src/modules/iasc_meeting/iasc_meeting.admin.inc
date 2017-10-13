<?php
/**
 * @file
 * Settings UI for the module.
 */

/**
 * Form callback for the settings form.
 */
function iasc_meeting_settings() {
  $form['iasc_meeting_my_timezone_form_enabled'] = array(
    '#title' => t('Show My Timezone Helper'),
    '#description' => t('Control whether the <em>My Timezone</em> helper form is displayed on meeting items. Disable the helper during DST switch-over season.'),
    '#type' => 'checkbox',
    '#default_value' => variable_get('iasc_meeting_my_timezone_form_enabled', 1),
  );
  return system_settings_form($form);
}

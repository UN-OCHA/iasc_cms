<?php
/**
 * @file
 * iasc_group_login.features.inc
 */

/**
 * Implements hook_og_features_default_permissions_alter().
 */
function iasc_group_login_og_features_default_permissions_alter(&$data) {
  if (isset($data['node:oa_group:subscribe'])) {
    unset($data['node:oa_group:subscribe']['roles']['non-member']);
  }
  if (isset($data['node:oa_group:unsubscribe'])) {
    unset($data['node:oa_group:unsubscribe']['roles']['member']);
  }
  if (isset($data['node:oa_space:subscribe'])) {
    unset($data['node:oa_space:subscribe']['roles']['non-member']);
  }
  if (isset($data['node:oa_space:unsubscribe'])) {
    unset($data['node:oa_space:unsubscribe']['roles']['member']);
  }
}

/**
 * Implements hook_user_default_permissions_alter().
 */
function iasc_group_login_user_default_permissions_alter(&$data) {
  if (isset($data['change layouts in place editing'])) {
    unset($data['change layouts in place editing']['roles']['authenticated user']);
  }
  if (isset($data['download any document files'])) {
    $data['download any document files']['roles']['authenticated user'] = 'authenticated user'; /* WAS: '' */
  }
  if (isset($data['download any image files'])) {
    $data['download any image files']['roles']['authenticated user'] = 'authenticated user'; /* WAS: '' */
  }
  if (isset($data['download any video files'])) {
    $data['download any video files']['roles']['authenticated user'] = 'authenticated user'; /* WAS: '' */
  }
  if (isset($data['use panels in place editing'])) {
    unset($data['use panels in place editing']['roles']['authenticated user']);
  }
  if (isset($data['use text format panopoly_html_text'])) {
    unset($data['use text format panopoly_html_text']['roles']['editor']);
  }
  if (isset($data['view private files'])) {
    $data['view private files']['roles']['authenticated user'] = 'authenticated user'; /* WAS: '' */
    $data['view private files']['roles']['editor'] = 'editor'; /* WAS: '' */
    $data['view private files']['roles']['group login'] = 'group login'; /* WAS: '' */
    $data['view private files']['roles']['viewer'] = 'viewer'; /* WAS: '' */
  }
}

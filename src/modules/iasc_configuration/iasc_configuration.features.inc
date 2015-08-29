<?php
/**
 * @file
 * iasc_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iasc_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function iasc_configuration_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function iasc_configuration_field_default_field_instances_alter(&$data) {
  if (isset($data['file-document-field_file_title'])) {
    $data['file-document-field_file_title']['display']['large_image'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['file-image-field_file_image_alt_text'])) {
    $data['file-image-field_file_image_alt_text']['display']['large_image'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['file-image-field_file_image_title_text'])) {
    $data['file-image-field_file_image_title_text']['display']['large_image'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_discussion_post-body'])) {
    $data['node-oa_discussion_post-body']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_discussion_post-body']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_discussion_post-body']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_discussion_post-body']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_discussion_post-field_oa_media'])) {
    $data['node-oa_discussion_post-field_oa_media']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_discussion_post-field_oa_media']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_discussion_post-field_oa_media']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_discussion_post-field_oa_media']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_discussion_post-oa_section_ref'])) {
    $data['node-oa_discussion_post-oa_section_ref']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_discussion_post-oa_section_ref']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_discussion_post-oa_section_ref']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_discussion_post-oa_section_ref']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_discussion_post-og_group_ref'])) {
    $data['node-oa_discussion_post-og_group_ref']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_discussion_post-og_group_ref']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_discussion_post-og_group_ref']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_discussion_post-og_group_ref']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_discussion_post-og_vocabulary'])) {
    $data['node-oa_discussion_post-og_vocabulary']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_discussion_post-og_vocabulary']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_discussion_post-og_vocabulary']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_discussion_post-og_vocabulary']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_group-body'])) {
    $data['node-oa_group-body']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-body']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-body']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-body']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_group-field_featured_image'])) {
    $data['node-oa_group-field_featured_image']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-field_featured_image']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-field_featured_image']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-field_featured_image']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_group-group_access'])) {
    $data['node-oa_group-group_access']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-group_access']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-group_access']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-group_access']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_group-group_group'])) {
    $data['node-oa_group-group_group']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-group_group']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-group_group']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-group_group']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_group-oa_parent_space'])) {
    $data['node-oa_group-oa_parent_space']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-oa_parent_space']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-oa_parent_space']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-oa_parent_space']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_group-og_roles_permissions'])) {
    $data['node-oa_group-og_roles_permissions']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-og_roles_permissions']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-og_roles_permissions']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-og_roles_permissions']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_group-og_user_inheritance'])) {
    $data['node-oa_group-og_user_inheritance']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-og_user_inheritance']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-og_user_inheritance']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-og_user_inheritance']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_group-og_user_permission_inheritance'])) {
    $data['node-oa_group-og_user_permission_inheritance']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-og_user_permission_inheritance']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-og_user_permission_inheritance']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_group-og_user_permission_inheritance']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_section-body'])) {
    $data['node-oa_section-body']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-body']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-body']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-body']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_section-field_oa_group_ref'])) {
    $data['node-oa_section-field_oa_group_ref']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-field_oa_group_ref']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-field_oa_group_ref']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-field_oa_group_ref']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_section-field_oa_node_types'])) {
    $data['node-oa_section-field_oa_node_types']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-field_oa_node_types']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-field_oa_node_types']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-field_oa_node_types']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_section-field_oa_section'])) {
    $data['node-oa_section-field_oa_section']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-field_oa_section']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-field_oa_section']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-field_oa_section']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_section-field_oa_section_override'])) {
    $data['node-oa_section-field_oa_section_override']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-field_oa_section_override']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-field_oa_section_override']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-field_oa_section_override']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_section-field_oa_section_weight'])) {
    $data['node-oa_section-field_oa_section_weight']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-field_oa_section_weight']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-field_oa_section_weight']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-field_oa_section_weight']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_section-field_oa_team_ref'])) {
    $data['node-oa_section-field_oa_team_ref']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-field_oa_team_ref']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-field_oa_team_ref']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-field_oa_team_ref']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_section-field_oa_user_ref'])) {
    $data['node-oa_section-field_oa_user_ref']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-field_oa_user_ref']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-field_oa_user_ref']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-field_oa_user_ref']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_section-og_group_ref'])) {
    $data['node-oa_section-og_group_ref']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-og_group_ref']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-og_group_ref']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_section-og_group_ref']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_space-body'])) {
    $data['node-oa_space-body']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-body']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-body']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-body']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_space-field_featured_image'])) {
    $data['node-oa_space-field_featured_image']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-field_featured_image']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-field_featured_image']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-field_featured_image']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_space-field_oa_banner'])) {
    $data['node-oa_space-field_oa_banner']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-field_oa_banner']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-field_oa_banner']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-field_oa_banner']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_space-field_oa_banner_position'])) {
    $data['node-oa_space-field_oa_banner_position']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-field_oa_banner_position']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-field_oa_banner_position']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-field_oa_banner_position']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_space-field_oa_banner_text'])) {
    $data['node-oa_space-field_oa_banner_text']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-field_oa_banner_text']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-field_oa_banner_text']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-field_oa_banner_text']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_space-field_oa_node_types'])) {
    $data['node-oa_space-field_oa_node_types']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-field_oa_node_types']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-field_oa_node_types']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-field_oa_node_types']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_space-field_oa_section_override'])) {
    $data['node-oa_space-field_oa_section_override']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-field_oa_section_override']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-field_oa_section_override']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-field_oa_section_override']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_space-field_oa_space_type'])) {
    $data['node-oa_space-field_oa_space_type']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-field_oa_space_type']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-field_oa_space_type']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-field_oa_space_type']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_space-group_access'])) {
    $data['node-oa_space-group_access']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-group_access']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-group_access']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-group_access']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_space-group_group'])) {
    $data['node-oa_space-group_group']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-group_group']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-group_group']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-group_group']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_space-oa_parent_space'])) {
    $data['node-oa_space-oa_parent_space']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-oa_parent_space']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-oa_parent_space']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-oa_parent_space']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_space-og_roles_permissions'])) {
    $data['node-oa_space-og_roles_permissions']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-og_roles_permissions']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-og_roles_permissions']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-og_roles_permissions']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_space-og_user_inheritance'])) {
    $data['node-oa_space-og_user_inheritance']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-og_user_inheritance']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-og_user_inheritance']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-og_user_inheritance']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_space-og_user_permission_inheritance'])) {
    $data['node-oa_space-og_user_permission_inheritance']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-og_user_permission_inheritance']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-og_user_permission_inheritance']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_space-og_user_permission_inheritance']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_team-body'])) {
    $data['node-oa_team-body']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_team-body']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_team-body']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_team-body']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_team-field_oa_team_users'])) {
    $data['node-oa_team-field_oa_team_users']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_team-field_oa_team_users']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_team-field_oa_team_users']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_team-field_oa_team_users']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_team-og_group_ref'])) {
    $data['node-oa_team-og_group_ref']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_team-og_group_ref']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_team-og_group_ref']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-oa_team-og_group_ref']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-panopoly_page-body'])) {
    $data['node-panopoly_page-body']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-body']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-body']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-body']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-panopoly_page-field_featured_categories'])) {
    $data['node-panopoly_page-field_featured_categories']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_categories']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_categories']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_categories']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-panopoly_page-field_featured_image'])) {
    $data['node-panopoly_page-field_featured_image']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-panopoly_page-field_featured_status'])) {
    $data['node-panopoly_page-field_featured_status']['display']['bio_full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_status']['display']['bio_long'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_status']['display']['bio_short'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_status']['display']['link_to_document'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function iasc_configuration_default_page_manager_pages_alter(&$data) {
  if (isset($data['panels_customerror_404'])) {
    $data['panels_customerror_404']->default_handlers['page_panels_customerror_404_panel_context']->conf['display']->content['new-11c7782e-baf7-4383-8a84-80f416b02190'] = (object) array(
          'pid' => 'new-11c7782e-baf7-4383-8a84-80f416b02190',
          'panel' => 'contentmain',
          'type' => 'apachesolr_form',
          'subtype' => 'apachesolr_form',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'path_type' => 'custom',
            'path' => 'site/search',
            'override_prompt' => 0,
            'prompt' => '',
            'show_keys' => 1,
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => '11c7782e-baf7-4383-8a84-80f416b02190',
        ); /* WAS: '' */
    $data['panels_customerror_404']->default_handlers['page_panels_customerror_404_panel_context']->conf['display']->content['new-c2b62bd5-89d0-45c6-85f7-9560a772726c']->panel = 'contentmain'; /* WAS: 'middle' */
    $data['panels_customerror_404']->default_handlers['page_panels_customerror_404_panel_context']->conf['display']->layout = 'radix_boxton'; /* WAS: 'onecol' */
    $data['panels_customerror_404']->default_handlers['page_panels_customerror_404_panel_context']->conf['display']->panel_settings['style_settings']['contentmain'] = NULL; /* WAS: '' */
    $data['panels_customerror_404']->default_handlers['page_panels_customerror_404_panel_context']->conf['display']->panels['contentmain'] = array(
      0 => 'new-c2b62bd5-89d0-45c6-85f7-9560a772726c',
      1 => 'new-11c7782e-baf7-4383-8a84-80f416b02190',
    ); /* WAS: '' */
    unset($data['panels_customerror_404']->default_handlers['page_panels_customerror_404_panel_context']->conf['display']->panels['middle']);
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function iasc_configuration_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:oa_section:calendar_section'])) {
    $data['node:oa_section:calendar_section']->display->content['new-078ef339-4031-483a-8dfb-8837db7d7d95'] = (object) array(
          'pid' => 'new-078ef339-4031-483a-8dfb-8837db7d7d95',
          'panel' => 'contentmain',
          'type' => 'views_panes',
          'subtype' => 'oa_event_list-panel_pane_1',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'exposed' => array(
              'og_group_ref_target_id' => '',
              'og_group_ref_target_id_mine' => 0,
              'og_subspaces_view_all' => 1,
              'og_subspaces_view_parent' => 0,
              'oa_section_ref_target_id' => 'All',
              'flagged' => 0,
            ),
            'items_per_page' => 10,
            'override_title' => '',
            'override_title_text' => '',
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
            'widget_title' => 'Past Meetings',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => '078ef339-4031-483a-8dfb-8837db7d7d95',
        ); /* WAS: '' */
    $data['node:oa_section:calendar_section']->display->content['new-1e6a1b5c-b63e-4caa-b19d-08f88b8d166e'] = (object) array(
          'pid' => 'new-1e6a1b5c-b63e-4caa-b19d-08f88b8d166e',
          'panel' => 'contentmain',
          'type' => 'node_title',
          'subtype' => 'node_title',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'link' => 0,
            'markup' => 'none',
            'id' => '',
            'class' => '',
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => 'Meetings of %node:og_group_ref',
            'override_title_heading' => 'h1',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '1e6a1b5c-b63e-4caa-b19d-08f88b8d166e',
        ); /* WAS: '' */
    $data['node:oa_section:calendar_section']->display->content['new-5dea552f-a833-4443-b02e-883b4f59bf62'] = (object) array(
          'pid' => 'new-5dea552f-a833-4443-b02e-883b4f59bf62',
          'panel' => 'sidebar',
          'type' => 'iasc_configuration.section_menu',
          'subtype' => 'iasc_configuration.section_menu',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => array(
              'secondary_options' => 'panel-primary',
              'linked_list' => 'none',
            ),
            'style' => 'secondary',
          ),
          'css' => array(
            'css_id' => '',
            'css_class' => 'section-menu',
          ),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '5dea552f-a833-4443-b02e-883b4f59bf62',
        ); /* WAS: '' */
    $data['node:oa_section:calendar_section']->display->content['new-9ea94d4c-567b-404f-9aec-386ae14a1aea'] = (object) array(
          'pid' => 'new-9ea94d4c-567b-404f-9aec-386ae14a1aea',
          'panel' => 'sidebar',
          'type' => 'iasc_meeting.add_meeting',
          'subtype' => 'iasc_meeting.add_meeting',
          'shown' => TRUE,
          'access' => array(
            'plugins' => array(
              0 => array(
                'name' => 'role',
                'settings' => array(
                  'rids' => array(
                    0 => 3,
                    1 => 4,
                  ),
                ),
                'context' => 'logged-in-user',
                'not' => FALSE,
              ),
            ),
          ),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => '9ea94d4c-567b-404f-9aec-386ae14a1aea',
        ); /* WAS: '' */
    $data['node:oa_section:calendar_section']->display->content['new-c6abcc4f-8796-4c05-983b-8eabfd975206'] = (object) array(
          'pid' => 'new-c6abcc4f-8796-4c05-983b-8eabfd975206',
          'panel' => 'contentmain',
          'type' => 'block',
          'subtype' => 'iasc_meeting-meeting_login_cta',
          'shown' => TRUE,
          'access' => array(
            'plugins' => array(
              0 => array(
                'name' => 'role',
                'settings' => array(
                  'rids' => array(
                    0 => 1,
                  ),
                ),
                'context' => 'logged-in-user',
                'not' => FALSE,
              ),
            ),
          ),
          'configuration' => array(
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
          'uuid' => 'c6abcc4f-8796-4c05-983b-8eabfd975206',
        ); /* WAS: '' */
    $data['node:oa_section:calendar_section']->display->content['new-fad8e5e6-4911-4a2e-ba23-b5cc386d98cd'] = (object) array(
          'pid' => 'new-fad8e5e6-4911-4a2e-ba23-b5cc386d98cd',
          'panel' => 'contentmain',
          'type' => 'views_panes',
          'subtype' => 'oa_event_list-panel_pane_upcoming_meetings_filterable',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'exposed' => array(
              'field_oa_date_value' => array(
                'value' => '2015-03-01',
              ),
              'field_oa_date_value_1' => array(
                'value' => NULL,
              ),
              'field_city_value' => '',
              'og_group_ref_target_id' => 'CURRENT',
              'og_group_ref_target_id_mine' => 0,
              'og_subspaces_view_all' => 1,
              'og_subspaces_view_parent' => 0,
              'oa_section_ref_target_id' => 'All',
              'keys' => '',
            ),
            'show_exposed_form' => 0,
            'use_pager' => 0,
            'pager_id' => 0,
            'items_per_page' => 0,
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 4,
          'locks' => array(),
          'uuid' => 'fad8e5e6-4911-4a2e-ba23-b5cc386d98cd',
        ); /* WAS: '' */
    $data['node:oa_section:calendar_section']->display->panels['contentmain'][0] = 'new-1e6a1b5c-b63e-4caa-b19d-08f88b8d166e'; /* WAS: 'new-39b87a40-e27c-45b0-8bdf-6a9c3f117695' */
    $data['node:oa_section:calendar_section']->display->panels['contentmain'][2] = 'new-078ef339-4031-483a-8dfb-8837db7d7d95'; /* WAS: '' */
    $data['node:oa_section:calendar_section']->display->panels['contentmain'][3] = 'new-c6abcc4f-8796-4c05-983b-8eabfd975206'; /* WAS: '' */
    $data['node:oa_section:calendar_section']->display->panels['contentmain'][4] = 'new-fad8e5e6-4911-4a2e-ba23-b5cc386d98cd'; /* WAS: '' */
    $data['node:oa_section:calendar_section']->display->panels['sidebar'][0] = 'new-5dea552f-a833-4443-b02e-883b4f59bf62'; /* WAS: 'new-81942150-4ee9-4396-8371-b94f72b18f6a' */
    $data['node:oa_section:calendar_section']->display->panels['sidebar'][1] = 'new-9ea94d4c-567b-404f-9aec-386ae14a1aea'; /* WAS: 'new-5241f5c7-9e10-4e79-a1ce-84f68ad200f3' */
    $data['node:oa_section:calendar_section']->display->title = 'Meetings of %node:og_group_ref'; /* WAS: '' */
    unset($data['node:oa_section:calendar_section']->display->content['new-39b87a40-e27c-45b0-8bdf-6a9c3f117695']);
    unset($data['node:oa_section:calendar_section']->display->content['new-5241f5c7-9e10-4e79-a1ce-84f68ad200f3']);
    unset($data['node:oa_section:calendar_section']->display->content['new-81942150-4ee9-4396-8371-b94f72b18f6a']);
    unset($data['node:oa_section:calendar_section']->display->content['new-f7576cce-3df6-4498-89b5-77da59c5f99c']);
    unset($data['node:oa_section:calendar_section']->display->panels['sidebar'][2]);
  }
  if (isset($data['node:oa_section:oa_section_news'])) {
    $data['node:oa_section:oa_section_news']->display->content['new-03555883-c1be-428e-8004-42cc225cc337'] = (object) array(
          'pid' => 'new-03555883-c1be-428e-8004-42cc225cc337',
          'panel' => 'contentmain',
          'type' => 'node_title',
          'subtype' => 'node_title',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'link' => 0,
            'markup' => 'none',
            'id' => '',
            'class' => '',
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => 'News of %node:og_group_ref',
            'override_title_heading' => 'h1',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '03555883-c1be-428e-8004-42cc225cc337',
        ); /* WAS: '' */
    $data['node:oa_section:oa_section_news']->display->content['new-16ff2951-2241-4d47-b6d0-1ad702a78848'] = (object) array(
          'pid' => 'new-16ff2951-2241-4d47-b6d0-1ad702a78848',
          'panel' => 'contentmain',
          'type' => 'views_panes',
          'subtype' => 'iasc_recent_activity_by_term-panel_pane_iasc_recent_by_term',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'exposed' => array(
              'og_group_ref_target_id' => '',
              'og_group_ref_target_id_mine' => 0,
              'og_subspaces_view_all' => 1,
              'og_subspaces_view_parent' => 0,
              'oa_section_ref_target_id' => 'All',
              'type' => 'announcement',
              'term_node_tid_depth_1' => 'All',
              'term_node_tid_depth' => 'All',
              'term_node_tid_depth_2' => 'All',
              'keys' => '',
              'sort_order' => 'DESC',
              'sort_by' => 'field_published_date_value',
            ),
            'use_pager' => 1,
            'pager_id' => 0,
            'items_per_page' => 10,
            'override_title' => '',
            'override_title_text' => '',
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
            'widget_title' => '',
            'fields_override' => array(
              'title' => 1,
              'field_published_date' => 1,
            ),
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => '16ff2951-2241-4d47-b6d0-1ad702a78848',
        ); /* WAS: '' */
    $data['node:oa_section:oa_section_news']->display->content['new-60764651-f3d4-4f32-a25e-56c63162c11f']->position = 1; /* WAS: 3 */
    $data['node:oa_section:oa_section_news']->display->content['new-9af9cc15-2fcb-4960-8d6e-276c1e3ba12f'] = (object) array(
          'pid' => 'new-9af9cc15-2fcb-4960-8d6e-276c1e3ba12f',
          'panel' => 'sidebar',
          'type' => 'iasc_configuration.section_menu',
          'subtype' => 'iasc_configuration.section_menu',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => array(
              'secondary_options' => 'panel-primary',
              'linked_list' => 'none',
            ),
            'style' => 'secondary',
          ),
          'css' => array(
            'css_id' => '',
            'css_class' => 'section-menu',
          ),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '9af9cc15-2fcb-4960-8d6e-276c1e3ba12f',
        ); /* WAS: '' */
    $data['node:oa_section:oa_section_news']->display->content['new-bdebbf8b-cf16-44e5-aa9c-4f168d4d8310'] = (object) array(
          'pid' => 'new-bdebbf8b-cf16-44e5-aa9c-4f168d4d8310',
          'panel' => 'sidebar',
          'type' => 'iasc_announcement.add_news',
          'subtype' => 'iasc_announcement.add_news',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => 'bdebbf8b-cf16-44e5-aa9c-4f168d4d8310',
        ); /* WAS: '' */
    $data['node:oa_section:oa_section_news']->display->panels['contentmain'][0] = 'new-03555883-c1be-428e-8004-42cc225cc337'; /* WAS: 'new-2010ab8d-8b3a-4f76-8bcd-a9b92ba1417b' */
    $data['node:oa_section:oa_section_news']->display->panels['contentmain'][1] = 'new-60764651-f3d4-4f32-a25e-56c63162c11f'; /* WAS: 'new-a1345e0e-4ffb-4445-b615-b8922b7dba10' */
    $data['node:oa_section:oa_section_news']->display->panels['contentmain'][2] = 'new-16ff2951-2241-4d47-b6d0-1ad702a78848'; /* WAS: 'new-d2e48391-04fd-4e47-a3ee-9442c060a4e8' */
    $data['node:oa_section:oa_section_news']->display->panels['sidebar'][0] = 'new-9af9cc15-2fcb-4960-8d6e-276c1e3ba12f'; /* WAS: 'new-e7915e9b-dd20-424f-b4e9-4bc4d9a81cbc' */
    $data['node:oa_section:oa_section_news']->display->panels['sidebar'][1] = 'new-bdebbf8b-cf16-44e5-aa9c-4f168d4d8310'; /* WAS: 'new-83087d0e-6633-4275-baea-7bb63a3fb92f' */
    $data['node:oa_section:oa_section_news']->display->title = 'News of %node:og_group_ref'; /* WAS: '' */
    unset($data['node:oa_section:oa_section_news']->display->content['new-2010ab8d-8b3a-4f76-8bcd-a9b92ba1417b']);
    unset($data['node:oa_section:oa_section_news']->display->content['new-83087d0e-6633-4275-baea-7bb63a3fb92f']);
    unset($data['node:oa_section:oa_section_news']->display->content['new-a1345e0e-4ffb-4445-b615-b8922b7dba10']);
    unset($data['node:oa_section:oa_section_news']->display->content['new-d2e48391-04fd-4e47-a3ee-9442c060a4e8']);
    unset($data['node:oa_section:oa_section_news']->display->content['new-e7915e9b-dd20-424f-b4e9-4bc4d9a81cbc']);
    unset($data['node:oa_section:oa_section_news']->display->panels['contentmain'][3]);
  }
  if (isset($data['node:oa_space:default'])) {
    $data['node:oa_space:default']->display->content['new-02b7adcf-d6d0-41cc-9e74-71ce68194477'] = (object) array(
          'pid' => 'new-02b7adcf-d6d0-41cc-9e74-71ce68194477',
          'panel' => 'contentmain',
          'type' => 'views_panes',
          'subtype' => 'oa_event_list-panel_pane_upcoming_meetings_filterable',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'exposed' => array(
              'field_oa_date_value' => array(
                'value' => '2014-11-01',
              ),
              'field_oa_date_value_1' => array(
                'value' => NULL,
              ),
              'field_city_value' => '',
              'og_group_ref_target_id' => '',
              'og_group_ref_target_id_mine' => 0,
              'og_subspaces_view_all' => 1,
              'og_subspaces_view_parent' => 0,
              'oa_section_ref_target_id' => 'All',
              'keys' => '',
            ),
            'show_exposed_form' => 0,
            'use_pager' => 1,
            'pager_id' => 0,
            'items_per_page' => 6,
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
          'uuid' => '02b7adcf-d6d0-41cc-9e74-71ce68194477',
        ); /* WAS: '' */
    $data['node:oa_space:default']->display->content['new-231a7676-b37f-4d85-bd32-996525f4e9d2'] = (object) array(
          'pid' => 'new-231a7676-b37f-4d85-bd32-996525f4e9d2',
          'panel' => 'sidebar',
          'type' => 'views_panes',
          'subtype' => 'search_contacts-panel_pane_contacts',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'use_pager' => 0,
            'pager_id' => 0,
            'items_per_page' => 0,
            'fields_override' => array(
              'field_photo' => 1,
              'title' => 1,
              'field_homepage' => 0,
              'field_organisation' => 1,
              'field_position' => 0,
              'field_body_membership' => 0,
              'field_org_address_locality' => 0,
              'field_email' => 0,
              'field_phone' => 0,
            ),
            'exposed' => array(
              'title' => '',
              'field_body_membership_target_id' => array(),
              'field_organisation_tid' => array(),
              'field_department_value' => '',
              'field_position_value' => 'Chair Co-Chairs Members Secondary',
            ),
            'override_title' => '',
            'override_title_text' => '',
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
            'widget_title' => 'Members',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => array(
              'secondary_options' => 'panel-primary',
              'linked_list' => 'none',
            ),
            'style' => 'secondary',
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
          'uuid' => '231a7676-b37f-4d85-bd32-996525f4e9d2',
        ); /* WAS: '' */
    $data['node:oa_space:default']->display->content['new-2ef72fbd-6a52-407d-9f90-eff0b2c09771']->position = 1; /* WAS: 0 */
    $data['node:oa_space:default']->display->content['new-35ab60ac-d6d7-41b2-a57e-21ca28e5e974'] = (object) array(
          'pid' => 'new-35ab60ac-d6d7-41b2-a57e-21ca28e5e974',
          'panel' => 'sidebar',
          'type' => 'views_panes',
          'subtype' => 'iasc_document-panel_pane_featured_products',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'featured',
            'use_pager' => 0,
            'pager_id' => 0,
            'items_per_page' => 0,
            'override_title' => '',
            'override_title_text' => '',
            'widget_title' => 'Featured Products',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => array(
              'secondary_options' => 'panel-success',
              'linked_list' => 'none',
            ),
            'style' => 'secondary',
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => '35ab60ac-d6d7-41b2-a57e-21ca28e5e974',
        ); /* WAS: '' */
    $data['node:oa_space:default']->display->content['new-652e1d79-7e20-4a4b-8b66-4fc46244013e'] = (object) array(
          'pid' => 'new-652e1d79-7e20-4a4b-8b66-4fc46244013e',
          'panel' => 'sidebar',
          'type' => 'views_panes',
          'subtype' => 'iasc_document-panel_pane_recent_docs',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'featured',
            'use_pager' => 0,
            'pager_id' => 0,
            'items_per_page' => 5,
            'override_title' => '',
            'override_title_text' => '',
            'widget_title' => 'Recently Published Documents',
            'exposed' => array(
              'og_group_ref_target_id' => '',
              'og_group_ref_target_id_mine' => 0,
              'og_subspaces_view_all' => 1,
              'og_subspaces_view_parent' => 0,
              'sort_order' => 'DESC',
              'sort_by' => 'field_published_date_value',
            ),
          ),
          'cache' => array(),
          'style' => array(
            'settings' => array(
              'secondary_options' => 'panel-success',
              'linked_list' => 'doc-icon',
            ),
            'style' => 'secondary',
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => '652e1d79-7e20-4a4b-8b66-4fc46244013e',
        ); /* WAS: '' */
    $data['node:oa_space:default']->display->content['new-7a5494e0-8193-4be3-9f00-6c180f2e0e02']->position = 2; /* WAS: 1 */
    $data['node:oa_space:default']->display->content['new-94667a81-1de1-4383-b664-b33eb79bd66b'] = (object) array(
          'pid' => 'new-94667a81-1de1-4383-b664-b33eb79bd66b',
          'panel' => 'contentmain',
          'type' => 'node_title',
          'subtype' => 'node_title',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'link' => 0,
            'markup' => 'none',
            'id' => '',
            'class' => '',
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => '%node:title',
            'override_title_heading' => 'h1',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '94667a81-1de1-4383-b664-b33eb79bd66b',
        ); /* WAS: '' */
    $data['node:oa_space:default']->display->content['new-a803a7e9-5a34-491d-878b-ac2f3fc7688e'] = (object) array(
          'pid' => 'new-a803a7e9-5a34-491d-878b-ac2f3fc7688e',
          'panel' => 'sidebar',
          'type' => 'iasc_configuration.section_menu',
          'subtype' => 'iasc_configuration.section_menu',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => array(
              'secondary_options' => 'panel-primary',
              'linked_list' => 'none',
            ),
            'style' => 'secondary',
          ),
          'css' => array(
            'css_id' => '',
            'css_class' => 'section-menu',
          ),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => 'a803a7e9-5a34-491d-878b-ac2f3fc7688e',
        ); /* WAS: '' */
    $data['node:oa_space:default']->display->content['new-b1dbb2ba-786d-47d1-a861-30c45ad473d4'] = (object) array(
          'pid' => 'new-b1dbb2ba-786d-47d1-a861-30c45ad473d4',
          'panel' => 'sidebar',
          'type' => 'views_panes',
          'subtype' => 'search_contacts-panel_pane_contacts',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'use_pager' => 1,
            'pager_id' => 0,
            'items_per_page' => 0,
            'fields_override' => array(
              'field_photo' => 0,
              'title' => 1,
              'field_homepage' => 0,
              'field_organisation' => 1,
              'field_position' => 0,
              'field_body_membership' => 0,
              'field_org_address_locality' => 1,
              'field_email' => 1,
              'field_phone' => 1,
            ),
            'exposed' => array(
              'title' => '',
              'field_body_membership_target_id' => array(),
              'field_organisation_tid' => array(),
              'field_department_value' => '',
              'field_position_value' => 'Contact',
            ),
            'override_title' => '',
            'override_title_text' => '',
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
            'widget_title' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => array(
              'secondary_options' => 'panel-primary',
              'linked_list' => 'none',
            ),
            'style' => 'secondary',
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 4,
          'locks' => array(),
          'uuid' => 'b1dbb2ba-786d-47d1-a861-30c45ad473d4',
        ); /* WAS: '' */
    $data['node:oa_space:default']->display->content['new-ef209430-cd92-42f8-ab1a-66dd810461e2'] = (object) array(
          'pid' => 'new-ef209430-cd92-42f8-ab1a-66dd810461e2',
          'panel' => 'contentmain',
          'type' => 'views_panes',
          'subtype' => 'oa_event_list-panel_pane_1',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'exposed' => array(
              'og_group_ref_target_id' => '',
              'og_group_ref_target_id_mine' => 0,
              'og_subspaces_view_all' => 1,
              'og_subspaces_view_parent' => 0,
              'oa_section_ref_target_id' => 'All',
              'flagged' => 0,
            ),
            'items_per_page' => 10,
            'override_title' => '',
            'override_title_text' => '',
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
            'widget_title' => 'Past Meetings',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 4,
          'locks' => array(),
          'uuid' => 'ef209430-cd92-42f8-ab1a-66dd810461e2',
        ); /* WAS: '' */
    $data['node:oa_space:default']->display->layout = 'burr_flipped'; /* WAS: 'radix_bryant_flipped' */
    $data['node:oa_space:default']->display->panels['contentmain'][0] = 'new-94667a81-1de1-4383-b664-b33eb79bd66b'; /* WAS: 'new-2ef72fbd-6a52-407d-9f90-eff0b2c09771' */
    $data['node:oa_space:default']->display->panels['contentmain'][1] = 'new-2ef72fbd-6a52-407d-9f90-eff0b2c09771'; /* WAS: 'new-7a5494e0-8193-4be3-9f00-6c180f2e0e02' */
    $data['node:oa_space:default']->display->panels['contentmain'][2] = 'new-7a5494e0-8193-4be3-9f00-6c180f2e0e02'; /* WAS: 'new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de' */
    $data['node:oa_space:default']->display->panels['contentmain'][3] = 'new-02b7adcf-d6d0-41cc-9e74-71ce68194477'; /* WAS: '' */
    $data['node:oa_space:default']->display->panels['contentmain'][4] = 'new-ef209430-cd92-42f8-ab1a-66dd810461e2'; /* WAS: '' */
    $data['node:oa_space:default']->display->panels['sidebar'][0] = 'new-a803a7e9-5a34-491d-878b-ac2f3fc7688e'; /* WAS: 'new-801d2668-fa45-4031-83ba-e7d47830a8a6' */
    $data['node:oa_space:default']->display->panels['sidebar'][1] = 'new-35ab60ac-d6d7-41b2-a57e-21ca28e5e974'; /* WAS: 'new-2b5ef25a-4dce-4b89-99b7-f940adbd5e95' */
    $data['node:oa_space:default']->display->panels['sidebar'][2] = 'new-652e1d79-7e20-4a4b-8b66-4fc46244013e'; /* WAS: 'new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54' */
    $data['node:oa_space:default']->display->panels['sidebar'][3] = 'new-231a7676-b37f-4d85-bd32-996525f4e9d2'; /* WAS: '' */
    $data['node:oa_space:default']->display->panels['sidebar'][4] = 'new-b1dbb2ba-786d-47d1-a861-30c45ad473d4'; /* WAS: '' */
    unset($data['node:oa_space:default']->display->content['new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54']);
    unset($data['node:oa_space:default']->display->content['new-2b5ef25a-4dce-4b89-99b7-f940adbd5e95']);
    unset($data['node:oa_space:default']->display->content['new-801d2668-fa45-4031-83ba-e7d47830a8a6']);
    unset($data['node:oa_space:default']->display->content['new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de']);
  }
  if (isset($data['node:panopoly_page:default'])) {
    $data['node:panopoly_page:default']->pipeline = 'ipe_node_access'; /* WAS: 'ipe' */
  }
}

/**
 * Implements hook_default_panels_mini_alter().
 */
function iasc_configuration_default_panels_mini_alter(&$data) {
  if (isset($data['default_section_sidebar'])) {
    $data['default_section_sidebar']->display->content['new-e88f722e-09b5-451c-b694-f6b79c2d8554']->style['settings']['secondary_options'] = 'panel-primary'; /* WAS: '' */
    $data['default_section_sidebar']->display->content['new-e88f722e-09b5-451c-b694-f6b79c2d8554']->style['style'] = 'secondary'; /* WAS: '' */
  }
  if (isset($data['oa_toolbar_panel'])) {
    $data['oa_toolbar_panel']->display->content['new-1c7d87cd-035a-4552-b154-20fe54ebb76a'] = (object) array(
          'pid' => 'new-1c7d87cd-035a-4552-b154-20fe54ebb76a',
          'panel' => 'footer',
          'type' => 'oa_toolbar_search',
          'subtype' => 'oa_toolbar_search',
          'shown' => FALSE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
          'uuid' => '1c7d87cd-035a-4552-b154-20fe54ebb76a',
        ); /* WAS: '' */
    $data['oa_toolbar_panel']->display->content['new-2b828bf5-01a6-4805-a95d-6c64c67317ef']->access['plugins'] = array(
      0 => array(
        'name' => 'theme',
        'settings' => array(
          'theme' => 'iasc',
        ),
        'not' => TRUE,
      ),
    ); /* WAS: '' */
    $data['oa_toolbar_panel']->display->content['new-3bd6fb98-8bec-48c8-9777-cf8850617d9f']->access['plugins'] = array(
      0 => array(
        'name' => 'theme',
        'settings' => array(
          'theme' => 'iasc',
        ),
        'not' => TRUE,
      ),
    ); /* WAS: '' */
    $data['oa_toolbar_panel']->display->content['new-70813a7e-2551-49da-bd7c-4acaff4cae42']->access['plugins'] = array(
      0 => array(
        'name' => 'theme',
        'settings' => array(
          'theme' => 'iasc',
        ),
        'not' => TRUE,
      ),
    ); /* WAS: '' */
    $data['oa_toolbar_panel']->display->content['new-70813a7e-2551-49da-bd7c-4acaff4cae42']->position = 5; /* WAS: 6 */
    $data['oa_toolbar_panel']->display->content['new-bf0e9047-1f82-4bcf-bf9b-f97fe6748f41']->access['plugins'] = array(
      0 => array(
        'name' => 'theme',
        'settings' => array(
          'theme' => 'iasc',
        ),
        'not' => TRUE,
      ),
    ); /* WAS: '' */
    $data['oa_toolbar_panel']->display->content['new-e8e35514-f8e5-4d1a-9767-fdd77c4339ef'] = (object) array(
          'pid' => 'new-e8e35514-f8e5-4d1a-9767-fdd77c4339ef',
          'panel' => 'footer',
          'type' => 'apachesolr_form',
          'subtype' => 'apachesolr_form',
          'shown' => TRUE,
          'access' => array(
            'plugins' => array(
              0 => array(
                'name' => 'theme',
                'settings' => array(
                  'theme' => 'iasc',
                ),
                'not' => TRUE,
              ),
            ),
          ),
          'configuration' => array(
            'path_type' => 'custom',
            'path' => 'site/search',
            'override_prompt' => 0,
            'prompt' => '',
            'show_keys' => 1,
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(
            'css_id' => '',
            'css_class' => 'search-mobile-menu pull-right pane-oa-toolbar-search',
          ),
          'extras' => array(),
          'position' => 4,
          'locks' => array(),
          'uuid' => 'e8e35514-f8e5-4d1a-9767-fdd77c4339ef',
        ); /* WAS: '' */
    $data['oa_toolbar_panel']->display->panels['footer'][3] = 'new-70813a7e-2551-49da-bd7c-4acaff4cae42'; /* WAS: 'new-818fa3a5-376e-4e7f-8f98-77ed1a6c3252' */
    $data['oa_toolbar_panel']->display->panels['footer'][4] = 'new-1c7d87cd-035a-4552-b154-20fe54ebb76a'; /* WAS: 'new-738df920-1380-4622-ba4c-21f486060818' */
    $data['oa_toolbar_panel']->display->panels['footer'][5] = 'new-e8e35514-f8e5-4d1a-9767-fdd77c4339ef'; /* WAS: 'new-8392382b-5711-4749-96e6-48ae5a7dda23' */
    unset($data['oa_toolbar_panel']->display->content['new-738df920-1380-4622-ba4c-21f486060818']);
    unset($data['oa_toolbar_panel']->display->content['new-818fa3a5-376e-4e7f-8f98-77ed1a6c3252']);
    unset($data['oa_toolbar_panel']->display->content['new-8392382b-5711-4749-96e6-48ae5a7dda23']);
    unset($data['oa_toolbar_panel']->display->panels['footer'][6]);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function iasc_configuration_strongarm_alter(&$data) {
  if (isset($data['bootstrap_library_settings'])) {
    $data['bootstrap_library_settings']->value['theme']['themes']['iasc'] = 'iasc'; /* WAS: '' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function iasc_configuration_views_default_views_alter(&$data) {
  if (isset($data['oa_comment_media'])) {
    unset($data['oa_comment_media']->display['default']->display_options['relationships']['field_oa_related_node']['label']);
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function iasc_configuration_flag_default_flags() {
  $flags = array();
  // Exported flag: "Featured".
  $flags['featured'] = array(
    'content_type' => 'node',
    'title' => 'Featured',
    'global' => 1,
    'types' => array(
      0 => 'oa_wiki_page',
    ),
    'flag_short' => 'Featured',
    'flag_long' => 'Mark as Featured',
    'flag_message' => 'Flagged as Featured!',
    'unflag_short' => 'Remove Featured flag',
    'unflag_long' => 'Remove item from Featured list',
    'unflag_message' => 'Removed Featured flag',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 3,
      ),
      'unflag' => array(
        0 => 3,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'iasc_configuration',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Show on Homepage".
  $flags['show_on_home'] = array(
    'content_type' => 'node',
    'title' => 'Show on Homepage',
    'global' => 1,
    'types' => array(
      0 => 'announcement',
    ),
    'flag_short' => 'Show on Homepage',
    'flag_long' => 'Mark to promote the content to the homepage.',
    'flag_message' => 'Marked to display on Home!',
    'unflag_short' => 'Remove display on homepage.',
    'unflag_long' => 'Unmark to remove the content from the homepage.',
    'unflag_message' => 'Removed from Home!',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 3,
      ),
      'unflag' => array(
        0 => 3,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'iasc_configuration',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Special".
  $flags['special'] = array(
    'content_type' => 'node',
    'title' => 'Special',
    'global' => 1,
    'types' => array(
      0 => 'announcement',
    ),
    'flag_short' => 'Special',
    'flag_long' => 'Mark as Special',
    'flag_message' => 'Flagged as Special!',
    'unflag_short' => 'Remove Special',
    'unflag_long' => 'Unmark as Special',
    'unflag_message' => 'Removed Special flag!',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 3,
      ),
      'unflag' => array(
        0 => 3,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'iasc_configuration',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}

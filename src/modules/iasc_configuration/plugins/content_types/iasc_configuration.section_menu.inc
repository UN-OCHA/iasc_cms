<?php
/**
 * @file
 * Code for Space section menu.
 */

$plugin = array(
  'title' => t('Space Section Menu'),
  'description' => t('Provides a consistent list of sections.'),
  'category' => array(t('IASC')),
  'render callback' => 'iasc_configuration_space_section_menu_render',
);

/**
 * Renders the widget.
 */
function iasc_configuration_space_section_menu_render($subtype, $conf, $args, $context) {
  $space_nid = oa_core_get_space_context();

  if (!$space_nid) {
    return;
  }

  $space = node_load($space_nid);

  $block = new stdClass();
  $path = drupal_get_path_alias("node/$space_nid");

  $types = array(t('documents'), t('meetings'), t('news'), t('discussions'));
  $links = array();
  foreach ($types as $type) {
    if (drupal_valid_path("node/$space_nid/$type")) {
      $links[$type] = array(
        'title' => ucfirst($type),
        'href' => "$path/$type",
      );
    }
  }

  $block->title = t('Sections');
  $block->content = '<p class="space-title">' . l($space->title, "node/$space_nid") . '</p>';
  $block->content .= theme('links', array('links' => $links));

  return $block;
}

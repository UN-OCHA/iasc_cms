<?php
/**
 * @file
 * Code for Add meeting button.
 */

$plugin = array(
  'title' => t('View all Meetings'),
  'description' => t('Provides a button to View all Meetings'),
  'category' => array(t('IASC')),
  'render callback' => 'iasc_meeting_view_all_meeting_render',
);

/**
 * Renders the widget.
 */
function iasc_meeting_view_all_meeting_render($subtype, $conf, $args, $context) {
  $space_nid = oa_core_get_space_context();

  if (!$space_nid) {
    return;
  }

  $block = new stdClass();
  
  $classes = array(
    'oa-buttons',
    'btn',
    'btn-inverse',
  );

  $items = l(t('View all Meetings'), "section/$space_nid/meetings/all",
    array(
      'attributes' => array('class' => $classes),
    )
  );

  $block->content = $items;

  return $block;
}

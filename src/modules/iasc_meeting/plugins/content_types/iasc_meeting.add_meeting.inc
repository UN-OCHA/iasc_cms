<?php
/**
 * @file iasc_meeting.add_meeting.inc
 */

$plugin = array(
  'title' => t('Add a Meeting'),
  'description' => t('Provides a button to Add a meeting'),
  'category' => array(t('IASC')),
  'render callback' => 'iasc_meeting_add_meeting_render',
);

/**
 * Renders the widget.
 */
function iasc_meeting_add_meeting_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $section = oa_core_get_section_context();

  $classes = array(
    'oa-buttons',
    'btn',
    'btn-inverse',
  );

  $items = l(t('Add a Meeting'), 'node/add/oa-event',
    array(
      'attributes' =>
        array('class' => $classes),
      'query' => array('oa_section_ref' => $section),
    )
  );

  $block->content = $items;

  return $block;
}

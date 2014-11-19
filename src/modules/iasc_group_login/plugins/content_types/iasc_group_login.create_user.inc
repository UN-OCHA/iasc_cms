<?php
/**
 * @file
 * Code for Add meeting button.
 */

$plugin = array(
  'title' => t('Create individual account'),
  'description' => t('Provides a button to Create an individual account'),
  'category' => array(t('IASC')),
  'render callback' => 'iasc_group_login_create_user_render',
);

/**
 * Renders the widget.
 */
function iasc_group_login_create_user_render($subtype, $conf, $args, $context) {
  $block = new stdClass();

  $classes = array(
    'oa-buttons',
    'btn',
    'btn-inverse',
  );

  $items = l(t('Create individual account'), 'group/user/register',
    array(
      'attributes' => array('class' => $classes),
    )
  );

  $block->content = $items;

  return $block;
}

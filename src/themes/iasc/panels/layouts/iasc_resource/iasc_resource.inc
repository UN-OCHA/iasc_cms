<?php
/**
 * @file
 * Plugin definition.
 */

$plugin = array(
  'title' => t('IASC Resource'),
  'icon' => 'iasc-resource.png',
  'category' => t('IASC'),
  'theme' => 'iasc_resource',
  'regions' => array(
    'header' => t('Header'),
    'sidebar' => t('Content Sidebar'),
    'contentmain' => t('Content'),
    'footer' => t('Footer'),
  ),
);

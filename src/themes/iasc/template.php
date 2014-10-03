<?php
/**
 * @file
 * Theme functions
 */

require_once dirname(__FILE__) . '/includes/structure.inc';
require_once dirname(__FILE__) . '/includes/form.inc';
require_once dirname(__FILE__) . '/includes/menu.inc';
require_once dirname(__FILE__) . '/includes/comment.inc';
require_once dirname(__FILE__) . '/includes/node.inc';

/**
 * Implements hook_css_alter().
 */
function iasc_css_alter(&$css) {
  $oa_radix_path = drupal_get_path('theme', 'oa_radix');

  // Radix now includes compiled stylesheets for demo purposes.
  // We remove these from our subtheme since they are already included
  // in compass_radix.
  unset($css[$oa_radix_path . '/assets/stylesheets/oa_radix-style.css']);
  unset($css[$oa_radix_path . '/assets/stylesheets/oa_radix-print.css']);
}


/**
 * Implements template_preprocess_html().
 */
function iasc_preprocess_html(&$vars) {
  // Add Google fonts.
  drupal_add_css('http://fonts.googleapis.com/css?family=Montserrat:400,700', 'external');
  drupal_add_css('http://fonts.googleapis.com/css?family=Merriweather:400,400italic,700,700italic', 'external');
}

/**
 * Implements template_preprocess_page().
 */
function iasc_preprocess_page(&$variables) {
  // Add copyright to theme.
  if ($copyright = theme_get_setting('copyright')) {
    $variables['copyright'] = check_markup($copyright['value'], $copyright['format']);
  }

  // Move Panel IPE on top of primary tabs.
  if (!empty($variables['page']['page_bottom']['panels_ipe'])) {
    $panels_ipe = $variables['page']['page_bottom']['panels_ipe'];
    unset($variables['page']['page_bottom']['panels_ipe']);
    array_push($variables['page']['panelipe'], $panels_ipe);
  }
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function iasc_form_panels_edit_style_type_form_alter(&$form, &$form_state, $form_id) {

  // Unset default panel styles.
  unset($form['style']['style']['#options']['default']);
  unset($form['style']['style']['#options']['oa_styles_well']);
  unset($form['style']['style']['#options']['oa_styles_oa_pane']);

  // And set primary styles as default.
  $form['style']['style']['#default_value'] = 'primary';

}

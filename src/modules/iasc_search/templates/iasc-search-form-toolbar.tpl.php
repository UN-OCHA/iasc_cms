<?php
/**
 * @file
 * Themes oa_apachesolr_search_form() for use in the toolbar for IASC.
 *
 * - $element: The form elements.
 * - $oa_toolbar_btn_class: A class to add to the buttons.Block template for Search Results Login Call to Action.
 */
?>

<div class="input-append">
  <div class="wrapper">
      <?php print drupal_render($element['apachesolr_panels_search_form']); ?>
  </div>
  <div class="btn-group">
    <?php hide($element['actions']['submit']); ?>
    <button type="submit" class="btn submit <?php print $oa_toolbar_btn_class; ?>">
      <i class="icon-search"></i><span class="element-invisible"><?php print t('Search Button');?></span>
    </button>
  </div>
  <?php print drupal_render_children($element); ?>
</div>


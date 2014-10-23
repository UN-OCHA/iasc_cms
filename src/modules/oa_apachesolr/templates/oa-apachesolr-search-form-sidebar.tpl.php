<?php
/**
 * @file
 * Themes oa_apachesolr_search_form() for use in the sidebar.
 *
 * - $element: The form elements.
 */
?>

<div class="input-append">
  <?php print drupal_render($element['keys']); ?>
  <?php hide($element['submit']); ?>
  <button type="submit" class="btn submit">
    <i class="icon-search"></i><span class="element-invisible"><?php print t('Search Button');?></span>
  </button>
</div>
<?php if ($element['options']['#type'] == 'radios'): ?>
  <?php hide($element['options']); ?>
  <ul class="options">
  <?php foreach ($element['options']['#options'] as $option => $label): ?>
    <li>
      <label class="radio">
        <input type="radio" name="options" value="<?php print $option; ?>" <?php print $element['options']['#default_value'] == $option ? 'checked' : ''; ?>>
        <?php print $label; ?>
      </label>
    </li>
  <?php endforeach; ?>
<?php endif; ?>
<?php print drupal_render_children($element); ?>

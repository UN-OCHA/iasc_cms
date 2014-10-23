<?php
/**
 * @file
 * Themes oa_apachesolr_search_form() for use in the toolbar.
 *
 * - $element: The form elements.
 * - $oa_toolbar_btn_class: A class to add to the buttons.
 */
?>

<div class="input-append">
  <?php print drupal_render($element['keys']); ?>
  <div class="btn-group">
    <?php hide($element['submit']); ?>
    <button type="submit" class="btn submit <?php print $oa_toolbar_btn_class; ?>">
      <i class="icon-search"></i><span class="element-invisible"><?php print t('Search Button');?></span>
    </button>
    <button class="btn dropdown-toggle <?php print $oa_toolbar_btn_class; ?>" data-toggle="dropdown">
      <i class="caret"></i><span class="element-invisible"><?php print t('Search Options');?></span>
    </button>
    <?php if ($element['options']['#type'] == 'radios'): ?>
      <?php hide($element['options']); ?>
      <ul class="dropdown-menu options">
      <?php foreach ($element['options']['#options'] as $option => $label): ?>
        <li>
          <label class="radio">
            <input type="radio" name="options" value="<?php print $option; ?>" <?php print $element['options']['#default_value'] == $option ? 'checked' : ''; ?>>
            <?php print $label; ?>
          </label>
        </li>
      <?php endforeach; ?>
      </ul>
    <?php endif; ?>
  </div>
  <?php print drupal_render_children($element); ?>
</div>

<?php
/**
 * @file
 * Field template for all contact fields.
 *
 * If less than 1 item print the label as normal,
 * If more than 1 item print label + incrementing numbers insde the foreach.
 */
$ic = count($items);
?><div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden && ($ic < 2)): ?>
    <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>
<div class="field-items"<?php print $content_attributes; ?>>
    <?php foreach ($items as $delta => $item): ?>
      <?php if (!$label_hidden && ($ic > 1)): ?>
        <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?> <?php print $delta + 1; ?>:&nbsp;</div>
      <?php endif; ?>
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>>
        <?php print render($item); ?>
      </div><?php if($ic > 1): ?><br /><?php endif ?>
    <?php endforeach; ?>
  </div>
</div>

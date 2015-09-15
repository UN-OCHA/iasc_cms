<?php

/**
 * @file
 * Event Details view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output
 *   safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field.
 *   Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to
 *   use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<div class='oa-event clearfix'>
  <div class='oa-event-add-cal'>
    <?php  print $field_oa_date_2; ?>
  </div>
  <div class='oa-event-header'>
    <div class='oa-event-icon'>
      <?php if (!empty($field_oa_media)): ?>
        <?php print $field_oa_media; ?>
      <?php else: ?>
        <?php print $field_oa_date_1; ?>
      <?php endif; ?>
    </div>

    <div class='oa-event-details'>
      <div class="row">
        <?php // Display primary date and time. ?>
        <div class="col-md-4">
          <?php print $field_oa_date; ?>
          <div>
            in <strong><?php print $field_city;?></strong>
          </div>
        </div>

        <?php if (isset($first_other_date)): ?>
          <div class="col-md-4">
            <?php print $first_other_date['start']; ?> to <?php print $first_other_date['end']; ?>
            <div>
              in <strong><?php print $first_other_date['city'];?></strong>
            </div>
          </div>
        <?php endif; ?>

        <?php if (isset($second_other_date)): ?>
          <div class="col-md-4">
            <?php print $second_other_date['start']; ?> to <?php print $second_other_date['end']; ?>
            <div>
              in <strong><?php print $second_other_date['city'];?></strong>
            </div>
          </div>
        <?php endif; ?>

      </div>

      <?php if (count($other_dates)): ?>
        <?php foreach($other_dates as $index => $date): ?>
          <?php if (0 == $index): ?>
            <div class="row">
          <?php elseif ($index > 0 && !($index % 3)): ?>
            </div><div class="row">
          <?php endif; ?>

          <div class="col-md-4">
            <?php print $date['start']; ?> to <?php print $date['end']; ?>
            <div>
              in <strong><?php print $date['city'];?></strong>
            </div>
          </div>
        <?php endforeach; ?>

        </div>
      <?php endif; ?>
    </div>

    <?php // Additional helpful widgets. ?>
    <div class="row event-additional row col-xs-12">
      <?php // My Timezone widget. ?>
      <div class="col-md-6 col-md-offset-2">
        <?php print drupal_render($my_timezone_form); ?>
      </div>

      <?php // Add to Calendar widget. ?>
      <div class="oa-event-add-cal col-md-4">
        <?php print $field_oa_date_2; ?>
      </div>
    </div>


  </div>
</div>


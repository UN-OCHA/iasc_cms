<?php
/**
 * @file
 * Default template for event dates.
 */
?>
<div class='iasc-event-date-wrapper radius'>
  <div class='iasc-event-date-month-wrapper'>
    <span class='iasc-event-date-month text-uppercase'>
      <?php if ($variables['month_end'] != $variables['month']): ?>
        <?php print $variables['month'] . '-' . $variables['month_end']; ?>
      <?php else: ?>
        <?php print $variables['month']; ?>
      <?php endif; ?>
    </span>
  </div>
  <div class='iasc-event-date-day-wrapper'>
    <span class='iasc-event-date-day'>
      <?php if ($variables['day_end'] != $variables['day']): ?>
        <?php print $variables['day'] . '-' . $variables['day_end']; ?>
      <?php else: ?>
        <?php print $variables['day']; ?>
      <?php endif; ?>
    </span>
  </div>
  <div class='iasc-event-date-year-wrapper'>
    <small class='iasc-event-date-year'>
      <?php if ($variables['year_end'] != $variables['year']): ?>
        <?php print $variables['year'] . '-' . $variables['year_end']; ?>
      <?php else: ?>
        <?php print $variables['year']; ?>
      <?php endif; ?>
    </small>
  </div>
</div>

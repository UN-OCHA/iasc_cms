<?php
/**
 * @file
 * Default template for event dates.
 */
?>
<div class='iasc-event-date-wrapper radius'>
  <div class='iasc-event-date-month-wrapper'>
    <span class='iasc-event-date-month text-uppercase'>
      <?php print $variables['month']?>
    </span>
  </div>
  <div class='iasc-event-date-day-wrapper'>
    <span class='iasc-event-date-day'>
      <?php print $variables['day']?>
    </span>
  </div>
  <div class='iasc-event-date-year-wrapper'>
    <small class='iasc-event-date-year'>
      <?php print $year; ?>
    </small>
  </div>
</div>

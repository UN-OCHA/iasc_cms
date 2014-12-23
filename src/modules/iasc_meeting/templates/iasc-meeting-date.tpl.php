<?php
/**
 * @file
 * Default template for event dates.
 */
?>
<div class='iasc-event-date-wrapper radius'>
  <div class='iasc-event-date-month-wrapper'>
    <span class='iasc-event-date-month text-uppercase'>
      <?php if($variables['month_end'] != $variables['month']) {
        print $variables['month'] . '-' . $variables['month_end'];
      }else{
        print $variables['month'];
      } ?>
    </span>
  </div>
  <div class='iasc-event-date-day-wrapper'>
    <span class='iasc-event-date-day'>
      <?php if($variables['day_end'] != $variables['day']) {
        print $variables['day'] . '-' . $variables['day_end'];
      }else{
        print $variables['day'];
      } ?>
    </span>
  </div>
  <div class='iasc-event-date-year-wrapper'>
    <small class='iasc-event-date-year'>
      <?php if($variables['year_end'] != $variables['year']) {
        print $variables['year'] . '-' . $variables['year_end'];
      }else{
        print $variables['year'];
      } ?>
    </small>
  </div>
</div>

<?php
/**
 * @file
 * iasc_meeting.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function iasc_meeting_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Meeting - Login CTA';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'meeting_login_cta';
  $fe_block_boxes->body = '<div class="alert alert-warning alert-dismissible fade in" role="alert">
  <button type="button" class="close" data-dismiss="alert"><span aria-hidden="true">×</span><span class="sr-only">Close</span></button>
  <h4>Notice</h4>
  <p>Meetings often reference non-public documents. Members of the IASC community should login using their <a href="/user/ac">group</a>, or <a href="/user">personal accounts</a> to see all available content.</p>
</div>';

  $export['meeting_login_cta'] = $fe_block_boxes;

  return $export;
}

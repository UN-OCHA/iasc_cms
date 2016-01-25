<?php
/**
 * @file
 * Block template for Meeting Login Call to Action.
 */
?>
<div class="alert alert-warning alert-dismissible fade in" role="alert">
  <button type="button" class="close" data-dismiss="alert"><span aria-hidden="true">×</span><span class="sr-only">Close</span></button>
  <h4>Please Log In for Full Document Listing</h4>
  <p>Meetings often reference non-public documents. Please 
    <?php print l(t('log in'), 'user/iasc_login', array('query' => array('destination' => $dest))); ?>
    to see all available content.</p>
</div>

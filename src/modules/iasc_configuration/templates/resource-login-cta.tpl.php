<?php
/**
 * @file
 * Block template for Resource Page Login Call to Action.
 */
?>
<div class="alert alert-warning alert-dismissible fade in" role="alert">
  <button type="button" class="close" data-dismiss="alert"><span aria-hidden="true">×</span><span class="sr-only">Close</span></button>
  <h4>Please Log In for Full Results</h4>
  <p>Members of the IASC community should log in using their
    <?php print l(t('group'), 'user/ac', array('query' => array('destination' => $dest))); ?>, or
    <?php print l(t('personal accounts'), 'user/iasc_login', array('query' => array('destination' => $dest))); ?>
    to see all available documents.</p>
</div>

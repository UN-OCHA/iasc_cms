<?php
/**
 * @file
 * Display for secondary content.
 */
?>
<div class="<?php print $class; ?>">
  <header class="panel-heading">
    <h2 class="panel-title"><?php print $content->title; ?></h2>
  </header>
  <div class="panel-body">
    <?php print render($content->content); ?>
  </div>
</div>

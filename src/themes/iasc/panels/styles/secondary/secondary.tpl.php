<?php
/**
 * @file
 * Display for secondary content.
 */
?>
<div class="<?php print $class; ?>">
  <?php if (!empty($content->title)): ?>
  <header class="panel-heading">
    <h2 class="panel-title"><?php print $content->title; ?></h2>
  </header>
  <?php endif; ?>
  <div class="panel-body">
    <?php print render($content->content); ?>
  </div>
</div>

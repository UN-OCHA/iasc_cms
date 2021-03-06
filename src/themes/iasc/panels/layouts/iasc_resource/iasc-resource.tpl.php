<?php
/**
 * @file
 * Template for Radix Moscone.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display moscone clearfix <?php if (!empty($classes)): print $classes; endif; ?><?php if (!empty($class)): print $class; endif; ?>" <?php if (!empty($css_id)): print "id=\"$css_id\""; endif; ?>>

  <div class="container-fluid">
    <div class="row">
      <div class="col-md-12 radix-layouts-header panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['header']; ?>
        </div>
      </div>
    </div>

    <div class="row">
      <div class="col-md-2 radix-layouts-sidebar panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['sidebar']; ?>
        </div>
      </div>
      <div class="col-md-10 radix-layouts-content panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['contentmain']; ?>
        </div>
      </div>
    </div>

    <div class="row">
      <div class="col-md-12 radix-layouts-footer panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['footer']; ?>
        </div>
      </div>
    </div>
  </div>

</div><!-- /.moscone -->

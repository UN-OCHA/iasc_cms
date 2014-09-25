<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 */
?>
<header id="header" class="header" role="header">
  <div class="container">
    <div class="row">
      <div class="col-md-12">
        
        <?php if ($logo): ?>
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo" class="brand">
             <img src="<?php print $logo; ?>"><div id="site-name"><?php print $site_name; ?></div>
          </a>
        <?php endif; ?>

        <div id="navigation" class="navbar navbar-default">
          <div class="navbar-inner">
            <div class="container clearfix">
              
              <?php if(!empty($page['navigation'])): ?>
              <nav id="main-nav" class="pull-left" role="navigation">
                <?php print render($page['navigation']); ?>
              </nav>
              <?php endif; ?>
  
              <?php if ($main_menu || $search_form || $user_badge): ?>
                <nav id="main-menu" class="main-menu border-radius clearfix" role="navigation">
                  <?php print render($main_menu); ?>

                  <?php if ($search_form): ?>
                    <?php print $search_form; ?>
                  <?php endif; ?>

                  <?php //if ($user_badge): ?>
                    <?php //print $user_badge; ?>
                  <?php //endif; ?>
                </nav> <!-- /#main-menu -->
              <?php endif; ?>
            </div>
          </div>
        </div> <!-- /#navigation -->
      </div>
    </div>
  </div>
  <?php if (!empty($oa_banner)): ?>
    <?php print $oa_banner; ?>
  <?php endif; ?>
  <?php if (!empty($oa_space_menu)): ?>
    <?php print $oa_space_menu; ?>
  <?php endif; ?>
</header>

<div id="main-wrapper">
  <div id="main" class="main container">
    <?php if ($breadcrumb && (arg(0) == 'admin')): ?>
      <div id="breadcrumb" class="visible-desktop">
        <div class="container">
          <?php print $breadcrumb; ?>
        </div>
      </div>
    <?php endif; ?>
    <?php if ($messages): ?>
      <div id="messages">
        <?php print $messages; ?>
      </div>
    <?php endif; ?>
    <div id="content">
      <div class="row">
        <div class="col-md-12 inner">
          <?php print render($page['panelipe']); ?>
          <?php if (!empty($primarytabs)): ?><?php print $primarytabs; ?><?php endif; ?>
          <a id="main-content"></a>
          <?php print render($title_prefix); ?>
          <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
          <?php print render($title_suffix); ?>
          <?php if (!empty($tabs['#primary']) || !empty($tabs['#secondary'])): ?><div class="tabs main-tabs"><?php print render($tabs); ?></div><?php endif; ?>
          <?php print render($page['help']); ?>
          <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
          <?php print render($page['content']); ?>
        </div>
      </div>
    </div>
  </div>
  <div id="push"></div>
</div>

<!--
<footer id="footer" class="footer" role="footer">
  <div class="container">
    <div class="row">
      <div class="col-md-12">
        <div class="footer-inner">
          <?php //if (!empty($oa_footer_panel)): ?>
            <?php //print $oa_footer_panel; ?>
          <?php //else: ?>
            <?php //print render($page['footer']); ?>
          <?php //endif; ?>
        </div>
      </div>
    </div>
  </div>
</footer> -->

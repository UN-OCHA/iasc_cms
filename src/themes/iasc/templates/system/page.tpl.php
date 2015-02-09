<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php\
 */
?>
<header class="header" ontouchstart=""><div class="container">
  <div class="top clearfix">
    <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo" class="navbar-left brand">
       <img src="<?php print $logo; ?>" alt="<?php print $site_name; ?>">
    </a>

    <nav class="navbar-top">
      <?php print theme('links__system_secondary_menu', array(
        'links' => $utility_navigation,
        'attributes' => array(
          'class' => array('list-inline', 'nav-holder', 'clearfix'),
        ),
      )); ?>
    </nav>
    <?php if($search_form): ?>
      <?php print $search_form; ?>
    <?php endif; ?>
    
  </div>
  <nav class="navbar navbar-default" role="navigation">
    <!-- Brand and toggle get grouped for better mobile display -->
    <div class="navbar-header">
      <div class="navbar-left">
        <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1">
          <span class="sr-only">Toggle navigation</span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
        </button>
      </div>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <?php print theme('links__system_main_menu', array(
        'links' => $main_menu,
        'attributes' => array(
          'class' => array('nav navbar-nav'),
        ),
      )); ?>
    </div>
  </nav>

</div></header>

<div id="main-wrapper" ontouchstart="">
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
      <?php print render($page['panelipe']); ?>
      <?php if (!empty($primarytabs)): ?><?php print $primarytabs; ?><?php endif; ?>
      <?php if (!empty($tabs['#primary']) || !empty($tabs['#secondary'])): ?><div class="tabs main-tabs"><?php print render($tabs); ?></div><?php endif; ?>
      
        <a id="main-content"></a>
        <?php print render($title_prefix); ?>
        <?php if ($title): ?><div class="row"><h1 class="title container-fluid" id="page-title"><?php print $title; ?></h1></div><?php endif; ?>
        <?php print render($title_suffix); ?>
        
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
        <?php print render($page['content']); ?>
    </div>
  </div>
  <div id="push"></div>
</div>

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
<header class="container"> 
  <div class="top clearfix">
    <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo" class="navbar-left brand">
       <img src="<?php print $logo; ?>" alt="<?php print $site_name; ?>">
    </a>
    <?php if($search_form): ?>
      <?php print $search_form; ?>
    <?php endif; ?> 
    <nav class="navbar-top navbar-right row col-xs-6 col-sm-3 col-lg-2 ">
      <ul class="list-inline nav-holder clearfix">
        <li class="col-xs-4 text-center"><a href="/" class="icons-calendar"><span class="hide">Calender</span></a></li>
        <li class="col-xs-4 text-center"><a href="/" class="icons-resources"><span class="hide">Resources</span></a></li>
        <li class="col-xs-4 text-center"><a href="/" class="icons-contact"><span class="hide">Contact Us</span></a></li>
      </ul>
    </nav>
  </div>
  <nav class="navbar navbar-default" role="navigation">
    <div class="container-fluid">
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
        <ul class="nav navbar-nav">
          <li><a href="#"><span class="icons-home"></span><span class="hide">Home</span></a></li>
          <li class="active"><a href="#">IASC</a></li>
          <li class="dropdown">
            <a href="#" class="dropdown-toggle" data-toggle="dropdown">Weekly <span class="caret"></span></a>
            <ul class="dropdown-menu" role="menu">
              <li><a href="#">Principals</a></li>
              <li><a href="#">Subsidiary Bodies</a></li>
              <li><a href="#">Transformative Agenda</a></li>
              <li class="divider"></li>
              <li><a href="#">Create New Setciton</a></li>
              <li class="divider"></li>
              <li><a href="#">One more separated link</a></li>
            </ul>
          </li>
          <li><a href="#">Working Groups</a></li>
          <li><a href="#">Priorities/Subsidary bodies</a></li>
          <li><a href="#">Prinipals</a></li>
        </ul>
      </div><!-- /.navbar-collapse -->
    </div><!-- /.container-fluid -->
  </nav>

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

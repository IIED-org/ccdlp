<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>

<div class="page">

  <header class="header" id="top-nav" role="banner">
  <div class="header-container">

 <?php print render($page['header']); ?>
    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
    <?php endif; ?>

    <?php if ($site_name || $site_slogan): ?>
      <div class="header__name-and-slogan">
        <?php if ($site_name): ?>
          <h1 class="header__site-name">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="header__site-link" rel="home"><span><?php print $site_name; ?></span></a>
          </h1>
        <?php endif; ?>

        <?php if ($site_slogan): ?>
          <div class="header__site-slogan"><?php print $site_slogan; ?></div>
        <?php endif; ?>
      </div>
    <?php endif; ?>

    <?php if ($secondary_menu): ?>
      <nav class="header__secondary-menu" role="navigation">
        <?php print theme('links__system_secondary_menu', array(
          'links' => $secondary_menu,
          'attributes' => array(
            'class' => array('links', 'inline', 'clearfix'),
          ),
          'heading' => array(
            'text' => $secondary_menu_heading,
            'level' => 'h2',
            'class' => array('visually-hidden'),
          ),
        )); ?>
      </nav>
    <?php endif; ?>

    <div class="main-navigation">

<?php if ($main_menu): ?>
  <nav class="main-menu" role="navigation" id="main-menu" tabindex="-1">
    <?php
    // This code snippet is hard to modify. We recommend turning off the
    // "Main menu" on your sub-theme's settings form, deleting this PHP
    // code block, and, instead, using the "Menu block" module.
    // @see https://drupal.org/project/menu_block
    print theme('links__system_main_menu', array(
      'links' => $main_menu,
      'attributes' => array(
        'class' => array('links', 'inline', 'clearfix'),
      ),
      'heading' => array(
        'text' => t('Main menu'),
        'level' => 'h2',
        'class' => array('visually-hidden'),
      ),
    )); ?>
  </nav>
<?php endif; ?>

<?php print render($page['navigation']); ?>

</div>

      </div>
  </header>

  <div class="main">
    <div class="preface">
       <?php print render($page['preface']); ?>
       <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
    </div>

    <div class="content-top">
      <div class="content-left"><?php print render($page['content_left']); ?></div>
      <div class="content-right"><?php print render($page['content_right']); ?></div>
    </div>

    <div class="main-content" role="main">
      <?php print render($page['highlighted']); ?>
      <?php print $breadcrumb; ?>
      <a id="main-content"></a>
     <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
    </div>


    <?php
      // Render the sidebars to see if there's anything in them.
      $sidebar_first  = render($page['sidebar_first']);
      $sidebar_second = render($page['sidebar_second']);
    ?>

    <?php if ($sidebar_first || $sidebar_second): ?>
      <aside class="sidebars">
        <?php print $sidebar_first; ?>
        <?php print $sidebar_second; ?>
      </aside>
    <?php endif; ?>

  </div>

    <div class="content-bottom">
      <?php print render($page['content_bottom']); ?>
    </div>

  <?php print render($page['footer']); ?>

</div>

<?php print render($page['bottom']); ?>

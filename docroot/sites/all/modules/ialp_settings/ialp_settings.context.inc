<?php
/**
 * @file
 * ialp_settings.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ialp_settings_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds_extras-eventsidebar' => array(
          'module' => 'ds_extras',
          'delta' => 'eventsidebar',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['event'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'forum';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'forum' => 'forum',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'forum*' => 'forum*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-advanced_forum_search-page' => array(
          'module' => 'views',
          'delta' => '-exp-advanced_forum_search-page',
          'region' => 'sidebar_first',
          'weight' => '-33',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['forum'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;
  $export['home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'messages';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'messages' => 'messages',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-private_message_tabs' => array(
          'module' => 'quicktabs',
          'delta' => 'private_message_tabs',
          'region' => 'content',
          'weight' => '40',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['messages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'my_profile';
  $context->description = 'Extra blocks for the main user page users/admin';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'users/*' => 'users/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-private_message_tabs' => array(
          'module' => 'quicktabs',
          'delta' => 'private_message_tabs',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Extra blocks for the main user page users/admin');
  $export['my_profile'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resource';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'resource' => 'resource',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-related_resources-block' => array(
          'module' => 'views',
          'delta' => 'related_resources-block',
          'region' => 'content',
          'weight' => '1',
        ),
        'ds_extras-sidebar' => array(
          'module' => 'ds_extras',
          'delta' => 'sidebar',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
    'region' => array(
      'bartik' => array(
        'disable' => array(
          'header' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'highlighted' => 0,
          'featured' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'triptych_first' => 0,
          'triptych_middle' => 0,
          'triptych_last' => 0,
          'footer_firstcolumn' => 0,
          'footer_secondcolumn' => 0,
          'footer_thirdcolumn' => 0,
          'footer_fourthcolumn' => 0,
          'footer' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'ialp' => array(
        'disable' => array(
          'sidebar_second' => 'sidebar_second',
          'header' => 0,
          'navigation' => 0,
          'highlighted' => 0,
          'help' => 0,
          'preface' => 0,
          'content' => 0,
          'content_left' => 0,
          'content_right' => 0,
          'sidebar_first' => 0,
          'footer' => 0,
          'bottom' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'seven' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'skeletontheme' => array(
        'disable' => array(
          'header_top_left' => 0,
          'header_top_right' => 0,
          'header_right' => 0,
          'header' => 0,
          'highlighted' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'featured_left' => 0,
          'featured_right' => 0,
          'footer_first' => 0,
          'footer_second' => 0,
          'footer_third' => 0,
          'footer' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'zen' => array(
        'disable' => array(
          'header' => 0,
          'navigation' => 0,
          'highlighted' => 0,
          'help' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'footer' => 0,
          'bottom' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['resource'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'themes';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'themes/*' => 'themes/*',
        'key-themes' => 'key-themes',
      ),
    ),
  );
  $context->reactions = array(
    'region' => array(
      'bartik' => array(
        'disable' => array(
          'header' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'highlighted' => 0,
          'featured' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'triptych_first' => 0,
          'triptych_middle' => 0,
          'triptych_last' => 0,
          'footer_firstcolumn' => 0,
          'footer_secondcolumn' => 0,
          'footer_thirdcolumn' => 0,
          'footer_fourthcolumn' => 0,
          'footer' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'ialp' => array(
        'disable' => array(
          'sidebar_first' => 'sidebar_first',
          'header' => 0,
          'navigation' => 0,
          'highlighted' => 0,
          'help' => 0,
          'preface' => 0,
          'content' => 0,
          'sidebar_second' => 0,
          'footer' => 0,
          'bottom' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'seven' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'skeletontheme' => array(
        'disable' => array(
          'header_top_left' => 0,
          'header_top_right' => 0,
          'header_right' => 0,
          'header' => 0,
          'highlighted' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'featured_left' => 0,
          'featured_right' => 0,
          'footer_first' => 0,
          'footer_second' => 0,
          'footer_third' => 0,
          'footer' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'zen' => array(
        'disable' => array(
          'header' => 0,
          'navigation' => 0,
          'highlighted' => 0,
          'help' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'footer' => 0,
          'bottom' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['themes'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'video_embed_pages';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'video' => 'video',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'region' => array(
      'bartik' => array(
        'disable' => array(
          'header' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'highlighted' => 0,
          'featured' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'triptych_first' => 0,
          'triptych_middle' => 0,
          'triptych_last' => 0,
          'footer_firstcolumn' => 0,
          'footer_secondcolumn' => 0,
          'footer_thirdcolumn' => 0,
          'footer_fourthcolumn' => 0,
          'footer' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'ialp' => array(
        'disable' => array(
          'sidebar_first' => 'sidebar_first',
          'header' => 0,
          'navigation' => 0,
          'highlighted' => 0,
          'help' => 0,
          'preface' => 0,
          'content' => 0,
          'content_left' => 0,
          'content_right' => 0,
          'sidebar_second' => 0,
          'footer' => 0,
          'bottom' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'seven' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'skeletontheme' => array(
        'disable' => array(
          'header_top_left' => 0,
          'header_top_right' => 0,
          'header_right' => 0,
          'header' => 0,
          'highlighted' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'featured_left' => 0,
          'featured_right' => 0,
          'footer_first' => 0,
          'footer_second' => 0,
          'footer_third' => 0,
          'footer' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'zen' => array(
        'disable' => array(
          'header' => 0,
          'navigation' => 0,
          'highlighted' => 0,
          'help' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'footer' => 0,
          'bottom' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['video_embed_pages'] = $context;

  return $export;
}

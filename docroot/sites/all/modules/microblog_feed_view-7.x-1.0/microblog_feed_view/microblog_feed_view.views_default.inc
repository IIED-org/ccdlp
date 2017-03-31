<?php
/**
 * @file
 * microblog_feed_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function microblog_feed_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'microblog_feed';
  $view->description = 'for Key Partner Country pages';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'microblog feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'In-Country blog';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Blog date */
  $handler->display->display_options['fields']['field_blog_date']['id'] = 'field_blog_date';
  $handler->display->display_options['fields']['field_blog_date']['table'] = 'field_data_field_blog_date';
  $handler->display->display_options['fields']['field_blog_date']['field'] = 'field_blog_date';
  $handler->display->display_options['fields']['field_blog_date']['label'] = '';
  $handler->display->display_options['fields']['field_blog_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Video Embed */
  $handler->display->display_options['fields']['field_videoembed']['id'] = 'field_videoembed';
  $handler->display->display_options['fields']['field_videoembed']['table'] = 'field_data_field_videoembed';
  $handler->display->display_options['fields']['field_videoembed']['field'] = 'field_videoembed';
  $handler->display->display_options['fields']['field_videoembed']['label'] = '';
  $handler->display->display_options['fields']['field_videoembed']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_videoembed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_videoembed']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_videoembed']['settings'] = array(
    'video_style' => 'blog_video',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Blog image */
  $handler->display->display_options['fields']['field_blog_image']['id'] = 'field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['table'] = 'field_data_field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['field'] = 'field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['label'] = '';
  $handler->display->display_options['fields']['field_blog_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_blog_image']['settings'] = array(
    'image_style' => 'microblog_image',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Blog text */
  $handler->display->display_options['fields']['field_blog_text']['id'] = 'field_blog_text';
  $handler->display->display_options['fields']['field_blog_text']['table'] = 'field_data_field_blog_text';
  $handler->display->display_options['fields']['field_blog_text']['field'] = 'field_blog_text';
  $handler->display->display_options['fields']['field_blog_text']['label'] = '';
  $handler->display->display_options['fields']['field_blog_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_text']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Social media */
  $handler->display->display_options['fields']['field_s0cial_media']['id'] = 'field_s0cial_media';
  $handler->display->display_options['fields']['field_s0cial_media']['table'] = 'field_data_field_s0cial_media';
  $handler->display->display_options['fields']['field_s0cial_media']['field'] = 'field_s0cial_media';
  $handler->display->display_options['fields']['field_s0cial_media']['label'] = '';
  $handler->display->display_options['fields']['field_s0cial_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s0cial_media']['type'] = 'addthis_basic_toolbox';
  $handler->display->display_options['fields']['field_s0cial_media']['settings'] = array(
    'share_services' => 'facebook,twitter, email',
    'buttons_size' => 'addthis_16x16_style',
    'counter_orientation' => 'horizontal',
    'extra_css' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'microblog' => 'microblog',
  );

  /* Display: Country blog */
  $handler = $view->new_display('block', 'Country blog', 'block');
  $handler->display->display_options['block_description'] = 'Country blog';
  $export['microblog_feed'] = $view;

  return $export;
}

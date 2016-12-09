<?php
/**
 * @file
 * ialp_settings.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ialp_settings_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|browse-page|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'browse-page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'vd_title_h1',
    ),
    'rows' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'pager' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|browse-page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|featured';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'featured';
  $ds_fieldsetting->settings = array(
    'cover_large' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more >',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|event|featured'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'sidebar_image' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|event|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'thumbnail' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more >',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|event|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|forum|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'forum';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'conditions' => array(),
      ),
    ),
    'submitted_by' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_cover_thumb',
    ),
  );
  $export['node|forum|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|resource|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'resource';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|resource|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|resource|featured';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'resource';
  $ds_fieldsetting->view_mode = 'featured';
  $ds_fieldsetting->settings = array(
    'cover_large' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'conditions' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more >',
        'wrapper' => '',
        'class' => '',
        'conditions' => array(),
      ),
    ),
  );
  $export['node|resource|featured'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|resource|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'resource';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'download_button' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'sidebar_image' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'video_embed' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:27:"video_embed_field_thumbnail";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:2:{s:11:"image_style";s:9:"cover_med";s:10:"image_link";s:7:"content";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:21:"node:field_videoembed";}',
        'load_terms' => 0,
        'conditions' => array(
          0 => array(
            'condition' => 'hide_if_string',
            'configuration' => array(
              'target' => 'sidebar_image',
              'string' => '',
            ),
          ),
        ),
      ),
    ),
    'links' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|resource|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|resource|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'resource';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'thumbnail' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'conditions' => array(),
      ),
    ),
  );
  $export['node|resource|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|resource|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'resource';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'thumbnail' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'conditions' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more >',
        'wrapper' => '',
        'class' => '',
        'conditions' => array(),
      ),
    ),
  );
  $export['node|resource|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|themes|default';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'themes';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'more_link' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|themes|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|themes|teaser';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'themes';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'more_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more >',
        'wrapper' => '',
        'class' => 'more-link',
      ),
    ),
  );
  $export['taxonomy_term|themes|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|default';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'name' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_user_picture' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_picture_thumbnail',
    ),
  );
  $export['user|user|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function ialp_settings_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'cover_large';
  $ds_field->label = 'Cover large';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
if ($entity->field_cover_image) {
$image = theme(\'image_style\', 
  array(
  \'path\' => $entity->field_cover_image[\'und\'][0][\'uri\'], 
  \'style_name\' => \'cover_full\', 
  \'alt\' => $entity->field_cover_image[\'und\'][0][\'alt\'], 
  \'title\' => $entity->field_cover_image[\'und\'][0][\'title\'], 
  )
); 
}
else if ($entity->field_link) {
  $url = $entity->field_link[\'und\'][0][\'url\'];
  $image = theme(\'shrinktheweb_image\', 
    array(
      \'url\' => $url,
      \'options\' => array(\'style_name\' => \'cover_full\', \'title\' => $entity->field_link[\'und\'][0][\'title\'] )
    )
  );
}
if ($image) {
print $image; 
}
else return FALSE;
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['cover_large'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'download_button';
  $ds_field->label = 'Download button';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
    'file' => 'file',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php if ($entity->field_file[\'und\'][0][\'uri\']) { 
  $realpath = drupal_realpath($entity->field_file[\'und\'][0][\'uri\']);
  $path = str_replace($_SERVER[\'DOCUMENT_ROOT\'].\'/\',\'\',$realpath);
  $title = \'Download\';
}
else if ($entity->field_link[\'und\'][0][\'url\']) {
   $path = $entity->field_link[\'und\'][0][\'url\'];
   $title = $entity->field_link[\'und\'][0][\'title\'];
}
if ($path) {
 print(l(t($title), $path,
    array(
    \'attributes\' => array(
      \'class\' => \'download\',
    ))));
}
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['download_button'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'sidebar_image';
  $ds_field->label = 'Cover medium';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
if ($entity->field_cover_image) {
$image = theme(\'image_style\', 
  array(
  \'path\' => $entity->field_cover_image[\'und\'][0][\'uri\'], 
  \'style_name\' => \'cover_med\', 
  \'alt\' => $entity->field_cover_image[\'und\'][0][\'alt\'], 
  \'title\' => $entity->field_cover_image[\'und\'][0][\'title\'], 
  )
); 
}
else if ($entity->field_link) {
  $url = $entity->field_link[\'und\'][0][\'url\'];
  $image = theme(\'shrinktheweb_image_link\', 
    array(
      \'url\' => $url,
      \'options\' => array(\'style_name\' => \'cover_med\', 
      \'title\' => $entity->field_link[\'und\'][0][\'title\'])
    )
  );
}
if ($image) {
print $image;
}
else return FALSE; 
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['sidebar_image'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'thumbnail';
  $ds_field->label = 'Cover thumbnail';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
if ($entity->field_cover_image) {
$image = theme(\'image_style\', 
  array(
  \'path\' => $entity->field_cover_image[\'und\'][0][\'uri\'], 
  \'style_name\' => \'cover_thumb\', 
  \'alt\' => $entity->field_cover_image[\'und\'][0][\'alt\'], 
  \'title\' => $entity->field_cover_image[\'und\'][0][\'title\'], 
  )
); 
}
else if ($entity->field_link) {
  $url = $entity->field_link[\'und\'][0][\'url\'];
  $image = theme(\'shrinktheweb_image\', 
    array(
      \'url\' => $url,
      \'options\' => array(\'style_name\' => \'cover_thumb\', \'title\' => $entity->field_link[\'und\'][0][\'title\'] )
    )
  );
}
if ($image) {
print $image;
} 
else return FALSE;
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['thumbnail'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'video_embed';
  $ds_field->label = 'Video embed';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['video_embed'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ialp_settings_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|browse-page|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'browse-page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'rows',
        2 => 'pager',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'rows' => 'ds_content',
      'pager' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['ds_views|browse-page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_event_date',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'field_event_date' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|event|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|featured';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'featured';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'cover_large',
        1 => 'title',
        2 => 'field_event_date',
        3 => 'body',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'cover_large' => 'ds_content',
      'title' => 'ds_content',
      'field_event_date' => 'ds_content',
      'body' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|event|featured'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_event_date',
        1 => 'body',
        2 => 'comments',
      ),
      'eventsidebar' => array(
        3 => 'sidebar_image',
      ),
    ),
    'fields' => array(
      'field_event_date' => 'ds_content',
      'body' => 'ds_content',
      'comments' => 'ds_content',
      'sidebar_image' => 'eventsidebar',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|event|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'thumbnail',
        1 => 'title',
        2 => 'field_event_date',
        3 => 'body',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'thumbnail' => 'ds_content',
      'title' => 'ds_content',
      'field_event_date' => 'ds_content',
      'body' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|event|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|forum|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'forum';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'ds_user_picture',
        1 => 'title',
        2 => 'taxonomy_forums',
        3 => 'submitted_by',
        4 => 'body',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'ds_content',
      'title' => 'ds_content',
      'taxonomy_forums' => 'ds_content',
      'submitted_by' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|forum|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|resource|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'resource';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_cover_image',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_cover_image' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|resource|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|resource|featured';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'resource';
  $ds_layout->view_mode = 'featured';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'cover_large',
        1 => 'field_videoembed',
        2 => 'title',
        3 => 'body',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'cover_large' => 'ds_content',
      'field_videoembed' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|resource|featured'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|resource|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'resource';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_videoembed',
        1 => 'body',
        2 => 'links',
        3 => 'comments',
      ),
      'sidebar' => array(
        4 => 'sidebar_image',
        5 => 'video_embed',
        6 => 'download_button',
        7 => 'field_date',
        8 => 'field_author_s_',
        9 => 'field_material_type',
        10 => 'field_no_of_pages',
        11 => 'field_isbn',
        12 => 'field_doi',
        13 => 'field_theme',
        14 => 'field_tags',
        15 => 'field_file',
      ),
    ),
    'fields' => array(
      'field_videoembed' => 'ds_content',
      'body' => 'ds_content',
      'links' => 'ds_content',
      'comments' => 'ds_content',
      'sidebar_image' => 'sidebar',
      'video_embed' => 'sidebar',
      'download_button' => 'sidebar',
      'field_date' => 'sidebar',
      'field_author_s_' => 'sidebar',
      'field_material_type' => 'sidebar',
      'field_no_of_pages' => 'sidebar',
      'field_isbn' => 'sidebar',
      'field_doi' => 'sidebar',
      'field_theme' => 'sidebar',
      'field_tags' => 'sidebar',
      'field_file' => 'sidebar',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|resource|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|resource|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'resource';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'thumbnail',
        1 => 'field_videoembed',
        2 => 'title',
        3 => 'body',
        4 => 'field_material_type',
        5 => 'field_no_of_pages',
        6 => 'field_author_s_',
        7 => 'field_date',
      ),
    ),
    'fields' => array(
      'thumbnail' => 'ds_content',
      'field_videoembed' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
      'field_material_type' => 'ds_content',
      'field_no_of_pages' => 'ds_content',
      'field_author_s_' => 'ds_content',
      'field_date' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|resource|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|resource|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'resource';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'thumbnail',
        1 => 'field_videoembed',
        2 => 'title',
        3 => 'body',
        4 => 'field_material_type',
        5 => 'field_no_of_pages',
        6 => 'field_author_s_',
        7 => 'node_link',
      ),
    ),
    'fields' => array(
      'thumbnail' => 'ds_content',
      'field_videoembed' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
      'field_material_type' => 'ds_content',
      'field_no_of_pages' => 'ds_content',
      'field_author_s_' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|resource|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|weblink|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'weblink';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_link',
      ),
    ),
    'fields' => array(
      'field_link' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|weblink|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|themes|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'themes';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'description',
        2 => 'more_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'description' => 'ds_content',
      'more_link' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['taxonomy_term|themes|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|themes|teaser';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'themes';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'description',
        2 => 'field_body',
        3 => 'more_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'description' => 'ds_content',
      'field_body' => 'ds_content',
      'more_link' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['taxonomy_term|themes|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'name',
        1 => 'ds_user_picture',
        2 => 'field_position',
        3 => 'field_affiliation',
        4 => 'privatemsg_send_new_message',
        5 => 'summary',
        6 => 'masquerade',
      ),
    ),
    'fields' => array(
      'name' => 'ds_content',
      'ds_user_picture' => 'ds_content',
      'field_position' => 'ds_content',
      'field_affiliation' => 'ds_content',
      'privatemsg_send_new_message' => 'ds_content',
      'summary' => 'ds_content',
      'masquerade' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['user|user|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|form';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'account',
        1 => 'privatemsg',
        2 => 'field_position',
        3 => 'googleanalytics',
        4 => 'field_affiliation',
        5 => 'masquerade',
        6 => 'timezone',
      ),
      'hidden' => array(
        7 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'account' => 'ds_content',
      'privatemsg' => 'ds_content',
      'field_position' => 'ds_content',
      'googleanalytics' => 'ds_content',
      'field_affiliation' => 'ds_content',
      'masquerade' => 'ds_content',
      'timezone' => 'ds_content',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['user|user|form'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function ialp_settings_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'featured';
  $ds_view_mode->label = 'Featured';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['featured'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'grid';
  $ds_view_mode->label = 'Grid';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['grid'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser';
  $ds_view_mode->label = 'Teaser';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['teaser'] = $ds_view_mode;

  return $export;
}

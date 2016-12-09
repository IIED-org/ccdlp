<?php
/**
 * @file
 * ialp_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ialp_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "ds_extras" && $api == "ds_extras") {
    return array("version" => "1");
  }
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ialp_settings_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ialp_settings_image_default_styles() {
  $styles = array();

  // Exported image style: cover_custom_user_desktop_1x.
  $styles['cover_custom_user_desktop_1x'] = array(
    'label' => 'cover_custom_user_desktop_1x',
    'effects' => array(
      12 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 460,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => -10,
      ),
      11 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 460,
            'height' => 345,
            'xpos' => 'center',
            'ypos' => 0,
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: cover_custom_user_mobile_1x.
  $styles['cover_custom_user_mobile_1x'] = array(
    'label' => 'cover_custom_user_mobile_1x',
    'effects' => array(
      22 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -10,
      ),
      21 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 400,
            'height' => 300,
            'xpos' => 'center',
            'ypos' => 0,
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: cover_custom_user_small_1x.
  $styles['cover_custom_user_small_1x'] = array(
    'label' => 'cover_custom_user_small_1x',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 300,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: cover_custom_user_tablet_1x.
  $styles['cover_custom_user_tablet_1x'] = array(
    'label' => 'cover_custom_user_tablet_1x',
    'effects' => array(
      17 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
      18 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 300,
            'height' => 225,
            'xpos' => 'center',
            'ypos' => 0,
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: cover_full.
  $styles['cover_full'] = array(
    'label' => 'Cover full',
    'effects' => array(
      35 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 640,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: cover_med.
  $styles['cover_med'] = array(
    'label' => 'Cover med',
    'effects' => array(
      33 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 340,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      34 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 340,
            'height' => 225,
            'xpos' => 'center',
            'ypos' => 0,
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: cover_sm_custom_user_desktop_1x.
  $styles['cover_sm_custom_user_desktop_1x'] = array(
    'label' => 'cover_sm_custom_user_desktop_1x',
    'effects' => array(
      25 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 380,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      26 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 380,
            'height' => 253,
            'xpos' => 'center',
            'ypos' => 0,
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: cover_sm_custom_user_mobile_1x.
  $styles['cover_sm_custom_user_mobile_1x'] = array(
    'label' => 'cover_sm_custom_user_mobile_1x',
    'effects' => array(
      31 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      32 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 300,
            'height' => 200,
            'xpos' => 'center',
            'ypos' => 0,
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: cover_sm_custom_user_small_1x.
  $styles['cover_sm_custom_user_small_1x'] = array(
    'label' => 'cover_sm_custom_user_small_1x',
    'effects' => array(
      29 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      30 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 300,
            'height' => 200,
            'xpos' => 'center',
            'ypos' => 0,
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: cover_sm_custom_user_tablet_1x.
  $styles['cover_sm_custom_user_tablet_1x'] = array(
    'label' => 'cover_sm_custom_user_tablet_1x',
    'effects' => array(
      27 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      28 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 300,
            'height' => 200,
            'xpos' => 'center',
            'ypos' => 0,
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: cover_small.
  $styles['cover_small'] = array(
    'label' => 'Cover small',
    'effects' => array(
      23 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      24 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 300,
            'height' => 200,
            'xpos' => 'center',
            'ypos' => 0,
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: cover_thumb.
  $styles['cover_thumb'] = array(
    'label' => 'Cover thumb',
    'effects' => array(
      19 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 120,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
      20 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 120,
            'height' => 167,
            'xpos' => 'center',
            'ypos' => 'top',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: sm_sq_thumb.
  $styles['sm_sq_thumb'] = array(
    'label' => 'sm sq thumb',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 48,
          'height' => 48,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ialp_settings_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('An event with a title, date/time information and a body for storing details.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'resource' => array(
      'name' => t('Resource'),
      'base' => 'node_content',
      'description' => t('A document included in the knowledge centre'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'weblink' => array(
      'name' => t('Weblink'),
      'base' => 'node_content',
      'description' => t('Link to an external website'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

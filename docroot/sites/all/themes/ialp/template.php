<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728096
 */


/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
function ialp_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  ialp_preprocess_html($variables, $hook);
  ialp_preprocess_page($variables, $hook);
}
// */

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
/* -- Delete this line if you want to use this function
function ialp_preprocess_html(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
/* -- Delete this line if you want to use this function
function ialp_preprocess_page(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
function ialp_preprocess_node(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // Optionally, run node-type-specific preprocess functions, like
  // ialp_preprocess_node_page() or ialp_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
}
// */

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function ialp_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
/* -- Delete this line if you want to use this function
function ialp_preprocess_region(&$variables, $hook) {
  // Don't use Zen's region--sidebar.tpl.php template for sidebars.
  //if (strpos($variables['region'], 'sidebar_') === 0) {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('region__sidebar'));
  //}
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function ialp_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
}
// */

function ialp_form_contact_site_form_alter(&$form, &$form_state) {
  drupal_set_title('About this site');
}

function ialp_user_list($variables) {
  $users = $variables['users'];
  $title = $variables['title'];
  $items = array();

  if (!empty($users)) {
    foreach ($users as $user) {

      // $items[] = theme('username', array('account' => $user));

      // $picture = theme_get_setting('toggle_comment_user_picture') ? theme('user_picture', array('account' => $user)) : '';

      $user = user_load($user->uid);
      if ($user->picture){
          $picture = theme(
          'image_style', // The magic function image_style() for more detail you can check this link https://api.drupal.org/theme_image_style
          array(
            'style_name' => 'sm_sq_thumb', // You can choose your own style here from admin/config/media/image-styles
            'path' => !empty($user->picture->uri)?$user->picture->uri:variable_get('user_picture_default'),
            'attributes' => array(
              'class' => 'avatar' // Your custom class for the <img> tag can be defined here.
            )
          )
        );
      }
      else {
        $picture = '<img src="/sites/default/files/pictures/avatar-generic.gif" style="width:48px; height:48px;" />';
      }

      $username = theme('username', array('account' => $user));
      $items[] = l(
    $picture,
    'user/' . $user->uid,
    array(
        'html' => true,
        'attributes' => array(
          'title' => $user->name . '\'s account',
          'class' => array('user-picture')
        )
    )
);

// . '<br />' . $username;
    }

  }
  return theme('item_list', array('items' => $items, 'title' => $title)) . "<div class='more-link'><a href='/members'>All members ></a></div>";
}

function ialp_preprocess_user_login_block(&$vars) {
  $vars['name'] = render($vars['form']['name']);
  $vars['pass'] = render($vars['form']['pass']);
  $vars['links'] = render($vars['form']['links']);
  $vars['submit'] = render($vars['form']['actions']['submit']);
  $vars['rendered'] = drupal_render_children($vars['form']);
}

function ialp_form_user_login_block_alter(&$form, &$form_state, $form_id) {
  $items = array();
  if (variable_get('user_register', USER_REGISTER_VISITORS_ADMINISTRATIVE_APPROVAL)) {
    $items[] = l(t('Create new account'), 'user/register', array('attributes' => array('title' => t('Create a new user account.'))));
  }
  $items[] = l(t('Reset password'), 'user/password', array('attributes' => array('title' => t('Request new password via e-mail.'))));
  $form['links'] = array('#markup' => theme('item_list', array('items' => $items)));

  $form['name']['#title'] = t('Username or email address');

  return $form;
}

function ialp_preprocess_user_login(&$vars) {
   $vars['form']['name']['#title'] = t('Username or email address');
}

/**
* hook_form_FORM_ID_alter
*/
function ialp_form_views_exposed_form_alter(&$form, &$form_state) {
    //dprint_r($form);
    // $form['views_exposed_form__taxonomy_search__page_2']['#title'] = t('Search'); // Change the text on the label element
    // $form['views_exposed_form__taxonomy_search__page_2']['#title_display'] = 'invisible'; // Toggle label visibilty
   $form['search_site']['#size'] = 128;  // define size of the textfield
    // $form['views_exposed_form__taxonomy_search__page_2'][  '#default_value'] = t('Search this site'); // Set a default value for the textfield
//   $form['actions']['submit']['#type'] = 'image_button';
//   $form['actions']['submit']['#src'] = base_path() . path_to_theme() . '/images/search-solid.png';
    //
    //   // Prevent user from searching the default text
    // $form['#attributes']['onsubmit'] = "if(this.search_block_form.value=='Search this site'){ alert('Please enter a search'); return false; }";

    // Alternative (HTML5) placeholder attribute instead of using the javascript
    //$ form['search_site']['#attributes']['placeholder'] = t('Search this site');
}

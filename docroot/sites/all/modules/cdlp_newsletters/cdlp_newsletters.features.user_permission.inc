<?php
/**
 * @file
 * cdlp_newsletters.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cdlp_newsletters_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use Rules component rules_create_newsletter'.
  $permissions['use Rules component rules_create_newsletter'] = array(
    'name' => 'use Rules component rules_create_newsletter',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  return $permissions;
}

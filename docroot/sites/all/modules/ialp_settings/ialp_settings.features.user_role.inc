<?php
/**
 * @file
 * ialp_settings.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ialp_settings_user_default_roles() {
  $roles = array();

  // Exported role: ECO Focal Point group.
  $roles['ECO Focal Point group'] = array(
    'name' => 'ECO Focal Point group',
    'weight' => 4,
  );

  // Exported role: Irish Aid group.
  $roles['Irish Aid group'] = array(
    'name' => 'Irish Aid group',
    'weight' => 6,
  );

  // Exported role: Learning Platform group.
  $roles['Learning Platform group'] = array(
    'name' => 'Learning Platform group',
    'weight' => 5,
  );

  return $roles;
}

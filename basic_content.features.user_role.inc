<?php
/**
 * @file
 * basic_content.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function basic_content_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  // Exported role: manager.
  $roles['manager'] = array(
    'name' => 'manager',
    'weight' => '2',
  );

  return $roles;
}

<?php
/**
 * @file
 * asc_front.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function asc_front_user_default_permissions() {
  $permissions = array();

  // Exported permission: create front_page content.
  $permissions['create front_page content'] = array(
    'name' => 'create front_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any front_page content.
  $permissions['delete any front_page content'] = array(
    'name' => 'delete any front_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own front_page content.
  $permissions['delete own front_page content'] = array(
    'name' => 'delete own front_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any front_page content.
  $permissions['edit any front_page content'] = array(
    'name' => 'edit any front_page content',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own front_page content.
  $permissions['edit own front_page content'] = array(
    'name' => 'edit own front_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: administer asc_footer.
  $permissions['administer asc_footer'] = array(
    'name' => 'administer asc_footer',
    'roles' => array(),
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer asc_socialmedia.
  $permissions['administer asc_socialmedia'] = array(
    'name' => 'administer asc_socialmedia',
    'roles' => array(),
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Site Administrator',
    ),
    'module' => 'node',
  );
  return $permissions;
}

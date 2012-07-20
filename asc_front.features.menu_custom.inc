<?php
/**
 * @file
 * asc_front.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function asc_front_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-quick-links.
  $menus['menu-quick-links'] = array(
    'menu_name' => 'menu-quick-links',
    'title' => 'Quick Links',
    'description' => 'Quick links for display on front page.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Quick Links');
  t('Quick links for display on front page.');


  return $menus;
}

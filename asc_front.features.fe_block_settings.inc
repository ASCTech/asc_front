<?php
/**
 * @file
 * asc_front.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function asc_front_default_fe_block_settings() {
  $export = array();

  // q7
  $theme = array();

  $theme['menu-menu-quick-links'] = array(
    'module' => 'menu',
    'delta' => 'menu-quick-links',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '-21',
    'region' => 'header_second',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['views-front-block_1'] = array(
    'module' => 'views',
    'delta' => 'front-block_1',
    'theme' => 'q7',
    'status' => 0,
    'weight' => '-4',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-front-block_2'] = array(
    'module' => 'views',
    'delta' => 'front-block_2',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '-15',
    'region' => 'header_first',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-front-front_text_short'] = array(
    'module' => 'views',
    'delta' => 'front-front_text_short',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '-22',
    'region' => 'preface_first',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-front-front_text_tall'] = array(
    'module' => 'views',
    'delta' => 'front-front_text_tall',
    'theme' => 'q7',
    'status' => 0,
    'weight' => '-14',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-front-quick_links_text'] = array(
    'module' => 'views',
    'delta' => 'front-quick_links_text',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '-22',
    'region' => 'header_second',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $export['q7'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}

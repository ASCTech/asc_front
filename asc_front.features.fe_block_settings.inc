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

  $theme['views-front-block_1'] = array(
    'module' => 'views',
    'delta' => 'front-block_1',
    'theme' => 'q7',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-front-block_2'] = array(
    'module' => 'views',
    'delta' => 'front-block_2',
    'theme' => 'q7',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-front-block_3'] = array(
    'module' => 'views',
    'delta' => 'front-block_3',
    'theme' => 'q7',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
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

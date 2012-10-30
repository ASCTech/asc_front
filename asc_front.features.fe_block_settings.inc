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

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'asc_footer-asc_footer' => array(
      'delta' => 'asc_footer',
      'module' => 'asc_footer',
    ),
    'asc_socialmedia-asc_socialmedia' => array(
      'delta' => 'asc_socialmedia',
      'module' => 'asc_socialmedia',
    ),
    'menu-menu-quick-links' => array(
      'delta' => 'menu-quick-links',
      'module' => 'menu',
    ),
    'views-front-block_1' => array(
      'delta' => 'front-block_1',
      'module' => 'views',
    ),
    'views-front-block_2' => array(
      'delta' => 'front-block_2',
      'module' => 'views',
    ),
    'views-front-front_text_short' => array(
      'delta' => 'front-front_text_short',
      'module' => 'views',
    ),
    'views-front-front_text_tall' => array(
      'delta' => 'front-front_text_tall',
      'module' => 'views',
    ),
    'views-front-quick_links_text' => array(
      'delta' => 'front-quick_links_text',
      'module' => 'views',
    ),
  );

  // q7
  $theme = array();

  $theme['asc_footer-asc_footer'] = array(
    'module' => 'asc_footer',
    'delta' => 'asc_footer',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '-29',
    'region' => 'footer_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
  );

  $theme['asc_socialmedia-asc_socialmedia'] = array(
    'module' => 'asc_socialmedia',
    'delta' => 'asc_socialmedia',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '-10',
    'region' => 'footer_third',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
  );

  $theme['menu-menu-quick-links'] = array(
    'module' => 'menu',
    'delta' => 'menu-quick-links',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '-17',
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
    'weight' => '-16',
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
    'weight' => '-17',
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
    'weight' => '-15',
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
    'weight' => '-17',
    'region' => 'header_second',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['q7'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}

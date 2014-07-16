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

  $export['version'] = '2.0';

  $export['asc_footer-asc_footer'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'asc_footer',
    'module' => 'asc_footer',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'q7',
        'weight' => -29,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['asc_socialmedia-asc_socialmedia'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'asc_socialmedia',
    'module' => 'asc_socialmedia',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => 'footer_third',
        'status' => 1,
        'theme' => 'q7',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['asc_socialmedia-asc_socialmedia_sharing'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'asc_socialmedia_sharing',
    'module' => 'asc_socialmedia',
    'node_types' => array(
      0 => 'asc_blog',
      1 => 'asc_event',
      2 => 'asc_news',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'q7',
        'weight' => -28,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-quick-links'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-quick-links',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'q7',
        'weight' => -17,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['menu_block-1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 1,
    'module' => 'menu_block',
    'node_types' => array(
      0 => 'page',
      1 => 'webform',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => 'sidebar',
        'status' => 1,
        'theme' => 'q7',
        'weight' => -28,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-front-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'front-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'q7',
        'weight' => -36,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-front-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'front-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'q7',
        'weight' => -15,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-front-front_full_width_slider'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'front-front_full_width_slider',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'q7',
        'weight' => -37,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-front-front_text_short'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'front-front_text_short',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'q7',
        'weight' => -17,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-front-front_text_tall'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'front-front_text_tall',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'q7',
        'weight' => -15,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-front-quick_links_text'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'front-quick_links_text',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'q7',
        'weight' => -17,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}

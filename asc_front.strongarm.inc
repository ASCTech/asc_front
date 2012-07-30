<?php
/**
 * @file
 * asc_front.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function asc_front_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_icon_default_style';
  $strongarm->value = 'levelten_glossy:32x32';
  $export['socialmedia_icon_default_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_platforms_site';
  $strongarm->value = array(
    'facebook' => 'facebook',
    'addthis' => 'addthis',
    'twitter' => 0,
    'flickr' => 0,
    'googleplus' => 0,
    'linkedin' => 0,
    'rss' => 0,
    'slideshare' => 0,
    'vimeo' => 0,
    'youtube' => 0,
  );
  $export['socialmedia_platforms_site'] = $strongarm;

  return $export;
}

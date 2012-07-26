<?php
/**
 * @file
 * asc_front.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function asc_front_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function asc_front_views_api() {
  return array("version" => "3.0");
}

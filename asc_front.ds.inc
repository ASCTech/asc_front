<?php
/**
 * @file
 * asc_front.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function asc_front_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'front_rotor_short';
  $ds_view_mode->label = 'Front Rotor Short';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['front_rotor_short'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'front_rotor_tall';
  $ds_view_mode->label = 'Front Rotor Tall';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['front_rotor_tall'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'front_text';
  $ds_view_mode->label = 'Front Text';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['front_text'] = $ds_view_mode;

  return $export;
}

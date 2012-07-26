<?php
/**
 * @file
 * asc_front.menu_block.inc
 */

/**
 * Implements hook_menu_block_defaults().
 */
function asc_front_menu_block_defaults() {
  $export = array();

  $menu_block = new stdClass();
  $menu_block->disabled = FALSE; /* Edit this to true to make a default menu_block disabled initially */
  $menu_block->api_version = 1;
  $menu_block->name = 'asc_sidebar_menu';
  $menu_block->label = 'Sidebar Main Menu';
  $menu_block->description = '';
  $menu_block->depth = 0;
  $menu_block->expanded = 0;
  $menu_block->follow = 'active';
  $menu_block->level = 2;
  $menu_block->parent = 'main-menu:0';
  $menu_block->sort = 0;
  $menu_block->title_link = 0;
  $export['asc_sidebar_menu'] = $menu_block;

  return $export;
}

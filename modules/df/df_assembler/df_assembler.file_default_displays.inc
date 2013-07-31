<?php
/**
 * @file
 * df_assembler.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function df_assembler_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_picture';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'picture_group' => 'df_letterbox',
    'fallback_image_style' => '',
    'alt' => '',
    'title' => '',
  );
  $export['video__default__file_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_picture';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'picture_group' => 'df_letterbox',
    'fallback_image_style' => 'letterbox-tablet',
    'alt' => '',
    'title' => '',
  );
  $export['video__preview__file_picture'] = $file_display;

  return $export;
}

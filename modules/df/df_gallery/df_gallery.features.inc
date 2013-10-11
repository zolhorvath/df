<?php
/**
 * @file
 * df_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function df_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function df_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: media_gallery_large.
  $styles['media_gallery_large'] = array(
    'effects' => array(
      0 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 900,
          'height' => 900,
          'upscale' => FALSE,
        ),
        'weight' => 0,
      ),
    ),
    'name' => 'media_gallery_large',
    'label' => 'media_gallery_large',
  );

  // Exported image style: media_gallery_thumbnail.
  $styles['media_gallery_thumbnail'] = array(
    'name' => 'media_gallery_thumbnail',
    'label' => 'media_gallery_thumbnail',
    'effects' => array(
      2 => array(
        'label' => 'Manual crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 450,
          'height' => 450,
          'keepproportions' => 1,
          'style_name' => 'media_gallery_thumbnail',
        ),
        'weight' => -1,
      ),
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 450,
          'height' => 450,
          'upscale' => FALSE,
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

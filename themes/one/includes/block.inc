<?php
/**
 * @file
 * Theme and preprocess functions for blocks.
 */

use Drupal\block\Entity\Block;

/**
 * Implements hook_preprocess_block().
 */
function one_preprocess_block(&$variables) {
  if (isset($variables['elements']['#id'])) {
    $region = Block::load($variables['elements']['#id'])->getRegion();
    // Pass block region value to content so this can be used
    // in hook_theme_suggestions_menu_alter
    $variables['content']['#attributes']['region'] = $region;
    // Add the class col for all block in the footer.
    if ($region == 'footer') {
      $variables['attributes']['class'][] = 'col';
    }
  }
}

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
  // Add the class container if layout builder is not used.
  if (\Drupal::request()->attributes->get('node')) {
    $nid = \Drupal::request()->attributes->get('node')->id();
    $node = \Drupal::entityTypeManager()->getStorage('node')->load($nid);
    if (!$node->layout_builder__layout) {
      $variables['attributes']['class'][] = 'container';
    }
  }
  else {
    $variables['attributes']['class'][] = 'container';
  }

  // Add the class col for all block in the footer.
  if (isset($variables['elements']['#id'])) {
    $region = Block::load($variables['elements']['#id'])->getRegion();
    if ($region == 'footer') {
      $variables['attributes']['class'][] = 'col';
    }
  }
}

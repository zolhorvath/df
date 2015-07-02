<?php

/**
 * @file
 * Contains \Drupal\df_tools_display\Plugin\DisplayVariant\LandingDisplayVariant.
 */

namespace Drupal\df_tools_display\Plugin\DisplayVariant;

use Drupal\Component\Utility\Html;
use Drupal\page_manager\Plugin\DisplayVariant\BlockDisplayVariant;

/**
 * Provides a display variant that simply contains blocks.
 *
 * @DisplayVariant(
 *   id = "landing_display",
 *   admin_label = @Translation("Landing page")
 * )
 */
class LandingDisplayVariant extends BlockDisplayVariant {

  /**
   * @see \Drupal\page_manager\Plugin\BlockVariantInterface::getRegionNames()
   */
  public function getRegionNames() {
    return [
      'top' => 'Top',
      'primary' => 'Primary',
      'secondary' => 'Secondary',
      'middle' => 'Middle',
      'sidebar' => 'Sidebar',
      'bottom' => 'Bottom',
    ];
  }

  /**
   * {@inheritdoc}
   */
  public function build() {
    $build = parent::build();

    // Add a class that represents the current page to our display variant
    $id = Html::getClass($this->executable->getPage()->id());
    $build['regions']['#prefix'] = '<div class="landing-display-' . $id . '">';
    $build['regions']['#suffix'] = '</div>';

    return $build;
  }

}

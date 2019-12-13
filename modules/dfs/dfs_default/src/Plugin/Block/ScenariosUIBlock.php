<?php

namespace Drupal\dfs_default\Plugin\Block;

use Drupal\Core\Block\BlockBase;
use Drupal\Core\Access\AccessResult;

/**
 * Provides a 'ScenariosUIBlock' block.
 *
 * @Block(
 *  id = "scenarios_uiblock",
 *  admin_label = @Translation("Scenarios UI Block"),
 *  category = @Translation("Scenarios")
 * )
 */
class ScenariosUIBlock extends BlockBase {

  /**
   * {@inheritdoc}
   */
  public function blockAccess($account) {
    if ($account->hasPermission('administer scenarios')) {
      return AccessResult::allowed();
    }
    return AccessResult::forbidden();
  }

  /**
   * {@inheritdoc}
   */
  public function build() {
    $form = \Drupal::formBuilder()->getForm('Drupal\scenarios_ui\Form\ScenariosUIForm');
    $form['#attached']['library'][] = 'dfs_default/default';
    return $form;
  }

}

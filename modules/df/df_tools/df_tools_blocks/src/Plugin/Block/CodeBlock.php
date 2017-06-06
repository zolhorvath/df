<?php

namespace Drupal\df_tools_blocks\Plugin\Block;

use Drupal\Core\Block\BlockBase;
use Drupal\Core\Form\FormStateInterface;

/**
 * Provides a 'CodeBlock' block.
 *
 * @Block(
 *  id = "code_block",
 *  admin_label = @Translation("Code block"),
 * )
 */
class CodeBlock extends BlockBase {


  /**
   * {@inheritdoc}
   */
  public function defaultConfiguration() {
    return [
         'code' => $this->t(''),
        ] + parent::defaultConfiguration();
 }

  /**
   * {@inheritdoc}
   */
  public function blockForm($form, FormStateInterface $form_state) {
    $form['code'] = [
      '#type' => 'textarea',
      '#title' => $this->t('Code'),
      '#description' => $this->t('Add javascript or html code.'),
      '#default_value' => $this->configuration['code'],
      '#weight' => '0',
    ];

    return $form;
  }

  /**
   * {@inheritdoc}
   */
  public function blockSubmit($form, FormStateInterface $form_state) {
    $this->configuration['code'] = $form_state->getValue('code');
  }

  /**
   * {@inheritdoc}
   */
  public function build() {
    return ['code_block_code' => ['#markup' => $this->configuration['code']]];
  }

}

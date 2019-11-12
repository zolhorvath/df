<?php

/**
 * @file
 * Scenarios hooks implemented by the Demo Framework scenario.
 */

/**
 * Implements hook_scenarios_info().
 */
function df_scenarios_info() {
  return [
    'df' => [
      'type' => 'profile',
      'label' => t('Demo Framework'),
      'description' => t('Demo Framework Scenario'),
    ],
  ];
}

<?php
/**
 * @file
 * Enables modules and site configuration for Demo Framework site installation.
 */

/**
 * Implements hook_install_tasks_alter().
 */
function df_install_tasks_alter(&$tasks, $install_state) {
  global $install_state;

  // Skip profile selection step.
  $tasks['install_select_profile']['display'] = FALSE;

  // Skip language selection install step and default language to English.
  $tasks['install_select_locale']['display'] = FALSE;
  $tasks['install_select_locale']['run'] = INSTALL_TASK_SKIP;
  $install_state['parameters']['locale'] = 'en';
}

/**
 * Implements hook_permission().
 */
function df_permission() {
  return array(
    'administer demo framework' => array(
      'title' => t('Administer Demo Framework'),
      'description' => t('Perform administration tasks for demo framework.'),
    ),
  );
}

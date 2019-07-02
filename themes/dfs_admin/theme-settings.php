<?php

/**
 * @file
 * Add custom theme settings to DFS Admin.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * @param $form
 *   The form.
 * @param $form_state
 *   The form state.
 */
function dfs_admin_form_system_theme_settings_alter(&$form, $form_state) {
  $form['theme_ui_options'] = array(
    '#type' => 'details',
    '#title' => t('UI Options'),
    '#weight' => -1,
    '#open' => 'true',
  );

  $form['theme_ui_options']['dfs_admin_logo'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display logo'),
    '#description' => t('Adds logo to header'),
    '#default_value' => theme_get_setting('dfs_admin_logo'),
  );

  $form['theme_ui_options']['dfs_admin_site_name'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display site name'),
    '#description' => t('Adds site name to header'),
    '#default_value' => theme_get_setting('dfs_admin_site_name'),
  );
}

<?php

/**
 * @file
 * Add custom theme settings to Acquia Claro.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * @param $form
 *   The form.
 * @param $form_state
 *   The form state.
 */
function acquia_claro_form_system_theme_settings_alter(&$form, $form_state) {
  $form['theme_ui_options'] = array(
    '#type' => 'details',
    '#title' => t('UI Options'),
    '#open' => 'false',
  );

  $form['theme_ui_options']['acquia_claro_logo'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display logo'),
    '#default_value' => theme_get_setting('acquia_claro_logo'),
  );

  $form['theme_ui_options']['acquia_claro_site_name'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display site name'),
    '#default_value' => theme_get_setting('acquia_claro_site_name'),
  );
}

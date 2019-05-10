<?php

/**
 * @file
 * Add custom theme settings to One.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * @param $form
 *   The form.
 * @param $form_state
 *   The form state.
 */
function one_form_system_theme_settings_alter(&$form, $form_state) {
  $form['theme_options'] = array(
    '#type' => 'details',
    '#title' => t('One Options'),
    '#weight' => -1,
    '#open' => 'true',
  );

  $form['theme_options']['regions'] = array(
    '#type' => 'details',
    '#title' => t('Region Settings'),
    '#open' => 'true',
  );

  $form['theme_options']['regions']['meta_header_full_width'] = array(
    '#type' => 'checkbox',
    '#title' => t('Meta Header Full Width'),
    '#description' => t('Uses the .container-fluid class instead of .container.'),
    '#default_value' => theme_get_setting('meta_header_full_width'),
  );

  $form['theme_options']['regions']['navbar_full_width'] = array(
    '#type' => 'checkbox',
    '#title' => t('Navbar Full Width'),
    '#description' => t('Uses the .container-fluid class instead of .container.'),
    '#default_value' => theme_get_setting('navbar_full_width'),
  );

  $form['theme_options']['regions']['header_full_width'] = array(
    '#type' => 'checkbox',
    '#title' => t('Header Full Width'),
    '#description' => t('Uses the .container-fluid class instead of .container.'),
    '#default_value' => theme_get_setting('header_full_width'),
  );

  $form['theme_options']['regions']['footer_full_width'] = array(
    '#type' => 'checkbox',
    '#title' => t('Footer Full Width'),
    '#description' => t('Uses the .container-fluid class instead of .container.'),
    '#default_value' => theme_get_setting('footer_full_width'),
  );
}

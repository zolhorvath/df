<?php

/**
 * @file
 * CKEditor integration for the df_tools_cklite module.
 */

/**
 * Implements hook_ckeditor_plugin().
 */
function df_tools_cklite_ckeditor_plugin() {
  $plugins = array();

  // Only declare the CKEditor plugin if the LITE library is available.
  if ($library = libraries_detect('lite')) {
    $plugins['lite'] = array(
      'name' => 'lite',
      'desc' => t('Plugin for tracking changes within CKEditor'),
      'path' => base_path() . $library['library path'] . '/' . $library['path'] . '/',
      'default' => 'f',
      'buttons' => array(
        'lite-acceptall' => array(
          'label' => 'Accept all changes',
          'icon' => 'icons/lite-acceptall.png',
        ),
        'lite-rejectall' => array(
          'label' => 'Reject all changes',
          'icon' => 'icons/lite-rejectall.png',
        ),
        'lite-acceptone' => array(
          'label' => 'Accept change',
          'icon' => 'icons/lite-acceptone.png',
        ),
        'lite-rejectone' => array(
          'label' => 'Reject change',
          'icon' => 'icons/lite-rejectone.png',
        ),
        'lite-toggleshow' => array(
          'label' => 'Show/hide tracked changes',
          'icon' => 'icons/lite-toggleshow.png',
        ),
        'lite-toggletracking' => array(
          'label' => 'Start/stop tracking changes',
          'icon' => 'icons/lite-toggletracking.png',
        ),
      ),
    );
  }

  return $plugins;
}

/**
 * Implements hook_ckeditor_settings_alter().
 */
function df_tools_cklite_ckeditor_settings_alter(&$settings, $conf) {
  global $user;

  // Pass the current user's name and ID to lite to associate with changes.
  $settings['lite'] = array(
    'userId' => $user->uid,
    'userName' => format_username($user),
  );
}

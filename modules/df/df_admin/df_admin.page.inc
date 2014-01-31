<?php
/**
 * @file
 * DF Admin page handling functions.
 */

/**
 * DF Admin page callback used to list scenarios.
 * @return
 *   returns theme callback with scenario information array.
 */
function df_admin_page() {
  // Clear & rebuild Features key caches
  features_get_info(NULL, NULL, TRUE);
  features_rebuild();

  // Add DF Admin CSS
  drupal_add_css(drupal_get_path('module', 'df_admin') . '/css/df_admin.page.css');
  
  // Render Scenarios
  $list = array();
  $modules = system_rebuild_module_data();
  foreach ($modules as $name => $module) {
    if ($module->info['package'] == 'Demo Framework Scenarios') {
      // Compile individual scenario info array.
      $list[$module->name] = array(
        'name' => $module->info['name'],
        'link' => _df_admin_dfs_link($module),
        'description' => $module->info['description'],
      );
      // Append optional screenshot to scenario's info array.
      $screenshot = drupal_get_path('module', $module->name) . '/screenshot.png';
      if (file_exists($screenshot)) {
        $list[$module->name]['screenshot'] = '/' . $screenshot;
      }
    }
  }
  $page = array(
    '#theme' => 'df_admin_page_template',
    '#scenarios' => $list,
  );
  return render($page);
}

/**
 * Psuedo-private function used by df_admin_page callback.
 * @return
 *   returns a string of text including a link.
 */
function _df_admin_dfs_link($module) {
  $action = (!module_exists($module->name) ? 'enable' : 'reset');
  $path = 'admin/config/system/df/' . $action  . '/' . $module->name;
  $token = drupal_get_token(DRUPAL_ROOT . '/df/' . $action  . '/' . $module->name);
  return  l(t(ucwords($action)), $path, array('attributes' => array('class' => array('dfs-link')), 'query' => array('token' => $token)));
}


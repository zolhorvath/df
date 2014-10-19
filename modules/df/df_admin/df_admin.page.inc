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
  // Add DF Admin CSS
  drupal_add_css(drupal_get_path('module', 'df_admin') . '/css/df_admin.page.css');

  // Get advanced help topics.
  $advanced_help = module_exists('advanced_help') ? advanced_help_get_topics() : array();

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
      // Add optional advanced_help topic to scenario info array.
      if (isset($advanced_help[$module->name])) {
        $first_topic = array_shift($advanced_help[$module->name]);
        $list[$module->name]['help'] = theme('advanced_help_topic', array('module' => $module->name, 'topic' => $first_topic['name'], 'type' => t('Scenario script')));
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
  $path = 'admin/df/' . $action  . '/' . $module->name;
  $token = drupal_get_token(DRUPAL_ROOT . '/df/' . $action  . '/' . $module->name);
  return  l(t(ucwords($action)), $path, array('attributes' => array('class' => array('dfs-link')), 'query' => array('token' => $token)));
}

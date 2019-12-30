<?php
/**
 * @file
 * Enables modules and site configuration for the DF site installation.
 */

/**
 * Install the DFS default scenario when site install is done.
 *
 * See: drupal.org/node/2924549 | "Invoke hook after a site install is complete"
 *
 * @TODO: See if we can remove this with a reworking of config dependencies.
 *
 * @param $install_state
 */
function df_acsf_site_install_finished($install_state) {
  $installer = \Drupal::service('module_installer');
  $installer->install(['dfs_default']);
}

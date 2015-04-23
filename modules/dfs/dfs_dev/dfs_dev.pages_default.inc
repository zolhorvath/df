<?php
/**
 * @file
 * dfs_dev.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function dfs_dev_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dfs_dev_home';
  $page->task = 'page';
  $page->admin_title = 'DFS Dev Home';
  $page->admin_description = 'A basic page_manager page to show off our default migrations.';
  $page->path = 'dfs-dev-home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dfs_dev_home__panel_context_7221c70b-f73f-467d-b39b-bb696f50b942';
  $handler->task = 'page';
  $handler->subtask = 'dfs_dev_home';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'demonstratie_layout_single';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'primary_features' => NULL,
      'secondary_features' => NULL,
      'tertiary_features' => NULL,
      'quaternary_features' => NULL,
      'primary_supplements' => NULL,
      'secondary_supplements' => NULL,
      'tertiary_supplements' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e7f98f81-43c0-4a3e-823c-1f57d93ccd52';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-16fca5d0-1033-44cd-8a8f-46c6457ac769';
    $pane->panel = 'primary_features';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:364516bc-af82-47e9-aed4-a5f9c6b1dfbe';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '16fca5d0-1033-44cd-8a8f-46c6457ac769';
    $display->content['new-16fca5d0-1033-44cd-8a8f-46c6457ac769'] = $pane;
    $display->panels['primary_features'][0] = 'new-16fca5d0-1033-44cd-8a8f-46c6457ac769';
    $pane = new stdClass();
    $pane->pid = 'new-26995e49-3920-451f-b90d-c1cfa350ab95';
    $pane->panel = 'secondary_features';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:2238c6ea-4c81-4f7b-8d19-f843bb8ecae8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '26995e49-3920-451f-b90d-c1cfa350ab95';
    $display->content['new-26995e49-3920-451f-b90d-c1cfa350ab95'] = $pane;
    $display->panels['secondary_features'][0] = 'new-26995e49-3920-451f-b90d-c1cfa350ab95';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dfs_dev_home'] = $page;

  return $pages;

}

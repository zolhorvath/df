<?php
/**
 * @file
 * df_admin.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function df_admin_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'df_admin_link';
  $page->task = 'page';
  $page->admin_title = 'Demo Framework';
  $page->admin_description = 'Demo Framework administration page.';
  $page->path = 'admin/config/system/df';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 30037204,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Demo Framework',
    'name' => 'management',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => TRUE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_df_admin_link_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'df_admin_link';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'df-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $display = new panels_display();
  $display->layout = 'demonstratie_layout_single';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'primary_features' => NULL,
      'secondary_features' => array(
        'layouts' => 'horizontal',
        'color_schemes' => 'default',
      ),
      'tertiary_features' => NULL,
      'quaternary_features' => NULL,
      'primary_supplements' => NULL,
      'secondary_supplements' => NULL,
      'tertiary_supplements' => NULL,
    ),
    'secondary_features' => array(
      'style' => 'demonstratie_panels_styles',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8579ee01-8482-cf44-0123-b70ff083acd5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3367a0a4-ac0b-2444-41bc-d400356ea00d';
    $pane->panel = 'secondary_features';
    $pane->type = 'block';
    $pane->subtype = 'df_admin-dfs_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3367a0a4-ac0b-2444-41bc-d400356ea00d';
    $display->content['new-3367a0a4-ac0b-2444-41bc-d400356ea00d'] = $pane;
    $display->panels['secondary_features'][0] = 'new-3367a0a4-ac0b-2444-41bc-d400356ea00d';
    $pane = new stdClass();
    $pane->pid = 'new-b151a98f-0f6b-2d34-89d0-77c306a4929f';
    $pane->panel = 'secondary_features';
    $pane->type = 'block';
    $pane->subtype = 'shortcut-shortcuts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Shortcuts',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b151a98f-0f6b-2d34-89d0-77c306a4929f';
    $display->content['new-b151a98f-0f6b-2d34-89d0-77c306a4929f'] = $pane;
    $display->panels['secondary_features'][1] = 'new-b151a98f-0f6b-2d34-89d0-77c306a4929f';
    $pane = new stdClass();
    $pane->pid = 'new-103fb09c-4e15-a5c4-b9cd-3207033dae5f';
    $pane->panel = 'secondary_features';
    $pane->type = 'block';
    $pane->subtype = 'locale-language';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '103fb09c-4e15-a5c4-b9cd-3207033dae5f';
    $display->content['new-103fb09c-4e15-a5c4-b9cd-3207033dae5f'] = $pane;
    $display->panels['secondary_features'][2] = 'new-103fb09c-4e15-a5c4-b9cd-3207033dae5f';
    $pane = new stdClass();
    $pane->pid = 'new-5a957d59-3acb-1874-e910-bbced749004c';
    $pane->panel = 'secondary_features';
    $pane->type = 'block';
    $pane->subtype = 'masquerade-masquerade';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Change User',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5a957d59-3acb-1874-e910-bbced749004c';
    $display->content['new-5a957d59-3acb-1874-e910-bbced749004c'] = $pane;
    $display->panels['secondary_features'][3] = 'new-5a957d59-3acb-1874-e910-bbced749004c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-103fb09c-4e15-a5c4-b9cd-3207033dae5f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['df_admin_link'] = $page;

  return $pages;

}

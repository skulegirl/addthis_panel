<?php
/**
 * @file
 * addthis_panel.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function addthis_panel_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'share_this';
  $mini->category = '';
  $mini->admin_title = 'Share This';
  $mini->admin_description = 'Contain "Add This" custom pane';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Share This';
  $display->uuid = '40812d4a-85f2-4b05-abbb-aebe352ad03c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-55d7c3a3-0a65-42fe-a1bc-57c7d76201c3';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'add_this_custom_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => '1',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '55d7c3a3-0a65-42fe-a1bc-57c7d76201c3';
    $display->content['new-55d7c3a3-0a65-42fe-a1bc-57c7d76201c3'] = $pane;
    $display->panels['middle'][0] = 'new-55d7c3a3-0a65-42fe-a1bc-57c7d76201c3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-55d7c3a3-0a65-42fe-a1bc-57c7d76201c3';
  $mini->display = $display;
  $export['share_this'] = $mini;

  return $export;
}

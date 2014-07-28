<?php
/**
 * @file
 * addthis_panel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function addthis_panel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

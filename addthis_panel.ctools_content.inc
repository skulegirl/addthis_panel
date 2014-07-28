<?php
/**
 * @file
 * addthis_panel.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function addthis_panel_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'add_this_custom_pane';
  $content->admin_title = 'Add This Custom Pane';
  $content->admin_description = 'Add This Buttons';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<?php drupal_add_js(\'//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-4f0c934203da9d83\', \'external\'); ?>
<div class="addthis_sharing_toolbox"></div>',
    'format' => '3',
    'substitute' => 1,
  );
  $export['add_this_custom_pane'] = $content;

  return $export;
}

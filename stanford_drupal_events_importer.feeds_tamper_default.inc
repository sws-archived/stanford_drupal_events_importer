<?php
/**
 * @file
 * stanford_drupal_events_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function stanford_drupal_events_importer_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stanford_drupal_event_importer-xpathparser_15-explode';
  $feeds_tamper->importer = 'stanford_drupal_event_importer';
  $feeds_tamper->source = 'xpathparser:15';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['stanford_drupal_event_importer-xpathparser_15-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stanford_drupal_event_importer-xpathparser_16-explode';
  $feeds_tamper->importer = 'stanford_drupal_event_importer';
  $feeds_tamper->source = 'xpathparser:16';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['stanford_drupal_event_importer-xpathparser_16-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stanford_drupal_event_importer-xpathparser_4-truncate';
  $feeds_tamper->importer = 'stanford_drupal_event_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '26',
    'ellipses' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Truncate';
  $export['stanford_drupal_event_importer-xpathparser_4-truncate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stanford_drupal_event_importer-xpathparser_5-truncate';
  $feeds_tamper->importer = 'stanford_drupal_event_importer';
  $feeds_tamper->source = 'xpathparser:5';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '26',
    'ellipses' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Truncate';
  $export['stanford_drupal_event_importer-xpathparser_5-truncate'] = $feeds_tamper;

  return $export;
}

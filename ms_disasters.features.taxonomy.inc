<?php
/**
 * @file
 * ms_disasters.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ms_disasters_taxonomy_default_vocabularies() {
  return array(
    'ms_disaster' => array(
      'name' => 'Disaster',
      'machine_name' => 'ms_disaster',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}

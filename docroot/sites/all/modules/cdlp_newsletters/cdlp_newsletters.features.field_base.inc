<?php
/**
 * @file
 * cdlp_newsletters.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function cdlp_newsletters_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_simplenews_articles'.
  $field_bases['field_simplenews_articles'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_simplenews_articles',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'direction' => 'DESC',
          'property' => 'created',
          'type' => 'property',
        ),
        'target_bundles' => array(
          'article' => 'article',
          'event' => 'event',
          'resource' => 'resource',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_simplenews_term'.
  $field_bases['field_simplenews_term'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_simplenews_term',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'parent' => 0,
          'vocabulary' => 'newsletter',
        ),
      ),
    ),
    'translatable' => 1,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}

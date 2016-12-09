<?php
/**
 * @file
 * ialp_settings.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ialp_settings_taxonomy_default_vocabularies() {
  return array(
    'forums' => array(
      'name' => 'Forums',
      'machine_name' => 'forums',
      'description' => 'Forum navigation vocabulary',
      'hierarchy' => 1,
      'module' => 'forum',
      'weight' => -10,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'material_type' => array(
      'name' => 'Material type',
      'machine_name' => 'material_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}

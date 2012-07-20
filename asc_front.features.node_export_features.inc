<?php
/**
 * @file
 * asc_front.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function asc_front_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'1\',
      \'uid\' => \'1\',
      \'title\' => \'Front\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8fc09730-d347-5f24-9128-a0be95381ccf\',
      \'nid\' => \'1\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1342722588\',
      \'changed\' => \'1342722588\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'412d6e2c-c219-0094-1d44-ea6a62b96eb9\',
      \'revision_timestamp\' => \'1342722588\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>This is our front page text.</p>\',
            \'summary\' => \'\',
            \'format\' => \'html\',
            \'safe_value\' => \' <p>This is our front page text.</p> \',
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'field_displaythumbs\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_slideshow\' => array(
        \'und\' => array(
          NULL,
          array(
            \'fid\' => \'7\',
            \'alt\' => NULL,
            \'title\' => NULL,
            \'width\' => \'740\',
            \'height\' => \'308\',
            \'uid\' => \'0\',
            \'filename\' => \'\',
            \'uri\' => \'\',
            \'filemime\' => \'application/octet-stream\',
            \'filesize\' => \'0\',
            \'status\' => \'1\',
            \'timestamp\' => \'1342722588\',
            \'type\' => \'application\',
            \'uuid\' => \'1e67c784-0049-9604-15ff-f2cba15dacfb\',
            \'rdf_mapping\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => array(
        \'link_title\' => \'\',
        \'mlid\' => 0,
        \'plid\' => 0,
        \'menu_name\' => \'main-menu\',
        \'weight\' => 0,
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => 0,
        \'hidden\' => 0,
        \'has_children\' => 0,
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}

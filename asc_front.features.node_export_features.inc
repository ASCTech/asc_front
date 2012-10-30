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
      \'uid\' => \'0\',
      \'title\' => \'Front Page\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f99bf787-530a-1a04-e171-e816a7e8c591\',
      \'nid\' => \'1\',
      \'type\' => \'front_page\',
      \'language\' => \'und\',
      \'created\' => \'1351523381\',
      \'changed\' => \'1351523467\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'8c481ecd-1008-fbf4-1d15-a51c1bc545cd\',
      \'revision_timestamp\' => \'1351523467\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>Front page body.</p>\',
            \'summary\' => \'\',
            \'format\' => \'html\',
            \'safe_value\' => \' <p>Front page body.</p> \',
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'field_asc_quick_links\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Quick Links Text\',
            \'format\' => NULL,
            \'safe_value\' => \'Quick Links Text\',
          ),
        ),
      ),
      \'field_slideshow\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'2\',
            \'alt\' => NULL,
            \'title\' => NULL,
            \'width\' => \'4288\',
            \'height\' => \'2848\',
            \'uid\' => \'1\',
            \'filename\' => \'DSC_4951.JPG\',
            \'uri\' => \'public://DSC_4951.JPG\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'9976145\',
            \'status\' => \'1\',
            \'timestamp\' => \'1351523463\',
            \'type\' => \'image\',
            \'uuid\' => \'5d06dc85-3f7c-f714-a92c-b14c2388b607\',
            \'field_caption\' => array(),
            \'field_file_image_alt_text\' => array(
              \'und\' => array(
                array(
                  \'value\' => \'House\',
                  \'format\' => NULL,
                  \'safe_value\' => \'House\',
                ),
              ),
            ),
            \'field_gallery\' => array(
              \'und\' => array(
                array(
                  \'value\' => \'0\',
                ),
              ),
            ),
            \'field_image_terms_1\' => array(),
            \'field_image_terms_2\' => array(),
            \'field_image_terms_3\' => array(),
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'4288\',
              \'height\' => \'2848\',
            ),
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
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'path\' => array(
        \'pid\' => \'1\',
        \'source\' => \'node/1\',
        \'alias\' => \'content/front-page\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}

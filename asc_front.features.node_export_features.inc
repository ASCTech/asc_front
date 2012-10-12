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
      \'vid\' => \'2\',
      \'uid\' => \'1\',
      \'title\' => \'Front Page\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ea3200f7-e0c0-2804-e145-102a1b9e3803\',
      \'nid\' => \'2\',
      \'type\' => \'front_page\',
      \'language\' => \'und\',
      \'created\' => \'1350068911\',
      \'changed\' => \'1350069879\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'8b732ced-856d-ac34-09bc-fe6f6f2a46fc\',
      \'revision_timestamp\' => \'1350069879\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>sdgsdgsdgsdgsdg</p>\',
            \'summary\' => \'\',
            \'format\' => \'html\',
            \'safe_value\' => \' <p>sdgsdgsdgsdgsdg</p> \',
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'field_slideshow\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1\',
            \'alt\' => NULL,
            \'title\' => NULL,
            \'width\' => \'1946\',
            \'height\' => \'1146\',
            \'uid\' => \'1\',
            \'filename\' => \'HmtdV.jpg\',
            \'uri\' => \'public://HmtdV.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'658459\',
            \'status\' => \'1\',
            \'timestamp\' => \'1350069815\',
            \'type\' => \'image\',
            \'uuid\' => \'7d4e5c3f-6f3c-f914-11cd-5c42e942ceea\',
            \'field_caption\' => array(),
            \'field_file_image_alt_text\' => array(
              \'und\' => array(
                array(
                  \'value\' => \'sdf\',
                  \'format\' => NULL,
                  \'safe_value\' => \'sdf\',
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
              \'width\' => \'1946\',
              \'height\' => \'1146\',
            ),
          ),
        ),
      ),
      \'field_asc_quick_links\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Quick links text\',
            \'format\' => NULL,
            \'safe_value\' => \'Quick links text\',
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
      \'path\' => array(
        \'pid\' => \'2\',
        \'source\' => \'node/2\',
        \'alias\' => \'content/front\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}

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
      \'vid\' => \'5\',
      \'uid\' => \'1\',
      \'title\' => \'Front\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8fc09730-d347-5f24-9128-a0be95381ccf\',
      \'nid\' => \'5\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1342611784\',
      \'changed\' => \'1342703956\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'412d6e2c-c219-0094-1d44-ea6a62b96eb9\',
      \'revision_timestamp\' => \'1342703956\',
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
          array(
            \'fid\' => \'2\',
            \'alt\' => NULL,
            \'title\' => NULL,
            \'width\' => \'300\',
            \'height\' => \'153\',
            \'uid\' => \'1\',
            \'filename\' => \'My Title\',
            \'uri\' => \'public://cht_0.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'10300\',
            \'status\' => \'1\',
            \'timestamp\' => \'1342642095\',
            \'type\' => \'image\',
            \'uuid\' => \'b46cf99e-5113-7c44-698a-fb6d072d6a37\',
            \'field_file_image_alt_text\' => array(
              \'und\' => array(
                array(
                  \'value\' => \'alt text\',
                  \'format\' => NULL,
                  \'safe_value\' => \'alt text\',
                ),
              ),
            ),
            \'field_gallery\' => array(
              \'und\' => array(
                array(
                  \'value\' => \'1\',
                ),
              ),
            ),
            \'field_image_terms_1\' => array(
              \'und\' => array(
                array(
                  \'tid\' => \'2\',
                ),
              ),
            ),
            \'field_image_terms_2\' => array(),
            \'field_image_terms_3\' => array(),
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'300\',
              \'height\' => \'153\',
            ),
          ),
          array(
            \'fid\' => \'7\',
            \'alt\' => NULL,
            \'title\' => NULL,
            \'width\' => \'740\',
            \'height\' => \'308\',
            \'uid\' => \'1\',
            \'filename\' => \'purity.png\',
            \'uri\' => \'public://purity.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'32287\',
            \'status\' => \'1\',
            \'timestamp\' => \'1342703950\',
            \'type\' => \'image\',
            \'uuid\' => \'b0296c38-8176-ae44-3d05-160bc72a1a5a\',
            \'field_file_image_alt_text\' => array(
              \'und\' => array(
                array(
                  \'value\' => \'Alt text\',
                  \'format\' => NULL,
                  \'safe_value\' => \'Alt text\',
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
              \'width\' => \'740\',
              \'height\' => \'308\',
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
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'1\',
        \'source\' => \'node/5\',
        \'alias\' => \'front-page\',
        \'language\' => \'und\',
      ),
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

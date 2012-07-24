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
      \'vid\' => \'3\',
      \'uid\' => \'0\',
      \'title\' => \'Front\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'7fa76da8-2053-a4b4-b118-74e69cdc27a4\',
      \'nid\' => \'1\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1343129095\',
      \'changed\' => \'1343132676\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'412d6e2c-c219-0094-1d44-ea6a62b96eb9\',
      \'revision_timestamp\' => \'1343132676\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>This is our front page text.</p>\',
            \'summary\' => "This is a quick bit of information to be displayed on the front page under \'Quick Links.\'",
            \'format\' => \'html\',
            \'safe_value\' => \' <p>This is our front page text.</p> \',
            \'safe_summary\' => " This is a quick bit of information to be displayed on the front page under \'Quick Links.\' ",
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
            \'width\' => \'740\',
            \'height\' => \'308\',
            \'uid\' => \'1\',
            \'filename\' => \'sdfsdfpurity.png\',
            \'uri\' => \'public://purity.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'32287\',
            \'status\' => \'1\',
            \'timestamp\' => \'1343130321\',
            \'type\' => \'image\',
            \'uuid\' => \'f94892ff-2c61-aa24-216f-a99e77be2455\',
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
                  \'value\' => \'1\',
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
          array(
            \'fid\' => \'3\',
            \'alt\' => NULL,
            \'title\' => NULL,
            \'width\' => \'250\',
            \'height\' => \'220\',
            \'uid\' => \'1\',
            \'filename\' => \'Another Picture\',
            \'uri\' => \'public://butsko7.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'12100\',
            \'status\' => \'1\',
            \'timestamp\' => \'1343132672\',
            \'type\' => \'image\',
            \'uuid\' => \'442c327c-bd8f-e7f4-dd2b-b52c5017b9c1\',
            \'field_file_image_alt_text\' => array(
              \'und\' => array(
                array(
                  \'value\' => \'sdgsdg\',
                  \'format\' => NULL,
                  \'safe_value\' => \'sdgsdg\',
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
            \'field_image_terms_1\' => array(),
            \'field_image_terms_2\' => array(),
            \'field_image_terms_3\' => array(),
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'250\',
              \'height\' => \'220\',
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
        \'alias\' => \'content/front\',
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

<?php
/**
 * @file
 * opendata_content.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function opendata_content_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-opendata_dataset-field_opendata_datadictionary_ty'
  $field_instances['node-opendata_dataset-field_opendata_datadictionary_ty'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The machine-readable file format (IANA Media Type also known as MIME Type) of the dataset’s Data Dictionary',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_datadictionary_ty',
    'label' => 'Data Dictionary Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_access_level'
  $field_instances['node-opendata_dataset-field_opendata_access_level'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The degree to which this dataset could be made publicly-available, regardless of whether it has been made available. Choices: Public (is or could be made publicly available), Restricted Public (available under certain conditions), or non-Public (never able to be made publicly available).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_access_level',
    'label' => 'Public Access Level',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_bureau_code'
  $field_instances['node-opendata_dataset-field_opendata_bureau_code'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Federal agencies, combined agency and bureau code from OMB Circular A-11, Appendix C',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 32,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_bureau_code',
    'label' => 'Bureau Code',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_conforms_to'
  $field_instances['node-opendata_dataset-field_opendata_conforms_to'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is used to specify a data dictionary or schema that defines fields or column headings in the dataset.  At the dataset level it’s assumed to be a human readable HTML webpage or PDF document.<br>
Example:<i>http://www.agency.gov/vegetables/definitions.pdf</i>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_conforms_to',
    'label' => 'Data Standard',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_data_dictionary'
  $field_instances['node-opendata_dataset-field_opendata_data_dictionary'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'URL to the data dictionary for the dataset or API. Note that documentation other than a Data Dictionary can be referenced using Related Documents as shown in the expanded fields.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_data_dictionary',
    'label' => 'Data Dictionary',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_data_quality'
  $field_instances['node-opendata_dataset-field_opendata_data_quality'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check here if this dataset meets the agency\'s Information Quality Guidelines.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_data_quality',
    'label' => 'Data Quality',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_description'
  $field_instances['node-opendata_dataset-field_opendata_description'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Human-readable description (e.g., an abstract) with sufficient detail to enable a user to quickly understand whether the asset is of interest.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_description',
    'label' => 'Description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_distribution'
  $field_instances['node-opendata_dataset-field_opendata_distribution'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Describes each manner through which the data is made available, including URL providing direct access to the downloadable distribution of a dataset and the file format (e.g. csv, xls, json, etc.) or API type of the distribution.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'opendata_distribution_field',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'opendata_distribution_default',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_distribution',
    'label' => 'Distributions',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'opendata_distribution_field',
      'settings' => array(),
      'type' => 'opendata_distribution',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_frequency'
  $field_instances['node-opendata_dataset-field_opendata_frequency'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Frequency with which dataset is published.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_frequency',
    'label' => 'Frequency',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_identifier'
  $field_instances['node-opendata_dataset-field_opendata_identifier'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A unique identifier for the dataset or API as maintained within an Agency catalog or database.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_identifier',
    'label' => 'Unique Identifier',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_ispartof'
  $field_instances['node-opendata_dataset-field_opendata_ispartof'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The collection of which the dataset is a subset. This field should be employed by the individual datasets that together make up a collection. The value for this field should match the identifier of the parent dataset. <br>
Example: <i>http://dx.doi.org/10.7927/H4PZ56R2</i>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_ispartof',
    'label' => 'Collection',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_keyword'
  $field_instances['node-opendata_dataset-field_opendata_keyword'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Comma separated list of keywords to help users discover your dataset. Please include terms that would be used by technical and non-technical users.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_keyword',
    'label' => 'Tags',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_landing_page'
  $field_instances['node-opendata_dataset-field_opendata_landing_page'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Alternative landing page used to redirect user to a contextual, Agency-hosted "homepage" for the Dataset or API when selecting this resource from the Data.gov user interface.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_landing_page',
    'label' => 'Homepage URL',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_language'
  $field_instances['node-opendata_dataset-field_opendata_language'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The language of the dataset. This should adhere to the RFC 5646 standard.  <br>
Example: <i>en-US</i>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_language',
    'label' => 'Language',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_license'
  $field_instances['node-opendata_dataset-field_opendata_license'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The license dataset or API is published with. See <a href="http://project-open-data.github.io/open-licenses/">Open Licenses</a> for more information.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_license',
    'label' => 'License',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_mbox'
  $field_instances['node-opendata_dataset-field_opendata_mbox'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Contact person\'s email address.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'email_default',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_mbox',
    'label' => 'Contact Email',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_modified'
  $field_instances['node-opendata_dataset-field_opendata_modified'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Most recent date on which the dataset was changed, updated or modified. Dates should be formatted as YYYY-MM-DD. Specify "01" as the day if unknown. If this file is brand-new, enter the issued date here as well.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_modified',
    'label' => 'Last Update',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 10,
      ),
      'type' => 'text_textfield',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_person'
  $field_instances['node-opendata_dataset-field_opendata_person'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Contact person\'s name for the asset.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_person',
    'label' => 'Contact Name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_primary_it_invest'
  $field_instances['node-opendata_dataset-field_opendata_primary_it_invest'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'For linking a dataset with an IT Unique Investment Identifier (UII), which can often be found in Exhibit 53 documents. <br>
Example: <i>023-000000001</i>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 38,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_primary_it_invest',
    'label' => 'Primary IT Investment UII',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_program_code'
  $field_instances['node-opendata_dataset-field_opendata_program_code'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Federal agencies, list the primary program related to this data asset, from the Federal Program Inventory in the form of Agency Code:Program Code. <br>
Example: <i>015:001</i><br>
The <a href="https://project-open-data.cio.gov/v1.1/schema/#programCode" target="_blank">Program Code Schema</a> provides a link to the updated list.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_program_code',
    'label' => 'Program Code',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 15,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_publisher'
  $field_instances['node-opendata_dataset-field_opendata_publisher'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The publishing agency.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_publisher',
    'label' => 'Publisher',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_references'
  $field_instances['node-opendata_dataset-field_opendata_references'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Related documents such as technical information about a dataset, developer documentation, etc.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_references',
    'label' => 'Related Documents',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_release_date'
  $field_instances['node-opendata_dataset-field_opendata_release_date'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Date of formal issuance. YYYY-MM-DD.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_release_date',
    'label' => 'Release Date',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 10,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_rights'
  $field_instances['node-opendata_dataset-field_opendata_rights'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This may include information regarding access or restrictions based on privacy, security, or other policies. This should also serve as an explanation for the selected “accessLevel” including instructions for how to access a restricted file, if applicable, or explanation for why a “non-public” or “restricted public” data asset is not “public,” if applicable. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_rights',
    'label' => 'Rights',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_spatial'
  $field_instances['node-opendata_dataset-field_opendata_spatial'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The range of spatial applicability of a dataset. Could include a spatial region like a bounding box or a named place. This field should contain one of the following types of content: (1) a bounding coordinate box for the dataset represented in latitude / longitude pairs where the coordinates are specified in decimal degrees and in the order of: minimum longitude, minimum latitude, maximum longitude, maximum latitude; (2) a latitude / longitude pair (in decimal degrees) representing a point where the dataset is relevant; (3) a geographic feature expressed in <a href="http://www.ogcnetwork.net/gml-sf">Geography Markup Language using the Simple Features Profile</a>; or (4) a geographic feature from the <a href="http://project-open-data.github.dev/schema/www.geonames.org">GeoNames database</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_spatial',
    'label' => 'Spatial',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_suborganizationof'
  $field_instances['node-opendata_dataset-field_opendata_suborganizationof'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A pipe delimited list of publisher organizations starting with the main organization and cascading down to the specific sub-organization. <br>
Example: <i>U.S. Government | General Services Administration | Office of Citizen Services and Innovative Technologies | Widget Services</i>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 30,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_suborganizationof',
    'label' => 'subOrganizationOf',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_system_of_records'
  $field_instances['node-opendata_dataset-field_opendata_system_of_records'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'URL to the System of Records related to this dataset.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_system_of_records',
    'label' => 'System of Records',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_temporal'
  $field_instances['node-opendata_dataset-field_opendata_temporal'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The range of temporal applicability of a dataset (i.e., a start and end date of applicability for the data). This field should contain an interval of time defined by start and end dates. Dates should be formatted as pairs of {start date, end date} in the format YYYY-MM-DD hh:mm:ss using 24 hour clock time notation (e.g., 2011-02-14 12:00:00, 2013-02-14 12:00:00).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_temporal',
    'label' => 'Temporal',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-opendata_dataset-field_opendata_theme'
  $field_instances['node-opendata_dataset-field_opendata_theme'] = array(
    'bundle' => 'opendata_dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Main thematic category of the dataset.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opendata_theme',
    'label' => 'Category',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A pipe delimited list of publisher organizations starting with the main organization and cascading down to the specific sub-organization. <br>
Example: <i>U.S. Government | General Services Administration | Office of Citizen Services and Innovative Technologies | Widget Services</i>');
  t('A unique identifier for the dataset or API as maintained within an Agency catalog or database.');
  t('Alternative landing page used to redirect user to a contextual, Agency-hosted "homepage" for the Dataset or API when selecting this resource from the Data.gov user interface.');
  t('Bureau Code');
  t('Category');
  t('Check here if this dataset meets the agency\'s Information Quality Guidelines.');
  t('Collection');
  t('Comma separated list of keywords to help users discover your dataset. Please include terms that would be used by technical and non-technical users.');
  t('Contact Email');
  t('Contact Name');
  t('Contact person\'s email address.');
  t('Contact person\'s name for the asset.');
  t('Data Dictionary');
  t('Data Dictionary Type');
  t('Data Quality');
  t('Data Standard');
  t('Date of formal issuance. YYYY-MM-DD.');
  t('Describes each manner through which the data is made available, including URL providing direct access to the downloadable distribution of a dataset and the file format (e.g. csv, xls, json, etc.) or API type of the distribution.');
  t('Description');
  t('Distributions');
  t('Federal agencies, combined agency and bureau code from OMB Circular A-11, Appendix C');
  t('Federal agencies, list the primary program related to this data asset, from the Federal Program Inventory in the form of Agency Code:Program Code. <br>
Example: <i>015:001</i><br>
The <a href="https://project-open-data.cio.gov/v1.1/schema/#programCode" target="_blank">Program Code Schema</a> provides a link to the updated list.');
  t('For linking a dataset with an IT Unique Investment Identifier (UII), which can often be found in Exhibit 53 documents. <br>
Example: <i>023-000000001</i>');
  t('Frequency');
  t('Frequency with which dataset is published.');
  t('Homepage URL');
  t('Human-readable description (e.g., an abstract) with sufficient detail to enable a user to quickly understand whether the asset is of interest.');
  t('Language');
  t('Last Update');
  t('License');
  t('Main thematic category of the dataset.');
  t('Most recent date on which the dataset was changed, updated or modified. Dates should be formatted as YYYY-MM-DD. Specify "01" as the day if unknown. If this file is brand-new, enter the issued date here as well.');
  t('Primary IT Investment UII');
  t('Program Code');
  t('Public Access Level');
  t('Publisher');
  t('Related Documents');
  t('Related documents such as technical information about a dataset, developer documentation, etc.');
  t('Release Date');
  t('Rights');
  t('Spatial');
  t('System of Records');
  t('Tags');
  t('Temporal');
  t('The collection of which the dataset is a subset. This field should be employed by the individual datasets that together make up a collection. The value for this field should match the identifier of the parent dataset. <br>
Example: <i>http://dx.doi.org/10.7927/H4PZ56R2</i>');
  t('The degree to which this dataset could be made publicly-available, regardless of whether it has been made available. Choices: Public (is or could be made publicly available), Restricted Public (available under certain conditions), or non-Public (never able to be made publicly available).');
  t('The language of the dataset. This should adhere to the RFC 5646 standard.  <br>
Example: <i>en-US</i>');
  t('The license dataset or API is published with. See <a href="http://project-open-data.github.io/open-licenses/">Open Licenses</a> for more information.');
  t('The machine-readable file format (IANA Media Type also known as MIME Type) of the dataset’s Data Dictionary');
  t('The publishing agency.');
  t('The range of spatial applicability of a dataset. Could include a spatial region like a bounding box or a named place. This field should contain one of the following types of content: (1) a bounding coordinate box for the dataset represented in latitude / longitude pairs where the coordinates are specified in decimal degrees and in the order of: minimum longitude, minimum latitude, maximum longitude, maximum latitude; (2) a latitude / longitude pair (in decimal degrees) representing a point where the dataset is relevant; (3) a geographic feature expressed in <a href="http://www.ogcnetwork.net/gml-sf">Geography Markup Language using the Simple Features Profile</a>; or (4) a geographic feature from the <a href="http://project-open-data.github.dev/schema/www.geonames.org">GeoNames database</a>.');
  t('The range of temporal applicability of a dataset (i.e., a start and end date of applicability for the data). This field should contain an interval of time defined by start and end dates. Dates should be formatted as pairs of {start date, end date} in the format YYYY-MM-DD hh:mm:ss using 24 hour clock time notation (e.g., 2011-02-14 12:00:00, 2013-02-14 12:00:00).');
  t('This is used to specify a data dictionary or schema that defines fields or column headings in the dataset.  At the dataset level it’s assumed to be a human readable HTML webpage or PDF document.<br>
Example:<i>http://www.agency.gov/vegetables/definitions.pdf</i>');
  t('This may include information regarding access or restrictions based on privacy, security, or other policies. This should also serve as an explanation for the selected “accessLevel” including instructions for how to access a restricted file, if applicable, or explanation for why a “non-public” or “restricted public” data asset is not “public,” if applicable. ');
  t('URL to the System of Records related to this dataset.');
  t('URL to the data dictionary for the dataset or API. Note that documentation other than a Data Dictionary can be referenced using Related Documents as shown in the expanded fields.');
  t('Unique Identifier');
  t('subOrganizationOf');

  return $field_instances;
}

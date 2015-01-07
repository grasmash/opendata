<?php
/**
 * @file
 * Defines OpenDataJSONtoDatasetMigration class.
 */

/**
 * Class OpenDataJSONtoDatasetMigration.
 *
 * Parent class for JSON to Dataset migrations.
 *
 * @package opendata_migration
 */
class OpenDataJSONtoDatasetMigration extends OpenDataMigration {

  /**
   * Prepare the JSON source.
   *
   * This will setup $this->source.
   * It will also add field mappings for redirects.
   *
   * All derived classes should define 'fileid' as the source key in
   * MigrateSQLMap(), as it is used to create redirects.
   *
   * @param array $arguments
   *   Arguments provided by migrate module.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    // Document the source fields as defined by schema v1.1.
    // https://project-open-data.cio.gov/v1.1/schema/
    $source_fields = array(
      'title' => 'Human-readable name of the dataset.',
      'description' => 'Human-readable description of the dataset.',
      'keyword' => 'The keywords used to define the dataset.',
      'modified' => 'Most recent date on which the dataset was changed, updated or modified. yyyy-mm-dd.',
      'identifier' => 'A unique identifier for the dataset or API as maintained within an Agency catalog or database.',
      'accessLevel' => 'The degree to which this dataset could be made publicly-available.',
      'bureauCode' => 'Federal agencies, combined agency and bureau code from OMB Circular A-11, Appendix C.',
      'programCode' => 'Federal agencies, list the primary program related to this data asset, from the Federal Program Inventory.',
      'describedBy' => 'URL to the data dictionary for the dataset.',
      'license' => 'The license or non-license (i.e. Public Domain) status with which the dataset or API has been published.',
      'rights' => 'Information regarding access or restrictions based on privacy, security, or other policies.',
      'spatial' => 'The range of spatial applicability of a dataset.',
      'temporal' => 'The range of temporal applicability of a dataset',
      // @TODO Need to work out mapping and cardinality of distribution fields.
      'distribution' => array(
        'accessURL' => 'URL providing indirect access to a dataset, for example via API or a graphical interface.',
        'conformsTo' => 'URI used to identify a standardized specification the distribution conforms to.',
        'describedBy' => 'URL to the data dictionary for the distribution found at the downloadURL.',
        'describedByType' => 'The machine-readable file format (MIME type) of the distribution’s describedBy URL.',
        'description' => 'Human-readable description of the distribution.',
        'downloadURL' => 'URL providing direct access to a downloadable file of a dataset.',
        'format' => 'A human-readable description of the file format of a distribution.',
        'mediaType' => 'The machine-readable file format (MIME type) of the distribution’s downloadURL.',
        'title' => 'Human-readable name of the distribution.',
      ),
      'issued' => 'Date of formal issuance.',
      'accrualPeriodicity' => 'The frequency with which dataset is published.',
      'language' => 'The language code of the dataset.',
      'dataQuality' => 'Whether the dataset meets the agency’s Information Quality Guidelines.',
      'conformsTo' => 'URI used to identify a standardized specification the dataset conforms to.',
      'describedByType' => 'The machine-readable file format (MIME type).',
      'theme' => 'Main thematic category of the dataset.',
      'references' => 'Related documents such as technical information about a dataset, developer documentation, etc.',
      'publisher' => 'The publishing entity and optionally their parent organization(s).',
      'subOrganizationOf' => 'A parent organizational entity described using the same publisher object fields.',
      'contactPoint' => 'Array containing the contact person’s name for and email for the asset.',
      'landingPage' => 'A human-friendly hub or landing page that users can be directed to for all resources tied to the dataset.',
      'isPartOf' => 'The collection of which the dataset is a subset.',
      'systemOfRecords' => 'The URL to the System of Records Notice related to this dataset.',
      'primaryITInvestmentUII' => 'Links a dataset with an IT Unique Investment Identifier (UII)',

      'hasEmail'               => 'The email address of the contact point.',
    );

    // To specify an alternate JSON source for the migration, use
    // variable_set('http://the_url_to_the_feed') or override
    // $arguments['json_source_url'] in a child class before calling parent.
    global $base_url;
    $arguments['json_source_url'] = (!empty($arguments['json_source_url'])) ? $arguments['json_source_url'] : variable_get('opendata_json_dataset_url', "{$base_url}/data.json");

    // Second parameter is the unique ID from the source file.
    $this->source = new MigrateSourceList(new MultiListJSON($arguments['json_source_url']), new OpendataDatasetItemJSON($arguments['json_source_url'], array()), $source_fields);

    // Map drupal fields to source fields.
    // Common core (required fields).
    $this->addFieldMapping('title', 'title', FALSE);
    $this->addFieldMapping('field_opendata_description', 'description');
    $this->addFieldMapping('field_opendata_keyword', 'keyword');
    $this->addFieldMapping('field_opendata_modified', 'modified');
    $this->addFieldMapping('field_opendata_publisher', 'publisherName');
    $this->addFieldMapping('field_opendata_suborganizationof', 'subOrganizationOf');
    $this->addFieldMapping('field_opendata_person', 'fn');
    $this->addFieldMapping('field_opendata_mbox', 'hasEmail');
    $this->addFieldMapping('field_opendata_identifier', 'identifier');
    $this->addFieldMapping('field_opendata_access_level', 'accessLevel');
    $this->addFieldMapping('field_opendata_bureau_code', 'bureauCode');
    $this->addFieldMapping('field_opendata_program_code', 'programCode');

    // Common Core (Required if applicable).
    $this->addFieldMapping('field_opendata_data_dictionary', 'describedBy');
    $this->addFieldMapping('field_opendata_license', 'license');
    $this->addFieldMapping('field_opendata_rights', 'rights');
    $this->addFieldMapping('field_opendata_spatial', 'spatial');
    $this->addFieldMapping('field_opendata_temporal', 'temporal');
    // Distributions.
    // @TODO Make Distributions support migration with unlimited cardinality
    // into the opendata_distribution_field widget.
    // @TODO  FIX these.  They are not migrating at all, the colon notation
    // seems to be failing.
    $this->addFieldMapping('field_opendata_distribution:access_url', 'distributionAccessURL');
    $this->addFieldMapping('field_opendata_distribution:download_url', 'distributionDownloadURL');
    $this->addFieldMapping('field_opendata_distribution:media_type', 'distributionMediaType');
    $this->addFieldMapping('field_opendata_distribution:conforms_to', 'distributionConformsTo');
    $this->addFieldMapping('field_opendata_distribution:described_by', 'distributionDescribedBy');
    $this->addFieldMapping('field_opendata_distribution:described_by_type', 'distributionDescribedByType');
    $this->addFieldMapping('field_opendata_distribution:title', 'distributionTitle');
    $this->addFieldMapping('field_opendata_distribution:description', 'distributionDescription');
    $this->addFieldMapping('field_opendata_distribution:format', 'distributionFormat');

    // Expanded fields (completely optional).
    $this->addFieldMapping('field_opendata_release_date', 'issued');
    $this->addFieldMapping('field_opendata_frequency', 'accrualPeriodicity');
    $this->addFieldMapping('field_opendata_language', 'language');
    $this->addFieldMapping('field_opendata_data_quality', 'dataQuality');
    $this->addFieldMapping('field_opendata_conforms_to', 'conformsTo');
    $this->addFieldMapping('field_opendata_datadictionary_ty', 'describedByType');
    $this->addFieldMapping('field_opendata_theme', 'theme');
    $this->addFieldMapping('field_opendata_references', 'references');
    $this->addFieldMapping('field_opendata_landing_page', 'landingPage');
    $this->addFieldMapping('field_opendata_ispartof', 'isPartOf');
    $this->addFieldMapping('field_opendata_system_of_records', 'systemOfRecords');
    $this->addFieldMapping('field_opendata_primary_it_invest', 'primaryITInvestmentUII');

    // Drupal internals.
    $this->addFieldMapping('status')->defaultValue('1');
    $this->addFieldMapping('uid')->defaultValue('1');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'identifier' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );
    $this->destination = new MigrateDestinationNode('opendata_dataset');

  }

  /**
   * {@inheritdoc}
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // There has to be a better way to handle some of these, but it works.
    $this->processContactPoint($row);
    $this->processKeywords($row);
    $this->processDistributions($row);
    $this->processPublisher($row);
  }

  /**
   * Breaks the contactPoint into two parts.
   *
   * @param object $row
   *   Row data as passed to prepareRow.
   */
  public function processContactPoint(&$row) {
    if (!empty($row->contactPoint)) {
      $row->fn = !empty($row->contactPoint->fn) ? $row->contactPoint->fn : '';
      $row->hasEmail = !empty($row->contactPoint->hasEmail) ? $row->contactPoint->hasEmail : '';
      // The data has been extracted, throw the object away to prevent errors.
      unset($row->contactPoint);
    }
  }

  /**
   * Breaks the distribution into its parts.
   *
   * @param object $row
   *   Row data as passed to prepareRow.
   */
  public function processDistributions(&$row) {
    // @TODO Make this handle unlimited cardinality. It currently only grabs the
    // last one.
    if (!empty($row->distribution)) {
      foreach ($row->distribution as $key => $distribution) {
        $row->distributionAccessURL = !empty($distribution->accessURL) ? $distribution->accessURL : '';
        $row->distributionDownloadURL = !empty($distribution->downloadURL) ? $distribution->downloadURL : '';
        $row->distributionMediaType = !empty($distribution->mediaType) ? $distribution->mediaType : '';
        $row->distributionConformsTo = !empty($distribution->conformsTo) ? $distribution->conformsTo : '';
        $row->distributionDescribedBy = !empty($distribution->describedBy) ? $distribution->describedBy : '';
        $row->distributionDescribedByType = !empty($distribution->describedByType) ? $distribution->describedByType : '';
        $row->distributionTitle = !empty($distribution->title) ? $distribution->title : '';
        $row->distributionDescription = !empty($distribution->description) ? $distribution->description : '';
        $row->distributionFormat = !empty($distribution->format) ? $distribution->format : '';
      }
    }
  }

  /**
   * Combines the keywords into a comma separated list.
   *
   * @param object $row
   *   Row data as passed to prepareRow.
   */
  public function processKeywords(&$row) {
    // Keywords need to be a comma list instead of an array.
    if ((!empty($row->keyword)) && (is_array($row->keyword))) {
      $row->keyword = implode(', ', $row->keyword);
    }
  }

  /**
   * Breaks the publisher into two parts for name and subOrganizationOf.
   *
   * @param object $row
   *   Row data as passed to prepareRow.
   */
  public function processPublisher(&$row) {
    if (!empty($row->publisher)) {
      // The first name to appear is the most specific name.
      $row->publisherName = !empty($row->publisher->name) ? $row->publisher->name : '';
      $org_list = array();
      $suborg = !empty($row->publisher->subOrganizationOf) ? $row->publisher->subOrganizationOf : '';
      while (!empty($suborg)) {
        $org_list[] = !empty($suborg->name) ? $suborg->name : '';
        // Unwrap and remove the current organization.
        $suborg = !empty($suborg->subOrganizationOf) ? $suborg->subOrganizationOf : '';
      }
      krsort($org_list);
      $row->subOrganizationOf = implode('|', $org_list);
    }
  }
}


class MultiListJSON extends MigrateListJSON {
  /**
   * Overridden to look inside the JSON object and find ['dataset'] member.
   *
   * @param object $data
   *   Data representing the entire JSON source content.
   */
  protected function getIDsFromJSON(array $data) {
    $ids = array();
    foreach ($data['dataset'] as $item) {
      $ids[] = $item['identifier'];
    }
    return $ids;
  }

  /**
   * Overrides the base computeCount to correctly count the datasets.
   *
   * @return int
   *   The count of the items to be imported.
   */
  public function computeCount() {
    $count = 0;
    if (empty($this->httpOptions)) {
      $json = file_get_contents($this->listUrl);
    }
    else {
      $response = drupal_http_request($this->listUrl, $this->httpOptions);
      $json = $response->data;
    }
    if ($json) {
      $data = drupal_json_decode($json);
      if ($data) {
        $count = count($data['dataset']);
      }
    }
    return $count;
  }
}

class OpendataDatasetItemJSON extends MigrateItemJSON {
  protected $data = array();

  /**
   * Retrieves the item based on its unique id.
   *
   * @param string $id
   *   The unique id of the item.
   */
  public function getItem($id) {
    // We cache the parsed JSON at $this->data.
    if (empty($this->data)) {
      $data = $this->loadJSONUrl($this->itemUrl);

      if ($data && !empty($data->dataset)) {
        // Index the array by the 'identifier' for easy retrieval.
        foreach ($data->dataset as $item) {
          $this->data[$item->identifier] = $item;
        }
      }
    }
    // Return the requested item.
    if (isset($this->data[$id])) {
      return $this->data[$id];
    }
    else {
      return NULL;
    }
  }
}

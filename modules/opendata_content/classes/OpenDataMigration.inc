<?php
/**
 * @file
 * Defines OpenDataMigration class.
 */

/**
 * Class OpenDataMigration.
 *
 * Parent class for dataset migrations.
 *
 * @package opendata_migration
 */
class OpenDataMigration extends Migration {

  /**
   * Prepare destination for this migration.
   *
   * @param array $arguments
   *   Arguments provided by migrate module.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    // Map drupal fields to source fields.
    $this->addFieldMapping('title');

    $this->destination = new MigrateDestinationNode('opendata_dataset');
  }

  /**
   * {@inheritdoc}
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Trim title. This is needed regardless of source.
    if (strlen($row->title) > 255) {
      $original_title = $row->title;
      $row->title = substr(trim($row->title), 0, 255);
      $message = t('Title was too long. @original_title was truncated to @title.', array(
        '@original_title' => $original_title,
        '@title' => $row->title,
      ));
      $this->queueMessage($message);
    }
  }

}

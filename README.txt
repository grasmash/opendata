Project Open Data
===================================================

Authorship
---------------------------------------------------
This module was intially created during a collaborative sprint held at Drupal
GovDays 2013, lead by Bryan Hirsch (bryanhirsch), Matthew Grasmick (madmatter23)
and Barrett Smith (barrett). Thanks to all of the contributors that particpated
in the sprint:

* bhosmer
* tomogden
* dbcollies
* Abe Kodger
* sascher
* brockfanning
* Barrett
* madmatter23
* BMDan

Overview
---------------------------------------------------
This module provides helpful tools for websites implementing /data pages as
described here:

  http://project-open-data.github.io/


Submodules
---------------------------------------------------

### Open Data
This module relies on the opendata_content module, and provides a JSON feed
of opendata_content nodes at opendata.json.

### Open Data Content
This module provides the opendata_dataset content type, and relies on
opendata_distribution_field, which provides a custom field type.

### Open Data View
This module provides a view to display opendata_dataset nodes at /data.

### Open Data RDF
This module adds supplemental RDF data to the view provided at /data.


Installing Open Data
---------------------------------------------------

For installation instructions, see INSTALL.txt.

Updating Open Data
---------------------------------------------------

Please see the included UPDATE.txt file.

TOD0
---------------------------------------------------

* Enforce creation of self-referencial node. I.E., dataset for /data.json page.
* Provide bundled migrate classes for importing dataset nodes.
* Provide bundled migrate class for moving data from opendata into dkan_dataset.

More Info about the Open Data Policy
---------------------------------------------------

In May of 2013, the White House issued an executive order stating that formats
on all US Government websites need be machine-readable (i.e., data are
reasonably structured to allow automated processing).

Open data structures do not discriminate against any person or group of persons
and should be made available to the widest range of users for the widest range
of purposes, often by providing the data in multiple formats for consumption. To
the extent permitted by law, these formats should be non-proprietary, publicly
available, and no restrictions should be placed upon their use.

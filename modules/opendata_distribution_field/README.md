Project Open Data Download URL Field
====================================

This module provides Drupal with  custom field
elements per "row" of the distribution object as defined by version 1.1 of the
Open Data Schema. These fields are described here:
https://project-open-data.cio.gov/v1.1/
and they should appear as an array at /data.json like this:

        "distribution": [
          {
            "@type": "dcat:Distribution",
            "description": "Vegetable data as a CSV file",
            "downloadURL": "http://www.agency.gov/vegetables/listofvegetables.csv",
            "format": "CSV",
            "mediaType": "text/csv",
            "title": "listofvegetables.csv"
          },
          {
            "@type": "dcat:Distribution",
            "conformsTo": "http://www.agency.gov/vegetables-data-standard/",
            "describedBy": "http://www.agency.gov/vegetables/schema.xsd",
            "describedByType": "text/xml",
            "description": "Vegetable data as an XML file",
            "downloadURL": "http://www.agency.gov/vegetables/listofvegetables.xml",
            "format": "XML",
            "mediaType": "text/xml",
            "title": "listofvegetables.xml"
          },
        ]


A dataset can have multiple distributions and this field allows for that.


Reference
---------
For more information see: 
  [https://project-open-data.cio.gov/v1.1/](https://project-open-data.cio.gov/v1.1/)
  

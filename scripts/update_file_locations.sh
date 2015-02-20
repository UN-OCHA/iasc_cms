#!/bin/bash

# This should fix Drupal's problem with the major change in contrib module locations.
# Run grunt shell:update_file_locations locally.
echo 'Download registry rebuild';
cd ~/
drush dl registry_rebuild -n

echo 'Move to the build directory';
cd /opt/development/iasc_cms/build/html

echo 'Update location of entity module';
sudo drush sqlq "UPDATE system SET filename = REPLACE(filename, 'sites/all/modules/contrib/entity/', 'profiles/openatrium/modules/contrib/entity/') WHERE name LIKE 'entity%';"
sudo drush sqlq "UPDATE registry SET filename = REPLACE(filename, 'sites/all/modules/contrib/entity/', 'profiles/openatrium/modules/contrib/entity/') WHERE name LIKE 'entity%';"
sudo drush sqlq "UPDATE registry_file SET filename = REPLACE(filename, 'sites/all/modules/contrib/entity/', 'profiles/openatrium/modules/contrib/entity/') where filename like '%/contrib/entity/%';"
sudo drush sqlq "TRUNCATE cache;";

echo 'Run registry rebuild';
drush rr
drush rr
drush rr

#!/bin/bash

# This should fix Drupal's problem with the major change in contrib module locations.
# Run grunt shell:update_file_locations locally.
echo 'Download registry rebuild';
cd ~/
drush dl registry_rebuild -n

echo 'Move to the build directory';
cd /opt/development/iasc_cms/build/html

echo 'Update location of entity module';
sudo drush sqlq 'UPDATE system SET filename = "profiles/openatrium/modules/contrib/entity/entity.module" where name = "entity" limit 1;'

echo 'Run registry rebuild';
drush rr
drush rr
drush rr
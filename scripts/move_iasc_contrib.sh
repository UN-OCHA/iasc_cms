#!/bin/bash

echo "Moving non-oa contrib files to sites/all/modules/contrib"
sudo -uapache mv /opt/development/iasc_cms/build/html/profiles/openatrium/modules/iasc_contrib /opt/development/iasc_cms/build/html/sites/all/modules/contrib

echo "Copy libraries from openatrium profile"
sudo -E -uapache rsync -r /opt/development/iasc_cms/build/html/profiles/openatrium/libraries/ /opt/development/iasc_cms/build/html/sites/all/libraries/
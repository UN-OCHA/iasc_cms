#!/bin/bash

DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
DOCROOT="/opt/development/iasc_cms/build/html"
DRUSH="drush -r $DOCROOT -l www.iasc.vm"

# Change to the directory under the script to make sure that fig works.
cd $DIR/..

case $(uname) in
Darwin)
  if [ ! -f $DIR/../build/html/index.php ]; then
    echo '==> Building the site in the build container.'
    docker exec -it build bash -c 'cd /code/iasc_cms; npm install; grunt' || {
      echo '===> The IASC site could not be built. Exiting.'
      exit 1
    }
  fi

  if ! fig ps | grep -q 'Up'; then
    echo '==> Starting the IASC containers in the background'
    fig up -d || {
      echo '===> The IASC containers could not be started. Exiting.'
      exit 1
    }
  fi

  # I'm not using grep -q since it can panic the docker client since it closes
  # the pipe immediately upon getting a match.
  #
  # UNIX. ¯\_(ツ)_/¯
  #
  if ! docker exec -it iasccms_php_1 bash -c "$DRUSH status" | grep Successful >/dev/null; then
    if [ -f $DIR/../iasc.sql.gz ]; then
      # @TODO: Wrap this in a better check, or port the Phase2 scripts to do this.
      docker exec -it iasccms_mysql_1 bash -c 'mysql -e"CREATE DATABASE iasc"' 2>&1 >/dev/null
      echo '==> Importing a database from iasc.sql.gz'
      gzcat $DIR/../iasc.sql.gz|mysql -uadmin -pmysql -hmysql.iasc.vm -Diasc
    else
      docker exec -it iasccms_mysql_1 bash -c 'mysql -e"CREATE DATABASE iasc"' 2>&1 >/dev/null
      echo 'You should now import a database with MySQL.'
      echo 'If you put an SQL dump called `iasc.sql.gz` in the iasc_cms folder, it will be imported automatically.'
      echo 'Otherwise, you may restore a database with a command that looks like this:'
      echo 'gzcat ~/path/to/dbdbump.sql.gz|pv|mysql -uadmin -pmysql -hmysql.iasc.vm -Diasc';
      # @TODO: Check if the DB exists at all.
      echo 0
    fi
  fi

  if docker exec -it iasccms_php_1 bash -c "$DRUSH pm-info shield --pipe" | grep -q enabled; then
    echo '==> Disabling HTTP basic auth'
    docker exec -it iasccms_php_1 bash -c "$DRUSH -y dis shield"
  else
    echo '==> Clearing caches'
    docker exec -it iasccms_php_1 bash -c "$DRUSH -y cc all"
  fi

  echo '==> Ensuring proper permissions on the files directory'
  docker exec -it iasccms_php_1 bash -c "mkdir -p $DOCROOT/sites/default/files"
  docker exec -it iasccms_php_1 bash -c "chown -R apache:apache $DOCROOT/sites/default/files"

  # @TODO: Try to make sure that there's a settings.local.inc that has proper memcache settings.
  echo '==> Printing a login link for uid 1'
  docker exec -it iasccms_php_1 bash -c "$DRUSH uli"
  ;;
Linux)
  echo "Linux builds are not yet implemented. Sorry."
  exit 1
  ;;
**)
  echo "I don't know how to build the site on your platform - sorry!"
  exit 1
  ;;
esac


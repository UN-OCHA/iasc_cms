#!/bin/sh -eu

# Do not run if there is no phpcs.
test -x bin/phpcs || (echo "You need to do some composering" && exit 1)

# Ensure the Drupal standard is available.
ln -sf $(pwd)/vendor/drupal/coder/coder_sniffer/Drupal \
  $(pwd)/vendor/squizlabs/php_codesniffer/CodeSniffer/Standards/

# Disable phpmd until we have some time to fix code.
# ./bin/phpmd src/modules text phpmd.xml
# ./bin/phpmd src/themes text phpmd.xml

# Sniff!
./bin/phpcs --extensions=info,module,install,inc,php \
            --ignore=*.pages_default.inc,*.views_default.inc,*.features.*,*.strongarm.* \
            --report=full --standard=Drupal \
            src/modules

./bin/phpcs --extensions=info,module,install,inc,php \
            --report=full --standard=Drupal \
            src/themes

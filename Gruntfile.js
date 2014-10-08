module.exports = function(grunt) {

  // Load all plugins and tasks defined by the drupal-grunt-starter package.
  require('drupal-grunt-starter/Gruntfile')(grunt);

  // Override the phpcs options so that we can have different reporting for
  // default and local dev
  grunt.config('phpcs', {
    options: {
      bin: '<%= config.phpcs.path %>',
      standard: '<%= config.phpcs.standard %>',
      extensions: 'php,install,module,inc,profile',
      ignoreExitCode: true
    },
    drupal: {
      dir: [
        '<%= config.srcPaths.drupal %>/**/*.php',
        '<%= config.srcPaths.drupal %>/**/*.module',
        '<%= config.srcPaths.drupal %>/**/*.inc',
        '<%= config.srcPaths.drupal %>/**/*.install',
        '<%= config.srcPaths.drupal %>/**/*.profile',
        '<%= config.srcPaths.drupal %>/**/*.css',
        '!<%= config.srcPaths.drupal %>/**/*.features.*inc',
        '!<%= config.srcPaths.drupal %>/sites/**',
        '!<%= config.srcPaths.drupal %>/modules/iasc_scrape/ISAC'
      ],
      options: {
        report: 'checkstyle',
        reportFile: '<%= config.buildPaths.reports %>/phpcs.xml'
      }
    },
    local: {
      dir: [
        '<%= config.srcPaths.drupal %>/**/*.php',
        '<%= config.srcPaths.drupal %>/**/*.module',
        '<%= config.srcPaths.drupal %>/**/*.inc',
        '<%= config.srcPaths.drupal %>/**/*.install',
        '<%= config.srcPaths.drupal %>/**/*.profile',
        '<%= config.srcPaths.drupal %>/**/*.css',
        '!<%= config.srcPaths.drupal %>/**/*.features.*inc',
        '!<%= config.srcPaths.drupal %>/sites/**'
      ],
      options: {
        report: 'full'
      }
    }
  });

  // The validate-local task prints the result of code sniffer to the console
  grunt.registerTask('validate-local', ['phplint:all', 'phpcs:local']);

  // Define the default task to fully build and configure the project for local.
  var tasksDefaultLocal = [
    'validate-local',
    'newer:drushmake:default',
    'symlink:profiles',
    'symlink:modules',
    'symlink:themes',
    'clean:sites',
    'symlink:sites',
    'mkdir:files',
    'copy:static'
  ];

  // Running `grunt` will just use the default tasks with reports going to the
  // xml file
  grunt.registerTask('local', tasksDefaultLocal);
};

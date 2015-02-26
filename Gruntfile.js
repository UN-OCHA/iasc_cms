module.exports = function(grunt) {

  // Load all plugins and tasks defined by the drupal-grunt-starter package.
  require('grunt-drupal-tasks')(grunt);

  // Override the phplint setup so that we can exclude the vendor file
  grunt.config('phplint', {
    all: [
      '<%= config.srcPaths.drupal %>/**/*.php',
      '<%= config.srcPaths.drupal %>/**/*.module',
      '<%= config.srcPaths.drupal %>/**/*.inc',
      '<%= config.srcPaths.drupal %>/**/*.install',
      '<%= config.srcPaths.drupal %>/**/*.profile',
      '!<%= config.srcPaths.drupal %>/**/*.features.*inc',
      '!<%= config.srcPaths.drupal %>/sites/**',
      '!<%= config.srcPaths.drupal %>/modules/iasc_scrape/IASC/vendor/**'
    ]
  });


    /**
     * Define "bin" wrapper tasks.
     */
    var files = grunt.file.expand("scripts/*.sh");
    if (files) {
        for (var f in files) {
            var name = files[f].split('/').pop().split('.').shift();
            grunt.config(['shell', name], {
                command: 'bash ' + files[f]
            });
            grunt.registerTask(name, ['shell:' + name]);
        }
    }
};

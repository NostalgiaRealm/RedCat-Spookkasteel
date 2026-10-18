// The project-local electron command reaches this file before Chromium starts.
require('./runtime.cjs').configureEnvironment();
require('../node_modules/electron/cli.js');

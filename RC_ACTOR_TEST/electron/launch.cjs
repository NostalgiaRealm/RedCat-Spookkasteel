// Configure temporary files before the Electron CLI starts Chromium.
const { labRoot, configureEnvironment } = require('./runtime.cjs');
configureEnvironment();
process.chdir(labRoot);
process.argv.splice(2, 0, labRoot);
// Standard Node resolution can reuse the parent project's Electron install.
require('electron/cli.js');

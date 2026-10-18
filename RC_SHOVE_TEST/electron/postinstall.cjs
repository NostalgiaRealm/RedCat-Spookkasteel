const fs = require('node:fs');
const path = require('node:path');
const { spawnSync } = require('node:child_process');
const { labRoot, configureEnvironment } = require('./runtime.cjs');

configureEnvironment();
const bin = path.join(labRoot, 'node_modules/.bin/electron');
fs.mkdirSync(path.dirname(bin), { recursive: true });
// npm initially creates a symlink to Electron's CLI. Unlink it first so the
// environment wrapper does not overwrite the original installed package file.
fs.rmSync(bin, { force: true });
fs.writeFileSync(bin, "#!/usr/bin/env node\nrequire('../../electron/launch.cjs');\n", { mode: 0o755 });

// Electron 44 installs its binary through this explicit installer. Its first
// check exits immediately when the bundled dist/version and path.txt match.
// A fresh npm ci downloads only when that runtime is missing, using our cache.
const installation = spawnSync(process.execPath, [path.join(labRoot, 'node_modules/electron/install.js')], {
  stdio: 'inherit', env: process.env,
});
if (installation.error) throw installation.error;
if (installation.status !== 0) process.exit(installation.status || 1);

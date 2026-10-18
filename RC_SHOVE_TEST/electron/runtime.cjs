const fs = require('node:fs');
const path = require('node:path');

// Keep all disposable lab files in the designated investigation workspace.
// This is a separate profile; the port's save files and settings are never read.
const labRoot = path.resolve(__dirname, '..');
const runtimeRoot = path.resolve(labRoot, '../temp_work/shove-investigation-2026-10-05/lab-runtime');
const runtime = Object.fromEntries(['tmp', 'cache', 'config', 'data', 'profile', 'session', 'logs', 'crashes', 'npm-cache']
  .map(name => [name, path.join(runtimeRoot, name)]));

function configureEnvironment() {
  for (const directory of Object.values(runtime)) fs.mkdirSync(directory, { recursive: true });
  Object.assign(process.env, {
    TMPDIR: runtime.tmp,
    TMP: runtime.tmp,
    TEMP: runtime.tmp,
    XDG_CACHE_HOME: runtime.cache,
    XDG_CONFIG_HOME: runtime.config,
    XDG_DATA_HOME: runtime.data,
    npm_config_cache: runtime['npm-cache'],
    ELECTRON_CACHE: path.join(runtime.cache, 'electron'),
    electron_config_cache: path.join(runtime.cache, 'electron'),
  });
  // Preserve XDG_RUNTIME_DIR: Wayland uses the existing compositor socket there.
  return runtime;
}

module.exports = { labRoot, runtimeRoot, runtime, configureEnvironment };

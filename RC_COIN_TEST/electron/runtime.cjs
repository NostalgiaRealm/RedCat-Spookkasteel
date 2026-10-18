const fs = require('node:fs');
const path = require('node:path');

const labRoot = path.resolve(__dirname, '..');
const runtimeRoot = path.resolve(labRoot, '../temp_work/coin-test-2026-10-13/runtime');
const runtime = Object.fromEntries([
  'tmp', 'cache', 'config', 'data', 'profile', 'session', 'logs', 'crashes', 'npm-cache',
].map(name => [name, path.join(runtimeRoot, name)]));

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
    ELECTRON_LOG_FILE: path.join(runtime.logs, 'electron.log'),
  });
  // Wayland needs the existing compositor socket in XDG_RUNTIME_DIR.
  return runtime;
}

module.exports = { labRoot, runtimeRoot, runtime, configureEnvironment };

#!/usr/bin/env bash
set -euo pipefail
cd -- "$(dirname -- "${BASH_SOURCE[0]}")"
# Set npm's cache before npm starts; Electron's launcher sets the other paths.
ACTOR_RUNTIME_ROOT="$(node -p 'require("./electron/runtime.cjs").runtimeRoot')"
export npm_config_cache="$ACTOR_RUNTIME_ROOT/npm-cache"
exec npm start -- --ozone-platform=wayland "$@"

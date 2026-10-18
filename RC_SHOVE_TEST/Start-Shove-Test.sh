#!/usr/bin/env bash
set -euo pipefail
cd -- "$(dirname -- "${BASH_SOURCE[0]}")"
lab_work="$(pwd)/../temp_work/shove-investigation-2026-10-05/lab-runtime"
mkdir -p "$lab_work/tmp" "$lab_work/npm-cache"
export TMPDIR="$lab_work/tmp" TMP="$lab_work/tmp" TEMP="$lab_work/tmp"
export npm_config_cache="$lab_work/npm-cache"
exec npm start -- "$@"

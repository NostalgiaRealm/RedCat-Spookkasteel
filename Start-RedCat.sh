#!/usr/bin/env sh
set -eu
SCRIPT_DIR=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
# The display backend must be selected before Electron loads the main script.
# Preserve an explicit user override (for example --ozone-platform=wayland).
has_platform=false
for argument in "$@"; do
  case "$argument" in --ozone-platform|--ozone-platform=*) has_platform=true ;; esac
done
if [ "$has_platform" = false ]; then
  set -- --ozone-platform=x11 "$@"
fi
if [ -x "$SCRIPT_DIR/dist/linux-unpacked/redcat-spookkasteel" ]; then
  exec "$SCRIPT_DIR/dist/linux-unpacked/redcat-spookkasteel" "$@"
fi
cd "$SCRIPT_DIR"
if ! command -v npm >/dev/null 2>&1; then
  printf '%s\n' 'Build not found. Install Node.js 22.12+ and run npm ci first.' >&2
  exit 1
fi
exec npm start -- "$@"

#!/usr/bin/env sh
set -eu
SCRIPT_DIR=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
# Let Chromium follow the display refresh instead of inheriting MangoHud's
# global FPS cap. Keep an explicit per-launch cap and all other HUD settings.
case "${MANGOHUD-}:${LD_PRELOAD-}" in
  1:*|*libMangoHud*)
    hud_options=$(printf '%s' "${MANGOHUD_CONFIG-}" | tr -d '[:space:]')
    case ",$hud_options," in
      *,fps_limit=*) ;;
      *) MANGOHUD_CONFIG="${MANGOHUD_CONFIG:-read_cfg},fps_limit=0"
         export MANGOHUD_CONFIG ;;
    esac
    ;;
esac
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

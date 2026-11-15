#!/bin/bash
# Inside the scope: isolated environment, then one run of refrun.py.
#
# REFWINE_CLOCK_START (seconds, default 120) starts the machine clocks that Wine reads near that
# value, in a Linux time namespace, so timeGetTime() looks like a freshly started PC instead of the
# host's uptime (the game keeps times in 32-bit floats in places; at a day of uptime a float has a
# resolution of 8 ms). The game's bytes and Wine are unchanged. REFWINE_CLOCK_START=host leaves the
# host's clock in place.
set -u
HERE="$(cd "$(dirname "$0")" && pwd)"
: "${REFWINE_CLOCK_START:=120}"
source "$HERE/env.sh"
# python-xlib is in the user's site-packages, so the real home is looked up before HOME moves.
export PYTHONPATH="${REFWINE_PYTHONPATH:-$REAL_HOME/.local/lib/python3.14/site-packages}"
export PYTHONDONTWRITEBYTECODE=1
export REFWINE_CLOCK_START
PY=(python3 "$HERE/refrun.py" "$@")
if [ "$REFWINE_CLOCK_START" = host ]; then
  exec "${PY[@]}"
fi
read -r MONO BOOT < <(python3 -c 'import time; print(int(time.clock_gettime(time.CLOCK_MONOTONIC)), int(time.clock_gettime(time.CLOCK_BOOTTIME)))')
exec unshare --user --map-current-user --time \
  --monotonic="$(( REFWINE_CLOCK_START - MONO ))" --boottime="$(( REFWINE_CLOCK_START - BOOT ))" \
  --fork --kill-child=SIGTERM "${PY[@]}"

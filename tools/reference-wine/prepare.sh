#!/bin/bash
# Creates the throwaway prefix and the private copy of the game. Runs on the host.
#   tools/reference-wine/prepare.sh
# The owner's installation (REFWINE_INSTALL) is only read.
set -eu
HERE="$(cd "$(dirname "$0")" && pwd)"
source "$HERE/env.sh"
: "${REFWINE_INSTALL:=$REAL_HOME/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel}"
[ -f "$REFWINE_INSTALL/RcHcGame.dat" ] || { echo "no RcHcGame.dat in $REFWINE_INSTALL" >&2; exit 3; }

mkdir -p "$REFWINE" "$HOME" "$XDG_RUNTIME_DIR" "$XDG_CACHE_HOME" "$XDG_CONFIG_HOME" "$XDG_DATA_HOME" "$REFWINE/logs"
chmod 700 "$XDG_RUNTIME_DIR"
touch "$HOME/.Xauthority"   # python-xlib wants the file to exist
# Two sinks, both without a route to a real device (REFWINE_SINK picks one, see env.sh):
#   null   ALSA's null device. It takes everything at once, so DirectSound runs about 3.6 times too fast.
#   paced  the same, but through the file plugin into pace.py, which reads at the played rate.
cat > "$HOME/alsa-null.conf" <<'CONF'
pcm.!default { type null }
ctl.!default { type null }
pcm.null { type null }
CONF
cat > "$HOME/alsa-paced.conf" <<CONF
pcm.!default {
  type file
  slave.pcm "refnull"
  file "| exec python3 '$HERE/pace.py' %r %c %b %f"
  format "raw"
}
pcm.refnull { type null }
pcm.null { type null }
ctl.!default { type null }
CONF

if [ -e "/tmp/.X11-unix/X${DISPLAY#:}" ] || [ -e "/tmp/.X${DISPLAY#:}-lock" ]; then
  echo "display $DISPLAY is in use, set REFWINE_DISPLAY" >&2; exit 3
fi
Xvfb "$DISPLAY" -screen 0 1024x768x24 -nolisten tcp >"$REFWINE/logs/xvfb-prepare.log" 2>&1 &
XV=$!
trap 'wineserver -k 2>/dev/null || true; kill $XV 2>/dev/null || true' EXIT
sleep 1

timeout 180 wineboot -i >"$REFWINE/logs/wineboot.log" 2>&1
timeout 60 wineserver -w || true

# Audio goes to the ALSA null device only.
timeout 60 wine reg add 'HKCU\Software\Wine\Drivers' /v Audio /t REG_SZ /d alsa /f >>"$REFWINE/logs/wineboot.log" 2>&1
timeout 60 wineserver -k || true
timeout 60 wineserver -w || true

# The game must not reach anything outside the prefix: no Z: drive, no CD drive, no printer ports.
rm -f "$WINEPREFIX/dosdevices/z:" "$WINEPREFIX/dosdevices/d::" "$WINEPREFIX"/dosdevices/lpt*

G="$WINEPREFIX/drive_c/RCSPOOK"
mkdir -p "$G"
cp -a "$REFWINE_INSTALL/." "$G/"
chmod -R u+rw "$G"
# Logs of the owner's own runs are not part of the reference.
rm -f "$G"/AdamDebug*.log "$G"/AdamError*.log "$G"/Sound.log "$G"/D3DDrv.Log "$G"/D3DCache.Log
# The shipped settings, kept so every run starts from the same files (refrun.py restores them).
mkdir -p "$REFWINE/pristine"
cp -a "$G/Settings" "$REFWINE/pristine/"
cp -a "$G/AdamWin.Ini" "$REFWINE/pristine/"
cmp "$REFWINE_INSTALL/RcHcGame.dat" "$G/RcHcGame.dat"
sha256sum "$G/RcHcGame.dat" | tee "$REFWINE/RcHcGame.sha256"
echo prepared "$WINEPREFIX"

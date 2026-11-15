# Sourced by the other scripts. The isolated environment for the reference run of the original
# RcHcGame.dat: a throwaway Wine prefix, no route to the owner's screen or sound server, nothing
# written to his home or to his own Wine prefixes.
# REFWINE is the working folder: tools/out/reference-wine (git-ignored scratch). Delete it when done.
_here="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
: "${REFWINE:=$(cd "$_here/../.." && pwd)/tools/out/reference-wine}"
export REFWINE
: "${REFWINE_DISPLAY:=:174}"
REAL_HOME="$(getent passwd "$(id -u)" | cut -d: -f6)"

case "$REFWINE" in
  ""|/|"$REAL_HOME"|"$REAL_HOME/.wine"*|"$REAL_HOME/Games"*) echo "refusing REFWINE=$REFWINE" >&2; exit 2 ;;
esac

export WINEPREFIX="$REFWINE/prefix"
export WINEARCH=win64
export WINEDEBUG=-all
export WINEDLLOVERRIDES="mscoree,mshtml=;winemenubuilder.exe=d"

# Display: only our own Xvfb. No Wayland, no route to the desktop session.
export DISPLAY="$REFWINE_DISPLAY"
unset WAYLAND_DISPLAY WAYLAND_SOCKET XAUTHORITY DBUS_SESSION_BUS_ADDRESS

# Sound: a private ALSA configuration with only a null device, and no route to the sound server.
# DirectSound still gets a working render endpoint, so every call the game makes is carried out.
# alsa-lib splits ALSA_CONFIG_PATH at spaces and colons before it expands "~", and the project path
# has a space in it, so the file is named through the (moved) home folder.
# REFWINE_SINK=paced (default) reads the stream at the played rate, null lets it run free (prepare.sh).
: "${REFWINE_SINK:=paced}"
export REFWINE_SINK
export ALSA_CONFIG_PATH="~/alsa-$REFWINE_SINK.conf"
export PULSE_SERVER="unix:$REFWINE/no-such-pulse"
export PIPEWIRE_REMOTE="$REFWINE/no-such-pipewire"
export PULSE_RUNTIME_PATH="$REFWINE/no-such-pulse-dir"

# Nothing goes to the real home: shell folders, font cache, shader cache, menu entries.
export HOME="$REFWINE/home"
export XDG_RUNTIME_DIR="$REFWINE/xdg-run"
export XDG_CACHE_HOME="$REFWINE/home/.cache"
export XDG_CONFIG_HOME="$REFWINE/home/.config"
export XDG_DATA_HOME="$REFWINE/home/.local/share"

# Software OpenGL through Xvfb's GLX.
export LIBGL_ALWAYS_SOFTWARE=1
export GALLIUM_DRIVER=llvmpipe

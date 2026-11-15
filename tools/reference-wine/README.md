# Reference runs of the original game under Wine

Starts the original `RcHcGame.dat` straight into a world in a throwaway Wine prefix, with Wine's DirectSound trace on, and turns the trace into a per-buffer timeline. Results: `evidence/reference-wine/dsound-worlds.md` and `dsound-world<N>.json`.

## What the scripts keep to

- The owner's installation (`~/Games/redcat-spookkasteel/...`, or `REFWINE_INSTALL`) is only read, once, by `prepare.sh`. `~/.wine` and his prefix are never used.
- Everything lives in `REFWINE`, default `tools/out/reference-wine` (git-ignored): the prefix (`prefix/`), the private copy of the game (`prefix/drive_c/RCSPOOK`), the shipped settings as copied (`pristine/`), a home folder for Wine (`home/`), one folder per run (`logs/<name>/`) and the WAV files (`audio/`).
- The prefix has no `Z:` drive, no CD drive and no printer ports, so the game reaches nothing outside it.
- Display: a private Xvfb on `:174` (`REFWINE_DISPLAY`), `WAYLAND_DISPLAY` unset. A run refuses to start if that display is in use.
- Sound: no device. Wine's audio driver is `alsa`, with an ALSA configuration that only has a null device, and `PULSE_SERVER` / `PIPEWIRE_REMOTE` point nowhere. With the plain null device DirectSound mixes about 3.6 times too fast, so by default (`REFWINE_SINK=paced`) the stream goes through ALSA's file plugin into `pace.py`, which reads it at the played rate and keeps it for the WAV file. `REFWINE_SINK=null` gives the plain null device.
- Clock: each run is in a Linux time namespace that starts near 120 s (`REFWINE_CLOCK_START`, or `host`), so `timeGetTime()` looks like a PC that was just switched on.
- Every start runs in its own systemd scope with `MemoryMax=4G`, under `timeout`. At the end `refrun.py` runs `wineserver -k` with `WINEPREFIX` set to the throwaway prefix and stops its own Xvfb; `run.sh` then stops the scope.

## Commands

On the host. From the distrobox, put `distrobox-host-exec` in front of the first three (`parse.py` runs anywhere).

```bash
# Once: creates the prefix, copies the game (about 15 s).
systemd-run --user --scope -q -p MemoryMax=4G -p MemorySwapMax=0 tools/reference-wine/prepare.sh

# One start: world 1, no input, 42 s after the first game frame. Output in tools/out/reference-wine/logs/world1/.
tools/reference-wine/run.sh --name world1 --world 1 --seconds 42
# The same with the Up key held from 20 s for 10 s.
tools/reference-wine/run.sh --name world1-walk --world 1 --seconds 42 --key Up --key-at 20 --key-for 10

# Everything the evidence is based on: worlds 1 to 5, the walking run, the JSON, WAV and Markdown files (about 6 minutes).
tools/reference-wine/campaign.sh

# One trace into JSON and WAV; then the summary of all of them.
python3 tools/reference-wine/parse.py parse --run tools/out/reference-wine/logs/world1 \
  --out evidence/reference-wine/dsound-world1.json --audio tools/out/reference-wine/audio/world1.wav --relative-to .
python3 tools/reference-wine/parse.py report --json evidence/reference-wine/dsound-world{1,2,3,4,5}.json \
  --walk evidence/reference-wine/dsound-world1-walk.json --tail tools/reference-wine/report-tail.md \
  --out evidence/reference-wine/dsound-worlds.md

# When done: nothing else keeps these.
rm -rf tools/out/reference-wine
```

`run.sh` options (all go to `refrun.py`): `--world 1..5`, `--difficulty 0..2` (default 1), `--game-type 0|1` (0 = adventure), `--seconds`, `--key <X keysym> --key-at <s> --key-for <s>`, `--shot <s>` (screenshot, repeatable), `--wine-debug <channels>`.

## Runs with input

`refrun.py --script` takes the same step script as the port's runner (`tools/run-headless.mjs --script`), so both can be sent along the same route whatever their frame rates:

| Step | Meaning |
|---|---|
| `wait:T` | until T seconds after the first game frame |
| `hold:Keys,for=S` | hold the keys (X keysym names joined with `+`: `Up`, `Down`, `Left`, `Right`, `Control_L`, `space`) for S seconds |
| `hold:Keys,z<V` | hold until the player's x, y or z passes V (`x>V` …), at most `max=S` seconds (15) |
| `tap:Keys` | press for 0.15 s |
| `goto:X,Z` | walk to that place: Up held, Left or Right pressed while the direction of movement (the player's velocity, `player+0x180`) is more than 6 degrees off; done within `r=30` units, at most `max=20` seconds |

The script reads the player's position and velocity from the game's memory, as the samples do, and sends keys through XTEST. `--ini "Settings\Player1.ini|Player|Skill|1"` sets extra values after the launch recipe. When each step ended, and where the player was, is kept in `run.json` (`script`).

```bash
# The five scenarios of tools/sound-scenarios.txt (shots, a potion and coins, doors, a ghost, the guards), about 7 minutes:
tools/reference-wine/scenarios.sh          # or: scenarios.sh w3
# then, anywhere: the same scripts in the port, compared with what the runs above left in evidence/reference-wine/
node tools/sound-scenarios.mjs
```

## What one run does

1. Puts the shipped `Settings\` and `AdamWin.Ini` back in the copy and applies the launch recipe of `docs/research/startup-and-loop.md` 2.6: `Game.ini [Run]` (player, level 1, sublevel = world, 1), `Player1.ini [General] GameType, DifficultyLevel`, `Computer.ini` (`AutoSelectDriver=1`, `ForceSelectWindowedMode=0`, `Minimal=0`, `Sound Allowed=1`), `Startup.INI` (every `Allowed=1`, `ResultLastRun=2`). The files stay CRLF Latin-1; only those keys change.
2. Starts Xvfb and `wine explorer /desktop=rcspook,1024x768 RcHcGame.dat -game` with `WINEDEBUG=+timestamp,+dsound,+dsound3d,+file,+msgbox,+loaddll,+fps,+alsa`.
3. Reads the game's memory twice a millisecond (`/proc/<pid>/mem`): the game state (`game+0x98`), the window's active flag and the player position. The first sample with state 3 (GS_GAME) is time zero. It also samples Wine's tick counter, which is what the trace timestamps count.
4. Optionally holds one key through XTEST, takes screenshots, and after `--seconds` stops everything it started.
5. Leaves in `logs/<name>/`: `wine.log` (the trace, 120 to 330 MB; `campaign.sh` gzips it after parsing), `run.json`, the game's own `AdamDebugNN.log`, `AdamErrorNN.log`, `Sound.log`, `D3DDrv.Log`, the settings as the game left them, screenshots, and `audio/stream-*.raw` with its time marks.

## The files

| File | Purpose |
|---|---|
| `env.sh` | The isolated environment. Sourced inside the scope, since `systemd-run` needs the real `XDG_RUNTIME_DIR` |
| `prepare.sh` | Creates the prefix, the ALSA configurations and the private copy |
| `run.sh`, `inner.sh` | One start: scope and timeout, then the environment and the time namespace |
| `refrun.py` | Settings, Xvfb, the game, the memory samples, keys, cleanup |
| `pace.py` | The clock of the absent sound device; keeps the stream |
| `parse.py` | `parse`: trace to JSON and WAV. `report`: the JSON files to `dsound-worlds.md` |
| `report-tail.md` | The hand-written last section of `dsound-worlds.md` |
| `campaign.sh` | All runs and all outputs |

## Things that cost time

- `ALSA_CONFIG_PATH` is split at spaces, and this project's path has one. The configuration is therefore named `~/alsa-paced.conf` and found through the moved `HOME`.
- python-xlib (for the key events) is taken from the user's site-packages: `REFWINE_PYTHONPATH`, default `~/.local/lib/python3.14/site-packages`.
- A run that is cut off leaves the copy's `Startup.INI` in the "crashed" state; the next run restores the settings first, so that does not carry over.

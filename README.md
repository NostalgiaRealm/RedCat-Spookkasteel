# RedCat Spookkasteel — portable reconstruction

A runnable, independent reconstruction in `/home/rick/RCSPOOK_NEW`, using the assets from your installed copy of the 2000 game. It does not launch the old Windows executables, Direct3D DLLs, or Wine. The renderer is Three.js/WebGL 2; the desktop application is Electron.

**Status: playable development version 0.9.1, with the original Davi-Script logic running.** All five original worlds load, and their compiled puzzle, cutscene and boss-event scripts execute in the new runtime. Original motion timelines, Dutch dialogue and script state saving are integrated. Patrol routes, Dungeon Max’s turret cycle, Jester Max’s teleport phases, the Witch’s flight cycle, mushroom trails and damaging water are implemented. Exact native navigation, some projectile effects and special abilities remain unfinished; the whole campaign has not yet been verified end to end.

**Unpackaged source updates (0.9.1):** moving-door collision, visible rolling balls, the corrected castle/cave Max variants, cave gate damage and portal effects have been updated since the prepared 0.2.5 packages. No new packages have been generated. Use the [build guide](docs/building.md) to run the updated source or make your own packages when ready.

## Run the prepared builds

- Linux: double-click `Start-RedCat.sh`, or run `./Start-RedCat.sh` from this directory.
- Windows x64: copy the entire `dist/win-unpacked` directory to Windows, then run `RedCat Spookkasteel.exe` inside it. Do not copy only the EXE.
- Linux x64 portable directory: copy the entire `dist/linux-unpacked` directory and run `./redcat-spookkasteel --ozone-platform=x11` inside it.

The prepared directories include the imported data and runtime. They do not need Node, Python, the mounted CD, or the Wine installation at runtime. A GPU/driver with WebGL 2 support is required. The Linux launcher selects X11/XWayland before Electron starts and uses OpenGL by default. Advanced overrides remain available, for example `REDCAT_GPU=vulkan ./Start-RedCat.sh` or `./Start-RedCat.sh --ozone-platform=wayland`. Windows builds are unsigned.

The original installation, ISO, CD files, and original saves are unchanged. This reconstruction has its own settings and save format.

## What works

- Original five Genesis3D BSP v15 maps, embedded textures, texture coordinates, exact baked lightmap atlases and original object placements.
- The original [UFO impact dirt patch and surface decals](docs/ufo-impact-decal-native.md), including forest lily pads, use their original artwork, alpha masks and placements.
- All 165 actor files imported, including 16 original RedCat animations; runtime skeletal animation for RedCat and nearby animated objects.
- Dutch intro and outro video converted to modern codecs, original music and pickup/jump audio.
- Original per-file sound levels and distance attenuation, including the quieter forest ambience/UFO. All repeating cave ambience—including water, wind, lava, torches and machinery—uses a deliberately [shorter hearing range](docs/cave-ambience-range.md). Volume changes retain script adjustments, and saved games restore ambient loops. See `docs/audio.md` for verification and remaining audio differences.
- Correct player shooting, impact, jump, hurt/death sounds and original regular-enemy voice sets. Enemy movement, attack, hurt and death select original animation clips; red spiders fire colliding projectiles with original sprites. See `docs/enemy-gameplay.md`.
- RedCat's original shooting motion timing, recharge, pellet acceleration, animated normal/power/super-shot artwork and right-hand release position. Impact sounds and damage occur when a pellet reaches its target.
- Original patrol points and links, view/sense ranges, remembered positions, salvo movement, and saved enemy random state. Bosses select their own original projectile classes; Brutus throws the original mushroom sprites.
- Original translucent forest water and castle moat render and cause continuous contact damage. Exact BSP liquid volumes keep nearby banks and bridges safe. Mushroom trails use original artwork, fade and saved collision state.
- Original flames, coronas, dynamic lights and save-point beam sequences render across the five levels. Save beacons follow their authored trigger and keep their activation state through saves.
- Decorative actors honor their original player/shot/visibility collision flags, including the graveyard gargoyle pedestals. The graveyard's paired doors open after both buttons complete their original scripts. Green bats pursue into contact instead of stopping to attack at a distance.
- Dungeon Max has his original machine assembly and firing/rise/look/lower cycle. Jester Max disappears and reappears; the Witch takes off and flies along authored routes. Boss phase clocks survive saves and freezes.
- Brutus is visible before his introduction; defeat ends boss music and raises a collectible mirror. The four exit mirrors follow their authored routes; the tower's final mirror stays in that level. WhizKitty's castle scene uses the inside cutscene endpoint.
- The tower's five mirror stands use their native upright orientation and placement motions. Its inactive combat Witch stays hidden during the window introduction. See [tower mirror and Witch notes](docs/witch-mirrors-native.md).
- Original HUD artwork and layout for health, lives, potions, score and targeted-enemy health. Nearby visible enemies receive the original animated target ring; attacking locks the view and aims pellets at the target.
- Hold E for two seconds during scripted dialogue to fill the “Overslaan” circle and skip while preserving script outcomes.
- Native facing-angle/rotation conversion, normal jump/descent clip selection, and Fleurifee's original animated light artwork.
- Castle portraits use the original missing-INI rotation default and stand upright on their authored walls. See [portrait placement notes](docs/castle-portraits-native.md).
- Ghost enemies use their original translucent texture, alpha mask and green/yellow/red tints. See [ghost appearance notes](docs/ghost-transparency-native.md).
- Defeated enemies finish their death animation, fade over the native five seconds, and emit the original purple smoke. Fade and smoke progress survive saves; knight fragments no longer replay their breakup. See [enemy death effects](docs/enemy-death-effects-native.md).
- Ceiling-spider web descents and dormant skeleton wake-up, bat flight separation, and combat facing updates. Cave fans/spring boxes use original level forces; the [vertical recovery fan](docs/vertical-fan-native.md) uses native continuous launch refresh and gravity integration to return RedCat to the platform. Touch tiles/buttons, secret cues and destructible explosions follow their authored data.
- Third-person and first-person cameras, mouse look, walking, jumping, step climbing and sliding against original BSP collision geometry.
- A selectable render resolution: automatic, 720p, 1080p, 1440p, 4K, 2560×1080, 3440×1440 and classic 1024×768.
- Correct camera aspect ratios with constant vertical field of view. Mismatched window/render aspect ratios are letterboxed instead of stretched; the original 4:3 videos also retain their aspect ratio.
- Desktop fullscreen and windowed modes, saved graphics/audio preferences, pause, manual saves, quick saves and [automatic saves every minute of active play](docs/autosave.md). Starting a new adventure warns before replacing an existing save.
- Earned chapter access with the original chained/unlocked menu artwork; existing saves retain their current chapter. See [campaign menu](docs/campaign-menu-native.md).
- Settings difficulty choices **Makkelijk / Normaal / Moeilijk** select the original enemy, boss and projectile tables for new/restarted levels. Saves retain their encounter difficulty; older saves remain Normal. See [native difficulty](docs/difficulty-native.md).
- Settings → Cheats can immediately unlock all five levels, fill the original inventory limits (5 mirror pieces, 100 potions), add 9000 points, or enable free flight through geometry. Level unlocks are saved immediately; rewards and flight state survive saves.
- Original compiled Davi-Script: 5,134 instructions, 444 event handlers, puzzle conditions, boss-event callbacks and persistent globals.
- 437 original brush motions with synchronized rendering/collision, moving floors, scripted cameras, Dutch voices/subtitles and save restoration.
- Cave rolling stones retain their original repeating, staggered paths after loading saves. Already-stalled old saves recover on leaving and re-entering the section. See [rolling-stone save repair](docs/rolling-stones-native.md).
- Reconstructed pickups, health, scoring, basic attacks/enemies, named door/button actions, trigger counters and checkpoints. See `docs/gameplay-reconstruction.md` for fidelity boundaries.

Source-only fixes from 22 September 2026 are documented in [docs/source-fixes-2026-09-22.md](docs/source-fixes-2026-09-22.md). Existing packages have not been regenerated.

The next audio, shootable-object targeting, camera and presentation fixes are
tracked in [docs/source-followup-2026-09-22.md](docs/source-followup-2026-09-22.md).

The latest [graveyard and Fleurifee corrections](docs/graveyard-and-fairy-corrections.md)
restore cave-door artwork, hide upper graveyard rooms behind their original sky
boundaries, and fix Fleurifee's sounds and cutscene-skip cleanup. These are also
source-only changes.

The [target eligibility correction](docs/target-eligibility-native.md) excludes
decorative fixtures and restores the original longer range for shootable
buttons, including the castle drawbridge control.

[Knight combat music](docs/knight-attack-music.md) now starts when RedCat attacks
from shooting range. Actual hits refresh enemy awareness and remembered player
position while preserving the original perception ranges.

The [castle library buttons](docs/bookcase-touch.md) now complete the original
bookcase rotation when touched. Automatic closing waits until opening finishes,
and E no longer bypasses the buttons by operating the bookcase directly.

[Graveyard zombie activation](docs/zombie-activation-native.md) now keeps
inactive zombies hidden until the original grave or button action reveals them.

The [graveyard painting puzzle](docs/painting-spider-native.md) uses the original
strip loop callbacks to activate its three ceiling spiders and open the entryway.

## Controls

| Control | Action |
| --- | --- |
| W / S, Up / Down | Forward / backward |
| A / D | Strafe |
| Left / Right | Turn |
| Mouse | Look after clicking the game |
| Space | Jump |
| Shift | Walk slowly |
| Left click / Ctrl | Attack |
| E | Use a nearby door/button; hold 2 seconds during dialogue to skip |
| V | First/third-person camera |
| Escape / P | Pause |
| F5 / F9 | Save / load |

In **Instellingen → Cheats**, **Alle levels vrijspelen** immediately unlocks all
five chapters and saves access without completing or changing the active level.
It also works from the main menu before starting an adventure.

Enable **Vrij vliegen (no-clip)** to fly in your
viewing direction with WASD. Space rises and Shift descends. Disabling it inside
a wall or outside the level returns RedCat to a verified safe position. The
inventory cheat adds 9000 points each time, up to the original score limit;
collecting the actual exit mirror still advances the chapter.
The native pickup routine caps potions at 100; see
[original inventory evidence](docs/inventory-limits-native.md).

## Develop or rebuild

See [the build guide](docs/building.md) for Linux and Windows prerequisites, asset import, source testing, portable packaging and troubleshooting. Install Node.js 22.12+ and use the pinned dependency versions:

```sh
npm ci
npm start
```

On Linux, use `npm start -- --ozone-platform=x11`. `Start-RedCat.sh` prefers an existing packaged build, so use `npm start` to test source changes before rebuilding.

For the browser frontend, run `npm run serve` and open `http://127.0.0.1:4173`. It works offline once dependencies/data are present. Do not open `index.html` directly with a `file:` URL.

To host version 0.9.1 at **https://games.nostalgiarealm.com/redcatspookkasteel/**,
follow the [Nginx hosting guide](docs/nginx-hosting.md) and its
[location configuration](docs/nginx-redcatspookkasteel.conf). The browser release
uses static source/assets; uploading it does not require an Electron build.

```sh
npm test
python3 -m unittest discover -s tests -p 'test_*.py'
npm run test:smoke
npm run test:scripts
npm run test:audio
npm run test:gameplay-audio
npm run test:enemies
npm run test:bosses
npm run test:boss-phases
npm run test:environment
npm run test:graveyard
npm run test:bats
npm run test:effects
npm run test:cheats
npm run test:doors
npm run test:actor-placement
npm run test:portals
npm run test:desktop
npm run build:linux
npm run build:windows
```

Browser tests use Google Chrome at `/usr/bin/google-chrome`; set `CHROME_PATH` for another installed Chromium executable. The native desktop test needs a running Linux graphical session. Both test types use separate temporary profiles and do not alter normal game saves.

The binary directories are generated by electron-builder. Rebuilding Linux and Windows does not compile or run the legacy game. The Windows directory can be generated on Linux; testing on an actual Windows machine remains a separate step.

## Reimport your game data

Python 3 and Pillow are required for actors/menu images. FFmpeg is required only for converting videos. The level importer uses Python's standard library.

```sh
python3 -m pip install Pillow
python3 tools/import_assets.py \
  --installation '/path/to/RedCat Spookkasteel' \
  --cd '/path/to/mounted/RedCat' \
  --album-dir '/path/to/cover-scans'
```

On Windows, run the same command using Windows paths and put it on one line. `--album-dir` is optional; `--skip-media` avoids video conversion. Individual import tools support `--help`. Audio filenames and actor settings are resolved case-insensitively during import, matching the original Windows behavior.

Imported game assets are kept in `assets/` and `data/` and excluded from source control. They belong to the original game's rights holders. The output is prepared locally from your supplied copy; no game assets have been published or downloaded from third parties.

## Portability

The Davi-Script VM, gameplay, animation, collision and rendering code contains no Windows APIs and no Node dependencies. `electron/` contains the desktop-only window/quit bridge. Browser input is translated into frame actions before reaching movement/gameplay.

Apple Silicon macOS can use the same frontend in an Electron arm64 build. It still requires a macOS build/signing/test pass; there is no tested Mac build in this delivery. Android needs an Android WebView shell, touch/controller input, lifecycle/audio handling and device performance testing. Electron does not run on Android. See `docs/portability.md` for the concrete remaining work.

## Format references

The importers were written against your files and the [Genesis3D reference source](https://github.com/RealityFactory/Genesis3D). The menu index layout was independently checked against [Davitools](https://github.com/Gymnasiast/Davitools/blob/master/src/RCS/EntryTable.php). Davitools is not a runtime dependency. Engine/format investigations and output schemas are documented in `docs/asset-formats.md`, `docs/menu-media.md`, `docs/davi-format.md`, `docs/davi-vm-opcodes.md` and `docs/motions.md`. Current fidelity boundaries and verification are in `docs/gameplay-reconstruction.md`.

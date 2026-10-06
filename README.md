# RedCat Spookkasteel — cross-platform reconstruction

A modern reconstruction of **RedCat Spookkasteel**, Davilex's 2000 Windows game. Explore five haunted worlds as RedCat, solve puzzles, collect potions and mirror pieces, and face the original enemies and bosses.

The project brings the original levels, artwork, animation, Dutch dialogue and game scripts to **Linux, Windows and web browsers**, with widescreen resolutions, modern controls and improved saving. It uses a new JavaScript game engine built with **Three.js/WebGL 2**, packaged for desktop with **Electron**.

**Status:** all five levels and their original scripts are playable. Development focuses on matching the original behavior, fixing regressions and keeping performance practical. Some details still differ; see [current status and remaining work](docs/native-parity-audit.md). Apple Silicon macOS still needs hardware validation. An initial Android wrapper is implemented and compiles, but device validation remains; mobile browser touch controls already work.

[Run the game](#run-the-game) · [Work completed](#work-completed) · [Controls](#controls) · [Build guide](docs/building.md) · [Technical documentation](#technical-documentation)

## How this port works

The original game used Genesis3D and Direct3D. This project replaces the engine code that draws the world, moves characters, handles collisions and plays effects. It runs independently of the old Windows executables, Direct3D DLLs and Wine.

Import tools read the original game files and convert their maps, models, textures, sounds and animation into formats the new engine can use. The original **Davi-Script** programs—the instructions controlling puzzles, dialogue, cutscenes and level events—run through a small interpreter written for this project. Other behavior, such as enemy movement and projectile timing, is reconstructed from the original settings, assets and executable research.

This preserves the original content while allowing a different renderer, operating system and input method. In the technical notes, **native behavior** means behavior of the original Windows game; it does not mean that this project runs the original engine. Recovered behavior and deliberate improvements are documented separately.

## Technologies

| Part | Technology and purpose |
| --- | --- |
| Game logic | JavaScript ES modules and typed arrays for gameplay, the Davi-Script interpreter, collision, animation and save state. |
| Graphics | Three.js and WebGL 2 for 3D rendering, custom lighting shaders, animated models, particles and graphics-resource streaming. |
| Desktop application | Electron supplies the desktop window, Chromium renderer and operating-system display controls. Electron-builder creates Linux and Windows portable directories. |
| Menus and input | HTML/CSS, keyboard and pointer events, touch overlays and the browser Gamepad API. |
| Sound and movies | Web Audio and HTML media for positional sound, dialogue, looping music and converted intro/outro videos. |
| Saving | Browser localStorage for the latest save, settings and campaign progress; IndexedDB for recovery history. |
| Asset conversion | Python 3 importers, Pillow for image conversion, and FFmpeg for movie conversion. |
| Development and checks | Node.js/npm, Node and Python tests, and Playwright/Chromium scene checks. Exact dependency versions are pinned in [package.json](package.json) and [package-lock.json](package-lock.json). |

The shared game code does not depend on Windows APIs. The desktop bridge is isolated in `electron/`, so the browser and desktop versions use the same gameplay implementation.

## Run the game

### From source

Install **Node.js 22.12 or newer**, including npm. Open a terminal in the downloaded or cloned project directory. You need the complete `assets/` and `data/` directories as well as the source; see [importing game data](#importing-game-data) if they are absent.

```sh
npm ci
npm start
```

On Linux, the recommended launch uses X11/XWayland:

```sh
npm start -- --ozone-platform=x11
```

Wayland is also available with `npm start -- --ozone-platform=wayland` when supported by your desktop and graphics driver. Running the source does not generate a package.

### In a browser

After `npm ci`, start the local web server:

```sh
npm run serve
```

Open **http://127.0.0.1:4173**. Use the server rather than opening `index.html` directly. A WebGL 2-capable browser and graphics driver are required. Once dependencies and game data are present, local play does not need an internet connection.

Browser saves belong to that website's address and browser profile. They are separate from desktop saves. This project uses its own save format; importing original Windows-game saves is not implemented.

### From a prepared desktop package

If you have a prepared package, it includes Electron and the imported resources; Node.js, Python, the CD and Wine are not needed to play.

| Platform | Launch |
| --- | --- |
| Linux x64 | From the project folder, run `./Start-RedCat.sh`. For a standalone copy of `dist/linux-unpacked/`, run `./redcat-spookkasteel --ozone-platform=x11` inside it. Preserve executable permissions when copying. |
| Windows x64 | Run `Start-RedCat.bat` from the project folder, or open `RedCat Spookkasteel.exe` inside `dist/win-unpacked/`. Copy the **whole directory**, not just the EXE. Current Windows packages are unsigned. |

**The launcher scripts prefer an existing package in `dist/`.** That package may be older than the source. Use `npm start` to try source changes; consult the [build guide](docs/building.md) to regenerate packages.

## Work completed

### Original worlds, scripts and puzzles

All five worlds are imported: **Het Bos**, **Het Kasteel**, **Het Kerkhof**, **De Grotten** and **De Kasteeltoren**. The world importer reads Genesis3D BSP v15 maps—the original format containing level geometry and collision data—and preserves textures, baked lighting and object placements.

- The Davi-Script interpreter executes **5,134 imported instructions and 444 event handlers**, including puzzle conditions, enemy activation, skill rewards and persistent script variables.
- **437 original model motions** drive doors, moving platforms, rotating bookcases, rolling obstacles, camera sequences and their timed callbacks. Rendering and collision follow the same moving objects.
- Touch-activated buttons and doors, shootable controls, secrets, exploding props, fans, spring boxes and damaging water follow their authored rules. Level-ending mirrors, boss handoffs and the final tower mirror sequence are connected.
- Chapter unlocking, difficulty settings, end-of-level scoreboards and replay tutorial skipping are implemented. Replaying a chapter uses the existing menu and skips the original applicable tutorials while preserving required rewards and story events.

See [gameplay reconstruction](docs/gameplay-reconstruction.md), [motion playback](docs/motions.md), [campaign progression](docs/campaign-menu-native.md) and [replay behavior](docs/replayed-level-intros-native.md).

### Characters, combat and animation

All **165 original actor files** are imported. Here, an *actor* can be a character or a modeled world object. RedCat has **16 original animation clips**, including movement, jumping, shooting, being hurt, death and respawn.

- Movement, aiming, attack timing and projectile release use recovered original rules. Shots originate at animated attachment points, including RedCat's hand and Max's turret barrels; impacts use the original artwork and sound.
- Enemies use authored waypoint networks, perception ranges, remembered targets and attack sequences. Recovery work covers knight strikes, gargoyle flame salvos, zombie grave emergence, spiders descending on webs, dormant skeletons and bat steering.
- Brutus, Jester Max, Dungeon Max and the Witch have their own phase controllers, projectiles and defeat sequences. Defeated enemies fade with the original purple smoke; their visual state can continue during dialogue.
- **SuperSkippie** adds a timed second jump, and **BIG BENG** enables charged shots. Earned abilities persist across chapter progression and replay; starting a new adventure resets them.
- Original HUD artwork shows health, lives, potions and score, with a target ring and enemy health where applicable. Pickup effects and floating score rewards are restored.

See [enemy behavior](docs/enemy-gameplay.md), [waypoint movement](docs/enemy-waypoint-movement.md), [boss phases](docs/boss-phases-native.md), [projectile origins](docs/enemy-projectile-origins-native.md), [player abilities](docs/player-abilities-native.md) and [pickup effects](docs/pickup-score-native.md).

### Lighting, effects and audio

Work includes original world and character lighting, RedCat's ground shadow and subtle nearby light, authored dynamic-light obstruction, translucent water and ghosts, and corrected model placement. Examples include wall-mounted castle portraits, the UFO's dirt patch, readable corner trees and moving hand torches.

Fleurifee's movement and particles, portal sequences, flames, smoke, explosions, debris, save-point beams and animated projectiles use imported artwork and recovered timing. New saves preserve Fleurifee's full effect state. Some effects retain documented simulation differences.

Original Dutch voices, movies, footsteps, weapon sounds, enemy voices, door sounds and combat music are connected. Dialogue plays through a queue, audio pauses and resumes with the game, and level music loops. Positional effects use directional stereo and obstruction by world geometry. Selected ambience ranges and volumes are intentionally adjusted for clarity.

See [actor lighting](docs/actor-lighting-native.md), [world-light shadows](docs/world-light-shadows-native.md), [world effects](docs/world-effects-native.md), [smoke/flame emitters](docs/spout-effects-native.md), [fairy saves](docs/fairy-save-restoration.md) and [audio](docs/audio.md).

### Modern controls, saving and performance

- Widescreen and selectable resolutions include automatic sizing, 720p, 1080p, 1440p, 4K, ultrawide formats and classic 1024×768. Camera proportions are preserved; original movies retain their 4:3 framing.
- Keyboard/mouse, standard-mapped controllers and mobile touch overlays share gameplay actions. Menus and the level scoreboard adapt to the window size, including portrait displays.
- Manual saves and autosaves every minute of active play are supplemented by recovery points from roughly **2, 5 and 10 minutes ago**. When a save exists, **Verder spelen** (Continue) is the main action; **Start opnieuw** (Start over) asks before replacing the adventure.
- A two-second hold skips dialogue while retaining its script outcomes. Settings also include difficulty, audio, camera, display, touch preferences and cheats.
- World and actor graphics stream in sections according to camera visibility, with nearby resources prepared ahead of time. Large visible areas remain complete. Collision, scripts and cached CPU data stay available; this does not unload every part of the level from system memory.
- Navigation searches have bounded work budgets, and rendering caches reduce repeated uploads and updates. These changes address graveyard pursuit hitches and pauses when turning or revisiting an area; they do not guarantee a particular frame rate on every device.

See [autosaves](docs/autosave.md), [world streaming](docs/world-streaming.md), [navigation performance](docs/graveyard-performance-regression.md), [movement recovery](docs/movement-recovery.md) and [torch enhancements](docs/torch-flames.md).

## Intentional changes from the original game

The port retains several deliberate improvements and adaptations:

- One-minute autosaves, recent recovery saves, overwrite warnings and optional cheats with invulnerable no-clip.
- Stuck-character recovery, maze reset after death, corrected BIG BENG rewards and damageable Max turret parts.
- Two-second cutscene skipping, protected dialogue and automatic tutorial skipping on chapter replay.
- Adjusted ambience and fairy hearing, quieter Tower fire, selected door sound fallbacks and uninterrupted audio playback.
- Lit moving hand torches, reliable floor-light sampling, readable distant projectiles and camera protection near walls.
- Widescreen, touch/controller controls, responsive menus/scoreboards and bounded rendering/navigation work.

See [intentional fixes and original-game findings](docs/intentional-fixes-and-findings.md) for the full catalog, current settings, reasons and evidence—including the unused power-move finding. It distinguishes requested changes from original-content corrections and technical fidelity limits.

## Controls

The interface and original dialogue are in Dutch. **Instellingen** means Settings, **Besturing** means Controls, **Over** means About, and **Overslaan** means Skip.

| Keyboard / mouse | Action |
| --- | --- |
| W / S or Up / Down | Move forward / backward |
| A / D | Strafe |
| Left / Right | Turn |
| Mouse | Look after clicking the game |
| Space | Jump |
| Shift | Walk slowly |
| Left click / Ctrl | Shoot; hold to charge once BIG BENG is earned |
| E | Use; hold for two seconds during dialogue to skip |
| V | Switch first/third-person camera |
| Escape / P | Pause |
| F5 / F9 | Save / load |

Doors and buttons authored for contact activate when RedCat reaches them. Fixed scripted cameras keep control until their timer expires or the script changes the view.

**Controller:** left/right sticks move/look; A / × jumps; RT / R2 or RB / R1 shoots; X / □ uses or skips when held for two seconds; LB / L1 walks; Y / △ changes camera; Start / Options pauses. A / × confirms and B / ○ returns in menus. See [controller support](docs/controller-support.md) for mappings and browser/device requirements.

**Touch:** mobile browsers automatically enable the overlay. Change **Instellingen → Aanraakbediening** to automatic, on or off. Move with the left stick, swipe the right side to look, and use **Spring** (Jump), **Schieten** (Shoot) and **Overslaan** (Skip). **Menu** provides pause, saving, loading and settings. See [touch controls](docs/touch-controls.md).

**Cheats:** Settings → Cheats can unlock chapters, fill inventory to 5 mirror pieces and 100 potions, add 9000 points, or enable **Vrij vliegen (no-clip)**. In no-clip, RedCat is invulnerable and can fly through geometry; Space rises and Shift descends. Exiting inside an obstacle attempts to return him to a safe position. Inventory cheats do not complete levels: collect the actual exit mirror to advance.

## Development and packaging

The [build guide](docs/building.md) covers prerequisites, Linux/Windows instructions, imports, troubleshooting and portable packaging. Dependencies are locked; use `npm ci` rather than upgrading them as part of ordinary setup.

### Project layout

| Path | Contents |
| --- | --- |
| `src/` | Game systems, renderer, UI, audio, input and portable script interpreter. |
| `electron/` | Desktop application and display/quit bridge. |
| `assets/` | Imported artwork, actors, sounds, voices and movies. |
| `data/` | Imported levels, scripts and associated structured game data. |
| `tools/` | Asset importers, local web server and packaging helper. |
| `tests/` | Unit, importer, browser-scene and desktop checks. |
| `docs/` | Build/hosting guides, implementation notes and original-game research. |
| `temp_work/` | Retained investigation files, disassembly, screenshots and diagnostics; formerly `current_work/`. |
| `dist/` | Generated desktop packages; these may lag behind source changes. |

### Focused checks

Run tests for the system you changed. For example, a change to motion playback can be checked with:

```sh
node --test tests/motions.test.mjs
```

Feature documents list the relevant unit and scene checks. `npm test` runs the broader JavaScript unit suite; importer and release validation are described in the [build guide](docs/building.md). Browser checks use Chromium/Playwright; many accept `CHROME_PATH` for an installed browser. Desktop presentation checks require a graphical session.

Keep new temporary profiles, research and diagnostic output in a named `temp_work/` subfolder, and retain it for comparison. Use isolated profiles rather than the player's normal saves. Historical research notes may still refer to its former name, `current_work/`.

### Creating desktop packages

Packaging bundles this implementation and its resources with Electron; it does not compile the original Genesis3D game. The configured outputs are Linux x64 and Windows x64 portable directories.

The packaging helper requires **`REDCAT_PACKAGE_VERSION`** containing three dot-separated integers. This is generated-package metadata, separate from the game's About display. Follow the [packaging instructions](docs/building.md#5-generate-portable-packages-when-ready) when running `npm run build:linux` or `npm run build:windows`. A Windows package can be generated on Linux, but that does not replace testing it on Windows.

### Importing game data

Skip importing if `assets/` and `data/` are already complete. Both directories are included in this checkout's Git tracking and are needed to run and package the game. Their original content belongs to the original game's rights holders.

To regenerate them, use your original installation and mounted or extracted CD/ISO. Python 3 and Pillow handle the data/image imports; FFmpeg converts the movies. The [import guide](docs/building.md#3-import-assets-if-needed) includes virtual-environment setup for Linux and Windows. Once that environment is active and Pillow/FFmpeg are installed, the main command is:

```sh
python tools/import_assets.py \
  --installation '/path/to/RedCat Spookkasteel' \
  --cd '/path/to/mounted/RedCat' \
  --album-dir '/path/to/cover-scans'
```

`--album-dir` is optional; `--skip-media` omits movie conversion. Importing regenerates project assets and generated settings files, so preserve any local edits before reimporting. The original installation, CD files and saves are read without modification. The project includes its own IMG archive reader; Davitools is not a runtime dependency.

### Hosting the browser version

The browser game is served as static files and does not require an Electron package or a game server. The [Nginx hosting guide](docs/nginx-hosting.md) includes the files to upload, HTTPS setup, media handling and an example for **games.nostalgiarealm.com/redcatspookkasteel/**. Its [example configuration](docs/nginx-redcatspookkasteel.conf) supports hosting beneath a subdirectory.

## Current limits and future platforms

Recorded manual runs of the older **0.9.3 build on 4 September 2026** completed the campaign. Later source changes have focused regression checks, but a full playthrough of the current source and fresh platform validation remain outstanding. Implemented systems can still have bugs or differ from the original in fine details.

Known differences include camera/collision behavior, animation blending, knight-armour breakup physics, some particle integration and random sequences, and bounded lighting/query budgets. Original RCR save import is absent. The [implementation audit](docs/native-parity-audit.md) distinguishes these from features already completed; historical research notes should not be read as current task lists.

**Apple Silicon macOS** needs arm64 packaging and hardware validation, with signing/notarization for distribution. **Packaged Android** has an initial Kotlin/WebView shell, offline asset preparation and lifecycle/audio integration targeting API 36 with minimum API 29. Compilation and focused desktop/browser compatibility checks pass; Android device testing, signing and release validation remain. Electron does not run on Android. See [Android setup and remaining work](ANDROID.md). See [platform architecture](docs/portability.md).

## Technical documentation

| Topic | Start here |
| --- | --- |
| What is implemented and what remains | [Native implementation audit](docs/native-parity-audit.md), [gameplay reconstruction](docs/gameplay-reconstruction.md) |
| Deliberate differences and research findings | [Intentional fixes and original-game findings](docs/intentional-fixes-and-findings.md) |
| Original file formats | [BSP world data](docs/asset-formats.md), [actor models](docs/actors.md), [menu/media archives](docs/menu-media.md) |
| Script execution | [Davi-Script format](docs/davi-format.md), [VM opcodes](docs/davi-vm-opcodes.md), [motion timelines](docs/motions.md) |
| Rendering and effects | [Actor lighting](docs/actor-lighting-native.md), [world-light falloff](docs/world-light-falloff-research.md), [portal effects](docs/portal-native-recovery.md), [destruction debris](docs/debris-native-recovery.md) |
| Performance work | [World streaming](docs/world-streaming.md), [enemy navigation](docs/enemy-waypoint-movement.md), [refresh-rate investigation](docs/native-refresh-performance.md) |
| Setup and deployment | [Building](docs/building.md), [Nginx hosting](docs/nginx-hosting.md), [Android setup and validation](ANDROID.md), [future platforms](docs/portability.md) |

The format research used the [Genesis3D reference source](https://github.com/RealityFactory/Genesis3D), and menu archive layout was checked against [Davitools](https://github.com/Gymnasiast/Davitools/blob/master/src/RCS/EntryTable.php). The repository's importers and runtime are independent implementations. Research notes record original-file evidence, implementation decisions and focused verification so later work can be checked against the same findings.

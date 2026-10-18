# RC Shove Test

A standalone scene for trying a power-move with original **RedCat
Spookkasteel** artwork and comparing it with the recovered castle puzzle.
It contains the three original crate-model groups, their original touch
button, and the original animated RedCat model in a small neutral room.

The default mode is the clearly labelled **experimental power-move test**:
**hold Q and walk into crate group `crates03` to push it**. Ordinary walking
does not push it. Walls limit the experiment. This is new lab behavior,
requested so the power-move can actually be tried; it is not a recovered
action from the original game.

Use the mode selector to switch to the **original button puzzle**, where the
three groups move through their authored paths after touching the button.

## Run

The required dependencies and Linux Electron runtime are already copied into
this folder. No installation is needed to run the current copy:

```bash
cd '/home/rick/Documents/Rebuilds/RedCat Spookkasteel/RCSPOOK_NEW/RC_SHOVE_TEST'
npm start -- --ozone-platform=wayland
```

Alternatively, run `./Start-Shove-Test.sh --ozone-platform=wayland` from this
folder. The launcher passes your Ozone argument through unchanged. On Linux,
ANGLE defaults to OpenGL unless you supply a different `--use-angle` value.

Keep `node_modules` with the project: it contains this lab's independent
Three.js 0.186.0 and Electron 44.3.0 installation. The current copy runs
offline. An optional fresh `npm ci` requires internet to restore dependencies
and the Electron runtime; the project postinstall hook restores its local
launcher and downloads the runtime only when it is missing.

## Controls

| Input | Action |
| --- | --- |
| W/A/S/D or arrow keys | Move relative to the camera |
| Space | Jump |
| Hold Q while walking into `crates03` | Push that group in experimental power-move mode |
| Click the scene, then move the mouse | Capture the mouse and rotate the camera |
| Hold the right mouse button and drag | Rotate the camera without mouse capture |
| Escape | Release the mouse |
| R or the reset button | Reset RedCat, the button, and all crate paths |
| F11 | Toggle fullscreen |

In experimental power-move mode, approach `crates03`, hold Q, and walk into
it. Only that group is a shove target in this experiment.

In original button mode, walk against the red button on the right to
activate the puzzle. Clicking the scene controls the camera; the original
button is activated by contact. Changing modes or resetting provides a fresh
scene for comparing the two behaviors.

## Recovered original behavior

The button `knopstoragecrates01` has `TouchToSwitch=1`. Its authored movement
lasts 1 second. After it reaches the switched-on endpoint, its native
`AfterSwitchOnCommand` issues `crates01.open`, `crates02.open`, and
`crates03.open` together:

| Crate group | Translation along original +Z | Authored motion duration |
| --- | ---: | ---: |
| `crates01` | 91 units | 1.7 seconds |
| `crates02` | 116 units | 2.5 seconds |
| `crates03` | 93 units | 1.0 second |

The groups follow their original translation paths and remain at their open
endpoints. They are animated BSP `DoorModel` objects. Their authored settings
disable opening directly through contact or proximity.

The scene uses all 38 original solid BSP leaf collision boxes: 12, 15, and 10
for the three crate groups, plus one for the button. RedCat uses the original
idle, walking, and jump clips. The room, lighting, camera, object placement,
minimal movement controller, and experimental shove are new lab components.
They do not reproduce the complete Genesis3D physics, moving-model
obstruction handling, original
camera sequence, indicator actors, or sound. Native state transitions also
introduce frame-dependent callback timing; the displayed durations describe
the authored paths.

## Correction about the power-move skill

Skill index 4 grants mask 16 (`0x10`), associated with `ReqPotionPowerMove`.
That stored flag did not establish a working shove action. The recovered
direct native skill checks use the other skill masks; no gameplay consumer
for mask 16, original shove binding, or shove-named animation was identified.
This corrects the earlier claim and does not prove that no such action exists
anywhere in the original software or its history. The Q-based power-move in
this lab is an explicit experiment, not evidence that the stored skill flag
invoked that behavior in the shipped game.

See [the native investigation](docs/native-shove-investigation.md) for code
addresses, source hashes, timing details, and the language-file discrepancy.
[The original entity records](docs/native-crate-entities.json) preserve the
shipped button command and crate settings.

## Project isolation and asset provenance

This standalone folder is inside `RCSPOOK_NEW/RC_SHOVE_TEST`. Its runtime code,
dependencies, model exports, and textures are independent copies; it does
not load the port's runtime or real-game saves. No game distribution build is
needed. [Dependency provenance](DEPENDENCY_PROVENANCE.json) records the copied
package versions and actor/animation hashes.

The lab has its own profile. Cache, logs, temporary files, and profile data
are intentionally stored in the designated investigation workspace:

```text
../temp_work/shove-investigation-2026-10-05/lab-runtime/
```

That path is relative to `RC_SHOVE_TEST` and stays inside the parent project's
`temp_work/` directory after moving the checkout. Existing investigation files
are retained. `DEPENDENCY_PROVENANCE.json` records the original copy locations;
those historical paths are not runtime dependencies.

The lab data is separate from the real game's
profile. The app uses the local `rc-shove://lab` origin with a sandboxed
renderer and no renderer Node.js access.

The character, animations, crate/button geometry, and textures originate
from the original Davilex game. They are not assets authored or owned by this
lab, and this project grants no new license to redistribute them. Existing
rights remain with their respective rights holders.

# Actor facing, ordinary jumps and Fleurifee

This source-only update was checked against the installed `RcHcGame.dat`, the
original actor INIs/motions, level entities and Davi-Script, and the supplied
screenshots. The original files were only read. No packages were generated.
The executable SHA-256 is
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Addresses below are virtual addresses in that executable.

## Coordinate conventions

`0x5b17e0` converts a clock-face heading to `(3-heading)*PI/6`, wrapped to
`[-PI,PI]`. The standing-enemy constructor at `0x42abbb` adds `PI/2` before
rotating the actor. The moving-enemy path at `0x595bb9` / `0x595ec0` uses
`[cos(angle),0,-sin(angle)]` as its direction. These produce the same world
heading: 0/12 points toward -Z, 3 toward +X, 6 toward +Z, 9 toward -X.

The imported character front points toward +Z after the original INI X=-90
rotation. This was checked on original Brutus and knight foot/toe bones, and
RedCat's head/mouth and tail. Initial enemy yaw is consequently
`PI-heading*PI/6`. Player control uses `[-sin(yaw),0,-cos(yaw)]`, so its yaw is
`-heading*PI/6`; its visible character adds PI. Active enemy steering already
uses `atan2(dx,dz)` and must not receive another 180-degree visual correction.

The first actual `CSL001_MotionCommand("rcshow",0)` calls
`RcShowAtSpawnPoint("rcpoint1",8)`. That endpoint is `[-1872,-152,3480]`, and
`fairy11` is at `[-2128,-75,3584]`. The corrected heading faces the fairy with a
horizontal direction dot product of 0.9905, instead of facing empty space.
The same conversion is used for the level spawn and subsequent teleports.

Native `CActor::RotateX/Y/Z` at `0x49ccf0`, `0x49cd90`, `0x49ce30` premultiplies
the world rotation (`0x5b31f0` / `0x5b3220` / `0x5b3250`). The generic actor
constructor applies X, then Y, then Z. Thus the result is `Rz*Ry*Rx`, which is
Three's Euler ZYX order. The UFO's authored (-25,180,10) degrees now shows its
orange top tilted toward the starting area, matching the supplied original
screenshot. The imported mesh basis remains a separate child transform.

## Jump motion

The player motion table at `0x690130` contains `jump1`, `jump2` and `fall1` as
separate states. The normal state-6 jump selects `jump1` at `0x432d60` and plays
it at **1.4x** (`0x432dcb`); `0x432e03` sets its jump flag. `0x43337d` suppresses
the separate `fall1` transition during a normal jump. The imported jump1 is
0.933338 seconds long and contains takeoff, ascent, descent and return to its
standing pose. Its pelvis rises and returns within that same motion.

The reconstruction previously switched to `fall1` the instant vertical speed
became negative. It now continues the full non-looping `jump1` across the apex.
For a ledge drop, `0x4363a0` tests whether the downward floor distance increased
by **more than 80**; `0x4d6720` performs the probe and `0x4d67f0` returns that
distance. Ordinary small steps retain their ordinary locomotion pose. A large
ledge drop selects `fall1` at its native 1.5x rate. No-clip resets this airborne
state. Left strafing also selects its matching `strafel` clip.

## Fleurifee effects

This initial reconstruction was subsequently replaced with recovered native
state updates; see [native visual follow-up](native-visuals-2026-09-22.md) for
layering, orbital motion, color cycling, the 50-slot particle pool, and departure
lifecycle, and [effect saves](fairy-save-restoration.md) for live-state restoration.


The original Fairy class has no actor mesh. It is a procedural effect, which
explains why loading character actors alone could not display it. The native
constructor/render/update block `0x478a00`–`0x47cdb0` references:

| Bitmap and alpha mask | Purpose |
| --- | --- |
| `fleuri.bmp`, `fleuri_a.bmp` | White central glow |
| `fleurL8.bmp`, `fleurL8_A.bmp` | Pulsing halo |
| `fleurL7.bmp`, `fleurL7_a.bmp` | Two rotating ray layers |
| `star.bmp`, `star_a.bmp` | Small particles |

These are imported without resampling, with source hashes in the effect
manifest. The native geometry uses a base size of 15, complementary pulse
factors between 1 and 2, alpha values 200/255, 180/255 and 100/255 for its main
layers, and 0.9 radians/second spin. It creates five orbiting particles
(`0x47caab`–`0x47cbc1`) and a radius-110 dynamic light (`0x64e280`). The level
supplies Origin, LifeTime, NumberOfWayPoints and up to ten FairyWP references.

`fairy-effects.js` implements the recovered centre seeking/hovering, five
orbiters, secondary-particle gravity and wiggle, reusable 50-slot pool, color
cycling and per-tick pulse. Re-enabling resets the centre/orbiters and emission
timers while preserving the native retained color, pulse and living particles.
The light radius follows the pulse. New saves preserve the complete bounded
state, including trails, random state, departure particles and fractional tick;
only legacy age-only saves reconstruct an earlier activation.

Deliberate portability differences remain: a fixed 60 Hz simulation and a
per-fairy random stream instead of the original variable frame times and shared
global random sequence. The recovered 800 ms trails use a linear opacity fade;
the exact native trail-history attenuation curve has not been established.
Audio playheads are not part of visual effect snapshots. These limits do not
mean the particle integrator, pool or color cycle is still unimplemented, and
controlled numerical/rendering checks do not claim pixel-identical original
playthroughs.

## Focused validation

Only checks related to these changes were run:

```sh
node --test tests/presentation.test.mjs
node --test --test-name-pattern='actor orientation' tests/actor-placement.test.mjs
node tests/presentation-scenes.mjs
```

Seven focused unit cases cover clock-face conversion, the real first dialogue
DSO handler, UFO matrix composition, ordinary jump descent, ledge drop
classification, effect artwork/lifetime and later re-enabling. One existing
orientation case was updated to assert the recovered world-axis composition.
The browser fixture reads visible pixels from the actual forest, uses the real
dialogue handler, and checks real Brutus and knight mesh-bone facing while they
remain in an attack state. The latter checks pair with the AI correction that
continues facing the player during locked attack/hurt clips.

Artifacts:

- `artifacts/presentation-scenes.json`
- `artifacts/fleurifee-original-effects-facing.png`
- `artifacts/fleurifee-redcat-closeup-facing.png`
- `artifacts/ufo-native-world-rotation.png`
- `artifacts/brutusm-facing-redcat.png`
- `artifacts/knight-facing-redcat.png`

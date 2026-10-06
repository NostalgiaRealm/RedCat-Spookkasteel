# Native smoke and flame spouts

Recovery and implementation date: 2026-10-05. Focused simulation, integration
and browser-rendering checks passed. No packaged build was created.

Source: installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
The retained complete disassembly is
`current_work/player-world-light-2026-10-04/native-full.asm`.
Narrow extracts, constants, inventories, the full initializer argument mapping,
and read-only reproducible research scripts are retained under
`current_work/native-spouts-2026-10-05/`.

This recovery concerns the visual `EffectSpoutEntity` emitters. Audio/music
behavior and scheduling are outside its scope.

## Scope and identity

The campaign emitter is **CRcParticleSystem**, factory `0x4673f0`, constructor
`0x466a90`, vtable `0x64d9e4`. `EffectSpoutEntity` registration and its strings
begin at `0x466073`; campaign factory registration references its factory global
at `0x495e99`. This is not the other generic Genesis `CAdamEffectSpout` or the
separate gameplay projectile CE particle effect implementation. Some validation
messages retained in this class still say `CAdamEffectSpout`.

The campaign has 139 authored emitters: Forest 1, Castle 77, Graveyard 29,
Caves 17, Tower 15. There are 125 flame sprites and 14 smoke emitters.
All authored RGB endpoints are white; only one has ColourCycling enabled.
The seven Gravity=25 emitters belong to the Caves waterfalls.
Only Tower `flash` has a finite emitter duration (one second, initially off);
Graveyard `endsmoke` is infinite duration. There are no authored wind or bounce fields.
See the retained `authored-spouts.json` and `spout-authored-inventory.json` inventories.

## Entity data layout

| Offset | Field |
|---|---|
| 0x00 | DaviName |
| 0x08 | Origin (XYZ) |
| 0x14 | LifeTimeSecs: duration of emitter births, 0=infinite |
| 0x18 | ColourFrom (RGB) |
| 0x24 | ColourTo (RGB) |
| 0x30 | ColourCycling |
| 0x34 / 0x38 | DelaySecondsMin / Max |
| 0x3c / 0x40 | LifeSecondsMin / Max (individual particle) |
| 0x44 | IsInitiallyEnabled, factory 0x467843 |
| 0x48 | Scale |
| 0x4c / 0x50 | SizePercentageStart / End |
| 0x54 / 0x58 | AlphaPercentageStart / End |
| 0x5c | StartRadius |
| 0x60 / 0x64 | SpeedMin / Max |
| 0x68 / 0x6c | BitmapFileName / BitmapAlphaFileName |
| 0x70 / 0x74 | AngleMin / Max (degrees) |
| 0x78 | Gravity |
| 0x7c | SpoutDirection entity pointer |

## Fixed pool and birth scheduling

Constructor `0x466add` creates **15 CParticle slots**, each `0x144` bytes. Each
slot receives a lifetime once (`0x468730`) and a velocity, position offset and
delay template once (`0x466ec8` onward). These templates are reused for the
entire emitter lifetime; native does not reroll each successive birth.

Updater `0x468540`:

1. Tick birth-delay timer at emitter `+0x1680`.
2. If expired, scan slots from index zero for first inactive slot (`+0x6c`).
3. Reset it (`0x47e710`), copy that slot's precomputed position and velocity,
   and reset delay timer to **that slot's** precomputed delay (`0x468609`).
4. Spawn at most **one** particle in this update. If all slots are alive,
   retain the expired timer and retry in a later update. There is no catch-up loop.
5. Advance shared color and all active particles, including a new birth.
6. Tick emitter life timer (`+0x1690`) **after** particle updates/birth. On
   expiration stop further births, allow surviving particles to complete,
   then disable the entity after all particles have gone (`0x4686ec`).

Timer values are integer milliseconds. Reset marks deadline `-1`;
its next tick establishes deadline `now + duration`. Expiration is strictly
`now > deadline` (equality remains alive). This means an enabled emitter does
not spawn at time zero. Resetting delay after a birth starts its new countdown
on the next update; a port wishing to reproduce native timing should account
for that deferred start instead of accumulating catch-up emissions.

Enable command `0x467254` enables the object, resets delay to the first slot's
delay and emitter life to the authored duration. Disable command `0x4672a6`
stops births and sets emitter life to zero, retaining live particles until dead.

## Template randomness, cone and start position

Each random draw is `(rand() % 10000) / 10000`, with original scalar constants
readable in `native-constants.json`. The native global CRT RNG sequence depends
on unrelated gameplay, so an isolated deterministic port cannot reproduce the
same per-session samples without emulating that shared RNG too.

Let `d = normalize(SpoutDirection.Origin - Origin)`, or world up `[0,1,0]`
without a direction entity (`0x466dc7` through `0x466e1c`). Select a reference
`r = [0, d.y < 0 ? -1 : 1, 0]`. If every component of `d-r` has absolute value
<= 0.1, instead select `r = [0,0,d.z < 0 ? -1 : 1]`.

```
tangent1 = cross(r, d)
tangent2 = cross(tangent1, d)
```

Unlike the billboard basis, these two cone tangents are **not normalized**
(`0x466e98` through `0x466eb5`). Preserve this narrowing for off-axis cones.
For each slot:

```
angle = lerp(AngleMin, AngleMax, random()) * PI / 180
speed = 3 * lerp(SpeedMin, SpeedMax, random())
azimuth = (rand() % 10000) * 0.036 * PI / 180
axial = speed * cos(angle)
radial = axial * tan(angle)
velocity = d * axial
         + tangent1 * (radial * sin(azimuth))
         + tangent2 * (radial * cos(azimuth))
```

The **3× authored speed multiplier** is explicit at `0x466f0b` and `0x466f18`.
Spawn offsets are independent random **world X and Z** offsets in
`[-StartRadius, +StartRadius]`; Y stays at the emitter origin (`0x467038`
onward). This is a horizontal square, not a disk and not a cone-oriented disk.

Delay is integer truncation of
`1000 * (DelayMin + random() * (DelayMax - DelayMin))`.
Lifetime is selected once per slot with the same interpolation and stored in
seconds, with the base timer subsequently truncating to milliseconds.

## Motion

Spout configuration `0x46877c` reads Gravity, multiplies it by **0.75**, then
negates it at `0x4687c7`, creating acceleration `[0,-0.75*Gravity,0]`.
The shared CParticle physics `0x47e124` onward applies its factor **32** to
acceleration (not velocity), so effective world acceleration is
`[0, -24*Gravity, 0]`.

The integration uses **semi-implicit Euler**:

```
velocity += acceleration * dtSeconds
position += velocity * dtSeconds
```

It does not use an analytic `position0 + v0*t + .5*a*t*t` trajectory. As with
other frame-based native behavior, different historical frame times slightly
change the result. Fixed-step simulation can stabilize low/high refresh ports;
it should be described as a deliberate stable simulation clock rather than
an exact replay of every possible native frame schedule.

The spout explicitly configures mode 1, collision=false and wiggle=false at
`0x468928` (initializer `0x47db60`). Friction is left at the base default 2120;
its branch only applies to values in [0,1), so friction is skipped. There is no
world-wind branch in this enabled path. Do not add collision traces, bounce,
wind or noise based on other particle classes.

The retained `particle-base-contract.md` lists all 36 initializer arguments
and the complete base timer contract.

## Sprite size and billboard orientation

Constructor `0x466d82` assigns emitter `+0x16a8 = 10 * Scale`. This is a
**half-size in world units**, independent of bitmap pixel dimensions.
Render `0x468101` interpolates from start to end percentage using particle
`+0x24` (remaining lifetime fraction), then multiplies this half-size.

```
remaining = lifetime timer remaining fraction
size = remaining*SizeStart/100 + (1-remaining)*SizeEnd/100
halfSize = 10 * Scale * size
fullWidth = fullHeight = 2 * halfSize
```

Native quirk: if SizeStart==SizeEnd, the percentage is skipped and halfSize is
10*Scale. All 139 campaign emitters have differing start/end values, so the
quirk is currently dormant.

`0x477d50` constructs a separately normalized billboard basis from each
particle-to-camera vector and signed world Y, with signed Z fallback near
parallel. Render `0x468183` flips both basis vectors when the camera is above
the particle. Thus these are viewpoint-facing quads, not necessarily parallel
to the camera image plane.

All corners use particle center plus/minus the scaled basis vectors. A tiny
additional static offset from the original quad template is also added:
`(-.5,+.5,0)`, `(+.5,+.5,0)`, `(+.5,-.5,0)`, `(-.5,-.5,0)` world units.
The UVs are `(1,0)`, `(0,0)`, `(0,1)`, `(1,1)` respectively.
These constants are at `0x64d928`, `0x64d94c`, `0x64d970`, `0x64d994`.

Alpha getter `0x5995d0` returns the particle's integer `+0x70` value; renderer
places this 0..255 alpha in every corner. Texture alpha is the separately
loaded authored alpha bitmap; colored and alpha art should remain paired.

## Color cycling

When cycling is off, all vertices use ColourFrom. When on, `0x468450` advances
one **shared emitter** color over time, not each particle's age. Each half-cycle
nominally lasts 0.5 seconds; it walks forward/backward between endpoints,
clamps when RED passes a bound, and flips direction. The constructor stores
G/B step components crossed relative to the ordinary RGB order. Both details
are inconsequential to shipped emitters, whose From and To RGB are all white.
The previous age-based per-particle From→To interpolation has been removed.

## Preserved intentional torch behavior

The user requested flames and lights to follow moving hand-torch tips, including
flames missing from original authoring. This intentional enhancement must remain;
attach the slot origin/direction template to the current torch tip for births,
then let emitted particles move independently. Do not replace this with static
native world positions or add audio changes while fixing visual particles.

## Exact alpha delay

Spout initialization supplies a 0.001-second fade delay, not immediate fading.
The first particle tick initializes its lifetime and 1 ms fade-delay timer. A
later tick strictly after that deadline starts the fade mode and resets the
fade timer. The following tick establishes the fade deadline. Fade duration
is the same per-slot randomized lifetime; therefore alpha lags the size curve
by those update steps.

Initial alpha is `trunc(AlphaStart * float32(2.55))`, potentially 254 for 100%.
Fade alpha is `trunc(2.5500000000000003 * (AlphaStart*remainingFade +
AlphaEnd*(1-remainingFade)))`. Lifetime is checked before fade/motion; a dead
particle is removed without one extra movement step.


## Portable implementation and verification

`src/spout-effects.js` now owns the 15 reusable slots and their immutable launch,
spread, delay and lifetime templates. `WorldEffects.updateSpout` supplies current
model/hand-tip positions and renders the pool in the existing artwork batches.
No particle meshes, extra lights or collision traces are allocated per birth.
The spout-only billboard shader mode restores radial facing, native UVs and
corner offsets; other billboard effects retain their existing transform.

Repeated `EffectSpoutEntity.Enable` commands restart the birth and emitter-life
timers even if already enabled, while retaining live particles. A small visual
activation counter carries this through to the renderer. Finite emitters stop
births, drain, and become disabled. A saved finite emitter whose duration has
already elapsed cannot restart merely because its renderer was reconstructed.

Deliberate portability differences:

- Simulation advances at 60 Hz with integer-millisecond timer comparisons,
  producing the same cloud when rendered at 30, 60 or 120 Hz. Work after a long
  frame is limited to the game's existing 250 ms cap; no unbounded catch-up.
- The native CRT random formula and draw order are retained with an emitter-local
  seed. The original global random sequence also depended on unrelated gameplay,
  so a particular original playthrough's random samples are not reproduced.
- Existing flames added to hand torches and their moving attachments remain.
  Newly born particles use the current tip; older particles keep their own path.
- The radial billboard basis has a finite fallback for looking exactly vertically
  at a particle, avoiding the original helper's zero cross-product degeneracy.
- Generic smoke/flame particle pools are still regenerated on save loading;
  `effectAge` preserves the finite emitter's elapsed duration, not every puff.
  Exact saved portal/Fleurifee pools remain separate and unchanged.

Focused checks executed (12 unit/integration checks total):

- `node --test tests/spout-effects.test.mjs`: 8 checks for the recovered motion,
  timers, growth/fade, square spread, cone basis, pool reuse, disabled tails,
  shared colour, fixed refresh-rate behavior and real Tower finite-flash data.
- Only emitter-artwork, flame disable/re-enable and finite/repeated-Enable cases
  from `tests/world-effects.test.mjs`: 3 checks.
- Only the moving-hand integration case from `tests/torch-flames.test.mjs`:
  1 check covering attached flames, pause, visibility, distance and light limits.
- `tests/spout-scenes.mjs`: real Forest UFO smoke, Castle flame,
  Graveyard moving hand/static torches, Caves waterfall mist and Tower green
  cauldron smoke. The initial run covered Forest/Castle/Graveyard; a second run
  covered only the remaining Caves/Tower fixtures.

The smoke/flame pools stayed at or below 15 particles throughout; the Forest
fixture ran for 60 simulated seconds and the other ordinary fixtures for 12.
All reused their original slot objects and retained the same geometry, texture,
shader-program and scene-resource counts. Pause left particle and draw data
identical, disable allowed tails to finish, and re-enable resumed emission.
Five radial views (front, above, below and exactly vertical above/below) produced
visible fragments with no WebGL errors. Screenshots were inspected.

Retained browser evidence:

- `current_work/native-spouts-2026-10-05/scenes-1791234202235/report.json`
- `current_work/native-spouts-2026-10-05/scenes-1791234337718/report.json`

Sound/music scheduling was deliberately left as previously tuned. Before/after
SHA-256 checks of all seven audio/ambience modules matched; the new script-command
branch applies only to visual `EffectSpoutEntity` objects. Portal, fairy, beacon,
sound and music scheduling code was not changed in this work.

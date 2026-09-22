# Cobweb masks, original BSP visibility, and Fleurifee effects

**Visibility section superseded:** the user corrected the reported location to
Het Kerkhof. The broad BSP/PVS filter described below was reverted because it
could hide cave-door artwork. It is no longer used at runtime. The implemented
replacement uses the graveyard's authored SKY boundaries. See the
[current correction and focused checks](graveyard-and-fairy-corrections.md).
The older visibility checks below are historical results, not validation of the
current renderer. Cobweb fixes and Fleurifee movement/particles remain in place.

This source update leaves the original installation and existing packages unchanged.
The executable studied was `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Native addresses below are virtual addresses in that file.

## Cobwebs

The supplied `Level 3 non-Transparent Cobweb.png` corresponds to graveyard map
`lvl02a`. Its two `spiderweb.act` placements, `AdamAnyActor191` and
`AdamAnyActor219`, explicitly replace the actor's embedded material with
`128White.bmp` and the `web_A2.bmp` alpha mask. The renderer previously ignored
`AlternativeBitmap`, so both instances displayed their opaque placeholder.

`tools/import_actor_overrides.py` now imports each authored RGB/alpha pair at its
original dimensions with source SHA-256 hashes. The renderer applies the image,
mask and `AlternativeColour` to cloned instance materials. The shared actor
material stays unchanged. This also honors the seven stained-glass ghost
instances using their distinct authored `ghost.bmp` / `ghost_topa.bmp` pair.

## Cave visibility (reverted implementation and research)

The cave BSP already contains opaque ceiling faces. Its `sky00` texture has no
color key, and the cave has no sky-flagged faces or skybox texture assignments.
Adding an artificial roof would obscure authored areas. The actual missing
engine feature was BSP visibility: the remake submitted every static room and
every model regardless of the camera's BSP cell.

The original GBSP retains the following data:

| Chunk | Data used |
| --- | --- |
| 4 | Leaf cluster, area, first face and face count |
| 5 | Cluster offset into the PVS byte array |
| 6 / 7 | Area portal ranges and portal model/neighbor area |
| 12 | Leaf face references |
| 21 | Uncompressed, padded PVS rows |

The algorithm follows the engine's primary source,
[Genesis3D World/Vis.c](https://github.com/RealityFactory/Genesis3D/blob/master/World/Vis.c):
camera leaf → visible cluster bits → areas connected through open portals →
visible leaves and their faces. Moving BSP models are tested using their
transformed bounds. The cave contains **668 clusters**; its row offsets advance
by 88 bytes. These are bitsets, not Quake-style run-length encoded data.

`tools/import_visibility.py` matches each original face to the existing imported
triangle spans, including skipped degenerate triangles. It verifies all group
keys, starts, counts and source hashes before writing data. It does not change
the mesh, ceiling, collision or original level files.

The render path now filters static triangles, moving BSP models, actor drawable
children, billboards and beam bounds. Gameplay/script visibility and collision
continue independently. A camera that briefly clips into solid space or outside
the level uses the player's valid cell, then the last valid cell. It cannot
trigger an unrestricted whole-map fallback merely by looking up. An intentional
no-clip traversal updates visibility whenever it reaches a valid new cell.

Door portals remain open until their **authored motion** reaches its closed
endpoint. The separate generic `openFraction` reaches zero after half a second,
which is too early for the cave's one-second door clips. Pausing a partially open
door also keeps its portal open. Non-door controller portals stay conservatively
open until their original open/closed rules have been recovered.

Forest visibility review found another important distinction: all ten forest
portal models are invisible `DoorType4` controllers. Their `Air_Wtr01` faces
have translucent flag16 and alpha0. Inferring area closure from their logical
door state hid the visibly open corridor behind the first fairy. Portal models
with no visible surfaces now stay open; actual visible door panels still follow
their authored motion. At the same cutscene camera, this retains7083 static
vertices out of42765 while restoring the corridor. Both filtered and full-scene
reference screenshots were inspected at the identical camera pose.

The reported cave location was not supplied. Looking up at the initial cave
room shows its existing ceiling; this check did not reproduce the exact original
report. A deliberate camera position above the map verifies that PVS fallback
keeps distant rooms and their props hidden. This restores the missing visibility
mechanism without claiming every camera escape has been reproduced.

## Fleurifee

The new native investigation corrected several details of the earlier effect:

- `0x47b7c0` cycles one RGB channel at **500 units/s** between 20 and 255,
  initially `[20,255,20]`.
- `0x47b860` builds a **square** `fleurL8` halo. Two `fleurL7` quads alternate
  the scale of opposing diagonal corners. They are not stretched ellipses.
- `0x47c710` eases the 1–2 pulse with speed 0.7 and a 0.1 floor factor.
  The portable pulse applies the native per-tick update, including the initial
  pair of diagonal multipliers `[1,1]` and complementary endpoint clamps.
- `0x47a7b0` draws L7 twice, then L8, then the white `fleuri` core. Explicit
  batch draw order preserves that layering; alphabetical asset order covered
  the white center with colored rays.
- `0x47caab` / `0x47db60` initialize five orbiters with **radius 30**,
  **5 radians/s**, `.7*i` phase and two `.7*i` X tilts. `0x47ea90` performs
  their orbital transform. Trails have an **800 ms** history, native width1.6,
  and yellow-green color `[255,255,25]`. Star tips follow the fairy's tint.
- `0x479788` scales the dynamic light's radius **110 by the pulse**, with the
  same yellow-green light color.
- `0x479645` detects central-particle death and calls `0x47c580(-1)`: fill the
  available **50-particle pool** with an outward burst, using randomized
  velocities multiplied by110. Their configured life is **4 seconds**.
  The fairy body disappears first; the separate burst and old trail history
  finish afterward. Disabling an active fairy follows this lifecycle too.
- `0x47e850` seeks the current authored waypoint with acceleration
  `min(.006 * distance², 200)`, multiplied by32. Arrival within20 units advances
  only one waypoint, with the current tick still using the old direction.
  At the final index, velocity is damped by `max(0, 1-.5*dt)`; a speed below0.5
  switches to hover on the next update. Position is integrated **before** stored
  velocity is capped at75, matching the executable's operation order.
- `0x47ece0` hovers around the final waypoint. Only when within20 units is its
  attraction point offset by `[14,14,0]`. Z acceleration receives random jitter
  from−2.5 to2.4995, then X from−1.5 to1.4997. The authored origin is the initial
  center, not an extra waypoint; `0x47cbd0` collects the actual waypoint pointers.
- `0x47c2b0` checks two timers,250ms and2500ms. Each eligible tick first allocates
  one slow star (velocity multiplier30); if the250ms timer did not expire, it
  also emits five fast stars (multiplier110) and resets the2500ms timer. When
  both expire together, the slow timer wins and the burst happens next tick.
  Allocation always uses the first free slot. A full pool resets neither timer.
  Slow stars favor downward Y velocity; fast stars favor upward Y, with the
  opposite sign for every fourth actual pool slot. Fast stars originate at the
  previous published center, while slow stars use the current center.
- The common secondary configuration at `0x47ca67` is life4s, alpha100% for1s
  followed by a3s fade, no collision, and constant full billboard width6.
  `0x47e090` applies gravity `[0,-1.5,0]` and an eased±0.8 X/Z wiggle, multiplied
  by32 before velocity/position integration. `0x47e710` preserves a reused
  slot's oscillator phase. Departure fills vacancies without replacing living
  particles, so their positions and remaining lifetimes continue normally.
- Random numbers use the original MSVC generator at `0x60a4a0`, including its
  15-bit output followed by modulo10000. Particle colors use the fairy's current
  `[R,255,B]`, and freeze when the center disappears.
- The earlier generic sound-table interpretation was corrected against the
  user's latest original-game comparison: `Gri5FX11.WAV` plays once on appearance,
  `idlefee1.wav` loops while present, and `magiev12.wav` plays on ordinary
  disappearance. Particle pulses remain visual and do not restart sounds.
  Skipping stops the idle loop and consumes that cutscene's remaining fairy
  effects silently. See [the focused sound/skip correction](fairy-skip-audio-2026-09-22.md).

Original bitmap/mask pixels remain unchanged. Lifetimes and waypoint references
come from each original Fairy entity. Re-enabling resets the center, orbiters
and emission timers while retaining color, pulse and living secondary particles.
The implementation stores one `NativeFairyEffect` per entity, with cached orbit
segments for the800ms trail. Drawing and `update(0)` refreshes never advance
the simulation, RNG, lifecycle or sound events. A saved active effect age is
replayed once at load; rendering does not recompute the trajectory.

### Remaining fidelity limits

The native operations run at a fixed60Hz in the portable renderer instead of
the original variable frame interval. This preserves the recovered algorithms
across HD frame rates, but it does not reproduce every old render frame or its
millisecond timer quantization. Trail positions are actual cached simulation
samples; their opacity currently fades linearly over the recovered800ms lifetime.
The original beam-history attenuation curve has not been established.

The MSVC random formula is recovered, but each fairy has a deterministic seed
instead of sharing the original game's global random stream with unrelated
events. The existing save format stores only `effectAge`; it reconstructs a first
activation's state correctly. It cannot recover color/pulse, particles and RNG
carried over from earlier activations of the same entity, or exact audio playheads;
those details were not stored in the existing save format. An already expired
saved age remains disabled rather than accidentally reactivating the fairy.

## Focused checks

Only tests for these changed graphics systems were run. No package build or
full desktop/regression suite was run.

```sh
node --test tests/native-visuals.test.mjs
node --test --test-name-pattern='Fleurifee|fairy lifetime' tests/presentation.test.mjs
node tests/native-visual-scenes.mjs
```

Six focused unit cases cover both web placements and template isolation, fairy
layers/departure/re-enable/audio, actual cave PVS data and index bounds, portal
connectivity, and a real one-second cave door paused/closing beyond0.5 seconds.
The browser fixture loads the actual graveyard, forest and cave source assets;
it checks nonempty geometry, both web mask assignments, the fairy's separate
50-particle departure and exterior-camera PVS fallback, with no browser or HTTP
errors.

After the additional native fairy integrator/pool work, **only fairy checks**
were rerun; the successful cobweb/PVS checks above were not repeated:

```sh
node --test tests/fairy-native-state.test.mjs
node --test --test-name-pattern='native fairy' tests/native-visuals.test.mjs
node --test --test-name-pattern='^Fleurifee|fairy lifetime' tests/presentation.test.mjs
node tests/native-visual-scenes.mjs --fairy-only
```

All11 selected unit cases passed. They include numerical seek/hover oracles,
timer priority and pool backpressure, slot retention on departure/re-enable,
random generator, gravity and alpha timing, restored active age, expired saved
age, render-only refreshes and frame-size independence. The fairy-only browser
run showed31 sprites (the layered body, five orbiters and22 secondary stars)
at4 seconds, then50 occupied star slots with no central body/light after departure.
It reported no browser or HTTP errors.

A subsequent same-camera review identified the invisible forest-controller
issue described above. Only its new regression was selected:
`node --test --test-name-pattern='invisible forest' tests/native-visuals.test.mjs`.
It passed, and the focused forest PVS on/off comparison confirmed that the
open corridor remains visible. The final fairy-only browser fixture was then
refreshed against that correction; earlier cobweb/cave suites were not rerun.

Artifacts:

- `artifacts/native-visual-scenes.json`
- `artifacts/native-fairy-scenes.json`
- `artifacts/cobweb-original-alpha-1.png`
- `artifacts/cobweb-original-alpha-2.png`
- `artifacts/fleurifee-native-orbits-halo.png`
- `artifacts/fleurifee-native-departure.png`
- `artifacts/caves-pvs-looking-up.png`
- `artifacts/caves-pvs-outside-camera.png`
- `artifacts/forest-fairy-pvs-comparison.json`
- `artifacts/forest-fairy-pvs-on.png`
- `artifacts/forest-fairy-pvs-off.png`

`tools/import_assets.py` includes both new importers, so the self-build guide's
complete import command creates the new required data automatically.

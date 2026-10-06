# Original world effects

`src/world-effects.js` renders the original flame/smoke spouts, coronas, beam entities, dynamic lights, activated save beacons and teleport effects. `tools/import_world_effects.py` imports eleven original color/alpha pairs into `assets/effects`; its manifest records SHA-256 hashes and original image dimensions. No replacement art is generated.

## Save beacon evidence

Reference: installed `RcHcGame.dat`, SHA-256 `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.

- The constructor at `0x46a920` allocates seven ray records, each width 5 and initially white with alpha 150. The corona is tinted RGB 173/235/255, alpha 180.
- `0x46b0b0` loads `energybeam.bmp`/`energybeam_a.bmp` and `Coreff.bmp`/`Coreff_A.bmp`.
- `0x46c090` places six starts on an 11-unit ring, 23.5 units below the authored origin, separated by 60 degrees. They converge half a unit below the origin. The seventh ray targets an upward world trace, with a 200-unit height fallback when no ceiling is hit.
- Timer initializers at `0x46a8c0` and `0x46a8e0` set 600 ms and 400 ms. `0x46bd00` begins each ray at 600 ms intervals and extends it over 400 ms. It starts the corona after the sixth joins. `0x46c3b0` expands the corona from 0.8 to 50 over the remaining 200 ms, then settles it to 25. The seven rays remain after assembly.
- The enable command at `0x46c360` resets the sequence only on a disabled-to-enabled transition. The renderer records the activation age on the gameplay object, which the save format preserves.
- The string initializer at `0x46a770` selects `Magiev10.wav`; `0x46bdd3` starts it at gain 0.75 for each ray, with pitch 1 for the first six and 1.5 for the seventh. The first six are stopped when their growth completes. These sounds use the existing spatial mixer and are not replayed when an already activated beacon is loaded.

`SavePoint` is the **visual entity**, not an additional proximity checkpoint. Authored triggers call `RcSetSavePoint(endpoint, orientation)` and then enable the named SavePoint effect. The existing scripted checkpoint action owns the save position.

## Authored emitters and lights

All five levels contain 139 `EffectSpoutEntity` objects, 233 `EffectCoronaEntity` objects, 27 `EffectBeamEntity` objects and 18 `DynamicLightEntity` objects. Their enabled state is read from the gameplay/script object each frame. Model-attached effects use the model's current translation and quaternion; this includes the graveyard church lift chandeliers.

Spouts now use the recovered native 15-slot pool, reusable launch templates, deferred emission timers, triple authored speed, square X/Z spread, semi-implicit gravity, delayed integer alpha fade and world-unit sprite sizing. Original bitmaps and alpha masks remain paired. Particles sharing artwork use instanced quads with the native per-particle camera-facing basis. Stopping an emitter stops new births and allows live particles to expire. See [smoke/flame recovery](spout-effects-native.md), including the preserved moving-hand torches and focused validation. These particles use depth testing. Fixture coronas instead perform cached BSP visibility checks and fade their radius; their draw bypasses depth testing so the shrinking halo can remain briefly visible behind a blocker, matching the recovered native flag. See [corona recovery](presentation-native-recovery.md).

Beam entities use their authored endpoints, color, alpha and width, including optional wall termination. Their strips face the camera, as does the recovered save beacon ray geometry.

Dynamic light function characters map `a` through `z` to normalized values, using the authored period and interpolation switch. World surfaces combine dynamic contributions with baked light at each original luxel, clamp before interpolation/texture modulation, and use cached native BSP obstruction for authored shadow-casting lights. The world shader has eight slots, with RedCat's small light reserved and the other lights selected by distance. Actors independently select their configured number of lights from the complete list and use recovered root-reference, raw-RGB vertex lighting; they do not inherit the world's eight-slot cutoff. See [world falloff](world-light-falloff-research.md), [world shadows](world-light-shadows-native.md) and [actor lighting](actor-lighting-native.md). The requested [moving hand-torch enhancement](torch-flames.md) adds bounded local lights; it does not make every particle a lamp.

## Beam contact and puzzle gates

`src/beam-contacts.js` makes the visible `EffectBeamEntity` line segment damage the player's swept collision box. It uses the same authored/model-transformed endpoints and optional nearest-wall trace as the renderer. It clips the segment against the moving box, rather than treating the entire diagonal segment's enclosing box as a hazard. This avoids empty-corner hits and missed fast crossings.

Native `RcHcGame.dat` evidence:

- `0x5754de` converts elapsed milliseconds to seconds using the float at `0x64a95c` (0.001). `0x575665–0x57567b` multiplies by the entity's `DamagePerSecond` and calls the player damage method.
- `0x574ad8–0x574b1d` advances an armed `TriggerDelay`, invokes the command when it expires, and skips the next contact trace during the delay. `0x575689–0x5756a7` arms that delay on contact; a zero delay dispatches immediately. Type 3 bypasses the command/delay path. `0x57544b–0x57545d` enforces `TriggerOnce` after the first hit.
- The four Cave boss gate beams are `beam_endboss01` through `beam_endboss04`, each with `DamagePerSecond=100`, `TriggerDelay=1`, width 5, and `TriggerOnce=0`. The damage applies independently to each beam intersecting the hull. At a 25 ms update touching all four costs 10 health; the next update cannot hit again while the one-second delays are armed. This frame-sized damage plus delay is the recovered behavior; the implementation does not substitute an invented fixed hit amount.
- Original compiled `cam01_MotionCommand("beam02")`, `cam02_MotionCommand("beam03")`, `cam03_MotionCommand("beam04")` and `cam04_MotionCommand("beam01")` disable the respective gate beams as puzzles finish. Disabled beams neither render nor damage. Existing script callbacks remain responsible for opening the gate.

Contact timers and once-only state survive saves. A lethal beam hit stops the update before other hazards can damage the newly respawned player. Hurt feedback is rate-limited separately from the environmental health loss. The segment/hull algorithm is a portable collision implementation; native source for its exact intersection tolerance has not been recovered.

## Teleport animation

There are 13 `TeleporterFX` entities: seven in the graveyard and six in the tower. The Cave level has no entities of this class. Eleven have four named corner waypoints, including ten whose `NumberOfWayPoints` is zero; two graveyard effects have no corner fields. These authored layouts are retained rather than adding fabricated portal entities to other levels.

`TeleporterFX.Show` is an animation command. Native `0x472840–0x47287b` accepts it only while the object is enabled, and `0x475720–0x475730` ignores another Show during the active sequence. The old generic visibility-only handling could not start the effect. The portable command now starts a saved 6.8-second flight plus a 300 ms terminal flash, while the original Davi-Script/motion events still control RedCat's animation, camera, relocation and exit timing. For example, the tower's `telepoort01` model motion starts `telepfx01.Show` after about 0.2 seconds.

Recovered parameters include the 250-slot sparkle pool and five special particle records (`0x471c62–0x471c96`), the five angular offsets spaced by `2π/5`, angular speed −7.5 and radius endpoints 100/10 (`0x475475–0x4754c2`), and traced floor/ceiling placement (`0x475030`). The data block at `0x64e000–0x64e038` contains the 110 light radius, RGB channel extrema 20/255, downward speed 200 and seven-second duration. `0x472806–0x472831` supplies the yellow-white light color 255/255/25. The effect uses original `spark8`, `blast` and `fleuri` color/alpha artwork and `Magiev18.wav`, with camera-facing sparkle quads, five moving energy strips and floor flashes. The importer records all six bitmap hashes alongside the other effect artwork.

The portal now uses the recovered bounded 250-slot particle simulation: authored corner emitters, seek/orbit transitions, 2.1-second beam contraction, ceiling-to-floor energy quads, scrolling UVs, the shrinking horizontal blast and the camera-facing terminal flash. Native emission delays, channel cycling, reused-slot wiggle and the final outward burst replace the analytic approximation. Saved pools resume exactly without replaying level time; old saves use a bounded warmup. See [portal recovery](portal-native-recovery.md).

The audio argument audit corrected previously reversed gain/rate values: Magiev18 plays at half speed, the LV2snd7 loop at .075 speed, and Magiev1 plays at the terminal/player transition without duplicate cues. Its whole WAV can finish after the visual flash. The slow loop uses a decoded Web Audio voice to avoid browser muting. See [portal audio recovery](portal-audio-native.md).

Portable differences remain: fixed 60 Hz simulation, locally seeded randomness,
BSP collision tolerances and the world shader's eight-light budget. Native
world-light falloff and per-luxel shadow obstruction are implemented, rather
than remaining generic approximations. The native shadow path itself only
tests static world BSP geometry; actors and moving brushes do not cast those
shadows. These changes do not claim bit-identical output from the original
engine.

## Verification and limits

`tests/world-effects.test.mjs` covers artwork coverage, native save sequence order and dimensions, emitter artwork and stop/re-enable behavior, activation clocks, light functions, moving-model light attachment, staged sound pitch and save/load without replaying past stages. Rendered graveyard effects checks are in `tests/effects-scenes.mjs`.

`tests/beam-contacts.test.mjs` covers swept contacts, near misses, native damage/delay, moving endpoints, disable/once-only behavior, save/load and lethal-contact ordering. `tests/teleporter-effects.test.mjs` checks every authored portal's layout, original texture availability, the real tower motion callback, repeated Show, finite duration and saved particle phase. `tests/portal-beam-scenes.mjs` checks actual rendered fragments, animation movement and save restoration at the tower portal, plus damage and all four compiled Cave puzzle callbacks. It writes diagnostic screenshots and `artifacts/portal-beam-scenes.json` without creating a packaged build.

The native beacon's geometry, textures, main timings and staged audio are recovered. [Presentation recovery](presentation-native-recovery.md) additionally reconstructs its shared per-ray texture scroll and the native corona's occlusion-driven radius fade. The beacon uses a stable 60 Hz clock instead of a hardware-dependent render rate; corona collision queries are cached and budgeted. Generic smoke/flame integration and pool behavior are now recovered; [smoke/flame recovery](spout-effects-native.md) documents the fixed simulation clock and local RNG differences. Particle simulation is frame-rate independent. Portal and [Fleurifee particle state](fairy-save-restoration.md) are saved; other generic visual emitters are regenerated when a saved level is loaded.

# Enemy death fading and purple smoke

Defeated enemies finish their original death motion, then fade over five seconds. The accompanying smoke uses the original `strail.bmp` colour bitmap and `strail_a.bmp` alpha mask, combined without resampling. `tools/import_world_effects.py` imports that pair during normal asset import.

The local original `RcHcGame.dat` (SHA-256 `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`) provides the following evidence:

| Native code | Behaviour |
| --- | --- |
| `0x403890`, `0x403b20`, `0x403960` | Enter smoke effect and death motion; wait for the motion before the alpha-fade phase. |
| `0x403b92`, `0x403aad`, `0x4247a0` | Start a 5000 ms timer, multiply its remaining fraction by 255, and apply actor alpha. |
| `0x46db52`, `0x46dbe0`, `0x46dc15` | Construct fifteen particles and load the `strail` colour/mask pair. |
| `0x46e6c0`, `0x47db60`, `0x47dd60` | Seven-second particle life; initial alpha 50%, then interpolate to zero over 6.2 seconds after a one-second delay. |
| `0x46e230`, `0x46e36a` | Quad radius grows from 20 to 60; tint RGB is `(211,63,255)`. |
| `0x46e8b0`, `0x5b7150` | Read raw bone attachment translations, selecting every second bone and wrapping before the last bone. Normalize that translation: initial position is actor origin plus this direction times 20; initial velocity is the direction times particle index times 0.5. These are bind attachments, not animated joint positions. |
| `0x47e090`, `0x47e301`, `0x47e3a9` | Particle mode 1 adds acceleration `(0,0.05,0) × 32` to velocity and advances position. This smoke configuration has no collision, damping or oscillation. |

The [26 October follow-up](death-smoke-native-followup-2026-10-26.md) replaces the continuous acceleration and fade approximations. Death smoke now samples a small shared 60 Hz table implementing native velocity-before-position integration, independent lifetime/delay/fade timers, integer particle alpha, and remaining-lifetime size. Each billboard faces the camera's **position**, using the native UV corners and extra half-unit XY template quad. Initial alpha is `127/255`; float32 conversion makes the fade interval 6199 ms. Timers arm on their first update and expire strictly after their deadlines.

The portable fixed visual clock is intentionally retained: the original integrated once per rendered frame, so exact historical frame-rate-dependent trajectories and individual pixels across renderers are not claimed. No per-enemy historical simulation, new random stream or extra draw call is introduced. Actor-body alpha remains the separate original floating-point five-second fade.

Fading multiplies each instance's existing material opacity and alpha texture, preserving translucent ghosts and unrelated actors that share a template. The cutout threshold is reduced during fading to prevent a second abrupt disappearance. Dead enemies remain non-colliding and do not become targetable again. The scripted witch's immediate retirement stays separate. Knights use their original nine detached armour actors and the recovered shared actor-particle physics described below.

## Knight armour recovery (October 2026)

`RcEnemyParticleDeath` at `0x403da0` iterates the actor's `ParticleType` entries
and calls the same `AddActorParticle` at `0x4a7360` used by destructible props.
There is no separate knight-specific gravity or spin law to reproduce. The
previous portable path bypassed that shared system, using fixed part heights,
a golden-angle burst, gravity 160, constant spin, a 3.5-second expiry and a
final fade for every piece. It now uses `src/knight-debris.js` and the existing
`src/debris-native.js` implementation.

| Evidence | Reproduced behaviour |
| --- | --- |
| Original `Actors/knight.ini`, `0x403e06–0x403e8c` | One of each of the nine named fragment actors; each launches at a random speed from 40 to 80. |
| `0x40e490–0x40e538`, `0x49bc80`, `0x403e78` | Source bounds are `[-10,0,-10]..[10,50,10]` times the knight's scale. The death caller supplies the actor's bounds centre and these local bounds to the fragment constructor. Parts start randomly within that supplied volume; they are not attached to invented head/arm/leg heights. |
| `0x403e5b`, `0x4a75fc–0x4a7786` | The final argument is a null direction, selecting `normalize([rand*60−30,rand*20+50,rand*60−30])` before multiplying by launch speed. It does not select the optional surface-normal hemisphere branch. |
| Original nine part INIs, `0x56fe00`, `0x571140` | Each fragment's own INI controls its random 3–4 second lifetime, rotation, collision box, gravity and fading. The parent knight's `RotationSpeed=10` must not replace the fragments' `RotationSpeed=100`. |
| `0x56fd00`, `0x570028`, `0x570b19` | Shared velocity-dependent world-axis spin, gravity `9.8*32`, elasticity 1.6 and friction 0.8, using the previously recovered fragment solver. |
| Original `knax.ini` versus the other eight INIs, `0x570f57` | Only the axe requests a two-second fade upon settling. Other armour remains opaque until its selected expiry. Airborne pieces do not receive an invented end fade. |

The renderer preserves each fragment model's original origin and inherited
knight scale. It releases fragment materials when they expire or a saved death
is rewound. One-shot guards prevent a retired cohort from restarting. Restoring
an old corpse does not create meshes: the maximum possible fragment lifetime
is six seconds (less than four before settling, plus the axe's two-second fade).
Replay steps remain bounded to 50 ms, with at most ten collision retries per
piece and step. These visual fragments never become gameplay blockers.

The native evidence is retained in
`temp_work/enemy-parity-2026-10-13/knight-debris-rea.json` (REA IDs
`ev_8d7053b36e2dc79df046195f5953a53a5fa6b9403e5c8f1573f3cccf06c1769c`
and `ev_e673e25114a1afce985fec5eb5e1905b7c3a7ca4d034e73c4d7ace86382712dd`)
and annotated constant/disassembly extracts under its `knight/` sibling.
This is static executable and original INI evidence, not an observed original
runtime comparison. The existing portable BSP collision tolerances, deterministic
local RNG and integration-step differences described in
[native debris recovery](debris-native-recovery.md) remain. New saves serialize
each armour fragment's actual position, velocity, rotation, orientation,
contacts, settling and fade state. Restoration draws those positions directly;
only future motion collides against the restored world. Older saves still
replay the bounded cohort. See [effect save continuity](effects-save-continuity.md).

Save data includes the death start and smoke launch positions/velocities. Loading during the effect resumes its existing age; loading an expired corpse does not restart it. Older saves retain their existing corpse expiry and do not acquire a new smoke burst. An explicit enemy freeze outside a cutscene pauses these clocks. During a cutscene, already defeated enemies finish their death animation, fade and smoke while living combatants remain frozen. Rendering the same time repeatedly does not advance or emit particles.

Focused verification (no packages built):

- `node --test tests/enemy-death-effects.test.mjs`: native fade timing, paused clocks, mid-fade and expired save restoration, material isolation, ghost alpha preservation, native smoke launch/trajectory, redraw stability, witch exclusion, and knight breakup restoration.
- `node tests/enemy-death-scenes.mjs`: Chromium renders the original zombie, ghost and spider actors through actual fatal-hit/death handling, mid-fade, retirement and save restoration. Confirms purple smoke pixels, independent materials, stable repeated redraws and no browser/HTTP errors.
- Exact pixel comparison confirms the imported 64 × 64 RGBA smoke texture matches the two original BMPs (alpha range 0–254).
- Knight recovery: `node --test --test-name-pattern='knight' tests/enemy-death-effects.test.mjs` checks all nine original part settings, source volume, upward speed range, gravity, independent lifetimes, the axe-only fade setting, save-age replay, redraw stability and material cleanup (2 focused tests).
- The isolated Castle browser scene also passed with the imported knight and nine armour actors: finite moving poses, visible original armour textures, stable repeated redraws and matching mid-breakup save/rewind positions. No browser errors were reported. Retained evidence: `temp_work/enemy-parity-2026-10-13/scenes-1791928932976/report.json` and `knight-armour.png` in that folder. No user profile or save was modified.

Rendered examples: `artifacts/enemy-death-alive.png`, `artifacts/enemy-death-defeated.png`, `artifacts/enemy-death-fading.png`, `artifacts/enemy-death-gone.png`, and `artifacts/enemy-death-restored.png`; numerical report: `artifacts/enemy-death-scenes.json`.

The 26 October smoke follow-up ran six focused smoke/fade/save checks and an isolated hardware-WebGL comparison of the shared instanced billboard against directly constructed native quads. All twelve comparisons (smoke and spout selectors, six camera directions including vertical and rolled views) matched pixel-for-pixel, with no WebGL/shader errors. This checks the recovered geometry against the port renderer, not against original-game screenshots. See the follow-up document for retained evidence and boundaries.

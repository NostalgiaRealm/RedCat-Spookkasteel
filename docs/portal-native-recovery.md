# Native portal particle recovery

This replaces the earlier analytic teleport sparkle streams with the recovered
`CRTeleporterFx`/`CParticle` state machine in `src/teleporter-effects.js`.
The source of evidence is the installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Addresses below are virtual addresses in that executable. No replacement
artwork or extra portal entities are introduced.

## Geometry and sequence

| Native code | Recovered behavior |
| --- | --- |
| `0x471c62–0x471c96` | A pool of 250 ordinary particles and five special orbit particles. Records have stride `0x144`. |
| `0x475030–0x4751ec` | Trace vertically from the authored origin to find the floor and ceiling, with a ceiling fallback 200 units above the origin. |
| `0x475650–0x475710` | Read four named corner waypoints even when the entity's `NumberOfWayPoints` is zero. |
| `0x471a90`, `0x471ac0`, `0x471b60` | Radius contraction takes `7 × .3 = 2.1` seconds. Special particles live `7 − .2 = 6.8` seconds, followed by a 300 ms terminal flash. |
| `0x475475–0x475582`, `0x47ea90–0x47ecd0` | Five X/Z orbits start with phases `2π × index / 5`, rotate at −7.5 radians per second and contract from radius 100 to 10. Contraction finishes before the orbit lifetime ends. |
| `0x47279f–0x4727cd` | An energy front descends from the ceiling at 200 units per second. |
| `0x47463e–0x4748c8` | Each beam is one straight camera-facing energy quad. Its X/Z follows a special orbit, its top remains at the ceiling, and its bottom follows the descending front. The native 20-unit basis plus half-unit template produces an approximately 41-unit width. There is no segmented helical beam mesh in this routine. |
| `0x474421–0x474430` | Energy tint is RGB 210/210/255. Per-particle alpha subsequently replaces the initial vertex alpha. |
| `0x474541–0x4745e0` | Shared energy UV offset initially advances by .01 per render until +.03, then scrolls downward continuously. There is no lower reversal. Top/bottom V are `.03 + offset` and `.97 + offset`; the energy texture repeats. |
| `0x475910–0x475bc9` | The original `blast` floor sprite starts when the front reaches the floor. Its half-size is `50 × (.5 + 1.3 × remainingLifetimeFraction)` and opacity is 100/255. |
| `0x475bd0–0x475fc0` | The original `fleuri` terminal sprite grows from half-size 8 to 80 over 300 ms. It is camera-facing and travels from 10% to 95% along the origin-to-camera vector. The terminal phase ends by dispersing the ordinary particles. |

The floor flash is horizontal; the terminal flash is a billboard. Treating both
as small horizontal rings obscured the native closing flash. Beams previously
extended upward from the floor and were too narrow. Their recovered ceiling-to-
front span and width now make the sweep visible before it reaches the ground.
The effect uses the imported original `spark8`, `energybeam`, `blast` and
`fleuri` color/alpha pairs.

The internal descending coordinate is allowed to reach ten units below the
floor (`0x47279f–0x4727cd`), but the renderer clamps the visible endpoint to
the floor and starts the blast on contact (`0x4745e9–0x474628`). The portable
geometry applies that same visible clamp. The blast centre explicitly uses
`floorY + 1` in native code (`0x475a40–0x475a44`).

## Persistent ordinary particles

The standby timers are 750 ms and 2500 ms (`0x472cd0–0x472ddf`). The shorter
timer takes priority when both expire. An available group of four slots emits
at the four authored corners (`0x474a20–0x474c63`). Standby particles live for
three seconds, accelerate upward, and retain each reused slot's eased ±.8
horizontal wiggle. `CParticle::Start` resets velocity and timers, but does not
reset this oscillator (`0x47e710`). The native linear integration multiplies
acceleration by 32 before updating velocity and position (`0x47e090`).

`Show` ignores another request during an active sequence and changes already
living corner particles to Seek mode, targeting the first special orbiter
(`0x475720–0x475904`). They live another .9 seconds. The recovered Seek/Hover
integrator is shared with Fleurifee: it applies its native acceleration and
damping, integrates the position, and only then caps stored velocity at 75.
The order matters for convergence (`0x47e850`, `0x47ece0`).

During Show, emission uses a truncated 7 ms priority interval
(`750 × .01`) and a secondary interval of 1375 ms (`2500 × .55`), with at most
one newly occupied slot per update (`0x474c66–0x474f16`). Orbit particles have
a 50-second lifetime and 50-second fade duration, rather than the earlier
short-lived analytic stream. They rotate at 5.5 radians per second on a
30-unit ring. Two opposite centre heights move between the floor and 75 units
above it at 25 units per second. Only slot indices divisible by three continue
to follow their centre height; other particles retain the height at which they
were born (`0x474ea6–0x474ee8`).

Color channels cycle between 20 and 255 at 500 units per second
(`0x474910–0x4749a0`). Rendering selects a new green/blue tint at every third
slot and retains that tint for the following live slots
(`0x473ed2–0x473f51`). Ordinary sparkle quads have an approximately nine-unit
side, recovered from the four-unit scaled basis and template quad.

At the end of the terminal flash, every live particle changes to linear mode
with an outward velocity of 110 units per second, measured from the authored
portal origin. Its life becomes three seconds, with a .9-second fade delay
and 2.4-second fade duration. Restart preserves its current alpha and wiggle
(`0x474f20–0x47502d`, `0x47e780`). The rest emitter then resumes while this
burst disperses. This is an actual trajectory transition, rather than a
replacement circle of particles appearing after the flash.

## Timing, saves and renderer boundaries

The portable implementation steps recovered Euler operations at 60 Hz.
Rendering only reads geometry; repeated visibility queries neither emit extra
particles nor advance time. This gives the same trajectories at 30 and 144 FPS
and prevents refresh-dependent pool growth. The original emitter and UV
scroll were update/render dependent, so this adaptation is deterministic
rather than bit-identical to every native frame rate.

Each portal retains its pool across updates. Gameplay snapshots call its
snapshot callback only when saving; restoring a current snapshot requires no
replay. Inactive slots store just the preserved wiggle value and direction
(or `null` for untouched slots), since spawning resets their other dynamics.
This avoids recording obsolete positions and velocities in every minute of
save history. A completely dispersed 250-slot effect occupies about 7 KB,
instead of retaining about 90 KB of expired records. Active slots retain the
full state needed for exact continuation. Malformed snapshots fall back to
reconstruction. Legacy saves without a pool use at most six seconds of idle
warmup and one effect/burst lifetime, never the entire saved level age. The old
completed age of exactly seven seconds migrates to completed, without restarting
the recovered closing flash or loop.

World rendering still owns floor/ceiling traces, original texture batches,
light allocation and audio. Davi-Script/motion events own RedCat's relocation
and visibility. The effect does not relocate the player or invent a teleport
completion timer for gameplay. See [portal audio recovery](portal-audio-native.md)
for the separately recovered sound arguments and terminal cue.

## Remaining differences

- Native light color 255/255/25 and radius 110 are recovered at
  `0x4727df–0x472836`. Its radius multiplier is initialized to one. Its light
  position field is initialized to zero and no subsequent position assignment
  was found. The remake retains its functioning authored-origin placement
  instead of reproducing an unexplained world-origin light. Its illumination now
  uses the recovered [BSP lightmap falloff](world-light-falloff-research.md) and
  [actor lighting](actor-lighting-native.md), rather than the former generic
  Three.js falloff. The eight-light world rendering budget remains a portable limit.
- Billboard basis construction, integer alpha rounding, floating-point
  precision and Genesis clipping are not byte-identical. Recovered sizes,
  phases, trajectories and artwork replace the substantial approximation;
  this does not claim pixel-identical rendering.
- Hover randomness uses the recovered MSVC generator with a per-effect seed,
  not the native process-wide random stream. Other native random consumers
  therefore do not perturb the portal.
- Old saves can only reconstruct an approximate prior standby phase because
  they did not record particle history. Newly saved pools continue exactly.

Focused verification: `node --test tests/teleporter-native.test.mjs` checks
the strict standby timer, Seek transition, 250-slot bound, orbit-centre reuse,
2.1-second contraction, native beam span/width, floor blast, terminal camera
interpolation, 110-unit outward burst, continuous UV scroll, exact snapshot
continuation, compact expired-slot reuse, frame-rate independence and bounded
legacy restoration. Renderer integration has separate portal scene checks.

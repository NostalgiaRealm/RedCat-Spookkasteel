# Native death smoke and Jester teleport follow-up

Implemented 26 October 2026 from the full original export and instruction-level
checks. Original `RcHcGame.dat` SHA-256:
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
The original installation was read only. No build, release or player save was
changed. Sound/music scheduling, hearing ranges, fixed visual update cadence,
local random streams, streaming and performance limits remain intact.

## Ordinary enemy death smoke

The earlier implementation had the correct artwork, fifteen particles, tint,
bind-bone launch direction and speed. Its continuous acceleration/fade and
view-direction billboard were approximations. They have been replaced with:

- The shared native lifetime, fade-delay and fade timer ordering, with timers
  armed on their first update and strict expiry after the deadline. The initial
  50% particle alpha is `127/255`; float32 conversion of 6.2 seconds produces
  a 6199 ms fade, rather than 6200 ms.
- Velocity-before-position acceleration using `(0,0.05,0) × 32`, native float32
  stores, and the millisecond deltas of the preserved 60 Hz visual clock.
- Radius derived from the particle's stored remaining-life fraction, 20 to 60.
- A camera-position billboard with the original UV corners and the half-unit
  XY template-quad offsets. Each particle faces its vector to the camera;
  camera roll does not replace that native basis.

`src/enemy-death-effects.js` computes the common upward motion, size and alpha
table once. Existing launch anchors/velocities and saved age select a sample.
This has constant bounded work and adds no historical replay, per-enemy clock
allocation, draw calls or collision queries. Native launch anchors are still
raw **bind** attachments selected every second bone, wrapping before the last;
they were verified and deliberately left unchanged.

Actor-body alpha is a separate floating-point five-second fade and was not
quantized to the particle's integer byte alpha. Ghost translucency, material
isolation, frozen clocks, non-colliding corpses and immediate scripted Witch
retirement remain intact.

## Jester teleport

The same review found that the old analytic Jester spiral had a reversed orbit
direction, a radial transition twice as long as the original, immediate alpha
interpolation, and emission that bypassed the native timer rearming order.

`src/jester-teleport-timing.js` now records both finite fifteen-slot sequences
once. The radial timer is **500 ms**, independently of the 1000 ms lifetime.
Particles use the native 100 ms delay before their 1000 ms alpha fade; alpha
starts at byte 63 for departure and byte 254 for arrival. Emission checks its
19/29 ms timer, starts only one slot when expired, and arms a fresh deadline on
the following update. Rotation advances before positioning and Genesis's Y
rotation maps positive X toward negative Z. The parent writes height using the
previous particle lifetime fraction before that particle updates.

At this fixed 60 Hz cadence, the first birth is at 50 ms and the last at 750 ms.
The last particle is live at 1750 ms, expires at the next update, and the effect
controller retires on the following check. `boss-ai.js` now uses the table's
107/60-second boundary for both normal cleanup and restored effects. The old
1.5-second cutoff truncated valid particles.

Origin, phase and age remain the save representation. No new lifecycle event
or audio cue is emitted when reconstructing these deterministic samples. Old
saves evaluate the corrected visual curve at their existing age; records that
old versions already discarded cannot be recovered. Floor tracing remains the
existing portable-world trace; this review does not claim native collision
equivalence for that query.

## Native evidence

The readable full export is in the sibling `RC_ORIGINAL_DECOMPILED` folder.
Individual functions are under `decompiled/RcHcGame.dat/functions/`; identifiers
and C types in that output can be inferred, so the field offsets and arithmetic
below were checked against original instructions.

| Address | Confirmed behavior |
| --- | --- |
| `0x46e6c0`, `0x46e660` | Death-smoke particle configuration and shared Tick calls. |
| `0x46e8b0` | Fifteen launches from normalized raw bind attachment translations. |
| `0x46e230`, `0x46e36a` | Life-fraction radius, RGB `(211,63,255)`, integer alpha. |
| `0x46e4b0`, `0x477d50` | Per-particle camera basis, quad offsets, UV corners. |
| `0x47dd60`, `0x47e710`, `0x47e7b0` | Independent lazy lifetime/delay/fade clocks and particle start. |
| `0x47e090`, `0x47e301`, `0x47e3a9` | Mode-1 acceleration and velocity-before-position float stores. |
| `0x403aad`, `0x4247a0` | Body alpha remains a float, unlike particle alpha. |
| `0x476800`, `0x476830`, `0x476850` | Jester radial duration `1 × 0.5`, emission intervals 29/19 ms. |
| `0x4775b0`, `0x4777b0` | Fifteen phase angles, one-second life/fade, phase-specific parameters. |
| `0x477410` | Jester birth rearming, previous-fraction height, last-slot retirement. |
| `0x47ea90`, `0x5b3130` | Independent radial clock, angle-before-position, negative-Z Y rotation. |
| `0x476e90`, `0x477260` | Jester size, color/alpha and matching native billboard geometry. |
| `0x46f000`, `0x46f380` | Smoke's additional update/draw calls are the existing score counter, not another missing smoke layer. |

## Focused verification

Evidence and reproducible probes are retained under
`temp_work/native-behavior-followup-2026-10-26/effects/`.

1. **Original-byte execution:** `native_death_smoke_probe.py` and
   `native_jester_probe.py` execute the original constructors, emitter/timer
   and particle functions in private Unicorn memory. The Jester probe supplies
   the verified phase fields and flat-floor anchor instead of running actor
   lookup or a Windows world. These are bounded kernel comparisons, not a
   full original-game runtime or screenshot comparison.
2. **Differential results:** `compare-native-effects.mjs` compares 422
   death-smoke ticks and 212 Jester frames (1,830 live-particle samples).
   Counts, active/expired states, every alpha byte and radius-derived size
   agree. The death-smoke zero-launch upward trajectory agrees exactly.
   Jester's maximum position difference is **0.0002861023 world units**, from
   JavaScript versus native x87/float32 transform arithmetic. Full details are
   in `native-effects-differential-report.json`.
3. **Rendering:** `check-smoke-billboard.mjs` draws independently constructed
   native quads and the actual shared instanced shader. Both death-smoke and
   existing spout selectors match pixel-for-pixel in twelve front, elevated,
   below, vertical and rolled/off-axis views. Hardware ANGLE on AMD RX 6700 XT
   reports no WebGL or shader errors. Results are in
   `smoke-billboard-report.json`. The first launch hit Chrome's Unix socket
   path-length limit; the retained fixture uses the short project-relative
   `temp_work/t` path and the successful run is the reported validation.
4. **Source regression checks:** six focused smoke/fade/freeze/save/material
   tests, three Jester timing/transform/save tests, and two Jester lifecycle and
   unrelated-projectile-isolation checks passed. The old hardcoded death-clip
   assertion was updated to check a five-second fade after the actual sampled
   native animation duration. No unrelated gameplay suite was rerun.

The fixed 60 Hz cadence remains an intentional portable choice, so arbitrary
historical native frame-rate trajectories are not claimed. Death smoke retains
a shared common acceleration table plus analytic initial-velocity translation;
rounding each arbitrary world-space position after every native step can still
differ slightly. The zero-launch differential probe isolates the common motion
that the table actually promises. Existing save anchors are preserved, and
already expired older corpses do not restart.

# Smoke/flame runtime audit

Date: 2026-10-05. Scope is `EffectSpoutEntity` and the intentional hand-torch enhancement. This excludes sounds/music and other particle systems such as combat, death, debris, portals, and Fleurifee.

## Shipped data versus unused generality

The retained `spout-authored-inventory.json` contains 139 authored spouts: Forest 1, Castle 77, Graveyard 29, Caves 17, Tower 15. Of these, 125 use flame artwork and 14 smoke artwork. All color endpoints are white, all `DiscardOnLowEndPC` values are zero, and none exposes bounce fields or authored model attachment. Generic CParticle does support collisions and wiggle, but CRcParticleSystem explicitly disables both; adding traces or bounce to smoke/flames would add CPU cost without restoring this native path.

Important actual cases:

- Forest `ufo_rook`: blue smoke, Gravity .1, life 3–9 seconds, Scale 2, intervals .2–.3 seconds.
- Graveyard `endsmoke`: brown smoke, initially disabled, Gravity 0, life 3–10 seconds, infinite emitter lifetime.
- Caves `watersplash01`–`07`: blue smoke, initially disabled, Gravity 25, life .9–1 second, Scale 10, AngleMax 60, no authored direction. These expose incorrect gravity and sprite scale particularly clearly.
- Tower `ketel01`–`03`: red smoke, life 2.5–5 seconds, Gravity .1, Scale 3, alpha 50→0, interval .5 second.
- Tower `ketel04`: green smoke, the same lifetime/alpha range, Scale 5, missing direction.
- Tower `flash` (`EffectSpoutEntity15`): green smoke, initially disabled, emitter lifetime 1 second, particle lifetime 1.9–2 seconds, Gravity .5, Scale 15, size 50→100, alpha 100→0. It is the only finite emitter in shipped data and needs tail preservation when saving/loading.

## Existing approximation gaps

Before this work, births used a fresh random cone and a uniform disk, initial velocity had no native 3x multiplier, particle gravity used analytic acceleration of only Gravity, sprite size used a generic 10-unit multiplier, alpha and size shared one life fraction, and particles used screen-aligned billboards. Native instead has a fixed 15-slot pool, slot-specific random templates, world-XZ square spawn offsets, a 3x launch speed, semi-implicit acceleration of 24*Gravity, independent fade timers, and radial camera-facing quads. Exact formulas and addresses are in `particle-base-contract.md` and the independent `native-spout-contract.md`.

## Preserve intentional torch behavior

`src/torch-flames.js` adds missing fire to animated hand torches and attaches emission to the sampled BONE03 cap. This is explicitly requested behavior beyond the original. Retain current posed cap +3Y emission position, upward emission, inherited enable/visibility, and per-torch pooled light selection. Free particles already emitted should keep their world positions as the hand moves. Leave stationary lit fixtures alone.

The hand-torch visibility/range filter is a performance decision, not authored activation. Avoid conflating a camera leaving range with rewinding the native emitter timer or reseeding its pool unless that is an explicit rendering approximation. Synthetic emitters need the same bounded lifecycle as authored ones.

## Minimal practical architecture

Use a pure per-spout bounded pool with configuration and 15 random templates parsed once; reuse position/velocity arrays and track active slots. Birth/reset and timer state should be explicit, with no trace/collision work. Keep the existing per-artwork instanced draw batches; a per-instance spout flag selects native radial facing without extra materials, draw calls, or per-particle light objects. This fits low-end devices substantially better than separate meshes or CPU vector allocations per particle.

A fixed simulation step can stabilize recovered semi-implicit physics and burst rates across refresh rates; document that cadence as a port choice rather than claiming the original used that step. Bound warm-up and preserve pool/timer state for saves, especially a finite emitter's live tail. Parse colors and other configuration outside the particle loop.

## Focused checks to add/run

- UFO smoke: bounded 15 slots, original long-lived tail, square initial offsets, launch/gravity scale.
- Caves waterfalls: Gravity 25 yields downward acceleration 600 world units/s², large original smoke artwork.
- Tower `flash`: births stop at emitter expiration while active particles remain; save/restore preserves the tail and does not rearm the one-second event.
- Alpha timer: initial integer alpha, separate delayed fade, strict native timer deadline, size interpolation driven by lifetime.
- Flame re-enable: no unbounded catch-up and no reseeded templates on every birth.
- Hand torches: moving emission origin, emitted particles stay in world space, unchanged stationary fixtures.
- GPU smoke/flame rendering: radial facing above/below the emitter, UV orientation, one-unit world-XY corner offset, finite vertical-camera fallback, and non-spout billboards unchanged.

No broad previous test suite, audio test, or package build is needed for this scoped work.

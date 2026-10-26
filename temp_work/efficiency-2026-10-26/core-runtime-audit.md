# Core runtime efficiency review — 2026-10-26

This review covers runtime/rendering/gameplay source, separately from the main task's UI, tools, packaging and documentation review. Original game installations and live player profiles were not modified. No release packages were built.

## Implemented

- `src/spatial-audio.js`: evaluate each physical door's audio portal once per update. The original area metadata stores two directed links for every physical portal in all five shipped levels. Reuse the existing portal array and retain its connectivity cache and diagnostic key until a state actually changes. Current door motion, visibility, and material opacity are still read on every update.
- `src/spatial-audio.js`: do not resend unchanged left/right `AudioParam` gains. Cache requested double values, because reading back Web Audio's rounded float32 value is not a reliable equality test.
- `src/audio.js`: still calculate distance, obstruction, native gain and fade every update, but assign media/buffered volume only when it changes. Read the element's actual volume so externally altered volume is corrected. Traverse the existing sound set directly for `pickupsPending` rather than allocating an array.

No hearing ranges, gain formulas, PVS policy, obstruction cadence, replay scheduling, sound selection, music transitions, physics, collision, campaign rules or serialized save fields were changed.

## Evidence

`core-audio-benchmark.mjs` compares the pre-change committed modules with the new modules using instrumented audio backends. `core-audio-benchmark.json` records the results. For 40 stationary positioned voices over 600 updates (five seconds at 120 Hz), gain assignments fall from 72,120 to 120; all 72,000 redundant per-frame assignments disappear. Complete diagnostic audio snapshots and serialized audio save states are identical. These are deterministic operation counts, not an FPS promise or a physical audio-device benchmark; the included elapsed times are illustrative only.

For the same 600 updates, per-level material lookups fall by exactly half:

| Level | Directed portal links | Physical doors | Before | After |
| --- | ---: | ---: | ---: | ---: |
| Het Bos | 20 | 10 | 12,000 | 6,000 |
| Het Kasteel | 62 | 31 | 37,200 | 18,600 |
| Het Kerkhof | 38 | 19 | 22,800 | 11,400 |
| De Grotten | 102 | 51 | 61,200 | 30,600 |
| De Kasteeltoren | 4 | 2 | 2,400 | 1,200 |

Focused checks: **35 passed**, recorded in `audio-checks-final.log`:

- New gain write-count and immediate-setting/movement/fade tests.
- All five real portal graphs compared against the previous decision logic, including opening/closing, mid-motion, hidden surfaces and transparent models; every area pair's connectivity is checked.
- Original stereo law, PVS and wall obstruction.
- Existing playback save/restore, pending media seeks, delayed replay, dialogue FIFO, native slow portal playback and native music fade tests.

Four existing assertions still expected hearing ranges from before the user's intentional range increases. `audio-baseline.log` reproduces all four failures with pre-edit committed source (retained under `audio-baseline/`). The tests now use the current configured 175.5 m chapter radius, configured default attenuation and cave far cutoff, and verify exact forest emitter gains rather than assuming that distant forest emitters must be below the old fixed volume threshold. Runtime hearing settings were left unchanged.

## Other inspected systems retained

The source inventory and targeted allocation/search scan covered world loading and drawing, streaming, actor residency and texture ownership, BSP/actor collision, gameplay/script lookup and update loops, animation/motion sampling, navigation and pursuit, lighting/shadows, and particle/debris state. Detailed follow-up reads included their update and disposal paths.

No speculative changes were made to these systems:

- World/actor streaming already has bounded upload work, cached bounds and room/PVS admission, shared texture references, delayed release and separate always-live script/collision data. Eliminating its state passes could break admission while scripts move doors.
- Collision uses ordered candidate selection, cached static/dynamic broadphase data and explicit mutation invalidation. Keeping candidate order matters for equivalent contact results.
- Navigation already yields expensive route checks with a budget and stops candidate searches after usable origins/terminals. Removing validation or distance ordering would alter native movement.
- Animation prepares imported tracks once and updates shared bone buffers; offscreen/idle work is already bounded. Authored clocks must still advance even when rendering is suppressed.
- Lighting reuses per-actor sampling caches, a Sun spatial index and static obstruction atlases. Effect/debris implementations already pool objects, preserve native fixed-step clocks and save particle state.
- Some small array allocations remain in vector math and one-time asset preparation. Changing arithmetic order or retaining mutable results without a demonstrated benefit would introduce more risk than the observed audio changes.

This is a bounded source review plus focused behavioral checks, not proof of complete native equivalence, exhaustive gameplay validation or absence of every possible optimization.

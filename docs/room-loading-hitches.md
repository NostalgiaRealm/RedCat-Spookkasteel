# Reducing room-loading hitches

Implemented on 19 October 2026. This builds on
[room-aware streaming](room-aware-streaming.md); it does not widen the selected
room graph or restore loading unrelated nearby floors.

## What caused the spikes

Image loading was asynchronous, but much of the expensive work still happened
together on the main thread. The old world-streaming vertex allowance did not
apply to visible chunks. All completed visible chunks could copy their vertex
and lighting arrays and create their indices in the same update. Texture and
buffer GPU allocations were then deferred until the first real draw. Actor
images likewise became ready together without preparing their GPU storage.

The retained Castle basement route reproduced **47 world chunk activations and
66 buffer allocations in one frame** before this change. These counts describe
the measured route, not every level or device.

## Preparation policy

- `src/streaming-work.js` provides one shared queue for world textures, actor
  textures, world chunk construction and actor buffer preparation. Normal
  animation frames execute at most **three jobs** with a **1.5 ms time allowance**
  checked between jobs. A single upload/copy is indivisible and can exceed the
  allowance; this is not a hard frame-time or FPS guarantee.
- Visible work takes priority over surrounding preloads. Rooms behind opaque
  closed doors remain preload candidates without blocking the complete current
  view. Open apertures and see-through gates still require their visible
  neighbors to be ready. Invalid inspection cameras keep conservative readiness.
  Pinned player artwork
  has priority over ordinary actor preloads. Queue entries recheck their owner
  before allocating graphics, so a departed room cannot be resurrected by a
  late image completion.
- World and actor textures use the renderer's public `initTexture()` before
  being marked ready. Image decode completion is awaited as part of loading.
  Network/decode concurrency remains bounded.
- World geometry is copied and indexed within the queued job. World and actor
  buffers are uploaded with a zero-count private render to a **1×1 target**.
  This uploads vertex/index storage without drawing triangles to the screen or
  calling the real object's animation/lighting callbacks. The displayed target
  and renderer state are restored afterward.
- Shader variants are compiled under the level-loading screen, after lighting
  patches have been installed. One tiny substitute map allows compiling
  distant world materials without fetching their artwork. Parked actors keep
  their existing lazy texture handles; compiling does not fetch their images.
- Actors now use the same widened preparation frustum as world chunks, within
  the existing distance and room limits. They can prepare before a camera turn
  exposes them, while actual rendering still uses the normal camera frustum.
  Smooth camera motion also supplies up to **0.4 seconds / 192 units** of
  preparation lead within the same admitted rooms. Preparation measures from
  the nearer current/predicted camera position, ahead of the unchanged
  2048-unit drawing limit. Teleports, steps of 128 units or more, and gaps of 200 ms or more
  do not extrapolate. This changes preparation timing, not draw distance.
- GPU eviction invalidates buffer preparation. Returning assets must prepare
  again instead of silently doing their first upload in the displayed frame.
  Shared resource owners and player protection remain in force.
- Background preparation does not use the present camera leaf's PVS as a
  prediction of the next leaf. Drawing still applies the original PVS. The
  current room and admitted, open-connected rooms finish preparing in all
  directions within the same range, below near/visible work in priority.

The per-level `texture-transparency.json` sidecars distinguish actual cutouts
from images merely capable of color keying. The Castle wooden-door bitmap is
fully opaque even though `colorKey` is true. The metadata is reproduced by
`tools/import_levels.py` directly from the native indexed pixels. Existing PNGs
and level geometry are unchanged; there is no runtime canvas pixel readback.

Explicit loading and test `settle()` paths drain the same queue while yielding
between batches. They make progress before the game owns a frame loop and do
not exhaust a chain of microtasks without allowing the loading screen to paint.

## Behavior preserved

Drawing eligibility, doorway connections, whole visible large rooms and drawing
distance remain unchanged. A bounded directional preparation strip is described
below. Collision, scripts, buttons, enemy paths,
animation clocks and audio scheduling do not belong to this preparation queue.
Unrelated rooms still release their graphics when rejected. Recently admitted,
still-connected rooms have the bounded preparation grace described below. Shared/global
artwork and existing decoded-image grace periods remain intentional exceptions.

A genuinely uncached camera cut can still need a short loading hold. The port
continues to retain the last complete frame and pause simulation until
the new visible view is ready; it does not display partial scenery to hide a
loading delay. Splitting a burst into bounded batches can extend such a cold
cut's readiness time, while reducing its main-thread spike. Ordinary approaches
use the surrounding preparation margin to do that work before exposure.

## Forest lantern camera-turn follow-up

The later local save is in Forest area 1, near the first Fleurifee lanterns,
not the Castle basement used above. A left camera turn briefly admitted area 4,
then its projected door aperture left the view. The room's graphics were
immediately discarded. Eighteen frames later the same turn exposed that room
again and requested **seventeen required chunks at once**. RedCat never changed
room. This was room-admission churn, rather than an audio decode failure.

Preparation now has a separate mask from drawing/readiness:

- The current room and rooms admitted by the existing portal selector are
  completed in the background only if connected through open doors. This does
  not admit every room in the open graph. A never-admitted, unrelated room
  stays unloaded.
- A previously admitted room stays prepared for at most **twelve seconds**
  after its aperture leaves the view, while the anchor room stays the same and
  the connection remains open. Closing that connection or changing anchor
  drops this extra preparation immediately. The 2048-unit nearest-bounds limit
  still applies. Closed neighbors keep only the existing near/ahead margin.
- The exact drawing mask, required-view mask and PVS do not expand. A retained
  room can hold buffers/maps without submitting any of its artwork. Actor
  preparation follows the same rule, using unpadded authored artwork bounds.
- Background work has priority 0, near/ahead work 1, required visible work 2,
  and pinned player maps 3. Both pending fetch queues and the shared GPU/CPU
  preparation queue honor these priorities; the three-job frame limit remains.

This intentionally trades bounded memory for fewer repeat allocations during
camera turns. It does not restore distance-only loading or keep unrelated
floors resident.

The old readiness gate also paused and recreated every playing audio source
on the first incomplete graphics frame. It now leaves audio uninterrupted for
brief waits. A sustained wait pauses audio once, when the existing **250 ms**
loading overlay appears, and resumes only that gate-owned pause on readiness.
Simulation, recovery and save clocks remain held throughout; no catch-up step
is applied. Explicit pause, Android suspension and asset-error pauses remain.
No sound selection, music scheduling or ambient distance was changed.

An isolated browser restored a read-only copy of the local Forest save and ran
the actual main loop for 420 frames: left sweep, hold, return, then repeat.

| Measurement on this route | Before | After |
| --- | ---: | ---: |
| Held main-loop updates | 12 (two groups of six) | 0 |
| Audio mixer pauses/resumes | 2 / 2 | 0 / 0 |
| World chunk requests during the route | 98 | 93 |
| Largest measured update/render CPU slice | 25.6 ms | 5.6 ms |
| 95th percentile update/render CPU slice | 3.3 ms | 3.8 ms |

The after run had no incomplete views or browser errors. Its buffered music
kept the same playing source through both turns and the native loop boundary.
This verifies continuous scheduling, not an externally recorded audio waveform
or an FPS guarantee on another machine. Background work can increase ordinary
CPU slices while removing loading spikes. Streaming work stayed at at most three
jobs per frame. Peak world residency was 14,295 of 52,260 vertices; final
residency was 192 of 703 chunks and seven world textures. The distant Forest
Brutus actor never became resident. Baseline residency was not recorded, so
these figures are not a before/after memory-reduction claim.

Ten new focused tests cover cold turns, hidden PVS cells, actor maps/buffers,
unchanged draw masks, exclusions/range limits, preparation budgets and held-room
expiry, portal closure and anchor changes. The thirteen room-selection contract
cases also pass, including pending-load cancellation and remote cameras.
Four real-main-loop audio fault
checks cover short/sustained waits, explicit user pause and asset errors.
Source snapshots, copied save, harnesses and reports are retained in
[`temp_work/lantern-hitch-2026-10-19/`](../temp_work/lantern-hitch-2026-10-19/),
including [the paired results](../temp_work/lantern-hitch-2026-10-19/camera-turn-comparison.md)
and [compact measurements](../temp_work/lantern-hitch-2026-10-19/camera-turn-verification.json).

```sh
node --test tests/room-turn-preload.test.mjs
```

## Forward-walking range boundary follow-up

The next local save was farther into Forest area 4. Actual forward input moved
RedCat from approximately `[-2266.03, -159.95, 2886.15]` to Z 2031 without
no-clip or position edits. Six different chunks each produced a one-frame
readiness hold. Their first request happened at **2045–2048 units**, already
inside the drawing radius. Their room, area 8, was already admitted and marked
for preparation throughout. There were no cold image requests: decoded maps
were available, but asynchronous buffer activation could only finish on a
later frame. The queue jobs took at most 0.2 ms on this route, so reducing
their execution budget would not fix this late-request boundary.

This is repaired in the shared streaming code for every level:

- Use the nearer distance to the current camera or its existing predicted
  travel position for **all preparation range tests**, including whole-room
  background work. The existing lead is at most **0.4 seconds / 192 units**.
  This adds a narrow strip in the direction of smooth movement, instead of
  increasing the radius in every direction. At rest there is no extension.
- World chunks, moving brush artwork, managed actors and pooled-fragment map
  watchers use that preparation lead. Actual drawing and required-view tests
  continue to measure from the current camera with the same **2048-unit** cap,
  raw room masks and native PVS. Prepared artwork cannot draw early.
- Steps of at least 128 units and gaps of at least 200 ms do not extrapolate;
  remote/unknown views retain their established fallback. No extra graph hop
  or unlocked doorway is invented. Nearby unrelated floors remain excluded.
- Acquire all newly wanted world texture references **before** releasing
  departed chunks. The former order could drop the final pending-image owner,
  dispose/remove its identity and start the same decode again for the newly
  entered room. The new order transfers ownership within one update. Departed
  chunks still unload before activation/drawing; stale request guards remain.

The original near radius (576), retention radius/time (1152/twelve seconds),
three-job/1.5 ms preparation allowance and audio scheduling are unchanged.
The preparation-only hold from the lantern fix still applies. This follow-up
does not pre-render the whole level or keep an unseen final section resident.

The paired copied-save check runs the actual main loop for 420 frames, holding
forward for 360 frames. Results:

| Measurement | Before | After |
| --- | ---: | ---: |
| Held main-loop updates | 6 | 0 |
| Frames ending with an incomplete required view | 13 | 0 |
| World chunk requests | 15 | 15 |
| Audio mixer pauses / resumes | 0 / 0 | 0 / 0 |
| Final world vertices / chunks / textures | 13,782 / 194 / 7 | 13,782 / 194 / 7 |

The six formerly late chunks now request at distances of about 2092–2127
units, **17–24 frames before** first entering the unchanged drawing radius.
Their maps/buffers are ready at that boundary. No browser errors occurred and
the distant Forest Brutus actor never became resident. This measures the
specific source route, not an FPS guarantee on every browser or GPU.

Graphics-only forward/reverse doorway probes also cover two original BSP
connections per level, **1,094 frames across all five levels**. The before run
had two incomplete Forest views; the after run had none in any level. All five
gameplay/script snapshots match after restoring the probe pose. These probes
stop simulation and manually move the graphics-test pose: they are not a
physical campaign walkthrough or evidence that every puzzle was replayed.

Eight new focused cases cover forward preparation, current-camera drawing
limits, actor/fragment maps, unrelated floors, stationary/teleport fallback,
queue budgets and shared pending-image ownership during rapid room changes.
The shared-image regression fetched twice before the fix and once afterward.
No historical full suite was rerun and no release packages were built.

Retained source snapshots, copied save, test logs and paired browser reports
are under [`temp_work/forward-hitches-2026-10-19/`](../temp_work/forward-hitches-2026-10-19/).
See [the paired comparison](../temp_work/forward-hitches-2026-10-19/forward-walking-comparison.md)
and [verification data](../temp_work/forward-hitches-2026-10-19/verification-summary.json).
The actual-input repro is `forward-walk.mjs`; the separately labeled room
probes are `five-level-boundaries.mjs`. Each supports `--after` for current
source and defaults to the retained pre-change source overlay.

```sh
node --test tests/room-approach-preload.test.mjs
```

## Earlier Castle verification and retained evidence

Research, source snapshots, isolated browser profiles and before/after route
reports are retained in `temp_work/room-hitches-2026-10-19/`.

Focused tests cover shared budgets, priorities, cancellation, same-frame
eviction/return races, explicit loading, image/buffer readiness, GPU state
restoration, shared geometry ownership and camera-turn preparation. Browser
checks use the copied basement save and fixed doorway routes, with a separate
continuous-approach route. They measure asset work and completed-frame safety;
they are not a full campaign playthrough or an i3 hardware benchmark.

All five level starts and a remote Tower boss-room view also completed shader
preparation and rendering without graphics errors, shader warnings or script
errors. The Tower gameplay snapshot remained unchanged.

The final paired basement route used 1,306 manual frames and the same eight
doorway targets/returns with the ordinary collision-resolved camera. The
before server used six retained source files, including the exact original
room-selector file verified against its earlier SHA-256. Results:

| Measurement | Before | After |
| --- | ---: | ---: |
| Largest world chunk activation burst per frame | 47 | 3 |
| Largest GPU buffer-allocation submission burst per frame | 66 | 12 |
| Largest texture-upload submission burst per frame | 4 | 3 |
| Held frames with camera in a valid authored room | 2 | 0 |
| Held frames with camera in solid/unknown BSP space | 2 | 6 |
| Final resident world vertices | 3,429 | 3,429 |
| Final resident world textures | 10 | 10 |

All eight targets finished ready; no incomplete view was presented and no
browser errors occurred. The camera-inside-wall probes can hold up to four
consecutive frames after batching, versus one before. That conservative
fallback is retained rather than exposing missing geometry. These point probes
freeze script clocks and can cross shut doors; they do not establish a complete
physical walkthrough. The final actor margin prepares two more actors and one
more geometry, with the same twenty actors drawn.

The largest measured streaming/render CPU slice changed from 5.4 to 4.3 ms on
the test machine, but its 95th percentile increased from 1.5 to 1.7 ms. Do not
interpret this as a general CPU-usage reduction: preparation spreads allocation
work and moves GPU uploads ahead of exposure. Submission counts do not measure
GPU completion time or guarantee an FPS target on another device.

See the retained [paired results](../temp_work/room-hitches-2026-10-19/benchmark-results.md)
and [comparison data](../temp_work/room-hitches-2026-10-19/benchmark-comparison.json).

Run only this change's focused unit cases with:

```sh
node --test tests/streaming-work.test.mjs tests/streaming-room-work.test.mjs tests/streaming-texture-work.test.mjs
```

No release packages are generated for this work. Historical gameplay test
suites are not rerun.

# World graphics streaming by room and camera

The renderer now allocates world geometry by authored room and spatial section instead of
uploading one level-wide vertex buffer and submitting every material group.
This applies to all five levels and the shared desktop/web source.

The [room-aware follow-up](room-aware-streaming.md) keeps RedCat's current room
and immediate doorway neighbors eligible, plus farther views through aligned
open doors. Nearby unrelated floors/rooms are rejected before graphics are
requested. Remote authored cameras keep their own view. This supersedes the
old policy of preparing every spatially nearby section; loading distances stay
unchanged. Large rooms, including the complete Tower witch room, retain their
whole authored faces.

The [room-loading hitch follow-up](room-loading-hitches.md) spreads world/actor
texture installation and buffer preparation across a shared frame budget.
Visible work no longer bypasses that budget. Assets warm their GPU storage
before exposure, actors prepare around camera turns, and shader variants are
compiled under the loading screen without fetching distant artwork.

The [effect-buffer residency follow-up](gpu-effect-buffer-residency.md) adds
on-demand particle/beam draw storage and delayed release of inactive buffers.
It leaves world/actor streaming distances and gameplay objects unchanged.

The [19 October native loading investigation](native-asset-loading-and-camera-visibility.md)
traces original chapter/actor loading, per-face visibility and the separate
Direct3D texture cache. It found no equivalent camera-distance asset eviction
in the examined native paths, so the requested camera-local streaming remains.
Resident static chunks now also apply the recovered **per-face PVS gate**, rather
than submitting every face when any face in a chunk is visible. A reusable
index buffer changes only with the visibility set; vertex/lighting buffers,
moving brushes, sky coverage and CPU collision faces retain their existing
ownership. Focused source checks passed: seven unit cases and eleven browser
views across all five chapters, with no meaningful image changes. This did
not change the loading distances or rebuild releases.

## Residency and visibility

`source/world-streaming.js` partitions stationary scenery into 768-unit cells,
grouped by authored room ownership and original material. An authored face is never cut into pieces.
Each section has independent vertex, UV and lightmap-frame buffers, so evicting
it actually frees its GPU allocation. World textures are requested as sections
become needed, with four concurrent loads. Their final resident user releases
the GPU texture and decoded-image references.

Eligible room sections within **576 units** of the main camera are prepared ahead of time.
The radius was reduced from 1024 to 768, then by another 25% to 576 on
19 October 2026. That distance-only adjustment changed nearby preloading, including
actor texture preparation; chunk size, maximum view range, retention distance
and retention time remain unchanged. No tests were rerun for this tuning change.
A wider prefetch frustum prepares scenery
before a camera turn reveals it. The **2048-unit drawing range** stays unchanged.
Smooth travel also prepares from the predicted camera position, at most
0.4 seconds / 192 units ahead, so a chunk can finish before crossing the drawing
boundary. This is a directional preparation strip, not a larger radius in all
directions; stationary cameras have no extension. Sections beyond **1152 units** (previously 1536) can be
unloaded after twelve seconds without being needed. Room-ineligible world
sections unload immediately, even within that distance, except for the bounded
preparation-only hold of a recently admitted, still-open-connected room while
the anchor room stays unchanged. It lasts at most twelve seconds and never
widens drawing; portal closure or an anchor change cancels it. The grace period covers
ordinary return turns and circles instead of repeatedly discarding their
textures and vertex buffers. Distances use the nearest point on a section's
bounds, not its center.

The current room and admitted open-connected rooms also complete background
preparation within 2048 units of the current/predicted camera, regardless of viewing direction or
the present camera leaf's PVS. Closed neighbors retain near/ahead preparation;
unrelated and never-admitted rooms receive no such background work. Drawing
still uses the exact portal/PVS masks. See [the Forest lantern turn](room-loading-hitches.md#forest-lantern-camera-turn-follow-up).

Room transitions acquire newly wanted world-image references before releasing
departed owners, preserving shared pending decodes instead of cancelling and
fetching them again. World/actor buffers and pooled-fragment maps all use the
bounded travel lead. See [the forward-walking repair and five-level checks](room-loading-hitches.md#forward-walking-range-boundary-follow-up).

The original camera-leaf PVS data determines potentially visible static faces,
and the camera frustum determines which nearby sections can be seen. The
2048-unit limit prevents a distant chapter section from loading merely because
the camera faces it. This is a requested performance adaptation, replacing the
previous unlimited visible-distance policy. A nearby long wall or large object
is retained whole even when its centre or far edge exceeds the limit: distance
uses its nearest bounds. Faces and moving brush assemblies are never sliced.
The raw PVS area flood remains conservatively open, with an independent room
admission mask. A remote authored/long-transition camera without a valid PVS
leaf uses the camera frustum. Ordinary exterior inspections retain the valid
player-room PVS; an exterior no-clip player retains the last valid player room.
See [camera authority and fallback](room-aware-streaming.md#cameras-doors-and-exceptional-views).

Moving brush models retain complete groups and use their **current transformed
bounds**, without static-face PVS filtering. Their whole authored root-node box
must intersect a camera-visible BSP leaf, following Genesis3D's `ModelVisible`
check. All materials of a model share this result. These boxes are deliberately
larger than the artwork bounds; using tight per-material boxes can hide parts
of doors while they open. The result is cached until the pose or camera PVS
changes. Missing model-bound metadata retains conservative frustum-only
visibility, as does a camera outside valid PVS leaves.

This restores the check formerly bypassed for all moving brushes, which exposed
distant graveyard gates through a small transparent sky seam. See
[the original data, reproduction and focused checks](graveyard-sky-native.md#distant-gate-visible-through-a-sky-seam-2026-10-09).
The graveyard's depth-only sky boundaries are
retained, independently of static-face PVS. Liquid flags, lightmaps, alpha
masks and face winding remain unchanged.

`source/actor-render-residency.js` separately manages actor graphics. Nearby actors
are prepared, while only frustum/PVS-visible actors within the same 2048-unit
range are drawn and lit. Whole
assemblies use conservative transformed bounds. Room ownership uses the
authored artwork box before animation/frustum padding, so padding through a
ceiling cannot retain an upstairs prop. Distant or room-ineligible actors release
GPU vertex buffers and textures after their last active user leaves; shared
player, turret and debris resources are protected. Actor CPU geometry and
animation data remain available for gameplay queries.

Actor texture files are fetched/decoded on demand as well: creating a distant
actor's gameplay representation does not fetch its artwork. Materials retain a
stable texture handle, and the real image is loaded only when a resident actor
or nearby fragment reservation needs it. RedCat's shared artwork stays pinned.
Unused decoded images are dropped after twelve seconds and reloaded on return.
Shader preparation uses a tiny transparent placeholder under the loading screen;
view readiness prevents placeholder actors from appearing during play.

Non-drawable chunks and supported actor roots are kept under invisible identity
containers. The renderer can skip that whole branch instead of traversing every
remote mesh again. Direct collision, surface and attachment queries explicitly
refresh their current world transforms; parking never changes authored
visibility. Revealing a prepared actor restores its current pose in the same
frame. Static brush poses are applied only after a numeric change, while live
door/brush visibility and collision states are still checked every update.

Offscreen animated props advance their original animation clocks. A cached
mathematical envelope encloses every imported clip and transition without
sampling distant bones or refitting unchanged collision cells every tick.
It accounts for Hermite translation overshoot, normalized quaternion rotations
and the attachment hierarchy. This envelope only rejects irrelevant queries;
a query that reaches a prop builds its exact current bone pose and collision
triangles, including mounted moving props. Contact behavior stays exact.
Smoke/flame simulation also continues; whole offscreen clouds can skip their
per-particle rendering checks without changing particle state or sound.
Shared flame/glow/billboard and beam draws obey the camera range using complete
effect bounds, so distant glows do not float after their supporting art is
unloaded. Large halos and crossing ribbon tails remain whole.

## Gameplay and loading transitions

Collision, scripts, saves, AI and animation clocks remain independent of render
residency. Offscreen enemies and puzzles continue their authored behavior.
Streaming never changes an object's gameplay visibility or a brush's collision
state. The compact original world buffers remain in CPU memory for rebuilding
sections and tracing decals, including decals in distant rooms that were never
rendered. The global lightmap, sky and shared effect assets also stay available.
This is graphics-resource streaming, not eviction of all level data from RAM.

RedCat's room and doorway connections control ordinary eligibility; camera
distance/frustum tests select graphics within that neighborhood. Authored
overview cameras and long camera transitions retain authority over their own
view. RedCat's position is not a substitute for such a remote camera. Distant
scripts, buttons, paths and physical geometry remain available even if their
artwork has never been requested. Global sky/lightmap/effect assets and shared
artwork needed by a nearby object are intentional exceptions to local resource
ownership. A previously visited eligible section retains the return-turn grace period;
an unvisited section beyond the range receives no chunk geometry or texture
request.

A camera jump can require uncached textures. The previous complete frame is
retained until the new visible view is ready. During this wait the main loop
holds simulation, autosave and recovery clocks. Audio keeps playing through brief
waits. After 250 ms it shows “De omgeving laden…” and pauses audio once; only
that gate-owned pause resumes on readiness. Explicit pause and error behavior
remain intact. Resuming does not apply elapsed loading time as a
large gameplay step. A missing asset uses the existing error screen.

Ordinary playing frames update streaming once, after the camera moves. Only an
incomplete view needs a separate loading poll before simulation. World bounds
are recalculated when a mesh transform changes, and face visibility is cached
until the camera's PVS changes. Moving models still refresh their bounds.

## Circling hitch regression (2026-10-01)

The old two-second eviction interval was shorter than a normal camera circle.
Textures beyond the near-camera radius were released behind the player and
requested again only when they entered the rendered view. The resulting
incomplete views suppressed frame presentation, even on frames where game
updates finished promptly. Repeated walking circles reproduced this at both
the graveyard and castle entrances.

Identical instrumented 16-second routes before/after the change:

| Entrance | Incomplete-view frames, before / after | Chunk activations, before / after | Texture releases, before / after |
| --- | ---: | ---: | ---: |
| Het Kerkhof | 256 / 0 | 1,003 / 28 | 84 / 0 |
| Het Kasteel | 155 / 3 | 753 / 39 | 111 / 0 |

The remaining castle loads occurred during initial exploration; repeat laps no
longer continually recreate the scenery. Resident world vertices at the end
were 17,868 / 75,843 in the graveyard and 31,770 / 67,017 in the castle. This
keeps the world streamed rather than retaining the entire level. The traces
and CPU profiles are preserved in `temp_work/circling-hitch-2026-10-01/`.

For this regression specifically, run:

```sh
node --test tests/world-streaming.test.mjs
TMPDIR=temp_work node tests/world-streaming-circles.mjs
```

The browser regression checks actual walking/collision over three circles,
continued frame presentation, buffer reuse, and partial world residency. It
does not impose a machine-dependent FPS threshold.

## Focused verification

```sh
node --test tests/world-streaming.test.mjs tests/actor-render-residency.test.mjs
TMPDIR=temp_work node tests/world-streaming-scenes.mjs
TMPDIR=temp_work node tests/world-streaming-transitions.mjs
```

For the 19 October camera-local loading/CPU follow-up, focused checks also cover
parking, managed model poses, deferred prop collision, native spout continuity,
effect draw ranges and lazy actor texture lifetimes. Its source snapshot,
profiles and camera-transition evidence are retained under
`temp_work/distant-work-2026-10-19/`. This follow-up does not rebuild releases or
replace campaign-level verification with an artificial FPS guarantee.

For a follow-up confined to large arenas and sky boundaries, pass
`--rooms-only` to the scene comparison instead of rerunning all scenes.

Unit checks cover every original face across all five levels, independent
buffer disposal, shared resource lifetimes, moving bounds, delayed texture
completion after disposal, distant decals, actor PVS, and large visible actors.
Browser comparisons recreate the previous full-level geometry batches at the
same camera and restore all actor render layers for an independent reference.
They cover starts, remote rooms, boss areas and the graveyard sky boundary.
Screenshots, reports and isolated browser profiles remain in
`temp_work/world-streaming-2026-09-30/`.

Initial measurements before the wider prefetch/grace period, at the start
views in the focused 640×360 comparisons (resident counts can now be higher):

| Level | Full-scene triangles | Streamed triangles | Full-scene draw calls | Streamed draw calls | Resident world vertices / total |
| --- | ---: | ---: | ---: | ---: | ---: |
| Het Bos | 28,007 | 1,900 | 283 | 64 | 16,752 / 45,189 |
| Het Kasteel | 50,427 | 15,689 | 530 | 338 | 26,145 / 67,017 |
| Het Kerkhof | 60,808 | 9,149 | 784 | 426 | 16,701 / 75,723 |
| De Grotten | 46,540 | 3,524 | 617 | 194 | 12,174 / 78,369 |
| De Kasteeltoren | 8,762 | 1,541 | 61 | 12 | 6,438 / 24,345 |

The graveyard start submits about 85% fewer triangles and keeps about 78%
fewer world vertices resident. Other scenes vary: preserving a complete open
area can retain substantially more geometry, and partitioning can increase
draw calls in some small rooms. These are renderer workload measurements, not
an FPS guarantee for every device. Image comparisons differed at no more than
6 of 230,400 pixels in the measured scenes.

The transition check also passed: the two cave laboratory doors retain their
artwork and exact partially opened transforms after eviction/reload. Four
back-and-forth cycles stabilized at 257 GPU geometries / 41 textures in the
entry view and 102 / 31 in the boss view, returning to 2 / 3 in the empty
eviction view. A deliberately delayed visible texture held game time and the
recovery clock exactly constant, kept audio paused and displayed the loading
message; releasing it resumed normally without a catch-up step.

No release packages were generated and no unrelated historical test suites
were rerun.

## Camera-local loading follow-up (19 October 2026)

The retained actual-level browser check points the camera from each starting
position toward a remote boss area, approaches it, then returns. All five
gameplay snapshots remain identical across these camera-only operations, with
no script or WebGL errors. At the Forest start, **all 45 checked final-area
chunks have no request, zero allocated vertices and no residency**. Approaching
loads the 43 needed chunks; returning and expiring the grace period releases
them all. Brutus's actual `brutusm-0.png` map is neither requested nor decoded
at the start, and loads correctly near the arena. Nearby complete arenas and
large faces retain their artwork.

The actor-loading browser check deliberately delays this map. Game time,
recovery time and audio stay paused behind the incomplete view; releasing the
load restores the real 128-pixel texture and normal play. Eviction/reloading
while the menu is paused also completes without advancing time. Both paths
report WebGL error zero, including replacement of the tiny warmup texture.

The same seeded 960 × 540, 4× CPU-throttled fixture used in
[the spatial-query follow-up](cpu-spatial-query-performance.md) compares the
pre-task source with this source. Its three gameplay snapshots match exactly;
Graveyard/Caves images are identical and Castle differs at 11 of 518,400 pixels.
The resource counts at the end of each route are:

| Scene | Resident world vertices, before → after | Resident actor assemblies, before → after |
| --- | ---: | ---: |
| Het Kerkhof | 12,096 → 6,921 | 50 → 49 |
| Het Kasteel | 29,376 → 14,652 | 87 → 23 |
| De Grotten | 7,599 → 6,255 | 34 → 22 |

CPU timing varies between runs. Castle/Caves combined update and renderer
submission time fell approximately 19–20% in the final three-scene comparison.
That run's Graveyard time increased from 11.32 to 13.35 ms; a fresh sequential
Graveyard before/after pair instead measured **12.68 → 11.90 ms** (6.2% less),
with update time almost unchanged (10.12 → 10.00 ms) and renderer submission
2.56 → 1.89 ms. Both results are retained. They establish reduced resource/draw
work, but do not establish a stable large Graveyard CPU reduction or a device
FPS guarantee. These are source scene checks, not a complete campaign run or
measurements on the user's i3.

Evidence remains in `temp_work/distant-work-2026-10-19/`: `before/src/`,
`camera-local-scenes-final/`, `forest-texture-verification/`,
`actor-loading-view/`, `baseline-4x/`, `envelope-final-4x/`, the
`graveyard-paired-*-4x/` runs, `final-comparison.json`, and focused subsystem
logs. Intermediate performance experiments are retained rather than deleted.

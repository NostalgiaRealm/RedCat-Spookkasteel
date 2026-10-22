# Room-transition hitch audit — 19 October 2026

Read-only source audit. No game builds, native executable launches or historical
test suites were run for this audit. Source changes were being developed in
parallel by the parent task; the findings below distinguish the starting
implementation from the proposed preparation path.

## Confirmed starting causes

1. `WorldGeometryStream.update()` consumed every ready visible chunk in one
   update. Its nominal 12,000-vertex budget only deferred **offscreen** entries.
   Several image completions could therefore cause simultaneous visible-room
   activation without a meaningful frame-time bound.
2. `geometryFor()` allocates and copies the eleven-float vertex buffer, optional
   lightmap UVs and eight-float light frames for every activated chunk. Activation
   then creates/fills an additional native-face index buffer. None of these costs
   is inherently asynchronous merely because the texture arrived asynchronously.
3. `TextureLoader.loadAsync()` completes with an HTML image. Creating/configuring
   `THREE.Texture` does not upload that image. The first real draw can still pay
   for decode completion, image upload, storage allocation, mipmap generation and
   anisotropy setup. This is particularly visible if several texture completions
   become visible together.
4. Vertex and index GPU buffers are likewise created lazily on their first
   renderer use. Moving just the JavaScript geometry construction to a future
   task does not remove the first-visible-render buffer-upload cost.
5. Disallowed rooms synchronously release their resident geometry and unused
   map handles. This preserves the newly requested strict room policy, but quick
   room crossings must not allow stale pending loads to resurrect rejected
   rooms. Shared maps/materials must retain their reference counts.

## Recommended bounded preparation

Use one shared streaming-work queue across world chunk activation, actor image
installation and GPU preparation. Schedule only a small count/time slice per
display interval. Prioritize the current view above nearby doorway preloads,
while retaining the original room eligibility checks. The queue must yield via
a real task/frame boundary, rather than a chain of immediately resolved
Promises (microtasks can run to exhaustion before rendering).

Each texture/chunk job must re-check its request identity and the world's
disposed state when it actually runs. Canceled work must settle its Promise so
loading-screen waits cannot deadlock. In-flight texture entries need identity
checks before map deletion, because a released/reacquired key may now refer to
a different request.

Call public `renderer.initTexture(texture)` in a bounded job after the image is
configured. Mark texture readiness only after the stable actor map/image has
been installed and initialized. For world chunks, prepare CPU geometry and its
current native-face index before making the chunk drawable. Prepare buffers in
a private zero-count render before first exposure. Loading-screen settling may
drain the same queue more generously, but should retain yielding/progress and
error propagation.

Keep the room selector and all logic/collision state independent of these
graphics jobs. Do not restore the earlier broad distance-only residency policy
to hide hitches. Do not change animation/audio clocks or skip required geometry
because a room is still preparing.

## Verified Three.js 0.186.0 warmup behavior

Evidence is the locally installed implementation, not an assumption about a
different Three version:

- `WebGLRenderer.js:1860` `projectObject()` visits an eligible Mesh even when its
  geometry draw range has zero count. Set `frustumCulled=false` on the private
  staging proxy so large or distant authored bounds cannot exclude it.
- Its `objects.update(object)` calls `WebGLGeometries.update()` through
  `WebGLObjects.js:5`. This uploads **all geometry attributes**, including
  interleaved vertex data and lightmap/custom attributes, before the draw range
  is interpreted.
- `WebGLRenderer.js:1196` `renderBufferDirect()` calls `setProgram()`, computes
  draw count, and returns only for a negative or infinite count. Zero is valid.
- `WebGLBindingStates.js:13` `setup()` uploads the element/index attribute with
  `attributes.update(index, ELEMENT_ARRAY_BUFFER)`, even for that zero-count
  draw. A zero-count staging draw therefore prepares both vertex and index GPU
  storage while drawing no triangles.
- A brand-new ordinary `THREE.Mesh` with a private `MeshBasicMaterial`, scene
  and camera does not call the real actor's `onBeforeRender`/`onAfterRender`, nor
  its material's lighting hooks. No gameplay object should be reparented to the
  staging scene.
- BufferAttribute/InterleavedBuffer **onUpload callbacks do execute** during
  this preparation (`WebGLAttributes.js:16,151`). No project code currently
  installs those callbacks, but this is relevant to future changes.
- All vertex attributes share the geometry's buffer cache across staging and
  real rendering. The plain staging shader's VAO is not the actual actor/world
  material's VAO. Binding setup for the final shader still happens later, but
  the large buffer-data uploads have already happened.

### Renderer state and lifecycle

Create a 1×1 `WebGLRenderTarget` with depth/stencil disabled. Initialize the
private target and basic shader under the level-loading screen, otherwise the
first runtime job itself pays their initialization cost. The target belongs to
the preparation helper and must be disposed with it.

Use try/finally to restore geometry draw range, proxy geometry, render target,
active cube face/mip level, `autoClear`, XR enabled state and shadow auto-update.
The staging scene has no background or lights, so it cannot launch gameplay
shadow or background work. `setRenderTarget()` restores canvas viewport/scissor
from the renderer's global state, and restores target defaults for non-null
targets. Saving public viewport/scissor settings provides future protection
against custom callers; current game source has no other viewport/scissor
callers. Do not leave a 1×1 viewport on the displayed canvas.

Three increments `renderer.info.render.frame` for every render. Do **not** rewind
that value after staging; internal attribute/skeleton update caches use it.
If preserving last-frame diagnostic totals is needed, restore only the
calls/triangles/points/lines counters. A subsequent ordinary render with
`info.autoReset=true` resets those counters normally.

Record readiness by geometry identity, invalidate it on geometry disposal and
WebGL context restoration, and cancel jobs when their original residency
request is no longer current. Dispose the private material/empty geometry/target
without disposing the real geometry except through its original owner.

### Shader preparation is separate

The plain zero-draw basic material prepares buffers, not the real shader
variants. World materials differ by vertex colors, fullbright/lightmap paths,
alpha test and transparency. Actor shaders add further lighting/material state.
Use public `renderer.compileAsync()` during the opaque loading screen for real
material variants, using temporary placeholder maps so map-dependent variants
are compiled without fetching every distant map. Restore material state in
finally. A private offscreen target can select a different output-color variant
from the actual game framebuffer, so buffer warmup alone must not be described
as compiling every final gameplay shader.

## Boundaries and residual costs

- One individual GPU image upload cannot be preempted halfway through by a
  JavaScript millisecond budget. Limit the number of uploads per interval and
  start doorway preparation early enough; do not promise all hardware is
  entirely hitch-free.
- Keep shared lightmaps/global tiny effect artwork global. Repeatedly unloading
  and re-decoding those would add unnecessary churn.
- First-ever load still depends on local/browser storage and driver behavior.
  Warm repeated doorway traversal and cold first exposure should be measured
  separately, with visual and cancellation checks.
- Scope measurements to queue CPU work, frame intervals and allocation/upload
  counts. A headless software-rendering benchmark cannot establish the user's
  low-end hardware FPS improvement.

## Review of the in-progress implementation

The parent task's shared `streaming-work.js`, world activation integration,
actor buffer readiness and loading-screen program preparation were reviewed
after the initial audit. No direct deadlock was found in the ordinary loading
path: world settling includes both pending texture Promises and queued
activations, and the work queue yields while advancing either kind of job.
Three's `compile()` uses `scene.traverse()` for material preparation, so it
includes parked invisible chunks/actors without making them draw. The
placeholder-map compilation therefore reaches the intended parked world
variants. Renderer-state restoration now preserves the public settings and
diagnostic counters without rewinding Three's internal frame counter.

One cancellation race was reported to the parent and **corrected**: an invalid
queued world-texture upload resolves its work Promise with `null`, but the
StreamTextures continuation only removes that old map entry in a later
microtask. A same-frame room update can reacquire the still-mapped zero-ref
entry before that continuation runs. The old cancellation can then resolve the
new chunk's map to null. The implementation now removes zero-ref entries
immediately when dropping their final reference, and every delayed deletion
checks entry identity. Re-review confirms a return acquires a fresh promise;
the original chunk's request identity rejects its stale completion. The parent
added a focused release/reacquire check. This reviewer did not rerun tests.

Shared geometry invalidation was checked again after implementation. The warm
helper listens for each geometry's `dispose` event and removes prepared status.
Actor residency sums all managed owners before releasing unused geometry, and
checks unmanaged protected consumers before disposal. Re-entering actors whose
buffers were released remain non-renderable while their replacement warm job
is queued. A stale pending job can delay a re-request by one microtask/frame,
but its cancellation settles and clears the deduplication entry; it does not
leave an actor permanently blocked. No blocker was found in this ownership or
readiness path.

The actor texture implementation now distinguishes decoded CPU images from GPU
readiness and invalidates the latter on texture disposal. This prevents actor
residency disposal from silently leaving a true ready flag and an unbudgeted
first-draw texture upload on return. A WebGL context restoration can still
cause Three to reupload ordinary/global textures lazily; geometry preparation
status already resets on context restoration. This rare recovery cost is
separate from ordinary room transitions.

Actor animation can legitimately update vertex data after buffer allocation is
warmed. The first actual pose upload is still needed if `flushGeometry()`
changes the pose after warming. This is a residual upload, not missing geometry
or a reason to advance gameplay/animation inside preparation callbacks.

## Focused browser shader/readiness verification

At the parent's request, ran the new retained `shader-scenes.mjs` harness,
serving the source on an automatically chosen PORT0 and using an isolated
Chrome profile below this research folder. It loads each of the five levels,
pauses, settles the new queue and renders the initial scene. It additionally
checks a remote view of the Tower witch room. No historical whole-suite tests,
campaign walkthroughs, user profiles, release builds or native executables were
used.

Verified evidence: `shader-scenes-1792415572635/report.json`, six corresponding
PNGs and `shader-scenes-verified.log`. All six views reported world/actor/texture
readiness true, no pending queue jobs, no WebGL errors, no script errors, no
browser errors and no shader/compiler warnings. The renderer was hardware
accelerated ANGLE/OpenGL ES on the AMD Radeon RX 6700 XT. Tower boss-room area1
retained 16,452 world vertices and its allowed entrance neighbor area2. Its
gameplay snapshot remained unchanged by graphics settling. Graveyard and Tower
screenshots were visually inspected and showed complete surroundings.

The initial retained run also loaded and rendered every view without graphics
errors, but a harness-only snapshot assertion compared the Tower snapshot from
before deliberately setting a remote camera with the snapshot afterward. The
harness was corrected to capture immediately after setup, and the new focused
check was repeated successfully. Both run directories and logs remain available.

## Final readiness-mask, opacity and travel-lead review

Read-only follow-up after the parent added critical-view readiness and bounded
camera prediction. No tests or browser scenes were rerun for this final review.

- `RoomVisibility.allowed` still uses the original room admission: current
  room, direct neighbors, then the existing `portalOpen` traversal. Transparent
  readiness does not flood additional distant rooms into memory.
- `viewAreas` is separate and always includes the selected current room.
  Opaque closed-door neighbor loads can finish in the background. Open portals,
  direct cutout grilles and translucent gates still require their potentially
  visible next-room artwork before presentation. Invalid camera-space probes
  keep the conservative original admission/readiness fallback.
- Cutout classification uses actual per-texture alpha presence instead of
  assuming every color-key-capable texture has holes. The importer writes
  `has_alpha and 255 in indexed`, matching its PNG conversion (`index255`
  becomes alpha0 only when that texture is color-key enabled). This correctly
  treats Castle keyed wooden doors with no transparent pixels as opaque.
  Missing or malformed optional metadata falls back to conservative cutout
  readiness; it does not prevent loading older imported datasets.
- `roomBoundsRequired()` caches against the separate `viewRevision`, so opening
  a door changes readiness even when the set of admitted rooms is unchanged.
- Predicted preload position leads smooth camera movement by 0.4 seconds,
  capped at 192 world units. It disables extrapolation for gaps of 0.2 seconds
  or more, zero/negative intervals, or position steps of 128 units or more.
  World and actor lead preloads remain inside the existing allowed-room mask
  and camera view-radius bound. Render frusta, draw range, script state,
  gameplay clocks and collision behavior remain unchanged.

No correctness, gameplay or unbounded-residency blocker was found in these
changes. Rare forced teleports/instant camera cuts can still require waiting
for a complete new view; the prediction deliberately does not infer a long
route across unrelated geometry in those cases.


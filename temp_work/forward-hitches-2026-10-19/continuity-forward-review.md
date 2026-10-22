# Forward-transition streaming review

Read-only review, 19 October 2026. No source edits, tests, builds or user save
writes. This note examines the source after the lantern-turn preparation and
short-wait audio-continuity repairs.

## Actual-route result supersedes the unconfirmed topology hypothesis

After this source review, the root's route profiler identified six one-frame
holds at the **current 2048-unit distance boundary**, while the anchor stayed
in area 4 and target area 8 was already admitted/preparing. The first requests
occurred at approximately 2045-2048 units and no image fetches occurred. Thus
the primary confirmed cause on that route is the radius gate, not missing
doorway topology or image decode. The topology discussion below remains a
source-derived possibility for other routes and is not justification to widen
the selected room graph in this change.

The minimal confirmed repair is to measure **preparation** against the nearer
of current camera and the existing capped predicted camera point. Existing
code computes that point but blocks the full preparation predicate behind
`distance <= viewRadius` measured only at the current camera. The motion lead
therefore cannot prepare a chunk just beyond the current view boundary.

Use `min(currentBoundsDistance, predictedBoundsDistance) <= 2048` for request
eligibility, while keeping `inView`, required-view readiness and actual drawing
on `currentBoundsDistance <= 2048`. Apply the same separation to managed actor
artwork. The existing 0.4-second / 192-unit motion cap, short-gap checks,
room/preparation masks and queued priorities remain in force. Static cameras
have no predicted extension; teleports and long gaps suppress prediction.
Already prepared assets may still use the existing retention grace after a
stop; the prediction must not initiate new beyond-boundary requests at rest.

Focused verification should record first request versus first required frame
for the six baseline boundary chunks, in addition to held-frame counts. That
demonstrates preparation moved earlier, rather than merely winning a different
one-frame pump ordering. Include forward/backward motion, stops, teleports,
current-radius draw exclusion, unrelated-room rejection and the equivalent
actor boundary. The observed route does not warrant speculative changes to
pose timing, PVS fidelity or room admission.

## What the existing preparation covers

The current authored area and immediate doorway neighbors form the raw
admission mask. Open connected rooms admitted by projected apertures also join
that mask. A separate preparation mask keeps already admitted, still openly
connected rooms ready for 12 seconds while the anchor remains unchanged.
World and actor preparation can complete those rooms in all directions within
the existing 2048-unit nearest-bounds limit. Normal rendering still uses the
exact raw mask, current PVS and normal frustum.

World and actor requests already use a widened frustum without requiring the
current leaf's PVS. Smooth camera travel extrapolates up to 0.4 seconds / 192
units for near-distance requests. Required-view allocations have priority over
background preparation. Real image uploads and buffer warmups share the
bounded work queue.

## Remaining forward-selection gap

Consider a route A -> B -> C. While the player is in A, B is its immediate
neighbor and can prepare. C cannot prepare unless the actual aperture view
already admits it. When the player crosses into B, C first becomes an immediate
neighbor, potentially at exactly the frame when C also becomes visible. The
camera's 192-unit spatial lead does not help when the **room mask** still rejects
C. The selected anchor change also resets all old preparation deadlines, so
previously admitted branches can be released and reacquired across a doorway.

This is a global topology-selection gap, not a reason to increase radii or
restore camera-distance admission through unrelated floors.

## Minimal safe forward preparation

Use a preparation-only approach prediction; leave raw admission, view
requirements, render PVS, actual room ownership and gameplay untouched.

1. Identify an approaching direct A -> B portal. Its doorway bounds must be
   within the existing near/lead neighborhood (576 units plus the established
   capped lead), and it must be openly connected according to the same authored
   door predicate. A movement direction check or a valid predicted camera leaf
   can prioritize B, but an invalid predicted leaf must never disable filtering.
2. Permit B and B's immediate **open-connected** neighbors as background
   preparation candidates, at most one extra graph hop. Constrain every actual
   chunk/actor by the existing 2048-unit distance and normal ownership bounds.
   No recursive flood and no traversal across an opaque closed/locked portal.
3. Keep work low priority until the real view requires it. Do not add candidates
   to `allowed` or `viewAreas`; their meshes remain parked/layer-disabled and
   cannot hold presentation. Late queued work must revalidate the prediction.
4. Invalidate prediction when its portal closes, the candidate path ceases to
   connect, the player leaves the approach neighborhood or an unrelated
   teleport/authored camera anchor replaces it. An ordinary adjacent A -> B
   crossing may preserve *existing* openly connected preparation for a short
   grace; it must not seed new areas from historical connectivity alone.

This allows C to decode/upload before entering B while keeping the Forest end
excluded at its start and the Castle upstairs excluded from its basement
unless an actual bounded open doorway path qualifies. Closed-door neighbors
retain their existing near/widened-frustum preparation until the door begins
opening; the opening animation normally supplies additional preparation time.

A cheaper alternative is to query the existing capped predicted camera point,
accept its area only if it is a direct open neighbor, then prepare that area's
direct open neighbors. This provides less advance notice than a near-portal
test, but is very small in scope. A pure spatial predicted-leaf query without
the doorway check can accidentally predict another floor and must be avoided.

## Main-thread work that prediction does not bound

- `WorldGeometryStream.activate()` is one indivisible work item. It copies
  interleaved vertex/light arrays, allocates the first PVS index buffer, fills
  it, and submits a private GPU warm render. The 1.5 ms allowance is checked
  **between** jobs, so a large individual chunk can exceed it. The former
  12,000-vertex fallback allowance is bypassed by the shared work-queue path.
- `syncFaceVisibility()` also executes for every drawable chunk after a PVS
  leaf change, outside the preparation queue. It refills changed index prefixes
  and schedules index uploads in the displayed render. This remains necessary
  exact draw selection; profile its CPU work and index `bufferSubData` before
  attempting to spread it across frames, which could otherwise reveal faces
  through walls.
- Managed actors flush their exact pending skinned pose in
  `CastleWorld.updateRenderResidency()` once rendered. `flushGeometry()` updates
  every position, normal and bounds, outside the shared queue. GPU warmup can
  have uploaded an earlier offscreen pose. A newly visible group can therefore
  still submit fresh attribute updates on its first displayed frame. This cost
  needs separation from image/buffer allocation in the forward-route profile.
  Re-skinning every prepared actor every frame would recreate the earlier CPU
  regression and should not be the default repair.
- Image fetch/decode concurrency is bounded to four, but decode completion and
  renderer uploads remain indivisible browser/driver operations. Awaiting
  `image.decode()` keeps first draw from being the intentional decode trigger;
  it does not constitute a hard frame-time guarantee.
- Shader first-use is less likely here: the local Three.js `compile()` traverses
  the complete scene for materials, including invisible parked meshes, and
  `prepareStreamingPrograms()` supplies placeholder world maps to compile the
  mapped variants during level load. Fragment variants have separate load-time
  prewarm. Do not assume offscreen material compilation is missing merely
  because the meshes are parked.

## Useful profile attribution

For the real forward route, record world activation count/time, queue job type
and time, image upload submissions, world index updates, actor pose flush time,
buffer allocation/update submissions, raw/preparation masks, anchor changes and
missing required IDs. This distinguishes late requests from a large indivisible
job or ordinary scene cost. The audio grace avoids manufacturing dropouts from
brief waits, but is not proof that the forward scene itself renders smoothly.

## Final read-only review of the implemented distance repair

Reviewed the final world, managed-actor, pooled-watcher and world integration
source. No previously passed tests were rerun. No concrete blocker was found.

- World request selection now uses `prepareDistance = min(current, predicted)`
  and a separate `inPrepareRange`. `chunk.inView`, required readiness and
  drawable layers still use the unchanged current-camera distance, raw room
  mask, normal frustum and PVS. The future-only allocation cannot draw early
  or block the current view.
- Managed actors make the same preparation/drawing distinction. Their
  unpadded artwork room ownership and existing preparation mask remain the
  admission checks; future-range allocation does not bypass either. Actual
  actor rendering remains current-distance and current-frustum constrained.
- Pooled fragment watchers now receive the same predicted camera point from
  `CastleWorld.updateActorTextureResidency()`. Their request distance uses the
  nearer sphere distance, but required readiness and render layers use the
  current sphere distance. Watch/unwatch registration, stable shared map
  handles, pinned-player protection and decoded-image expiry remain unchanged.
- The prediction source is still initialized to the real camera every update,
  then extended only for positive motion with elapsed time below 200 ms and
  a step below 128 units. Its horizon remains 0.4 seconds and displacement cap
  remains 192 units. At rest and on long steps/gaps it has no extension. There
  is no global radius increase, topology/lookahead admission change or new
  predictive fallback to unrelated areas.
- World departure is now a two-phase ownership update: gather old departed
  chunks, acquire all wanted chunk references, then unload departed chunks.
  A new room's use of a still-pending/decoded texture therefore increments its
  existing entry before the old last owner can drop it to zero. `drop()` still
  removes truly zero-owner entry identities synchronously; late completions
  check their identity before deleting an entry, so they cannot delete a
  replacement. Chunk request tokens still reject obsolete activations and the
  shared work queue rechecks ownership before GPU allocation.
- New references can transiently coexist with departed references within that
  synchronous update, but departed chunks are unloaded before activation and
  drawable-layer processing. No stale-room frame is presented and the material
  resident-user count still protects maps belonging to another resident chunk.
- Network/image requests already in flight are not aborted by cancellation;
  they finish through the existing no-owner cleanup. This repair preserves
  that established behavior rather than introducing an abort/ownership race.
  The transfer specifically avoids needlessly abandoning and restarting a map
  still needed by the next chunk.

The repair targets the profiled distance-boundary cause and texture ownership
churn. It deliberately leaves exact actor pose timing, PVS index selection,
doorway graph policy and sound/music scheduling alone. No claim is made here
that indivisible driver work is strictly bounded by the queue allowance.

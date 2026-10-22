# Lantern-turn streaming and audio continuity review

Initial read-only source review, 19 October 2026. That initial review involved
no source edits, tests, builds or user save writes. The root agent implements
the change; a separate agent owns the saved-session reproduction. A subsequent
requested browser fault-verification pass is recorded at the end of this note.

## Confirmed source causes

The retained `source-before/main.js` pauses the complete audio system on the
first incomplete graphics frame, although its loading overlay is delayed for
250 ms. It resumes all audio once readiness returns. Thus a one-frame graphics
hold deliberately interrupts music and effects even if allocation is short.
This is independent of whether image fetch/decode or GPU submission actually
exceeds a frame budget. `AudioSystem.pause()` pauses every sound element;
buffered playback stops its `AudioBufferSourceNode`, and resume creates a new
source. A visually tiny loading hold can therefore produce an audible gap.

The widened prefetch frustum in both retained `world-streaming.js` and
`actor-render-residency.js` still requires the **current camera leaf's PVS**.
This means an asset outside that PVS cannot prepare merely because the widened
frustum predicts a turn. When camera motion changes the BSP leaf, the asset
can become visible and required before its image/buffers have been prepared.
The world near-distance margin bypasses PVS, but it is only 576 units; the actor
near margin is 1024 units and artwork farther away can exhibit the same issue.

Existing bounded uploads, cancellation and private GPU buffer warmup are sound.
They limit work once requested, but cannot remove a late request caused by
camera/PVS selection. A job remains indivisible and the 1.5 ms queue allowance
is checked between jobs; it is not a hard frame-time bound.

## Recommended policy

1. Keep audio playing during incomplete graphics waits shorter than the
   existing 250 ms overlay delay. Hold simulation/save clocks and retain the
   last complete displayed frame. Do not change ordinary menu, cutscene,
   Android suspension or loading-error pauses.
2. Pause audio once a sustained graphics wait actually displays the loading
   overlay. Record whether this gate itself paused playback. Resume only that
   owned pause when readiness returns; never blindly resume a user's pause.
3. Prepare the complete **selected current authored room**, in all camera
   directions, within the existing 2048-unit nearest-bounds view limit. Use
   exact static face-area ownership and unpadded actor artwork room bounds.
   This catches the sideways lantern view without admitting unrelated rooms
   or floors. Keep whole faces and existing large-room visibility.
4. Current-room background work should have priority 0, surrounding near/ahead
   work priority 1, required visible work priority 2 and pinned player artwork
   priority 3. The shared three-job/time-budget queue remains the allocator.
5. Preserve the widened frustum/near-field criteria for admitted neighboring
   rooms. If its PVS gate is relaxed later, do so only for background
   preparation inside the same admitted-room graph; retain render PVS and
   normal draw-frustum checks.
6. A room-classification fallback with no valid air leaf should **not** imply
   current-room ownership. General admission can remain conservative for
   buried decorative artwork, but the new current-room prefetch predicate
   should return false for unknown ownership. Such props then retain ordinary
   near/ahead loading rather than becoming room-global background requests.

This does not require increasing distance limits or admitting the Forest's
last section while RedCat is at the start. The prior topology research found
11 nonempty Forest authored areas and exact single-area ownership for every
static face across all five levels. The Castle has 23 nonempty areas, including
the distinct overlapping basement and upstairs rooms. The Tower's large boss
room remains one authored area and is intentionally kept whole within the
same existing nearest-bounds radius.

## Audio continuity fault-injection cases

The reproduction should instrument pause/resume calls and buffered source
identity, rather than inferring audio continuity from an image alone.

- Force graphics readiness false for two to four frames, less than 250 ms:
  audio pause/resume counts must remain zero, the playing source identity must
  remain stable and its cursor must advance. Gameplay time must remain held.
- Sustain the same wait beyond 250 ms: exactly one audio pause accompanies
  overlay display, without repeated pause calls. Clearing readiness resumes
  exactly once and removes the overlay.
- Enter the user's pause menu while waiting: the gate must never unpause
  playback. Only explicit user resume may do that.
- Force a streaming error: error display pauses audio and cannot automatically
  resume it. Existing Android suspension behavior remains separate.
- Repeated camera turns after load/idle should need no new artwork request,
  world chunk activation or buffer warmup for current-room artwork in range.
- Large-room views and each level's startup should retain their rendered
  artwork; Forest end-area admission must remain false at its starting point.

## Scope and remaining limits

This review does not claim a hardware FPS result or that all possible browser,
driver, decode, garbage-collection and network stalls can be eliminated.
Unknown/outside-world cameras and a genuinely cold teleport can still require
the conservative loading hold. The key repair is to avoid withholding known
current-room assets until a camera turn and to avoid converting a short
graphics wait into a global audio interruption.

The root's current source was also reviewed while edits were in progress:
audio now waits for overlay display before pausing; current-room world and
actor preparation uses low priority; existing room admission, render PVS and
view radius remain in place. The unknown-room ownership caveat was reported
to the root and addressed with a strict fallback used only for current-room
classification.

## Follow-up browser fault verification

At the root's subsequent request, `audio-continuity.mjs` exercised the actual
`src/main.js` animation-frame callback with real WebAudio playback in an
isolated retained Chrome profile. The profile used Level 1 with its startup
graphics queue fully settled, volume 0.1 and muted browser output; the audio
context was running. Source hashes, snapshots and expected injected error are
in `audio-continuity-1792418610946/report.json`, with the console log in
`audio-continuity.log`. All four focused cases passed:

- Short 125 ms hold: gameplay time remained zero while music advanced from
  0 to 0.128 seconds; its actual `AudioBufferSourceNode` identity was unchanged.
  No pause/resume calls or loading overlay occurred.
- Sustained 350 ms hold: exactly one pause accompanied the loading overlay;
  readiness caused exactly one owned resume and removed the overlay.
- User pause during a short graphics hold remained active when the view became
  ready. No gate resume occurred. Explicit user resume restarted playback.
- An injected asset error paused audio once, displayed the error screen and
  remained paused even after the injected error was cleared. No automatic
  resume occurred.

No unexpected browser errors occurred. This was functional verification, not
an audio-device dropout measurement or performance benchmark. The browser and
server were stopped afterward. No source edits, builds or real user save
changes were made by this reviewer.

## Final review of aperture-history preparation

Reviewed the later source revision after the saved-route reproduction found
brief aperture-mask loss and re-entry. No previously passed tests were rerun
for this final source review. No concrete blocker was found.

- `RoomVisibility.allowed` and `viewAreas` remain the exact current masks.
  The new `preloadAreas` is separate, with its own cache revision and 12-second
  wall-clock deadline. Static faces still use exact area ownership; actor and
  moving-brush preparation uses unpadded artwork bounds.
- The open-graph traversal only validates connectivity. It cannot itself seed
  deadlines. A room becomes a history candidate only after the ordinary
  aperture/neighbor selection admitted it through `next[i]`. Thus an open chain
  does not flood unseen rooms into preparation.
- Changing the selected anchor or deactivating selection clears all deadlines.
  A closed connection clears now-unreachable deadlines immediately; expiry
  removes the preparation bit. `preloadRevision` increments when that mask
  changes, invalidating the bounds cache even if the normal render-room mask
  stayed unchanged. Pose coordinates also participate in that cache.
- The strict unknown-room fallback is used for preparation ownership only;
  wholly buried/unclassified props do not become room-global preloads. Existing
  conservative admission/render fallbacks remain intact. Empty area metadata
  leaves the selector inactive and preserves its prior distance/frustum path.
  No new assumption about a complete graph is used to hide scenery.
- World `inView` still requires ordinary room admission, PVS and the normal
  frustum. Actor `rendered` still derives from its ordinary admitted `inView`.
  The preparation mask influences allocation/residency only. Retained-only
  world chunks stay parked on layer 1; retained-only actor meshes stay parked
  or layer-disabled. It cannot create extra hidden-room draws or readiness
  holds through an opaque closed door.
- The same existing 2048-unit nearest-bounds limit applies to preparation.
  Whole faces and the Tower's single large boss room remain intact. Previously
  admitted distant rooms may keep graphics briefly during a camera turn, but
  unrelated rooms/floors never gain a preparation bit merely from proximity.
- World chunk texture references, queued owner checks, actor shared-resource
  resident counts and protected consumers remain unchanged. Once both raw
  admission and the preparation hold disappear, these owners release through
  their existing mechanisms; another actor's shared geometry/map stays safe.
  Existing decoded-image grace remains distinct from GPU owner residency.
- The audio-grace implementation is unchanged from the four real-main-loop
  cases verified above: short waits never stop sources, sustained overlay
  waits own their pause/resume, and actual user/error pauses remain separate.

The root separately reported a successful final 420-frame reproduction of the
specific saved Forest camera turn: no held frames, no audio pause/resume
events, unchanged buffered source and no browser errors. That route evidence
belongs to the reproducing agent; this reviewer did not repeat it.

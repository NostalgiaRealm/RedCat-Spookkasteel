# Actor artwork and fragment room-transition hitch audit

Date: 2026-10-19. Source-only investigation and focused implementation; no build or user save modifications.

## Main transition hitch identified and addressed

`ActorTextureStream` limited asynchronous loading to four requests, but each completed image immediately replaced the map and marked it ready. The actual GPU image upload was therefore deferred until the next draw. Several decoded images could become visible together, causing uploads and mipmap generation in the same rendered frame as room geometry initialization. Fetch/decode concurrency is not a GPU upload budget.

Implemented in `src/actor-texture-stream.js`:

- Optional shared `work` queue and synchronous `upload(texture)` callback, supplied by the world.
- Decoded loader results stage handle replacement and `renderer.initTexture` through the shared preparation allowance.
- A map becomes ready only after upload finishes. Existing material/map identity stays unchanged, so shared and cloned actor materials retain the same handles.
- GPU readiness is separate from decoded-image retention. An external `Texture.dispose()` from actor residency invalidates readiness; a return within the 12-second image grace schedules a fresh GPU upload from the retained image without fetching/decoding again. Trim still expires GPU-evicted decoded images, preventing an accidental retained-image leak.
- Requested visible artwork priority 2, nearby preload priority 1, pinned player artwork priority 3. The highest owner priority is combined over a short 100 ms window and then refreshed; a previously visible map does not remain permanently urgent.
- Expired requests are checked before fetch, after decode, and before scheduled preparation. Expired work releases its loader texture and can be retried. A newer request for the same URL refreshes the existing work instead of invalidating a shared owner.
- Stream disposal cancels staged work locally and resolves its pending lifecycle even without a future render frame. Late decoded textures are released. Genuine upload/load failures propagate through `settle()`.
- Explicit initial-level loading uses `work.waitFor()` to yield and pump shared preparation before animation frames exist. Standalone/test use without a work queue remains supported.

The four-load limit now covers decoded requests waiting for upload as well. This bounds the extra decoded images in memory while a frame budget catches up.

## Other audited behavior

- `CastleWorld.texture()` (`src/world.js`) explicitly awaits `HTMLImageElement.decode()`. Browser decoding can run asynchronously, but final image transfer/upload remains a main-thread/GPU concern. No source change to the loader was needed for this task.
- Actor CPU definitions, collision and scripts remain eager; only room-admitted artwork is prepared. Root agent is addressing actor VBO preparation and ahead-of-view admission separately.
- `WorldEffects.create()` loads the small shared effect atlas set under the level loading screen. It does not fetch effect maps on every room transition. The existing fragment compile/warmDraw passes also run under this screen. They should remain there rather than being moved into an ordinary walking frame.
- `DestructibleEffects.prepareNearby()` checks nearby, enabled and room-admitted sources, then requests fragment artwork. Those map uploads now use the shared actor work allowance too.
- A remaining source of room-approach CPU bursts is `prepareNearby()` synchronously reserving up to eight fragment roots per update. `DebrisRenderPool.create()` clones materials, actor-lighting uniforms and bounds for each fragment. Suggested follow-up: reduce each reservation unit and stage it through the same bounded work queue, preserving the current global pool cap and one warm instance per prototype. This is a real preparation path, not explosion physics, so it is safe to defer until a fragment is actually needed; actual acquire must retain a synchronous fallback.
- `ActorTextureStream.trim()` can release a group of decoded maps after their shared 12-second idle grace. This has not been changed here. If traces show spikes after room departure, spread disposal through a release budget while preserving shared-map demand and pinned roots.

## Focused checks

Only the new `tests/streaming-texture-work.test.mjs` was executed for these edits. Ten tests passed:

1. Decoded maps stay unready until budgeted upload; one frame shares one job allowance.
2. Explicit loading settlement yields and completes without a first-frame deadlock.
3. Pinned/visible priority ordering and priority decay.
4. Expired decoded work cancels and retries.
5. Fresh shared-map owner preserves an existing request.
6. Disposal resolves staged work without another frame or disposed-handle upload.
7. Upload errors propagate while readiness remains false.
8. No-queue standalone compatibility.
9. GPU eviction invalidates readiness and room re-entry budgets reupload without fetching again.
10. GPU-evicted decoded images expire normally and a later owner fetches new artwork.

Log: `actor-texture-work-tests.log` in this directory. These verify scheduling and resource lifecycle, not a measured FPS improvement on the user's lower-end machine. The root agent owns browser/render verification and the combined documentation.

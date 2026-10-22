# Independent residency integration review

19 October 2026. Read-only review of the in-progress shared source; no tests, builds or gameplay changes performed by this reviewer.

## Integration assessed

- `WorldGeometryStream.update` chooses the room mask before chunk requests, actor residency and effect submission. Static chunks are partitioned by authored face-area ownership plus the existing cell coordinate. Moving brush bounds use current transformed geometry. Disallowed chunks bypass the old distance/time retention and unload immediately.
- `ActorRenderResidency.boundsAllowed` is separate from ordinary PVS/frustum visibility. It gates both wanted and retained residency, so nearby unrelated props no longer remain GPU-resident merely because they lie across a wall. Existing shared-resource resident counts and protected-player scans remain necessary.
- `ActorTextureStream.update` has an optional room-bound predicate for unmanaged fragment watchers. It suppresses both requests and draws without advancing or deleting fragment physics. Player maps remain pinned. Texture trim remains a separate twelve-second decoded-image idle policy, not instantaneous per-room decoded-image deletion.
- Shared billboard/beam batches receive the same room selector in `beginEffectView`. Their cached enclosing box/sphere tests avoid per-particle detailed collision traces. Particle clocks and saved state continue to exist.
- Ordinary frame order is correct: camera movement -> room/world update -> actor update -> effect update. No ordinary-frame old-room mask issue was found.

## Concrete secondary issue reported

`DestructibleEffects.prepareNearby` still iterated every destructible source within 512 Euclidean units and requested its fragment prototype textures. Crates above a basement ceiling or behind unrelated walls could therefore retain fragment textures and reserve up to 128 pooled pieces even after the intact actor was disallowed. Suggested fix: apply the current room predicate to each source's conservative current bounds before adding its preparation request. Keep existing tiny shader definitions if needed; never suppress actual explosion spawning, damage or physics.

## Other explicit limits / safeguards

- Keep the entire current BSP area eligible, then immediate neighbor areas. Original room boundaries may be larger than visual subdivisions; distance alone must not override area identity. Large visible Tower rooms retain their existing whole-face coverage and conservative range behavior.
- Render masks must not mutate gameplay `.visible`, collision records, model state, button state or script clocks. Existing player/effect/shared texture references must prevent premature disposal.
- A scripted camera in another valid room must select that camera room. Invalid remote cameras require conservative prior fallback; ordinary exterior no-clip views should retain the player/last valid room rather than expose the whole map.
- Long open sight lines through several doors need a conservative aperture path so the one-hop residency rule does not create visible holes. Closing a door must not hide the near room side before authored motion closes its aperture.
- Current actor bounds expand rest bounds to cover animation. That may conservatively retain a few crossing fixtures; it avoids clipping a hand torch or enemy pose at a room border.
- Small globally shared effect artwork, sky and lightmap resources are not uniquely room-owned. Room exclusion cannot truthfully mean every byte associated with that room disappears immediately.
- Direct unmanaged render paths bypass the managed-room predicate: `syncProjectiles`, `syncHazards`, `syncSpiderWeb`, destructible impact-wave quads and authored decal meshes. Most are short lived or attached to visible surfaces, but an exterior no-clip view may expose them. They can use conservative render-layer/bounds rejection if desired, without deleting simulation state.

## Focused validation recommended

1. Basement save: current room + three doorway neighbors, unrelated upstairs/end-of-level rooms rejected, while opening and walking through each door restores all required artwork before a playable frame.
2. Same-resource owners in different rooms: a hidden owner cannot dispose a player/visible actor texture; re-entry reloads released maps safely.
3. Whole Tower room and long open multi-door sightline: no walls/floors/sky boundaries disappear.
4. Moving door/lift crossing an area boundary: current transformed bounds, attached props and collision stay correct.
5. Scripted overview, teleport, invalid camera and exterior no-clip: camera authority/fallback remains deliberate and does not stall readiness forever.
6. Particle/fragment room exclusion: unchanged simulation/save state, no unrelated prototype requests, and re-entry shows the current age/pose.
7. Distinct masks with the same PVS revision: index/draw/residency caches still update on room changes; grid caches invalidate on the selector revision.

An early read saw `BeamBatch` calling `rooms.boxAllowed` before that method existed. The root agent confirmed and supplied the matching cached method during this review; it is not reported as an unresolved defect.

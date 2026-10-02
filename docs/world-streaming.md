# Camera-based world graphics streaming

The renderer now allocates world geometry in spatial sections instead of
uploading one level-wide vertex buffer and submitting every material group.
This applies to all five levels and the shared desktop/web source.

## Residency and visibility

`src/world-streaming.js` partitions stationary scenery into 768-unit cells,
grouped by the original material. An authored face is never cut into pieces.
Each section has independent vertex, UV and lightmap-frame buffers, so evicting
it actually frees its GPU allocation. World textures are requested as sections
become needed, with four concurrent loads. Their final resident user releases
the GPU texture and decoded-image references.

Sections within 1024 units of the camera are prepared ahead of time. A wider
prefetch frustum also prepares distant scenery before a camera turn reveals it,
without drawing it outside the actual view. Sections beyond 1536 units can be
unloaded after twelve seconds without being needed. The grace period covers
ordinary return turns and circles instead of repeatedly discarding their
textures and vertex buffers. Distances use the nearest point on a section's
bounds, not its center.

Visible scenery has **no additional distance cutoff**. The original camera-leaf
PVS data determines potentially visible static faces, and the camera frustum
determines which sections can be seen. A large room, courtyard or distant
visible wall remains complete even when it extends beyond the preload radius.
Area portals are kept conservatively open for rendering. If a cutscene, teleport
or no-clip camera has no valid PVS leaf, the renderer uses the camera frustum;
it never borrows the player's old room or a stale last-valid camera leaf.

Moving brush models retain complete groups and use their **current transformed
bounds**, without static-face PVS filtering. This preserves door artwork,
platforms and rolling obstacles. The graveyard's depth-only sky boundaries are
retained, independently of static-face PVS. Liquid flags, lightmaps, alpha
masks and face winding remain unchanged.

`src/actor-render-residency.js` separately manages actor graphics. Nearby actors
are prepared, while only frustum/PVS-visible actors are drawn and lit. Whole
assemblies use conservative transformed bounds. Distant hidden actors release
GPU vertex buffers and textures after their last active user leaves; shared
player, turret and debris resources are protected. Actor CPU geometry, textures
and animation data remain cached so returning actors can be restored immediately.

## Gameplay and loading transitions

Collision, scripts, saves, AI and animation clocks remain independent of render
residency. Offscreen enemies and puzzles continue their authored behavior.
Streaming never changes an object's gameplay visibility or a brush's collision
state. The compact original world buffers remain in CPU memory for rebuilding
sections and tracing decals, including decals in distant rooms that were never
rendered. The global lightmap, sky and shared effect assets also stay available.
This is graphics-resource streaming, not eviction of all level data from RAM.

A camera jump can require uncached textures. The previous complete frame is
retained until the new visible view is ready. During this wait the main loop
holds simulation, dialogue/audio, autosave and recovery clocks. After 250 ms it
shows “De omgeving laden…”. Resuming does not apply elapsed loading time as a
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
and CPU profiles are preserved in `current_work/circling-hitch-2026-10-01/`.

For this regression specifically, run:

```sh
node --test tests/world-streaming.test.mjs
TMPDIR=current_work node tests/world-streaming-circles.mjs
```

The browser regression checks actual walking/collision over three circles,
continued frame presentation, buffer reuse, and partial world residency. It
does not impose a machine-dependent FPS threshold.

## Focused verification

```sh
node --test tests/world-streaming.test.mjs tests/actor-render-residency.test.mjs
TMPDIR=current_work node tests/world-streaming-scenes.mjs
TMPDIR=current_work node tests/world-streaming-transitions.mjs
```

For a follow-up confined to large arenas and sky boundaries, pass
`--rooms-only` to the scene comparison instead of rerunning all scenes.

Unit checks cover every original face across all five levels, independent
buffer disposal, shared resource lifetimes, moving bounds, delayed texture
completion after disposal, distant decals, actor PVS, and large visible actors.
Browser comparisons recreate the previous full-level geometry batches at the
same camera and restore all actor render layers for an independent reference.
They cover starts, remote rooms, boss areas and the graveyard sky boundary.
Screenshots, reports and isolated browser profiles remain in
`current_work/world-streaming-2026-09-30/`.

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

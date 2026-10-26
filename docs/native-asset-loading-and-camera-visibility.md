# Native asset loading, camera visibility and texture caching

Investigated and implemented on **19 October 2026**. Here, “native” means the
original Windows game, not the browser/Electron port.

Later the same day, the user requested an additional
[room-aware admission policy](room-aware-streaming.md). The native research
and earlier per-face measurements below remain the evidence for that stage;
the current port also excludes unrelated nearby rooms before requesting their
graphics. Ordinary no-clip/exterior camera fallback now follows the selected
player room, while authored remote views retain camera authority.

## Result and implementation decision

The original has **three different mechanisms**, which should not be confused:

1. It loads a chapter's BSP data and constructs its objects during chapter setup.
   Actor definitions and material images have shared, reference-counted ownership.
2. As the camera moves, existing BSP visibility data selects individual world
   faces, brush models and actors for rendering. Hiding an object does not
   destroy its gameplay object or unload its actor definition.
3. The Direct3D driver maintains a separate, draw-demand texture cache. It can
   replace an old video-memory slot and upload a texture from a retained
   system-memory surface when that texture is needed again.

The traced code does **not** provide a replacement for the port's camera-distance
world/actor chunk unloading. Keep that requested performance adaptation, including
the latest **576-unit** near preparation radius, **2048-unit** maximum loading/
drawing range, **1152-unit** retention distance and **12-second** grace period.
These distances are port settings, not recovered native constants.

A concrete native visibility difference was found and fixed: the port previously
admitted a whole static material/cell chunk if **any** of its faces passed PVS.
The original also rejects individual hidden faces inside a surviving BSP node.
Resident static chunks now draw only their accepted whole faces through a reused
index buffer. This reduces submitted geometry without changing authored faces,
collision, scripted object lifetimes or loading distances.

## Evidence, reproducibility and limits

The authority is the installed x86 executable and driver, inspected with REA
and Hopper, with branch details checked against retained disassembly:

| Artifact | SHA-256 |
| --- | --- |
| `RcHcGame.dat` | `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5` |
| `D3DDrv.dll` | `73fccccd3d75382875578a81722dc1b3555ad4f082e13dd2ccadeb175e2d7017` |
| `D3DDrvRGB.dll` | `83e873a997bc184cb26c19d4200f1f86afc429b60619e6e687c24f6a95024c6d` |

Sizes and hashes for the software driver and all five shipped BSP files are in
[the artifact manifest](../temp_work/native-asset-lifetime-2026-10-19/native-artifact-hashes.json).

All investigation files are retained in
[`temp_work/native-asset-lifetime-2026-10-19/`](../temp_work/native-asset-lifetime-2026-10-19/).
The [game evidence bundle](../temp_work/native-asset-lifetime-2026-10-19/native-game-evidence.json)
contains 49 REA records; the
[driver evidence bundle](../temp_work/native-asset-lifetime-2026-10-19/driver/native-driver-evidence.json)
contains seven. Each individual dossier preserves its evidence ID, target,
provider output and limitations.

Function names below are recovered identities from diagnostics, matching
structures and code; they are not a claim that the executable has full symbols.
Hopper does not expose complete function body ranges through its public API.
Its decompiler can misrepresent conditionals, argument ownership and loops;
machine instructions take priority where they disagree.

A retained, **later modified Genesis3D source tree** helps identify structures
and routines. It corroborates the findings; it is not the game's recovered
source. Later additions and changed constants are not native evidence. The
supporting notes retain source hashes, assembly excerpts and specific limits:

- [Actor loading and ownership](../temp_work/native-asset-lifetime-2026-10-19/actors/findings.md).
- [Camera visibility, model bounds and portal timing](../temp_work/native-asset-lifetime-2026-10-19/visibility/findings.md).
- [Driver texture caching](../temp_work/native-asset-lifetime-2026-10-19/driver/findings.md).

This was static investigation of the original plus live source-port checks.
The original game was not launched for a new camera walk or memory trace.
Historical driver logs are labeled historical; they do not measure this run.
“No camera-distance unloading found” is bounded to the recovered loading,
visibility and lifetime paths, not an exhaustive claim about every indirect call.

## Chapter loading and world lifetime

The chapter setup chain is:

```text
CAdamSubLevel::CreateWorld                    0x4f9030
  CreateWorldFromFile                         0x4f9d60
    geWorld_Create                            0x5b81a0
      CreateGBSP                              0x5b9320
        GBSP chunk reader / dispatcher        0x5d5d90 / 0x5d5df0
      world bitmap pool initialization        0x5d3ff0 -> 0x5d4150
      register world bitmaps                  0x5ba400
  PreloadDataBeforeGameObjects                0x4f80f0
  CreateGameObjectsFromEntities                0x4f95b0
  PreloadDataAfterGameObjects                 0x4f7790
  remaining level initialization
```

`CreateWorldFromFile` resolves the BSP from disk or its CD fallback, opens it
through the virtual-file API and creates a world before the game objects are
constructed. The installation has one BSP for each of the five chapters,
`lvl00a` through `lvl04a`, rather than a collection of files selected by camera
position within a chapter.

The GBSP reader processes typed, size-checked file chunks into world arrays.
These “chunks” are **file-format records**, not the port's spatial render
sections. Their reader is part of initial world creation, not the visibility
update on a camera leaf change.

Bitmap-pool initialization loops over the world's texture records, building
bitmaps, palettes and mip data from the packed BSP data. World creation can then
free the original packed texture bytes: this is conversion-time cleanup, not
eviction when the camera leaves a room. The world registers its texture pool
with its bitmap list.

The explicit exit chain is separate:

```text
CAdamSubLevel::Exit                           0x4faab0
  game-object teardown
  world wrapper release                      0x4f6320
    engine/world detach and reference release
    geWorld_Free                             0x5b8460
```

Final world release destroys remaining actor registrations, lights, entities,
visibility/surface data, bitmap-pool ownership and BSP arrays. It is
reference-counted; a reference release does not always mean immediate final
destruction. The inspected camera visibility loop does not invoke this teardown.

Primary dossiers:
[create order](../temp_work/native-asset-lifetime-2026-10-19/world-create-order.json),
[BSP file loading](../temp_work/native-asset-lifetime-2026-10-19/world-bsp-file-load.json),
[world creation](../temp_work/native-asset-lifetime-2026-10-19/genesis-world-create.json),
[chunk dispatch](../temp_work/native-asset-lifetime-2026-10-19/gbsp-chunk-dispatch.json),
[bitmap decoding](../temp_work/native-asset-lifetime-2026-10-19/world-textures-decode-all.json),
[bitmap registration](../temp_work/native-asset-lifetime-2026-10-19/native-world-bitmap-registration.json),
[level exit](../temp_work/native-asset-lifetime-2026-10-19/world-exit-lifetime.json),
[world release](../temp_work/native-asset-lifetime-2026-10-19/genesis-world-free.json).

## What a moving camera actually changes

`World_WorldRenderQ` at **0x5b8730** builds the camera frustum, calls
`Vis_VisWorld` at **0x5d5580**, performs lighting work and renders the scene.
The visibility input is the camera's visibility position.

If the camera remains in the same leaf and no forced visibility update is
pending, native reuses its static visibility stamps. A turn still changes
frustum clipping. On a changed leaf or forced update:

1. Select the camera cluster's row from the already loaded PVS bitset.
2. Flood connected visible areas through open model portals.
3. Mark visible clusters and leaves, their parent nodes, and every face touching
   a visible leaf.
4. Check other brush models against visible leaves using their whole model
   bounds.

The face stamp is stored at `SurfInfo + 0x58`, with a `0x88` record stride.
The exact stamp write is **0x5d5719**. Reading PVS bits marks existing records;
it does not open another BSP or read that region's textures from disk.

The static BSP traversal at **0x5b8cc0** rejects hidden nodes and applies
frustum tests. Inside an accepted node it then performs this **per-face** gate:

| Instruction | Meaning |
| --- | --- |
| `0x5b8f07` | Read the face's visibility stamp. |
| `0x5b8f0b` | Compare it with the current static visibility frame. |
| `0x5b8f0f–0x5b8f14` | If stale and valid visibility exists, skip this face. |
| `0x5b8f16–0x5b8f1d` | Apply the face's plane-side test. |
| `0x5b8f3d` | Call `RenderFace` at `0x5ba710` for the accepted face. |

If the native world has no usable visibility information, the face gate is
disabled rather than trusting stale stamps.

Actor submission in `RenderScene` at **0x5b88d0** checks render flags and, when
enabled, the actor's render-hint box center against visible leaf stamps before
calling actor rendering. This is a draw decision. Nothing in that tested path
removes the gameplay object or releases its definition/material bitmap owner.

Relevant REA evidence IDs:

- Camera pipeline: `ev_740643558f37b415de834f754375a3dd648756305443cd570d9eec23d9670950`.
- PVS update: `ev_d0a05ca698af8ee4d9f9f36ef19d03e425f78c559d8865cbf0fcae5e1100bdd7`.
- Static face rejection: `ev_440531ea89e1519ce88d1ff351174afd225311d609695368951dd94064b09a72`.
- Scene/actor submission: `ev_c793e86faa5dd35183d638cdada50e3863a605ad665b315b3b17702c8bdf1d99`.

### Door areas: recovered behavior and remaining boundary

`geWorld_OpenModel` at **0x5b9830** changes a model's `Open` flag, forces
visibility refresh and updates symmetric area connections. The actual area
flood at **0x5d5500** tests the portal model's `Open` flag.

The inspected door controller opens that portal **before opening motion** and
closes it only **after closing motion completes**. There are also wrappers
that temporarily force visibility open and restore the previous value.

The normal start/end ordering is established, but all virtual contexts for
those temporary wrappers and their interaction with restored door classes are
not yet mapped. This task therefore retains the port's existing conservative
open-area rendering policy. It does not equate a gameplay “closed” Boolean or
a collision threshold to the native portal flag, which could hide moving doors
or whole passages. Per-face cluster PVS filtering is independently established
and does not require changing that policy.

## Actor definitions and texture ownership

The actor-definition lookup at **0x49ffa0** uses a shared sorted cache. A hit
returns the existing wrapper; a miss invokes the file loader through
**0x49f690 → 0x49f220 → 0x5b3fe0**. The loader reads actor body data and motions.

The body loader at **0x5b72f0** opens geometry and material bitmap entries. Its
material loop calls bitmap creation at **0x5c41c0**, then requests **four mip
levels** through **0x5c31d0**. These reads occur while loading the definition,
not when its first visible animation frame reaches the camera.

The after-game-objects preload pass at **0x4f7790** supports a configuration
branch checking all actor files or a selected-file preload list, and follows
actor-based particle dependencies. The exact option selecting that branch
has not been resolved here; do not claim the check-all branch always runs.
An `ActorPreload` INI flag by itself also does not establish camera streaming.

Adding an actor to a world at **0x5b9970** prepares its puppet through
**0x5b52b0**. Material setup at **0x5cd680** retains bitmap references and adds
them to the world. Puppet destruction at **0x5cd7b0** unregisters/releases
those references, but the shared actor definition may still own the images.

The examined direct callers place puppet teardown in actor destruction,
explicit render-preparation replacement and constructor-failure cleanup—not
in camera-distance visibility checks. Definition-cache teardown is separately
reference-counted. Its complete retention across every chapter/engine lifetime
has not been traced; it must not be described as unloading on every region
crossing or necessarily on every chapter change.

See the [supporting actor report](../temp_work/native-asset-lifetime-2026-10-19/actors/findings.md)
and [body-loader dossier](../temp_work/native-asset-lifetime-2026-10-19/native-body-bitmap-files.json).

## Native Direct3D texture cache

The driver supplies the important distinction between a retained CPU bitmap
and a texture currently occupying a video-memory slot:

The exact cache recovery below applies to **D3DDrv.dll**. The RGB driver's
identity and cache-related strings were inventoried, but its complete cache
controller and the currently selected original-game renderer were not verified.
Do not generalize these offsets or budgets to every native rendering backend.

| Routine in `D3DDrv.dll` | Recovered behavior |
| --- | --- |
| `SetupMipData`, **0x10005830** | Validate a mip's cache-slot ownership. On a miss, assign another slot. |
| `TypeFindSlot`, **0x10004f70** | Scan a texture type's slots for the oldest usage stamp and replace its owner. |
| `SetupTexture`, **0x10005a80** | On cache miss/dirty data, copy system-to-video texture data; mark current use and bind. |
| `SetupLMap`, **0x10005880** | Corresponding lightmap cache path; retained assembly is in the driver notes. |
| `THandle_CheckCache`, **0x10007a50** | Reconfigure cache allocations when the handle set changes. |
| `CreateSurfaces`, **0x100078d0** | Create the retained system-memory surface used by a handle. |
| `SetupSlot`, **0x10004e70** | Create the video-memory texture surface for a cache slot. |
| `THandle_Destroy`, **0x10007670** | Explicitly release a handle's surface/type ownership and invalidate cache layout. |

`SetupTexture` contains the diagnostic
`SetupTexture: System to Video cache Blt failed.`
The upload uses a DirectDraw surface copy; the slot is then stamped for current
use. Surface-loss recovery is a distinct driver/device event, not a camera
region transition.

This is **draw-demand cache paging**: a texture needed for a visible polygon can
be brought into a reusable slot while its source image remains available.
There is no camera coordinate or 576/2048-unit residency radius in these cache
selection routines. The cache can also need a different mip level as projected
texture size changes; “all chapter bitmaps loaded” therefore does not mean
“all textures permanently occupy video memory.”

The retained later reference source uses different cache constants from the
installed binary. For example, the shipped driver's inspected cache percentage
is **0.75**, while that reference uses **0.70**. Do not copy its patched texture
limits or translate legacy device-specific cache budgets directly to WebGL.
The driver notes distinguish original DLL evidence from those later changes.

Primary formal dossiers:
[ownership/miss](../temp_work/native-asset-lifetime-2026-10-19/driver/native-setup-mip-data.json),
[LRU slot selection](../temp_work/native-asset-lifetime-2026-10-19/driver/native-type-find-slot.json),
[upload/bind](../temp_work/native-asset-lifetime-2026-10-19/driver/native-setup-texture.json),
[cache reset](../temp_work/native-asset-lifetime-2026-10-19/driver/native-check-cache.json).

## Port changes and deliberately retained adaptations

[World streaming implementation](../source/world-streaming.js):

- Resident static world chunks now build a compact draw index containing only
  PVS-accepted faces. The existing chunk test still decides which sections to
  prepare and retain.
- Vertex, UV and lighting buffers are not rebuilt when the camera changes leaf.
  The index allocation is reused and changed only when geometry/visibility
  changes. Consecutive updates before a rendered frame retain pending dirty
  ranges so later larger draws cannot expose stale GPU indices.
- Camera rotation within an unchanged visibility set does not rewrite indices.
- Missing/invalid camera visibility draws conservatively. Unreferenced faces
  remain conservative too, rather than disappearing on incomplete metadata.
- Moving brush assemblies keep whole-model bounds checks. Depth-only sky
  boundaries keep the port's intentional coverage policy.
- Eviction releases the new index with its geometry and clears cached geometry
  references. Return loading reconstructs the current view's index.
- CPU collision/surface queries keep the complete original source faces,
  including nonresident and currently hidden graphics.
- Existing actor resource streaming, dependency handling, view-readiness holds,
  script execution, audio/music scheduling and requested loading distances are
  retained.

The native driver cache is not reproduced as a second fixed-size DirectDraw
cache inside Three.js. WebGL owns a different driver interface; the port already
requests/relinquishes decoded images and GPU resources on demand, with explicit
camera-local bounds and a return-turn grace period. Replacing that with a
chapter-wide CPU/image preload would undo the user's low-end-device work without
being required by native gameplay.

## Focused verification

Only the checks for this new visibility change were run:

```sh
node --test tests/world-streaming-face-visibility.test.mjs
node temp_work/native-asset-lifetime-2026-10-19/face-visibility-scenes.mjs
```

Seven focused unit checks cover mixed-PVS chunks, reused storage, invalid
camera fallback and return, hidden-face surface queries, conservative
unreferenced/moving/sky geometry, eviction/reload, large 32-bit index buffers
and pending GPU updates across several visibility changes before rendering.

The source browser check covers starts and boss areas in all five chapters,
plus the Graveyard sky seam: **eleven views**. It compares the filtered render
with the same frozen scene using the previous whole-chunk draws, verifies
submitted indices against the original PVS data and confirms the gameplay
snapshot remains unchanged. No browser errors occurred. All eleven views had
**zero pixels differing by more than 30 summed RGB units** at 640×360; the
largest summed RGB difference in any pixel was one.

Selected static world vertices submitted, before → after:

| View | Whole-chunk selection | Per-face selection |
| --- | ---: | ---: |
| Het Bos entrance | 6,609 | 2,847 |
| Het Bos boss area | 5,208 | 2,658 |
| Het Kasteel entrance | 11,760 | 11,013 |
| Het Kerkhof entrance | 4,617 | 2,523 |
| Het Kerkhof sky seam | 3,381 | 2,043 |
| De Grotten entrance | 912 | 831 |
| De Kasteeltoren entrance | 5,985 | 5,985 |

These are submitted static-world vertices in particular test views, not FPS
measurements or the entire level's memory use. Draw-call counts are unchanged;
vertex work decreases where a chunk spans different visibility sets. No gain
is expected where all its faces are already potentially visible.

Reports, paired images and isolated browser profiles:
[render report](../temp_work/native-asset-lifetime-2026-10-19/render/report.json),
[final unit log](../temp_work/native-asset-lifetime-2026-10-19/face-visibility-unit-final.log).
The first browser launch failed because an absolute scratch path exceeded the
Linux socket-name limit; using a shorter relative path inside the same retained
research directory resolved it. That failed launch log is retained as well.

No new packages were built or published. This is not a fresh campaign
playthrough, an original-game runtime memory trace, or verification of every
driver/device combination.

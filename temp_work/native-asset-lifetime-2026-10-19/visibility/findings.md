# Native camera visibility and resource residency: supporting investigation

Date: 19 October 2026. Supporting read-only native investigation for the main
asset-lifetime report. No game source edits, tests, builds or runtime launches
were made by this worker.

## Evidence boundary

The shipped `RcHcGame.dat` SHA-256 is
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Function names below are recovered identities, not embedded symbol claims.
Exact machine instructions were compared against the retained complete original
assembly `../../player-world-light-2026-10-04/native-full.asm`; the extraction
index records source line ranges and that assembly file's hash.

The retained `../../gargoyle-transparency-2026-09-29/genesis-reference` tree is a
later modified Genesis3D branch based on version 1.1 (15 November 1999). It is
corroboration and a way to name recovered structures, not proof that this game
contains every feature of that later tree. In particular, added sprites,
stencil shadows and changed clipping in the reference must not automatically
be attributed to the original. The core paths below match original branches,
strides, fields and calls directly.

REA was owned by the root worker. Formal dossiers below were produced by that
worker and read here, avoiding a second Hopper target/session. This worker used
existing complete assembly to locate the functions and gate instructions.

## Exact address map

| Recovered identity | Original address | Main direct evidence |
| --- | --- | --- |
| `World_WorldRenderQ` | `0x5b8730` | `../world-render-camera-pipeline.json`, `ev_740643558f37b415de834f754375a3dd648756305443cd570d9eec23d9670950` (requested interior `0x5b8802`, enclosing procedure `0x5b8730`) |
| `Vis_VisWorld` | `0x5d5580` | `../native-world-vis.json`, `ev_d0a05ca698af8ee4d9f9f36ef19d03e425f78c559d8865cbf0fcae5e1100bdd7` |
| `RenderScene` | `0x5b88d0` | complete assembly excerpt `render-scene.asm`, direct caller in world-render dossier |
| `RenderWorldModel` | `0x5b8b40` | complete assembly, called by `RenderScene` |
| `RenderBSPFrontBack_r` | `0x5b8cc0` | `../native-world-static-bsp-render.json`, `ev_440531ea89e1519ce88d1ff351174afd225311d609695368951dd94064b09a72` |
| Fast leaf-only traversal | `0x5b8fe0` | `outside-frustum-leaf-traversal.asm` |
| `RenderSubModels` | `0x5b90d0` | called at `0x5b8980`, original complete assembly |
| `RenderFace` | `0x5ba710` | `../native-render-face.json`, `ev_a1815eefc53c60f068c19fbee5b20e2a4a26b2ce9acb7b23aa35823700319bff` |
| `ModelVisible` | `0x5d54e0` | wrapper uses translated bounds `Model+0x8c/+0x98`, calls `Trace_BBoxInVisibleLeaf` `0x5cb720` |
| Area flood | `0x5d5500` | `model-visible-and-flood.asm`, direct call from `Vis_VisWorld` |
| `geWorld_OpenModel` | `0x5b9830` | `../native-world-open-model.json`, `ev_89a8eb00133222d61c1b29ff53e320a312d3c476610b2ad9fbbb498e6552577a` |
| Door-specific portal setter | `0x4cd2f0` | `../native-door-close-area.json`, `ev_28a409563aaabcb9e386b82b8c5d1e48253a1c46ad6cbab549f10424878e26d1` |
| Base model portal setter | `0x4d1df0` | `../native-door-open-area.json`, `ev_c0625dc691aa82de29db04a923eab650b60cc2b322153c480cfd3c18a66c9ebe` |

The two last filenames were provisional. These are two setter implementations,
not an “always close” function and an “always open” function. Both accept a
Boolean argument and forward it to the same engine API.

## What changes when the camera moves

1. Each rendered frame increments the dynamic frame stamp. A camera frustum is
   built (`0x5d0740`) and `Vis_VisWorld` is invoked before dynamic lighting and
   scene submission. The visibility POV comes from the camera, not an actor
   distance radius: `geCamera_GetVisPov` `0x5c9490` then leaf lookup `0x5d1790`.
2. `Vis_VisWorld` finds the camera's BSP leaf. If it equals `World.CurrentLeaf`
   (`+0x0c`) and `ForceVis` (`+0x10`) is false, it reuses existing static PVS
   stamps (`0x5d55e8`–`0x5d55fb`). Camera rotation within one leaf therefore
   does not require rebuilding the cluster/face set; frustum clipping still
   changes each rendered frame.
3. A changed leaf or forced update clears `ForceVis`, writes the new leaf and
   increments the static frame (`0x5d5601`–`0x5d560e`). Invalid cluster or absent
   cluster visibility sets `World.VisInfo` (`+0x14`) false and returns; the
   downstream BSP tests then avoid applying unavailable PVS data.
4. The camera cluster selects a bit row from existing BSP visibility bytes.
   Each set bit stamps that cluster visible. The loop reads bits; it does not
   load files or allocate that cluster's geometry (`0x5d5655`–`0x5d5681`).
5. Every leaf must have a valid cluster with the current cluster stamp and an
   area stamp matching the current static frame (`0x5d56ab`–`0x5d56d1`). Visible
   parents, leaf and every face touching that leaf are then stamped visible.
   The face stamp write is `0x5d5719`:
   `SurfInfo[face].VisFrame = World.CurFrameStatic`; native SurfInfo stride is
   `0x88`, stamp offset `0x58`.
6. The world model is always marked dynamic-visible. Other brush models are
   checked against their entire translated model bounds in visible BSP leaves
   (`ModelVisible`, `0x5d5772`–`0x5d5783`) each frame, independently of whether
   the camera's static PVS required rebuilding. This is suitable for moving
   doors and lifts without moving their mesh to another BSP file.

These operations update visibility in an already loaded world. No file open,
BSP load, actor definition release or bitmap release occurs in the traced
visibility/area/face-selection functions. This is a bounded negative result
about these paths, not a claim that no renderer/driver cache exists anywhere.

## Per-face rendering gate (distinct from per-chunk residency)

The static BSP traversal first rejects nodes whose `NodeVisFrame` is stale if
`VisInfo` is available (`0x5b8cd9`–`0x5b8cf3`). It also clips each node's bounds
against the current frustum. Fully outside-frustum nodes use the leaf-only
traverser, allowing user-poly lists to be handled without rendering their BSP
faces (`0x5b8fc0` → `0x5b8fe0`).

For every face on a surviving node, the original tests that individual face's
stamp. Exact gate:

- `0x5b8f07`: read `SurfInfo.VisFrame`.
- `0x5b8f0b`: compare against `World.CurFrameStatic`.
- `0x5b8f0f`–`0x5b8f14`: if unequal and `World.VisInfo` is true, skip this face.
- `0x5b8f16`–`0x5b8f1d`: skip a face pointing away from the visible plane side.
- `0x5b8f3d`: call `RenderFace(0x5ba710)` only for the accepted face.

The later reference `World.c:2176–2183` matches this exact two-stage gate. Merely
using “at least one face in this spatial cell is PVS-visible” to enable *every*
face stored in that cell is coarser than native. Vertex-buffer ownership and
face submission can be kept separate: this result establishes a visibility
selection rule, not that native allocates/deallocates one buffer per face.

## Actors: PVS skips rendering, not actor existence

`RenderScene` iterates the world's actor array. It checks normal/mirror/always
render flags (`0x5b8a0b`–`0x5b8a1d`). `GetRenderHintExtBox` is called at
`0x5b8a2e`; if enabled, the center of that hint box is used to find a BSP leaf.
Unless the always-render flag is set, a stale leaf visibility stamp skips the
actor before `geActor_Render` (`0x5b5430`) / through-frustum rendering
(`0x5b5390`). Exact leaf compare and skip: `0x5b8a70`–`0x5b8a77`.

The actor array and actor definitions remain present. This path does not
suspend game object scripts or prove that AI movement stops. It also does not
load artwork when the camera moves closer. At least the world-level actor
selection is a rendering gate, rather than a resource lifetime operation.
The original lacks the later reference's added off-PVS stencil-shadow handling;
that reference feature must not be attributed to RedCat.

The actor rendering wrappers call existing puppet data and do not themselves
lazily create a puppet. Initial actor rendering preparation and definition
preloading are separate lifecycle questions covered by the main worker.

## Door area portals and timing

`geWorld_OpenModel` does nothing when its Boolean matches `Model.Open`
(`Model+0xc8`). A changed value writes the model flag, sets `World.ForceVis`
true, and writes symmetric `AreaConnections[a0][a1]` bytes. The model's source
BSP Areas fields are read via `GFXModelNum` (`Model+0x40`), model stride `0x50`,
Areas offsets `+0x44/+0x48`.

Important detail: the renderer's area flood at `0x5d5500` recurses through
`GFXAreaPortal.ModelNum` to `World.Models[ModelNum].Open`. It does **not** read
the symmetric area-connection bytes for that traversal. The bytes have other
users, but correct render area closure requires the current portal model Open
state. `0x5d5552` reads the flag, `0x5d555b` skips closed, `0x5d5562` recurses
into the connected area only when open. Reference `Vis.c:153–181` matches.

Door-specific setter `0x4cd2f0` caches its Boolean in byte field `+0x168`,
base model setter `0x4d1df0` uses byte `+0x134`. The decompiler sometimes renders
these byte fields as confusing indexed pseudo-arrays; the assembly offsets are
bytes and should be used for interpretation.

Recovered door lifecycle anchors from the complete assembly:

- Initialization uses authored start-open byte `+0x173`: true calls the door
  setter with 1 and sets state `+0x16c=6` (`0x4cc37f`–`0x4cc38d`); false calls
  it with 0 and state 1 (`0x4cc3a9`–`0x4cc3b7`). The reset path repeats this at
  `0x4ce25f` / `0x4ce289`.
- The opening branch calls the setter with 1 at `0x4ccbc9` **before** kicking
  motion at `0x4ccc78` and entering state 4. The area is therefore visible
  while the door opens, not only after reaching a collision-fraction threshold.
- The closing branch begins reverse-time motion at `0x4cce54`, state 8. At
  `0x4cce8f`–`0x4cceb3`, reaching the closing endpoint plus successful motion
  update enters state 9. Only the completion branch calls setter 0 at
  `0x4ccf04` then sets state 1. The portal remains open during closure.
- Temporary wrappers `0x4cd7a0` / `0x4cd7d0` save the current `+0x168` value to
  `+0x169`, force it open, then restore it; base wrappers `0x4d1fd0` /
  `0x4d2000` do the analogous `+0x134` → `+0x135` save/restore. Their complete
  virtual-callback contexts were not recovered in this pass. They may matter
  to visibility correctness during engine work and should not be guessed.

Consequently, native door-aware area visibility is real. A port that currently
keeps render portals conservatively open can potentially reduce drawing by
porting these model flags and transition timing. It is **not** sufficient to
reuse an audio/light obstruction callback or close an area whenever a partly
open door is still solid. Before changing this behavior, map all model classes,
authored initialization, save restoration, temporary wrappers, and invalid-leaf
camera fallback. The bounded recommendation in this research pass is to retain
conservative open-area rendering until that mapping is completed. This does
not prevent implementing the independently established per-face PVS gate.

## What this does not establish

- No native camera-distance “unload the last Forest section” radius was found
  in the recovered world/actor visibility pipeline. PVS omission is not RAM
  eviction or disk streaming.
- Geometry/bitmap loading, engine bitmap registration, texture-handle caching
  and level exit are distinct questions addressed by other retained dossiers.
- A driver can manage video-memory texture residency below this renderer. This
  pass did not reverse engineer the complete Direct3D/D3D7 texture manager,
  its memory-pressure strategy, or observe original process IO while walking.
- The camera leaf is the basis of PVS; an “area” is authored BSP connectivity,
  not the port's square cell/chunk grid.
- Recovering a native face gate does not justify freezing remote AI or puzzle
  state. Those systems are not driven by `Vis_VisWorld` in this trace.

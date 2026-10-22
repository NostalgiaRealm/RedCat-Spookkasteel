# Native actor asset lifetime and camera movement

Date: 19 October 2026. Research only; no port or original-game files changed.

## Scope and evidence quality

Target: installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
The parent REA session owns Linux Hopper. A child REA session could bind target
metadata but could not acquire a second Hopper application, so all successful
dossiers below were requested and retained by the parent and inspected here.
Raw dossiers are copied alongside this file. No analysis symbols were renamed.

The shipped x86 assembly is the authority. Genesis reference files retained in
`temp_work/gargoyle-transparency-2026-09-29/genesis-reference` corroborate
structural function identities; they are a later source tree with post-2000
additions. Its bump mapping, stencil shadow, and other later branches must not
be attributed to this executable. `reference-excerpt-manifest.json` records
local hashes and exact source ranges inspected.

Hopper does not expose complete body ranges through its public API and the
decompiler sometimes loses ECX/EDX/stack ownership, invents argument counts or
shows impossible conditions. Statements here are checked against retained
assembly when those artifacts affect the claim. Static analysis identifies
code and relationships, not an observed live camera walk or measured memory
usage.

## Findings

### 1. Actor definitions are shared, keyed by file, and cached

`0x49ffa0` searches a sorted list using a comparator. A successful search returns
the existing reference-counted wrapper. Only a miss calls `0x49f690`, whose
literal name is `CAdamActorDefMgr::AddActorDefFromFile( %s )`.

The miss path calls `0x49f220`: allocate a 48-byte Adam wrapper, resolve/open its
file with the virtual-file helpers, and call Genesis loader `0x5b3fe0`, storing
the returned engine definition at wrapper offset `+0x1c`. The resulting wrapper
is inserted in the manager's sorted list and returned through reference-counted
handles. Wrapper reference count is at `+0x14`; this is distinct from Genesis'
own actor-definition reference counter.

Evidence:

- `actor-def-wrapper.json`, `ev_109f32df5b4f6d60fb62d7702be47aefea67b12494ba5558e556ab0df8c059be`.
- `actor-def-add.json`, `ev_12bdef5806abae1435f1ab1e701bf16f1d3f60f61ac1e6122f957bc2668bdfa5`.
- `actor-def-file-read.json`, `ev_4d02cb3e4295c26572a50a5156a97fb6371fd5e9769db3f464778dae0c0e6642`.
- `genesis-actor-def-file.json`, `ev_9c0b678b14399c436cf762c5504a4b704f34618b4adf33a98df0c8e707b7af37`.

These routines receive definition/file/list data. No camera position, view
frustum, spatial chunk index or camera-distance eviction threshold occurs in
this examined lookup/load path. This is positive evidence for shared loading;
it is not a global proof that no other subsystem ever pages a resource.

### 2. Level setup explicitly preloads actor files and their effect dependencies

`0x4f7790` identifies itself with
`CAdamSubLevel::PreloadDataAfterGameObjects(void): Process actors`.
It contains two configuration-selected branches:

- check all `*.act` files;
- `Preloading selected Actor Files only`, iterating the game's selected-file
  list.

Both invoke the file-preload helper `0x4f70e0`, which can enumerate a file
pattern. `0x4f6e60` (`PreLoadActorByFileName` by matching caller diagnostic and
behavior) normalizes a file name, obtains the cached/new definition through
`0x49ffa0`, and associates it with the sublevel through `0x4f68a0`.
Afterward `0x4f7790` walks all loaded actor definitions' INI particle-type
dependencies and preloads those actor files too. This prevents an effect
spawning for the first time with an unavailable actor definition.

`0x4f80f0`, explicitly named `PreloadDataBeforeGameObjects`, is a separate
earlier pass adding bitmap resources to the world. `0x4f9214` is its direct
call in sublevel initialization; `0x4f92b0` later invokes the after-objects pass.

`CAdamSubLevel::AddGameObject()` also emits a specific diagnostic when an actor
definition has not been preloaded (`0x4f484e`, literal `0x69c6a4`). Do not infer
that all unseen objects are lazily created from this diagnostic: the regular
level-loader preloads by data dependencies, not camera proximity.

Evidence:

- `actor-preload-after.json`, `ev_2c151202ff936adcb6ade87624630cb004d63bee739cb6eb22e108e9e3263d14`.
- `actor-def-preload-file.json`, `ev_dfcfa4ed093ec683105bc65fb169075a3572ae6df010299a2aa771ed7a7c240d`.
- Parent `sublevel-preload-dossier.json`, `ev_0d065c43260f346712570882fba3f2eb8cb661fb454cd8d3c7e0164461b5c2e7`.
- Parent strings search `ev_2b10017b972f5d9bd7c214fccc005202a8b13080eb4f58f98ecea91ce677dec7`.
- Retained `game-actor-preload.asm` and `game-actor-def-lifecycle.asm`.

The configuration selecting all versus selected actor files has not been
resolved to its current user-facing option or exact shipped INI default in
this sub-investigation. Do not describe the debug/check-all branch as the
unconditional release behavior.

### 3. Native actor definitions load body data and motion resources together

`0x5b3fe0` opens the actor's virtual directory, reads `Header`, conditionally
reads body data through `0x5b72f0`, then opens `Motions` and reads each serialized
motion. These file operations do not wait for a camera render call.

The corresponding reference `geActor_DefCreateFromFile` and
`geBody_CreateFromFile` read geometry plus numbered material bitmap entries.
The shipped assembly `0x5b72f0..0x5b7526` independently confirms that body
loader: open the geometry subfile, read its geometry, open the bitmap directory,
iterate the material count at body `+0x34`, and for every non-null serialized
bitmap marker open its numbered subfile and read the bitmap (`0x5c41c0`, call
at `0x5b7459`). `0x5b7464` passes integer **4** to bitmap mip-count setter
`0x5c31d0`. This is eager body/material loading before drawing, not camera
distance streaming. The source's same mip setting is therefore corroborated
by the shipped instructions, unlike its later bump mapping additions.

Evidence: `genesis-actor-def-file.json` above;
`native-body-bitmap-files.json` (`0x5b72f0`),
`ev_6c5bd5dd70abc6b6074970906f40b864d02431604047a732a7feb0bd3d76820a`;
`Actor-actor.c-745-834.txt`, `Actor-body.c-1524-1604.txt`.

### 4. Rendering preparation retains the actor's material bitmaps

Native `0x5b52b0` matches `geActor_RenderPrep`. It destroys an existing puppet
if one exists, then creates its replacement with `0x5cd4d0`. The new puppet is
stored in the actor; bounds are initialized. The dossier reports its only
direct caller as `0x5b9970` (world actor-add routine by surrounding structure,
with the call at `0x5b9a03`). This is setup on adding the actor, not an off-screen
poll or distance check.

`0x5cd4d0` initializes the puppet, invokes texture/material setup `0x5cd680`,
then creates a body instance. In the material loop at `0x5cd6ef..0x5cd757`, each
non-null bitmap is retained through `0x5c01c0` (bitmap reference creation) and
registered to the world through `0x5ba560` (`World_AddBitmap`). Its counterpart
`0x5cd7b0` destroys the puppet's body instance, unregisters each textured
material with `0x5ba5d0`, releases the bitmap through `0x5c02b0`, then frees
material/puppet storage. A shared body definition may still own its bitmap, so
destroying one puppet must not be equated to freeing that image everywhere.

Evidence:

- `native-actor-render-prep.json`, `ev_866874aee88c492a49c33be7d2975b4c03578cdda391dbb768c52b432b2e3f6f`.
- `native-actor-puppet-create.json`, `ev_c3492d519bb5cf6efc0d5f3b462f5c8251234ddd11a179d48e27c8c34ded67a2`.
- `native-actor-puppet-destroy.json`, `ev_0855a4f02415a8179cf6dbe11d36ca01372a6ffd94308bab98c60adcfb454916`.
- Parent `native-puppet-texture-bind.json` (`0x5cd680`), `ev_a263fa1d5739fdb1a43925760e7a7fd5cda3f292730fc595f9c1671122608373`.
- Parent `native-world-add-actor.json` (`0x5b9970`), `ev_bd3a274e2178179a4b5dc8cc997a835768ba58cccbc62678eb22ba3304d0fbd3`.
- `engine-actor-renderprep.asm`, `engine-puppet-lifecycle.asm`.
- Reference `Actor-puppet.c-185-250.txt`, `Actor-puppet.c-422-565.txt`.

No per-camera material deallocation appears in these constructor/destructor
paths. Driver texture-cache management is a separate question: an actor
holding a CPU `geBitmap` reference does not prove that its GPU texture remains
resident forever.

### 5. Actor/definition destruction is explicit and reference-counted

Genesis `0x5b3b90` matches `geActor_Create`: allocate actor/pose/motion state,
reference its supplied definition. `0x5b3e10` matches `geActor_Destroy`: return
after dropping an instance reference if still shared; otherwise release the
definition and puppet, pose and motion resources. The game-level creation call
is at `0x49c46b`, with its instance stored at Adam-actor offset `+0x114`.
Game helper `0x49c280` destroys that instance and clears the field. Its one
direct caller, `0x49b720`, writes the Adam-actor destructor vtable, removes the
actor's world registration if needed, calls that helper, releases the held
definition wrapper and tears down the remaining fields. This call is explicitly
object destruction, not a per-camera check.

Adam manager destructor `0x49f410` checks every held wrapper has reference count
one, reporting `actor-definition %s is still in use` otherwise. It then releases
the complete list. This is explicit manager teardown, not distance eviction.
The manager constructor is **`0x49f3b0`**, called from engine initialization at
`0x55c73f`; that call must not be mislabeled as a cleanup/destructor.

Evidence: `actor-def-cleanup.json`,
`ev_3c712b655c91ea0d06132f6b363b214647bf9f7e86c5de3ec3e4f7e23d9c0525`;
parent `native-game-actor-destroy.json`,
`ev_7e273bfd83f93d11bc024e4e9f832e8f26299220c6c8b17e721e0becaa5e53bc`;
`engine-actor-create-destroy.asm`, `game-actor-instance.asm`.

The exact duration for which each Adam manager/sublevel holds each definition
has not been fully traced through all virtual destructors here. It is safe to
say the cache owns references until explicit release; not safe to assert every
definition is released on each camera region crossing or each level switch.

## Bounded negative search: camera-driven destruction/recreation

`direct-call-sites.json` retains every direct x86 `call` to the selected targets
in the available complete objdump text, with its file hash. Results:

| Target | Direct call sites found |
| --- | --- |
| `0x49f690` AddActorDefFromFile | `0x4a00c9`, inside sorted-cache miss wrapper |
| `0x49f410` manager destructor | `0x49f3f3`, deleting-destructor wrapper |
| `0x49c280` game instance destruction helper | `0x49b76f` |
| `0x5b3b90` Genesis actor create | `0x49c46b` |
| `0x5b3e10` Genesis actor destroy | `0x49c293`, `0x5b84a4`, `0x5b9aa3` |
| `0x5b52b0` render prep | `0x5b9a03` |
| `0x5cd4d0` puppet create | `0x5b52da` |
| `0x5cd7b0` puppet destroy | `0x5b3e42`, `0x5b52c6`, `0x5cd655` |

The three puppet-destroy callers are actor destruction, explicit replacement
during render preparation, and constructor error cleanup. A direct
camera-distance unloading path is absent from this bounded set. Direct-call
text searches exclude indirect calls, virtual dispatch, inline equivalents
and unrecognized instructions; they must not be presented as exhaustive proof
of every possible native lifetime change.

## Conclusion for the parent investigation

The evidence supports **preload and share actor definitions; keep actor
instances and their gameplay state; cull drawing using visibility separately**.
It does not establish modern camera-neighborhood geometry/image streaming for
actors. The port's chunk-loading policy is therefore an intentional modern
resource/performance design where it goes beyond native visibility culling.

Any future streaming change should retain logical objects, script references,
native clocks and collision data independently from graphics. Avoid disposing
a shared actor definition just because one instance is outside view. Do not
confuse a hidden object with an unallocated actor, or a CPU-held bitmap with a
GPU texture currently resident in the driver's cache.

## Remaining questions

1. Trace every manager/sublevel-held definition release, including virtual
   destruction, if exact cross-level cache retention is needed.
2. Correlate driver cache eviction/upload policy with actor `geBitmap`
   ownership; the two are independent layers.
3. A passive original-game camera walk with file/memory/GPU allocation tracing
   would provide execution evidence. None was performed by this worker.

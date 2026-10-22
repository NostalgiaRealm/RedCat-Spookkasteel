# Actor/item memory sharing and room batching review

Read-only source and asset inventory, 19 October 2026. No source edits, tests,
builds or user save writes. Numerical values below are derived from imported
asset arrays, not a browser heap or GPU benchmark.

## What is already shared or pooled

- `CastleWorld.loadActor()` caches one template promise per actor stem. The
  imported JSON data, local positions/normals, joints, bones, clip/channel data,
  template geometry and template materials are one definition per loaded stem.
- `instantiateActor()` already uses the **same whole template geometry** for
  actors with no skeletal clips. Potions, money bags, health pickups, ordinary
  crates, trees and candles therefore do not currently allocate a complete
  geometry copy for every object. Textures also use stable handles keyed by URL.
- Animated instances clone the entire template geometry because position and
  normal arrays are CPU-skinned independently. Their UV and index arrays are
  copied as part of that clone even though animation never modifies them.
- `DebrisRenderPool` shares one geometry definition per prototype, reuses
  fragment roots/material cohorts, reserves nearby bursts and trims overflow.
  Fragments still draw as individual actors; their independent lighting,
  opacity/back-front passes and transparent sorting are intentionally retained.
- Smoke/flame billboards already use instanced geometry. This is not evidence
  that ordinary lit actor meshes are also instanced.

Thus pooling static potion/heart/crate **geometry loading** again provides little
new memory benefit. Real additional savings must target per-instance immutable
animation preparations, animated geometry's immutable arrays, or per-object
render/material overhead through a careful room batch.

## Safest immediate memory savings without instancing

### Share prepared animation tables per template data

`ActorAnimator` currently rebuilds a `prepared` Map, name lookups, bone-to-track
arrays and Hermite incoming/outgoing `Float64Array` tangents for every instance.
These depend only on immutable template clip data. Runtime methods read them;
current pose transforms, clocks, transitions and transition snapshots are
separate instance fields.

A `WeakMap` keyed by `template.data` can cache the prepared entries once, just
as local bone radii and conservative animation radii already do. Keep each
animator's mutable transforms, sampled fields, interpolation scratch arrays,
outgoing transition positions/rotations and geometry independent. Do not share
an animator object or its bone transforms.

Approximate tangent storage from imported translation-channel key counts:

| Definition | Tangent bytes currently prepared per instance | UV/index bytes copied per animated clone |
| --- | ---: | ---: |
| RedCat | 99,120 | 7,192 |
| Knight | 15,888 | 4,628 |
| Zombie | 26,544 | 4,644 |
| Spider | 8,640 | 2,660 |
| Frog | 10,080 | 2,608 |
| Witch | 35,952 | 6,324 |
| Hand torch | 0 | 696 |

The tangent totals exclude JavaScript Map/entry/track wrapper overhead. Actual
savings scale with repeated instances of a definition; a single RedCat only
benefits if additional matching instances exist.

### Share immutable typed-array storage with independent GPU wrappers

An animated geometry must retain independent position/normal arrays and posed
bounds. Its UV/index **typed-array contents** can safely reference the template
storage, because runtime skinning never writes them.

Crucial lifetime distinction: sharing the same `BufferAttribute` object across
different disposable `BufferGeometry` objects is unsafe under the current
streaming lifetime model. The shipped Three.js `WebGLGeometries.onGeometryDispose`
calls `attributes.remove()` for every attribute and index, and
`WebGLAttributes.remove()` deletes that GPU buffer without shared-owner counting.
Evicting one actor could invalidate another actor's shared attribute/VAO.

The minimal safe implementation uses **distinct BufferAttribute wrappers** whose
`.array` points at one immutable template UV/index typed array. CPU storage is
shared; each geometry still owns its GPU attribute allocation and disposal.
Claim CPU savings only for that change. True GPU attribute sharing needs an
explicit refcount/VAO ownership redesign or sharing a whole geometry, not merely
replacing cloned attributes with the template's exact attribute object.

`localPositions`, `localNormals`, joints and imported rest data are already
shared through `template.data`; there is no extra per-instance rest-data copy to
eliminate. Converting all imported numeric arrays to compact typed arrays may
save per-definition heap, but should be a separate measured change because
some consumers use Array-specific behavior and Float32 conversion can affect
exact imported positions.

## Concrete static batch candidates

Imported asset inspection found:

| Definition | Vertices | Indices | Materials | Skeletal clips |
| --- | ---: | ---: | ---: | ---: |
| `ipotion` | 55 | 189 | 1 | 0 |
| `ihealths/m/l`, `hartcontainer` | 32 | 180 | 1 | 0 |
| `rccrate`, `brcrate`, `wkcrate` | 24 | 36 | 1 | 0 |
| `imoneys/m/l` | 157 | 402 | 3 | 0 |
| `tree` | 108 | 240 | 1 | 0 |
| `kandela` | 106 | 360 | 1 | 0 |
| `htorch` | 57 | 120 | 1 | 1 |

Start with opaque one-material potions/health pickups and ordinary crates.
Their spinning/bobbing/authored transforms can be represented by each instance
matrix without sharing animation clocks. Money bags can batch too, but require
the existing three material groups/passes. Do not include skeletal hand torches
in the first batch. Do not merge distinct money/health visual variants just
because their vertex counts match.

## Per-object native lighting must survive batching

`syncActorLighting()` currently computes each actor's own floor ambient, Sun
reference/visibility and selected nearest dynamic lights. `applyActorLighting()`
patches a Lambert shader with that actor state's independent uniforms and
per-vertex byte-domain lighting/modulation. Materials are cloned per instance
to keep those uniforms and fades independent. There is no CPU vertex-colour
array to merge; the final vertex-light calculation currently runs in the shader.

An ordinary shared-uniform InstancedMesh would light every instance from one
actor's sample, regressing shadows, floor lighting, flames and actor colour
animation. A proper batch needs per-instance ambient, fill colour/normal,
dynamic-light directions/colours/count and any per-instance colour/opacity.
Use the existing sampling functions per original object and upload their
results into packed instance attributes, retaining the existing shader's exact
lighting math and normal transformations.

Most candidate definitions request two dynamic lights. Packing scalar count
and opacity into existing vec4 slots keeps this plausible within mobile
attribute limits. The supported native maximum is 32, however: definitions
with larger capacity must fall back to individual rendering or use a separately
designed texture-backed lighting table. Query the renderer's attribute limits;
do not assume every device can accept an arbitrary added attribute count.

Simply sharing a material and changing uniforms in `onBeforeRender` is not an
equivalent draw-call batch. It still submits each actor separately and must
also account for Three's material/uniform refresh caching; changing a state
object does not automatically guarantee every custom Lambert uniform uploads.

## Safe room-batch ownership design

1. Keep original gameplay objects and CPU actor roots intact. Script names,
   switches, pickup IDs, health, targeting, collision, save snapshots, effect
   bounds and transform attachments continue to use those originals.
2. Add a render-only batch proxy for compatible static definitions/material
   variants within one authored room (optionally existing spatial cells).
   Each visible original maps to an instance slot; compact active slots or
   update a visibility field when picked up/destroyed/disabled.
3. Apply **each original's** current room/PVS/frustum eligibility before adding
   a slot. One visible instance must not make every object in that room draw.
   Large-room batches must preserve whole visible artwork and moving platforms.
4. Batch resource admission follows existing raw/preparation masks, predicted
   range, queue budgets and readiness gates. Current slots use current-distance
   rendering; future preparation never adds draws. Room departure releases its
   instance buffers without invalidating a template geometry still used by a
   different room or unmanaged effect.
5. Integrate batch source geometry/material/texture owners with residency or
   protected-resource scans. Do not make original actors nonresident and then
   allow residency to dispose geometry still referenced by a batch proxy.
6. Route lighting through the original actor states even if original meshes are
   parked for rendering. The existing `traverseVisible` lighting walk would
   otherwise skip batched originals. Avoid duplicating sampling algorithms.
7. Exclude ghosts, enemy death fades, custom overrides/transparency, animated
   geometry, skeletal enemies, multi-part bosses and moving attachments at
   first. Transparent instanced meshes cannot reproduce per-object sorting
   automatically. Keep the established debris pool until its fade ordering has
   an explicit compatible batch design.

The primary benefits of a static batch are fewer draw calls, per-object
materials and renderer submissions. Since static geometry/textures were already
shared, do not report their existing sharing as newly saved model memory.

## Final read-only review of implemented lossless sharing

Reviewed the new `src/actor-geometry.js`, its use from `instantiateActor()` and
the `prepareActorClips()` cache in `src/animation.js`. No already passed tests
were rerun. No concrete campaign/runtime blocker was found.

- Animated actors still receive separate BufferGeometry objects with cloned
  position/normal attributes, independent posed boxes/spheres and the same
  imported groups/draw range. Materials, actor lighting states, transforms and
  all script/collision identity remain per original actor. Static geometry
  continues using its existing whole-template sharing path.
- UV/index CPU arrays are shared only behind freshly constructed
  BufferAttribute wrappers. Their names, item sizes, normalized flags, GPU
  types and usage are preserved. Independent wrapper identities preserve
  Three's per-geometry GPU allocation/disposal and avoid the shared-buffer/VAO
  lifetime hazard identified above. Runtime actor posing writes only its own
  position/normal arrays; the inspected UV/index consumers are read-only.
- The helper avoids creating and then discarding deep UV/index copies. Other
  attributes still use ordinary cloning, including interleaved UV data. Morph,
  unfamiliar geometry types and indirect geometry retain the ordinary clone
  fallback. Imported campaign templates are plain BufferGeometry without those
  exceptional features.
- The prepared-clip cache is keyed by the shared immutable imported data object
  in a WeakMap. It reuses name/bone lookups and Hermite tangents, whose inspected
  runtime consumers read them only. Every animator retains private bone
  transforms, time, clip selection, interpolation scratch storage, sampled
  state, transition weight and outgoing transition pose arrays. Independent
  attacks, deaths and animation phases therefore do not become synchronized.
- Weak keys do not turn old level definitions into a global permanent asset
  registry. The cache adds no explicit world ownership or residency callbacks.
  Ordinary world/resource disposal remains unchanged, and cached prepared data
  becomes collectible with its actor definition.
- No material-lighting, transparency, actor collision, pickup placement,
  resource admission, draw ordering or batching implementation changed. The
  achieved savings are CPU array/preparation memory and setup work; GPU buffers
  and draw counts remain independent. No GPU-memory or instancing benefit
  should be attributed to this particular lossless-sharing patch.

## Final read-only review of integrated exact resource aliases

Reviewed the later `world.js` resource-index loading, geometry cache and actor
texture canonicalization against the generated index and its generator. No
tests were rerun for this review. No concrete blocker was found.

- The optional sidecar is awaited with the actor manifest before actor creation.
  A missing/unreadable sidecar or a different format disables aliases and keeps
  ordinary per-stem/per-URL behavior. No duplicate actor creation races with
  alias metadata arriving late.
- `loadActor()` still fetches the requested actor's own JSON. Only its render
  geometry cache key is canonicalized. The synchronous geometry creation after
  each JSON response ensures the first completed matching definition can fill
  the cache; subsequent matching definitions reuse it. The otherwise unused
  canonical actor's JSON is never fetched just to obtain matching geometry.
- Settings, native bounds metadata, value/type, materials, texture references,
  actor-specific culling side, skeleton, local rigid vertices and clips remain
  sourced from the requested definition. The generated fingerprint includes
  all render positions/normals/UVs/indices/material groups, so reuse cannot
  substitute different triangle topology or material-group assignments. Money
  bag/health variants retain their own materials and gameplay values.
- Animated instances clone their mutable pose buffers from the shared rest
  geometry using independent attribute wrappers, as reviewed above. Static
  instances share the whole geometry. Neither path writes a pose into the
  shared rest template, so a static/animated definition with identical render
  data cannot inherit another definition's current pose.
- Texture aliases apply only beneath the exact `assets/actors/` namespace.
  Actor overrides, replacement ghost artwork and other texture namespaces
  remain independent. Actor PNGs use the same flip, colour space, wrapping,
  filtering and anisotropy configuration, so exact-PNG aliases may safely use
  one stable Texture handle. Material opacity, variant colour, light uniforms
  and alpha thresholds remain per material, not properties of the shared map.
- `world.resources` and actor residency identify resources by object identity.
  Reusing whole matching geometries or stable texture handles therefore joins
  their existing resident-owner counts. Another active actor or protected
  consumer prevents disposal; truly unowned GPU storage can still be released
  and prepared again later. The index itself does not pin artwork resident.
- Alias generation uses only exact cached content and emits direct lexical
  canonicals. It changes no source JSON/PNG. The importer hook regenerates after
  the manifest, and the standalone generator supports reproducible cached-only
  regeneration. Imported settings/animation remain outside resource identity.

Unlike the earlier CPU-only UV/index optimization, this exact whole-geometry
and map reuse can also reduce GPU allocation for matching static definitions
and duplicate artwork. It still does not instance or batch distinct actors;
individual transforms, visibility, collision and draw submissions remain.

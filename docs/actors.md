# Actor assets and animation

`tools/import_actors.py` reads Genesis3D VF00 actor archives, nested body archives, rigid bone attachments, per-vertex bone assignments, texture/material records and named motion keyframes. The original `.act` files are read only. All 165 actors in this installation export without motion warnings.

`assets/actors/manifest.json` maps lowercase actor names to JSON geometry, materials, counts and settings. Each actor JSON contains bind-pose render vertices, normals, UVs, triangle indices, material groups, source-local vertex/normal coordinates, their bone indices, the bone hierarchy and exported animation tracks. The runtime applies the INI initial rotation and scale; actor geometry itself retains its original coordinates.

`src/animation.js` samples the exported translation and quaternion tracks, composes parent × attachment × sampled motion transforms, and skins each rigid vertex and normal. Animated instances own their posed position/normal buffers and bounds, while immutable clip preparation and UV/index CPU arrays are shared. Source definitions and textures are cached. RedCat selects original clips from movement/jump/attack state. Environment animation clocks advance off-screen, with vertex sampling deferred until nearby; looking away no longer pauses their timeline.

Original motion-event dispatch and scripted camera timelines are implemented;
see [motion playback](motions.md) and [camera recovery](camera-native-status.md).
Hurt/death/respawn clip rates and completion gates are also connected in
[player reactions](player-reactions-and-projectile-contact-native.md).
General cross-clip blending and the full native camera spring solver are not
implemented; that narrower limit should not be read as missing event playback.

RedCat has 16 clips including idle, walkfw, walkbw, directional movement, jump/fall, shoot, charge, hit, death and respawn. The animation tests sample all clips, verify finite bounded positions and normalized normals, and verify looping and independent instances.

Material PNGs preserve original palette colors and transparency. Actor UVs are exported with `1-v`, so their Three.js textures use `flipY=true`; BSP textures use `flipY=false`. INI filename lookup is case-insensitive to match Windows.

Actors bound to a BSP `Model` now follow that brush's original transform, including their authored offset from its pivot. The importer also retains INI rotation speeds. This restores the castle cannonballs and cave rolling rocks. See [model attachment evidence and verification](actor-model-attachments.md).

## Repeated items and shared resources (19 October 2026)

Repeated static pickups/scenery already use one geometry per imported definition
and one lazy texture handle per image URL. For example, the Forest's sixty
corner trees share a geometry. Collecting a potion, rotating an item, damaging
a crate or hiding one actor continues to affect that object's own state.

The runtime now also shares exact duplicates exported under **different names**:

- `assets/actors/shared-resources.json` maps identical render geometry and exact
  PNG bytes to canonical identities. The imported library has **165 actor
  definitions but 134 unique render geometries**, and **174 PNGs but 93 unique
  byte sequences**. The index has 31 geometry aliases and 81 texture aliases.
  This inventory is not a claim that the whole library is loaded during play.
- Each actor still loads its own settings, skeleton, motions, material colors,
  collision configuration and gameplay value. Only matching positions, normals,
  UVs, indices and material-group layout share the cached base geometry.
  The first matching definition loaded supplies the body; an otherwise-unused
  canonical actor JSON is not fetched. Image aliases share one decoded image,
  texture handle and GPU image allocation through the existing room loader.
- Animated poses use `src/actor-geometry.js`. Their mutable positions/normals
  and posed bounds stay private. UV/index typed arrays share CPU storage but
  have **separate BufferAttribute wrappers/GPU handles**. Three removes an
  entire geometry's attribute handles when it is disposed; sharing the handles
  themselves would invalidate another visible actor on room eviction.
- `ActorAnimator` caches the read-only clip-name map, bone/track mapping and
  Hermite tangent arrays by definition in a WeakMap. Bone matrices, clocks,
  transitions, scratch arrays and saved pose state remain per instance. The
  cache does not keep departed level definitions alive.
- Materials and native lighting uniforms remain independent. Ghost/death
  opacity, per-actor floor/Sun/dynamic lighting, texture overrides, targeting,
  collision and script IDs keep their existing behavior. The resource index
  only rewrites actor-image URLs; other asset namespaces are unchanged. Missing
  or incompatible index files fall back to the previous loader.

This is **resource sharing**, not a new single-pass room renderer. Drawing many
copies together is called *instancing* or *batching*. It can reduce draw calls,
but preserving this game's per-actor lighting would require per-instance light
attributes and explicit room/PVS membership. Blindly sharing the current
materials/uniforms would change lighting and fade behavior. No such render
pipeline change is made here; room selection and the forward-loading fixes
remain intact.

The three moneybag variants illustrate the distinction. Their geometry is
identical and their nine exported image references contain only two unique
PNGs, so they now use one body and two loaded images. Their independent
5/25/50-point rewards and material settings remain unchanged. Rendering still
uses the existing three material groups for each visible bag. A future room
batch could combine those submissions, but this work does not claim fewer
draw calls.

### Reproduce the resource index

The actor importer writes the index after its ordinary manifest. It can also
be regenerated from the existing cached imports, without the original game,
Pillow, an asset reimport or a release build:

```sh
python3 tools/import_actor_resources.py
```

An alternate cache can be supplied with `--actors /path/to/assets/actors` and an
alternate index destination with `--output /path/to/shared-resources.json`.
Regenerate after editing imported actor geometry or actor PNGs. The generator
is deterministic, uses direct lexicographic aliases without chains, and leaves
the original imported files unchanged. Hashing runs at import/regeneration
time, never during room entry or rendering.

### Focused verification

An isolated browser compared all five starting views and a read-only copy of
the current Castle save. Every paired screenshot was **bit-identical**, with
equal actor positions/normals/UVs/indices/groups, native lighting uniforms,
gameplay snapshots and draw-call counts. Off-room disposal/re-entry checks for
a hand torch and guardian also preserved their images/state with WebGL error
zero. The current Castle view's actual renderer texture-object count dropped
from **54 to 38**, and its geometry-object count from **131 to 129**.

| Loaded level | Counted actor geometry + animation typed storage saved |
| --- | ---: |
| Het Bos | 21,472 bytes |
| Het Kasteel | 746,338 bytes |
| Het Kerkhof | 1,350,430 bytes |
| De Grotten | 906,920 bytes |
| De Kasteeltoren | 392,636 bytes |

These are exact unique backing-array counts for the measured actor data, not
the browser's entire JavaScript heap or total game memory. Decoded images and
driver allocations are separate; image-byte estimates assume RGBA8/mipmaps.
Lazy/unloaded textures are not counted as fully resident artwork. Object count
reductions do not establish an FPS improvement.

Eleven new focused unit cases cover sharing, independent poses/lighting,
collision, collection, original reward values, save restoration, actual Three
disposal, shared ownership/re-entry, concurrent loading and fallback. Ten
generator check categories verify reproducibility and exact aliases. Run only
the relevant source cases with:

```sh
node --test tests/actor-resource-sharing.test.mjs tests/actor-resource-aliases.test.mjs
```

Source snapshots, copied save, inventories, checks, paired screenshots and the
comparison are retained in
[`temp_work/room-item-sharing-2026-10-19/`](../temp_work/room-item-sharing-2026-10-19/).
See [comparison data](../temp_work/room-item-sharing-2026-10-19/comparison.json).
No historical full suite, full campaign run or release build was performed.

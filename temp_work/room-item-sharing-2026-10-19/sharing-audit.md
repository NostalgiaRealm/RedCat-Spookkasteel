# Actor resource sharing: source audit before implementation

Date: 2026-10-19. This is a retained implementation research note, not a claim that the requested batching has already shipped.

## Existing reuse

`CastleWorld.loadActor` caches one promise/template per case-normalized actor stem, including one source geometry and lazy texture identities. `instantiateActor` already shares the complete template geometry when the actor has no animation clips. Actual potion, money-bag and heart assets (`ipotion`, `imoneyl`, `imoneym`, `imoneys`, `heart`) have no clips. The older unused coin assets (`icoinl`, `icoinm`, `icoins`) are static too. Their repeated scene instances therefore do not duplicate their position/normal/UV/index arrays today. They do retain independent meshes, cloned materials, lighting uniforms and draw calls.

Static geometry sharing is correct because pickup movement/rotation changes object transforms, not template vertex data. Visibility and collection remain per-object. Batching those objects would primarily reduce draw submission/material overhead, not remove a currently duplicated full pickup mesh buffer.

## Additional safe sharing

Animated actor creation currently deep-clones every geometry attribute and index. `ActorAnimator.flushGeometry` writes the position and normal arrays, updates their versions, and replaces each posed geometry's bounds. Position, normal, posed bounds, bone transforms, animation clocks, transition snapshots, shader lighting uniforms and mesh visibility must remain independently mutable.

UV and index data are immutable during these poses. Their backing typed arrays can be reused safely across private BufferAttribute wrappers. Sharing the actual BufferAttribute identities can additionally reuse GPU buffers, but requires explicit lifetime protection, described below. Other future attributes must be classified individually rather than assumed immutable.

`ActorAnimator.prepared` currently reconstructs a read-only clip-name map, bone track mapping and Hermite tangent arrays for every animator. A WeakMap keyed by imported actor-data identity can reuse these. Evaluation reads them; outgoing transition positions/rotations and mutable scratch/bone matrices remain per animator.

`actor-resource-inventory.json` records concrete byte counts. A knight has 4,628 immutable UV/index bytes and 7,368 mutable pose bytes per geometry; RedCat has 7,192 immutable UV/index bytes and 11,568 mutable pose bytes. These figures exclude source JSON arrays, materials and controller state.

## Important GPU eviction constraint

The bundled Three renderer's `WebGLGeometries.onGeometryDispose` unconditionally calls `attributes.remove` for the geometry index and every attribute. It does not reference-count shared attributes across separate geometry objects. Reusing a BufferAttribute identity in multiple independent animated geometries therefore becomes unsafe if ordinary geometry disposal removes a sibling's still-live GPU buffer.

Safe options are separate attribute wrappers around shared CPU arrays, or explicit shared-attribute ownership/disposal handling integrated with the room residency controller. A test must exercise the actual renderer disposal listener, not merely count the geometries' outer dispose events. Final world teardown and ordinary off-room eviction both matter.

Static actors that share the whole geometry already benefit from `ActorRenderResidency.resources` owner/resident counts: it disposes the resource only when its last resident owner leaves. Animation-specific wrappers have separate geometry identities, so the existing geometry-level counts alone do not solve shared-attribute GPU lifetime.

## Material and gameplay boundaries

Materials currently clone because each actor's native floor/Sun/dynamic lighting uniforms differ. Ghost overrides and death fading also replace/change materials independently. Material sharing without an instanced per-object lighting channel would produce lighting/opacity cross-talk. Texture identity is already shared independently of these material clones.

Collision records depend on the private animated position attribute/version and each mesh world transform. UV/index reuse must leave those pose buffers, visibility predicates and collision cache invalidation unchanged. Existing debris pooling already shares one geometry per fragment prototype while maintaining per-fragment materials/lighting and root physics.

## Focused test plan

- Real repeated static potions: one geometry/map, independent transforms, material lighting and collection visibility.
- Real repeated animated knights: independent pose arrays, bounds, clocks and transitions; shared immutable data; changing one actor must not alter its sibling or template.
- Read-only clip/tangent preparation shared per data identity, independent mutable animator state.
- Actual renderer disposal behavior under off-room eviction: a sibling's shared GPU attributes remain valid until the last owner leaves.
- Re-entry and repeated visibility changes avoid duplicated uploads while preserving room eligibility and shared resource counts.

No gameplay files, builds or historical test suites were changed by this audit.

## Implemented outcome and focused checks

The parent implementation added `cloneActorPoseGeometry`: animated instances share only UV/index CPU backing arrays, using distinct GPU BufferAttribute wrappers. Pose attributes and bounds stay private. Prepared actor clips/tangents now reuse one WeakMap entry per imported data identity. Static pickups continue to share their existing full geometry.

The new `tests/actor-resource-sharing.test.mjs` has six focused cases covering the plan above, including the bundled Three disposal listener itself. Five cases passed on their first run. The remaining potion-lighting expectation was corrected: original potion settings deliberately force white ambient, whereas knight settings sample independent floor lighting. Both changed lighting cases then passed. Evidence is retained in `actor-resource-sharing-initial.log` and `actor-resource-sharing-lighting-cases.log`; no historical test suites or builds were run.

The parent subsequently added the generated `shared-resources.json` aliases. Five additional integration cases in `tests/actor-resource-aliases.test.mjs` passed together (`actor-resource-aliases-tests.log`). Actual S/M/L moneybags now share one exact body geometry object and two decoded map identities instead of three body geometries/nine file-map identities. Their own data/settings/materials remain separate and the real pickup logic still awards 5/25/50 points. The checks also cover concurrent normalized actor-name caching, no extra fetch for an otherwise-unused canonical definition, missing-sidecar fallback, independent material colour/opacity/transparency and unchanged non-actor URL namespaces.

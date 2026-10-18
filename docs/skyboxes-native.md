# Original skyboxes: campaign audit and corrections

Checked on 12 October 2026. This follow-up corrects sky **face placement, UV
orientation and boundaries**, beyond the earlier mixed-size upload repair.

## Evidence from the original

The installed `RcHcGame.dat` has SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Its sky construction routine at **0x5b9f30** initializes the six faces as
**top (+Y), bottom (-Y), left (-X), right (+X), front (-Z), back (+Z)**.
All 72 vertex coordinates at 0x5b9fbf–0x5ba10e were extracted and agree with
the retained Genesis3D reference `World/World.c`, `BuildSkyBox`. The UV loop
at 0x5ba10e–0x5ba146 sets corners `(0,0), (scale,0), (scale,scale), (0,scale)`.
The face setup at 0x5ba26d–0x5ba276 skips negative texture indices.

The reproducible extraction script, disassembly and coordinate report are in
[`temp_work/skybox-native-2026-10-12/native/`](../temp_work/skybox-native-2026-10-12/native/).
The retained reference engine is under
`temp_work/gargoyle-transparency-2026-09-29/genesis-reference/`.
It is a later source branch; the binary check above independently confirms
the face geometry and UV convention in this game's executable.

All five original BSP hashes and sky records match the imported level
manifests. All **ten assigned sky images** across the four sky-bearing levels
match their original palette-decoded RGB pixels exactly, including dimensions
and opaque alpha. The audit script and report are retained in
[`temp_work/skybox-native-2026-10-12/assets/`](../temp_work/skybox-native-2026-10-12/assets/).

## Corrected face mapping

The port preserves the original world coordinates, but formerly passed the
native face array straight into `THREE.CubeTexture`. Three expects a different
order and its ordinary background-cube shader negates the lookup X component.
This put ceiling artwork on a side, side artwork overhead/underfoot, and
exchanged front and back.

[`nativeSkyboxFaces()`](../src/skybox.js) now supplies native slots
**`[2, 3, 0, 1, 5, 4]`** to Three, with a **180-degree turn of top and bottom**.
The side UVs need no further transformation. Missing faces no longer borrow
another face's artwork; they are blank black. Native skips these faces rather
than synthesizing an image. Black is a deterministic fallback, not an attempt
to reproduce undefined contents of an uncleared original framebuffer.

The native assignments, before conversion to Three, are:

| Level | Top | Bottom | Left | Right | Front | Back |
| --- | --- | --- | --- | --- | --- | --- |
| Het Bos | skyrood | unassigned | skyrood | skytest1 | skyrood | skyrood |
| Het Kasteel | sky00 | Air_Wtr00 | skylv1 | skylv1 | skylv1 | skylv1 |
| Het Kerkhof | skystars | unassigned | skyg | skytest1 | skyg | skyg |
| De Grotten | unassigned | unassigned | unassigned | unassigned | unassigned | unassigned |
| De Kasteeltoren | sky00 | sky00 | skyg | skyg | skyg | skyg |

All assigned skies have rotation rate **0**, axis `[1,0,0]` and draw scale **1**.
De Grotten has rate 10 but no assigned sky images or SKY polygons, so it has
no animated sky. Its existing fallback background remains unchanged.

Original PNGs remain untouched. The existing size normalization still makes
128/256-pixel images upload-compatible at 256 pixels, capped by the GPU limit.
Repeated images share conversion canvases. All conversion happens once during
loading, with no per-frame canvas work or additional cubemap draw calls.

## Authored sky boundaries

The reference engine's `RenderSkyThroughFrustum` renders sky through original
SKY-marked BSP polygons. Discarding those boundaries can expose distant rooms.
The Graveyard already retained them as depth-only masks; this now also applies
to the Forest and Castle:

| Level | SKY material groups | Imported triangle vertices retained |
| --- | ---: | ---: |
| Het Bos | 2 | 7,071 |
| Het Kasteel | 2 | 543 |
| Het Kerkhof | 10 | 5,793 |
| De Grotten | 0 | 0 |
| De Kasteeltoren | 0 | 0 |

All belong to static world model 0. Existing chunk streaming controls their
residency. Depth is drawn before ordinary geometry: scenery behind the boundary
is hidden while scenery in front remains visible. No replacement walls or
ceilings are invented, and collision is unchanged. This is a portable rendering
equivalent, not a claim that Genesis3D used a WebGL depth prepass. The separate
[moving-model PVS fix](graveyard-sky-native.md) is preserved. The Tower's assigned
cube is normally hidden by its enclosed world; it has no authored SKY portals.

## Focused verification and limits

```sh
node --test tests/skybox.test.mjs
node tests/skybox-scenes.mjs
```

Six unit checks passed. The browser check loads **all five real levels** in
an isolated profile and compares the actual loaded cubemaps against an
independent six-quad scene with the extracted native vertices and UVs. It
covers six cardinal directions and four corner views for each assigned sky,
plus an asymmetric fixture to detect cap rotation mistakes: **50 views**.
Sampled interior pixels differ by at most one 8-bit channel step. Translating
the camera causes no sky parallax. There were no GPU, browser or HTTP errors.

The same check verifies that every authored SKY vertex is retained and that
an actual loaded boundary hides a marker behind it while allowing one in
front. No SKY masks are added to the Caves or Tower.

The comparison excludes samples close to cube seams, where modern seamless
cubemap filtering differs from separately clamped native faces. Reference
images use the same uniform-size resampling as the WebGL upload. These checks
establish native face placement and orientation, not pixel-for-pixel agreement
with every historical Direct3D driver's filtering or gamma. No matching-frame
capture of the running original executable was made.

The complete passing report and sky/reference/in-game screenshots are in
[`scenes-1791770717257/`](../temp_work/skybox-native-2026-10-12/scenes-1791770717257/).
The old October 5 test compared Three's cube mapping to itself; it established
upload compatibility, **not native orientation**. The independent quad test
replaces it. No release builds or unrelated gameplay suites were run, and the
user's live session and saves were not modified.

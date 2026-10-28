# Graveyard sky boundaries

The look-up issue concerns Level 3, **Het Kerkhof** (`lvl02a`). It is separate
from the caves. The original installation and existing packages remain unchanged.

## Original data and rendering behavior

The original `Levels/lvl02a.bsp` SHA-256 is
`0ead8d93e1802b3edf8cbcd3135e6e042179061ccdb4511fdc1921fe4e01f095`.
It matches the source hash recorded in `data/levels/lvl02a/level.json`.

The graveyard has ten static groups with texture-info flags `32774`
(`SKY | FULLBRIGHT | NO_LIGHTMAP`), totaling **5,793 vertices**. These include
authored sky ceilings and side boundaries. Their original triangles are already
present in `mesh.bin`; no replacement ceiling or invented geometry is needed.
The cube background uses the original `skystars`, `skyg`, and `skytest1` textures.

The original engine treats a sky face as a portal to the sky image. In
[Genesis3D World/World.c](https://github.com/RealityFactory/Genesis3D/blob/master/World/World.c),
the `TEXINFO_SKY` branch builds a frustum from the authored face and calls
`RenderSkyThroughFrustum`. That routine clips the sky cube to the face's frustum.
The inspected local source has these operations at lines 2395–2404 and 4087 onward.
It does not simply discard the face and render all remaining map geometry
against an unrestricted background.

## Reproduced cause and correction

The remake previously skipped every SKY group. Its cube background supplies
color, but it cannot prevent other sections of the map from appearing through
those missing boundaries.

A concrete reproduction uses camera position
`[1562.5387369791667, 116, -1890.79052734375]`. A vertical ray first intersects an
original SKY roof at **Y176** (triangle beginning at mesh vertex 2658). Beyond
it, the same ray intersects unrelated `grvyrd04` world geometry at **Y528** and
**Y664**. With the sky boundary omitted, higher walls, doors, and platforms can
appear above the current corridor.

The renderer now retains those exact imported SKY spans as depth-only meshes
in `lvl02a`. They draw before ordinary meshes with `colorWrite=false`,
`depthWrite=true`, and `renderOrder=-100`. The cube background remains visible
through the boundary, nearby geometry can draw in front of it, and geometry
beyond it fails the depth test. This is a portable rendering implementation of
the authored sky boundary, rather than a claim that Genesis3D used this exact
depth-prepass technique. That SKY-material correction was initially scoped to
the graveyard. The [12 October skybox audit](skyboxes-native.md) extends it to
the Forest and Castle's authored SKY polygons and corrects sky face placement
and orientation across all assigned skies. The Caves and Tower have no SKY
polygons. The separate moving-model visibility correction below uses the
original PVS data across all five levels.

## Distant gate visible through a sky seam (2026-10-09)

The later floating-fence report has a different cause. From the copied save's
camera `[2240.679048124565, 105.26586600094487, 528.412264482492]`, a ray through
the fence first crosses original face **5985** at approximately
`[2069.29, 171.47, 351.88]`. This is an authored **alpha-zero** face, with texture
`Benedeti` and flags `16`, between nearby SKY faces. Faces 5984 and 5986 are
adjacent transparent pieces. None is a missing imported SKY polygon.

Farther along the ray are gate models **50 and 51**, with the `hek_door`
cutout texture, roughly 1,950–2,000 world units from the camera. The original
camera leaf is **3532**. Its PVS excludes both gate models. The port's geometry
streamer nevertheless admitted every moving brush whenever it was inside the
view frustum, regardless of BSP visibility. Static PVS and sky depth meshes
were therefore insufficient to hide these gates.

The Genesis3D reference rendering path checks moving models separately:

- `World/World.c`, `CalcBSPModelInfo`: use the model's **root-node bounds**,
  rather than its tighter rendered-face bounds.
- `World/Vis.c`, `ModelVisible` and `Vis_VisWorld`: test those bounds against
  visible BSP leaves and set the model's visibility frame.
- `World/Trace.c`, `Trace_BBoxInVisibleLeaf`: traverse the BSP sides touched by
  the box and accept it if any touched leaf is visible.
- `World/World.c`, model rendering loop: skip models without the current
  visibility frame.

The local reference source is retained in
`temp_work/gargoyle-transparency-2026-09-29/genesis-reference/World/`.
It is a later Genesis3D source branch, not recovered source for `RcHcGame.dat`.
The face topology, bounds and PVS used for this reproduction are taken directly
from the installed game's original BSP. This investigation did not capture a
matching frame from the original executable.

The original root boxes are:

| Model | Minimum | Maximum |
| --- | --- | --- |
| 50 | `[804, 400, -976]` | `[1144, 784, -712]` |
| 51 | `[720, 400, -976]` | `[1060, 784, -712]` |

They include the original approximately 128-unit margin around the model
artwork. Both boxes remain invisible from leaf 3532 even with the one-unit
transform epsilon. Both are visible from the gate's own room.

`tools/import_visibility.py` now preserves these exact root boxes in the
optional `modelBounds` field of `data/visibility/lvl*.json`. The previous
metadata fields and PVS bitsets are unchanged. Regenerate them from a local
installation with:

```sh
python3 -B tools/import_visibility.py --installation "/path/to/RedCat Spookkasteel"
```

`WorldGeometryStream` tests a whole model's box at its current rendered
transform, expanded by one unit. All its material chunks share one result.
The box and BSP query are cached until the model pose or camera PVS changes.
Stationary models perform no repeated BSP tree walks on unchanged frames.
Without valid camera PVS or the optional imported bounds, rendering falls back
to the conservative frustum check.

The fix keeps the authored transparent faces and original fence cutouts. It
does not create a wall, change collision, alter gate logic, or hide a gate
permanently. It also leaves sound/music scheduling unchanged.

## Current focused validation

Run from the source directory:

```sh
node --test tests/world-model-visibility.test.mjs
node tests/graveyard-sky-gap-scenes.mjs
```

The browser check also accepts an optional copied-save JSON path. It uses an
isolated profile, reproduces only the old moving-model bypass, and compares
the same views with the correction enabled. At the reported view and two
eight-unit camera offsets, **419 / 346 / 311** fence pixels became sky, with
zero changes to nearby lower scenery. The reported gap matches the isolated
sky background. Both gates retain visible artwork on approach and at a
45-degree opening pose. No browser or HTTP errors were reported.

The unit checks exercise translated and rotated models, conservative bounds
crossing a leaf boundary, shared material visibility, camera-leaf changes,
outside-map and old-metadata fallback, and cache reuse over 120 unchanged
updates. A focused additional check of the two cave laboratory doors confirmed
their artwork remains visible during the actual authored opening motion.

Evidence is retained under
`temp_work/graveyard-sky-gap-2026-10-09/`. The successful rendered comparisons
are in `scenes-1791553418062/` (`before.png`, `after.png`, gate screenshots and
`report.json`); `cave-door-check/report.json` records the door check. The copied
save and initial ray diagnostics are also retained there.

The earlier roof-only investigation recorded 13 restored sky samples and
12 unchanged foreground samples in `artifacts/graveyard-sky-scenes.json`.
Its old `tests/graveyard-sky-scenes.mjs` range assertions predated chunked world
geometry. That temporary scene was removed on 28 October 2026 at the user's
request; use the current checks above for this follow-up.

Only focused checks for this visibility change were run. No full historical
test suite or release build was generated, and the user's live save/session
was not modified.

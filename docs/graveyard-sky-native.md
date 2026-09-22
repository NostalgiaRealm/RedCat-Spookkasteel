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
depth-prepass technique. It is scoped to the graveyard and does not filter
ordinary rooms, doors, actors, or other levels through PVS data.

## Focused validation

Run from the source directory:

```sh
node tests/graveyard-sky-scenes.mjs
```

The test loads only the graveyard and toggles the new meshes at the same camera
pose. It verifies all ten original ranges and 5,793 vertices, checks the native
Y176/Y528 intersections, and compares rendered pixels with an isolated sky
background. The observed result was **13 sky samples restored** and **12 nearby
foreground samples unchanged**, with no browser or HTTP errors.

Evidence:

- `artifacts/graveyard-sky-boundary-before.png`
- `artifacts/graveyard-sky-boundary-after.png`
- `artifacts/graveyard-sky-scenes.json`

Only this new regression was run for this change. No full test suite or release
build was generated. Cube-face orientation is a separate existing rendering
issue; this correction addresses geometry leaking through the sky boundaries.

# Original level import

`tools/import_levels.py` reads the five original RedCat Spookkasteel `.bsp` files and writes a portable representation. It needs Python 3 and only the standard library. It never executes the original EXEs, DATs or DLLs and never changes source assets.

```bash
python3 tools/import_levels.py --source "/path/to/RedCat Spookkasteel" --output data/levels
python3 -m unittest discover -s tests -p 'test_import_levels.py' -v
```

The source argument also accepts a `Levels` directory or an individual BSP file. File extension matching is case insensitive. Outputs contain copyrighted game assets from the user's installation; the independent reader source does not grant redistribution rights to those assets.

## Format findings and sources

All five supplied files use Genesis3D GBSP version 15, not the Quake or Source BSP formats. File layout and field interpretation were checked against the public [Genesis3D GBSP declarations](https://github.com/RealityFactory/Genesis3D/blob/master/World/Gbspfile.h), [surface mapping](https://github.com/RealityFactory/Genesis3D/blob/master/World/Surface.c), [lightmap reader](https://github.com/RealityFactory/Genesis3D/blob/master/World/Light.c), [collision traversal](https://github.com/RealityFactory/Genesis3D/blob/master/World/Trace.c), and [texture flags](https://github.com/RealityFactory/Genesis3D/blob/master/World/WBitmap.h). The importer is an independent Python implementation of the file format; no engine implementation was copied into it.

The newer public engine has texture extensions. These RedCat files predate them: their texture pixels are 8-bit indices, with **no leading pixel-format byte**, and a separate 768-byte RGB palette per texture. Original mip levels follow the base image. Only the base image is exported; the renderer can generate new mipmaps. Palette index 255 provides the color key for textures used by a transparent face.

Every chunk has three little-endian 32-bit fields: type, element size and element count, followed immediately by `size * count` bytes. Chunk 0 is a 28-byte header: `GBSP\0`, alignment padding, uint32 version at byte 8, and a Windows SYSTEMTIME timestamp. The file ends with `(65535, 0, 0)`. An exact size check rejects unsupported record layouts and truncation.

| Chunk | Contents | Record bytes |
| --- | --- | ---: |
| 1 | Brush models, roots, world bounds, pivot, face/leaf ranges | 80 |
| 2 | Render/collision BSP nodes | 44 |
| 4 | Leaves, contents, bounds, face/side ranges | 60 |
| 8 | Collision leaf sides: plane index, orientation | 8 |
| 10 | Plane normal xyz, distance, axial type | 20 |
| 11 | Faces, corner range, plane, texinfo, lightmaps | 36 |
| 13 | Index of each face corner into vertex array | 4 |
| 14 | Vertex position xyz, float32 | 12 |
| 15 | RGB lighting per **face corner**, float32 | 12 |
| 16 | Length-prefixed entities and key/value strings | 1 |
| 17 | Texture vectors, shifts, draw scales, flags, alpha | 64 |
| 18 | Texture name, flags, dimensions, pixel/palette offsets | 52 |
| 19 | Indexed pixel data with original mipmaps | 1 |
| 20 | RGB lightmap samples and light styles | 1 |
| 22 | Sky axis, rotation, six texture indices and scale | 44 |
| 23 | 256 RGB palette entries | 768 |
| 24 | Brush motion streams | 1 |

## Portable schema, version 1

Each `data/levels/<id>/level.json` has:

```json
{
  "version": 1,
  "id": "lvl00a",
  "source": {"file": "lvl00a.bsp", "sha256": "...", "gbspVersion": 15},
  "mesh": {
    "file": "mesh.bin", "stride": 44, "vertexCount": 54666,
    "attributes": ["position:3", "normal:3", "uv:2", "color:3"],
    "lightmap": {
      "file": "lightmap.png", "uvFile": "lightmap-uv.bin",
      "width": 1024, "height": 1024
    }
  },
  "groups": [{"texture": 0, "model": 0, "flags": 0, "alpha": 1, "start": 0, "count": 3}],
  "textures": [{"name": "grss", "file": "textures/000.png", "width": 128, "height": 128, "flags": 0, "colorKey": false}],
  "entities": [],
  "spawn": {"position": [-1332, -160, 2280], "orientation": 6},
  "bounds": {"min": [], "max": []},
  "collision": {"planes": [], "nodes": [], "leaves": [], "leafSides": [], "models": []}
}
```

The example illustrates field structure; group counts and atlas height depend on the level. `index.json` lists every imported level and its statistics. `chunks` records the complete original chunk inventory. `stats` includes counts and a class histogram.

Positions, plane distances, pivots, bounds and entity origins remain in original Genesis3D units, with **Y up**. There is no scale, axis swap or handedness conversion. Model vertices are already in world coordinates; do not add the model origin again. The origin is a pivot for rotation. Triangles are reordered to counterclockwise winding viewed from the supplied face normal. Degenerate fan triangles are omitted.

`mesh.bin` is a nonindexed triangle list. Each vertex is eleven little-endian float32 values, 44 bytes: position xyz, normal xyz, UV uv, baked vertex-light RGB. RGB is clamped to 0–1, with fullbright faces set to white. Group `start` and `count` are **vertices**, not bytes or triangles. Groups are contiguous and ordered by texture, model, flags and alpha. `model` indexes `collision.models`; index 0 is the static world.

Texture UVs repeat outside 0–1. Mapping matches the original driver:

```
u = (dot(position, texinfo.vectorU) / texinfo.drawScaleU + texinfo.shiftU) / texture.width
v = (dot(position, texinfo.vectorV) / texinfo.drawScaleV + texinfo.shiftV) / texture.height
```

PNG rows and V both run downward. In Three.js set `texture.flipY = false`, use repeat wrapping and the appropriate sRGB color space for the color map. Textures marked `colorKey` are RGBA; other textures are RGB. Only surfaces whose flags contain `16` use transparency; apply alpha test on those surfaces to honor the color key. Whole-face opacity is provided separately as group `alpha`.

Texture-info flags: mirror `1`, fullbright `2`, sky `4`, emissive compiler light `8`, transparent `16`, Gouraud `32`, flat `64`, no lightmap `32768`. Texture flags are distinct: texture skybox is `1`.

### Original baked lighting

`lightmap.png` contains each face's first RGB light style, with one repeated pixel of padding around every face. `lightmap-uv.bin` contains two little-endian float32 values per output vertex, in the identical order as `mesh.bin`. It maps to that atlas. White atlas texels serve faces with no lightmap or Gouraud/fullbright lighting.

For Three.js: bind these coordinates as `uv1`, set light-map texture `channel = 1`, `flipY = false`, `generateMipmaps = false`, and linear min/mag filters. Treat original RGB lightmap samples as linear intensity (`NoColorSpace`). Use vertex colors **only on Gouraud surfaces** when enabling light maps, to avoid multiplying the same baked lighting twice. The eleven-float RGB remains a fallback for renderers without lightmap support.

The lightmap coordinate for a corner is derived from `dot(position, vector) / 16`, relative to the floor of the minimum face coordinate, plus the half-texel center and atlas placement. Original lightmap data has a one-byte RGB marker before the samples. This importer exports baked lighting; runtime dynamic lights, including moving lights and authored shadow obstruction, are implemented separately in [world lighting](world-light-falloff-research.md) and [world shadows](world-light-shadows-native.md). All five supplied BSPs use baked light style zero. Arbitrary multi-style BSP animation and mirror-surface reflections are not implemented by this importer.

`lightmaps.bin`, `lightmap-faces.bin` and `motions.bin` preserve the original lightmap chunk, 36-byte face records, and brush-motion chunk. The first two now supply [actor floor sampling](actor-floor-lighting-native.md) and world-light shadow queries. The motion stream is decoded by the [motion importer](motions.md) for runtime brush/camera playback. These are active data sources, not unused future-work placeholders or executable Windows code.

### Entities and gameplay references

The entity stream begins with uint32 entity count. Each entity starts with uint32 property count; each key and value is prefixed by its uint32 byte length, including its terminating NUL. Text is decoded as Windows-1252. Property names and values remain strings, including their original capitalization. The importer does not execute embedded gameplay commands.

`%typedef%` entries are schema definitions, not instantiated gameplay objects. `%Model%` entries map a string `%name%` to a numeric `Model` index. `DoorModel`, `Trigger`, `ModelController` and related entities refer to model names. Some model entities are trigger volumes that should be hidden, or have visibility controlled by gameplay. Doors and movable brushes need their original entity/controller behavior applied separately.

`PlayerStart.Origin` provides the exported spawn position. `Orientation` is preserved numerically without assuming it is radians or degrees; RedCat's own orientation convention must be handled by gameplay. The standing player starts on the floor, so a first-person renderer must add its eye height.

### Collision

`planes` contains `[nx, ny, nz, distance]`. `nodes` contains `[frontChild, backChild, planeIndex]`. Child indices >= 0 refer to nodes; negative values refer to leaf index `-child - 1`. The front side has `dot(normal, position) - distance >= 0`.

Leaves provide `{contents, min, max, firstSide, numSides}`. Contents masks include solid `1`, window `2`, empty visible volume `4`, translucent `8`, wavy `16`, detail `32`, clip `64`, hint `128`, and area `256`. Ordinary player blockers are `1 | 2 | 64`. Empty/nonblocking leaves commonly have `firstSide = -1` and `numSides = 0`.

`leafSides` contains `[planeIndex, planeSide]`. Negate both the plane normal and distance when `planeSide != 0`. A point is inside the convex leaf when its distance to **every** oriented side is < 0. Solid leaves have beveled sides suitable for swept-box collision. Skip leaves with zero sides. For a player AABB relative to its origin, expand each plane by subtracting `sum(normal[i] * (normal[i] > 0 ? boxMin[i] : boxMax[i]))` from its distance, then clip the movement segment against the expanded hull.

Models provide `{root, min, max, origin, firstFace, numFaces, firstLeaf, numLeaves}`. Use model 0's root for the static world and each active solid brush model's root for moving geometry. Animated transforms must be applied consistently to rendering and collision. BSP leaf bounds accelerate candidate search.

## Verified source inventory

| Level | Faces | Exported triangles | Textures | Entities | Brush models |
| --- | ---: | ---: | ---: | ---: | ---: |
| lvl00a | 6,593 | 18,222 | 22 | 896 | 68 |
| lvl01a | 8,491 | 22,868 | 70 | 1,168 | 99 |
| lvl02a | 10,362 | 26,277 | 69 | 1,944 | 159 |
| lvl03a | 10,881 | 28,264 | 47 | 1,798 | 275 |
| lvl04a | 3,364 | 8,787 | 29 | 717 | 49 |

All five imports consume the source files exactly to their end chunks. Vertex indices, model ownership, face ranges, texture/palette offsets, collision references, lightmap extents and spawn entities are validated. Source SHA-256 values are stored in the manifests for traceability.

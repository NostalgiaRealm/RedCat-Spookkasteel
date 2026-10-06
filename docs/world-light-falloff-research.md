# Native BSP dynamic-light falloff

Reference: installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
These are static executable checks; the Windows game was not run.

The public Genesis implementation supplies the corresponding routine names,
`CombineDLightWithRGBMap` and its shadow variant, in
[World/Light.c](https://github.com/RealityFactory/Genesis3D/blob/master/World/Light.c).
The following arithmetic was independently checked against the installed binary.

| Native address | Verified operation |
| --- | --- |
| `0x5d3030` | BSP lightmap contribution without shadow tracing |
| `0x5d3071..0x5d3094` | Subtract absolute light-to-plane distance from radius |
| `0x5d30a0..0x5d3115` | Truncate light UV projections, subtract luxel origin and apply fixed-point texture scale |
| `0x5d3127..0x5d315c` | Approximate in-plane distance with integer `max(x,y) + (min(x,y) >> 1)` |
| `0x5d3160..0x5d318d` | Add remaining radius times each fixed-point color channel |
| `0x5d31f0` | Same falloff with a BSP trace per affected lightmap sample |
| `0x5d3730` | Store light colors as `trunc(color * 256 / 195)` |
| `0x5d22a5..0x5d22ff` | Shift the combined baked/dynamic channels right eight bits and clamp to 0..255 |
| `0x5d4ae5..0x5d4b3e` | Derive texture-axis step/scale from axis length |

For each lightmap sample `(u,v)`, the implementation uses:

```
reducedRadius = trunc(radius - abs(dot(light, normal) - planeDistance))
fixedU = (trunc(dot(light, rawAxisU)) - minU) * scaleU - u * stepU
fixedV = (trunc(dot(light, rawAxisV)) - minV) * scaleV - v * stepV
x = abs(fixedU >> 10)
y = abs(fixedV >> 10)
strength = max(0, reducedRadius - max(x,y) - (min(x,y) >> 1))
fixedColor += strength * trunc(lightColor * 256 / 195)
result = clamp(fixedColor >> 8, 0, 255)
```

`scale = trunc(1024 / axisLength)` and
`step = trunc(16384 / axisLength)`. Negative fixed coordinates use arithmetic
right shift (floor), whereas the initial light UV projection truncates toward
zero. Radius gain is absolute, rather than normalized by radius. This BSP path
has neither the actor path's normal-dot factor nor spherical Euclidean falloff.

`src/world-lighting.js` implements this arithmetic and provides shader helpers.
Normalized RGB inputs are intensity values: applying sRGB decoding to a light
color before this computation would change the original channel gains. Baked and
dynamic light must be combined and clamped before multiplying the surface
texture. Saturating an additive post-texture contribution does not reproduce
this ordering.

## Additional imported data

Existing normalized artwork UVs cannot recover every original texture vector.
Vectors on sloping faces can contain a face-normal component that disappears
when deriving a tangent frame from rendered triangles.

`tools/import_world_lighting.py` writes only `lightmap-frames.bin` and the
associated `mesh.lightmap` metadata for each level. Each output vertex has eight
little-endian float32 values: raw U axis, raw V axis, `MinU`, `MinV`. Vertex order
is checked against every existing mesh position and normal; original source
hashes must match before a sidecar is written. Existing meshes, artwork and baked
lightmaps are unchanged. The normal level importer also writes these frames;
the standalone command upgrades an existing import without rebuilding artwork:

```
python3 tools/import_world_lighting.py
```

Its `--check` option validates the generated frames without writing. The renderer
uses the existing atlas UVs to evaluate the four surrounding original luxels,
clamp their combined colors separately, then interpolate them. Rigid moving
brushes rotate their raw texture axes and retain their local projection offset.
Fullbright and Gouraud materials bypass this lightmap shader. The eight nearest
active lights remain a portable rendering budget; the native engine supports
more lights. [Per-luxel shadow obstruction](world-light-shadows-native.md) now
uses cached native BSP traces for lights whose `CastShadow` flag is set. Original float32
arithmetic can also differ at integer boundaries from the shader's arithmetic.

Focused verification: `node --test tests/world-lighting.test.mjs` (four passing
checks: plane reduction/octagonal falloff, oblique axes and integer rounding,
fixed-point color gain/clamp ordering, and unchanged baked values). The targeted
import verified 313,254 output vertices across the five levels without a build.
The normal importer was additionally exercised on the tower level in a temporary
directory: its mesh and new lighting frames matched the existing targeted import
byte-for-byte, and the temporary output was removed.

`node tests/native-light-impact-scenes.mjs` additionally checks actual GPU pixels
against the recovered CPU formula, including an oblique texture axis, a rotated
and translated brush, and saturation before interpolation. Maximum channel
error was less than one 8-bit step; baked-only pixels were unchanged. The same
focused scene check compiles the shaders in the graveyard and renders all three
player impact sprite/light profiles. No build or package is generated.

## Separate actor-lighting follow-up

The actor path is not this BSP formula. A final executable check matched
`gePuppet_ComputeLight` at `0x5cdff0`: `0x5ce113..0x5ce174` computes a direction
and linear radius falloff from an actor reference point (or bone reference when
that path is selected). `gePuppet_SetVertexColor` at `0x5ce3b0` adds positive
normal-dot contributions, multiplies material channels and clamps raw RGB to
0..255 (`0x5ce4bb..0x5ce610`). The generic world-vertex routine at `0x5d3e50`
should not be used as evidence for the puppet sampling point.

The subsequent [actor-lighting recovery](actor-lighting-native.md) replaces
per-fragment decoded-color lighting with root-reference preparation and raw RGB
vertex accumulation/clamping. It also restores the local Sun selector and floor
ambient, including the floor's single-luxel shadow query. The world-surface
shader's eight-light budget remains a separate limit; the octagonal BSP formula is not substituted for direct
actor illumination.

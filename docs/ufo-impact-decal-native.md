# Original UFO impact patch and surface decals

The missing dirt beneath the crashed UFO is the authored `EffectDecalEntity1`
(`DaviName=ufohole`) in `lvl00a`, not a missing BSP texture or part of the UFO
actor. The previous effect importer did not import decal artwork, and the
renderer did not implement that entity class.

The original level specifies:

| Property | Original value |
| --- | --- |
| Color / alpha artwork | `ufohole.bmp` / `ufohole_A.bmp` |
| Origin | `-1193 -148 2330` |
| OriginPlacement | `1` (floor) |
| OriginDistanceFromFace | `0.5` |
| SizeWidth / SizeHeight | `128` / `128` original world units |
| Rotation | `12` (one complete clock-face turn) |
| OverallColor / OverallAlpha | white / `255` |

The source image and separate alpha mask are both 64×64. The imported PNG
retains their exact color and alpha bytes without resampling. The patch lands
on the original grass face at Y `-160`, giving a rendered plane at Y `-159.5`.
It is a fixed surface quad: turning the camera does not turn the patch.

## Executable evidence

Verified in the installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`:

- `CAdamDecal` factory `0x572980`, placement dispatch `0x572b0c`: mode 0 uses
  an explicit normal target, mode 1 finds the floor, mode 2 finds the ceiling,
  and mode 3 selects a nearby wall.
- Placement at `0x572100`: the floor/ceiling cases at `0x572184` cast 3200
  units down/up; the wall case at `0x5723dc` tests eight horizontal directions
  and selects the nearest hit. The authored face distance is passed into the
  native trace.
- Rotation conversion at `0x572c7d`: multiply the authored value by
  `1/12` (constant `0x64ee3c`), then `2π` (`0x64b1d8`). Interpreting 12 as
  degrees would rotate the artwork incorrectly.
- Tangent-basis construction at `0x5718d0` and quad generation at `0x5719d0`
  use the surface normal, original width/height, authored rotation, and fixed
  UVs. `0x571990` supplies the per-vertex original color and alpha.
- Render path `0x571b80` positions the effect and submits the textured quad
  at `0x571df1–0x571e04`.

## Portable implementation

`tools/import_world_effects.py` now includes authored decal color/alpha pairs.
Only six new PNGs and the effect manifest changed; existing effect image bytes
were unchanged. `src/decal-effects.js` implements surface placement and native
quad construction, and `src/world-effects.js` creates and updates those effects.
Enable/disable and show/hide remain controlled by the ordinary script objects.

Placement traces use rendered BSP faces, including original water surfaces for
lily pads, without the movement collider's hull skin offset. The original
geometry, dimensions, colors and alpha are retained. Decals do not block player
movement or become aiming targets. Surface depth testing prevents them from
showing through solid scenery.

This restores the UFO impact patch, the thirteen authored forest lily pads,
and the five authored graveyard surface markings through the same entity
implementation. No additional decorative artwork or level geometry was added.

## Focused verification

- `node --test tests/decal-effects.test.mjs`: three tests passed for exact UFO
  placement/size/clock-face rotation, ceiling/wall placement, and original
  forest entities obeying script visibility controls.
- `python tests/test_decal_artwork.py`: exact RGBA bytes, dimensions and source
  hashes matched all six original decal bitmap/alpha pairs.
- `node tests/decal-effects-scenes.mjs`: passed with all nineteen authored
  decals placed, rendered pixel contribution verified, script enable/disable
  verified, and no browser or HTTP errors. Its isolated browser
  fixture unlocks the graveyard only for inspection; application progression
  rules are unchanged. Images and results are written to
  `artifacts/decal-*.png` and `artifacts/decal-effects-scenes.json`.

The restored UFO patch was visually compared with the original game screenshot
`Pictures/Screenshots/Fixed/Level 1 UFO right way.png`. No packages were built.

# Dynamic world-light shadow renderer audit

2026-10-05. Read-only runtime audit; no runtime edits made by this agent.

## Recommended implementation

Keep the existing eight selected effect-light slots and their native per-luxel colour addition. Add one 1024 x 256 single-channel nearest-sampled byte atlas for Tower, sharing the existing lightmap UVs. Each of the five authored shadow lights receives a stable bit (1, 2, 4, 8, 16), independent of nearest-light slot selection. A set bit can represent visibility; pad each face tile with a copy of its edge samples. Store a stable light ID in each submitted dynamic light, and assign a zero bit for ordinary torch, projectile and player lights.

In `nativeLitLightmap`, read four shadow bytes at the same four integer luxel UVs already sampled from the base lightmap. Extract the selected light's visibility via `mod(floor(byte / bit), 2.)`; multiply its contribution before adding, clamping and bilinear filtering. Do not mask the final filtered colour, since that would shadow existing baked lighting. Do not perform geometry raycasts per fragment or per frame. Bind a harmless default texture and skip all four mask samples when no selected light casts shadows. This preserves shaders on non-Tower levels and makes chunk residency independent of shadows.

Mask preparation needs at most 2,576 native point traces in the supplied Tower, at each light's maximum authored radius. Colour and radius pulses, selection changes, script activation, camera movement and geometry streaming do not invalidate native obstruction. If light positions themselves change, recompute only the changed light's bit or use a position-keyed cache. None of the five supplied shadow lights moves.

## Exact existing atlas mapping

`tools/import_levels.py::build_lightmap_atlas` is deterministic and can be reproduced from `actor-floor-lighting.json` without re-importing data:

- Face metadata is original face order.
- width=face[16], height=face[17], offset=face[18], flags=face[19].
- Skip negative offsets, nonpositive dimensions or flags & (2 | 32 | 32768).
- Atlas width=1024, start x=4, y=0, rowHeight=4.
- Before placement, if x+width+2>1024: x=0, y+=rowHeight, rowHeight=0.
- Interior placement=(x+1,y+1); then x+=width+2, rowHeight=max(rowHeight,height+2).
- Atlas height is next power of two >= y+rowHeight.
- Duplicate one nearest-interior sample border on all four sides.

Confirmed against actual Tower binary UVs: 2,747 face placements, 1,024 x 256, 22,326 vertices checked, maximum UV difference 2.9802322387695312e-8 (float32 roundoff).

A local integer luxel `(u,v)` maps to the center UV `((tileX+u+.5)/width,(tileY+v+.5)/height)`. Existing `nativeLitLightmap` computes exactly this from `atlasUv+(floor(effectLuxel)-effectLuxel)/atlasSize`; reuse its four sample locations.

## Native obstruction details

Reuse `actorFloorShadowPoint(face, plane, luxel)` to build raw native CalcSurfVectors endpoints one unit above the oriented plane. Reuse `traceActorFloorBsp(collision, light.position, endpoint, 0)`.

Native research agent verified root **0** and contents mask **0x43** at `0x5cbd33/0x5cbd61`, called from `0x5d33a9`; existing helper matches these values.

Important correction to initial design thought: **do not invalidate or transform the shadow mask for moving receiver brushes**. Native combine `0x5d31f0` loads the original WORLD light position at `0x5d3229-0x5d322c` and raw texel endpoint at `0x5d32c9-0x5d3335`. The model inverse in SetupLights `0x5d3542-0x5d3577` only changes a stack temporary used for potential face selection. It never overwrites the light position for the actual shadow ray. Moving brushes/actors also do not act as blockers because native tracing checks only BSP root zero. A modern all-object shadow map would produce different behavior.

Existing renderer inverse-transforms projection through rigid model uniforms; changes to non-shadow falloff/projection are outside this narrow obstruction task. Existing actor-floor shadow sampling inverse-transforms lights on brush receivers; this is separate from world-surface atlas parity.

## Actual Tower work size

Counts below use native maximum authored radius, `worldLightLuxelStrength`, `actorFloorShadowPoint` and `traceActorFloorBsp`:

| Light | Position | Max radius | Affected luxels | Blocked luxels |
| --- | --- | --- | --- | --- |
| DynamicLightEntity1 | 135,2383,54 | 200 | 393 | 206 |
| DynamicLightEntity2 | 0,2384,184 | 200 | 376 | 200 |
| DynamicLightEntity3 | -140,2384,54 | 200 | 407 | 211 |
| DynamicLightEntity4 | 0,2384,-80 | 200 | 374 | 183 |
| DynamicLightEntity5 | 2,2499,57 | 300 | 1,026 | 664 |

Only affected receivers at authored poses are static world model 0 and model 48 `kokendheet`, the cauldron damage Trigger with 24 faces. No supplied moving receiver lies within those radii. All five ray batches completed within a 0.1-second Node invocation including module/process startup on this host.

## Streaming / resource lifecycle

`WorldGeometryStream` creates persistent per-group materials and mesh placeholders. `geometryFor` creates nativeLightU/V/MinUV even on empty geometry. `WorldEffects.attachLights` therefore patches the materials before their chunks become resident; replaced chunk geometry retains the same attributes and atlas UVs. One shared shadow texture remains valid across chunk load/unload and needs normal world resource disposal, not per-chunk storage. No additional textures per material or per light are needed.

## Focused validation suggestions

- Verify atlas mapping against imported UVs, plus duplicated borders.
- Use a simple BSP wall fixture with known lit/shadowed luxels, and prove baked colour is retained.
- Verify interpolation happens after masking/addition/clamp, preventing bright leakage at shadow edges.
- Check five stable light bits still select correct masks when nearest-light slots reorder.
- Check colour/radius pulses and camera movement cause no new traces or texture uploads.
- Compare at least one actual Tower luxel per light against point-trace oracle and inspect a chamber screenshot.
- Verify unshadowed lights and non-Tower levels do not sample the mask or allocate a Tower-size texture.
- Chunk unload/reload should retain masks and compile one unchanged shader variant.

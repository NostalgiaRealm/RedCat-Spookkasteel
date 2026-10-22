# World dynamic-light shadows: native evidence (2026-10-05)

Read-only investigation of the installed original `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
The hash was checked again today. Corresponding address-bounded excerpts are
retained beside this file; extracted from the previously retained full binary
disassembly in `temp_work/player-world-light-2026-10-04/native-full.asm`.
No original-game execution or renderer comparison was performed in this audit.

## Exact operation

- `Light_SetupLightmap` tests `CastShadow` at `0x5d2225`, dispatching to
  `CombineDLightWithRGBMapWithShadow` (`0x5d31f0`) at `0x5d2237`.
- It retains the existing texture-space octagonal falloff and fixed-point RGB
  arithmetic. At `0x5d33a1` a luxel is considered only when `Dist2 < Radius2`.
- `0x5d33a9` pushes node **zero**. `0x5d33af` and `0x5d33b0` push the actual
  luxel endpoint and light position. `0x5d33b1` calls `Trace_IntersectWorldBSP`
  at `0x5cbd30`. A hit skips adding this light to that integer luxel.
- The trace writes contents mask **0x43** at `0x5cbd33`, and leaf membership
  is checked against that mask at `0x5cbd61`. These are SOLID (1), WINDOW (2),
  and CLIP (64). Liquids alone do not block; transparent artwork does not
  change the structural contents test. No triangle/material/actor query.
- It tests the entire closed segment light→luxel against static world BSP root
  zero. A start or end in solid counts as blocked. Plane split is exact,
  with zero on the front side; there is no collision-hull expansion or epsilon
  displacement of either ray endpoint in this trace routine.
- It does **not** iterate moving BSP models or actors as occluders. This is
  native world-light obstruction, not modern actor/door shadow mapping.

## Endpoint and spacing

`CalcSurfVectors` (`0x5d4f50`) initializes one raw authored texture-to-world frame
per face. It orients the normal and plane distance using `Face.PlaneSide`, then
computes the inverse texture vectors on that plane. The base origin correction
is `dot(TexOrg, orientedNormal) - orientedDistance - 1`, giving an endpoint one
unit on the visible side of the face. Face lightmap MinU/MinV is then added;
adjacent integer luxels advance by **16 texture units** along the inverse axes.

The initial origin uses `-rawU.Z * inverseU - rawV.Z * inverseV`, NOT the texture
shifts. This unusual rule is confirmed in both the executable and retained
Genesis3D `World/Surface.c:546-660`. Preserve it; substituting a fragment world
position or a generic normal bias moves the native shadow lattice.

`src/actor-floor-lighting.js::actorFloorShadowPoint` already implements this
endpoint. `traceActorFloorBsp(..., root=0)` already implements the matching
boolean occlusion semantics, though it additionally returns hit metadata.

## Moving receiver convention, checked directly in binary

The shadow combine function has no receiver-model input or model transforms.
At `0x5d3229`, it takes `Light + 0x14` and copies that **world Light.Pos** at
`0x5d322c`. The raw cached `SurfInfo.TexOrg` is copied at
`0x5d32c9–0x5d3303`; the raw cached T2W vectors at `0x5d3307–0x5d3335`.
The following trace uses those unchanged coordinates.

The separate `Light_SetupLights` (`0x5d34c0`) inverse-transforms a temporary light
position around each model pivot solely to mark which model faces could be
lit. Specifically, `0x5d3542` subtracts the pivot, `0x5d3552` transposes the
transform, `0x5d3562` adds the pivot, and `0x5d3577` supplies the temporary
**stack** vector to `SetupDynamicLight_r` (`0x5d3a00`). It does not write back to
Light.Pos. Thus, for native shadow masks, a moving receiver still uses its raw
authored luxel endpoints plus actual world light position. Receiver transforms
should not invalidate these masks. Do not infer a shadow-specific inverse-light
convention from the existing actor floor sampler's moved-brush fallback.

All authored shadow lights in this game are static and the affected Tower
receivers found by the parallel atlas audit are world model zero plus static
`kokendheet` (model 48). Consequently the convention is not a practical moving
receiver difference for the supplied five-light scene.

## Authored light inventory

`authored-dynamic-lights.json` contains every DynamicLightEntity across all five
levels. There are 18: 9 in the Graveyard, 4 in the Caves and 5 in the Tower.
Only the Tower's five lights request CastShadow; all are Active=1 and none has a
Model attachment. All color/radius functions are `hauntastle`, interpolate,
and repeat over three seconds.

| Entity | Position | Radius A/Z | Color A → Z |
| --- | --- | --- | --- |
| DynamicLightEntity1 | 135, 2383, 54 | 100 / 200 | 255,0,0 → 240,255,51 |
| DynamicLightEntity2 | 0, 2384, 184 | 100 / 200 | 255,0,0 → 240,255,51 |
| DynamicLightEntity3 | -140, 2384, 54 | 100 / 200 | 255,0,0 → 240,255,51 |
| DynamicLightEntity4 | 0, 2384, -80 | 100 / 200 | 255,0,0 → 240,255,51 |
| DynamicLightEntity5 | 2, 2499, 57 | 150 / 300 | 255,255,128 → 0,176,88 |

## Minimal native-compatible implementation

Build a per-integer-luxel visibility mask for each requesting light at its exact
position, using raw original face metadata and the two helpers above. Restrict
work to possible maximum-radius receivers. The five authored lights can have
these masks computed once at load; color/radius pulses never change visibility.
A future position change must invalidate that light's mask. Runtime shadows
must multiply each light's contribution at each of the four sampled luxels
**before** combined baked+dynamic clamping and interpolation, rather than
multiplying final interpolated light or darkening baked light.

Ordinary lights (CastShadow=0), fullbright surfaces, Gouraud surfaces and direct
actor lighting retain their existing path. World shadow masks should not add
per-frame scene raycasts, shadow-map render passes, moving actor checks, or
repeat BSP queries for unchanged positions. This is both the supported native
scope and sufficient to fix the known Tower light leaks.

Reference source paths retained locally:
- `temp_work/gargoyle-transparency-2026-09-29/genesis-reference/World/Light.c:1160-1274`
- `temp_work/gargoyle-transparency-2026-09-29/genesis-reference/World/Light.c:1465-1527`
- `temp_work/gargoyle-transparency-2026-09-29/genesis-reference/World/Trace.c:1895-1950`
- `temp_work/gargoyle-transparency-2026-09-29/genesis-reference/World/Surface.c:546-660`

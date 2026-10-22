# Native RedCat shadow audit — 2026-10-04

Read-only analysis of installed `RcHcGame.dat`; executable/source assets were not changed. Disassembly and this report are retained in this directory. No tests or website work were performed.

## Class and texture

- `0x434362` constructs RedCat's `RedCat.act` wrapper through `0x42dfa0`.
- `0x42dfa0` allocates a separate 0x1b4-byte shadow effect, constructs it at `0x46ce40`, stores it in owner `+0x294`, and registers the child. The effect name is `RcActorShadow` at `0x6900e8`.
- Shadow constructor `0x46ce40` installs vtable `0x64dd08`, matching `CRcShadowEffect` RTTI. It loads `RcSdw.bmp` (`0x692d24`) and `RcSdw_a.bmp` (`0x692d18`). Installed paths are `Bitmaps/RcSdw.bmp` and `Bitmaps/RcSdw_A.bmp`.
- Both textures are 64 x 64. Color is uniformly black. Alpha texture has 64 distinct grayscale values from 0 through 73; 1,281 pixels have the maximum 73, and 1,399 are zero. Peak opacity is 73/255 = 0.2862745098. Do not apply an additional 0.286 opacity multiplier after importing the mask as alpha.
- `0x46ce7b` reads float 25 from `0x64dd00` into effect `+0x18c`. Vertex RGBA are all initialized to 255 at `0x46cec5..0x46cede`. Constructor UV order is `(0,1), (1,1), (1,0), (0,0)` at `0x46cef2..0x46cf1c`.

## Update and placement

Update is `0x46d680`; ordinary update wrapper `0x46d2d0` checks attached flag `+0x190` before calling it. Owner is `+0x194`.

- Reads owner origin by vtable `+0x48`.
- Trace start = origin + `(0,10,0)` (`0x46d753`, constant `0x64ad5c`). End = origin + `(0,-10000,0)` (`0x46d788`, constant `0x64dc6c`). This is independent of animation pose or foot bones.
- Collision wrapper at `0x565c30` is constructed, then shadow changes its `+0x14..+0x1a` flags to `1,1,1,0,1,0,0` at `0x46d70f..0x46d72b`.
- Wrapper `0x565e10` translates these to contents mask 3 (`SOLID|WINDOW`, excludes invisible CLIP and EMPTY), collide flags 7 (`MESHES|MODELS|ACTORS`), user mask `0xffffffff`, and callback `0x566170`. The separate player AABB branch controlled by `+0x1a` is disabled. Main world and transformed brush submodels are included. Native permits actor collision filtered by callback; a BSP/brush-only implementation is an approximation.
- Callback's actor path requires owning actor collision flag bit 3 at `+0x14c` and checks exclusion lists; shadow initializes no custom exclusion lists or callbacks. Meshes are part of the submitted flag mask, though build-dependent engine handling can ignore them.
- `0x46d704` sets collision wrapper `+0x5c` to float **1.3**. On hit the shadow uses wrapper `+0x9c` (`0x46d7ab`), not raw impact. `0x566106..0x56611b` fills that point through `0x5b1520`; `0x5b1520` copies impact then performs `impact + normal * 1.3`. This is the exact surface separation, not the generic Genesis puppet shadow's offset.
- On no hit, `0x46d7ef..0x46d813` replaces Y with `actor.y - 5` and sets normal Y to 1. Native does not explicitly hide on a miss. X/Z normal initialization is not established in this branch, so duplicating undefined stack values would not be appropriate.

## Geometry

`0x477d50` computes two unit tangent vectors. Start with helper `(0, sign(n.y), 0)` (nonnegative uses +1); if n is within 0.1 per component of that helper, choose `(0,0,sign(n.z))`. Then `U = normalize(cross(n, helper))`, `V = normalize(cross(n,U))`.

`0x46d82d..0x46d848` multiplies both by 25. From `C = impact + 1.3*n`, the exact four native corners (`0x46d84d..0x46d967`) are:

1. `C - 25U + 25V + (-0.5, +0.5, 0)`; UV `(0,1)`.
2. `C + 25U + 25V + (+0.5, +0.5, 0)`; UV `(1,1)`.
3. `C + 25U - 25V + (+0.5, -0.5, 0)`; UV `(1,0)`.
4. `C - 25U - 25V + (-0.5, -0.5, 0)`; UV `(0,0)`.

These tiny world-space template offsets are real constants at `0x64dc70`, `0x64dc94`, `0x64dcb8`, and `0x64dcdc`. On a horizontal surface with up normal, U is +X and V is -Z, making the quad 51 x 50 units with a one-unit Y slope around C. A simple 50 x 50 plane matches the intended size but is not numerically exact.

There is no distance-from-ground calculation, size attenuation, alpha attenuation, rotation with actor yaw, or per-corner floor trace in this routine. Its nominal half-size remains 25 throughout jumping/falling.

## Rendering and flags

- Render method `0x46d3e0` checks attached flag `+0x190` and nonnull owner `+0x194`. It has no height or owner-visibility check in this method itself.
- `0x46d640..0x46d65e` calls `geWorld_AddPolyOnce` (`0x5b6e90`) with four vertices, the loaded bitmap, type 0 (`GE_TEXTURED_POLY`), render flags 1 (`GE_RENDER_DO_NOT_OCCLUDE_OTHERS`), and Scale 0 (irrelevant for polygon geometry). Depth test is retained and depth writes suppressed.
- `0x46da20` attaches owner and sets flag `+0x190=1`; `0x46da90` clears it and owner, disabling the effect. Attachment is called from owner registration at `0x42e462`.
- Base actor constructor `0x49b30a` defaults `+0x20d=1`. `EnableShadow` and `DisableShadow` at `0x49e342..0x49e3b5` change that byte then call vtable `+0x60`. For this RedCat wrapper vtable slot is `0x42e500`, a jump to `0x49d210`. No direct coupling from that byte to this separate shadow class has been established; avoid claiming it as confirmed.
- Config registration contains `RenderActorShadows`, default 1 (`0x55a7dc..0x55a81a`), but no use of that setting inside the recovered custom shadow class is observed. It may concern the generic actor/puppet shadow path.

## Implementation guidance

Use the original imported black + alpha bitmap as an unlit transparent quad with full vertex opacity. Trace beneath the current native actor origin with visible solid/window content masking, align to the hit plane, and use 1.3 units of normal separation. Preserve constant size and opacity during jumps. Include transformed brush collision. Supporting permitted actor surfaces would need the native callback policy; excluding them should be identified as a deliberate remaining approximation. The class-specific evidence above takes precedence over `gePuppet_DrawShadow` behavior.

Evidence files: `native-shadow-class.asm`, `native-shadow-owner.asm`, `native-shadow-basis.asm`, `native-shadow-collision-wrapper.asm`, `native-shadow-point-offset.asm`, `native-shadow-script-flags.asm`, `native-shadow-submit.asm`, and `native-shadow-constants.json`.

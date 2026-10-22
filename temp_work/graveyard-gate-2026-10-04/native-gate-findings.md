# Graveyard explosive-crate gate: native evidence

Read-only audit of the original installed assets and `RcHcGame.dat`, 2026-10-04. No source/test changes or website access. All new evidence is retained in this directory.

## Authored objects and destruction

The third level, Het Kerkhof, is `lvl02a`. Reading the original BSP entity chunk produces all 1,944 imported entities exactly, with **one** `hekdoor.act` instance:

- Entity **262**, editor name `AdamAnyActor71`, script name **`hekacteur`**: origin `[3568,-64,1456]`, scale `1`, entity rotations zero, placement method `0`. It has no `Model` attachment.
- Entity **263**, `AdamAnyActor72`, script name **`brcrate_hek`**: `brcrate.act`, origin `[3568,-63,1489]`, `Targetable=1`, `AfterDestroyCommand=hekacteur.destroy`.
- Entity **16**, `%Model%` named `hekdoor_trigger`, has an origin but **no `Model` index**. It does not represent a compiled second gate brush, and there is no gate actor attachment to hide.

The imported compiled DSO confirms the BSP command: `brcrate_hek` is object `36:17`; its `AfterDestroyCommand` handler begins at offset **2438**, loads object `36:16` (`hekacteur`) at instruction **2489**, and invokes `Destroy` at **2497**. The gate INI is destroyable and emits exactly two `hekdoor_s1.act` debris pieces after destruction.

## Geometry explains the duplicate lines

The verified original `hekdoor.act` hash matches the imported actor. It has 48 render vertices and **24 triangles**: two adjacent gate leaves, each authored as a closed thin box. Each leaf has an alpha-textured front and rear grate plane separated by **10 original units**, plus edge walls. This is one actor with ordinary front/back shell geometry, not two instances.

Local gate bounds are approximately `X=[-59.9541,59.9541]`, `Y=[-10.0586,0]`, `Z=[0.1835,120.1835]`. INI rotation is `[-90,0,0]`, placing the grate planes at world `Z≈1456` and `1466` (the second leaf is shifted approximately 0.0586 in Z). All 24 imported triangles have winding that agrees with their outward vertex normals.

With `DoubleSide`, the rear plane is rendered from its back side through the front plane's texture holes. At oblique views its bars appear shifted, creating the reported double gate. At audit time the generic actor material in `src/world.js:195` used `THREE.DoubleSide`. Rendering this actor with `FrontSide` matches its existing outward winding and preserves a visible outer face from either approach direction.

## Executable evidence: backface rejection

Installed executable SHA-256: `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.

The executable contains the Genesis `Actor/puppet.c` path at `0x6aa4f4`. Its actor triangle paths reject backfacing geometry before submission:

- Clipped/world-space path: `0x5cdd82` and `0x5cdd9a` subtract triangle edges; **`0x5cddac`** calls cross product `0x5b2e60`; **`0x5cddb5`** normalizes the result. **`0x5cddc7`** computes its dot product with the first triangle vertex. `0x5cddd7` obtains camera position; **`0x5cdde2`** computes the normal/camera dot product. **`0x5cdde7..0x5cddf6`** subtracts the triangle-plane dot, compares to zero, and skips the face to **`0x5cdfc0`** when the camera is behind/on that plane. Accepted triangles reach submission at `0x5cdfbb`.
- Projected path: **`0x5cec29..0x5cec6d`** computes the signed 2D triangle area. **`0x5cec6f..0x5cec87`** compares to zero and skips one winding to `0x5ced9a`. Accepted triangles reach the render calls at `0x5ced79` or `0x5ced95`.
- The comparison constant at `0x64a450` is verified as float zero. Dot and cross helper bodies are retained separately, so this conclusion does not depend solely on a newer public Genesis source version.

## Retained evidence

- `native-gate-evidence.json`: original-source hashes, raw entities, compiled handler, geometry summary and winding checks.
- `native-puppet-render.asm`: both original executable actor render paths.
- `native-vector-math.asm`: dot/cross/normalization helper bodies.
- `native-camera-pov.asm`: camera position accessor.

The native audit supports restoring backface culling for this gate. Runtime/save inspection, view comparison and destruction verification belong to the parent task; they were not performed by this read-only audit.

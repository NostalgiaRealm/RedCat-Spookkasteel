# World light shadow GPU/browser validation — 2026-10-05

Focused test: `node tests/world-light-shadows-scenes.mjs`.

Final passing report: `scenes-1791220964203/report.json` and four `tower-view-*.png` images beside it. Isolated persistent Chrome profile is retained inside the same directory. No user profile/save, runtime source, builds, or unrelated tests were changed by this browser check.

## Verified behavior

- Synthetic BSP plane pixels agree with the independent native fixed-point CPU reference within 0.55 of an 8-bit channel value. Cases cover blocked/unblocked lightmap samples, independent red/green light obstruction, renderer slot reordering, and saturated lightmap samples clamped before four-corner filtering.
- Actual Tower scene: 38,177, 9,276, 31,262 and 82,273 world pixels are darker with authored lamp obstruction across four views; no world pixels become brighter. Actor/effect meshes are excluded from comparisons.
- Five initial masks trace 2,576 rays, with 1,464 blocked samples. Camera changes, 120 pulse updates and geometry streaming add zero rays/builds/uploads. Atlas checksum 1,283,754,613 and texture version 1 remain unchanged.
- Streaming unloads world geometry from 24,345 to 8,037 resident vertices and restores 24,345 on return. Revisited receivers still show 35,694 correctly darkened pixels.
- Every isolated world-draw GL checkpoint is clean; synthetic and real world renderers return GL_NO_ERROR. No page, shader or HTTP errors. `effects.dispose()` disposes its shadow texture exactly once.
- Visually inspected `scenes-1791220924011/tower-view-0.png`: cauldron, floor and surrounding room render correctly.

## Unrelated Tower cubemap diagnostic

The initial complete-scene check exposed pre-existing GL_INVALID_VALUE (1281) during the first Tower skybox upload. Call-level capture in `scenes-1791220820164/report.json` records `uploadCubeTexture` → `texSubImage2D` for cubemap targets 34071–34074. The Tower cubemap has differing face dimensions: lvl04a sky textures 27/27 are 128×128, while textures 28/28/28/28 are 256×256 (verified in level metadata and src/world.js cube construction). This is separate from the shadow shader and its single-channel atlas.

The final focused BSP test uses a neutral scene background to exclude that unrelated cubemap path and explicitly asserts clean GL checkpoints. Runtime skybox code was left untouched. The diagnostic can be reproduced by restoring the default scene background in the fixture and running with `SHADOW_TRACE_GL=1`; its original reports are preserved.

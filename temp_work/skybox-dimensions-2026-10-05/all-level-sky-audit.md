# All-level skybox dimension audit

Read-only audit of imported level metadata and PNG IHDR dimensions, 2026-10-05. No runtime changes or test/build execution by this reviewer.

| Level | Sky indices | Actual source dimensions | Mismatch |
| --- | --- | --- | --- |
| Het Bos (`lvl00a`) | 20,-1,20,21,20,20 | all 256x256 after existing -1 fallback | no |
| Het Kasteel (`lvl01a`) | 67,68,69,69,69,69 | 67/68:128x128; 69:256x256 | **yes** |
| Het Kerkhof (`lvl02a`) | 66,-1,67,68,67,67 | all 256x256 after existing -1 fallback | no |
| De Grotten (`lvl03a`) | -1,-1,-1,-1,-1,-1 | no sky images; existing solid background | no cube texture |
| De Kasteeltoren (`lvl04a`) | 27,27,28,28,28,28 | 27:128x128; 28:256x256 | **yes** |

All metadata dimensions match the actual PNG headers. Every supplied sky image is square. Full per-slot names, filenames and actual dimensions are in `all-level-sky-dimensions.json`.

## Normalization guidance

Use the largest width or height among the six resolved images as a common square dimension, capped at `renderer.capabilities.maxCubemapSize`. For the supplied levels this is 256. This preserves the 256px artwork and only enlarges the smaller faces in Castle/Tower. If a GPU cap is smaller, resize every face to that same capped dimension before constructing the cube texture. Do not rely on Three.js's per-image maximum-size resize: it only downsizes oversized images independently and does not harmonize mixed sizes.

Preserve the existing six array slots and -1 fallback exactly. Do not swap faces, rotate images, flip canvas coordinates, crop or recolor. `CubeTexture` defaults to `flipY=false`; keep it so. Keep the existing cube `SRGBColorSpace`. Default canvas 2D drawImage resampling in sRGB is suitable for these opaque original images. A plain drawImage(image,0,0,size,size) preserves the full image. Do not force every already matching image through canvas; unchanged images can be returned as-is.

Cache normalized canvases by source-image object identity during one normalization call. Tower references its 128px source twice, and other levels reuse faces: they can safely share the same immutable canvas. No rendering work or resampling belongs in the animation loop. Canvas objects are owned via the cube texture's image array; normal cube texture/world disposal handles the GPU resource, and normal object lifetime handles the CPU canvases.

Use actual naturalWidth/naturalHeight when available rather than CSS width/height. Imported image objects are loaded before CubeTexture construction, so dimensions are available. Do not change texture files, level metadata, world geometry, sky masks or the Caves' all-missing-sky behavior.

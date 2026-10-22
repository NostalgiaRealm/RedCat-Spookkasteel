# Independent implementation review

Reviewed `src/world-light-shadows.js`, `src/world-lighting-material.js`, shadow integration in `src/world-effects.js` and metadata retention in `src/world.js` after implementation on 2026-10-05.

No blocking correctness or practical performance issue found.

- Face packing/gutter indices match import convention; bounds check reserves the right/bottom border texel.
- Rebuild clears only the changed light's bit and copies all four face borders/corners without corrupting other light bits.
- Raw world light positions and raw face shadow endpoints match the native obstruction routine, with root zero and existing 0x43 contents mask.
- Stable object identity is independent of nearest-light slot ordering.
- Maximum authored pulse radius prevents rebuilds caused by intensity/radius animation.
- Four mask reads occur outside the light loop only if selected shadow lights are present; unshadowed levels retain their original shader variant without a shadow texture.
- Mask multiplication occurs on dynamic contribution per luxel before native clamp and interpolation, preserving baked illumination.
- Priming is done before the first effect update/render; DataTexture defaults are appropriate for normalized byte masks (no sRGB conversion). Explicit disposal releases the texture.
- Shared persistent material patching survives streamed geometry replacement.
- All current castShadow=true producers are DynamicLightEntity records; synthetic torch/player lights remain false.

## Focused numeric checks

Actual Tower metadata and five lights:

- 2,576 point traces; five mask builds; 1,464 blocked interior light/luxel pairs. Matches the earlier direct native-helper oracle totals.
- Zero gutter mismatches over every border texel of every atlas face.
- 262,144 mask bytes (256 KiB).
- Initial five-mask build: 23.55 ms on this machine in Node, during loading.
- 10,000 update calls with light order reversed and current radius halved while keeping authored max radius: no additional mask builds or ray traces. About 0.765 microseconds per update, excluding rendering.

GPU rendering is covered separately by the browser verification agent. No runtime source edits made by reviewer.

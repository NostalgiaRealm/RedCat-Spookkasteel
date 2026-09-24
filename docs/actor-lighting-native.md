# Native actor lighting

Reference: original `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Addresses below are executable virtual addresses, not offsets into the file.

This investigation follows the lighting path compiled into the supplied game.
Later Genesis3D `puppet.c` revisions are useful for recognizing functions, but
their optional static-light and bump-mapping paths do not establish that those
features ran in this 2000 executable. No original-game gameplay capture was made
for this investigation; the reference consists of executable arithmetic, retained
actor settings and original BSP data.

## Actor configuration

The Davilex wrapper at `0x49d210` reads the current engine lighting options and
applies the actor definition's settings. The setter chain is
`0x49d480` → `geActor_SetLightingOptions` at `0x5b51b0` →
`gePuppet_SetLightingOptions` at `0x5cd950`.

- `ActorLightingUseSun` enables the selected Sun's directional fill.
- `ActorLightingUseAmbient` means ambient sampled from the floor lightmap. It
  does not mean Three.js scene ambient or hemisphere lighting.
- `ActorLightingOverrideAmbient` chooses the configured ambient RGB; otherwise
  the configured ambient is zero. Floor sampling can replace that configured
  ambient even when an override exists.
- `ActorLightingSunIntensityFactor` multiplies an actual selected Sun. The
  default-Sun fallback at `0x49d2d0` copies its own raw RGB and normalized normal
  without that factor.
- `UseDefaultSunOnly` forces the default. `UseDefaultSun` supplies it when no
  actual Sun is available. With neither fallback and no visible Sun, the wrapper
  explicitly writes zero fill RGB at `0x49d82d–0x49d844`.
- The definition's ambient animation is evaluated by `0x4a6c30`. The actor update
  at `0x49d969` copies its animated RGB into the configured ambient even without
  the static override flag. Samples `a` through `z` interpolate between the
  authored start and end colors, including the final-to-first wrap.

The imported inventory contains 165 actor assets, 139 with lighting blocks.
There are 20 ambient overrides, 20 actors disabling floor ambient, 17 disabling
Sun and three enabled ambient animations. No supplied actor enables either
default-Sun option. Every explicit dynamic-light maximum is two. RedCat uses a
configured `[55,55,55]` ambient with floor ambient disabled; knights and zombies
use the floor. No textured material in this inventory has a nonwhite material
color, but untextured materials can have authored tints.

## Local Sun selection

`AdamActor` at `0x49d5f0` calls the finder at `0x5654c0`. Level `Sun` entities are
local candidate fill lights: a single global directional light or hemisphere
cannot reproduce their room-dependent direction and color.

The reference point is the actor position plus `0.75 × (bbox.maxY − bbox.minY)`
on Y. It is not the dynamic-light root reference. The height comes from the
actor's cached box at offset `0x134`, not the current animated mesh bounds. Base
vtable `0x64e7b4`, slot `0x64`, points to `0x49c540`, which explicitly snapshots
the engine's current box. Actor setup/redefinition calls this via `0x49c5a0`;
ordinary idle pose updates do not themselves refresh this box.

For distance `d`, radius `r` and full-intensity inner radius `t`, the falloff is:

| `FallOffType` | Eligibility and intensity |
| --- | --- |
| 0 | No distance cutoff; factor 1 |
| 1 | `d <= r`; factor 1 |
| 2 or greater | `d <= r`; factor 1 while `d <= t`, then `1 − (d − t)/(r − t)` when `0 < t < r`; otherwise `1 − d/r` |

Original entity radii are used directly; there is no unit conversion. The
`SecretNumber` field does not participate in this actor-light selection.
Visibility at `0x594df0` combines a BSP visibility check with the line query at
`0x554ab0`. Eligible visible Suns are compared using
`(red + green + blue) × Light × falloff`. Only a strictly greater score replaces
the previous winner, preserving authored order for ties. The actor receives:

```text
normal = normalize(Sun.Origin − actorReference)
fillRGB = Sun.Color × Sun.Light × falloff × (2 / 255)
          × ActorLightingSunIntensityFactor
```

The channels are still in the raw byte domain and can exceed 255. The exact
compiled factor `2/255` is the float at `0x64e834`. Engine setup subsequently
divides these fill channels by 255; there is no sRGB decoding of light colors.

Selection is dirty-driven. Construction sets dirty at `0x49b31b`, position
setters `0x49bb10` and `0x49bb70` mark it again, and attachment transform updates
do so at `0x49ee90`. Update `0x49d890` performs the lookup and clears dirty at
`0x49d954`. The ordinary interval is zero; Sun-disabled actors use the disabled
timer setting. It is unnecessary to sort and trace unchanged actors every frame.

`ActorWorldLighting.sample(position, height, visible, cacheKey, revision)` uses a
weak actor cache. Position, height or visibility revision changes invalidate it;
stationary actors reuse the selection, including a cached absence of a Sun.
The callback identity does not invalidate the cache. The optional revision can
explicitly invalidate it, but normal rendering follows native actor dirtiness:
a remote moving brush alone does not force every stationary prop to reselect
its Sun. Moved actors query current brush and connected-area state. Candidates are sorted by
score before tracing, so a clear highest-score Sun finishes the search early
while retaining the native selection result and tie ordering.

The visibility wrapper constructs a null hull (`0x5545aa`), reaching the point
branch `0x5c9f70` → `0x5ca030` → `0x5ca810`. The Boolean BSP traversal splits
exactly at planes, tests contents mask `0x43`, and checks transformed world/brush
models without actors. Actor Sun visibility now uses that exact split instead
of the player collider's 0.05-unit contact skin. Directed PVS bits and connected
areas are checked first; a solid cluster rejects the light, while a missing PVS
row bypasses area filtering. Focused tests cover rays ending on a wall plane,
crossing it by a tiny amount, and translated/disabled occluders.

## Floor ambient

`gePuppet_ComputeAmbientLight` at `0x5ce190–0x5ce3a3` samples beneath the actor
root, with a downward trace of 30,000 original units. Valid lightmap samples are
divided by 255 and capped at `0.3` per channel. A missing floor or starting inside
solid space falls back to configured ambient. A floor explicitly without a
lightmap produces zero. The unsuccessful-face branch in the native code could
retain another actor's prior global ambient; that accidental cross-actor state
leak is not replicated. If authored texture shifts invalidate every native
sample, the sampler now retries the actual hit floor's unshifted lightmap
coordinates with strict face bounds. This fixes black hand torches without
changing valid samples, Sun visibility or flame effects. See
[actor-floor-lighting-native.md](actor-floor-lighting-native.md)
for the recovered BSP/luxel lookup and caching details.

Decorative `tree.act` corner trees additionally permit a cached, bounded floor
probe inside their own setup bounds when the original root is buried in solid
world geometry. This repairs the forest's black trees while preserving native
sampling for other actors and for already valid, including dark, floor samples.

## Dynamic lights

Puppet creation at `0x5cd52f` defaults to root reference `-1`, per-bone lighting
disabled and a maximum of three lights. The game wrapper preserves the root and
per-bone choices and overrides the maximum from the actor definition, normally
to two.

`0x5cdff0` prepares dynamic lights once per actor reference, from up to 32 engine
slots. Eligibility is strict `distance < radius`; eligible lights are selected
nearest-first, with input order retained at equal distances. After eligibility
and sorting, the native preparation uses:

```text
d = max(1, length(lightPosition − actorRoot))
direction = (lightPosition − actorRoot) / d
preparedRGB = (lightRGB / 255) × (1 − d / radius)
```

The one-unit distance floor affects both direction and attenuation. Actor
lighting does not trace dynamic lights through walls in this path. These values
are shared across the actor's vertices; recomputing direction and attenuation
from every fragment produces different highlights and oversized bright regions.
`src/actor-light-sampling.js` implements this preparation and a CPU vertex-color
reference. Its incoming light colors are already normalized raw RGB.

## Vertex colors and texture modulation

The actual actor vertex-color routine is `0x5ce3b0`. The render loop at
`0x5cecd8–0x5ced4d` invokes it for each CPU-transformed vertex, then sends those
colors to the rasterizer. It is not per-fragment Lambert shading.

```text
illumination = ambient
             + fillRGB × max(0, dot(normal, fillNormal))
             + sum(preparedRGB × max(0, dot(normal, preparedDirection)))
vertexRGB = clamp(materialRGB × illumination, 0, 255)
pixelRGB = interpolatedVertexRGB × textureRGB / 255
```

Material RGB is raw 0–255. The sum is multiplied by the material before the
single clamp; individual lights are not clamped first. The original optional
positive intensity multiplier is supported by the CPU reference, but the
compiled Puppet default is `-1` and there is no evidence that the supplied game
uses that optional multiplier for this actor path.

The remake's actor shader reproduces this arithmetic in the vertex stage.
Because Three.js decodes material and texture colors, the shader restores their
encoded values for native multiplication and converts the result once for
normal renderer output. Scene hemisphere, directional and point contributions
are excluded from actor materials to prevent a second lighting pass. This does
not require changing the lighting of world geometry.

## Focused verification

Only lighting-related checks are relevant to these changes. The Sun suite covers
falloff, direction, visibility selection, ties, overbright channels and weak-cache
invalidation, including unchanged occluded actors. Run it with:

```sh
node --test tests/actor-world-lighting.test.mjs
```

`tests/actor-lighting-native-scenes.mjs` compares WebGL framebuffer samples with
the recovered CPU arithmetic. Existing shader deviations in the recorded
fixtures ranged up to 110 byte values per channel; corrected samples have a
maximum error of 0.45 byte, below the test's 1.2-byte tolerance. The seven fixtures
cover white and dark textures, multiple colored lights, tinted material
saturation, configured ambient, a zero-light cap and a four-light capacity.
The reports are `artifacts/actor-lighting-before-gpu.json` and
`artifacts/actor-lighting-native-gpu.json`.

`tests/actor-vertex-lighting-scenes.mjs` checks interpolation after clamping each
vertex, including combined parent/actor rotations and scale. Its framebuffer
values agree with the independent CPU formula within 1.2 byte values.

Source-level checks in `tests/actor-world-lighting-scenes.mjs` passed for the
forest, castle, graveyard and caves. They verify selected local Sun RGB, floor
ambient, RedCat's fixed 55/255 ambient, and cache reuse across pose changes.
The graveyard fixture's lighting update median was about 0.6 ms stationary and
0.8 ms with two actors moving (p95 about 1.2–1.3 ms) on the test machine. This is
a lighting-only measurement, not a complete frame-time benchmark. A separate
caves case changes a brush transform over 20 updates and verifies zero new Sun
traces for stationary actors. Floor samples still invalidate on relevant model
changes. The actual tower light-entity test confirms that CastShadow reaches
floor lighting while direct puppet lights retain their native unshadowed path.
Ghost/death material clones and individual debris lighting state have focused
coverage; the existing forest projectile-light/heart-animation scene also
exercises the integrated shader.

These controlled comparisons verify arithmetic and source integration, not
visual parity against a recorded original-game playthrough. Float32 precision,
modern texture filtering may still differ from the original renderer. Invalid memory reads and
cross-actor ambient leaks are deliberately avoided. No builds were generated.

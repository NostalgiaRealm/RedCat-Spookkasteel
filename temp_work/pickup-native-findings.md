# Native pickup and score effect research — 2026-09-26

Original: `/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat`

Research is static executable disassembly, not a recorded native visual comparison. Addresses below are executable virtual addresses. `redcat-native-score-disasm.txt` is the retained full disassembly. `pickup-native-details-probe.py` reads this sibling file (the older probe referenced `/tmp`). `pickup-native-call-decode.py` symbolically walks the pickup particle initialization argument construction and prints the 36 arguments.

## Pickup effect object and lifetime

- Native class constructor `0x4689a0` allocates/initializes five `0x144`-byte generic particle objects and score artwork slots.
- Each item owns its own pickup effect. For example, Coin constructor `0x43c159` allocates `0xb10` bytes and calls `0x4689a0` at `0x43c21f`, storing the result at Coin+`0x358`. This is not one shared singleton per item kind.
- Pickup activation `0x4699f0` sets effect position and enables it, resets its five particles through `0x469980`, then starts the score popup with one-second duration through `0x469fb0`.
- Particles have a one-second lifetime. Outer routine `0x4693d0` disables the whole effect after its first particle becomes inactive. The score popup also lasts one second, so this is consistent.
- A native guard refuses to reactivate an effect at exactly its previous XYZ. It is redundant for one-time collected items; preserving collection idempotence avoids the same duplication without relying on float equality.

## Original pickup artwork

- `kaboom2.bmp` + `kaboom2_a.bmp` (strings loaded at `0x468b2d` and `0x468b62`).
- The artwork is applied to five triangular spokes. It is not five billboard spark sprites or an arbitrary explosion sequence.
- Renderer `0x4692d7..0x4692e9` calls the original world-poly routine with count **3**, textured poly type 0, flags 1. `0x5b6d60` confirms this argument is the vertex count (copies count × 36 bytes).
- The implementation prepares a fourth vertex but does not submit it. This differs from score rendering `0x46a5f1`, which explicitly submits four vertices.

## Exact orbit motion

Decoded initializer `0x469770`, generic setter `0x47db60`, and mode-two update `0x47ea90`:

| Parameter | Value |
| --- | --- |
| Particle count | 5 |
| Lifetime | 1 second |
| Initial orbit radius | 30 Genesis units |
| Final orbit radius | 0 |
| Radius interpolation duration | 1 second |
| Angular speed | 12.5 radians/second |
| Particle starting angles | i × 1.2566370964050293 = i × 2π/5 |
| Orbit axis | Y |
| Orbit center | item entity origin, with Y minus 0.1 |
| Extra orientation | zero |
| Initial opacity | 100% |
| Fade delay | 0.1 second |
| Fade target | 10% |
| Fade duration | 1.100000023841858 seconds |

For age `t` in `[0,1)`:

```js
r = 30 * (1 - t);
a = i * 2 * Math.PI / 5 + 12.5 * t;
P = [origin.x + r * Math.cos(a), origin.y - 0.1,
     origin.z - r * Math.sin(a)];
alpha = t <= .1 ? 1 : 1 - .9 * (t - .1) / 1.1;
```

Particle lifetime expires before opacity reaches its configured 10% target. Do not stretch the effect to 1.2 seconds simply to complete that fade. Generic restart `0x47e710` restores starting alpha and angle, and `0x47e7b0` resets all relevant timers. Native uses update-step timing and truncates alpha to integer 0..255; continuous sampling is the corresponding stable-time equivalent.

Y rotation is confirmed by matrix helper `0x5b3130`: cos at XX/ZZ, +sin at XZ, −sin at ZX.

## Exact spoke geometry and UVs

World-space geometry is independent of the camera. The update `0x46949a..0x469569` starts with radial vector `P - origin` and vertical `[0,100,0]`. It computes dot = −10 (because endpoint Y is origin Y−0.1), scales the radial vector by this dot, and then crosses the normalized result with the normalized residual-up vector. The resulting tangent direction is:

```js
tangent = [Math.sin(a) * -1, 0, Math.cos(a) * -1];
// equivalently normalize([P.z-origin.z, 0, -(P.x-origin.x)])
```

The three **submitted** vertices are:

| Vertex | Position | Native UV |
| --- | --- | --- |
| 0 | P − 10 × tangent | (0,1) |
| 1 | P + 10 × tangent | (1,1) |
| 2 | origin + 2.5 × tangent | (1,0) |

The calculated but unsubmitted fourth vertex is `origin − 2.5 × tangent`, UV(0,0). Outer halfwidth is 10 and origin halfwidth is 2.5. The first two points lie 0.1 unit below the origin; the apex stays exactly at origin Y. They are thus effectively horizontal triangular pinwheel spokes, shrinking in length and rotating rapidly. Native UV assignments are in constructor `0x468aa5..0x468acd`; vertex positions at `0x4695a5..0x4696e7`.

## Color animation

Initial channels RGB = `(20,255,20)` at `0x468af8..0x468b22`. Direction initially increases, component index initially R. `0x469330` changes one channel by `700 * deltaSeconds`, clamps to20..255 at a boundary, toggles direction, and `0x4693ff..0x46946a` advances the component index modulo three. It discards overshoot at the clamp.

Sequence is R up, G down, B up, R down, G up, B down, repeating. Each ramp takes 235/700 ~=0.335714 seconds in continuous time. Normal collected items have never used their effect before, so each starts at the same color. There is no reason to share global rainbow phase between different pickups. A save taken during a burst should preserve its age; a stable-time sampler avoids a frame-dependent phase jump when restored.

## Origins

### Pickup

Coin call site `0x43c809..0x43c831` fetches entity position through virtual slot+0x48 and passes it by value to `0x4699f0`. Coin vtable at`0x64c638` has `0x49bbd0` in this slot. `0x49bbd0` simply copies three floats at entity+0x18c. Potion call site `0x441efc..0x441f25` follows the same getter convention.

Use the item's current transformed entity origin. No explicit extra ItemYOffset18 or bounds-center offset is inserted here. The burst and score receive exactly the same pickup origin. A pickup attached to a moving actor must use the transformed current origin, not the map's original untranslated coordinates.

### Enemy score

**Correction to earlier research summary:** enemy score activation `0x46e9f0..0x46ea75` calls `0x49bc80`, which is a bounds-center getter, **not** a raw root-position getter.

`0x49bc80` adds local entity bounds vectors at+0x11c and+0x128, scales their sum by0.5 through `0x5b3020`, and adds the same entity-position getter(+0x48). Therefore enemy popup origin = current entity position + half(local bounds min+max). Capture it before death animation changes actor pose. The original existing enemy purple smoke system is separate and should not receive an extra pickup pinwheel.

## Floating score cards

For completeness, source has five artwork pairs:

| Pair | Text |
| --- | --- |
| score0.bmp / score0_a.bmp | 5 |
| score1.bmp / score1_a.bmp | 15 |
| score2.bmp / score2_a.bmp | 25 |
| score3.bmp / score3_a.bmp | 50 |
| score4.bmp / score4_a.bmp | 75 |

Score popup uses one second for pickups,1.5 seconds for enemy kills. With normalized progress p and factor f=.1+.9p, halfsize=20f, centerY=originY+75f, alpha=1−f. It is an upright yaw-facing world-space quad. The original adds tiny ±0.5 XY corrections to corner coordinates. Unknown/non-native award amounts have no exact native card; do not show a misleading arbitrary reward.

## Evidence and limits

Exact texture, count, UV, motion, color rates, alpha and primary origins are confirmed from disassembly. Native rendering flags are numeric and no extra additive blend was requested by this effect. Runtime visual testing of the remake remains needed; this report does not claim an original-game video comparison. Continuous-time color ramp sampling differs slightly from native frame-step overshoot truncation and is preferable for deterministic restore behavior.

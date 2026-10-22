# Fleurifee ribbon fade: native evidence

Research date: 2026-10-14. This is a retained research record, not a release claim.

## Artifact and method

Target: `RcHcGame.dat`, 32-bit Windows PE from the installed original game.
SHA-256: `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.

Used the REA skill and Hopper-backed REA function analysis, cross-references and
constant reads. The complete export is `rea-evidence-bundle.json` (43 evidence
records). `evidence-index.md` maps requests and resolved functions to evidence IDs.
REA has been closed. No native process was executed for this research; claims
below describe the shipped instructions, with numerical interpretation stated
explicitly. Existing retained objdump listings provide an independent readable
cross-check. No source, assets, audio or package files were changed by this subtask.

## Confirmed constructor fields

Fairy initialization is in function `0x478a00`, particularly `0x478f18–0x478fbb`.
The shared trail constructor is `0x586b40`.

| Field | Original value | Meaning confirmed by consumers |
| --- | --- | --- |
| `+0x3c` | float32 `0.96` | Half-width; full ribbon width is approximately `1.92` |
| `+0x40/44/48` | `255,255,25` | RGB color |
| `+0x4c` | `255` | Color alpha field; this renderer does not use it for its fade |
| `+0x50` | float32 `1.6` | Distance required to commit another history point |
| `+0x54` | `-1` | Time-based sample condition disabled |
| `+0x58` | `800` | Trail attenuation duration in milliseconds |
| `+0x5c` | PTrail bitmap pointer | Rendered artwork |
| `+0x60` | float32 `100` | Owner opacity, in native 0–255 units |

Earlier interpreting `1.6` as the ribbon width was incorrect: the renderer reads
`+0x3c`, while the updater compares distance against `+0x50`. The fairy also writes
`+0x39=true`; no consumer was found in the inspected trail constructor/update/render
functions, so this byte is not assigned a speculative visual meaning here.

Evidence: `ev_9895cba9eb2aff69ec70dec03e59b4a7a2078668f6a79c67f03db49dcc73c476`; `ev_089d49dcff2ecf4b592590912fe478f79cf251a34ea8a67cdfff27a42439a202`.

## Fade equation and history timestamps

Trail render entry is `0x587550` (the request inside it was `0x587800`). Its fade
section is `0x587a2a–0x587b01`. It reads the newest history point's timestamp as the
reference at `0x587871–0x587884`. It does not read the current render clock here.
For a segment joining stored points `i-1` and `i`, use:

- `i == 1`: timestamp of point **1**, the second stored point.
- `i > 1`: timestamp of point **i-1**, the segment's first stored point.

The branch implementing this special first segment is `0x587a3e–0x587a53`.
With `ageMs = newest.timeMs - selectedPoint.timeMs`, the native calculation is:

```text
ageRatio = ageMs / 800
remaining = max(0, 1 - ageRatio)
alpha255 = 255 * remaining * 100 * float32(1 / 255)
draw only if alpha255 > 5
```

Normalized for the port's alpha convention this is mathematically:

```text
alpha = (100 / 255) * max(0, 1 - ageMs / 800)
draw only if alpha > (5 / 255)
```

The native constant is the nearest float32 `0.003921568859368563`, so the x87
operation sequence can differ infinitesimally from algebraically simplified
JavaScript at the cutoff boundary. In ideal real arithmetic the cutoff is at
760 ms. This is linear alpha attenuation, **not** exponential attenuation and
**not** RGB fading. All four vertices of each quad receive the same computed alpha.
The textured bitmap's opacity further modulates the rendered result.

Fade example, before the bitmap mask: age 0 ms = `100/255`; 200 ms = `75/255`;
400 ms = `50/255`; 600 ms = `25/255`; 760 ms = cutoff; 800 ms = zero.

Evidence: `ev_d24dbf25e9cc08899b0ef407a7c5f914c925186f882fad847b7332de59938d14`. Supporting constant reads: 0 at `0x64a450` `ev_3f10e53ed4e778bc3f60bc29658a6dcddfeb7fee360178f27ff28c8c27bffbfa`,
1 at `0x64a354` `ev_676d2380a564a74650dc154eac9177776f8e4afd12209cf59409ed74013db839`, 255 at `0x64a438` `ev_30d0e3fe4e26cb8d2ee1d838da0be1f2673795aeadcbec84a1d23d2c25bd21d8`, 5 at `0x64cf7c` `ev_cee4bbc012aafe7b3e2284a37968ed01518a1c0843a4d2302c845cbe13e66cb1`,
1/255 at `0x64fdb8` `ev_8ba10e9ddb2f6a1603c801a268607bce6a04ea3c7689f2396f6f1ea08c88a07f`.

## Texture, geometry and sampling

The fairy obtains its ribbon bitmap from global `0x6b87d8`. Its initializer
`0x4781c0` names `PTrail.bmp`; the related alpha initializer `0x4780c0`, global
`0x6b8810`, names `PTrail_a.bmp`. The reference setter at `0x587100` stores the
result in trail `+0x5c`. These are textured ribbons, not solid untextured triangles,
and not the ENERGY bitmap used by the old reconstruction.

The renderer maps a complete texture over each quad. With A the older endpoint,
B the newer endpoint and `side = normalize((B-A) cross cameraForward) * halfWidth`,
its texture coordinates are B-minus-side=(1,1), B-plus-side=(1,0), A-plus-side=(0,0),
and A-minus-side=(0,1). Thus U runs along the segment, V across its width.
The retained `ribbon-vector-functions-disassembly.txt` independently checks the
subtraction, cross-product order and camera-forward helper. Width is oriented with
the segment direction crossed with the camera's forward direction. Its render flag
choice reads `+0x38`, which defaults to false; it does **not** read the fairy-written
`+0x39`. A literal flag value is insufficient by itself to infer a new WebGL blend
mode, so preserve the established port interpretation of this rendering path.

Updater `0x5871f0` begins with two identical points. On following updates it replaces
the final/live endpoint's position and integer timestamp. It appends a duplicate
live endpoint only when the distance from the preceding committed point is
strictly greater than 1.6. With `+0x54=-1`, there is no periodic time-based append.
There can be at most one append per orbiter per native update; adding interpolated
samples within a fixed tick is not native. After drawing, the renderer identifies
the first submitted segment and discards earlier history while preserving one
preceding point, provided more than two points would remain (`0x587cb0–0x587d0b`). Samples progress on updates, so a paused trail freezes
both geometry and attenuation. Existing fixed-step simulation is an intentional
port adaptation; the original was frame-driven.

Evidence: texture `ev_4bb1abcfc0df41c4d6a8dbc7a8eee31a0736a1ec79bd25a71c4b4130b4725691`; mask `ev_80f72afe2ba2ef426ef8d253dba92ce0ad596cf6e8886eb71479cfc69d181437`; setter `ev_708559cebd807669553f1d3eb030b7b6bff88832e323ff4517a3164af2bc4662`; renderer `ev_d24dbf25e9cc08899b0ef407a7c5f914c925186f882fad847b7332de59938d14`;
update `ev_9e8833369f9174949c825afbbc271055a999216b56fa21aedc06af5821e51987`; penultimate-point helper `ev_9bbb4428623b593e098158a665cbf03effe5e344aa2b2437016f639d1bafe823`; append helper `ev_1f7847e7dd6f684263c84cd4c54991fedf24dd98b22bb9621195f1e5b5978fd8`.

## Lifetime, disappearance and reactivation

`0x47c760` passes the entity's `LifeTime` field at `+0x18` to the center and each of
the five orbiters. Activation `0x47cdb0` starts the center and orbiters in the same
activation call via `0x47e710`. The shared particle update `0x47dd60` checks total
lifetime first and clears the active flag before any remaining alpha/orbit work.
The configured alpha 100-to-0 transition (delay 1 second, duration 3 seconds) does
not extend the authored total lifetime.

The frame function `0x479560` triggers the separate departure burst using
`0x47c580(-1)` after the center stops. It updates each ribbon only while its orbiter
is active and the fairy's ribbon flag `+0x4b54` is set; it clears that flag at
`0x479753` when it encounters an inactive orbiter. The orbiter renderer (`0x47b160`)
checks orbiter active state at `0x47b483`, and the ribbon flag at `0x47b76f`, before
calling the shared ribbon renderer through vtable slot `+0xc`.

Consequently normal authored expiry ends the center and orbiters together, and
there is **no independent 800 ms ribbon afterimage after the orbiter expires**.
The separate burst continues according to its own configured particle lifetime.
The history clock would freeze without updates, but inactive orbiters do not render
those frozen ribbons.

Native explicit `disable` is a separate case: command handler `0x4797e0` calls
`0x502350(0)`, which removes the actor from its enabled list (via `0x4f62e0`). It does
not explicitly clear the center, orbiters, burst or trail history. Native `enable`
calls the enable setter and `0x47cdb0`; the latter bails while `+0x4be8` is already
active. When starting again it resets particle timers, not the ribbon history.
Old absolute timestamps ordinarily make old segments age out on the first fresh
update, but a very short reactivation can retain history.

The port's deliberate clean stop on skipped cutscenes should be preserved. Do not
change its existing reactivation policy as part of this fade correction. They solve earlier reported lingering effects and are outside the
requested fade correction. Do not change sound/music scheduling with this work.

Evidence: config `ev_a11c5fa79f747e85eba3c2ea820e7ab4d0d9812ad1a311926d1c74f92b904962`; particle config `ev_ef73017e6e216d535ad25224f6825e8ea1e71a11e7ae635416e2294a65981a40`; particle update
`ev_d662ee7ac79d7ab225b8228ac790089170f07cdab115f9187050914d362b7bb0`; activation `ev_b0f4f1981c29fd1cbec3a92144cf19c5087f00382ece68f6fda76f43afdc29fe`; particle activation `ev_6c524bbb65d55ba4ab92bc7f3538683b49e72f7cba8bb4bc5145d3d61cf2e08f`;
fairy frame `ev_8bf9611c96a1aaa671151c8ab8ead36dfdf1a406022e8bc88059b3f2ae6e98db`; orbiter renderer `ev_b91426b72c3cc499e8c91f658bb77b6a08072746ee62b085d28ef598b45b76d2`; burst `ev_bc30cd41cf61124ef26b82978393a1b0a7216a5afac52a9dc7c4ab54878678ef`; command dispatcher
`ev_7abea4960e547128fd9a148f2f9f283d9cc755172dc905a5bf08448401c63d7f`; enabled-list setter `ev_03f92af65232a6ec9b0e567679c0e66c1f49cae6f5a49e752df64f7059238e0e`.

## Remaining scope limits

The scalar fade, width, texture identity, sampling threshold, timestamp selection
and normal lifecycle are confirmed from shipped code. This research does not claim
pixel-identical rasterization across Genesis3D and WebGL, or native runtime visual
verification. Float rounding at the strict cutoff and the port's fixed simulation
step remain small numerical differences. The explicit disable/re-enable history
quirk is documented instead of silently reintroducing lingering effects.

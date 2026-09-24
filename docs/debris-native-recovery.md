# Native debris recovery

Source: the installed original `RcHcGame.dat` and the fragment actor INI files.
This investigation replaces the previous generic hemisphere burst, fixed
two-unit collision box, constant spin and unconditional last-0.75-second fade.
It does not change the already recovered explosion sprite frame clock.

## Recovered behavior

| Original address | Behavior now reproduced |
| --- | --- |
| `0x4a7aee–0x4a7b45` | Inclusive integer count between each particle type's minimum and maximum. |
| `0x4a7360`, `0x4a7514–0x4a75cb` | Each fragment starts at an independent random Y/X/Z position across the destroyed actor's bounding box. |
| `0x4a760f–0x4a7786` | Explosion launch vector is `normalize([rand*60−30, rand*20+50, rand*60−30])`, multiplied by the type's random speed. This is a much steeper upward burst than a uniform hemisphere. |
| `0x4a75ce–0x4a75f7` | Fragments inherit the source actor's scale. |
| `0x56fe00`, `0x57116d–0x5711ca` | The fragment actor's own INI determines lifetime and physics. The destroyed prop's particle types determine the count and launch speed. Lifetime is selected in milliseconds. |
| `0x570fd0–0x571131` | Random signed spin rate for each axis: `±3*(2.513274 + rand*0.628318)`. |
| `0x56fd00–0x56fdf2` | Spin rate is additionally multiplied by `speed*0.005*RotationSpeed/100`, so slowing debris spins less. |
| `0x49ccf0`, `0x5b31f0`, `0x5b32c0` | Spin pre-multiplies world-axis X, Y, then Z rotations; it does not add Euler angles. The portable renderer composes the equivalent quaternion. |
| `0x570028–0x5701bb` | Gravity changes velocity first, by `Gravity*32*dt`; `0 ≤ AirFriction < 1` applies the linear multiplier `max(0,1−(1−AirFriction)*dt)`. The resulting velocity advances position. |
| `0x5705ba–0x57080e` | Collision extents: minimum `[-0.16*SizeX, -0.32*FloorOffset, -0.16*SizeZ]`, maximum `[0.16*SizeX, 0.32*SizeY, 0.16*SizeZ]`. They do not depend on mesh size or spin. |
| `0x5b1470`, `0x5b1570`, `0x570b19` | Normalize incoming velocity; subtract `Elasticity*dot(v,n)*n`; zero reflected unit components smaller than 0.01; multiply by incoming speed and `Friction`. Collisions also multiply spin velocity by `Friction`. |
| `0x570bf6` | A maximum of ten collision iterations per update. |
| `0x570d22–0x570fa7` | A fragment stops simulating after more than ten contacts when speed falls below 100. Rotating fragments lie flat with a random yaw. If `MustFade` is enabled, settling starts a two-second fade and resets remaining lifetime to two seconds. |
| `0x56fa4b–0x56fb16` | Fade interpolates opacity linearly. Airborne particles do not get an invented end-of-life fade; they expire at their selected lifetime. |

`tools/import_actors.py` now preserves the previously omitted `ParticleSizeX`,
`ParticleSizeY` and `ParticleSizeZ`. Only existing fragment JSON metadata was
updated from the original INIs; geometry, texture and lighting imports were
preserved. Original crate, gravestone, door, glass and other fragments still
use their own meshes and materials.

## Portable boundaries

The random generator uses the original MSVC 15-bit output and modulo-10000
sampling, with a deterministic seed per explosion. It does not reproduce the
original process-wide RNG's exact sequence, which also depends on unrelated
gameplay calls. Counts use the full authored range; the original optional
effect-detail setting could reduce its maximum.

Collision uses the portable BSP collider rather than Genesis's `AdamTrace`.
Remaining movement is swept after reflection with at most ten retries. A
fragment starting slightly inside a solid can use the collider's nearest
separating plane, bounded to eight world units, to avoid repeated stationary
contacts. Skin tolerances and exact corner contacts therefore remain portable
adaptations. Debris is visual and does not introduce player/enemy blockers.
Native single-precision matrix rounding is not claimed bit-identical. Fragment
materials get independent actor-lighting state; cloned shader callbacks cannot
accidentally leave debris unlit or share a prototype's lighting at the origin.

## Explosion placement and smoke

The same investigation also replaced the simultaneous circular blast layout
and the single oversized brown smoke billboard.

| Original address | Recovered behavior |
| --- | --- |
| `0x4a7b59–0x4a7d38` | Choose the longest source bounding-box axis and distribute blast positions using the six-row native lookup table. |
| `0x4a7d53–0x4a8178` | Index the table with `int(NrExplosions)%6` and `index%6`; add ±5% extent jitter along the selected axis, ±20% along the other two axes. The count-one case really indexes the 0.3 position, not the centre. |
| `0x4a83ea–0x4a8413` | First blast has no delay; each following blast is delayed another 150–200 ms. |
| `0x58dd70`, `0x58e56a` | The already recovered normal `Explosie01..08` sprite clock and scale curve stay unchanged. |
| `0x58ac10`, `0x58ada0`, `0x58e8ea` | Normal smoke uses `smoke_05.bmp`; green smoke uses `smoke_green.bmp`, both with `smoke_green_a.bmp`. No invented brown colour multiplier. |
| `0x58d731–0x58d77b`, `0x58e87a–0x58eb72` | Smoke birth offsets are random in `[-r,0,-r]..[r,r,r]`, where `r=SizePercentage/100*32`. The flash size includes a separate factor of 20; reusing that full size for the birth box would be wrong. |
| `0x58e917`, `0x58eb7b`, `0x4ada4e`, `0x4adb04`, `0x4adc02` | Smoke starts at 200 ms, repeating every 400 ms. The cell's expiry calculation adds its start offset to the requested lifetime, then starts that duration on first activation: ideal scheduled emission is 200/600/1000/1400 ms. The final boundary can vary by one frame in the original. |
| `0x4b2dcf–0x4b2e01`, `0x58e956` | One smoke particle per emission, not a continuous or frame-rate-dependent spawner. |
| `0x4b2ef0–0x4b3030`, `0x58eb23` | Signed integer direction components of 2–16; Y is multiplied by 1.5; normalize and multiply by 25–40, flipping the vector if it points down. |
| `0x4b3311–0x4b3348`, `0x58e94f` | Per-particle lifetime is `trunc(1200 + rand*599)` milliseconds. |
| `0x4b33d1–0x4b3408`, `0x58e944`, `0x58ea32` | Random initial smoke size of 40–80% of the full flash size. |
| `0x56e970`, `0x58eb40–0x58eb6b` | Over that particle's lifetime, multiply its size from 50% to 100%; opacity decreases from 80% to 10%. |
| `0x56f095`, `0x5918d0`, `0x58eb75` | Constant velocity in world units per second; blast smoke has zero gravity and no collision trace. |

Each blast precomputes a finite four-particle smoke cohort once. Rendering reuses
the particle position/output objects and existing billboard batches. Expired
cohorts and consumed event IDs are removed; no smoke traces, material creation
or unbounded emission occur during playback. The existing portable limit of
16 blasts guards malformed counts. All currently imported actors author one
blast and disable Green/Electric; the unused green **flash** still uses the
previous colour substitute, and electrical arcs are not newly implemented.

## Focused checks

`node --test tests/debris-native.test.mjs` covers the source-volume launch,
steep upward spread, fragment-specific settings and imported dimensions,
gravity and air drag, velocity-dependent spin, normalized impact response,
settle-only fading, bounded collision work, and scene/material cleanup.
The later corner-separation/lighting changes were checked with only the
`embedded|cohort` name filter. `node --test tests/explosion-native.test.mjs`
covers native placement/delays, the smoke emission bounds and lifetimes,
size/opacity/motion, unchanged flash clocks, smoke-only/green selection,
and cohort/event cleanup.

No package build or unrelated regression suite was run.

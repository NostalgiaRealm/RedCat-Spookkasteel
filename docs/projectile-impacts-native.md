# Native projectile contacts and hit effects

Read-only reference: installed Dutch `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Addresses are executable virtual addresses. No new builds were made.

## Live subclass dispatch

The common impact path at `0x44c530` stops projectile loop audio and calls
virtual `+0x60` (contact hook) and `+0x64` (impact-effect factory). It retires the
projectile after handling contact. The following RTTI-identified enemy vtables
all use no-op `0x581170` for the hook and null-returning `0x44aef0` for the factory:

| Projectile | Vtable |
| --- | --- |
| Bone | `0x64c9bc` |
| EnemyShot | `0x64ca64` |
| Goo | `0x64cba0` |
| Poison | `0x64cc24` |
| JesterBall | `0x64cccc` |
| MagicBall | `0x64cd84` |
| Magma | `0x64ce2c` |
| Mushroom | `0x64cefc` |
| Skull | `0x64d1a0` |

Consequently no new enemy explosion, bounce or splash damage is inferred from
unused settings. Shared direct body damage and the recovered ±0.032 collision
hull remain. Mushroom ribbon damage is removed because its `TrailDamage` has no
live consumer; see [the detailed trace](mushroom-trail-native.md).

## Player hit artwork and lighting

Player factories are non-null and were missing from the renderer:

| Kind | Factory | RcExplosion type | SizePercentage | Artwork | Light RGB / peak radius |
| --- | --- | --- | --- | --- | --- |
| Shot | `0x44f430` | 4 | 50 | `expl_gen01..08_yel.bmp` | 255,192,0 / 180 |
| PowerShot | `0x44af00` | 3 | 35 | `expl_gen01..08_red.bmp` | 80,245,220 / 126 |
| SuperShot | `0x450f30` | 2 | 75 | `expl_gen01..08.bmp` | 34,218,40 / 270 |

The common factory moves the visual effect five units back along normalized
projectile velocity (`0x44c5a1–0x44c5cb`). This is separate from contact position:
the actual hit and damage stay on the swept collision surface. An effect appears
only on a wall or actor impact, not on an ordinary lifetime expiry.

`RcExplosion::Init` (`0x463550`) dispatches the sprite sequences through table
`0x464c34`. All use the original 64×64 RGB frames and
`expl_gen_A_01..08.bmp` alpha masks without resampling/recoloring. The importer
now includes the sixteen previously missing red/yellow images, with source
SHA-256 hashes recorded in `assets/effects/manifest.json`.

Cells start at 0, 100, 200, 300, 400, 500, 600 and **699 milliseconds**.
The base scale is `SizePercentage × .01 × 5` (`0x463571–0x46358d`). The
first six cells multiply it by .4; the last two use .0001, deliberately shrinking
to almost nothing. The initial sprite sides are 64, 44.8 and 96 world units for
Shot, PowerShot and SuperShot respectively. The MultiEffect checks completion
after executing its cells (`0x4acfa0`, `0x4ad3e0`); these one-shot cell vtables
use `0x5ad380` for completion after starting, so the final 699ms cell retires the
sprite owner. A simulation tick can quantize its final visible frame.

The light cell separately creates a world light (`0x4aecfc–0x4aed04`) with a
**1000ms lifetime**, native RGB colors and peak radius
`trunc(float32(SizePercentage × .01 × 360))` (`0x4639b6–0x463aa0`). Its
uninterpolated radius sequence is `pszzzspmea`: each letter represents
`(letter − 'a') / 25`. World surfaces use the recovered BSP texture-axis
octagonal falloff and per-luxel clamping; actors use linear falloff. The gameplay record survives the short light tail and is
discarded after one second; no persistent list of old projectile IDs is kept.

Impact state saves only `{id, kind, birth, position}` alongside the gameplay
clock. Reloading reconstructs the same frame and light phase. Old saves without
this optional array remain compatible. Pause freezes the gameplay clock; effects
can finish during cutscenes while the usual cutscene damage protection remains.

## Charged-hit shockwave

SuperShot type 2 additionally creates a shockwave cell at 400ms
(`0x4635a7–0x463612`). The live bitmap initializer selects **`Electricwave.bmp`
and `Electricwave_a.bmp`** (`0x4632b5`, `0x46333c`). Both original 128×128 images
are imported pixel-for-pixel.

`CAdamShockwaveCell::Render` (`0x4b4cc0`) copies the effect position twice,
then raises/lowers those points by its radius. They are not authored bounds.
It derives an upright quad's horizontal right vector from the direction between
camera and effect: normalize `(direction.z, 0, -direction.x)` (`0x4b4f34`).
Thus the quad rotates around world Y; camera pitch does not tilt it.
With `t = (age − .4) / .6`, its radius is
`50 × sqrt(.1² × (1−t) + .2² × t)` (`0x4b4e49–0x4b4e6f`), and opacity is
`1−t` (`0x4b4f8d–0x4b4fb0`). The original cell's nominal fade is 600ms, but
the containing one-shot MultiEffect retires at its final 699ms cell, so it does
not reach that nominal fade's end. The remake follows that owner lifetime.

The second helper at `0x4b5260` traces down from the effect to one radius below
it. If it hits within the radius, it adds a floor-folded trapezoid; the upright
quad remains and ordinary scene depth testing hides its underground portion.
Let `fold = 1 − distanceToFloor/radius`. The contact edge spans the full
right vector, the farther edge is narrowed to .85 of that width and shifted
towards the camera by `.85 × fold × radius` (`0x4b554d`, `0x4b5655`). The
contact edge's V is `1 − fold/2`, with V=1 at the far edge (`0x4b5604`).
This is now represented by a single reusable mesh with up to two quads per
charged impact. The only added numerical guard is a stable upright plane when
the camera is exactly vertically aligned and the native cross product vanishes.

## Contact scope

The shared factory copies projectile damage/radius into inherited effect fields,
but this `RcExplosion::Init` override does not consume those fields for damage.
The remake therefore does not invent a second radial damage event.

Portable BSP and actor traces remain the remake's collision backend, so geometry
roundoff at a contact boundary can differ from the original Genesis query.
The recovered subclass behavior adds no secondary damage from visual effects.

## Focused validation

`tests/projectile-impacts.test.mjs` covers native factory selection, visual
offset, exact cell boundaries/artwork sizes, light pulse/colors, real wall/enemy
contacts, lack of extra damage, save restoration, bounded lifetime and render
submission. `tests/projectile-hazards*.test.mjs` cover harmless ribbon overlap,
body impact damage, ownership cleanup and existing saves. Existing projectile
collision tests and the single saved-difficulty test exercise the affected
contact/difficulty path; the complete historical test suite was not rerun.
The charged-wave tests cover upright orientation, nonlinear radius, 400ms start,
699ms owner retirement, floor UV cropping/taper and reuse of the render mesh.
Pixel and source-hash comparisons against the installation passed for all 25
hit/wave textures; results are in `artifacts/projectile-impact-artwork.json`.

The source browser check `node tests/native-light-impact-scenes.mjs --impacts-only`
renders all three original sprite/light profiles in the graveyard, checks the
400ms charged-wave handoff, and places a charged impact against real ground to
verify its two-quad fold changes rendered pixels. Screenshots are saved as
`artifacts/native-impact-bursts.png` and `artifacts/native-charged-impact-wave.png`.
No browser/shader or missing-resource errors occurred. The full command also
tests BSP dynamic-light GPU output; `--impacts-only` avoids repeating those
already-passed checks after an impact-only edit.

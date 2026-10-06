# Beacon, corona and footstep recovery

Reference executable: installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.

## Save beacon texture movement

`0x46aa0e–0x46aa14` initializes a shared texture offset to zero and its
direction flag to one. `0x46c060–0x46c083` visits every assembled ray in
order. Each visit calls `0x46ba00`; its tail (`0x46bc67–0x46bcde`) moves the
offset by 0.01, changes direction at +0.03, and writes V coordinates
`0.03 + offset` at the crystal end and `0.97 + offset` at the ray start.
There is no lower reversal in this executable: after the initial rise, the
energy texture continues scrolling down. The common offset also puts
successive rays at slightly different phases.

`saveBeaconUv` reproduces the sequence on a fixed 60 Hz visual clock. Its
closed-form count includes each ray only after that ray's 600 ms start,
so restoring a long-running beacon does not replay thousands of frames.
The original's scrolling speed depended on frame rate; the portable clock
intentionally makes it stable across displays.

## Corona visibility and fading

`CAdamEffectCorona::Tick` at `0x57a5b0` checks the world leaf, rejects a
corona behind the camera (`0x57aa03–0x57aa41`), then traces the camera to
the corona using world/model collision (`0x57aa47–0x57aa6b`). An enemy
passing in front of a lamp is not part of this trace.

The actual fade is a **radius** change, not an opacity change. Visible
radius is clamped to the distance-interpolated RadiusMin/RadiusMax target.
It increases by `seconds * RadiusMax / FadeTime` when visible and decreases
at the same rate when hidden (`0x57aac7–0x57ab3a`). FadeTime zero switches
instantly. The renderer passes flag 2 at `0x57ade1`, which is
`GE_RENDER_DO_NOT_OCCLUDE_SELF`: the shrinking halo remains briefly visible
behind the blocker instead of being abruptly depth-clipped. This flag is
also defined in the original engine's [Genesis.h](https://raw.githubusercontent.com/RealityFactory/Genesis3D/master/Genesis.h).

The portable visibility cache limits BSP traces to eight per update and
refreshes an individual eligible corona no faster than 100 ms. It processes
oldest checks first to prevent starvation. This introduces a small bounded
sampling delay while the radius itself advances each frame. It avoids
bringing back the graveyard's per-frame collision-query hitches.

### Fixture halo dimensions

Button indicators, candles and other authored fixture coronas use the
64×64 `Coreff.bmp` artwork. The native constructor initializes the extra
scale multiplier to one at `0x57a05a`. At `0x57add3–0x57adde`, the draw
routine submits `currentRadius * 0.25` as a textured-point **scale**.
The executable's renderer multiplies that scale by the bitmap width and
height (`0x5b669d–0x5b66fe`), then halves the resulting dimensions to
position the quad's edges (`0x5b6702–0x5b6710`).

Consequently the full halo width and height are `64 * radius * 0.25`, or
`16 * radius`. The remake previously used `2 * radius`, making these
lights eight times too small in each dimension. `WorldEffects` now uses
the imported artwork dimensions and the native scale. Distance-dependent
radius, color, visibility checks and fading retain their existing behavior.
This textured-point sizing rule belongs to fixture coronas. Smoke/flame spouts
instead use the separately recovered world-unit half-size `10 * Scale`, their
authored size interpolation and native one-unit quad offsets, independently of
bitmap pixel dimensions; see [smoke/flame recovery](spout-effects-native.md).
The separate save-beacon glow retains its own geometry and does not use the
fixture-corona correction.

Focused verification covers all 233 authored coronas across the five
levels (4, 36, 68, 92 and 33 respectively), at both near and far distances,
plus disabling an indicator. Run only the relevant cases with:

```sh
node --test --test-name-pattern='corona' tests/presentation-native.test.mjs tests/presentation-renderer.test.mjs
TMPDIR=current_work node tests/fixture-light-scenes.mjs
```

The scene check uses an isolated browser profile and compares the old and
corrected halo sizes against actual castle and graveyard scenery. It
isolates the selected halo, checks the production batch dimensions and
retains screenshots and reports under
`current_work/fixture-lights-2026-09-30/`. Native executable excerpts and
the sizing evidence are retained in that same directory. These checks
passed without generating packages or running unrelated tests.

## Footsteps

The native footstep routine (`0x4d9d40`) uses the independent Wobble phase,
not events embedded in RedCat's animation clips. `0x4dae7b–0x4dae93` stores
the original movement vector after the movement callback returns; the
Wobble function samples that vector at `0x4d9f26`. It therefore uses the
directional input plus environmental speed before the gameplay ground displacement multiplier.
Moving-platform carry should not speed up or slow down this clock.

The phase rate is `sqrt(speed / mean(runForward,walkForward)) *
Wobble.RunLoopSpeed`; quarter crossings alternate the existing left/right
sound slots. The router now uses this raw input speed for cadence and the
player's own collision-constrained displacement solely to suppress sounds
against walls or while only a platform moves the player. This retains the
existing quiet behavior during flight, no-clip, cutscenes and teleports.
Saves preserve the bounded fractional footstep phase and next foot, so a
reload cannot reset the cadence or replay an already consumed footfall.

The native forward walk clip uses rate 1 (`0x432d1f`), and the longer
backwards clip uses 2.2 (`0x432c91`), which corrects its previously slow
playback. Both run independently of the Wobble clock. Thus inventing bone contact events or forcibly locking
the skeleton to the audio clock would not reproduce the original.

Focused verification: `tests/presentation-native.test.mjs`, plus only the
footfall and footstep-router cases in `tests/native-audio-completion.test.mjs`.
No packages or full-suite runs are required for this source change.

`tests/presentation-renderer.test.mjs` checks actual WorldEffects batches:
separate corona/beacon depth flags, radius fading behind geometry, bounded
world-only visibility queries, scrolling energy UV buffers, read-only zero-time
refreshes, and the Gameplay footstep save roundtrip.

# Effect continuity across saved games

Implemented 15 October 2026. This improves the port's save format; it does not
claim the original executable saved these transient effects in the same format.
Authored emission, physics, artwork, performance limits and intentionally lit
moving hand torches retain their existing behavior.

## Smoke and flame emitters

New gameplay snapshots contain `spoutEffects`, with a versioned record for each
initialized emitter. The 15 fixed particle slots retain their position,
velocity, birth location, immutable launch/offset/lifetime/delay template,
fade stage and deadline, size, opacity and serial. The emitter retains its RNG
state, simulation ticks, fractional tick remainder, enable counter, delayed
birth/lifetime timers, colour-cycle state and finished flag.

The record covers authored emitters and the port's synthetic hand-torch flames.
Compact numeric slot rows avoid repeated field names in localStorage. The real
Castle fixture's emitter snapshot occupies approximately 352 KB, including all
initialized pools, rather than an unbounded history of emission events.

`NativeSpoutEffect.restore` and `restoreSpoutSnapshots` validate counts, numeric
values, timers, row shapes and duplicate IDs before copying state. Restore takes
constant work per fixed pool; it never simulates the level's elapsed time.
Live tails of disabled/finished emitters also survive the save. Zero-time draws
cannot reset saved activation ages while the loading camera and hand-torch
visibility are still being established.

Older saves without pools retain the previous `effectAge` fallback: they
regenerate clouds while preserving finite-emitter expiration. They cannot
recover particle positions that were never recorded. Portal and Fleurifee
particle/ribbon state remain on their existing dedicated save paths.

## Knight armour fragments

Each dead knight can save a `knightDebrisState` containing the active fragment
cohort's age and lifetime, plus every surviving part's position, velocity,
orientation, accumulated rotation, angular velocity, contact count, settlement
and fade state, collision bounds and numeric physics configuration. Randomness
is consumed only when creating the cohort; preserving its resulting state also
preserves all subsequent deterministic motion without a new random draw.

`CastleWorld.createKnightDebris` reconstructs meshes at these actual saved poses.
It does not replay earlier bounces against doors/platforms in their current
positions. Future motion still collides with the restored world's geometry.
Expired parts remain absent, and materials are disposed through the existing
cleanup path. The save validator bounds fragment counts and lifetimes and
accepts only the nine known armour asset names.

Older saves lacking fragment state retain the bounded age-replay fallback.
Generic breakable-object fragments still use bounded reconstruction against
current geometry. Explosion fire/smoke records now survive their shorter damage
timer, and aged prop fragments reconstruct before first rendering rather than
relaunching. See [explosion save details](explosion-damage-native.md). Other
separately implemented effect families retain their existing save behavior.

## Focused verification

`node --test tests/effects-save-continuity.test.mjs` passes six tests covering:

- Exact JSON round trips and matching future particle evolution, including
  fractional ticks, disabled tails and repeat activation.
- All 139 shipped smoke/flame definitions, including finite Tower emitters.
- Rejection of malformed/oversized pools and fragment records.
- Immediate equality of rendered smoke draw arguments without warm-up.
- Actual `CastleWorld` fragment restore/update methods, with zero historical
  collision traces, preserved fade/contact/spin and matching next-step motion.
- Older-save replay and expired-fragment cleanup.

An isolated browser test used the actual application's save/load entry points
and a separate profile, without touching the player's real saves. Forest UFO
smoke and all initialized Castle pools matched exactly after loading; all eight
synthetic Castle hand flames retained their live particles. A defeated Castle
knight retained all nine fragment integrators and matching mesh positions.
Both levels rendered with WebGL error 0 and no recorded page/shader errors.

Retained implementation snapshots, focused test logs, browser fixture and report:

- `temp_work/effects-save-2026-10-15/`
- `temp_work/effects-save-2026-10-15/browser-1792086329746/report.json`

The first browser pass exposed the zero-time hand-flame age reset described
above; it was fixed before the successful pass. Earlier startup attempts also
record Chrome's Unix-domain socket path-length limit. The fixture now uses the
short relative `temp_work/t` temporary directory while retaining all substantive
reports/profile data under the named work directory.

No broad gameplay suite or release/package build was run.

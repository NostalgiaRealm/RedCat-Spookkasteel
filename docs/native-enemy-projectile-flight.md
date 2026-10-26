# Native enemy projectile flight

The local `RcHcGame.dat` executable and original `ProjectileNormal.ini` were
checked alongside the remake's projectile update. This complements the bitmap
clock and trail evidence in `native-projectile-animation.md`,
`enemy-combat-effects-native.md`, and `mushroom-trail-native.md`.

Executable SHA-256:
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.

## Shared movement and class settings

`RcProjectile`'s constructor at `0x44b200` sets gravity to zero (`+0x1f0`),
maximum speed to 1000 (`+0x208`), and acceleration to zero (`+0x220`, write at
`0x44b317`). Enemy subclass initialization supplies `InitialSpeed`, `Gravity`,
size, damage and lifetime. It does **not** set acceleration. Only RedCat's shot,
power-shot and super-shot initialization writes nonzero acceleration. Enemy
forward speeds must therefore not inherit the player's acceleration.

The shared update at `0x44c760` applies gravity at `0x44cb5f–0x44cb7c`:
`verticalVelocity -= dt * Gravity * 32`. The multiplier is float 32 at
`0x64d0bc`. The update obtains position at `0x44cb80`, multiplies the updated
velocity by `dt` at `0x44cba4`, and adds it to position at `0x44cbb6`.
The remake previously omitted
the multiplier, making falling enemy projectiles almost horizontal.

Normal-difficulty values recovered from the original INI and initialization:

| Projectile | Initial speed | Gravity in world units/s² | Lifetime seconds |
| --- | ---: | ---: | ---: |
| Mushroom (forest Brutus) | 250 | 0 | 5 |
| Bone (skeleton / bone Brutus) | 500 | 16 | 4–6 |
| Skull (bone Brutus's later phase) | 400 | 32 | 15 |
| Jester ball | 600 | 32 | 5–8 |
| Magma (Max's turret) | 400 | 32 | 5 |
| Witch magic ball | 80 | 96, reset by homing below | 30 |
| Enemy shot | 400 | 0 | 5 |
| Goo | 300 | 0 | 13–17 |
| Poison | 400 | 160 | 5 |

The mushroom's additional `Speed=100` does not replace its projectile
`InitialSpeed=250`. Its forward flight remains constant; its ribbon follows the
actual updated projectile positions.

New enemy projectiles store converted gravity with `gravityUnits: 'world'`.
Loading an older generated `enemy-projectile-N` record lacking this marker
converts its raw INI gravity exactly once. Player shots and custom world-unit
projectiles retain their existing units. Existing lifetimes are not rerolled.

## Canonical flight ticks and bounded collision work

The 26 October follow-up corrected a remaining display-rate dependency in the
port. Native `0x44cb33` caps the velocity magnitude before `0x44cb5f` applies
gravity; `0x44cba4` then translates using that updated velocity and `0x44ccab`
checks contact. The witch override retargets only after that shared tick.
Previously the port executed this once per display update, producing different
trajectories and homing turns at 30 Hz versus 144 Hz.

Flight now follows that order on a canonical 60 Hz clock. A partial display
update interpolates movement within the same tick, preserving smooth high
refresh motion; gravity/capping is applied once at its start and witch homing
once after its completed collision sweep. Curved segments are individually
swept before the next turn. Gravity-free, non-homing projectiles retain a single
collinear sweep per display update. The separate sprite/ribbon sampling
schedule and intentional distant-artwork sizing remain unchanged.

Fractional phase and deferred elapsed time are saved and validated. Legacy
records start a fresh tick without rerolling lifetime or reapplying gravity
conversion. Frozen enemy ammunition preserves those fields as well.

The normal game already limits each update to 100 ms. An exceptional larger
direct call consumes at most 100 ms (at most seven partial/complete curved
segments) and saves the remaining flight time as debt, bounded by remaining
projectile life. Later updates drain it within the same budget; expiry follows
consumed simulation time. This is an explicit performance safeguard, not native
large-delta parity. No normal update of 100 ms or less creates debt. Native
variable-frame/x87 stepping and moving-player sample timing are not claimed
bit-identical.

## Lifetime sampling

Helper `0x442e30` samples
`minimum + (rand() % 10000) * float(.0001) * (maximum - minimum)`, and stores a
float result. Helper `0x4432e0` multiplies it by 1000 and calls the integer
conversion at `0x60ab20`. Thus duration is sampled across the authored range
(the upper endpoint is excluded when the bounds differ), then truncated to
whole milliseconds. This is used by the bone initializer at
`0x442b6a–0x442b96`, Jester at `0x445b6a–0x445b96`, magic at
`0x446c7a–0x446ca6`, magma at `0x447d0a–0x447d36`, and mushroom at
`0x44903a–0x449066`, among others.

The remake now samples that range and quantization using its existing saved
per-enemy random state. It previously always used the maximum duration.

The 26 October source comparison also corrected the distribution of that
sample. The shipped CRT helper at `0x60a4a0` returns a 15-bit integer, followed
by `%10000` at `0x442e30`. Thus values 0–2767 each have four input integers,
whereas values 2768–9999 each have three. The port had incorrectly flattened
this into a uniform 10,000-step draw. Enemy lifetime and XYZ shot deviation now
use the same recovered modulo distribution. Deviation keeps its negative
endpoint and excludes its positive endpoint; normalization retains the
configured projectile speed. The saved per-enemy generator remains deliberate:
this matches distribution, not the original global random sequence. See the
[26 October gameplay findings](../temp_work/original-source-parity-2026-10-26/gameplay/findings.md).

## Witch homing

The magic-ball override at `0x446690` calls shared flight first (`0x4466a2`).
It then obtains the target body center through `0x49bc80`, subtracts the
projectile's updated position, normalizes at `0x446701–0x446709`, multiplies by
the authored `InitialSpeed` at `0x44670a–0x44671b`, and replaces velocity at
`0x446720–0x446737`. It does not emit a particle trail there.

The remake follows that order: move and collide using the current velocity,
then set the surviving projectile's next heading toward RedCat's body center
(28 units above his feet) at the configured speed. This replaces the former
ballistic-only magic ball without changing its collision radius.

## Focused verification

`node --test tests/enemy-projectiles.test.mjs` checks authored speed/gravity for
all enemy classes, bone and mushroom flight, sampled lifetime bounds and
millisecond quantization, deterministic save/load continuation, witch homing
order, one-time migration of old gravity units, and freeze behavior.

The follow-up also runs `tests/enemy-projectile-flight-native.test.mjs`:
**16/16** combined focused flight tests pass. Coverage includes 10–240 Hz
ballistic/homing equivalence against the canonical native ordering, smooth
partial movement, per-segment collision stopping, bounded exceptional catch-up,
phase/debt save continuation, freeze, and the single-sweep straight-flight path.
Evidence: `temp_work/native-behavior-followup-2026-10-26/player/enemy-flight-tests.tap`.

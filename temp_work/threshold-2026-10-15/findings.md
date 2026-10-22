# Destructible threshold implementation — 15 October 2026

## Native evidence reused

Installed Dutch RcHcGame.dat, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Prior Hopper REA evidence
`ev_fb006b8892a940ee73b5c599341f93e3eb025474f5156658d45f8d225e5521cd`
for `0x49da40`, retained in
`../explosion-damage-2026-10-14/anyactorhurt_impl.json` and excerpted into
`native-receiver-extract.txt` here. No REA session switch/open/close or new
query was needed.

Observation: destroyable flag +0x200 gates received damage, DamageTaken +0x1fc
accumulates, and x87 comparison against DamageMax +0x1f8 excludes equality
from the destruction branch. Explicit script destruction uses a separate
entry and is not made conditional on this threshold.

## Implemented

- Shared actor-only `damageDestructible` accumulator for player projectiles
  and explosion ticks; leaves a positive health/liveness limit until actual
  destruction, including when accumulated damage exactly equals the limit.
- Explicitly indestructible props ignore damage without preventing their
  projectile OnHitCommand from running.
- Optional `propDamage` snapshot member with validation and old-save
  migration: previous remaining health is a new limit with zero accumulation.
  In-place restoration clears accumulated damage absent from an older save.
- No enemy/player HP rule, script destroy/kill, explosion damage dose/range,
  or sound scheduling changes.

## Source-path coverage

`Gameplay.playerProjectileHit` and `advanceExplosionDamage` were the only
damage-based decrement sites for AdamAnyActor props in `src/`. Other health
subtractions belong to player/enemy receivers. Explicit `Gameplay.destroy`
remains idempotent and unchanged. Existing visibility, collider, targeting,
torch, attachment and update gates rely on positive health; preserving that
liveness limit avoids adding per-system equality exceptions.

`imported-thresholds.json` inventories all 123 destroyable actor definitions:
118 fixed 100 limits, four fixed 1 limits, one fixed 1000 limit. No campaign
destroyable has a zero or randomly ranged limit.

## Verification and limits

`node --test tests/destructible-threshold.test.mjs tests/explosion-damage.test.mjs tests/environment-interactions.test.mjs`
passed 27/27, output in `focused-tests.log`. Eight new tests cover strict
equality, real collision/visibility/target eligibility, mixed hit sources,
saved equality, old-save migration, same-world restores, explicit destruction,
non-destroyable OnHit and unchanged enemy equality. The old first-hit crate
test now verifies survival after 1 damage and destruction after the second hit.

Native float32 rounding is not emulated; code uses JavaScript numeric values.
This is static evidence plus focused port tests, not a native runtime
playthrough. No build or broad historical test rerun.

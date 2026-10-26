# Gameplay comparison: 26 October 2026

Scope: current enemy controllers, projectile creation, retained REA evidence,
fresh read-only disassembly of the installed original, and the newly exported
Ghidra pseudocode. Original `RcHcGame.dat` SHA-256:
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
This is a static code comparison with focused port tests, not a new native
runtime campaign or proof of equivalence for every executable branch.

## G-1: projectile random distribution corrected

**Confirmed difference.** `src/enemy-projectiles.js` sampled lifetime with
`floor(random*10000)`, and `Gameplay.enemyProjectile` perturbed each normalized
aim component by a continuous uniform sample. Native uses its 15-bit CRT
`rand()` followed by `%10000` in both cases. This causes a small directional
and lifetime bias in the original distribution that the port was missing.

- CRT at `0x60a4a0`: multiply/add state, shift 16, mask `0x7fff`.
- Lifetime helper at `0x442e30`: signed divide by 10,000 and use remainder;
  no negative native input is possible because of the mask. `0x4432e0`
  converts its float seconds to truncated milliseconds.
- Moving-shooter deviation: `0x42a385`, `0x42a3be`, `0x42a3f7`.
- Standing-shooter deviation: `0x42b788`, `0x42b7c1`, `0x42b7fa`.
- Turret deviation: `0x41c6e0`, `0x41c719`, `0x41c752`.
- Float scale at `0x64a2c4` is `0.00009999999747378752`.

`enemyProjectileSample` maps each existing saved per-enemy draw to a 15-bit
integer before the modulo. Outcomes 0–2767 occur four times among the 32,768
possible inputs; remaining outcomes occur three times. Lifetime retains
millisecond truncation and an exclusive authored upper endpoint. Deviation
retains its negative endpoint, excludes its positive endpoint, and is applied
independently before direction normalization, so projectile speed is unchanged.
Already airborne projectiles keep their saved lifetime/velocity. The deliberate
local RNG, save determinism, authored damage, collision and visual readability
remain. This does not reproduce native global RNG sequencing or x87 rounding
at every instruction.

Evidence: [rand/lifetime assembly](rand-lifetime.asm),
[moving release](moving-shooter-release.asm), [turret release](turret-shooter-release.asm),
and the prior [standing release](../../enemy-pursuit-attacks-2026-10-14/standing-shooter-release.asm).

## G-2: plant/gargoyle post-salvo controller corrected

**Confirmed difference.** Plants and gargoyles still used a combined
`attackTimer = shoot duration + WaitTimeAfterSalvo`. Their native attack parent
creates a separate idle/wait child after the completed salvo and target-memory
check. It arms its deadline on the first subsequent check, rather than during
the final shot. Native also checks memory after the wait, rather than requiring
RedCat to re-enter attack range for every salvo.

- Parent `0x40a200` updates its child and handles its completion.
- Completed shooting: target-memory call at `0x40a330`, then virtual wait
  selection at `0x40a359`. Wait constructor `0x40a440` forwards the authored
  after-salvo duration to `0x403ed0`.
- Wait constructor stores deadline -1 at `0x403fc5`.
- First check `0x404039–0x404046` writes now + duration and returns incomplete;
  later checks only finish for now > deadline (`0x40404f–0x404051`). Even a
  zero-duration wait requires a later millisecond.
- Completed wait: memory check `0x40a385`, then direct shoot selection
  `0x40a3ae`, without a fresh range test.
- Plant override `0x406ce0` delegates construction to `0x403ed0`, and its update
  `0x406d20` calls `0x404020`; its nonlooping idle replay remains supported by
  the existing animation system.

New `src/enemy-standing-shooter-native.js` owns this small state. Shoot clips
and committed releases remain in the existing gameplay update. A wait is not
canceled merely because perception expires; at completion, missing memory
ends the attack parent and permits return to stone. Selected hurt cancels the
child; sound-only hits retain it. Fresh and in-place save restoration retains
armed/unarmed waits, pending shots and remaining salvo. Older saves retain
their already remaining cooldown or active shot instead of replaying a salvo.
Script freezes shift armed deadlines; unarmed ones stay unarmed.

Evidence: [standing parent and wait assembly](standing-wait.asm), including
the plant override. The complete export lives in the sibling
`RC_ORIGINAL_DECOMPILED/decompiled/RcHcGame.dat/functions/` by address.

## Areas reviewed without a new demonstrated discrepancy

- Moving shooter first-check waits, Bone Brutus charge and Mushroom Brutus
  common shooter delegation match the recovered 15 October evidence.
- Selected common hits, repeated-hit rejection, dormant skeleton replacement,
  stone immunity, Jester hurt-to-teleport, turret hurt-to-shoot and Witch
  hurt-to-closer already have their recovered paths. They were not rewritten.
- Original projectile family mapping, gravity-times-32 and Witch's movement-
  then-homing order remain present. The projectile regression checks include
  these alongside the changed sampling.
- Target aim height was examined rather than guessed: `0x42b550` stores half
  the target hull height at `+0x22c` (`0x42b5d9`, constant `0x64ab98 = 0.5`).
  The current 56-unit player hull therefore justifies its 28-unit aim offset.
  See [the setter](standing-aim-height.asm) and exported
  `0042b550_FUN_0042b550.c`. No offset change was made.
- Existing 250ms actor blends, sampled rates, skeleton backward retreat,
  sprite clocks, trails, turret muzzle bones and death effects were reviewed
  against their focused documentation and associated implementation. This
  review does not newly validate every clip against a native running battle.

## Verification and preserved boundaries

- `node --test tests/enemy-projectiles.test.mjs`: **10 passed**;
  [log](projectile-tests.log). Enumerates every 15-bit input to compare the
  modulo distribution; checks signed deviation bounds, normalization, lifetime
  endpoints/quantization, save continuation and all original projectile classes.
- `node --test tests/enemy-standing-shooter-native.test.mjs tests/enemy-committed-attacks.test.mjs`:
  **13 passed**; [log](standing-shooter-tests.log). Covers exact/zero deadlines,
  target memory, complete salvos, stone return, selected hit cancellation,
  old/new saves and script freezes.

No full historical test suite, new package build or native game modification.
The new work is constant-time per active actor; it introduces no visibility
traces, navigation search, global particle work, additional rendered objects or
asset residency changes. The intentional bounded navigation, chunk loading,
modern controls, fractional HP, no-clip protection, dialogue protection,
audio scheduling/ranges and distant-projectile readability are preserved.
Native engine dispatcher ordering, global RNG interleaving and floating-point
collision tolerances still preclude a bit-identical parity claim.

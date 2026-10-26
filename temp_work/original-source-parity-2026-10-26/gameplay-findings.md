# Gameplay comparison summary

Full evidence, native addresses/hash, code changes, preserved adaptations and
test commands are in [gameplay/findings.md](gameplay/findings.md).

| Area | Result of this scoped pass |
| --- | --- |
| Enemy projectile lifetime and XYZ spread | Corrected uniform sampling to the native 15-bit modulo distribution; saved per-enemy RNG retained. 10 focused projectile checks passed. |
| Plant/gargoyle attack parent and after-salvo wait | Corrected first-check arming, strict expiry and target-memory continuation; save/freeze/hit handling retained. 13 affected controller/committed-attack checks passed. |
| Target aim offset | Verified half of target hull height; current player offset needs no change. |
| Moving shooter, skeleton, common hit, selected boss paths | Compared recovered follow-up evidence and current source; no additional demonstrated discrepancy in the reviewed branches. |
| Projectile families, gravity, Witch homing | Implemented behavior retained; covered by the affected projectile checks. |
| Actor transitions, death effects, attachment bones and trail clocks | Reviewed existing recovery records and connected implementation; no new runtime/native-battle equivalence claim. |
| Whole-engine ordering, all native branches and campaign encounters | Not established by this scoped pass. Global RNG ordering and portable numerical tolerances remain documented boundaries. |

Self-review: no deliberate audio scheduling, range, camera, fractional-health,
anti-stuck, streaming, control or rendering policy was reverted. New standing
state adds constant-time bookkeeping and does not add navigation or collision
queries beyond the existing stationary enemy update. No full test suite,
distribution build or original-install modification was performed.

## Independent review of root changes

Compared the added Davi unary cases with the native label jump table at
`0x5fbab0` and execution jump table at `0x5fc480` in the same `e30781fc…` binary.
The mappings are confirmed: 12 SINH, 13 TANH, 14 COSH, 15 ASIN, 16 ACOS,
21 STRLEN, 22 STRLWR, 23 STRUPR, 24 ASCII, 25 CHR. ASCII uses an unsigned byte,
and CHR masks to eight bits. The default C-locale branches of `0x61f728` and
`0x61f68a` change only ASCII A–Z/a–z and stop at NUL.

One review correction was reported to the root agent: STRLEN reads the stored
string length, unlike the NUL-terminated casing functions. `0x5fc925` reads the
`+8` length after `0x45da10`, which copies through `0x40cc00` using that stored
length. Therefore an embedded NUL must count towards STRLEN rather than truncate
the result. No additional tests were run during this independent review.

The player fall-damage call is also confirmed as effective, rather than merely
a dead generic-engine path. Landing `0x4dc65f–0x4dc66e` passes zero hit point,
self as source, and the calculated positive damage through `0x503fc0` to the
actor damage virtual method. The RedCat receiver `0x433820` does **not** reject
self as source. After its optional directional response, `0x433b52` checks
dead/invulnerable state and `0x433bc7–0x433be0` invokes the health component with
negative damage; that call carries no source object. Original dead/invulnerability
checks can suppress damage, but source identity cannot. Implementation was left
to the root agent. Supporting disassembly is retained in
[gameplay/player-damage-receiver.asm](gameplay/player-damage-receiver.asm),
[gameplay/landing-damage-dispatch.asm](gameplay/landing-damage-dispatch.asm),
[gameplay/actor-damage-dispatch.asm](gameplay/actor-damage-dispatch.asm), and
[gameplay/davi-string-unary.asm](gameplay/davi-string-unary.asm).

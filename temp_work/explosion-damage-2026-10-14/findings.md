# Native crate explosion damage — static REA findings

Target: `RcHcGame.dat`, SHA-256 `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Provider: Hopper through REA. This investigation is static; it did not observe the original game running.
Complete evidence: `rea-evidence-bundle.json` (50 complete records). Per-query JSON files retain normalized results, identities, and limitations. The assembly resolves several misleading decompiler argument/type guesses.

## Behavior established by assembly

- Destructible actor factory `0x4a7940` constructs each explosion through `0x58d500`, with init `0x58d710` and vtable `0x64fe24`. This is distinct from player-projectile impact init `0x463550`.
- Actor settings damage percentage lives at settings `+0xb0`, size percentage at `+0xb4`. Factory `0x4a7ffb..0x4a8013` forwards size unchanged and multiplies damage percentage by 0.46875.
- Init `0x58d731..0x58d765` computes radius = size percentage * float32(0.01) * 700 and rate = damage percentage * 0.46875 * float32(0.01) * 400. Radius is truncated to an integer before being passed to the hurt cell. Ideal rate simplifies to 1.875 * DamagePercentage health/second.
- The hurt cell is constructed unconditionally at `0x58d847`, including SmokeOnly explosions. It starts at offset 0 and lasts 400 ms (`0x58d8da..0x58d8e2`).
- Hurt cell run `0x4af180` continuously applies positive damage = (1 - distance/radius) * frame elapsed milliseconds * rate * 0.001, gated by distance and line of sight. It does not deliver the entire nominal damage at birth.
- At a stationary visible center, brcrate 25/25 implies radius 175, rate 46.875 health/s, and ideal 400 ms dose 18.75. wkcrate .5/.5 implies radius 3 after truncation and rate .9375/s.
- Each factory-created blast has independent position/timing/cell. Existing recovered factory random placement and staggered births apply equally to damage.
- The player test point is the movement/view origin at eye height: native controller `+0x210` comes from player movement origin `+0x198`. Native renderer subtracts eye height through collider minY to place the model root. For the port's feet-based player.position, test Y is position.y + EyeHeight * 32 (default 54.08).
- Player distance is full 3D Euclidean distance to that point; player LOS uses the same point.
- Actor distance is shortest 3D distance to the actor AABB translated by native GetPosition, not distance to its center.
- Actor LOS first tests its AABB center. If blocked, it tests eight peculiar native fallback positions: center + local min/max corner. These are not the ordinary world AABB corners. Actor distance still uses the ordinary AABB.
- LOS helper `0x594df0` does a PVS/leaf check then a point trace. Trace contents 0x43, collision flags 6, userFlags 0. Static and moving world/brush models block it. Actor trace candidates are rejected by the zero user flag mask, so other actors do not block LOS.
- Actor broadphase `0x554b60` queries a cube ±radius, collision flags 4, userFlags -1. The callback checks engine actor-active/collision flag 8 and deduplicates results. This is not a CanBeShot-only query.
- Damage dispatch `0x503fc0` calls actor vtable +0x1c ReceiveDamage(amount, source, null); there is no projectile weapon enum or OnHitCommand invocation.
- For actor targets, damage source is the current sublevel player actor, crediting RedCat. Player target receives the hurt cell's explosion owner. Ordinary crate explosion owner is null; the optional owner exclusion/filter is therefore inactive.
- RcAnyActor receive-damage wrapper `0x56fce0` delegates to `0x49da40`: it checks Destroyable, accumulates float damage, and destroys only when accumulated damage is strictly greater than its maximum. Destruction `0x49d9d0` invokes the normal explosion virtual path, enabling chains. No brush damage is dispatched by this hurt cell.
- Player receive damage `0x433820` subtracts health at `0x433bc7..0x433be0` before its later reaction feedback cooldown. Continuous damage should not be suppressed by a generic hit cooldown.
- The hurt cell contains no special explosion impulse. Ordinary receiver reactions may still apply.

## Portability and coverage boundaries

- The native effect clock anchors at first activation and runs through its inclusive end; frame-sized end overshoot can change actual dose by a frame. Integrating only the exact overlap with 400 ms is an explicit port scheduling choice.
- Preserve native per-type receive-damage behavior: pickups are not generic destructible props. Only actor receivers that implement damage should change health/destruction.
- Existing port prop health uses a <= 0 destruction convention. Native AnyActor is strict accumulated > maximum; the implementation should either match it or document retaining that preexisting convention.
- PVS is an optimization/visibility layer in addition to geometric LOS. A geometry-only port LOS may differ at partition boundaries.
- No runtime verification was performed. These claims describe static original code and constant recovery.

## Primary evidence index

| Subject | File | Evidence ID |
| --- | --- | --- |
| Explosion init, scales, SmokeOnly, cell creation | explosion_fullasm.json | ev_3c2388d1c4532b2a6e07abdec476ec015fbb2e4e3941d2a1a4f3ef941c549991 |
| Full damage loop, player/actor distance and LOS, dispatch | hurt_fullasm.json | ev_4d19588c9e29c9d10ca91a8a266ea872118703d1ad6a0ee1654eeeb7055103c6 |
| Factory settings and object creation | factory-pseudo.json | ev_f8a3087e620c1b0befd331c902de00eb873e2e5ada16c7e3de92dc40c61e07f7 |
| AnyActor damage receiver | anyactorhurt_impl.json | ev_fb006b8892a940ee73b5c599341f93e3eb025474f5156658d45f8d225e5521cd |
| AnyActor destruction and chain path | actor_destroy.json | ev_6795a746830eb73b6ae10c2de6dcea5958d13da8a4e1564ab8b8721344ddee7b |
| Eye-height collision bounds | player_constructor_asm.json | ev_b1776db011c553f70431328275ada4deef23da1a73cbc4e01506f8fb4898167e |
| Controller sample origin propagation | actual_point_asm.json | ev_4096c5fb999e22213afb0f8783054b5f30fc165a6352403a349b86fa6821919a |
| Player root placement versus sample origin | playerorigin.json | ev_e7ddd2f6bde7b2af1c7473a56c667f6565fe0591d8a522e7ec6a5d57f8961719 |
| Player damage and feedback cooldown | playerhurt.json | ev_a17dafee11b4f1e75190a43a7c63b5973f73213240adf1a96db9e82b7894ef77 |
| Hurt clock lifetime | hurt_clock_asm.json | ev_4cb57b7cb596edada07e6292ae185994b35e2b4cff2626506015072ff3574363 |
| LOS entry | los.json | ev_cb81925701823d1a918d895013ffc82cb90716e3ded19a40a9d3dd680301c055 |
| LOS engine flags | enginelos.json | ev_d6ccf4b36f061928681b9289d1fcd25019c57783336428eb1eb5b6417289d004 |
| Actor LOS mask skips | rayactors.json | ev_783c232caa9c8ed59ea4e88d18db675b31c0fcfe700c280d98b52042fe021846 |
| Candidate broadphase | candidate.json | ev_08df562f62f288728eab957d6da06c536a36bfbfa9e1ed8cf76f35c8cbd52fcd |
| Actor active check and deduplication | selection_cb.json | ev_1bb37c61a42aed2ee97047f4f892ffa40b41e8aea043f57575c0db17ebe38153 |


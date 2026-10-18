# Native destructible explosion damage

Read-only reference: installed Dutch `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
REA used Hopper to inspect the original executable. This is static assembly and
constant recovery, not an observed original-game playthrough. The retained
[findings](../temp_work/explosion-damage-2026-10-14/findings.md) and
[complete evidence bundle](../temp_work/explosion-damage-2026-10-14/rea-evidence-bundle.json)
include query identities and tool limitations.

## Original path and damage calculation

Destructible actor factory `0x4a7940` creates the base explosion through
`0x58d500`, initializer `0x58d710`, vtable `0x64fe24`. This differs from the
player-shot visual subclass initialized by `0x463550`; the
[projectile contact findings](projectile-impacts-native.md#contact-scope) do not
imply that crate explosions are harmless.

The factory scales `DamagePercentage` by .46875 before the base initializer
creates its hurt cell at `0x58d847`. The cell exists even for `SmokeOnly` effects
and runs continuously with a nominal 400 ms lifetime. The first eligible frame
arms the clock and its endpoint is inclusive, as detailed below. Its ideal calculation
in world units and health points is:

```text
radius = trunc(SizePercentage * .01 * 700)
rate = DamagePercentage * 1.875                 // health per second
damage = max(0, 1 - distance / radius) * rate * elapsedSeconds
```

The hurt loop at `0x4af180` applies each frame's dose, subject to distance and
line of sight. A normal `brcrate` with size/damage 25/25 has radius 175 and rate
46.875 HP/s: a stationary, unobstructed target at its centre receives an ideal
18.75 HP over 400 ms. `wkcrate` .5/.5 has integer radius 3 and rate .9375 HP/s.
Each factory-created blast has its own recovered position and delayed birth,
shared with the [native explosion placement and smoke](debris-native-recovery.md#explosion-placement-and-smoke).

RedCat's distance and visibility point is the native movement/view origin.
The port stores feet, so this becomes `player.position + [0, EyeHeight*32, 0]`,
54.08 units above the feet with the original settings. Actor distance is the
shortest three-dimensional distance to its translated bounding box, not its
origin or box centre. Actor visibility first tests the box centre; if blocked,
it accepts any of eight native fallback points formed by adding each *local*
box corner to that centre. These unusual points are distinct from the world
box corners.

The LOS helper `0x594df0` checks the native PVS and traces static/moving world
brushes. Its actor user-flag mask is zero, so another actor does not shield a
target. The native broadphase selects active actors; dispatch `0x503fc0` calls
their damage receiver without a projectile weapon enum or `OnHitCommand`.
Destroyable props use their ordinary destruction path, which can start another
explosion. Pickups and brush models are not generic prop damage receivers.
There is no separate explosion impulse in the hurt cell.

## Port behavior and limits

`src/explosion-damage.js` creates damage cells once when the source is destroyed.
`src/world.js` provides current posed actor bounds, active-state checks and
brush-only LOS. A conservative radius check rejects distant targets before
computing their full posed bounds. Enemy damage follows existing hurt/death and
score handling; prop damage follows ordinary destruction and its authored
commands. The Graveyard `brcrate_hek` therefore still destroys `hekacteur`.

Continuous player damage bypasses the ordinary hit cooldown while retaining
the existing reaction-feedback delay, cutscene protection and no-clip immunity.
Enemies can receive explosion damage while their AI is frozen. Respawning
clears old cells; a synchronous respawn/load during a damage callback cannot
continue processing the previous generation of cells.

Saves retain each active cell's source, birth, first-activation time, position,
radius and rate. Reloading resumes only its remaining lifetime. Active source explosion records
also retain their original birth so the flash and smoke resume at their current
age without repeating the destruction command or sound. Their six-second visual
record lifetime is independent of the shorter damage lifetime; saving after
damage expires must not discard smoke that is still visible. Finished damage cells
are not reconstructed from old destroyed props. Older saves without these
optional fields remain supported. Prop fragments replay their deterministic
trajectory to the saved age in bounded 50 ms steps before their first render,
and already-expired fragments are omitted. This prevents a loaded smoke tail
from throwing the crate apart again. Unlike the direct saved knight-fragment
state, prop collision history is reconstructed against current geometry; exact
prop-fragment continuation across a fresh world load is not claimed.

The port now follows the recovered first-activation and inclusive-frame ordering
instead of clipping doses to an exact 400 ms birth interval. Native float32
rounding, global RNG order and the PVS precheck are still not
reproduced exactly: the port uses its existing deterministic blast placement
and geometric BSP LOS. Reaching zero is still the ordinary enemy/player defeat
condition; destructible props now use
the original **strictly greater** accumulated-damage comparison described below.

## First-frame lifetime and complete frame doses (15 October 2026)

The base initializer calls `0x4ad9a0` with interval zero and lifetime 400 ms.
The cell's `CAdamAnimationCell::OnFrameCall` at `0x4ad9c0` first waits for its
start time, then sets its deadline to **current frame time + lifetime** at
`0x4adb04`. At `0x4adb14`, `jle` accepts the exact deadline; only a later frame
is rejected. The hurt receiver multiplies by the full supplied frame delta
at `0x4af524` (RedCat) and `0x4afd9d` (actors). It does not clip that delta to
the nominal interval or carry an unused remainder into an expired frame.

`src/explosion-damage.js` now implements this ordering. A blast first processed
at 100 ms is eligible at 100, 200, 300, 400 and 500 ms with 100 ms updates, and
retires at 600 ms: five full doses. With a 70 ms update, the eligible times are
70 through 420 ms; 490 ms is already beyond the 470 ms deadline and receives
no partial dose. These are source-driven examples, not captured native runs.
Damage is consequently slightly frame dependent, as in the original.

New cells save `activatedAt: null` while pending and the exact activation time
after their first check. Old snapshots lacking that field retain their old
birth-based expiry instead of acquiring a fresh lifetime. Cutscenes and
death/recovery/completion still advance these clocks without damaging their
participants, so delayed activation cannot produce a surprise blast afterwards.
Chain reactions keep the existing next-frame wave boundary; actor broadphase,
the frame-delta cap, no-clip protection, fractional health and strict prop
thresholds are unchanged. The shared native engine's integer-millisecond clock,
x87 intermediate rounding and global random draw order are not replicated.

The fresh setter/registration evidence and focused output are retained in
[`temp_work/explosion-frame-2026-10-15/`](../temp_work/explosion-frame-2026-10-15/).
The existing full clock and damage assembly listed under Primary evidence
supplies the critical comparison and full-delta instructions. The affected
15-test explosion suite passed, covering equal/end-overrun boundaries, delayed
birth, multiple tick sizes, old/new save clocks, chain reactions, LOS,
continuous damage and cutscene/death protection:

```sh
node --test tests/explosion-damage.test.mjs
```

No release build or native-runtime replay was performed for this change.

A later focused save review found and removed the dependency between saved
visual records and damage cells. Three affected checks then passed: loading a
mid-blast save, preserving post-damage smoke without renewed damage/audio, and
restoring prop-fragment age without relaunching expired fragments. The latter
also verifies that fresh fragment launches retain their existing integration.
Output: [`visual-tail-tests.log`](../temp_work/explosion-frame-2026-10-15/visual-tail-tests.log).

## Strict destructible thresholds (15 October 2026)

The retained `RcAnyActor::ReceiveDamage` implementation at `0x49da40` checks
the destroyable flag at `+0x200`, adds the dose to `DamageTaken` at `+0x1fc`,
and destroys only when it exceeds `DamageMax` at `+0x1f8`. The x87 comparison
tests the equality/less-than status bits together; exact equality takes the
ordinary receives-damage branch. This is static original-code evidence, not a
new observation of the running original game.

Both projectile hits and explosion ticks now use `src/destructible-damage.js`.
For props, `health` retains the positive damage limit while `propDamage`
accumulates doses. Thus a crate with limit 1 survives its first 1-point hit,
remains visible, collidable and targetable, and breaks on the next positive
hit. Fractional explosion ticks and shots share the same accumulator. Only
actual destruction writes health zero, disables the actor, and invokes its
normal effects/commands. This avoids a zero-health live object being silently
removed by the renderer or ignored by subsequent projectiles.

Props explicitly marked `destroyable: false` ignore damage; their projectile
`OnHitCommand` still runs. Explicit script `destroy`/`kill` commands continue
to bypass damage thresholds. Enemy and RedCat health keep their existing
subtractive rules and are not changed by the prop helper.

New snapshots retain the prop accumulator, including exact equality. Older
saves contain only remaining prop health: that remainder becomes the new
limit with zero accumulated damage. This preserves the old save's remaining
damage budget without resurrecting previously destroyed props. Restoring an
older snapshot into an existing world also clears any newer accumulator.
Actor initialization continues to respect saved health rather than resetting
the limit from INI settings. All 123 imported destroyable actor definitions
have positive fixed thresholds: 118 use 100, four use 1, and one uses 1000.

The retained receiver excerpt, imported threshold inventory and focused
verification are in [`temp_work/threshold-2026-10-15/`](../temp_work/threshold-2026-10-15/).
Native float32 accumulation remains subject to the numerical limitation above;
no epsilon adjustment or invented damage is used to force an equality hit to
destroy a prop.

Focused threshold validation passed **27 tests** on 15 October: eight new
threshold/save tests, 13 existing explosion tests and six environment tests
(including the corrected first-hit crate expectation). Command and output:

```sh
node --test tests/destructible-threshold.test.mjs tests/explosion-damage.test.mjs tests/environment-interactions.test.mjs
```

[`focused-tests.log`](../temp_work/threshold-2026-10-15/focused-tests.log) covers
equality survival through rendering/targeting/collision, later projectile and
blast damage, mixed damage sources, saved equality, old-save migration and
same-world restoration, indestructible OnHit commands, explicit destruction,
and unchanged enemy defeat at equality. No build or original-runtime
playthrough was performed for this threshold change.

## Primary evidence

All files below are retained under
`temp_work/explosion-damage-2026-10-14/`.

| Subject | File | REA evidence ID |
| --- | --- | --- |
| Base initializer, scales, SmokeOnly and hurt-cell creation | `explosion_fullasm.json` | `ev_3c2388d1c4532b2a6e07abdec476ec015fbb2e4e3941d2a1a4f3ef941c549991` |
| Continuous damage, target distance/visibility and dispatch | `hurt_fullasm.json` | `ev_4d19588c9e29c9d10ca91a8a266ea872118703d1ad6a0ee1654eeeb7055103c6` |
| Factory settings and base explosion creation | `factory-pseudo.json` | `ev_f8a3087e620c1b0befd331c902de00eb873e2e5ada16c7e3de92dc40c61e07f7` |
| Prop damage accumulation and strict threshold | `anyactorhurt_impl.json` | `ev_fb006b8892a940ee73b5c599341f93e3eb025474f5156658d45f8d225e5521cd` |
| Player eye-height bounds | `player_constructor_asm.json` | `ev_b1776db011c553f70431328275ada4deef23da1a73cbc4e01506f8fb4898167e` |
| Player damage before feedback cooldown | `playerhurt.json` | `ev_a17dafee11b4f1e75190a43a7c63b5973f73213240adf1a96db9e82b7894ef77` |
| Hurt-cell lifetime | `hurt_clock_asm.json` | `ev_4cb57b7cb596edada07e6292ae185994b35e2b4cff2626506015072ff3574363` |
| LOS trace flags | `enginelos.json` | `ev_d6ccf4b36f061928681b9289d1fcd25019c57783336428eb1eb5b6417289d004` |
| Actor LOS mask rejection | `rayactors.json` | `ev_783c232caa9c8ed59ea4e88d18db675b31c0fcfe700c280d98b52042fe021846` |

## Focused validation

The affected test command passed **43 tests**, including 13 new explosion-damage
tests:

```sh
node --test tests/explosion-damage.test.mjs tests/explosion-native.test.mjs tests/destruction-audio.test.mjs tests/destructible-bounds.test.mjs tests/gameplay.test.mjs tests/environment-interactions.test.mjs
```

Output is retained in
[`focused-tests.log`](../temp_work/explosion-damage-2026-10-14/focused-tests.log).
The tests cover continuous damage, falloff, player eye height, actor-box distance
and LOS fallback, chain destruction, receiver filtering, no-clip, save/restore,
delayed births and a synchronous respawn during damage.

The retained source-browser runner
[`scenes.mjs`](../temp_work/explosion-damage-2026-10-14/scenes.mjs) uses an isolated
Chromium profile and the authored Graveyard crate `AdamAnyActor72`. It disables
unrelated interactions, freezes AI and repositions a skeleton and RedCat to
exercise real `world.update`, world LOS and rendered actor bounds. Over 400 ms,
RedCat falls from 20 to 13.489635349 HP and the nearby skeleton from 100 to
72.794822240 HP; the smoke-only gate explosion contributes additional enemy
damage. A distant enemy, distant RedCat and an occluded RedCat remain unharmed.
No-clip protects RedCat while the enemy still takes damage. Nearby authored
destroyable torches receive damage; non-damage-receiver objects stay unchanged.

Both in-place snapshot restoration and the actual application save/load path
resume a half-finished blast without restarting its damage lifetime. Fresh
loading restores the original-age flash and smoke. Gate visibility/collision
removal remains intact, and hiding only the explosion sprite changes 1,196
rendered pixels. There are no script, browser-console or missing-resource errors.
The passing [report](../temp_work/explosion-damage-2026-10-14/scenes-1791930166308/report.json)
and [screenshot](../temp_work/explosion-damage-2026-10-14/scenes-1791930166308/crate-explosion.png)
are retained. In this isolated fixture, 16 active `world.update` ticks had a
8.80 ms median and 22.9 ms maximum; 12 later ticks had a 4.90 ms median and 6.4 ms
maximum. These are whole-update samples, not a general performance benchmark.

No package build or broad historical regression suite was run for this change.

# Enemy pursuit and hit interruptions

Native follow-up, 14 October 2026. This closes the ordinary pursuit endpoint
and hit-response gaps in the earlier movement and animation audits. Evidence
comes from static REA/Hopper inspection of the original `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
It does not represent a new recorded original-game playthrough.

## Pursuit on authored waypoints

Ordinary moving shooters use local waypoint choices, not a search for arbitrary
nearest start and goal nodes. The recovered call chain is `0x406f50 ->
0x407280 -> 0x4072f0 -> 0x5967f0 -> 0x597480 -> 0x5997e0`. It examines at
most eight adjacent slots and chooses uniformly among valid nodes strictly
closer in 3D to the **current target actor position**. The same reservation,
unlink and MinPlayerDistance rules as patrol apply. The minimum-distance gate
uses the current player position; it allows equality.

The cursor keeps an unfinished edge when its movement mode changes. At a node,
it selects and reserves the next edge before checking completion. Every frame,
`0x596b00` checks completion before physically advancing the cursor. Closer
completes at distance **< AttackRange**, so it can stop midway through an edge
and preserve that destination for later. An already-in-range shooter can
reserve an edge without taking an extra physical step.

`EnemyNavigation.approachTarget` implements that adjacent-node selection.
`retreatTarget` implements skeleton MoveFurther (`0x597570 -> 0x599a60`):
choose the **farthest valid** adjacent node strictly farther than the current
node, with authored-order ties and no random selection. Its physical movement
stops at distance **> AttackRange**, while the skeleton's retreat child follows
the separate animation contract below. Both methods preserve unfinished cursor
edges and share the existing reservation index.

Ordinary enemy cursors retain their claimed current/destination point during
shooting, waiting and hurt. The cursor exists independently of those children
(`0x59b980`); actor retirement releases it (`0x42992d -> 0x59bbf0`). Save loading
rebuilds the reservation index immediately, including an in-place reload at
the same simulation time. Separate boss movement policies remain unchanged.

The touching family is also broader than the earlier green-bat/guardian
description. Constructor, actor-table and root-state wiring confirm green
bats, green ghosts, touching spiders, zombies and guardians enter the shared
three-way closer/clockwise/counterclockwise state. The port's
`usesTouchPursuit` routes them to that state and actual body-contact damage,
with an independent one-second contact cooldown. The native contact callback
`0x42ddd0` checks a living actor and matching contact, without an animation or
root-hit-state gate. Contact can damage RedCat during hurt; selected hits do
not reset its actor timestamp `+1a8`. The port retains the saved touch cooldown
across attack-child replacement. Touching spiders retain their separate
ceiling descent/return wrapper. Their active pursuit does not use an invented
remote `shoot1` melee strike.

## Shooting and interruption boundaries

`src/enemy-shooter-native.js` owns the ordinary frog, ranged spider/bat/ghost
and skeleton parent phases, plus Mushroom Brutus's ordinary shooter and Bone
Brutus's charge/ammunition wrapper. Max and Witch retain their own controllers;
see the [15 October boss follow-up](boss-interruptions-native.md).

| Parent | Recovered transition |
| --- | --- |
| Ordinary moving shooter enters alert | Start closer. If no valid closer node exists, begin shooting even outside AttackRange. On range completion, shoot while detection/memory remains valid; otherwise end the attack child. |
| Ordinary salvo completes | A native-style sample at or below ChanceToMoveAfterSalvo selects closer; otherwise wait WaitTimeAfterSalvo. There is no additional memory check at this choice. |
| Ordinary post-salvo wait completes | Shoot if detection/memory remains valid and distance <= AttackRange; otherwise enter closer. |
| Skeleton enters its attack child | Shoot first, after the existing wake lifecycle. |
| Skeleton shot/retreat/wait child completes | End on lost memory. Below MinPlayerDistance, request retreat; otherwise wait after a shot/retreat, or shoot after the wait. A completed retreat is not restarted while that same parent state is requested. |

Skeleton retreat is one nonlooping **`walkbw`** motion, selected by enum 3 at
`0x408790`. The supplied WalkMotionFactor is multiplied by the moving actor's
same factor, giving positive playback rate **W²**, without a random draw.
Physical waypoint movement retains ordinary Speed and faces the current target
actor with RotationPerSec; it does not face the retreat destination or reverse
the forward clip. The shipped skeleton clip lasts about 1.33334 seconds at the
effective factor one, with Speed 80.

Each retreat update refreshes target memory even without line of sight.
Crossing AttackRange stops only body movement: the clip continues, and moving
back within range permits the saved edge to resume. That distance condition is
not latched. While the clip is unfinished, no destination immediately replaces
retreat with shooting, including after reaching a terminal node. Clip
completion stops the mover and completes the child. If the parent still asks
for retreat below MinPlayerDistance, same-state rejection retains the completed
child instead of replaying the clip; a later different-state choice releases
it. The port preserves this action and its pose through saves and freezes.

Common shoot child `0x4074b0` releases when its animation reaches the configured
shot frame. It does **not** recheck visibility, range or memory at release.
`0x42a220` aims at the current target actor position, with the existing height
offset and spread. Remaining shots in the salvo stay committed after losing
sight. The between-shot wait begins after the shot animation finishes;
the post-salvo wait belongs to the parent transition above. Native wait
`0x597900` arms its integer-millisecond deadline on first update and finishes
only when `now > deadline`.

The port now leaves waits unarmed on entry and starts their deadline at the
first subsequent controller check, with strict integer-millisecond expiry.
Unarmed and armed waits both survive saves and freezes. This implements the
recovered handoff without an invented fixed frame-time offset. Full native
engine dispatcher ordering is not claimed; see [wait recovery](shooter-wait-native.md).

The port saves the shooter phase, remaining shots and wait deadline alongside
pending release and animation state. Script freezes pause them. A selected hit
reaction discards the pending shot, remaining salvo, current wait and relocation
request. The enemy returns through a fresh alert/attack child; it does not
resume the interrupted salvo.

## Damage and reactions

`src/enemy-hit-native.js` separates health damage from the random reaction.
Actor constructors and damage vtable slots establish these policies:

| Receiver | Health and reaction policy |
| --- | --- |
| Ordinary enemy `0x4232a0` | Apply damage, then request hit on `rand()%2 == 0`; otherwise play hurt sound category 3 without interrupting the current action. This includes plants, both spider/bat/ghost families, frogs, skeletons, zombies, guardians and Mushroom Brutus. |
| Dormant knight `0x40e400` / gargoyle `0x40bfc0` | Skip health damage, but still refresh combat/memory and choose hit versus sound. Immunity lasts only while the inactive child exists. Wake, active, retract and hurt phases are vulnerable. |
| Bone Brutus `0x419cc0` | Only `rand()%3 == 0` accepts damage and requests hit. Other rolls play hurt sound without health loss. The native receiver also checks its frozen flag; the port retains its existing freeze controls. |

New hit initialization plays hurt sound and the nonlooping hit clip. Repeated
selected hits while already hurt do not restart the clip, deadline or entry
sound: `0x402a10` discards a replacement with the same state. Health can still
decrease during the motion. A sound-only random response still emits its sound
while already hurt and leaves the current child intact.

For dormant stone, the hit that triggers a reaction remains immune, but
destroying the inactive child makes subsequent hits damaging. After hurt,
knights enter a fresh wake/alert and gargoyles their existing idle fallback.
The port keeps them vulnerable throughout that transition rather than
temporarily returning to an immune dormant phase.

Spider hit completion creates a fresh alert wrapper. Its initializer compares
the current height with the upper and lower anchors: strictly nearer the upper
anchor starts a fresh return to StartPoint and descent; nearer the lower
anchor, including an exact tie, enters active pursuit/shooting. If the cursor
is already at StartPoint, descent starts from the current height. The old
ascent, descent or return child is never resumed. Hurt owns the action while
it runs, so the old scripted vertical speed cannot overwrite it. Sound-only
rolls leave that child running. Native preliminary return uses its separate
XYZ graph cursor; the port keeps its collision-constrained return and floor
settling instead of claiming a native fixed-height horizontal flight.

Dormant skeleton normalization and save restoration preserve hurt/death.
Selected hits replace the dormant/waking/retracting child and return through
a fresh active alert, without replaying wake. The apparent start-before-hit
branch cannot run through ordinary damage dispatch because root state 4 is
already installed; see [the recovered ordering](skeleton-hit-native.md).

Native ordinary enemy HP is integer, and `0x60ab20` truncates each incoming
damage value. The port deliberately retains **fractional HP**: small continuous
damage ticks, including sub-one-point explosion ticks, must accumulate instead
of disappearing at modern frame rates. The random branch probabilities follow
native modulo comparisons, using the port's saved per-enemy random stream.

## Preserved adaptations and narrow limits

The ordinary authored pursuit path no longer relies on the reconstructed
arbitrary-position endpoint search. That search remains a bounded **off-graph
recovery fallback** for displaced actors, old saves and incomplete custom levels.
Explicit MoveToStart/return routing still uses a fixed authored destination,
consistent with recovered `0x59ca10`. Local collision, step/slide, actor
separation and safe waypoint reacquisition remain portable safeguards.

Authored choices inspect at most eight neighbors. Recovery retains at most
16 search sweeps per enemy and 48 across enemies per update, cached failures
and fair resumable jobs. Direct movement checks remain separate from that
search budget. Smooth grave emergence, its spawn clearance, existing audio
behavior and the [graveyard regression safeguards](graveyard-performance-regression.md)
are preserved.

The skeleton dormant-hit ordering and the selected Max/Witch/Brutus
interruption/playback branches were recovered on 15 October; see
[skeleton hits](skeleton-hit-native.md) and [bosses](boss-interruptions-native.md).
Exact global RNG/whole-engine dispatcher ordering and a full native-runtime
battle/campaign comparison remain open. These bounded findings do not assert
that every unexamined branch in the executable has been reproduced.

## Retained evidence

The [complete REA bundle](../temp_work/enemy-pursuit-interruptions-2026-10-14/rea-evidence-bundle.json)
contains 248 records with original parameters, subject identity and provider
limitations. The [query index](../temp_work/enemy-pursuit-interruptions-2026-10-14/evidence-index.md)
and [detailed native ledger](../temp_work/enemy-pursuit-interruptions-2026-10-14/findings.md)
make each finding reusable.

Two separate complete supplemental bundles refine those initial records:
the [47-record skeleton retreat bundle](../temp_work/enemy-pursuit-interruptions-2026-10-14/skeleton-retreat-evidence-bundle.json)
with its [motion and wait ledger](../temp_work/enemy-pursuit-interruptions-2026-10-14/skeleton-retreat-motion-findings.md),
and the [21-record spider/contact bundle](../temp_work/enemy-pursuit-interruptions-2026-10-14/spider-hit-contact-evidence-bundle.json)
with its [hit and contact ledger](../temp_work/enemy-pursuit-interruptions-2026-10-14/spider-hit-contact-findings.md).
The original 248-record bundle remains unchanged.

Key records are:

| Finding | REA evidence |
| --- | --- |
| Random closer neighbor | `ev_5b9eca924d3600f7d93c06416c1ca4dcad625d77ebd281fb3378becda2b5903a` |
| Completion before physical movement | `ev_b31de8109972c40387cb6173abcdc716bb06fcfef579f13ce9760087f3fbaeba` |
| Farthest retreat neighbor | `ev_cf9bafd05092ce9b9e41f0742c2738063baa3caa808be1604c846fcab0f62886` |
| Common shoot release and salvo waits | `ev_592a962a64e5db2c8ca6a9b131ca348b1628e3ba4fe808de837d12bdfdbe788a` |
| Common damage receiver | `ev_9a78765be4511630ed152e1d5f05760796d5639e30a7c82987f3e8545e3027ff` |
| Same-state hit replacement | `ev_b67d24b3b30445c5210bc5afdf393e0f72a473a1e485832d009fd66447fc2b41` |
| Knight dormant receiver | `ev_929195ee65e8e5d09abf332a40bd230fe8f9019de737e373519159e1dc993d11` |
| Bone Brutus receiver | `ev_036485acb855c5413a6bd6aabbe938e0fbec814e1d24ed16c13d1b38553e1189` |
| Integer damage conversion | `ev_ef086cb0c46760aa2487dbbe06726081d98567d9296114aba5e87e696e903676` |
| Retreat clip completion and memory refresh | `ev_347fd47f67b52b5d85d0c85b4c6ee1beba596328720d231565544d01760d77a7` |
| Retreat motion factor multiplication | `ev_639152667dc54fdd2beaa7632ba34b0d45e62a9c2bd410a5685af5d84b570e79` |
| Child initialize-only first dispatch | `ev_428a01a76ac07ec248758b695942fa64a66ee1c884ae8d17a29ac57885100348` |
| Spider fresh-alert height choice | `ev_bf54c8d60aedbd292ab8147bf6d231971c2276a55ee1aa9a5a6a021a3ecfbb05` |
| Contact independent of hit state | `ev_60364f022d94747ac9c8f25c1c3f187cb481b501b61a6c0943dd1368059441ef` |

## Focused port validation

Only affected behavior was tested; no package build or full historical suite
was run. Retained checks include:

- [Navigation, shooter phases and existing recovery/reservation safeguards](../temp_work/enemy-pursuit-interruptions-2026-10-14/navigation-shooter-tests.log): 38 checks passed in the initial implementation. The skeleton cases were subsequently refined against the supplemental evidence below.
- [Final shooter phases and imported skeleton animation](../temp_work/enemy-pursuit-interruptions-2026-10-14/skeleton-retreat-tests.log): 19 checks passed, including positive factor-squared playback, target-facing backward movement, early body stop/resume, final-pose hold, exact pose restoration and freezes.
- [Gameplay shooter integration](../temp_work/enemy-pursuit-interruptions-2026-10-14/shooter-integration-final-tests.log): 8 checks passed, covering all five ordinary shooter families, committed releases, fresh/legacy saves and interrupted versus preserved salvos.
- [Hit policies and touch cooldowns](../temp_work/enemy-pursuit-interruptions-2026-10-14/touch-hit-tests.log): 13 checks passed, including the native random branches, dormant stone protection and contact during hurt.
- [Spider/skeleton ambush and contact integration](../temp_work/enemy-pursuit-interruptions-2026-10-14/ambush-contact-final-tests.log): 16 checks passed, including fresh post-hit height choices and preserved hurt/death on reload.
- [Cursor reservations](../temp_work/enemy-pursuit-interruptions-2026-10-14/cursor-reservation-tests.log): 22 related checks passed. The [5 updated cursor checks](../temp_work/enemy-pursuit-interruptions-2026-10-14/cursor-restore-tests.log) also verify fresh and in-place restoration before any update or explicit synchronization.
- [Explosion integration with the new hit receivers](../temp_work/enemy-pursuit-interruptions-2026-10-14/explosion-hit-integration-tests.log): all 13 explosion checks still passed. [Knight strike-window checks](../temp_work/enemy-pursuit-interruptions-2026-10-14/knight-strike-regression-tests.log) also passed with the awakened knight and its native motion rate.

The isolated [source-browser encounter check](../temp_work/enemy-pursuit-interruptions-2026-10-14/scenes-1791931100449/report.json)
exercised frog approach, skeleton retreat, triggered grave emergence and zombie
contact pursuit. Across 1,140 frames, whole-world update medians were
3.7–4.7 ms, the maximum was 11.3 ms, and no update exceeded 50 ms. All recorded
route targets were adjacent; the maximum bounded-search count was one trace.
Sixty-four deterministic hit samples exercised both branches, and the stone
checks confirmed first-hit immunity and subsequent vulnerability.

After the supplemental retreat correction, a separate
[actual Graveyard skeleton check](../temp_work/enemy-pursuit-interruptions-2026-10-14/skeleton-retreat-1791931788105/report.json)
verified rendered `walkbw`, stable animation serial, final-pose holding and
freeze continuity. Across 172 frames, update median/p95/maximum were
3.8/5.7/20.5 ms, with no update over 50 ms and no route-search traces.
The [rendered pose](../temp_work/enemy-pursuit-interruptions-2026-10-14/skeleton-retreat-1791931788105/skeleton-walkbw.png)
was inspected. Both browser checks had no JavaScript, resource or script errors
and used isolated profiles without altering player saves.

These are targeted whole-update samples on the test machine, not a low-end
hardware benchmark or a complete native-runtime playthrough. Older measurements
retain their original dates and scope.

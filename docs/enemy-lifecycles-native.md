# Skeleton and stone-enemy lifecycles

Source/native follow-up, 14 October 2026. No distribution build was made.

## Native evidence

The original `RcHcGame.dat` SHA-256 is
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
This investigation used static native code, imported motion data and focused
tests, not a new recorded original-game playthrough.

`CRcStonedAlert` is shared by knights and gargoyles. Its assertion at
`0x404cd0` references `RcKnightState.cpp`, but that source filename alone does
not identify all its users. Knight construction uses `0x40e3a0 -> 0x404eb0`;
gargoyle construction uses `0x40bdc0 -> 0x405230`. The latter's state table
selects `0x405310 -> 0x405370 -> 0x404c50`, the same alert base.

- `0x404c70`: if motion slot zero (`start`) exists, play it once at **+1.7**
  and wait for it to finish. Otherwise enter the looping alert idle directly.
- `0x404cd0`: after the wake, enter the attack child when the remembered target
  is in attack range. After that child completes, reconsider alert state.
  If target memory expires, play the optional `start` at **−1.7** and return
  to the inactive parent state.
- `0x404ee0` and `0x405250`: the inactive knight/gargoyle states make the
  existing animation non-looping so it settles instead of repeating forever.
- Gargoyle motion data has `hit`, `shoot1`, `idle0`, `idle1`, and `static`;
  **there is no gargoyle `start` animation**. Its alert uses the idle fallback,
  not an invented wake/retract clip. `0x40c560` selects its three idle variants.
- Skeleton idle initialization at `0x407b70` plays `start` at **−1** when the
  actor motion is initialized. Exiting that state at `0x407af0` plays it forward
  at the ordinary sampled motion rate, provided the actor remains alive.
  `0x407bc0`/`0x407c00` wait for a non-looping wake motion to finish before
  entering the attack child. `0x407f60` ends that child on lost target memory.
- Motion reset `0x4a10a0` starts reverse playback at the last frame, while
  forward playback starts at the first frame.
- The damage follow-up identifies knight `0x40e400` and gargoyle `0x40bfc0`
  receivers. They suppress HP subtraction only while their inactive child
  exists, but still refresh target memory and choose a hit reaction or hurt
  sound. The inactive destructors enable health damage; wake, retract and
  hurt do not grant immunity. Common hit requests cannot replace an already
  active hit child because state setter `0x402a10` rejects the same state.

Representative REA records include
`ev_68dfc707e7b3fd91b77dde85d19c39cbc74faec803ae4228049e2b6705e59418`
(stone alert),
`ev_17eb9037870aecc4bfa2a84bda17154fb9cd399c841ec56ce3bf57daed2ea180`
(gargoyle state construction), and
`ev_e91956ee293a4ec108734395a9a7e90b736ee617e97e58699e8408a0504f56f8`
(skeleton wake). Full retained records and assembly are under
`temp_work/enemy-parity-2026-10-13/`.
The later [pursuit/interruption bundle](../temp_work/enemy-pursuit-interruptions-2026-10-14/rea-evidence-bundle.json)
retains the damage evidence, including
`ev_929195ee65e8e5d09abf332a40bd230fe8f9019de737e373519159e1dc993d11`
(knight receiver) and
`ev_b67d24b3b30445c5210bc5afdf393e0f72a473a1e485832d009fd66447fc2b41`
(same-state replacement).

## Port implementation

`source/enemy-ambush.js` now owns saved dormant/waking/awake/retracting phases for
stone enemies and skeletons. Knights wait for their 1.7-speed start motion;
after losing memory they retract at −1.7. Skeleton wake speed uses the native
`0.8 + (rand() % 10000) * 0.00004` distribution, and the same chosen rate drives
both playback and the gameplay deadline. They collapse back into a pile at
−1 after their completed attack/reaction and target-memory loss.

Fresh skeletons continue to appear as the settled first-frame pile. The native
initial reverse settling is represented by its completed pose, so loading a
room does not briefly reveal standing skeletons before the encounter. Return
transitions of already-awakened skeletons play the reverse motion visibly.
Gargoyles enter their existing looping idle fallback on detection. On returning
to dormancy their existing non-looping motion can settle before holding its
final pose. A committed gargoyle salvo finishes before returning to dormancy.

A selected hit now cancels the current attack child and its pending release,
salvo and wait. Dormant stone ignores that triggering hit's health damage,
then becomes vulnerable as its inactive child is destroyed. The port keeps
stone enemies awake during hurt and re-enters the fresh alert afterward:
knights wake again, gargoyles use idle. It does not briefly restore dormant
immunity between those phases. Repeated selected hits do not restart the
active hit motion; sound-only responses do not cancel it or the attack child.

Dormant skeleton normalization and load restoration preserve an active hurt
or death clip rather than replacing it with the settled pile. Spider wrappers
likewise leave a selected hurt motion in control. On completion they create a
fresh alert: strictly nearer the upper anchor returns to StartPoint and
descends; nearer the floor or tied enters active combat. They do not resume
the old vertical child. Independent contact damage can still apply during
hurt and retains its own one-second cooldown. See the separate
[spider/contact evidence](../temp_work/enemy-pursuit-interruptions-2026-10-14/spider-hit-contact-findings.md).

The skeleton attack child's retreat is one `walkbw` motion at positive
WalkMotionFactor squared, facing its current target. It refreshes target
memory each update. Crossing AttackRange stops only the body and is reevaluated
each frame; the motion completes the child. A no-node result interrupts an
unfinished retreat into shooting. Same-state rejection prevents replay of a
completed retreat while the parent still requests retreat. Full details and
the native wait first-check scheduling limit are retained in the
[retreat supplement](../temp_work/enemy-pursuit-interruptions-2026-10-14/skeleton-retreat-motion-findings.md).

The animation player now starts negative-rate one-shots at the clip end,
clamps at frame zero, and saves/restores signed rates and poses. Previously
positive-only restoration could turn a reverse transition into forward motion.
No new navigation searches were added to the constant-size lifecycle checks.
A nearby collapsing skeleton can check one visibility ray to reacquire RedCat;
the existing perception ranges and graph-search budgets remain.

## Validation and limits

`tests/enemy-lifecycles-native.test.mjs` covers wake-before-attack, reverse
settling, static dormant geometry, reacquisition, signed-rate save restoration,
gargoyle fallback/committed attacks, and skeleton wake timing. Focused existing
animation and ambush tests cover native knight strike timing, idle selection,
disabled-room skeletons and script freezes.

An isolated browser scene also exercised the actual imported Castle knight,
Tower gargoyle and Caves skeleton through dormancy, wake, awake and reverse or
settling transitions. Full mid-transition snapshots restored matching animation
poses and exact vertex positions. The retained report is
`temp_work/enemy-parity-2026-10-13/scenes-1791929196397/lifecycles-report.json`.

The later [pursuit and hit follow-up](enemy-pursuit-interruptions-native.md)
implements the recovered common random reactions and stone immunity lifetime.
The [15 October skeleton-hit recovery](skeleton-hit-native.md) resolves the
dormant start-before-hit branch: ordinary damage replaces root state 1 with 4
before deferred initialization, so the branch cannot run through that entry.
A selected hit replaces the pile/wake/retract child, plays hurt and returns
directly to active alert, with no extra wake. Sound-only hits retain the normal
wake lifecycle and no speculative immunity was added. Bounded
perception, collision recovery and smooth grave emergence remain portable
adaptations; a native runtime comparison is still needed to establish complete
interruption ordering.

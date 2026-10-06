# Graveyard zombie activation

Inactive graveyard zombies no longer protrude through unopened graves. Their
original scripts destroy the grave cover and then enable the zombie. The
zombie follows its explicit upward entrance edge before ordinary movement,
perception and waypoint logic takes over.
The two zombies that the original level enables from the start remain visible.

## Original evidence

The graveyard (`lvl02a`) contains twelve `MovingEnemy` entities with `Type=4`.
Ten start disabled: `zombie1` through `zombie5`, `frogzom1` through `frogzom4`,
and `ghost1`. `mausozom1` and `mausozom2` start enabled. Entity names are not
reliable type identifiers: `ghost1` is a zombie, whereas `zombie6` is a ghost.

| Zombie | Authored activation |
| --- | --- |
| zombie1 | graf1_trigger |
| zombie2 | graf2_trigger |
| zombie3 | dknopa touch button |
| zombie4 | dknopb touch button |
| zombie5 | zombie5tr_tr |
| frogzom1, frogzom2 | frogzom12_tr |
| frogzom3 | frogzom34_tr |
| frogzom4 | easterknop1_tr button |
| ghost1 | zombie5's AfterDestroyCommand |

The grave actions hide their cover ModelController and destroy their
`grafdum.act` actor before calling the zombie's `.enable`. That actor's original
debris settings supply `brok1.act`, `brok2.act` and `brok3.act` fragments. Its
explosion size is zero, so the effect uses fragments and sound without a fire
sprite. The
user also verified the destruction-then-appearance sequence in the original
game. These scripts and existing destruction effects are retained.

Read-only native inspection used `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`:

- `0x428ecb–0x428ef6` constructs `CRcZombie` for Type 4 through `0x418d50`,
  without a subtype branch. Both zombie subtypes use the same actor class.
- `0x427c18–0x427c3f` copies MovingEnemy's `IsInitiallyEnabled` to both its
  controller and its spawned actor using `0x502350`.
- That setter writes object offset `+0x7c`; `0x502453–0x50245e` updates world
  registry membership through `0x4f62e0`. Disabling is not limited to AI thinking.

This investigation did not establish the native timing of the zombie's
`start` motion. The fix does not add an unverified emergence-animation delay.

## Smooth grave ascent (October 2026 follow-up)

The running session and its copied save reproduced a frame-rate-dependent
regression. Ground movement flattened the upward waypoint direction, then
tried to step over the grave slope and apply gravity. At short frame intervals
this alternated between moving and standing still, restarting `walkfw` after
each idle frame. A fixed 60 Hz check largely concealed the problem.

Further native inspection shows that `CRcZombie` calls `CRcTouchingEnemy`'s
constructor (`0x42dc80`, called at `0x418e29`). Its cursor advances in XYZ:
`0x59bfb5–0x59bfd6` computes the full 3D direction and length,
`0x59c049` computes `dt_ms * Speed * .001`, and `0x59c091–0x59c0a4`
advances the normalized direction (or copies the endpoint at `0x59c070`).
`0x595f60` forwards the resulting cursor position to the actor. The original
Zombie.ini supplies Speed 50 on every difficulty. There is no evidence here
for a separate timed rise animation; the normal walk motion continues.

`src/zombie-grave-rise.js` now owns only the first, explicitly linked rising
edge of an initially disabled zombie with `UnlinkStartPoint`. This selects
`zombie1`–`zombie4` and `frogzom1`–`frogzom4`. The two flat plank entrances
and initially active mausoleum zombies retain their ordinary movement.
During the rise, XYZ advances at Speed without step/gravity collision or
recovery searches, and facing turns toward the exit at RotationPerSec.
Once it reaches the authored endpoint, normal patrol and collision resume.
The original grave destruction and enable callbacks remain responsible for
uncovering and revealing each zombie.

The actor continues from its existing position, including the small authored
Origin/StartPoint offsets and previously saved collision corrections. It does
not snap back to the start. Existing saved patrol fields record progress and
completion; no save migration or additional timer is needed. A hurt pose or
authored cutscene can hold the rise without making the zombie fall back down.

Focused checks for this follow-up:

```sh
node --test tests/zombie-grave-rise.test.mjs
node --test --test-name-pattern='first zombie clears|original grave triggers' tests/zombie-activation.test.mjs
```

All seven new checks and the two affected existing checks passed. The new
checks exercise all eight entrances at 60 Hz, 120 Hz, 7 ms, and uneven frame
intervals, plus older-save continuation, save/reload, hurt/cutscene holding,
scope and facing. An isolated browser also tested the copied running save and
the four original first-area trigger/button encounters. For the copied save's
remaining ascent:

| Frame timing | Before: stopped frames / animation changes | After: stopped frames / animation changes |
| --- | --- | --- |
| 7 ms | 194 / 388 | 0 / 0 |
| Uneven 7–11 ms | 85 / 170 | 0 / 0 |

The `frogzom12_tr` encounter also passed a physical approach check. Its second
zombie rises continuously to the authored Y=535 endpoint, then settles onto
the Y=528 floor over 133 ms while continuing to walk, without stopping or
restarting its animation.

The fixed ascent uses zero enemy collision sweeps rather than up to six per
frame, and makes no pursuit searches. This is a focused work-count check,
not a claim about whole-level FPS. No unrelated suites or builds were run.
Retained disassembly, copied state, browser harness, screenshots and before/
after reports are in `current_work/zombie-rise-smooth-2026-10-05/`.

## Fix and saves

The shared `actorVisible` predicate now excludes disabled living zombies.
It is used by rendering and actor collision records. The enabled flag already
gates AI, projectile eligibility and target selection. Explicit Hide remains
effective after Enable. The predicate preserves ordinary death animations and
visible inactive enemies such as gargoyles and Brutus.

No save migration is needed: old saves already retain the correct enabled
state, even when their separate visible field is true. Triggered and defeated
zombies retain their progress.

The physical activation check also found that the first zombie's portable
square collision hull overlapped its grave's end wall and sloped floor by a
few units at the authored origin `[3876, -117, 995]`. It appeared but could not
walk. A zombie-only spawn correction now uses the BSP's shortest outward
penetrations to find a clear position. It is restricted to the original spawn
area before the first patrol segment is complete, allows at most 16 units
(the existing step height) from both the current position and authored origin,
and applies no displacement unless the final hull is clear. Its original
westward waypoint route remains unchanged. This is a
portable collision adaptation, not a claim about native AI instructions, and
also repairs older saves with that zombie still stuck at its spawn. The
smooth-ascent follow-up above supersedes this correction during an authored
grave rise; the bounded correction remains available to ordinary movement.

## Focused verification

```sh
node --test tests/zombie-activation.test.mjs
node tests/zombie-activation-scenes.mjs
```

Five cases passed: the twelve original actors' starting visibility, original
grave/button callbacks and destruction order, save restoration/death cleanup,
preservation of other inactive enemy visuals, and the first zombie leaving its
grave through actual BSP collision. The spawn case was run separately when the
movement issue was found; the four earlier successful cases were not repeated.
No unrelated suites or builds were run.

The browser check passed four physical encounters: walking into `dknopa` and
`dknopb` without E, and crossing `graf1_trigger` and `graf2_trigger`. Each
destroyed its original cover, rendered 14–15 stone fragments, revealed its
zombie and played `walkfw` while the zombie moved more than 100 units over
three seconds. The first zombie cleared its grave, and all four final hulls
were outside solid geometry. All ten inactive zombies were hidden and
untargetable; the two initially active zombies were visible and targetable.
There were no browser, HTTP or script errors. Results and before/after images
are in `artifacts/zombie-activation-scenes.json` and
`artifacts/zombie-*-before.png` / `zombie-*-after.png`.

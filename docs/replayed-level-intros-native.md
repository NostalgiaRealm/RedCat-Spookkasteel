# Native quick-play tutorial branches

Research and implementation: 2026-10-05. Native branch recovery and focused
unit/browser validation are complete. No packaged build was created. Evidence includes the imported original
DSO programs in `data/davi/lvl00a.json` through `lvl04a.json`, the original BSP
entities and motion events, and installed `RcHcGame.dat` (SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`).

Retained evidence is under `current_work/replayed-level-intros-2026-10-05/`:
`branch-map.json`, `script-traces.json`, `script-trace-summary.txt`, the
per-level skill-handler extracts, and reproducible extraction/tracing scripts.
These are focused read-only script investigations, not a run of the previous
regression suite.

## Native mode and entry point

The original script API is **GetGameType**, not RcGetGameMode. The native
registration at `0x5279aa–0x5279d0` binds it to `0x56b7f0`. That wrapper reads the
`General` / `GameType` integer setting (strings `0x690810` and `0x690804`) and
returns its integer value. The original Dutch language file labels zero
**Avontuur** and one **Snelspel** (`GameType0.msg`, `GameType1.msg`).

Four compiled `CheckGameState` functions test exactly `GetGameType() == 1`.
Values other than one do nothing. Their mode-one actions consist only of
Disable calls. They do not grant skills, complete puzzles, kill bosses,
teleport RedCat, or fast-forward every cutscene.

The World.OnInitCommand wiring matters:

- Forest: `CheckGameState()` is called.
- Castle: there is no CheckGameState/GetGameType branch. World initialization
  opens `ophaalbrug01_mc`, the entrance drawbridge.
- Graveyard: resets `paal1=0, paal2=0, paal3=1, paal4=0, paal5=0`, then calls
  `CheckGameState()`.
- Caves and Tower: World.OnInitCommand is empty. Their compiled
  CheckGameState functions have **no caller anywhere in the imported program**.
  No CheckGameState name occurs in the native game executable either. These
  are dormant authored branches, not automatically executed mode changes.

Use the original connected World initialization, rather than invoking every
function named CheckGameState. Save restoration must retain the saved object
states and must not replay World.OnInitCommand, which would reset puzzles.

## Connected Forest branch

Function `CheckGameState`, DSO offset 23732, first instruction 23761, disables:

| Trigger | Timeline | Original scene |
|---|---|---|
| csmc01_tr | CSL001_MotionCommand | First Fleurifee meeting and story: WhizzKitty, Grizella and the lanterns (flgen3–9) |
| csmc02_tr | CSL002_MotionCommand | Jump over the log (flgen10) |
| csmc03_tr | CSL003_MotionCommand | Save pillar explanation (flgen11) |
| csmc04_tr | CSL004_MotionCommand | Jump over shallow water, damage and heart pickups (flgen12–14) |
| csmc05_tr | CSL005_MotionCommand | Potions, coins and walking over pickups (flgen15–17) |
| csmc07_tr | CSL008_MotionCommand | Touch buttons and walk into doors (flgen21–22) |
| csmc08_tr | CSL009_MotionCommand | Dodging/attacking an enemy (flgen23) |
| csmc09_tr | CSL010_MotionCommand | Deep water and shooting a distant button (flgen24–25) |

These timelines contain dialogue, cameras, Fleurifee enable calls, presentation
hides/restores and temporary music-volume changes. They contain no required
skill grant or puzzle/door action. Disabling their entry triggers avoids the
entire presentation without needing to synthesize their final camera or audio
state.

The opening UFO authored camera remains: it is not in this skip list. The
shooting-skill encounter and Brutus's introduction/defeat/mirror sequences
also remain. This is a tutorial/story selection, not a blanket cutscene skip.

## Connected Graveyard branch

Function `CheckGameState`, DSO offset 33933, first instruction 33962, disables:

| Trigger | Timeline | Original scene |
|---|---|---|
| csmc02_tr | CSL201_MotionCommand | Blue explosive crate explanation (flgen44) |
| csmc03_tr | CSL202_MotionCommand | Magic teleport portal explanation (flgen45) |

Only these two tutorial triggers change. The original five pillar puzzle
initialization, zombie/grave actions, SuperSkippie reward, boss and mirror
sequences remain available.

## Skill encounters deliberately retained

None of the mode-one disabled trigger lists includes a skill gate:

| Level | Trigger | Original requirement/reward |
|---|---|---|
| Forest | csmc06_tr | RcHasAllPotions(0), RcEnableSkill(0): shooting |
| Castle | choice_tr | RcHasAllPotions(1), RcEnableSkill(1): stronger shot |
| Graveyard | csmc05_tr | RcHasAllPotions(3), RcEnableSkill(3): SuperSkippie |
| Caves | trigger_cuts04 | RcHasAllPotions(2), RcEnableSkill(4): authored BIG BENG reward typo |

The port already corrects the last reward to skill 2 in that specific Cave
handler. Revisit tutorial suppression must retain this repair and must not
automatically grant skills because a level was visited before. A player who
left Forest before gaining shooting can still earn it from csmc06_tr on a
fresh revisit. Skills previously earned are handled by existing progression
and save logic, separately from GetGameType.

## Dormant Cave and Tower branches: do not activate indiscriminately

Caves CheckGameState at DSO offset 46847 would disable `cutscene01`,
`trigger_cuts02`, `trigger_cuts05`, and `trigger_cuts06`:

- CSL300: Fleurifee's Cave arrival, including the 30-potion reminder.
- CSL301: elemental altar/barrier explanation.
- CSL305: Max's pre-battle warning. This also enables `max_model`, whose
  authored motion lowers the separate Max presentation actor 73 units into
  the floor. The existing port retires that double after the motion finishes.
  Skipping the timeline without the handoff leaves the duplicate visible.
- CSL306: Fleurifee's post-Max farewell/mirror dialogue. This also enables the
  `enter` group: six stone controllers `steen01` through `steen06` at the
  Tower passage, with `fx_steen` during movement. Merely disabling its trigger
  discards real world progression actions.

The actual Cave boss activation is separate: closing
`door_left_endbattle` closes the other door and calls `Max.Enable`.
Defeating Max unlocks both `door_*_to_tower` doors. Those events are not a
substitute for the presentation double cleanup or six-stone passage motion.

Tower CheckGameState at DSO offset 14560 would disable `trigger_cuts01`:
CSL400 is Fleurifee's farewell, her reminder about the mirrors and Grizella's
reflection, and WhizzKitty/Grizella dialogue above. It contains presentation
calls, not a skill grant, but its mode branch is still unwired in the shipped
level. Keeping normal behavior avoids inventing new original-mode semantics.

## Validation scope

The original fixture plan is retained below. The completed checks are listed
under “Focused validation results”; those checks establish branch selection,
retained trigger availability and save/menu behavior. They do not replace a full
playthrough of every skill reward, boss and level exit under both policies.

1. Boot each original program through its normal World.OnInitCommand with
   mode zero and one. Assert exactly the eight Forest and two Graveyard
   trigger changes; Castle/Caves/Tower remain equal between modes.
2. Verify the Castle entrance drawbridge and Graveyard pillar flags still
   initialize normally; do not bypass their World handlers.
3. Dispatch each retained skill gate with insufficient/sufficient potions;
   verify shooting, stronger shot, SuperSkippie and the corrected BIG BENG
   reward remain possible during a fresh replay.
4. Confirm Forest's opening UFO camera and Brutus/mirror progression remain,
   and Cave Max handoff plus the stone passage still execute normally.
5. Restore a saved replay without replaying World initialization: retain
   mode context, solved puzzle states, current cutscene and trigger history.

The implemented automatic revisit policy below defines when a level counts as
played, when a new adventure resets that history and how saves preserve the
session. These are portable product rules separate from the original GetGameType
branches above.


## Automatic replay policy in the port

There is one campaign menu and no added game-mode selector. A fresh start of a
chapter already present in `campaign.playedLevels` supplies `GetGameType() == 1`
to the original scripts. The connected World initialization then performs only
the ten native tutorial disables listed above. First visits supply zero.

`src/campaign-progress.js` keeps visited chapter IDs separate from
`highestUnlocked`. A completed chapter records itself as played while unlocking
its successor; the successor has not yet been played. The unlock-all cheat does
not add played IDs. Merely selecting a card, cancelling its warning or failing
to load the chapter does not record a visit. `src/main.js` chooses the replay
policy before loading and commits the visit only after successful initialization.

The checkpoint stores `game.scripts.replayLevel`. Continue and recovery saves
restore that exact context along with existing objects, puzzles and cutscenes;
they never rerun World initialization or recalculate replay status from later
campaign history. A dead checkpoint that needs to restart its world likewise
retains its saved policy. Older snapshots without this field remain ordinary
first-play sessions.

Legacy campaign data has no reliable visited list: `highestUnlocked` may come
from the unlock cheat. Migration therefore records only the current chapter of
a valid existing save as proof of prior play. It does not guess that every
unlocked chapter has been visited. All subsequent successful starts are recorded.

A confirmed **Start opnieuw** forces ordinary Forest behavior and clears played
history for the new adventure only after loading succeeds. Chapter unlocks and
preferences remain, and the existing separate skill reset still applies. Chapter
card replay does not clear history or earned abilities. The one-time opening
control toast is not newly armed during a replay.

## Focused validation results

- `tests/replayed-level-intros.test.mjs`: 6 checks passed. This includes booting
  all five real DSO programs with both policies and comparing enabled states,
  verifying retained ability/boss/exit triggers, save-context restoration,
  independent access/history, conservative legacy migration and new-adventure
  history reset.
- Only the three progression/migration cases affected by the new history field
  in `tests/campaign-progress.test.mjs` were run; all passed. Artwork and unrelated
  regression suites were not rerun.
- `tests/replayed-level-intros-scenes.mjs`: 10 browser checks passed with an
  isolated profile. Real menu unlocks, first visits, chapter replay, Continue,
  recovery saves, cancellation, injected load failure and deferred successful
  Start opnieuw were verified. No page/script errors occurred.

Browser evidence, including screenshots/profile and its JSON report, is retained
in `current_work/replayed-level-intros-2026-10-05/scenes-1791235142883/`.

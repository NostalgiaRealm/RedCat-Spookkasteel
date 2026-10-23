# Campaign and release-source validation — 15–18 October 2026

This pass used the source and imported campaign assets available on 15–18
October 2026. **No new builds were produced during that pass, and personal game
profiles were not used or changed.** Later release records are linked below;
this is not a new playthrough of 1.0.1. Useful harnesses, logs and findings remain
under `temp_work/`. The [22 October cleanup](../temp_work/cleanup-2026-10-22/README.md)
removed disposable profiles, copied saves and screenshots, and deduplicated
source evidence. Historical capture paths below identify the original run,
not a promise that those disposable files remain.

## What the evidence establishes

A fresh **Normal campaign completed all five levels without cheats**, including
the required puzzles, earned upgrades, bosses, mirror transitions, final authored
scene, debriefing and complete outro back to the menu. This was an instrumented,
iterative source run with ordinary deaths, saves and recovery, not an untouched
release executable or a 100% collectible run. Distinguish these kinds of evidence:

- **Earned campaign:** a new Normal adventure, ordinary movement, jumping,
  firing, touch switches, pickups, dialogue and the game's saves/recovery. Some
  early captures called the normal save entry point directly; later captures
  used F5 or menu controls. No manual inventory, health, progress or
  actor-position edits. This run completed Forest, Castle, Graveyard, Caves and
  Tower through the actual mirror/debriefing exits. The finished save has five
  mirrors, all earned combat/jump upgrades, score 13150, health 12/14 and five lives.
- **Chapter/encounter runs:** isolated starts with explicitly declared incoming
  progress or position. Ordinary controls after setup can establish that a
  particular route or encounter is playable, but not that its setup was earned
  through all preceding levels.
- **Integration scenarios:** imported scripts, motion markers and save/restore
  logic exercised through direct interaction entry points. These establish
  puzzle-state and persistence behavior, not physical reachability.

The read-only collision route planners and observation hooks do not move actors
or change puzzle state. The Castle recovery fix was loaded during the run,
then a normal browser reload at the Caves entry loaded the final fixes; this is
an iterative source-validation run, not an untouched executable session. Some
runs advance controlled 60 Hz game frames; they are not measurements of
physical-display FPS. Ordinary deaths, poor routes and
failed boss attempts are retained rather than presented as successful runs.

A [scoped input-log audit](../temp_work/caves-full-input-2026-10-18/no-cheat-log-audit-2026-10-18/audit.txt)
found no fixture imports or manual progression/stat/position edits through its
early-Earth cutoff. An [incremental audit](../temp_work/caves-full-input-2026-10-18/no-cheat-log-audit-increment-2026-10-18/audit.txt)
extends that review through final command 531 and the complete outro/menu,
matching all 91 additional command responses and preserving the earlier log
prefixes unchanged. Both record normal saves/recovery and instrumentation;
the earlier source hot-load and direct native saves remain explicit. Historical
path-based helper contents were not all embedded in the original logs, so this
is not a forensic certification.

## Optional-area coverage

The imported levels contain **13 authored `IsSecret` objects**: five in Castle,
four in Graveyard and four in Caves. Every one now has a physical normal-input
route check across the earned run and the separate continuations/fixtures below.
This is coverage across checks, **not a single 100% campaign save**. Forest and
Tower each declare zero secrets; Tower's two optional bonus rooms were also
entered, emptied of their loose pickups and exited. Collection of every money
bag, enemy and bottle throughout the whole game is not claimed.

## Earned campaign

The fresh Forest run collected all **15 potions**, earned Fleurifee's first
upgrade, shot the required switches/crates, crossed the rising-stone puzzle,
defeated Brutus, collected the mirror and used the debriefing to enter the
Castle. A water death and checkpoint respawn preserved earned progress. The
completion snapshot has mirror 1, score 1030, two lives and no-clip disabled.
The actual debriefing records all four enemies defeated and 0/0 authored secrets;
this was not a collection of every money bag.

The Castle continuation has crossed the entrance bridge, library/bookcase
switch, basement secret, warehouse lifts, crate staircase, upper moving platform
and lower bridges through ordinary input. It then completed the eastern passages,
armoury boulder corridor and both buttons, all four throne switches, and the
20-potion power-shot threshold (granted with 21 collected). Max was defeated with ordinary shooting; a combat
death respawned at the earned checkpoint and preserved the boss damage. The
final lift, mirror pickup and debriefing entered Graveyard with health 6, one
life, score 2490, two mirrors and skill mask 3. A mistimed crate jump exposed the
fall-pocket recovery defect described below. Castle finished with 21/30 potions
and 3/5 secrets. An isolated continuation imported that unchanged earned save
and physically entered/exited the two remaining secret passages (throne and
library), collecting the library potion with an ordinary jump. It reached
22 potions and all 5/5 secrets without damage, death or reload. This verifies
the optional routes, but does not change the earned campaign's 3/5 result.
[Castle optional-secret evidence](../temp_work/castle-optional-secrets-2026-10-18/verified-optional-secrets.md).

The earned Graveyard continuation completed the grave-button encounters,
painting solution and exploding entrance, ceiling spiders, enemy-gated planks,
chapel, hedge maze, rotary bridges, moving rafts, temporary ferries and vertical
platforms. The fairy granted SuperSkippie with exactly 30 collected potions.
Ordinary double jumps climbed the high boxes, then the chapel lift and lower
corridor led to Brutus. Normal firing and strafing defeated him without losing
the remaining four health points. The actual mirror/debriefing exit entered
the Caves with three mirrors, skill11, health4, one life and total score5735.
Ordinary deaths, checkpoint respawns and recovery/F9 loads are retained; no
live state or inventory was assigned. The first Caves attempt ended in an
ordinary death; a save made afterward exposed the dead-save defect below.
The normal two-minute recovery menu returned to Graveyard, where the boss and
all four arena health-button/pillar sequences were replayed through ordinary
input. Collecting the health pickups allowed re-entry to Caves at health9,
one life and score5795. A living save and normal browser reload loaded the
latest fixes. The earned Caves continuation completed the Water branch and
returned to the hub: eight regular and six secret potions, all seven waterfalls,
the draining basin, all three guards/altar controls, and unlock_max1. It retained
health1.87 and one life. Ordinary F9 retries after hazardous approaches remain
recorded. Air then completed its fans, moving rocks, high secret, ferries,
lower-pit recovery updraft, three guards/altar controls and full return to the
hub. Its secret raised maximum health to12; ordinary pickups left health10,
one life,26 total potions and unlock_max2. Earth then completed all twelve
pillars, three rotation controls, its secret, three altar guards/controls and
return to the hub. Ordinary F9 retries are retained. It ended with health7/12,
two lives,36 potions and unlock_max3. Fire completed both lava crossings, all
four rotating-platform controls, lowered passages, its secret, all three altar
controls and the return to the hub without a death or reload. It ended with
health5/12, five lives,46 potions, skill11, mirror3 and unlock_max4. All four
Caves altars are now earned together. Fleurifee granted BIG BENG at47 potions
(skill15); three ordinary fully charged releases defeated Max11→7→3→0.
Both lava gaps and mirror4 were reached alive, and the actual Caves debriefing
reported47/50 potions,16/64 money,38/42 enemies,4/4 secrets, bonus1575 and total
score11290. It then loaded Tower with health12/12 and five lives. The Tower
continuation completed the spiral ascent, entrance enemies, upper checkpoint
and both bonus rooms with all32 loose pickups and all four portal triggers.
One ordinary death/respawn in the entrance fight and an earlier F9 after a
charging-helper stall are retained. It reached the witch approach at health14/14,
five lives, skill15 and mirror4. The final approach then activated all five
mirror stands and collected the fifth mirror. Two ordinary fully charged
releases defeated the Witch, health 8→4→0, leaving RedCat at health 12/14 and five
lives. The full authored ending ran without skipping and produced the final
debriefing: 22/27 money, 3/11 enemies, 0/0 potions and secrets, bonus 375 and total
score 13150. The completed save retains skill 15, mirror 5, kills 89, coins 377, secrets 7
and no-clip disabled.

Tower had two ordinary deaths in total: the entrance fight and an incorrect
test-driver wait after the Witch introduction. A subsequent overly tight
mirror-stand approach stalled under fire; the actual two-minute recovery menu
restored the earned bonus-room return save. Correcting only the input helper's
arrival tolerance and walking to the loose mirror completed the sequence at
full health. These failed attempts, the earlier F9 and the recovery replay are
retained. No health, actor position, mirror or script state was assigned.

The first outro attempt failed before metadata/time0 with Chromium's
`MEDIA_ELEMENT_ERROR: Player load failure: error creating media player`.
An ordinary browser reload and Continue restored the completed Tower debriefing
with the same score/inventory. Clicking its continue button then played the
entire **55.047-second outro**, with a recorded `ended` event and return to the
menu. No source or media asset changed between attempts. The initial failure is
part of the evidence, not a successful uninterrupted playback claim. Final
script-error and unsupported-command lists were empty, and no fatal overlay
remained. The media-start failure's cause is not established by this retry.

Evidence:

- `temp_work/campaign-validation-2026-10-15/playthrough-1792088801065/forest-completed.json`
- `temp_work/campaign-validation-2026-10-15/playthrough-1792088801065/forest-debriefing.png`
- `temp_work/campaign-validation-2026-10-15/playthrough-1792088801065/castle-entry-earned.json`
- `temp_work/campaign-validation-2026-10-15/playthrough-1792088801065/live-commands.jsonl`
- `temp_work/campaign-validation-2026-10-15/early/castle-normal-input-route.md`
- `temp_work/campaign-validation-2026-10-15/playthrough-1792088801065/castle-completed-2026-10-18.json`
- `temp_work/campaign-validation-2026-10-15/playthrough-1792088801065/graveyard-entry-earned-2026-10-18.json`
- [Earned Graveyard routes and evidence](../temp_work/campaign-validation-2026-10-15/late/graveyard-route/earned-replay-refinements-2026-10-18.md)
- [Earned Water and Air roundtrip evidence](../temp_work/caves-full-input-2026-10-18/earned-water-air-completion-2026-10-18.json)
- [Earned Earth roundtrip evidence](../temp_work/caves-earth-2026-10-18/earned-earth-completion-2026-10-18.md)
- [Earned Fire roundtrip evidence](../temp_work/caves-fire-input-2026-10-18/earned-fire-completion-2026-10-18.md)
- [Earned Caves finale, Tower and every ending/recovery boundary](../temp_work/campaign-finale-2026-10-18/earned-finale-report.md)
- [Earned final outro events and completed state](../temp_work/campaign-validation-2026-10-15/playthrough-1792088801065/earned-outro-complete-2026-10-18.json)
- [Completed campaign save](../temp_work/campaign-validation-2026-10-15/playthrough-1792088801065/earned-campaign-completed-save-2026-10-18.json)
- [Menu after the complete outro](../temp_work/campaign-validation-2026-10-15/playthrough-1792088801065/earned-campaign-menu-2026-10-18.png)

## Graveyard chapter traversal

The separate Graveyard fixture completed its physical puzzle route and actual
exit. It started with declared chapter access and incoming skill mask 3; its
18 October continuation resumed an ordinary saved checkpoint with 15 potions.
The route covered the painting controls and exploding entry, triggered spiders,
enemy-gated plank passages, chapel, hedge maze, rotary bridges, the three moving
rafts, temporary ferries, vertical platforms and the shootable secret bridge.
At 29 potions the fairy correctly withheld SuperSkippie; after collecting 31,
normal dialogue granted it. Repeated jump inputs climbed the authored 72-unit
crates. The chapel lift, lower corridor, high-box checkpoint, Brutus, mirror and
debriefing then led into the Caves through the ordinary continue action.

The chapter finished with 32/40 potions, 28/59 enemies, 1/4 secrets, health 4 and
one life. Deaths and ordinary recovery-menu loads are retained. This proves the
required chapter route is traversable, but does not claim every collectible or
a continuous five-level run from this fixture. Its mirror count reflects its
declared isolated setup, not the earned campaign above.

Evidence and reusable input routes are in
[`verified-route-2026-10-18.md`](../temp_work/campaign-validation-2026-10-15/late/graveyard-route/verified-route-2026-10-18.md).

## Graveyard optional secrets

All four authored secrets now have physical ordinary-input proof across the
explicitly separate runs below. This does **not** turn the earned campaign's
0/4 debriefing into a 4/4 result.

- The early courtyard grave lift, lower potion/bags and working return lift
  were checked from an unchanged earned-entry save, without health loss.
- The shootable platform bridge secret was reached in the chapter traversal.
- The timed lower-corridor door, heart container/potion/bags and inside return
  button were checked from an unchanged earned pre-boss recovery point.
- The hidden grave buttons, frog encounter, Easter-egg room, four lighting zones
  and return portal were checked from a retained chapter-fixture recovery save.
  SuperSkippie had been earned in that fixture. Its ordinary failed approaches,
  deaths and reloads are recorded, not removed from the evidence.

See [secret routes and evidence](../temp_work/graveyard-secrets-2026-10-18/verified-secrets.md)
for the precise fixture boundaries and results.

## Caves and Tower final encounters

The isolated Caves encounter started with the declared final-fairy approach,
30 potions, incoming skill mask 11 and three mirrors. Normal dialogue granted
BIG BENG. Ordinary charged shots and strafing defeated Max; normal jumps crossed
the trenches, collected mirror four and reached the actual Tower transition.
Health lost in combat was replenished by ordinary heart pickups.

The Tower encounter preserved the resulting inventory and placed the test player
at the declared upper arena. The successful attempt activated all five mirror
stands, collected the local final mirror and defeated the witch with two fully
charged shots. It retained full health. The unskipped authored ending completed
approximately 64.94 game seconds later, followed by the debriefing, the entire
55.047-second original outro movie, and return to the menu. No script VM error or
unsupported command was reported. The initial failed attempt remains recorded.

These checks prove the final encounters and ending sequence are usable with
normal controls. Their declared starts do not establish the preceding chapters;
separate physical route checks are described below.

Evidence:
[`validation-summary-2026-10-18.json`](../temp_work/caves-input-encounter-2026-10-15/runtime/validation-summary-2026-10-18.json)
links fixture declarations, inputs, combat events, ending captures and file hashes.

## Caves branch and Tower ascent checks

The separate Caves chapter fixtures start at the native entrance with declared
incoming skill11/mirror3, zero potions and normal health/lives. Their results
must not be combined into a fictitious single save or continuous playthrough.

- **Water:** rising basin/crates, all seven waterfall gaps, draining staircase,
  three altar controls and guard encounters passed. The return crossed the
  waterfalls; low-health deaths near the entrance spider remain recorded.
- **Air:** fan switch sequence, moving lifts/ferries, upper secret, paired
  winds and lower-pit updraft recovery, three guards and altar controls passed.
  Eleven potions and the secret heart container were earned. An ordinary save,
  browser restart and Continue restored RedCat aboard moving platform02 and
  resumed its carry behavior. The return crossed the ferries, fan walkway and
  spring route back to the hall without a death, ending with health10/12.
- **Earth:** rolling-stone ramp, exploding crate/wall, all twelve moving pillars,
  three rotation controls, three altar controls and return to the hub passed.
  Ten potions and the secret life were earned. Three ordinary deaths preserved
  progress; no game-over or state edits occurred after the fixture import.
  [Earth route and evidence](../temp_work/caves-earth-2026-10-18/verified-earth-route.md).
- **Fire:** lava stones crossed both ways; rotating-arm platform and four corner
  controls passed. F5/F9 restored all four lowered bridges, followed by physical
  traversal of their restored collision. Secret, three guards/altar buttons,
  rotated passages and return to the hub passed. Ten potions were earned.
  Earlier failed lava jumps and the declared unchanged-checkpoint retry remain
  explicit. [Fire route and evidence](../temp_work/caves-fire-input-2026-10-18/verified-fire-route.md).

Each branch enabled its own altar beam and advanced unlock_max once in its
separate fixture. The integration tests cover the combined four-altar gate;
the earned campaign subsequently completed all four routes together, reached
unlock_max4 through ordinary play, defeated Max and continued through Tower.

Tower's separate ascent imported the unchanged carried Tower-entry save from
the declared late-Caves encounter. It followed the spiral staircase, fought the
entrance guards, collected four health pickups, used the authored portal,
reached the upper checkpoint and opened the witch-room doors. All 141 ordinary
waypoints are retained, ending with health8/lives3 and no death or reload.
The boss was not repeated in that ascent check. A separate unchanged
upper-arena-save continuation then checked **both optional upper bonus rooms**,
all four outbound/return portal triggers and all 32 loose pickups (22 money
bags, eight health pickups, a heart container and a life). It returned to the
witch approach with health12/12 and four lives, leaving the witch inactive.
No damage, death or reload occurred after the fixture import.
The earned campaign later repeated the ascent, both bonus-room routes and all
32 pickups before completing the Witch and ending as recorded above.
[Tower ascent evidence](../temp_work/tower-ascent-2026-10-18/verified-ascent.md).
[Tower bonus-room evidence](../temp_work/tower-bonus-2026-10-18/verified-bonus-rooms.md).

## Puzzle, checkpoint and reload integration

The focused current-source scenarios passed for:

- Castle button callbacks, mid-motion restoration, eight secret states, the
  19/20-potion fairy gate, and the boss/mirror/exit script chain.
- Graveyard grave-button doors, chapel floor-button/platform movement, maze
  death reset and old-save repair, painting solution and entry explosion,
  three ceiling-spider activation/descent, and solved-save restoration.
- Caves four altar triplets, counted once each before opening the final gates;
  four fire bridges and three rotating-passage collision poses after reload
  and death; all six checkpoint locations and solved-state preservation.
- Graveyard/Caves secret discovery once across death/reload; 29-potion denial
  and 30-potion upgrade grant, retained without spending the collected potions.
- Tower mirror rise/placement snapshots, the last-mirror prerequisite, and
  an ending save restored partway through to one final completion.

All referenced imported object bindings resolved in Graveyard (369), Caves
(737) and Tower (283). Four outdated test assumptions were corrected without
changing gameplay: current music state shape, an unplaced dormant enemy fixture,
intentional charge cancellation in dialogue, and a descending spider blocked
by RedCat standing directly beneath it.

See the retained
[late-level verification scope](../temp_work/campaign-validation-2026-10-15/late/verification-scope.md)
and `tests/campaign-late-progression.test.mjs`. Only relevant suites/scenes were
run, not a blanket repeat of all previous tests.

## Fixes found during the playthrough

### Castle fall-pocket recovery

A failed jump behind the Castle warehouse crates left RedCat in a pocket where
a small sideways movement was possible but walking/jumping out was not. The
recovery code previously treated that small movement as an exit. It now searches
a bounded local volume before returning to a revalidated higher position he
already reached. Corridors, corner turns, jumpable lips and ordinary doors retain
their collision behavior. All **27 movement-recovery tests passed**, including
the actual Castle collision geometry and crate pose.

The corrected recovery class was loaded into the isolated running campaign
without editing its state. Forward input restored the already reached shelf,
with health and inventory unchanged; the next crate/platform crossings then
succeeded through normal controls. The live recovery predates the final downward
escape and closed-door guards, which were verified by focused regressions
including the actual Castle geometry. Those guards prevent the fallback from
bypassing a closed door. See [movement recovery](movement-recovery.md)
for the implementation limits and retained evidence.

### Preserve living saves after death

The first earned Caves attempt demonstrated that F5 after death could replace
its usable latest save with a dead state. The recovery history already rejected
dead snapshots, so the ordinary recovery menu remained usable. `saveGame` now
rejects non-positive health before snapshot construction or either storage
write. Manual requests explain that saving must wait for RedCat to return;
silent menu, quit, automatic and unload requests preserve the living save.
A dead world can still be retired when changing players. Failed saves of a
living world continue to block a player change.

The focused browser regression reproduced the overwrite before the change and
passed afterward, covering actual F5, pause Save, automatic capture, return to
menu, unload, quit, player changes, a storage failure, and a legacy death save
that respawns and then saves normally. Existing death-animation saves still
load. The fixture uses deliberate test-state setup and is storage evidence,
not an earned campaign route. Its files, profiles and before/after reports are
retained in [the save-fix report](../temp_work/death-save-2026-10-18/verified-fix.md).
No broad test rerun was performed.

### Release completed browser audio players

Reviewing the initial outro failure found a separate concrete cleanup gap:
ordinary HTML audio records were paused and disconnected when released, but
their media sources were left loaded until browser garbage collection. They
now remove their source and call `load()` at the same existing release points.
Custom buffered voices keep their own disposal path. Active playback, pause,
replay delays, music scheduling, fades and gains are unchanged.

All **nine focused lifetime tests passed**, including the configured buffered
`ICoinL.wav` pickup and its complete natural playback. An isolated real-browser
probe retained all 66 JavaScript audio elements while Chromium reported **66
player creations and 66 matching destructions**. Every released element reached
`NETWORK_EMPTY`/`HAVE_NOTHING`; the unchanged outro then started normally.
This proves deterministic player cleanup, not that the earlier campaign failure
was conclusively caused by a player limit. See [audio lifetime evidence](audio-media-lifetime.md).

This small audio change followed the completed campaign and received those
focused checks; the campaign was not rerun afterward. The retained
[final file/evidence summary](../temp_work/campaign-validation-2026-10-15/final-validation-summary-2026-10-18.json)
compares 115 source files with the campaign manifest and identifies `src/audio.js`
as the sole subsequent source change at that point on 18 October. Later streaming,
menu and graphics changes are outside that manifest comparison. No build was
created during this campaign pass.

## Source release checks and remaining validation

[Source release checks](release-source-validation-2026-10-15.md) cover the moved
RC_SHOVE_TEST launch, 0.9.9 About text and package schema, Linux source window,
fullscreen, separate player saves, emulated controller/touch input and focused
Graveyard streaming/activation measurements. The browser source also loaded at
`/redcatspookkasteel/` with assets and ranged audio/video requests confined to
that prefix; retained evidence is in
`temp_work/campaign-validation-2026-10-15/web-prefix/`. This is a local source
server check, not a deployed Nginx test.

Subsequent [1.0.1 release verification](../temp_work/release-1.0.1-2026-10-20/release-verification.json)
records all six desktop variants built and published, with matching archive
contents and uploaded checksums. The
[packaged Linux check](../temp_work/release-1.0.1-2026-10-20/smoke-KDiwvP/report.json)
covered the menu, Help, settings, first-level startup, save export and reload on
Xvfb/SwiftShader. These later checks supersede the earlier package-generation
TODO; they do not extend this campaign's recorded source/hardware scope.

Still required before claiming complete current-release validation:

1. Complete a current-release campaign and deployed-browser check after the later
   streaming, menu and graphics changes. Building the packages and exercising
   the first level do not establish a full campaign on those packages.
2. Test actual Windows/macOS/ARM/Android hardware, physical controllers/touch and
   sustained low-end performance. Simulated inputs and development-machine CPU
   measurements do not replace those checks.
3. Repeat long-session media playback on the intended release runtime. The
   initial outro player-creation failure recovered after a normal reload; its
   cause is not proven. The subsequent audio-resource cleanup passed focused
   checks, but does not establish that every target can finish the movie without
   that retry.

All authored secret routes have coverage across the separate checks above, but
the completed campaign itself found seven of thirteen. This pass does not claim
every collectible/enemy, every difficulty or every possible ordering, nor a
frame-for-frame comparison against the original executable.

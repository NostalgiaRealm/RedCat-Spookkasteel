# Late campaign source validation — 15 October 2026

No packages were built. All browser profiles and evidence belong to this
directory, separate from the user's save. This report distinguishes script
integration scenarios from movement through the rendered level.

## Script integration scenarios

`tests/campaign-late-progression.test.mjs` uses the real imported Davi programs,
motion markers and Gameplay snapshot/restore code. It calls normal interaction
entry points directly at isolated fixtures. Consequently these tests establish
the callback/state/save chain, **not physical reachability or a no-cheat campaign**.

- Caves: all four altar button triplets increment `unlock_max` once, remove the
  matching barriers and unlock the final paired doors only after all four.
  Reloading during a button's motion does not lose or duplicate its result.
- Caves: the four fire bridges and three rotating-passage buttons preserve
  rendered and collision poses during and after reload; death retains completion.
- Caves: all six save pillars set the correct authored checkpoint, survive reload
  and respawn there without losing a solved bridge's collision pose.
- Graveyard and Caves: all four secret callbacks in each level count once across
  death/reload.
- Graveyard/Caves: the fairy denies the upgrade at 29 collected potion callbacks,
  accepts at 30, enables skill 8/4 respectively, and does not spend the potions.
  These isolated checks do not establish that 30 bottles are reachable.
- Tower: the first four mirror placements preserve their mid-rise state; the
  fifth requires the local last mirror, then starts the authored witch sequence.
  A direct boss-destruction fixture starts the native ending, and reloading part
  way through reaches final completion once. This is **not a combat victory**.

All original object bindings resolve in the current scripts: Graveyard 369,
Caves 737, Tower 283. No missing object references were found in this audit.

## Focused existing coverage

- Graveyard paired grave-button doors and mid-opening reload.
- Graveyard maze death reset, intermediate hedge phases and old-save repair.
- Chapel floor/platform contact activation and physical collision movement.
- Painting solution `[3,1,0,3,2]`, entryway destruction, three ceiling spiders,
  descent and solved-save restoration.
- Upgrade persistence and compiled dialogue callbacks; boss end-sequence/music.

Four obsolete expectations were corrected, without changing gameplay: current
music state includes `mode`; the action-music fixture must use an actual active
enemy rather than an unplaced dormant spider; dialogue intentionally cancels a
charged shot; a descending spider cannot pass through RedCat's head, so the
landing fixture now lets him stand beside its landing position.

Logs are retained alongside this report. Focused rechecks passed after these
fixture corrections; a whole-suite rerun was not performed.

## Input-driven Graveyard chapter fixture

`graveyard-driver.cjs` runs the source in an isolated browser profile. Initial
menu progress grants access to the Graveyard and its expected incoming skill
mask 3. After that setup, movement, jumping, shooting, touch buttons and pickups
are driven by ordinary input. No teleport, no-clip, health, potion, skill,
puzzle-counter or object-state writes are used during traversal.

`navigation-height.js` is a read-only collision route planner. It never moves
actors or changes objects; planned waypoints are followed through the normal
keyboard/mouse-input helper. Its presence is test navigation assistance, not a
game feature.

Progress and limitations are recorded in `graveyard-route/commands.jsonl` and
subsequent notes. This isolated chapter run is not represented as a fresh
five-level campaign playthrough.

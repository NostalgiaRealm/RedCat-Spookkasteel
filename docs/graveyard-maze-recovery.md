# Graveyard maze recovery after death

This is an intentional change from the original game. An unfinished attempt at
the moving-hedge maze in Het Kerkhof resets when RedCat respawns. A completed
maze remains completed.

The original level has five one-use progression triggers, four one-shot hedge
controllers and a hedge door. Its World has no player-respawn script handler.
Previously, respawn cleared trigger contact flags but retained the consumed
trigger counts and moved hedges. Returning from the save pillar could therefore
trap RedCat in the entrance pocket with both routes closed.

`src/graveyard-maze.js` resets the progression triggers to their authored enabled
states, clears their counters/contact flags, and restores the hedge timelines
and door pose. It applies the restored pose to the shared rendering/collision
transform map immediately. Motion reset uses stop/seek, with no movement events
or door/button callbacks. This also works for death midway through a hedge move.

The final button only commits maze completion after its one-second press
finishes. A fatal hit cancels an unfinished press immediately: otherwise its
timeline could start the exit cutscene during the death animation. Restoring an
older death save cancels that same pending callback before time advances.

Completion is recognized by the green lamp, advanced/playing/finished exit
sequence, or open exit. `motionStarted` alone is deliberately insufficient:
older saves can infer it even for a controller that never started. Once
committed, the original exit sequence continues and stays solved. It includes
changes to the church doorway, so rewinding it would affect unrelated progress.

The independent repeating `heg6` obstacle keeps its phase. The exploding crate
and `heg8` secret, defeated enemies, pickups, score, potions, checkpoint, painting
puzzle variables and other level mechanisms retain their state.

## Existing stranded saves

After saved motion poses are restored, loading recognizes the specific blocked
entrance pattern: RedCat is inside the original entrance trigger's actual brush,
the entrance and closing triggers are already consumed, hedge one is settled
raised, the inner door is settled closed, and completion has not begun. Only
this pattern is repaired; viable saves farther inside the maze, moving-door
states and solved mazes retain their progression. No save-format change or
manual save editing is necessary.

## Focused verification

Run from the project directory:

```sh
node --test tests/graveyard-maze-respawn.test.mjs
node tests/graveyard-maze-respawn-scenes.mjs /path/to/copied-adventure.json
```

The 12 logic tests cover every progression stage and moving-hedge state,
repeated attempts, native death/respawn timing, pending/committed buttons,
save/load, preservation of other progress, and other-level isolation.

The scene test uses an isolated browser profile under `current_work/`. It loads
a copy of the reported save, reproduces both blocked routes, verifies automatic
load repair and ordinary entrance contact, checks the full player collision
hull can use the reopened passage, and exercises the real application death,
checkpoint respawn and save reload. It never edits the active game's profile.

Evidence, the copied October 5, 2026 save, original-script audit, test logs,
before/after pictures and collision measurements are retained in
`current_work/graveyard-maze-respawn-2026-10-05/`. No package build was made.

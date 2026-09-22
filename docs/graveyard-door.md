# Graveyard paired-door script regression

The closed door reported in the first graveyard courtyard is the paired brush
door `lastdoor_left` / `lastdoor_right` (BSP models 9 and 10). Both original
entities have `IsInitiallyEnabled=0` and `TouchToOpen=0`. They are intended to
open through the puzzle script, while direct player use remains disabled.

The original level data and compiled `lvl02a` Davi program define this chain:

1. `dknopa` completes its button motion and calls `dubbeltrigger.Trigger`.
2. `dknopb` completes its button motion and calls the same trigger.
3. `dubbeltrigger` has `MinTriggerTimes=2` and `MaxTriggerTimes=2`. Its compiled
   `CommandOnEnter` handler starts at DSO offset 6467. It calls
   `lastdoor_left.Open`, enables the two bats and activates the door camera.
4. The left door's compiled `DoorBeforeOpenCommand` at DSO offset 12469 calls
   `lastdoor_right.Open`. Both original motion clips rotate their respective
   leaves 90 degrees over two seconds, leaving the center of the doorway clear.

The VM executed that chain correctly, but `Gameplay.setDoor` discarded every
request for a disabled door. Consequently the counter reached two, the bats
activated, and both door clips remained at time zero. Explicit scripted
Open/Close now works independently of the automatic interaction enable flag.
Disabled objects still skip the gameplay touch/use loop, and locking and
duplicate-transition checks remain in place.

`tests/graveyard-door.test.mjs` exercises the actual compiled callbacks, paired
rotation and BSP passage, saving after the first button, saving during the
opening motion, and rejection of direct player interaction with a disabled
door. `tests/graveyard-scenes.mjs` presses both original buttons through the
world update, captures the closed/open states and walks RedCat through the
opened doorway. No original level, motion or Davi data is modified.

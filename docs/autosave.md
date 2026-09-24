# Automatic saves and recovery points

The game keeps the latest complete adventure in `redcat.save.v1` in local
application/browser storage. **Verder spelen**, **Opgeslagen avontuur laden**,
and F9 still load that current save. Automatic saving runs every 60 seconds of
active play; manual saves, checkpoints, pause, completion, and exit also save.

## Recover from a deadlock

Choose **Eerder opgeslagen avontuur laden** from the main menu or pause menu.
The menu offers **2 minuten geleden**, **5 minuten geleden**, and **10 minuten
geleden**. These are approximate minutes of **playing time**. Menus, pauses,
loading and time while the game is closed do not age the history. In-game
cutscenes do count. Each available button shows its level and original save date.

The game captures a recovery point immediately when the first level loads and
then once per minute of playing time. Until enough history exists, the relevant
buttons are disabled. Recovery history starts with this source update; older
checkpoints cannot be reconstructed from the previous single save.

A recovery point contains the same complete snapshot as an ordinary save:
position, inventory, health, difficulty, enemies, scripts, puzzle state, moving
platforms, checkpoint, camera state, and active effects. Loading one restores
that state and makes it the current save. Existing unlocked levels and earned
permanent abilities are preserved, as with ordinary loading. Loading a recovery
point does not rewind the history clock or immediately delete the other
available recovery points, so an earlier point can still be tried if necessary.

## Retention and storage

Recovery saves use IndexedDB (`redcat-recovery-saves`, store `history`) rather
than putting eleven large snapshots in localStorage. A single transaction
atomically replaces the rolling history. It retains at most eleven real minute
checkpoints: the latest checkpoint plus ten preceding minutes. Older checkpoints
are discarded. The menu selects the 2-, 5-, and 10-minute points from this
window; intermediate checkpoints are needed to maintain those three choices as
play continues.

Minute buckets avoid removing the ten-minute option because of a few
milliseconds of frame timing jitter. Ages are relative to the newest completed
minute checkpoint, so an option can be less than a minute older than its label
in actual playing time. A delayed frame creates one real snapshot, never a
series of invented intermediate saves. A missing minute is shown as unavailable
instead of silently loading a much older state under the wrong label.

Frequent manual or pause saves cannot replace older minute checkpoints or
postpone the next recovery point. Dead-player states are excluded from recovery
history. History persists when the game is closed and reopened. Browsers,
profiles, hosting origins and desktop apps have separate storage.

A failed history write leaves the previous history intact and retries after
five seconds of active play. The latest save remains independent. Storage errors
are reported; clearing browser/app storage also clears recovery points.

## Starting a new adventure

Starting a new adventure or a chapter from the main menu warns before replacing
the current adventure **and its recovery history**. Cancel, Escape, or the
initially focused cancel button leaves both untouched. After confirmation, the
new adventure replaces them only after its assets and scripts load successfully.
Ordinary campaign transitions, restarting a level, and loading saves retain the
rolling history. Chapter unlocks remain available.

The automatic-save timer uses elapsed real playing time, independent of the
capped physics timestep. A successful ordinary save resets its minute timer;
recovery capture has its own minute schedule, so manual saving does not starve
history. Source save-format markers are retained to read existing adventures;
they are independent of the removed game release numbering.

## Focused verification, without builds

```sh
node --test tests/recovery-saves.test.mjs
node tests/recovery-menu-scenes.mjs
```

The unit tests cover retention, minute selection, missing history, repeated
manual saves, saved-state isolation, restart persistence, dead snapshots,
failed writes, and new-adventure resets. The browser check uses real IndexedDB
and menu controls to restore complete snapshots, checks paused/offline history,
and checks the dialog at desktop and mobile sizes.

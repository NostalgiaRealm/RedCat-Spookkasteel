# Automatic saves and recovery points

The game keeps the latest complete adventure in `redcat.save.v1` in local
application/browser storage. **Verder spelen**, **Opgeslagen avontuur laden**,
and F9 still load that current save. Automatic saving runs every 60 seconds of
active play; manual saves, checkpoints, pause, completion, and exit also save
while RedCat has positive health.

With zero health, including during the death animation or after the final life,
these actions preserve the last living save and the recovery history. F5 and
the pause menu's Save button explain that the current state was not saved;
automatic and exit saves stay quiet. Once normal checkpoint respawn restores
health, saving is available again. This protection was added after an actual
Caves playthrough exposed F5 replacing a usable save with a dead state.

Existing saves from older versions remain loadable. A saved death animation
with remaining lives resumes that animation and its normal checkpoint respawn.
An older dead save without a resumable death animation starts its saved level
again through the existing load behavior. The save guard does not rewrite or
delete these older files.

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
postpone the next recovery point. Dead-player states are excluded from both new
latest saves and recovery history. History persists when the game is closed and reopened. Browsers,
profiles, hosting origins and desktop apps have separate storage.

A failed history write leaves the previous history intact and retries after
five seconds of active play. The latest save remains independent. Storage errors
are reported; clearing browser/app storage also clears recovery points.

## Starting a new adventure

Starting a new adventure or a chapter from the main menu warns before replacing
the current adventure **and its recovery history**. With an existing save,
selecting an unlocked chapter reveals **Level Spelen** without opening the
warning. Click **Level Spelen** to start the selected chapter or **Start opnieuw**
to start a new adventure; these actions open the warning. Cancel, Escape, or the
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
node tests/death-save-scenes.mjs
```

The unit tests cover retention, minute selection, missing history, repeated
manual saves, saved-state isolation, restart persistence, dead snapshots,
failed writes, and new-adventure resets. The browser check uses real IndexedDB
and menu controls to restore complete snapshots, checks paused/offline history,
and checks the dialog at desktop and mobile sizes.

The focused death-save browser test failed before the fix when actual F5
overwrote the living save, then passed after the fix. It checks byte-identical
latest-save preservation, unchanged recovery history and rejection before
snapshot/storage for F5, pause Save, silent pause/menu, due autosave/recovery,
beforeunload and confirmed quit. It also covers switching away from a dead
world, blocking a profile switch after a living save's storage failure, loading
an explicit legacy death-animation save, and saving the normal living respawn.
This test uses isolated storage fixtures; it is not campaign-completion
evidence. See the [scoped verification notes](../temp_work/death-save-2026-10-18/verified-fix.md)
and [passing browser report](../temp_work/death-save-2026-10-18/run-1792319076227/report.json).
No builds or broad test reruns were performed for this fix.

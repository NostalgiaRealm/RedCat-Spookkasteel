# One-minute automatic saves

The portable game saves the complete adventure to `redcat.save.v1` in its local
application/browser storage every **60 seconds of active play**. This is an
intentional addition to the original game. Continue / F9 loads that save,
including the current position, health, items, difficulty, scripted puzzle and
enemy state, checkpoint and motion-controller state. No separate save selection
is needed.

Starting a new adventure (or starting a chapter from the menu) asks for
confirmation when a valid adventure is already saved. The Dutch warning states
that the existing adventure will be overwritten. **Annuleren**, Escape, or
Enter on the initially focused cancel button keeps the current save untouched.
Only the explicit start button proceeds. Continue, quick-load and ordinary
campaign transitions do not show this warning. Confirmation does not delete
the old save in advance; the existing saving flow replaces it after the new
level loads successfully. Earned chapter access is retained.

The timer uses real elapsed time, independent of the capped physics timestep.
Menus, loading, paused play and movies do not advance it; in-game cutscenes do.
Existing manual saves, checkpoints, pause, level completion and exit saves
remain available. A successful save resets the minute, and loading a level or
save starts a fresh minute. A long frame produces one current snapshot, not a
burst of obsolete saves. Failed storage writes retain the error notification
and retry after five seconds instead of every frame.

This limits unsaved active play to about one minute under normal operation;
it cannot guarantee recovery if local storage is unavailable or deleted.
Different browser profiles/origins and the desktop app have separate storage.

Focused verification: `node --test tests/autosave.test.mjs` and
`node tests/campaign-settings-scenes.mjs`. No release build is required.

`node tests/new-adventure-warning-scenes.mjs` is the focused browser check for
the overwrite warning and its cancellation/confirmation behavior.

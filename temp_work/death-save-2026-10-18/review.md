# Scoped review of the death-save guard — 2026-10-18

Reviewed the exact diff against `main-before.js`, the focused browser test and
its before/after reports, and the relevant callers. No additional test runs or
source edits were made for this review. No blocking regression was found.

## Callers and ownership

- `saveGame` checks profile ownership and switching before the new health guard,
  then rejects before `adventureSnapshot`, `store`, recovery capture, continue
  refresh or autosave reset. It cannot replace a usable save with the observed
  health0/lives0 state. The existing recovery layer also rejects dead snapshots.
- Every requested ordinary save entry point uses this function: F5, pause Save,
  pause, return to menu, settings, quit, beforeunload and the playing-loop
  autosave/recovery path. The focused browser checks the consequential paths;
  settings and automatic game-over pause are source-inspected shared callers,
  not separately claimed browser scenarios.
- Skipping a dead world's save in `selectPlayer` is necessary because its
  expected false result must not be mistaken for a storage failure. The
  remaining profile-switch path still saves player options, waits for pending
  recovery writes, loads the next history, commits the selected ID and disposes
  the old world. Living save failures still throw before any ownership switch.
  The browser check confirms both branches and the new profile's empty save.
- Quit still drains the existing pending recovery capture before closing. A
  refused dead save leaves that promise intact, so it cannot drop an earlier
  in-flight living capture. The browser check confirms actual quit calls close
  and leaves storage unchanged; delayed in-flight capture timing is covered by
  existing profile lifecycle design/tests, not rerun here.

## Death, checkpoint and start boundaries

- The guard depends on current health, not life count. It protects an unfinished
  death animation with lives remaining as well as game over. It does not alter
  gameplay reactions, checkpoint coordinates, consumed lives or health.
- Normal `respawn()` restores health before emitting the checkpoint relocation.
  Saving is then eligible immediately, including during the protected respawn
  animation. The focused legacy fixture reaches that normal event and saves
  health10/lives2 at the authored checkpoint plus its one-unit placement offset.
- Load validation and `loadAdventure` are unchanged. Older death saves with a
  resumable reaction and lives remaining still resume; older terminal dead
  saves retain the existing level-restart load behavior. This is intentionally
  distinct from the new-save eligibility policy.
- A confirmed new adventure still constructs a fresh positive-health Gameplay,
  waits for assets/scripts to load, captures its initial snapshot, resets the
  recovery timeline, and writes that living initial save. The separate
  `resetRecovery` initial-save path is therefore not blocked by the previous
  world's death. New-adventure cancellation/loading-failure behavior was
  source-inspected and unchanged; the full warning/reset scenario was not
  rerun. The focused test starts new Forest worlds and verifies subsequent
  living saves, but does not claim the whole confirmation flow anew.

## Remaining limits

- The pre-existing savepoint event immediately displays “Je avontuur is
  opgeslagen” before its queued `saveGame(true)` result. A storage failure, or
  death later in that same frame before the microtask, can leave that message
  optimistic even though the latest save is preserved. This is an existing
  feedback-ordering concern; no same-frame checkpoint/death runtime reproducer
  was established in this review and no additional source change was made.
- Old already-dead latest saves are not repaired or deleted by the guard. The
  unchanged load/recovery behavior handles them. Other unsaveable world states
  such as hazardous but still living positions are outside this health-specific
  fix; recovery history remains available for those cases.
- Browser closure is stubbed in the regression only to inspect storage after
  the real quit handler. Actual OS/application shutdown and durable disk flush
  are not claimed by that test.

Updated the existing `docs/autosave.md`, `docs/player-profiles-native.md`, and
`docs/player-reactions-and-projectile-contact-native.md` to explain these save
and compatibility semantics with links to the retained focused evidence. No
release/build or earned-campaign documentation owned by the parent was edited.

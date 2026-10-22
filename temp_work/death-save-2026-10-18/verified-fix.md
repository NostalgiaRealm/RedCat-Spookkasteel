# Preserve living saves after death — 2026-10-18

The genuine Caves attempt exposed a latest-save bug: pressing F5 with health0
and no remaining lives replaced the last living save. The rolling recovery
history already rejected dead saves, but `src/main.js` wrote the latest save
before asking the recovery history to capture it.

`saveGame` now rejects health<=0 before constructing a snapshot or writing
either storage system. Manual save requests show a short Dutch explanation;
silent pause/menu/quit/autosave/beforeunload requests remain quiet. The guard
also covers death animations with remaining lives. After normal respawn restores
positive health, saving works again. Loading old death-animation saves remains
unchanged.

`selectPlayer` skips the unnecessary save of a dead world, allowing that world
to be retired without replacing its previous save. A failed save of a living
world still blocks the switch. The normal pending-recovery flush and storage
ownership behavior are preserved.

## Focused verification

`node tests/death-save-scenes.mjs` uses a new persistent browser profile and
source server on4582 for every run, retained under this directory. This is an
explicit storage regression fixture: it starts Forest, suppresses unrelated
scene/enemy interactions, seeds one life and score markers, and applies normal
game damage to enter health0/lives0. It is not campaign or non-cheat traversal
evidence. Profile operations, real keyboard F5, menu clicks, and save handlers
run through the application. The browser close action is stubbed solely to
allow inspecting storage after the actual quit handler. Save/storage observers
forward their original calls. An explicit older death-save fixture later
exercises compatibility independently of the new-save policy.

Before the source change, run `run-1792318998280/report.json` fails at the first
F5 assertion: latestUnchanged=false, currenthealth0,lives0. The old path makes
one snapshot, one recovery capture attempt and one localStorage save write.
Recovery history itself stays unchanged. This directly reproduces the genuine
campaign failure in an isolated profile.

After the change, final run `run-1792319076227/report.json` passes:

- F5 while dead and the pause menu's Save button preserve byte-identical living
  latest-save data and unchanged recovery history, with zero snapshot/capture/
  write calls. Manual feedback reports that saving was refused.
- Silent direct save returnsfalse. A real playing frame advances the save
  clocks by more than60seconds, proves recovery capture is due, and runs the
  automatic save paths while the death animation advances only its normal
  capped physics step. Latest and recovery data stay unchanged, with no save
  serialization/write and no replacement toast.
- Actual Escape pause, return-to-menu, beforeunload event and confirmed Quit
  have the same preservation result. The quit handler reaches the stubbed close
  exactly once.
- Selecting another profile through the player menu while dead succeeds,
  retires the old world, preserves the old living save, and leaves the new
  player's save absent and recovery history empty.
- A simulated localStorage quota failure for a living player's save prevents
  switching, keeps that world/profile selected and shows the existing failure
  message. Removing the storage fault permits switching.
- An explicitly seeded older save with health0, lives2 and death age0.4 loads
  with that exact reaction intact. Normal frames complete its death animation
  and respawn at the authored checkpoint with health10/lives2. F5 then saves
  the living respawn state and shows normal success feedback.
- Browser page errors are empty. Syntax checks passed for `src/main.js` and the
  minimally adjusted legacy lifecycle scenario.

The intermediate run `run-1792319020316` passed the eight save-path checks but
stopped because its test profile name exceeded the existing twelve-character
limit; shortening only the fixture name fixed that test setup. Run
`run-1792319033157` then passed fully. The final rerun above added an explicit
assertion that the automatic save clocks really advanced and recovery capture
was due. All runs and profiles remain available.

## Files and scope

- `src/main.js`: save eligibility guard and dead-world profile-switch handling.
- `tests/death-save-scenes.mjs`: focused browser regression described above.
- `tests/player-lifecycle-scenes.mjs`: minimal fixture adjustment to construct
  and store an explicit old death-animation snapshot. It no longer asks the
  newly guarded normal save API to create that legacy state. Its existing
  compatibility assertions are unchanged; this larger scenario was not rerun.
- `main-before.js`, `player-lifecycle-before.mjs`: exact pre-edit copies for
  reviewing this change separately from earlier uncommitted work.
- Each run retains its JSON report, fresh browser profile and screenshots.
  The initial F5 screenshot captures the unrendered/black fixture startup;
  storage assertions and JSON are the evidence for that case. The later living
  respawn screenshot visibly shows normal save success.

No build, website copy, personal-save access or broad test rerun was performed.
The source server/profile used for the regression was stopped after each run.
The earned campaign's live runtime was not controlled by this agent during this
fix; the Caves agent was notified to reload the changed source from a living
save at its next safe point.

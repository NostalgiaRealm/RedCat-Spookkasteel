# Replayed-level native Snelstart: campaign/save design review

Read-only review on 2026-10-05. Source inspected: `src/campaign-progress.js`, `src/main.js`, `src/script-host.js`, `src/recovery-saves.js`, `src/touch-intro-hint.js`, and campaign/save documentation/tests. No runtime edits or tests were performed for this review.

## Separate proof of play from access

`highestUnlocked` must not decide whether introductory/tutorial script branches are skipped. Completing level N unlocks N+1 before that next level has been entered, and the unlock-all cheat sets it to 4 without any play. Maximum inventory is also not play evidence.

Store a separate, bounded normalized set/array of the five canonical played level IDs in the existing progress record. Reject invalid IDs, deduplicate, order canonically, and preserve it through `readCampaignProgress`, `earnCampaignSkill`, and `completeCampaignLevel`. A level is safely known to have been played after a successful load into a playable session or from a validated existing adventure snapshot of that level. Marking completion may also mark that same level, but must not mark its successor.

Compute the fresh session's native `gameType` from the previous history before adding its level to that history. Commit history only after assets/scripts/render residency initialize successfully, in the existing post-load commit region. Cancelling the overwrite warning, hovering/selecting a card, unlock cheats, and failed loads must not count as play.

## Session mode must survive saves

A first-play session is mode 0 for its entire lifetime. Marking its level played for future replays must not change that currently running session's `GetGameType` result. Persist the selected mode in the session snapshot and restore that exact normalized 0/1 value, including recovery saves. Do not derive mode anew from campaign history when continuing.

This is essential even if the opening cutscene has already run: later tutorial/ability handlers can ask `GetGameType` after saving/loading. The full original script branches should remain in control; do not implement replay by indiscriminately skipping every cutscene or fast-forwarding all level scripts.

The appropriate integration point is an explicit ScriptHost session field, set before `vm.initialize()` and world OnInit dispatch. Include it in ScriptHost snapshot/restore (or use one canonical Gameplay field saved at that layer); avoid redundant fields with conflicting defaults.

`ScriptHost.initialize(save)` currently initializes the VM, restores script state, normalizes fairies, restarts enabled looping sound, and returns without dispatching World OnInit again. Preserve that flow for saved sessions.

## Conservative migration

Old progress only stores unlocks and skills, so it cannot prove which levels were actually played. Do not fabricate a visited prefix from `highestUnlocked`, because old cheat access is indistinguishable.

A validated legacy save proves its current level was entered. It can seed that level into the future-replay history, but the saved session itself must default to ordinary mode 0 because its original handlers were executed under that value. If a legacy save is already completed, it still proves only its current level for play history; successor access is already handled separately.

No-save legacy users may see a tutorial once more on their first post-upgrade visit. That is safer than silently removing unseen tutorial/ability content based on ambiguous unlock information.

## Entry point behavior

| Entry | Suggested session mode/history behavior |
|---|---|
| Fresh profile starts Forest | Mode 0, then record Forest after load succeeds |
| First visit to newly unlocked level | Mode 0, then record that level |
| Chapter card replay of played level | Mode 1, preserving earned skills |
| Unlock-all cheat then first visit | Mode 0; cheat must not add history |
| Continue current save | Use saved mode; legacy defaults 0 |
| Load 2/5/10-minute recovery | Use checkpoint's mode; never recompute from newer history |
| Ordinary death/respawn at checkpoint | Retain same ScriptHost/session mode |
| Completed save loads debriefing | Keep saved mode; do not rerun initial script |
| Overwrite prompt cancelled/load failure | No played-history changes |

The health-zero paths need explicit attention: `loadAdventure` discards dead gameplay snapshots and currently calls `startLevel(index,null)`, while `resume()` can call `startLevel(selected)` after game over. Decide whether these are fresh replays or continuations of the same attempt. To preserve first-play attempt semantics, pass the previous/saved session's mode through those restart paths rather than letting newly recorded history flip it to 1.

## New adventure semantics

Existing Start opnieuw starts Forest, resets learned skills, and replaces the current/recovery saves only after a successful load, while retaining chapter unlocks and preferences. Always force the new Forest session to mode 0.

Recommended policy: reset the new played-level history on successful Start opnieuw, then record the new Forest visit, while preserving unlocks/preferences. This retains tutorials and later ability grants throughout a deliberately fresh adventure. Chapter-card replay remains the mechanism for automatic Snelstart.

If profile-lifetime played history is retained instead, document that explicit choice and verify every later native quick-start branch grants or preserves required abilities after new-adventure skill reset. Otherwise automatic skipping risks removing the only route to abilities in a fresh campaign.

The old campaign must remain untouched until new loading succeeds. `skill` events emitted during initialization already write progress, so any new history commit should not be placed in those early callbacks.

## Opening toast

`OpeningHint` only displays after it sees a cutscene/authored camera and then control returns. On Snelstart it may remain pending if there is no intro; a later unrelated camera could trigger it. Explicitly disable the opening hint for quick-start sessions, instead of leaving it pending until another cutscene. Preserve the existing first-visit, once-per-profile toast policy and touch/desktop/controller variants.

## Focused validation

- Replay decision tests for first visit versus repeated visit and immediate successor unlock.
- Cheat access without visited history.
- Progress normalization, invalid data, old progress/old saves, immutable helpers.
- Saved first-play mode 0 restored while profile history already contains the level.
- Saved replay mode 1 and recovery snapshot retaining mode independently of newer profile state.
- Failed or cancelled start preserving history; mode chosen before successful-start marking.
- New adventure resets/relearns skills and keeps the selected history policy consistent across later chapters.
- Actual imported scripts with native mode 1 to verify introductions/tutorial branches are skipped without removing boss/story or gameplay initialization.
- Fresh first-play opening toast still follows the authored camera; replay cannot accidentally show it after a later camera.

Run only the new/relevant campaign, ScriptHost, and focused menu/scene cases; no package build or broad old test rerun is needed.

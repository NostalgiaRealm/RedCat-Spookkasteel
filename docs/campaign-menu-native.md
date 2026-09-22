# Campaign chapter access and original cards

The chapter menu now derives access from saved campaign progress rather than
making every imported level available on a new installation. The Forest is the
initial chapter; finishing an available chapter unlocks its successor. Earlier
chapters remain replayable. Unlock progress is independent of the single
checkpoint so that replaying the Forest does not relock later chapters.

## Original evidence

Research used the owned `RcHcMenu.dat`, SHA-256
`c859320e2cb5be2db8e1c344a15ee388a7bee9728e10f09b89b7e1111485698f`.
The original menu exposes a `TfrmQuickPlay` form with five `btnLevelN` controls;
its published `FormShow` handler is `0x55debc`.

The player loader reads `Level1.CurrentSubLevel` at `0x5677b7`–`0x5677cc`, takes
the chapter digit, subtracts one and saves the zero-based index at
`0x5677f1`–`0x567812`. An empty adventure selects index zero. The quick-play
form disables its chapter controls first, then compares the reached chapter
against 0, 1, 2 and 3 at `0x55e262`, `0x55e288`, `0x55e2ae` and `0x55e2d4`,
enabling the corresponding available controls. This is evidence of earned
chapter access, rather than access granted by potion or score totals. No
per-difficulty access branch was found in this form.

One native limitation is deliberately not reproduced: the fifth-card branch
compares with 4 at `0x55e2fa`, then performs a second comparison with 5 at
`0x55e30e` before enabling the control. An independent all-cards override is
present at `0x55e1ea`. The exact intention of the extra fifth-card comparison
is unverified. The portable menu keeps the Tower accessible as soon as its
chapter has been earned, consistent with the campaign sequence.

The portable completion event already comes from each level's original Davi
exit handler. Access is recorded on that event before changing levels. Merely
selecting a locked card, changing difficulty, granting cheat supplies or
restarting an earlier chapter does not grant another chapter.

The explicit portable cheat **Instellingen → Cheats → Alle levels vrijspelen**
unlocks all five chapters immediately. It writes campaign progress before
updating the menu and remains unlocked after restart or loading an earlier
checkpoint. It works before starting a game and during paused play, without
completing the active level or changing its inventory, enemies or checkpoint.
The control is disabled once all chapters are unlocked. A failed storage write
leaves the previous access state intact and offers a retry.

## Artwork

The original extracted card resources use the pattern `040N000S.png`, where
N is the zero-based chapter and S is a presentation state. The source archive
and extraction provenance are recorded in `assets/menu/manifest.json`.

| State | Artwork used by the portable control | Actual dimensions |
| --- | --- | --- |
| 0 | Available, resting: grayscale picture without chains | 150 × 171 |
| 1 | Available, hover/focus: color picture and pink outline | 150 × 171 |
| 2 | Available, selected/pressed: color highlighted card | 150 × 171 |
| 3 | Locked, resting: chains and padlock | 150 × 171 |
| 4 | Locked, hover/focus: chained highlighted card | 130 × 162 |

In particular, `04000001.png` is the Forest's available colored card; the
chain/padlock state is `04000003.png`. The Castle locked resource is
`04010003.png` (including the leading zero), and `04010001.png` is its
available colored state. Grayscale by itself does not signify a locked card.
These state assignments follow direct visual inspection of the original
resources; the historical VCL drawing-state dispatcher is not fully ported.

Render the complete source image with `object-fit: contain` in a 150:171 card
area. State 4 has a different source ratio and must not be stretched or cropped.

## Portable storage and migration

`src/campaign-progress.js` contains pure helpers, with no DOM or storage writes:

- `readCampaignProgress(stored, legacySave)` returns
  `{version: 1, highestUnlocked: 0…4}`.
- `completeCampaignLevel(progress, levelId)` returns new progress with the next
  earned chapter; unavailable or unknown completions cannot grant access.
- `canStartCampaignLevel(progress, index)` also rejects malformed indices.
- `chapterArtwork(index, {unlocked, hovered, selected, pressed})` resolves an
  original card path; `CHAPTER_ART_SIZE` describes the outer card area.
- `validAdventureSave(save)` rejects malformed positions, camera angles and
  chapter IDs. Its inner gameplay snapshot must also be version 1, match the
  envelope level, and contain an object state with finite health.

Progress is stored separately under `redcat.progress.v1`. For compatibility
with earlier releases that exposed every chapter, a valid existing checkpoint
proves access through its current chapter. A completed checkpoint also proves
its successor. This explicit migration policy preserves an existing adventure;
it cannot reconstruct a historical playthrough that was never saved. Existing
higher progress always wins over an earlier checkpoint. Difficulty and cheated
inventory quantities are not used as progression evidence.

## Focused verification

`tests/campaign-progress.test.mjs` checks fresh access, sequential completion,
invalid indices, immutable updates, legacy checkpoint migration, no progression
from cheat supplies, preserving unlocks after earlier replays, and every card
file's actual PNG dimensions. All four cases passed. After the dimension check
identified the smaller locked-hover resource, only that affected case was
rerun. No packages were built. `node tests/campaign-settings-scenes.mjs` verifies the real menu locks, original
hover/locked artwork, completion unlock, persistence after replay, existing-save
migration, difficulty controls and one-minute autosave. Screenshots are saved in
`artifacts/campaign-menu-{locked,unlocked}.png` and
`artifacts/difficulty-settings.png`. No browser/HTTP errors occurred.

`node tests/cheat-unlock-levels-scenes.mjs` checks only the explicit unlock
cheat, including main-menu/paused use, persistence, level access and storage
failure.

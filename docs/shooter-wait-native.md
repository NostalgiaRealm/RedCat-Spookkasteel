# Moving shooter waits and Brutus attack children

15 October 2026. Static REA/Hopper analysis of the original `RcHcGame.dat`,
SHA-256 `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
This refines the first-check timing limitation in
[enemy pursuit and interruptions](enemy-pursuit-interruptions-native.md).
It does not claim a native runtime or full campaign comparison.

## Wait lifecycle

State dispatcher `0x402d20` checks the initialized flag at `+15`. On a new
child it invokes initialization (`0x402a60`) and returns immediately, without
also calling the child update. Wait initialization `0x405c50` installs the
movement wait. Its completion check `0x597900` has a separate unarmed deadline
(`-1` in native): the first check sets `deadline = now + duration` and returns
false. Later checks complete only when integer-millisecond `now > deadline`.
Even a zero-duration wait must first arm and cannot complete at that same
millisecond.

The port previously armed on wait entry. It now enters with `waitUntil: null`
and returns. The next actual wait check arms the deadline; strict integer-ms
expiry is unchanged. This adds the supported initialization/check distinction
without a guessed fixed frame duration. Full relative scheduling between the
native root state, nested child and movement manager is not yet reproduced
cycle-for-cycle; no exact number of original render frames is claimed.

`nativeShooterWaitComplete` is shared with the Witch's inter-shot and
post-salvo waits. Ordinary moving shooters use simulation time; the Witch uses
her freeze-safe phase clock. Both preserve the unarmed state and finite
deadline in saves. Existing saves with an already armed deadline retain it;
loading does not restart the timer. Freezing before the first check leaves it
unarmed, and freezing an armed ordinary wait shifts its deadline with the
existing simulation freeze handling.

## Mushroom and Bone Brutus

Mushroom Brutus's alert root (`0x41f9e0 -> 0x406820`) reaches ordinary shooter
attack `0x406e50` through initializer `0x4068c0`. The port now uses that shared
closer/shoot/wait parent, including its committed complete salvo and authored
waypoint reservations. It no longer falls through to generic ranged AI.

Bone Brutus has its own parent `0x401160`:

1. Enter closer using `0x4014b0`, then shoot on completion/absence of a valid
   closer destination under the existing target-memory policy.
2. Shoot child `0x4015d5` releases at DrawMotionPart without rechecking range
   or sight (`0x40176e -> 0x4017c0 -> 0x42a220`). It waits for the complete
   shoot clip before either entering the between-shot wait (`0x4018d0`) or
   completing the salvo.
3. Completion enters charge (`0x401440`) and toggles ammunition at entry
   (`0x401217`, actor virtual `+c8`). Charge rate is
   `0.9 + (rand() % 10000) * 0.00002`, not a continuous uniform sample.
4. Only after the charge clip completes does a sample at or below
   ChanceToMoveAfterSalvo choose closer; otherwise another salvo begins.
   This path does not insert WaitTimeAfterSalvo or an extra visibility gate.

The port now implements that charge parent in `enemy-shooter-native.js`.
Ammo toggles once per charge entry and persists through saves/freezes. Older
saves already charging adopt the charge child without replaying it or
toggling ammunition a second time. Older pending-charge saves retain their
final shoot pose and then enter charge. Missing-path custom levels retain the
existing generic fallback; the shipped Brutus actors have authored paths.

## Retained evidence and validation

The focused native records are retained in
[bone-controller-rea.json](../temp_work/boss-interruptions-2026-10-15/bone-controller-rea.json)
and [dungeon-entry-rea.json](../temp_work/boss-interruptions-2026-10-15/dungeon-entry-rea.json).
Key evidence IDs:

| Finding | Evidence |
| --- | --- |
| Initialize-only child dispatch | `ev_428a01a76ac07ec248758b695942fa64a66ee1c884ae8d17a29ac57885100348` |
| Wait initialization | `ev_e113201f3d89c4f4f1bce35815ab744ea75ccc6b00213e020496f62bc3ab8976` |
| First-check arming and strict expiry | `ev_4e82ed23a28ef172469f05373b310d847ca971668053b51ac9da4f20166ad4b5` |
| Bone parent completion and charge choice | `ev_df9f383fada8580e2b38801796e0e63b1df5a9e4936b5532f4e5ecf52a06265a` |
| Charge rate and facing | `ev_60524dc6ac1be3abd638455192520a23b78fa534e57d8f189822106ded727962` |
| Committed shot, full clip, between-shot wait | `ev_7911bc003a75804bcc95ac6bee5acf72a48e0202288563a841b0211e45082c85` |

Only affected tests were run: 15 shooter unit checks and 12 gameplay integration
checks passed. They cover exact-deadline/zero-time waits, unarmed and armed
save/freeze cases, committed salvos, selected-hit cancellation, imported Forest
Mushroom Brutus, Bone charge/ammo sequencing and legacy save migration.
Logs and pre-edit files are retained in
[temp_work/shooter-wait-2026-10-15](../temp_work/shooter-wait-2026-10-15/).
No package build or full historical test suite was run.

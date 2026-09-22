# Boss scenes, music and mirror exits

The original scripts and level entities were checked against the installed
`RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
The following addresses refer only to that executable. No original files were
modified.

## Castle entrance position

The castle contains two different entities with `DaviName = rcpoint1`:

| Class | Position | Purpose |
| --- | --- | --- |
| PlayerStart | -416, -40, 2648 | Level entrance outside the castle |
| EffectEndPoint | -84, -18, 458 | Cutscene position inside the castle |

The `MCcamera02` motion invokes `RcShowAtSpawnPoint("rcpoint1", 12)` at 0.2
seconds and says `wkgen9` (“Help, RedCat, hellup!”) at 1 second. The old generic
lookup selected the first entity, teleporting RedCat outside. Native registration
at `0x5277d4` binds `RcShowAtSpawnPoint` to `0x56a720`. The native function
enumerates the **EffectEndPoint** class at `0x56a919` and `0x56a980`, compares
its names at `0x56a9cb`, and applies the matched endpoint at `0x56aa2e`.
The portable host now gives this class priority while retaining authored
relocations for other scenes, including the witch ending.

## Boss music lifecycle

The forest introductory motion `csmc10` explicitly selects `PlaySpecial`, then
enables Brutus at 24.57 seconds. His `AfterDestroyCommand` starts `csmc12`.
The ending motion contains **no music command**: the original executable owns
that transition.

The Brutus fatal-hit handler `0x41fb50` calls `0x422880(false)` before ordinary
death cleanup. This clears the native boss-combat flag. If the ordinary enemy
threat count is zero, it calls `0x424b30`, which dispatches `PlayAmbient`
(string `0x68f9d0`). With another engaged enemy, `0x424c50` dispatches
`PlayAction` (string `0x68f9dc`). Entering boss combat calls `0x424d70`, which
dispatches `PlaySpecial` (string `0x68f9e8`).

The portable host performs these selections when a boss is enabled or defeated,
and for ordinary enemy engagement/disengagement in every level. See
[audio-completion-native.md](audio-completion-native.md) for the authored music
slots and saved mode handling.
If another living enemy is still engaged, it returns to ambient music once that
enemy is killed or forgets RedCat. This state survives saves; older saves with a
dead boss and a stranded Special track are corrected when loaded. An explicitly
stopped track remains stopped. Empty authored music slots now stop the previous
track instead of silently retaining it.

## Mirror routes

| Level | Original mirror callback | Result |
| --- | --- | --- |
| Forest | `endleveltrigger.trigger` | Advance to castle |
| Castle | `endlevel_mc.enable` | Ending motion advances to graveyard |
| Graveyard | `csmc08.enable` | Ending motion advances to caves |
| Caves | `cutscene07.enable` | Opens `enter`; walking into `end_level` advances to tower |
| Tower | `HasLastMirror = 1` | Unlocks the fifth mirror placement in the same level |

The forest mirror is attached to the `mirrormodel` brush. At 11.05 seconds the
ending scene enables `mirrormodel_mc`, whose original motion raises the mirror
from below the floor. Its presentation and pickup position must use that moving
brush transform; its original static Origin remains below the arena.

`tests/boss-script-regressions.test.mjs` executes the original Davi bytecode and
motion events for these scenes, including the duplicate endpoint, boss music,
raised mirror save/load, all four exits, and recovery of older boss saves.
Existing tower script tests check the final mirror placement without a level
transition. Rendering and physical pickup tests are separate from these script
tests.

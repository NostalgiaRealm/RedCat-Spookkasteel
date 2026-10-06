**Intentional change/fixes from the original game**

- An unfinished graveyard maze now resets its walls and triggers after death. In the original game, this would've otherwise cause a soft-lock and same went for the remake before version 0.9.4

- The cave `trigger_cuts04` contains an original authoring inconsistency: it asks `RcHasAllPotions(2)` but awards `RcEnableSkill(4)`. The latter sets the power-move flag, which cannot produce BIG BENG. The portable host corrects that one native call to index 2, only during this named trigger's `CommandOnEnter` in `lvl03a`. The original VM still evaluates the potion gate and chooses `cutscene04a` or `cutscene04b`. Calling index 4 anywhere else retains the original bit-16 mapping. The corrected skill event also allows the campaign to retain the right reward.

**Interesting findings**
- (Not implemented) Found a 'power move' flag, but no confirmed input or playable action.
This was possibly supposed to be used with the the green-crate puzzle in Level 2 Het Kasteel. In the original level data: touching its wall button moves three crates along scripted paths. An older tutorial line describes pushing them by walking into them, but the shipped Dutch text says to use the button. I’ll include that verified setup in the test scene; the unused “power move” flag is not evidence of a working shove action.

Language file evidence:

LanguageIT.ini
FLGen34=	Wat heeft Grizella hier een zooitje gemaakt! Je zult wat moeten wegduwen voordat je er door kunt. Je kunt de groene kistjes verplaatsen door er tegenaan te lopen.

LanguageNL.ini
FLGen34=Wat heeft Grizella hier een zooitje gemaakt! Je zult wat moeten wegduwen voordat je er door kunt. Je kunt de groene kistjes verplaatsen door op een knop te drukken.

RcHcSpel.dat evidence:
The native `RcEnableSkill` wrapper at `0x56b190` calls `0x436ea0`.
Its jump table maps script indices 0, 1, 2, 3, 4 to masks 1, 2, 4, 8, 16:
ordinary shot, power shot, super shot, super jump, and an unused power-move flag.

The original skill setter maps index 4 to bit 16 (`0x436ea0`); the settings contain `ReqPotionPowerMove`. That is evidence of a stored capability, not proof
of an available action. The bit-test helper `0x439f10` has gameplay callers for shooting bits 4 and 2 (`0x434e54`, `0x434e68`) and jump bit 8 (`0x435ae4`). The other direct callers are debug-menu checks. The full-mask getter `0x439f30` is used in shooting/aiming paths, not a recovered bit-16 move. The imported actor/input definitions also provide no identified shove clip or input.

See
/docs/player-reactions-and-projectile-contact-native.md

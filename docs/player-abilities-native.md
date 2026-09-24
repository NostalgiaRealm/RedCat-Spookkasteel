# SuperSkippie and BIG BENG

Read-only reference: the installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Addresses are virtual addresses in that executable. Original installation files
and imported level assets remain unchanged.

## Fairy rewards

The native `RcEnableSkill` wrapper at `0x56b190` calls `0x436ea0`.
Its jump table maps script indices 0, 1, 2, 3, 4 to masks 1, 2, 4, 8, 16:
ordinary shot, power shot, super shot, super jump, and an unused power-move
flag. A playable shove action has not been established; see the
[follow-up evidence](player-reactions-and-projectile-contact-native.md#correction-to-the-earlier-shove-finding). The potion query
at `0x436d00` uses the same mapping. The imported Player settings require
30 potions for both super jump and super shot.

The actual graveyard `csmc05_tr` event asks `RcHasAllPotions(3)` and awards
`RcEnableSkill(3)`. Its successful fairy timeline is `csmc06`.

The cave `trigger_cuts04` contains an original authoring inconsistency: it asks
`RcHasAllPotions(2)` but awards `RcEnableSkill(4)`. The latter sets the power-move flag,
which cannot produce BIG BENG. The portable host corrects that one native call
to index 2, only during this named trigger's `CommandOnEnter` in `lvl03a`.
The original VM still evaluates the potion gate and chooses `cutscene04a` or
`cutscene04b`. Calling index 4 anywhere else retains the original bit-16 mapping.
The corrected skill event also allows the campaign to retain the right reward.

The imported chapter starting masks are 0, 1, 3, 7, and 15. The cave default
7 already includes super shot, even though the same chapter awards it at the
30-potion fairy. Fresh `lvl03a` construction therefore removes bit 4 from its
default, leaving mask 3. Normal carry from a graveyard visit that earned
SuperSkippie supplies mask 11, still without BIG BENG. Existing saves are
restored after this correction, and explicit campaign ownership is merged
after construction, so neither path loses an already owned ability. This is
a scoped correction to the original content, not a claim that the imported
StandardSkill setting was different. Legacy checkpoints retain their stored
skill masks for compatibility: mask 7 alone cannot distinguish an old default
from a legitimately owned ability, so migration does not revoke it. The new
gate applies to fresh games and ordinary progression without such old ownership.

## SuperSkippie input and movement

The native airborne branch at `0x435aa9` checks mask 8. Its tap timing helper
`0x4366b0` uses `SJumpMinTapTime=120` and `SJumpMaxTapTime=550` milliseconds.
At `0x435b14`, the extra jump replaces vertical velocity with ordinary launch
speed multiplied by `SJumpHeightFactor=.89`; despite its name, that setting
is a velocity multiplier, not a height multiplier.

The controller detects jump press edges from the common keyboard/touch input.
A grounded press starts the normal jump; releasing and pressing again during
the 120–550 ms window performs the airborne boost. Holding jump does not
repeatedly jump or boost. The portable controller allows one boost before the
next landing and clears it on velocity resets. A press near the first apex
(about 300 ms after takeoff) reaches about 74 units above the starting floor,
compared with the ordinary 41.6-unit jump.

The native animation table's `jump2` entry at `0x690148` is selected at
`0x432e1c` and played at 1.3× (`0x432e81`). The remake resets its motion clock
on the airborne boost and retains the entire original `jump2` through descent.
Normal jumps continue to use the original `jump1` at 1.4×.

The actual graveyard cave exit staircase at Z=-900 has floor heights 308,
380, 452, and 524: three 72-unit rises. The focused test starts at
`[0,309,-900]`, settles on the floor, and moves along +X. Ordinary jumping
cannot reach the first box. Successive normal/boost pairs 300 ms apart climb
all three boxes through the unmodified BSP collider, ending above X=600 on
the 524-unit floor. No teleport or height override is used during that ascent.

## BIG BENG charging

The super-shot branch at `0x434b24` checks factory type 11 (skill mask 4).
`0x436720` computes held time, saturating at the 1500 ms constant at
`0x64c410`. While held, `0x434bda` seeks `shoot1` to normalized time .26 and
sets playback speed to zero. It does not select the separate imported
`charge` clip. On release, the original 1.9× shooting rate resumes and the
projectile emits at .46, about 203 ms after release. The remainder of the
same clip follows the simulation clock, including restored saves.

At `0x434db1`, projectile damage is multiplied by charge percentage, with a
minimum of 1. The imported super-shot damage of 4 therefore gives damage 1
for a quick tap, 2 for a .75-second hold, and 4 at 1.5 seconds or longer.
Super shots keep their authored sprite, speed, acceleration, and lifetime.
Ordinary/power shots retain their existing held-fire cadence.

The input path waits for recharge before beginning the next held charge,
releases exactly once, pauses charge time during cutscenes, saves its elapsed
charge, and cancels charging on death, respawn, or weapon removal.

## Focused verification

Run `node --test tests/player-abilities.test.mjs` (9 tests). It covers the real
fresh chapter defaults, graveyard-to-caves carry and save preservation,
29/30-potion VM branches in both levels, skill and tap bounds, held-input
behavior, all three actual cave boxes, native motion selection, charge pose,
damage and release timing, recharge, cancellation, cutscene/save restoration,
and the real touch press/release input methods.

This reconstructs the recovered input, motion and flight values within the
portable collision system; it does not claim identical Genesis3D frame
stepping or every native animation blend.

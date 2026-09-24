# Native door and switch activation

Walking now operates authored proximity doors, contact doors and secret
passages. A door's editor origin can intentionally differ from its brush,
so proximity and physical touch use different positions. The imported level
entities, motions and Davi programs are unchanged.

## Original evidence

Read-only disassembly of installed `RcHcGame.dat` shows:

- Door initialization at `0x4cbd59–0x4cbd6e` loads `TouchToOpen` and
  `TriggerRadius`. The base model retains the entity origin at
  `0x4cfd63–0x4cfd7e`.
- In the closed state, `0x4cc5ee–0x4cc618` accepts a touch flag or explicit
  Open, otherwise automatically calls `0x4d14f0` with `TriggerRadius`.
  Contact activation itself is gated by `TouchToOpen` at `0x4cc492`.
- The helper rejects nonpositive radii at `0x4d1508–0x4d1533`. At
  `0x4d1660–0x4d1719` it obtains the player's box dimensions and compares
  absolute differences from the authored origin. X/Z thresholds are the
  radius plus the full respective box dimensions; the Y threshold is the
  full box height without the radius. These are strict per-axis comparisons,
  not a sphere. `0x554a50`, calling subtraction at `0x5b2fe0`, supplies the
  full dimensions. The reconstruction uses its normal 22 × 56 × 22 hull.
- Buttons invoke the same radius helper at `0x4cb469` and `0x4cb62d`.
- At `0x4cce0b–0x4cce1b`, an expired stay-open timer still waits while the
  player is within the door's radius.

Previously `TriggerRadius` only granted permission for an E action within
105 units; it never performed automatic proximity activation. The E distance
also bypassed intentionally offset one-way areas. Contact doors tested brush
contents without considering that solid collision stops the player just
outside the brush. The existing physical button contact/tolerance logic now
also activates touch doors. Automatic touch waits for a closing motion to
finish, matching the native closed-state restriction.

E no longer extends the authored activation area or activates shoot-only
buttons. Locked doors, disabled player interaction, script-controlled doors,
switch limits, existing secret feedback and all original callbacks remain in
control. Explicit script Open retains the earlier disabled-door fix.

## Reported routes

| Route | Authored behavior preserved |
| --- | --- |
| Castle entrance left | `doorhallway01_01` opens on approach with radius 50. |
| Castle entrance right | `doorhallway04_02` has brush X=392…408 but origin X=460 and radius 30. The activation area begins beyond X=408, inside the returning corridor. E from the entrance cannot bypass it. Its completed opening restores `vlakvoortrap`, `trap01` and `schuinvlaktrap`; the entrance cinematic first lowers them. |
| Castle outer return door | `doorhallway04_01` has neither touch nor radius activation and remains controlled by the original scripts. |
| Castle three-knight passages | `doorhallway05_01`, `doorhallway05_02`, `doorhallway05_03` and nearby `secretdoor04` open on brush contact. The second and third door editor origins differ greatly from their respective brushes; contact must follow the brush. |
| Chapel floor | `kerklift_mc` is a touch-operated DoorModel, initially at its lowered/open endpoint. `hek2_button_mc` closes/raises it through its original completion callback. Walking onto the raised floor opens/lowers it 304 units in six seconds, carries the player and sets the tunnel checkpoint. |
| Brutus entrance | `endbossdeur_links_mc` and `endbossdeur_rechts_mc` have radius 75 at Z=1440, well ahead of their gate brushes at Z=2200. Walking through the authored approach area opens both. |

## Focused validation

`node --test tests/door-activation.test.mjs tests/environment-interactions.test.mjs tests/bookcase-touch.test.mjs tests/graveyard-door.test.mjs`
checks native threshold boundaries, the original entrance cinematic and stair
callbacks, physical BSP contacts for the knight passages, physical chapel
button contact and passenger descent, Brutus proximity and preserved locks,
disabled doors, switch requirements and prior bookcase/puzzle behavior.

`node tests/door-activation-scenes.mjs` uses the browser's normal world/player
update and collision system for the castle entrance, knight passage, chapel
wall button and walk-on floor, and Brutus approach. Its JSON results and
screenshots are written under `artifacts/door-activation-*`.

No builds, original installation edits or website changes are part of this fix.

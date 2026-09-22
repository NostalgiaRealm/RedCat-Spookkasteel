# Castle library bookcase buttons

Walking into either original wall button now opens the revolving bookcase
through its original Davi-Script commands. The opening finishes before its
two-second stay-open timer begins. The bookcase then returns, and either button
can operate it again. Pressing E directly on this script-controlled bookcase
no longer bypasses the buttons.

## Original behavior and cause

The original castle entities in `data/levels/lvl01a/level.json` define
`knopdisc01` and `knopdisc02` (ButtonModel12/13, BSP models 71/72) with
`TouchToSwitch=1` and `ShootToSwitch=0`. Their AfterSwitchOn commands update
their red/green indicators, call `disc.open`, and reset the button. `disc`
(DoorModel9, BSP model 6) has `TouchToOpen=0`, `TriggerRadius=0`, and
`TimeToStayOpen=2`.

Its original five-second motion holds still for the first two seconds, then
rotates approximately 178.244 degrees over three seconds. The exact original
motion and pivot are retained. The remake previously started the close timer
when opening was requested: it tried to reverse just as the rotation began.
Physical button contact itself already reached the correct script callback.

Native evidence comes from the installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`:

- `CAdamDoorModel` checks the opening endpoint at `0x4ccc8c–0x4ccce1`, then
  calls AfterOpen and initializes the stay-open timestamp at
  `0x4cccff–0x4ccd2e`. Its elapsed-time check is at `0x4ccdd8–0x4ccdf7`.
- TouchToOpen is loaded at `0x4cbd59–0x4cbd61` and gates contact activation at
  `0x4cc492`. The trigger-radius helper returns false for a nonpositive radius
  at `0x4d1508–0x4d1533`.

## Implementation

`Gameplay.doorMotionComplete` now schedules automatic closing after the
opening endpoint and AfterOpen callback. Doors without a motion use the same
completion path immediately. Callbacks that close the door or start another
motion do not acquire an obsolete timer. Existing close-overlap protection is
retained.

Direct E interaction with doors now requires an authored player activation
flag (`TouchToOpen` or positive `TriggerRadius`). Script commands continue to
operate script-controlled doors. Button contact detection is unchanged.
Restoring an older save clears a premature timer on an unfinished opening,
including a paused opening; fully open saves retain their remaining wait.

## Focused verification

```sh
node --test tests/bookcase-touch.test.mjs
node tests/bookcase-touch-scenes.mjs
```

All five unit cases passed, covering both button scripts, complete opening and
return cycles, repeated activation, direct E rejection, old saves and callback
ordering. The browser scenario also passed using normal player movement into
both original wall buttons without E or injected touch events. After stepping
away from each button, it verifies the original rotation, two-second endpoint
wait, return and another physical activation. E from 94 units away leaves the
bookcase closed. No embedded player, browser, HTTP or script errors occurred.

Evidence is in `artifacts/bookcase-touch-scenes.json` and
`artifacts/bookcase-touch-knopdisc01.png` / `bookcase-touch-knopdisc02.png`.
No unrelated test suites or new builds were run. Use the [build guide](building.md)
to run the updated source; existing packages remain unchanged.

# Graveyard painting puzzle and ceiling spiders

The painting puzzle in `lvl02a` uses its original floor buttons, strip motions,
Davi callbacks and entrance destruction sequence. The three spiders remain
at the ceiling until their scripts enable them and RedCat becomes visible
from their authored hanging positions. They then descend on their web lines and
enter ordinary combat. This source change does not produce release packages.

## Original encounter

`puzbut1_mc` through `puzbut5_mc` are touch-operated `ButtonModel` entities:
`TouchToSwitch=1`, `ShootToSwitch=0`, `TriggerRadius=0`. Each button enables
its corresponding `puzstukN_mc` controller and switches itself off. E is not
required. The strips start at times `[2.02, 6.02, 0.02, 2.02, 4.02]`.

Each strip has a path from 0 to 8 seconds and events at 0.01, 2.01, 4.01,
6.01 and 8.01 seconds (`paalNa` through `paalNe`). The compiled `Puzzel`
function stops the strip at each event and updates its `paalN` flag. The
first position is correct, and three first-position callbacks have additional
side effects:

| Callback | Original side effect |
| --- | --- |
| `paal2a` | Enable `mspina` (`MovingEnemy56`) |
| `paal4a` | Enable `mspinb` (`MovingEnemy57`) |
| `paal5a` | Enable `mspinc` (`MovingEnemy58`) |

All three spiders start disabled. These are their only enable/disable
references in the compiled level script. Enabling a spider does not itself
request an immediate descent: the existing ambush perception still controls
when it leaves the ceiling.

When all five flags are true, `Puzzel` enables `mausomodel_mc` (model 158).
Its original timeline lowers music at 0.05 seconds, starts a cutscene at 0.1,
enables `mausocam` at 1, and calls `Mausocommand("knalmuur")` at 2. That
callback hides `mausodeur_mc` (model 74) and destroys `mausodeur_dum1` and
`mausodeur_dum2`. Both are `grafdum.act` actors; their existing destruction
settings supply the stone fragments. The sequence restores music at 5.5
seconds and ends the cutscene at 5.55. No replacement explosion or special
post-explosion spider trigger is added.

## Native timing and the missed activation

Read-only inspection used the installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
The addresses below are verified against that executable:

- `0x4cfe7e–0x4cfe8f` loads the first path's time extents into controller
  fields `+0x140` (start) and `+0x13c` (end).
- The controller frame handler is `0x4d23d0`. Repeat mode 1 at
  `0x4d2548–0x4d25de` queries events up to the path endpoint, wraps to the
  start, and processes the unused frame time. Its bounded event helper is
  `0x4d1740`.

The native loop therefore wraps at 8.0 seconds and reaches `paalNa` in the
next cycle. It does not reach the out-of-range `paalNe` event at 8.01.
The remake's previous event-tail compatibility repair extended these loops
to 8.01. The `e` callbacks set the correct flags but lack the spider enables,
so the entrance could open while all three spiders remained disabled.

Looping and reflecting controllers now use the original path endpoint.
One-shot motions retain the existing event-tail compatibility behavior.
The original puzzle callbacks are unchanged.

## Roof placement and saved games

The three editor origins are near roof height (`Y=-86`), while their linked
StartPoints are on the floor (`Y=-230`). The original ceiling and floor
setup is present in both spider initializers (`0x413a90`, `0x417de0`). The
portable setup previously started its floor query inside the roof, failed
its ceiling query, and classified these spiders as already awake.

The native moving-enemy constructor resolves the complete StartPoint before
the spider initializer traces its ceiling and floor:

- `0x427449` reads the StartPoint pointer; the assertion text at `0x68fd8c`
  is `a_Entity.StartPoint != 0`. `0x427559` resolves its name, and
  `0x42761c–0x42762a` obtains its waypoint ID.
- The ID passes through the actor constructor `0x421fa0` to `0x595280`,
  which stores it at actor field `+0x2f4`.
- During world attachment, `0x595b8e–0x595ba7` sets the navigator to that
  waypoint and calls `0x595f60`. The navigator copies the waypoint's XYZ
  at `0x59b94c–0x59b96c` and `0x59ba80–0x59ba9a`.
- `0x595f60` obtains those coordinates through `0x59be50`, then calls
  actor `SetPosition` (`0x49bb70`), which copies all three components.
  This precedes the spider ceiling/floor queries in `0x417de0`.

The repair remains scoped: when the origin-based query starts in solid
geometry and an authored StartPoint is more than 64 units below the origin,
placement retries at the complete StartPoint XYZ. Existing successful
placements are unaffected. This both finds the floor and puts the three
spiders behind the correct roof edges. Retaining the editor origin's X/Z
instead would expose their line of sight toward the puzzle too early.
The corrected actors use the original difficulty's constant `FallSpeed`,
existing web-line rendering and subsequent AI.

Restoring an older save clamps extended loop bounds to the path
endpoint. A graveyard painting strip saved at the old 8.01-second stop is
restored to the equivalent first marker at 0.01 without replaying callbacks
or reusing its stale saved pose. The next foot press therefore advances to
2.01 instead of repeating the first-position callback. Restoration also
applies that strip's missed spider enable, if the spider is still alive and
disabled. It does not replay the puzzle completion check or entrance
cutscene. A living, untouched spider still at its original roof position
can retry placement if the old save
marked it awake without descent anchors. Damaged, alerted, moved or defeated
spiders retain their progress.

## Native dormant perception

Touch-spider sight (`0x417fe0`) and shooting-spider sight (`0x413c90`) use
horizontal distance for their SenseRange and VisualRange comparisons.
Their shared view-angle getter (`0x4141b0`) returns a full circle while
the main state is the hanging/default state 1; active states use the
configured ViewAngle. No shorter encounter-specific radius is substituted.

Both range paths require line of sight. The eye is the current actor
position plus 80% of its bounding-box height: `0x422a96–0x422aac`
calculates that height, and `0x4236b0` adds it to the current position.
The first ray targets the player's origin; if blocked, the second targets
the origin plus the player's full bounding-box height. The spider's own
actor is excluded from the query. The state transition at `0x40311e`
uses the existing seen/recently-seen predicate (`0x422f30`).

The previous remake checked sight from the spider's floor landing point,
which bypassed the roof obstruction. The repair checks from the hanging
actor and uses its actual height, avoiding the generic 25-unit eye offset
that can fall inside a low roof. It preserves the original ranges and
does not add a puzzle-completion flag or timer to the spider AI.

## Focused verification

Only tests for this encounter and its changed motion/placement behavior are
needed:

```sh
node --test tests/painting-spider.test.mjs
node tests/painting-spider-scenes.mjs
```

The browser check uses the original level geometry and physically walks onto
the floor buttons without E or injected puzzle callbacks. It checks entrance
destruction, stone fragments, ceiling waiting, web descent and subsequent
movement. Its report is `artifacts/painting-spider-scenes.json`; inspection
images are `artifacts/painting-spiders-*.png`.

The five focused unit checks pass: the original puzzle/explosion chain,
the three roof placements and descents, native perception rays/range,
old-save repair, and preservation of combat/descent progress. The existing
motion-wrap regression was also run in isolation and passed. After the
saved-stop correction, the focused old-save check passed again, including
the next-press advancement assertion.

The browser scene check passed with nine physical foot-button contacts,
the entrance explosion and stone fragments, all three spiders waiting at
the roof and then descending on visible webs during approach, landing and
releasing their threads. It reported no script, browser or HTTP errors.
No historical full suite or package build was run for this change.

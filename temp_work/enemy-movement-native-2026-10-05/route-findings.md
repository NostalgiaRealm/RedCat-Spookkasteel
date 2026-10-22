# Pursuit endpoint investigation, 5 October 2026

Read-only source: installed Dutch `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
All addresses are executable virtual addresses. Local disassembly excerpts in
this directory were produced directly from this file with `objdump -d -Mintel`.

## Recovered caller chain

- `0x5975c0` constructs the cursor move represented by vtable `0x650068`.
  It stores the supplied waypoint ID at `+0x18` (`0x5975ea–0x5975f9`) and asserts
  its validity at `0x597606–0x59768f`. Its assertion text at `0x6a6c18` is
  `m_DestinationWayPointId.IsValid()`; the explanatory text at `0x6a6c3c` is
  `Can not move to invalid way point`. Source filename string `0x6a6aa8` is
  `D:\Work\RCHorror\AdamSource\AdamCursorMoves.cpp`.
- Its destination selector `0x597790` passes that stored destination ID and
  the owner's current path cursor waypoint (`0x59bd30`) to `0x599910`.
- `0x599910` resolves the supplied waypoint ID via `0x59df90` and calls
  `0x59ca10` (`0x59994f–0x599964`). This is the only direct call to `0x59ca10`
  in the disassembly. `0x59ca10` rejects identical waypoints and differing
  subsystem IDs, invokes the known reverse hop flood `0x59c630`, and selects
  the next neighbour through `0x5994c0`.
- `0x5994c0` keeps the first neighbour with the lowest nonnegative hop label;
  a tie does not replace the previously chosen neighbour (`0x5994fe–0x59951b`).
  This agrees with the current route helper's authored-order tie behavior.

## Nearest-point helper is not a proven replacement

`0x59c810` selects one nearest point with distance >= the supplied minimum and
strictly below the supplied maximum (`0x59c89c–0x59c8dc`). It has no trace or
subsystem test in this helper. The caller `0x4dd5c1` supplies a maximum of 100,
then checks waypoint occupancy at `0x4dd5fe` and changes its occupancy counter
at `0x4dd627`. The other direct call, `0x59e5a2`, is in waypoint setup. This
establishes a nearest query used by the original, but does not establish that
100 is the intended maximum for arbitrary-position enemy pursuit endpoints.

The recovered hop-route chain consumes an explicit waypoint destination;
it does not recover the remake's arbitrary-position entry/terminal selection.
Therefore the four-origin/eight-terminal portable pursuit rule stays unchanged.
There is no new native endpoint parity claim. Native movement states which
choose only adjacent waypoints are handled separately by the movement task.

## Shared performance allowance

The grounded pursuit scheduler is extracted as `takeSearchCredit(object, now)`
and `finishSearch(object)`, so bounded flight detours can use the existing
16 checks per enemy and 48 checks per update allowance. Pending requesters
reserve fair shares, expire after a .25-second lapse, and remain transient.
Ground routes retain their plain saved shape, early direct-path probe, negative
cache and lazy endpoint order. Authored patrol bypass remains unchanged.

Focused validation passed:

- `node --test tests/enemy-route-endpoints.test.mjs tests/enemy-pursuit-budget.test.mjs`
  — 9 passed (3 new mixed-caller checks, 6 existing grounded-budget checks).
- `node --test --test-name-pattern='route|pursuit|patrol' tests/enemy-native-completion.test.mjs`
  — 4 passed (minimum-hop routing, detour/direct recovery, negative cache,
  authored patrol bypass).

The new tests exercise mixed ground/flight budget consumers, same-update
restarts without renewed credits, expired/disabled/dead requesters, and transient
search state. They are scheduler checks, not native endpoint parity tests.

`takeSearchCredit(object, now)` returns false when that update's allowance is
exhausted; it registers the caller as waiting even in that case. A caller must
yield until another update before retrying. `finishSearch(object)` removes its
reservation from future updates, without restoring spent current-update credits.
It should be called on completion, cancellation, or immediate direct recovery.

No build, website output, campaign sweep or full historical test suite was run.

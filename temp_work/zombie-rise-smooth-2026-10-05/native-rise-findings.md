# Native zombie grave rise evidence

Read-only research, 5 October 2026. Native executable SHA-256:
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.

## Confirmed movement

The grave rise is an authored ascending waypoint edge, not a recovered separate
emergence animation. Eight disabled zombies have such edges; two other disabled
zombies have flat entrances, and the two initially enabled mausoleum zombies
have no explicit start links.

| Enemy | Start | End | Rise | Native duration at 50 units/second |
| --- | --- | --- | --- | --- |
| zombie1 | 3866 -118 996 | 3727 -60 996 | 58 | 3.0123 s |
| zombie2 | 2636 -111 517 | 2486 -64 522 | 47 | 3.1454 s |
| zombie3 | 2246 -111 207 | 2242 -64 360 | 47 | 3.2021 s |
| zombie4 | 2207 -111 1107 | 2356 -64 1108 | 47 | 3.1248 s |
| frogzom1 | 2384 472 -240 | 2384 528 -88 | 56 | 3.2398 s |
| frogzom2 | 2552 472 -240 | 2552 535 -88 | 63 | 3.2908 s |
| frogzom3 | 3256 472 -224 | 3264 528 -88 | 56 | 2.9459 s |
| frogzom4 | 3416 472 -224 | 3416 528 -88 | 56 | 2.9416 s |

Exact imported entities and linked destinations are preserved in
`graveyard-zombie-authored-entrances.json`. `zombie.ini` sets Speed=50 in all three
difficulties; copied settings are in `native-zombie-vtables-settings.json`.

## Native implementation chain

- Zombie constructor `0x418d50` calls the shared touching-enemy constructor
  `0x42dc80` at `0x418e29`. Vtable `0x64b55c` has RTTI `CRcZombie` and shares
  initializer `0x42dd20`, position getter/setter `0x423670`/`0x423650`, and frame
  and facing updates with `CRcTouchingEnemy`. The custom `0x418fc0` changes its
  bounding-box dimensions; it does not implement a rising motion.
- Shared actor attachment `0x595b30` initializes its cursor at StartPoint via
  `0x59b980`, then copies all XYZ to the actual actor with `0x595f60`.
- Cursor advance `0x59be70` computes the full destination-minus-position XYZ
  vector and its length at `0x59bfb5`–`0x59bfd6`.
- `0x59c049`–`0x59c058` computes `dtMilliseconds * cursorSpeed * 0.001`.
- `0x59c091`–`0x59c0a4` adds the normalized XYZ vector times that step. When the
  step reaches the endpoint, `0x59c070`–`0x59c07d` copies all three destination
  coordinates. There is no per-axis gravity or stair-step in this cursor update.
- `0x595f60` obtains cursor position through `0x59be50` and calls the actor's
  position setter. Native moving enemies share this cursor actor pipeline.
- The shipped `Game.ini` has `[CursorActor] TestForObstacles=0`. Optional
  dynamic obstacle selection is therefore disabled in the native configuration.

New class disassembly: `native-zombie-class.asm`. Supporting complete cursor
disassemblies were already retained in `../enemy-movement-native-2026-10-05/`:
`movement-waypoint-update.asm`, `cursor-spawn-attachment.asm`,
`cursor-copy-position-to-actor.asm`, `actor-set-position.asm`,
`cursor-actor-frame-update.asm`, `movement-dispatch.asm`, and
`native-touch-waypoint-findings.md`.

## Smallest supported correction

Grounded portable `walk()` currently discards destination Y. `moveEnemy()` then
uses gravity and a 16-unit step, so ascending grave routes become repeated
stair-steps/stops instead of the native continuous XYZ movement. The walk/idle
animation selection can restart on these stop/start frames, amplifying jitter.

For an originally disabled zombie's unique explicit ascending StartPoint edge,
advance XYZ smoothly at authored Speed and retain its walk animation until the
endpoint. Avoid gravity, staircase correction and stuck recovery for that
scripted edge only. Mark normal patrol progress and resume the ordinary safety
collision system at the endpoint. Do not apply this exemption to ordinary
zombie pursuit, flat entrances, mausoleum actors, or arbitrary level geometry.
Preserve an existing mid-edge save position; sending it back to StartPoint
would introduce another snap. The native attachment placement and portable
saved-body recovery remain distinct behaviors.

The shared touching-enemy inheritance also establishes a wider zombie combat
behavior difference from the portable generic AI. That is separate from this
grave-rise fix and should not expand its scope without its own verification.

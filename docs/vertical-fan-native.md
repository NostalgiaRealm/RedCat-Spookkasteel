# Cave vertical fan movement

The return lift in `lvl03a` is the original `Trigger24`, Davi name `wind03`,
group `wind3`, brush model 147. Its `AddPlayerSpeed` is **`0 5 -1`**. The
brush spans `[1480, 72, 3728]` to `[1608, 152, 3840]`; the higher return
platform's collision surface is at approximately Y = 160.05. The source
vector and level geometry do not need adjustment.

Before this repair, a focused simulation of the remake reached only
Y = 133.38. Its controller initialized upward wind velocity only when RedCat
was grounded. Gravity then accumulated against that initial launch while he
remained inside the stream, stopping the lift prematurely.

## Verified original behavior

Evidence comes from the owned `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.

- `GeneralWorldScale` has default 32, pushed as `0x42000000` at `0x4bb425`.
  Its getter is `0x431000`. Trigger speeds are authored in metres per second,
  so `wind03` supplies `[0, 160, -32]` world units per second.
- Trigger entry calls `0x4d68e0` at `0x4d3b98`, adding the authored vector
  to the player's external-speed fields `+0x1b4..+0x1bc`. Leaving calls
  `0x4d6920` at `0x4d40e8`, subtracting the same vector. This is an accumulated
  velocity from overlapping triggers, not an acceleration applied every frame.
- The regular movement path adds that external vector, scaled to world units,
  at `0x4dae30..0x4dae3d` (`0x5b3020` is vector add-scaled).
- At the beginning of **every** player movement/collision update, `0x4d7aed`
  checks whether accumulated external Y is positive. There is no grounded or
  trigger-entry-only condition. If positive, it selects airborne state 2 at
  `0x4d7b08` and copies the **entire** scaled external vector into the separate
  ballistic velocity `+0x174..+0x17c` at `0x4d7b25`.
- Airborne state 2 starts at `0x4d82c1`. It applies half the gravitational
  decrement to ballistic Y at `0x4d82ff`, adds ballistic velocity to the
  input/external movement at `0x4d8305`, applies the second half of gravity to
  stored ballistic Y at `0x4d832e`, then multiplies the movement by delta time
  at `0x4d8334`. The constant at `0x64c5a0` is double 0.5.

For collision-free motion, let `W` be the scaled external vector, `B` the
ballistic velocity and `U` the ordinary input velocity. Native airborne
integration is equivalent to:

```text
if W.y > 0:
    B = W
B.y -= gravity * dt / 2
displacement = (U + W + B) * dt
B.y -= gravity * dt / 2
```

The original `Settings/Game.ini` has `Gravitation=25` and `JumpHeight=1.3`.
The native setup multiplies gravitation by world scale at `0x4d5a28`, giving
800 world units/s²; jump height is 41.6 world units. Ordinary jump speed is
computed as `sqrt(2 * gravity * height)` at `0x4d5df3..0x4d5e03`.

Consequently an active upward stream refreshes its launch continuously instead
of allowing gravity from previous frames to cancel it. While inside `wind03`,
its Y displacement contribution is `(320 - 400 * dt) * dt`. Its Z velocity
also receives both the external −32 and the separate ballistic −32. Leaving
the trigger removes only the external contribution: the last ballistic launch
continues under gravity, providing the extra height needed to clear the lip.

## Transitions and scope

Landing changes native airborne state 2 to grounded state 0 at `0x4d89e3`.
The ground branch no longer uses the ballistic vector; the impact callback
zeros its Y at `0x4dc621`. Clearing the portable controller's separate wind
carry on landing prevents stale carry from leaking into later movement.

The native ordinary-jump path replaces the previous ballistic vector with the
current input/external vector, substitutes jump speed for Y (`0x4d825f` through
`0x4d829a`), and can then add moving-support velocity. It does not explicitly
zero all X/Z movement. Clearing only the remake's old wind carry when starting
a new ordinary jump is consistent with replacing that old contribution; full
native ordinary-jump input/support momentum is outside this narrow fan repair.
Returning from native collision-free movement clears the ballistic vector at
`0x4d8b7f..0x4d8b8b`.

The runtime repair in `src/collision.js` retains the authored trigger values,
refreshes positive wind launches each tick, retains wind carry after leaving,
and uses the native half-gravity displacement integration. Its
`launchVelocityXZ` stores only wind launch momentum; ordinary horizontal input
continues to use the existing controller behavior. This is a bounded wind
repair, not a claim that all native jump/support momentum is reproduced.
Landing, no-clip and ordinary jumping clear old wind carry. The shared
`resetVelocity()` also clears it during teleports, respawns, fall resets and
cheat transitions. Swept collision, enabled-trigger checks and no-clip isolation
are preserved. No fan speed or source asset was edited. Exact native collision
solver details and every unrelated movement state have not been reconstructed
by this audit.

## Focused verification

The physical scene check walks RedCat into the actual `wind03` stream from
outside its bounds, releases movement input above the fan, and lets the authored
wind lift and carry him onto the return platform. It uses the original cave BSP
collision, with no jump, no-clip, speed override or teleport after the starting
position. After landing, normal forward movement carries him onto the platform
center while grounded.

| Update rate | Maximum feet Y | Platform landing Y | Landing time |
| --- | ---: | ---: | ---: |
| 20 Hz | 170.0500 | 160.05 | 1.800 s |
| 60 Hz | 170.6056 | 160.05 | 2.150 s |
| 120 Hz | 168.8556 | 160.05 | 2.125 s |

All focused checks passed:

```sh
node --test tests/vertical-fan.test.mjs
node --test --test-name-pattern='a fan drives|original cave spring-box' tests/environment-interactions.test.mjs
node --test --test-name-pattern='no-clip crosses' tests/cheats.test.mjs
node tests/vertical-fan-scenes.mjs
```

The four controller checks cover airborne launch refresh at all three rates,
leaving/disabling a stream, retained momentum and resets, ceiling/floor
collision, and the native ordinary-jump apex. The three selected existing
checks cover horizontal fan collision, spring-box launching and no-clip
transitions. No unrelated suites were rerun. Scene results are recorded in
`artifacts/vertical-fan-scenes.json`, with no browser or HTTP errors; the lift
and recovered-platform screenshots were inspected. No release build was made.

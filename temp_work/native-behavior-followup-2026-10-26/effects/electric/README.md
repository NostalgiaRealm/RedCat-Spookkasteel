# Native Electric explosion recovery

Investigated 26 October 2026. Reference: installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
The original installation and CD were read-only. Decompiled C is inspection
pseudocode, checked against original instructions where types/order mattered.

This branch is disabled in every shipped actor with explosion settings. It is
recovered dormant functionality, not a new campaign-crate effect. Presentation,
asset inventory and renderer integration are documented in
[`docs/explosion-variants-native.md`](../../../../docs/explosion-variants-native.md).

## Original call chain

| Address | Confirmed meaning |
| --- | --- |
| `0x58da3c–0x58dbcc` | RcExplosion's independent Electric byte `+0x174`, gated on Display/Effects exactly 3, creates one generator cell per blast. Initial X is signed `30 + rand()%10000 * .001`; Y is `350 + rand()%10000 * .01`; Z is `rand()%10000 * .008 - 40`; all are halved. Cell gravity is 9.8, repeat interval 300 ms, lifetime 699 ms. |
| `0x4ad9a0`, `0x4ad9c0`, `0x4b58f0` | Cell emits immediately, then at 300 and 600 ms. Each child path copies the cell velocity/gravity, receives a lazy 1000 ms lifetime and interval endpoints .1/.13 seconds, and is added to the SubLevel. |
| `0x4b5ce0`, `0x4b6220` | Path's reference Y velocity first loses `elapsedMs * 9.8 * .032`. First tick bursts immediately; subsequent intervals are lazily armed on the following tick and expire only when `now > deadline`. After emitter logic, base sprite movement uses the previous actual velocity; the newly selected velocity is installed afterward at `0x4b77c0`. |
| `0x4b6380` | The loop condition draws `rand()%11 + 10` on **every iteration**, including its last failed test. Burst counts range 10–20 but are not uniform. Each normalized random direction is multiplied by speed 60. |
| `0x4b66a0` | Override each Spark's constructor lifetime with integer `300 + rand()%10000 * float(.02)`, giving 300–499 ms, and set gravity factor 1.5. |
| `0x4b677f` | Draw `rand()%20`; only 0–5 produce `spark1.wav`–`spark6.wav`. These are positional one-shots at default volume/pitch, not six unconditional/looping sounds. |
| `0x4b68..0x4b76` | New path sprite scale .3–.5; size percentage 100→0–10; alpha percentage 60–80→0–20. These fields are **size/alpha percentages**, not RGB. The first actual scale is cached by the base sprite; subsequent bursts change endpoints but do not replace that baseline. Pick one of spark sprite frames 01, 04, 05, 07, 08, 09. New path direction is normalized random XYZ in the same hemisphere as the gravity-updated reference velocity, at its magnitude. |
| `0x591840`, `0x56eef0`, `0x56e970` | Base sprite handles lazy lifetime, scale/alpha interpolation and translation. No base path gravity is enabled; reference gravity above influences later turns. Sprite RGB stays white. The sprite is a Genesis textured point: scale multiplies bitmap dimensions. |
| `0x4e48a0`, `0x4e4bc0` | Spark has a lazy strict-expiry lifetime. Head first moves by `velocity * dt * float(.7)`, then Y velocity loses `1.5 * 50 * dt * float(.7)`. Tail stays at birth until head/tail separation reaches float(1.92); it starts moving on the **next** tick using its own original velocity and the same gravity order. There are no geometry collision checks. |
| `0x4e4c80`, `0x5b2ec0` | World-oriented tapered quad. Choose signed Y axis; if direction is within componentwise float(.1), choose signed Z. Side is `normalize(cross(direction, axis))`. Tail half-width .16, head .32. Point order: tail+side, tail−side, head−side, head+side. UV order: (1,1), (1,0), (0,0), (0,1). RGBA interpolates [250,240,180,255]→[244,213,102,60]. |

### New actor scheduling, now recovered

`0x4f41c0` attaches a GO to its SubLevel. `0x5028d0` adds an enabled GO's
update node through `0x4f62e0` → `0x4fd100`. The list stores its **tail** and
appends the new node there (`previous = old tail`, `next = null`).

`0x4f5170` obtains the update iterator through `0x4f4900` (+0x54 active-list
field), captures the current tail and dispatches through `0x502e40`. It then
advances through **node+4, the previous link**, at `0x4f56e8–0x4f56fb`.
Consequently a child added during that callback is first updated on the next
SubLevel pass. Existing paths are visited newest-first. The helper now follows
both rules. A Spark born during a path burst has an unarmed lifetime and an
unmoved head/tail until its following update.

Retained scheduler evidence: `sublevel-tick.asm`, `sublevel-iterator.asm`,
`linked-list-add.asm`, `go-setsublevel.asm`. The scheduler's original variable
time slicing is separate from the port's deliberate fixed visual clock.

### Trail resource boundary

The path constructor requests `grobber_trail3.bmp`. Its trail color is
[250,250,200], half-width .64, distance-based knot threshold 16 units and fade
duration 300 ms. `0x5871a0` fixes the previous endpoint at a turn;
`0x5871f0` moves the current head; `0x587550` multiplies its age fade by the
parent sprite alpha and skips segments only when both endpoint alphas are ≤5.

The exact bitmap is absent from both original installation and mounted CD;
see `missing-trail-artwork.json`. Native `0x50b6f0` logs failed file opening and
`0x50d980` asserts a non-null bitmap result. That is static failure-path
evidence, not a claim of a forced live Windows crash. The port retains trail
state but omits this unavailable art; it does not invent another trail or
reproduce the assertion. All six sprite pairs and the short-streak
`spark.bmp`/`spark_a.bmp` pair exist and are imported separately.

## Implementation and validation

`src/electric-explosion-native.js` provides per-blast create/step/snapshot/
restore operations plus isolated Spark physics and quad geometry. It advances
on a fixed 60 Hz visual clock, at most six ticks per ordinary call. Missing or
invalid legacy snapshots reconstruct silently once, capped at 151 ticks; the
finite native effect ends before 2.5 seconds. Valid snapshots preserve path
positions/velocities, lazy deadlines, RNG, textures, trails and Spark heads,
tails and control flags. Validation bounds arrays, fields, clocks and recursion
depth, so corrupt imported state falls back instead of stalling or overflowing.

Private deterministic MSVC-style randomness preserves the native draws and
distributions within this effect without altering ordinary explosion or AI
randomness. It is **not** the original process-global random sequence. Fixed
visual ticks, bounded catch-up and suppression of crackles more than 100 ms
old preserve the port's performance and audio-continuity adaptations. No
existing music/ambient scheduling was changed.

- `helper-tests.tap`: **9/9** focused source checks, covering quality gating,
  lazy timers, newest-first bursts, original movement fixtures, world-oriented
  geometry, 10/20/30/60/120/240 Hz equivalence, exact save continuation,
  bounded catch-up and malformed state (including 15,000 nested objects).
- `spark-kernel-probe.py` / `spark-kernel-probe.json`: executes the original
  `0x4e4bc0` instruction bytes in isolated Unicorn memory, without Windows,
  audio or renderer calls. **16/16** trajectories matched the portable kernel
  within the stated float tolerance; maximum difference <0.000008 units.
- `generator-path.asm`, `sprite-base.asm`, `factory-cell.asm`, `constants.json`,
  `vtables.json`, `texture-sound-globals.json` preserve supporting evidence.
- Renderer/asset checks are recorded separately by the presentation agent in
  the linked project document. No package builds or unrelated test suite ran.

Remaining boundary: no live original Windows rendering comparison for this
dormant branch, missing original trail artwork, process-global RNG sequencing,
native floating-point storage differences, and display-dependent versus fixed
visual timing. The kernel/dispatch findings do not establish whole-game parity.

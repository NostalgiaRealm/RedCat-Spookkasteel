# Player movement: native evidence and portable integration

Reference: the installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`,
and its `Settings/Game.ini`, `Settings/Player1.ini`, and
`Settings/PlayerDef.ini`. Addresses below are executable virtual addresses.
The recovery used static disassembly; it did not modify the installation.

## Settings that actually reach movement

The settings constructor at `0x521de0` creates the six speed properties.
Their offsets are `+0x2fc` WalkForward, `+0x368` WalkOther, `+0x3d4`
RunForward, `+0x440` RunOther, `+0x4ac` AirForward, and `+0x518` AirOther.
The float cache is at property offset `+0x60`. Adam player construction
`0x4d57b0` scales these values by units per meter, obtained through
`0x431000`; the installed value is 32.

| Setting | Installed value | Runtime global | Constructor store |
| --- | ---: | --- | --- |
| WalkForwardSpeed | 3 | `0x6b92c0` | `0x4d5b2c` |
| WalkOtherSpeed | 4.9 | `0x6b92c4` | `0x4d5b6c` |
| RunForwardSpeed | 4.9 | `0x6b92c8` | `0x4d5bac` |
| RunOtherSpeed | 4.5 | `0x6b92cc` | `0x4d5bec` |
| AirForwardSpeed | 1 | `0x6b92d0` | `0x4d5c2c` |
| AirOtherSpeed | 1 | `0x6b92d4` | `0x4d5c6c` |

`Acceleration=20` is read, scaled, and stored at `0x6b92ac` by
`0x4d59ec`. The executable has no subsequent reference to this global.
It therefore does not establish a native acceleration, friction, or
deceleration ramp. The observed input speed selection is immediate.

Similarly, the RC settings constructor loads `StrafeSpeed=2` into
settings `+0x818` at `0x494dfa`, and `WalkBackwardSpeed=3` into `+0x81c`
at `0x494f1b`. RC player construction scales these into player `+0x374`
and `+0x378` at `0x430bef` and `0x430c07`. No RC movement read of either
player field was found. Backward and sideways motion instead consume the
selected **Other** speed. These unused settings must not become new
behavior just because their names seem applicable.

## Input normalization and native controls

The raw input builder `0x482110` combines the named movement and turn
actions into a vector. It measures length at `0x482854` and normalizes
only lengths greater than one through `0x482891`. Keyboard diagonals
therefore initially contain components of magnitude `1/sqrt(2)`.
This happens **before** directional speed selection; there is no second
normalization after scaling the speed components.

The ordinary RC camera/input rewrite `0x434f20` then changes that vector:

| Native action combination | Translation after rewrite |
| --- | --- |
| Forward, optionally with TurnLeft/TurnRight | `(0,0,-1)` with changed facing |
| Backward, optionally with TurnLeft/TurnRight | `(0,0,1)` with changed facing |
| TurnLeft/TurnRight alone, ControlMode 1 | `(0,0,0)`; turn in place |
| MoveLeft/MoveRight | `(raw.x,0,0)`; preserve yaw |
| MoveLeft/MoveRight plus Forward/Backward | `(raw.x,0,0)`; discard longitudinal component |

Consequently forward-plus-turn gets the full Forward scalar, while a true
strafe-plus-forward combination gets Other divided by `sqrt(2)` sideways.
Evidence: ControlMode 1 zero translation at `0x43520d–0x435225`, forward
rewrite `0x43526d`, backward rewrite `0x435338`, and strafe rewrite
`0x435343–0x43537d`. Zero raw input bypasses this rewrite through the
moving-flag test at `0x43449d`. The vector setter `0x437770` only copies
the components.

Installed keyboard bindings distinguish `Right=TurnRight` from
`Alt+Right=MoveRight`; similarly for Left. Alt also activates Walk, and
AlwaysRun is enabled. The portable game's camera-relative keyboard,
mouse, and touch controller is a control adaptation. In particular,
its abstract right input can translate and jump along +X; that should
not be described as the original default Right-arrow action.
Special player flag `+0x364` bypasses parts of the ordinary rewrite.

## Live velocity and grounded displacement

Adam frame update `0x4da970` selects the speed pair at
`0x4dad35–0x4dad94`. State 2 selects AirForward/AirOther; otherwise the
walk flag selects WalkForward/WalkOther or RunForward/RunOther.
At `0x4dad9a–0x4dade8`, it multiplies the local input vector by Other,
then replaces negative Z with input Z times Forward. It rotates this
vector by the current yaw at `0x4dadec–0x4dae11`.

The environmental `AddPlayerSpeed` vector, player `+0x1b4/+0x1b8/+0x1bc`,
is added after rotation and scaled by 32 at `0x4dae2a–0x4dae3d`.
Call this combined result `liveV`.

The RC player overrides the Adam movement function: player vtable
`0x64c430`, slot `+0x54`, points to **`0x435490`**, called at
`0x4dae67`. The inherited Adam routine `0x4d7ab0` alone is insufficient
to recover RC movement.

RC computes `1.4 * liveV * dt` at `0x43558a–0x4355e1`, with constant
`0x64c5a8`. The grounded sweep consumes this displacement at
`0x435732–0x43574b`; its ordinary fallback also uses the same vector
at `0x435966–0x435997`. This is an actual travel multiplier, not merely
a collision look-ahead: the downstream sweep commits `position + dir`
on a clear path (`0x4d73ff`, `0x4d74c4–0x4d74d5`) and the RC function
returns that candidate position (`0x436323–0x43633d`).

Free grounded forward run is therefore `4.9*32*1.4 = 219.52` units/s;
forward walk is `3*32*1.4 = 134.4` units/s. Other run is 201.6 and
Other walk is 219.52. The multiplier also applies to environmental
velocity because that is already included in `liveV`.

## Takeoff, falling, and air control

The stored launch velocity is player `+0x174/+0x178/+0x17c`; it is
separate from fresh input velocity. Normal jump handling occurs after
the grounded sweep at `0x435a3b–0x435a82`:

1. Copy **unmultiplied** `liveV` into stored launch velocity.
2. Replace launch Y with the ordinary jump speed at player `+0x194`.
3. Set airborne state 2; add supporting-platform velocity if present
   (`0x435a95–0x435a9f`).
4. Return without an airborne gravity/displacement integration that tick.

Jump speed is `sqrt(2 * JumpHeight * Gravity)` after both settings have
been scaled to world units (`0x4d5df3–0x4d5e03`). Installed values are
41.6 units of height and gravity 800 units/s², giving about 257.992 units/s.
The native grounded multiplier is **not** copied into launch X/Z.

Loss of support during grounded travel stores
`liveV + (0,-WalkOtherSpeed*32,0)` at `0x435a06–0x435a1d`, then adds
platform velocity if present (`0x435a2c–0x435a36`). With these settings,
the initial downward component is -156.8 units/s. Idle support loss
uses the downward vector alone (`0x435704–0x43571a`). An ordinary jump
accepted later in that same grounded branch can replace this fall launch.

Air states 2/3 enter `0x435aa9`. The ordinary free-flight calculation is:

```text
launch.y -= gravity * dt / 2
combined = liveV + launch
launch.y -= gravity * dt / 2
if superJumpLatch:
    combined.x *= 0.4
    combined.z *= 0.4
displacement = combined * dt
```

The two half-gravity updates are at `0x435b38–0x435b90`; velocity addition
is `0x435b68`; the horizontal multiplier is `0x435b98–0x435bb0`;
the final dt scaling is `0x435bbd`. Live air control is 32 units/s with
the installed AirForward/AirOther values. For example, ordinary forward
run takeoff carries 156.8 units/s, and continuing forward adds 32,
giving 188.8 units/s before collisions. Air has no 1.4 multiplier.

Releasing movement removes fresh air control but preserves launch X/Z.
No jump-release velocity cut occurs in this integrator. A head impact
can zero upward launch Y (`0x435e01–0x435e1b`); landing returns to
grounded state and clears the superjump latch (`0x435ff7–0x43600d`).

Positive environmental Y has a separate entry condition:
`0x435507–0x43553b` forces airborne state and refreshes the entire stored
launch vector from `AddPlayerSpeed*32` before dispatch. The current
`liveV` already includes that same environmental vector. Thus an active
upward fan contributes once through refreshed launch and once through
fresh environmental velocity. Refreshing replaces old horizontal carry.
This condition does not itself enable the 0.4 multiplier.

## SuperSkippie latch and animation interaction

The airborne branch requires skill bit 8 and a successful tap timing
query. `0x435b14–0x435b27` replaces **only launch Y** with
`ordinaryJumpSpeed * SJumpHeightFactor` and sets player byte `+0x370`.
The installed factor .89 is a velocity factor. Launch X/Z are retained.
Byte `+0x370`, not ability ownership or generic airborne state, gates
the 0.4 scaling of the **whole** combined horizontal vector, including
input, environmental velocity, and launch carry.

The native jump frame query is held state: `0x437617` calls provider
`0x482a40`, whose action query passes a zero timing/edge argument through
`0x544ce0`. The optional edge/repeat path at `0x544fbf–0x544fc5` is
bypassed. `0x4366b0` measures the interval since its preceding airborne
held-jump query and updates that timestamp on both success and failure.
Its accepted interval is `120 < gap <= 550` ms. Releasing jump allows
an interval to accumulate; holding it queries again each frame.

The latch also acts as an animation trigger. The RC frame function
`0x432420` calls physics at `0x432522`, then later considers animation.
When the jump animation branch runs, `0x432e0a` reads the latch,
`0x432e9e` plays `jump2` at 1.3×, and `0x432eb9` clears the latch.
However, native animation switches are skipped if the requested animation
state equals its previous value (`0x4329f1–0x432a09`). A normal jump
sets state 6 at `0x432774`, and ordinary forward/no-input flight can
retain state 6 while height above the floor is nonzero
(`0x4327ce–0x4327dd`, `0x43289b–0x4328aa`). A later boost in this state
can therefore retain the slowdown latch until landing rather than
immediately consume it. A boost that newly selects state 6 can clear it
in the same update. It is not sound to describe native slowdown as
unconditionally one frame, or unconditionally the whole flight.

The portable game intentionally retains the existing correction that
selects and restarts `jump2` immediately on a successful boost. Applying
the native latch consumption at that immediate selection gives a single
boost-tick 0.4 multiplier in the portable controller. This is an explicit
animation integration choice, rather than a claim that every native
animation-state history clears the latch that quickly. The separate
portable one-boost-per-flight guard remains described in
[player-abilities-native.md](player-abilities-native.md).

## Scope

This recovery establishes free displacement, speed selection, launch
carry, environmental-vector composition, and the relevant native gates.
It does not replace the portable BSP/axis-aligned hull collision implementation
with the original Genesis3D sweep, stair, slide, or moving-platform
solver. Camera-relative keyboard/mouse/touch controls and immediate
`jump2` selection remain deliberate adaptations. Tests of native scalar
values and the actual graveyard staircase validate the portable
integration; they do not prove frame-for-frame native collision parity.

The moving-brush handoff measures committed support carrying over the current
simulation tick and adds that velocity once to a jump or fall launch. Rejected
moves and door side pushes do not add launch momentum. This uses the portable
brush transform sampler, including rotation, rather than replacing it with the
native platform solver. Saves now retain the launch vector, vertical velocity,
support state and jump phase. Old saves without these fields start at rest.

Focused checks: `tests/player-movement.test.mjs`, the three existing named
SuperSkippie/staircase/jump2 checks, `tests/vertical-fan.test.mjs`, and the affected
support-carry checks in `tests/moving-solids.test.mjs`. Source-browser checks in
`tests/vertical-fan-scenes.mjs` reach the original recovery platform at 20, 60
and 120 Hz; `tests/movement-muzzle-scenes.mjs` verifies midair saving through the
actual menu load path and rendered enemy muzzle integration. No builds or
packages were generated.

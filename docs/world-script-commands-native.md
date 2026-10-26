# Native world-script commands and button completion

This follow-up compares the current port with the preserved installed
`RcHcGame.dat` and its whole-program Ghidra export in
`../../RC_ORIGINAL_DECOMPILED/`. It corrects concrete controller and contact contracts;
it does not replace the port's collision safety, automatic contact activation,
streaming, maze recovery, or intentional audio scheduling.

## Button requests must finish their current movement

`CAdamButtonModel` command handling at `0x4cb8d0` calls `0x4cb110`, which sets
one pending request byte at object offset `+0x16c`. The tick method at
`0x4cb420` only consumes it in settled states 1 and 5. States 3 and 7 finish
moving to the path endpoint before states 4 and 8 run the corresponding
`AfterSwitchOnCommand` or `AfterSwitchOffCommand`. Repeated requests during
travel therefore do not reverse the brush immediately or cancel its endpoint
callback.

Previously the port immediately reversed a moving button. Repeated contact or
shots could prevent an authored endpoint callback from running. It now stores
one pending explicit switch while the button is moving or disabled, runs the
existing endpoint callback, and then consumes the request when settled and
enabled. Requests that already match the current logical state do not cancel
a queued opposite request. The pending
request is included in saves. The original Castle `knopdisc01` test verifies
that repeated presses still run its bookcase-opening callback, including when
saving during the movement. This is a real shipped interaction, not an
invented test-only button.

The port now follows all eight recovered native phases, with separate
controller checks for accepting a request, sound/Before callback, motion, and
After callback. Sound precedes Before. The on completion callback sees phase
4 before settling at 5; the off callback sees settled phase 1. The strict
endpoint comparison and float32 millisecond multiplier/time storage match the
native branches. Phase and pending requests survive saves, including saves
between acceptance and sound or between reaching the endpoint and After.
Older moving saves migrate directly into travel without replaying sound.
An unfinished saved pose strictly between its from/to endpoints also resumes
correctly after Enable when its legacy motion record is paused. The previous
port's Disable path did not normally pause buttons, so this is defensive old
snapshot compatibility, not a claim that all ordinary old saves were broken.
Cutscene skipping now recognizes queued button work, deferred endpoint
callbacks and pending controller targets before deciding no motion remains.
Disabled work stays pending. The new deferred-state scenario is tested as an
isolated callback chain alongside the original Forest, fairy and Caves boss
skip sequences; no shipped single handler combining Switch and Start/Stop
was found in the complete script listing scan.

Physical contact (`0x4cb3a0`) and shooting (`0x4cb3f0`) are accepted only in
settled states 1 and 5. Walking, standing or firing at a moving button cannot
queue repeated sounds or callbacks. Continued contact may switch it again
once settled. Explicit script commands independently latch one request during
motion or while disabled. The defensive motion-less button fallback retains
its contact latch; shipped buttons have authored motions.

Reset (`0x4cb9a0`, reached through the button vtable's `+0x5c` slot) clears the
request/count, restores the authored enabled state, and seeks the end for an
initially-on button or zero for an initially-off button. The intentional maze
recovery also cancels a request queued immediately before death, so the new
request phase cannot accidentally start its exit cutscene during dying.

The logical on/off flag now follows the phase assignments themselves, as
`0x4cb8d0` does. If a callback resets its own button, the native Before/After
ordering still chooses the correct next phase and endpoint callback; the
portable duplicate flag cannot remain stale. Restored phases also repair that
duplicate flag. All five recovered scripts declare Reset but contain no call,
so this callback edge is dormant API coverage, not a newly found campaign bug.

`native-button-fsm-probe.py` executes the actual `0x4cb420` instructions in
private emulator memory. Only engine dependencies are substituted: sound and
script callbacks are recorded, proximity returns false and the motion
transform accepts a pose. The matching JavaScript differential trace compares
phase, motion time, request latch, count and ordered callbacks across 16
checks, both directions and an explicit mid-motion request: zero mismatches.
This verifies the controller kernel, not native rendering/collision or the
entire campaign.

## Explicit Trigger is an Enter/Leave pulse

`CAdamTriggerModel::Trigger` at `0x4d4310` checks the use limits, increments its
counter, and, once the minimum has been reached, invokes virtual slots `+0x64`
and `+0x6c` in succession: enter and leave. It does not test the automatic
interaction enable flag. Physical entry is separately handled by the tick FSM
at `0x4d3680`.

An explicit Davi `.Trigger` now fires both callbacks even if automatic contact
is disabled. Physical entry keeps its enable check.
The existing minimum and positive maximum limits still apply, so the Graveyard
paired-door counter and Caves altar aggregate gates do not unlock early.
`MaxTriggerTimes` and `MaxSwitchTimes` values at or below zero mean unlimited
in the native branches (`0x4d4310`, `0x4d3680`, `0x4cb420`); zero no longer
blocks them or removes a shootable button from targeting. All five shipped
levels currently use negative unlimited values or positive limits, so the zero
case fixes the API contract without changing authored use budgets.

## Occupied trigger state follows the native phases

`0x4d3680` has four states: waiting, newly entered, occupied, and just left.
While waiting and inside, the minimum counter advances on each controller
check, rather than requiring repeated exit/re-entry. Reaching the threshold
sets the new-entry state before invoking Enter. The next check advances to
occupied and invokes Stay even if RedCat has already left; an occupied check
outside then invokes Leave, and the following check returns to waiting.
Damage from `0x4d3e00` belongs to Stay, so exhausted triggers no longer continue
to damage RedCat or emit Leave without accepting an entry.

The new `trigger-contact-native.js` keeps these four phases, including saves
and migration of old occupied save entries. Reset and the deliberate maze
recovery clear them. Each check adds only constant-time state work inside the
existing interaction pass. Fan velocity queries remain geometric: their
ordering relative to the original player movement step was not recovered,
and changing the query itself broke valid independent velocity sampling.
The existing intentional fan movement correction is preserved.

## ModelController target commands replace repeat mode

The native `MoveTo` and `SetTo` handler at `0x4d2af0` clamps a target to the
motion's path extent and replaces repeat mode with mode 3. `0x4d23d0` consumes
that command during a subsequent enabled controller tick. `MoveTo` advances
from the current position, including a previously completed endpoint; `SetTo`
jumps once. Reaching a commanded target keeps the controller enabled and
settled. It does not restart the authored loop on a later enable.

The port previously kept the authored loop for `MoveTo`, reset completed
controllers to the start, and only sought `SetTo` while allowing an existing
loop to continue. The new `model-controller-target.js` isolates target mode,
retains pending commands while disabled, preserves them through saves, and
clears the override on Reset and when restoring an older save without target
state into an already-used host. Settled controllers avoid repeated transform
updates. Collision guards and cancellation when a marker starts a replacement
command remain intact.

For ordinary non-repeating motion, `0x4d23d0` disables at the endpoint;
`0x502350` only changes enable state and never rewinds the motion. Re-enabling
such a completed controller now leaves it at its endpoint without replaying
its endpoint marker. Reset (`0x4d3140` / `0x4d09a0`) restores the authored
`InitialPosition`, rather than always the path start.

`SetTo` follows the native forward label iterator: `0x4d1740` calls
`0x5bdde0`/`0x5bde60`, then `0x5d77a0`/`0x5d7800`; the interval includes the
old time within its small epsilon and excludes the new endpoint. A backwards
SetTo emits no intervening labels. A blocked collision retry does not replay
markers already dispatched during that command; this preserves the port
safety contract. Reverse MoveTo passes the interval in ascending timestamp
order, as native `0x4d23d0` does, rather than reversing its label order. Both
operations dispatch labels while the old pose is still active, before the
final transform/carry collision guard. A callback can therefore supersede a
command before its stale pose carries RedCat. MoveTo settles only after its
proposed time strictly passes the target. A validated immutable marker mask
preserves already-dispatched labels across blocked/disabled retries and saves.
This is a bounded portable retry safeguard; it does not claim native collision
failure behavior is identical.

All five DSO modules declare MoveTo/SetTo, but the complete instruction scan
found no call sites. This part corrects a recovered native API contract; it is
not presented as a newly discovered campaign blocker. None of the five levels
contains an `ElevatorModel` entity: their lifts use DoorModel or ModelController.
The native elevator tick was inspected, but no unsupported lift gameplay was
invented or added.

## Verification and boundaries

- Twenty-five focused checks in `tests/world-script-commands-native.test.mjs`
  pass. They cover target-mode timing, save/enable/reset behavior, same-host
  older saves, bounds, marker callbacks, collision refusal, replacement
  commands, explicit and occupied trigger limits/phases, disabled button
  requests, settled physical/shot contact, each button phase, save migration,
  endpoint collision refusal, Reset, original Caves counter callbacks, and
  the Castle bookcase callback under repeated requests. The Caves check
  isolates aggregate callbacks from cinematics; it is not a campaign
  playthrough.
- Eight additional target-order checks in
  `tests/model-controller-target-order.test.mjs` pass, covering reverse
  intervals, strict completion, old-pose callbacks, cancellation before carry,
  blocked/disabled retry and saved marker progress.
- Thirty-three related checks cover `graveyard-maze-respawn`, `vertical-fan`,
  `bookcase-touch`, `environment-interactions`, and `painting-spider`, including
  one new immediate-death-before-button-acceptance regression. Fixtures that
  assumed instant switching or instant endpoint completion now wait for the
  recovered button phases. The final log manifest records **71 distinct passing checks** across these
  groups; selected overlapping integration reruns are identified separately.
- Five existing cutscene-skip checks also pass after deferred-work detection.
- Three earlier `graveyard-door` checks passed for the paired gate, saves
  during opening, and disabled player interaction; their historical log is
  retained separately.
- The native door stay-open timer starts after the opening endpoint and
  AfterOpen callback, and waits for RedCat to leave the radius. The current
  implementation already has this ordering; it was not rewritten.
- These checks do not establish all floating-point motion/event boundaries,
  collision-engine equivalence, or the ordering of trigger
  velocity changes relative to the player movement step.

Retained evidence and exact outputs are in
`temp_work/native-behavior-followup-2026-10-26/world/`, including the reproducible
five-level command/usage inventory. No original installation files, imported
level data, builds, or published releases were changed by this follow-up.

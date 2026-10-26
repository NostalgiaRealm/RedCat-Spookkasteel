# World command follow-up, 26 October 2026

Primary implementation report: `../../../../docs/world-script-commands-native.md`.
Native source evidence: sibling `RC_ORIGINAL_DECOMPILED/decompiled/RcHcGame.dat/functions/`:

- `004cb110`, `004cb3a0`, `004cb3f0`, `004cb420`, `004cb8d0`, `004cb9a0`: button request latch, endpoint FSM, command selection.
- `004cc580`: door open/close FSM and stay-open timer after AfterOpen.
- `004cf330`: ElevatorModel FSM; no shipped entity instances found.
- `004d09a0`, `004d23d0`, `004d2af0`, `004d3140`, `00502350`: controller mode 3, target setters, Reset.
- `004d1740`, `005bdde0`, `005bde60`, `005d77a0`, `005d7800`: motion label iteration.
- `004d3680`, `004d4310`: automatic trigger FSM versus explicit Enter/Leave pulse.

`inventory-world-commands.mjs` writes `world-command-usage.json` by scanning
all five current typed DSO IR programs and their imported entities. The
original DSO images are byte-preserved in the standalone decompilation output.

Retained test logs record the progression, including unsuccessful experiments
and fixture corrections; none was cleared:

- `focused-tests.txt`: first run and two fixture mistakes (a marker replacement
  retriggered itself; the Caves fixture omitted its opening-scene gate lock).
- `focused-tests-final.txt`: corrected first nine new checks.
- `focused-tests-final-with-button-queue.txt`: ten checks including the real
  Castle bookcase request/save case.
- `focused-tests-contact-phases.txt`: initial 15 contact/controller checks.
- `focused-existing-contact-checks.txt`: exposed a discarded fan-query change,
  an undefined optional snapshot property, and a motion-less button fallback
  that needed its original contact latch. All were corrected.
- `focused-contact-final.txt`: final combined **47/47**, including **32**
  existing affected checks and the first **15** new checks.
- `focused-new-world-final.txt`: final **16/16** new checks, now also verifying
  the disabled button explicit-request latch and same-state request behavior.

The three earlier Graveyard door checks are preserved in the first log.
No whole-suite or package tests were run and no builds were created.

## Full button FSM follow-up

`src/button-controller-native.js` now implements the recovered eight phases.
`native-button-fsm-probe.py` executes the original Tick instructions with
bounded engine hooks, producing `native-button-fsm-probe.json`.
`button-fsm-differential.mjs` compares the actual port against its trace:
**16 checks, zero mismatches**, covering both directions, queued explicit
requests, callback ordering, counters and float32 pose timing.

`native-button-fsm-probe.log` retains the first harness failure (the proximity
hook initially omitted its one stack argument); the corrected successful
output is `native-button-fsm-probe-final.log`. No native bytes were changed on
disk and all emulation used private mapped memory.

`button-fsm-final-checks.txt` records the initial 24 passing focused cases.
`button-fsm-affected-final.txt` then records 49/53 passing: four old puzzle
fixtures assumed immediate button acceptance/completion. Their waiting logic
was corrected to the recovered timing. `button-fsm-maze-painting-final.txt`
records all 18 cases passing, including the new immediate-death queued-request
case. Other passing groups in the earlier affected run were not rerun merely
because unrelated fixture assertions changed.

`vm-review/` records an independent review of root's Davi conversions and a
new original-code probe for STRING-to-DOUBLE: the shipped parser accepts `D`
exponents, rejects literal Infinity and non-C whitespace, and preserves -0.
The VM owner received these results for correction and verification.

## Final applicable logs

`final-verification-logs.json` is the consolidated manifest. Final source
verification is **62 distinct passing checks**: 21 world-command checks,
8 target-order checks, 18 maze/painting checks and 15 other affected contact
checks. The separate six-case selected integration log overlaps the 21 and
must not be added again. `world-commands-final.txt` includes the reviewed
MoveTo/SetTo callback-order corrections. `button-fsm-contact-final.txt` is the
clean final 15-case log after state/snapshot normalization. Historical failed
or superseded logs above remain for traceability.

The final save/skip review supersedes the 62-case total above: the manifest now
records **69 distinct passing checks**. `world-save-skip-final.txt` contains
23 world checks (including legacy paused-button migration and deferred skip
work) plus five original cutscene-skip checks, all passing. No normally
produced pre-fix Disable save was found to pause buttons; the paused-motion
migration is defensive compatibility for such stored snapshots. An authored
single-handler Switch+Start/Stop combination was not found, so the new skip
edge is explicitly an isolated callback-chain check alongside real campaign
skip sequences.

## Final callback-state review

The final independent source review found one additional dormant callback edge:
Reset inside a button's own callback changed the duplicate `switchedOn` flag,
then native phase assignment continued without restoring the flag. BeforeOn
could consequently call AfterOff. The port now derives logical state from each
assigned phase, including restore, matching `004cb420`/`004cb8d0`.
`button-callback-review-final.txt` contains two new checks (all four callback
positions and all eight restored phases) plus four affected checks: six pass.
The command inventory now explicitly records zero Reset method calls across
all five original programs. This is dormant API correctness.
The sixteen-tick original-code differential still has zero mismatches.
The final manifest now records **71 distinct passing checks**, with overlap
explicitly excluded from that count. Earlier logs remain retained evidence.

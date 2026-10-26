# Final source review — 26 October 2026

Scope: read the changed button/controller/trigger save/skip paths, prop-debris
save hooks and validators, and the primary follow-up documents. This was not a
full suite, gameplay playthrough, package test or independent re-execution of
all VM probes. The earlier dedicated VM parser review remains in `vm-review/`.

## Resolved finding

`button-controller-native.js` previously maintained a phase plus independent
logical on/off flag. A self-Reset during BeforeOn reset the flag, then Tick
continued into phase 3; ScriptHost completion selected AfterOff from the stale
flag. A self-Reset during AfterOn left phase 5 with its logical flag false.
A small direct source fixture reproduced both cases before editing.

The original `004cb420` overwrites its phase after BeforeOn/BeforeOff and
AfterOn, but before AfterOff. `004cb8d0` derives logical state from that phase:
2–5 are on; 1 and 6–8 are off. `setButtonPhase` now preserves those contracts
without ignoring Reset's pose/enable changes. Restored phases also normalize
the duplicate flag. The all-program instruction scan has no Reset method call,
so this is dormant callback/API coverage rather than a demonstrated campaign
blocker. The new tests cover all four callback placements and all eight saved
phases. Six selected cases pass, two new; the original-code sixteen-tick
button differential still reports zero mismatches.

## Other reviewed areas

- Legacy paused-button migration, disabled requests and skip runnable-work
  handling have scoped source coverage; the documentation distinguishes the
  defensive paused legacy case and isolated deferred skip chain from real
  authored sequences.
- Target commands now dispatch callbacks against the old timeline, retain
  collision/carry guards after callbacks and save validated callback masks.
  The docs correctly identify MoveTo/SetTo as unused by the shipped scripts.
- Prop-debris snapshots copy integrator data and actual integration timestamps;
  validation rejects unknown actors, invalid shapes, nonfinite values and
  oversized cohorts. Runtime callback fields are not imported. Empty saved
  cohorts are distinguished from absent legacy state. Retirement/disposal
  removes renderer hooks. The loader rebuilds the world before restoring the
  effect manager, so its ID cache does not reuse an old-world cohort.
- The follow-up documents explicitly bound original-code traces, source checks,
  shader comparisons, local RNG/fixed-step portability and unrecovered engine
  boundaries. They do not claim a new complete campaign run or exact source.

No additional actionable regression was found in this review. This conclusion
is limited to the paths above, not proof that all native branches or all player
routes are equivalent. See `final-verification-logs.json` for the final logs
and overlap-aware count of 71 distinct passing world-related checks.

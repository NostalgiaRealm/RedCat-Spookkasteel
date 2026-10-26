# Independent final cross-review

Read-only review by the gameplay agent, 26 October 2026. No additional test
suite, package build or native execution was run for this review.

## Prop-fragment save continuation

Reviewed `src/prop-debris-state.js`, its callers in
`src/destructible-effects.js` and `src/explosion-native.js`, the integrator in
`src/debris-native.js`, and the existing four focused save checks.

**No actionable issue found in the new save-state path.**

- Restores accept only actors listed in the source effect's debris types;
  particle count is bounded, vectors are finite, quaternion length is checked,
  ages/lifetimes/contact counts and fade timestamps are checked, and bounds
  must be ordered.
- The output copies a fixed set of physics fields and fresh arrays. Render
  meshes, materials, arbitrary imported fields and replay history do not enter
  the saved particle state. Callback names from imported JSON are invoked only
  when they are actual internal functions; otherwise saved data is used.
- The saved timestamp is the cohort's last integrated time, not a later
  gameplay clock value. Restoring advances only any outstanding interval;
  `restoredAt` prevents applying the same interval again during that redraw.
  Valid current-time state does not trace historical geometry.
- An intentionally empty cohort stays empty. Missing/invalid legacy state uses
  the existing bounded reconstruction path. Dead particles are filtered from
  snapshots and internal hooks are removed when an effect is retired/disposed.
- Native quaternion order, physics and modern collision/performance safeguards
  are unchanged by the save extension. Future contacts still use the restored
  world's current collision geometry, as intended.

This reviews fragment-state validation and integration; it is not a blanket
security audit of every field in the entire game save format.

## Davi formatting and coercions

Reviewed the current `src/davi-vm.js` diff, its Windows-1252 importer boundary,
`docs/davi-vm-opcodes.md`, and retained original-byte probe code/results under
`../vm/`. The existing 1,332-case differential corpus, 90 formatter boundaries,
string-to-double boundary results and focused source checks were inspected,
not rerun.

**No actionable issue found in the newly changed conversions/operators.**

- `%lg` uses the recovered two-stage 17-digit-to-six-digit rounding, handles
  carry into the next decimal exponent, uses the original fixed/scientific
  thresholds and three-digit exponent, and retains the verified zero and
  non-finite spellings.
- Integer parsing uses C-locale whitespace and wraps on every decimal digit;
  it does not depend on lossy `parseInt` for long inputs. Double parsing accepts
  the recovered E/D exponent grammar and preserves signed zero.
- The x87 truncation helper consistently handles the signed 64-bit range,
  keeps the low 32 bits and maps the native indefinite result to zero. Double
  remainder uses that quotient rather than JavaScript `%`.
- Windows-1252 byte ordering is consistent with the importer. Stored string
  length/ordering include embedded NULs while the native CRT case conversion
  terminates at NUL. ASCII-only case changes preserve the recovered C locale.
- Existing division-by-zero errors, host coercion checks, instruction budgets
  and call-depth limits were not weakened.

Exact CRT/transcendental arithmetic and x87 rounding outside the bounded
original-byte corpus remain numerical verification boundaries. This review
does not claim every possible binary64 input or every engine function is
bit-identical to the original.

## Electric adapter follow-up

A separate read-through of `src/electric-explosion-effects.js`,
`src/explosion-variants.js` and their explosion-state handoff found no additional
lifecycle/save/render issue. Per-blast origin/identity, future staggered births,
quality gating, zero-time audio suppression and retirement are consistent with
the helper interface. The final helper scheduler correction is backed by
SubLevel's reverse linked-list traversal; see
[`../effects/electric/README.md`](../effects/electric/README.md).
Missing native trail artwork is documented and is not replaced with invented
art. Renderer validation belongs to the presentation agent's retained checks.

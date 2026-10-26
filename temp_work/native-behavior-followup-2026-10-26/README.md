# Native behavior follow-up evidence — 26 October 2026

The user-facing change record is
[docs/native-behavior-followup-2026-10-26.md](../../docs/native-behavior-followup-2026-10-26.md).
The reference executable is the read-only installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.

## Start here

- `verification.json`: consolidated final evidence checks and source hashes.
  `verify-followup.py` checks retained results and file consistency; it does
  **not** rerun gameplay tests, build packages or publish anything.
- `world/final-verification-logs.json`: the world/controller test list and
  overlap accounting. Individual logs must not be summed as unique tests.
- `world/final-source-review.md`: independent review and the callback edge
  case found and corrected during that review.
- `world/final-cross-review.md`: independent final review of the VM, fragment
  saves and Electric adapter, without rerunning unrelated tests.
- `world/light-review/`: final original-byte light-clock comparison and affected
  source/save checks; these supersede the earlier three-check light prototype.

## Investigation groups

| Folder | Contents |
| --- | --- |
| `player/` | Shooting release/rearm, animation hints, projectile integration, model-controller callback ordering, retained focused checks and review findings |
| `world/` | Button/trigger/controller assembly, original-byte button execution, all-level command inventory, save/skip tests, native parser review and independent final reviews |
| `vm/` | Original CRT and Davi binary/unary machine-code probes, deterministic comparison inputs, string/number boundary cases and focused interpreter checks |
| `effects/` | Death smoke and Jester original-byte traces, shader pixel comparisons, prop-fragment save checks, original explosion artwork checks, light assembly and targeted rendering checks |
| `effects/electric/` | Optional native electrical explosion dynamics, constants, sprite/sound identities, original-byte spark movement comparisons and save/render checks |

Earlier diagnostic failures are retained so a later investigation can follow
the corrections. Use the final verification record and final test-log manifest
to distinguish them from accepted results. The formatter's initial 90-case log
contains two differences; the final log and JSON contain the corrected results.
Likewise, the first light test log records a test's incorrect pattern-length
divisor. A subsequent native-clock review also corrected first-update ordering
and the inclusive lifetime; use `world/light-review/` for the final implementation.

These checks are scoped native-kernel execution, source simulation and hardware
shader comparisons. They are not a fresh full campaign, all-device package
validation, global RNG equivalence, or recovered original high-level source.
The complete recovered C, assembly and resource export remains in the separate
[RC_ORIGINAL_DECOMPILED folder](../../../RC_ORIGINAL_DECOMPILED/README.md).

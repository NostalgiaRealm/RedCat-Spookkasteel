# Final review: explosion lights and native numeric formatting

Reviewed 2026-10-26 against the installed `RcHcGame.dat`, SHA256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Generated C is inspection pseudocode; assembly and bounded original-byte probes
supply instruction-order evidence. Original installation files remain unchanged.

## Explosion light: confirmed and corrected

The factory `0x58dbdd–0x58dd4a` suppresses lights for SmokeOnly, uses
`trunc(float32(SizePercentage*.01*800))` as maximum, sets normal 255/192/0 or
green 34/218/40 RGB, radius pattern `pszzzspmea`, step interpolation and 1000 ms
life. Constructor `0x4ae560` leaves CastShadow false; `0x4e34e0` passes that flag
through and selects maximum radius because StartZValues is enabled. The smaller
player-impact light uses the same actor/kernel with its own 360-based maximum
and shot-specific colours. Electric sparks are independent of these colours.

The first age-based implementation used `floor(age*10)` and retired at age 1.
That missed concrete native ordering:

- SubLevel `0x4f5170` starts at active-list tail (`0x4f4900`, field +0x54),
  advances node +4, and does not visit newly appended child actors until the
  following update. See retained `../effects/electric/sublevel-tick.asm`,
  `sublevel-iterator.asm`, `linked-list-add.asm`, and `go-setsublevel.asm`.
- `CAdamLight::Tick` at `0x4e2590` invokes the interpolator before checking lifetime.
- `0x568e00` samples the **old** integer-ms phase, then advances it through
  `0x5690f0`→`0x569bf0` (modulo 1000). `0x569480` multiplies the pattern letter
  by float32(.04); the intermediate sample and final radius store to float32.
- Lifetime arms lazily on the first update and only expires when `now > end`.

`src/explosion-light-native.js` now reproduces this kernel on the existing
portable 60 Hz visual clock. Tick 0 shows the constructor maximum; tick 1 at 16 ms
samples `p` and arms end 1016 ms; tick 61 at 1016 ms still lives and samples the
wrapped `p`; tick 62 at 1033 ms retires. The full game originally uses variable
frame deltas, so fixed 60 Hz remains an intentional scheduling boundary rather
than an asserted equivalence for every original frame rate.

`light-review/native-light-clock-probe.py` executes original functions `0x4e2590`, `0x568e00`,
`0x569050`, `0x569480`, `0x5690f0` and `0x569bf0` in private emulated memory. Only cell dispatch,
scene upload and deletion dependencies are hooked. It retains 74 samples with
regular and irregular deltas, exact deadlines and deliberate method calls after
retirement. All 74 timer/phase/radius results match (`light-clock-differential.json`).
The actual port scheduler stops at its first retired tick.

## Integration, save continuity and bounds

- Explosion and player-impact lights use one shared implementation. Existing
  world selection still limits to eight light slots; no shadow flag is added,
  so these flashes make no new obstruction queries.
- Light records and RGB arrays are cached; there are no per-frame light-object
  allocations. Ordinary updates perform 0–1 small scalar ticks at 60 Hz; legacy
  reconstruction catches up at most 62 ticks, without traces or script callbacks.
- Each saved blast/impact stores validated scalar `lightState`. Version, birth,
  tick range, phase, deadline, sampled strength and active flag are checked.
  Save generation advances a copy to the save clock, preserving equivalent
  offscreen, fresh and restored cohorts between presentation updates.
- Prop-debris and Electric state hooks remain intact; their geometry, collision,
  emission, audio and RNG behavior is unchanged. Shot release, damage, sprite
  cells and shockwave duration are unchanged. Only the independent light tail
  retains the impact record to the native retirement tick.
- No GPU light budget, simulation/audio scheduling or original files changed.

Final focused source checks:

| Retained log | Passed | Scope |
|---|---:|---|
| `light-review/light-prop-clock-tests-final.txt` | 12 | 8 light checks, including 74 native samples, plus 4 affected prop-save checks |
| `light-review/impact-electric-light-integration-final.txt` | 3 | 2 impact-light/save checks plus 1 Electric save integration |

Earlier failure logs remain evidence of the repaired save-time discrepancy,
not final results. No broad test suite, new build or campaign playthrough ran.

## Numeric-formatting read-only review

Reviewed `nativeDoubleString` in `src/davi-vm.js` against the original
17-digit conversion (`0x61d4a8`, `0x61e991`) and second-stage six-digit decimal
rounding (`0x61d431`). The implementation preserves the two stages, uses the
post-rounding exponent to choose fixed/scientific notation, carries 999999 to the
next exponent, trims trailing significant zeroes, formats three-digit exponents,
and keeps native zero/Infinity/NaN spellings. This resolves the independently
confirmed direct-`toPrecision(6)` double-rounding issue.

The retained root evidence reports 1332 differential checks and 90 additional
rounding-boundary checks with zero mismatches, plus 16 focused VM tests. I found
no additional actionable defect on source review and did not rerun those tests.
These are bounded tests of the shipped C-locale CRT behavior. They do not prove
exhaustive equivalence for all binary64 values or make JavaScript arithmetic
identical to every x87 intermediate. Source/docs should keep that distinction.

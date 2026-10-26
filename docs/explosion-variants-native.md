# Green and Electric explosion branches

Recovered from the installed original `RcHcGame.dat` on 26 October 2026, using
its complete decompilation, original instruction bytes and original bitmap
files. This corrects the earlier note that green flashes merely used a tint and
that an Electric flag would require generic “electrical arcs.” Those are two
independent native branches, and the Electric flag actually spawns gold sparks.

All **167 imported actor files** were checked; the 139 carrying explosion
settings disable both flags. These branches therefore add dormant native
support, not new effects to ordinary campaign crates. The separate common
explosion-light correction also affects normal explosions; see the
[native follow-up](native-behavior-followup-2026-10-26.md).

## Native dispatch and green artwork

| Original address | Recovered behavior |
| --- | --- |
| `0x4a2050` | Read `ExplodeElectric` and `ExplodeGreen` as separate actor settings. |
| `0x4a81ad` and following factory writes | Copy Electric into explosion byte `+0x174`; set visual type `+0x17c` to `1 + Green`. The Electric boolean does **not** select visual type 3. |
| `0x58e28f–0x58e561` | Green visual type 2 uses `Expl_sup01..08.bmp` and the matching `_a.bmp` masks, with the normal 0/100/200/300/400/500/600/699 ms frame schedule and scale curve. The artwork carries its color; it is not a tinted `Explosie` frame. |
| `0x58d7e6–0x58d841` | A non-smoke-only green blast additionally creates `Ring.bmp`/`Ring_a.bmp`, starting immediately and lasting 600 ms. Its size parameters are 0.1 to 4, independently of `SizePercentage`. |
| `0x4b4b30`, `0x4b4cc0`, `0x4b5260` | The shockwave interpolates squared radius, giving `50 * sqrt(0.01 * remaining + 16 * elapsed)`: radius 5 to 200. Alpha falls from 255 to 0. It is an upright camera-facing quad with the submerged portion folded onto the floor. |
| `0x58e87a` onward | Green smoke retains `smoke_green.bmp` with `smoke_green_a.bmp`; smoke-only suppresses the flash and ring. |

The existing super-shot impact uses the same shockwave renderer with different
parameters. Its geometry arithmetic was factored into `shockwave-native.js`;
its original delay, sizes, textures and termination were kept unchanged. The
portable stable plane for a directly vertical camera and the portable floor
trace also remain.

## Electric gold sparks

`0x58d710` checks Electric independently, including for smoke-only explosions.
It creates the spark generator only when the original **Display/Effects** value
is exactly **3**. The port exposes this internal gate as `effectsQuality`,
defaulting to **3**, without adding a menu setting or tying it to render scale.

| Original address | Recovered behavior |
| --- | --- |
| `0x58da3c`, factory `0x58da7c–0x58dbcc` | Each native blast owns a generator cell with a single randomized initial velocity: signed X in 30–40, Y in 350–450, Z in −40–40, all multiplied by 0.5. Gravity is 9.8. |
| `0x4b58f0` | The cell creates three moving paths on its 0/300/600 ms schedule. Each path has a lazy 1000 ms lifetime and random lazy 100–129 ms emission intervals. |
| `0x4b5ce0`, `0x4b6220` | Each path turns toward a randomized direction in the same hemisphere as its gravity-affected reference velocity. Six original spark sprite frames are selected; their alpha and size endpoint percentages are reselected at bursts. |
| `0x4b6380` | A burst rechecks `rand()%11 + 10` on **each iteration**, producing a bounded 10–20 sparks. It does not draw one uniform burst count and then reuse it. |
| `0x4b66a0`, `0x4e48a0`, `0x4e4bc0` | Short sparks start with normalized random direction at speed 60 and a 300–499 ms lifetime. Each update translates first, then subtracts gravity, with the native 0.7 time multiplier. The tail starts moving on the update after the head reaches a 1.92-unit separation. |
| `0x4e4c80` | Gold streaks are tapered world-oriented quads, not camera-facing pellets. Head half-width is 0.32, tail half-width 0.16; native UV order and color/alpha interpolation are retained. |
| `0x4b677f` | Each burst draws `rand()%20`; only results 0–5 play `spark1.wav` through `spark6.wav`. These are independent positional one-shots at default gain/pitch, not repeating ambience. |
| `0x4f5170`, `0x4f4900`, `0x502e40` | Sublevel updates walk the active list from its tail toward previous nodes. Existing paths therefore update newest-first; newly appended paths and sparks begin on the following update. This preserves the order in which paths consume their shared effect-local random stream. |

The imported art is `spark_01`, `04`, `05`, `07`, `08`, `09`, each with its
matching `spark_a_XX` mask, plus `spark.bmp`/`spark_a.bmp`. Textured-point sizes
use the original bitmap dimensions multiplied by native scale.

### A missing original asset

The native path constructor also requests **`grobber_trail3.bmp`**. It is absent
from both the entire installed original (1,471 files) and the mounted original
CD (1,465 files). The retained
[asset inventory](../temp_work/native-behavior-followup-2026-10-26/effects/electric/missing-trail-artwork.json)
lists the searched roots and other available trail bitmaps.

The bitmap loader `0x50b6f0` logs an `AdamOpenGenesisFile` failure and returns an
empty reference; `0x50d980` then reaches its `result.IsNotNull()` assertion.
This is static evidence of the missing-resource path, not a claim that a live
Windows run was forced through it. No native graceful-disable branch was found.

The port preserves the recovered trail history in its state but omits this
unavailable visual. It neither substitutes unrelated artwork nor deliberately
reproduces the original resource assertion. The supported sprites, gold streaks
and crackles still work. Since every shipped actor disables Electric, this
boundary does not remove a campaign effect.

## Performance, saves and intentional boundaries

- New variant textures load only when a level actor or restored explosion
  actually requests the corresponding flag. With all shipped flags off, there
  are no extra texture uploads, spark batches, generator cohorts, idle physics
  or per-frame scans of the level's actor list.
- The existing manifest registration order is preserved when importing new
  artwork. All prior PNGs and metadata values remain unchanged.
- Gold sparks share a bounded batch, with no per-particle meshes or collision
  traces. The fixed 60 Hz visual clock advances at most six ticks per ordinary
  update. Legacy reconstruction is a one-time, silent maximum of 151 ticks.
- Each active explosion saves its path positions, head/tail positions,
  velocities, random state, timer deadlines, selected textures and trail
  samples. Save/load does not restart the effect or replay historical sounds.
  Zero-time redraws also do not emit audio. Malformed nested state falls back
  to bounded reconstruction.
- Normal sound/music scheduling and the user's ambient ranges are unchanged.
  Only actual newly elapsed Electric bursts can emit their discrete crackles;
  stale catch-up events older than 100 ms are suppressed.
- The port retains per-effect deterministic randomness and fixed visual ticks,
  rather than the original process-wide random stream and display-dependent
  update timing. Exact original campaign random sequences are not claimed.
- Ring geometry and spark rendering use the existing portable renderer. The
  original instruction probe verifies the short-spark physics kernel; it is
  not a complete original-versus-port Windows rendering comparison.

## Focused verification

- **17/17** checks passed for green variants, normal explosions and the shared
  projectile-impact renderer after the geometry factoring.
- **9/9** Electric dynamics/geometry/timer/save checks passed, including the
  recovered newest-first path update order, plus **5/5**
  renderer/save/audio integration checks. The later zero-size green/ring
  correction passed its **9/9** focused green/Electric integration checks.
- The original `0x4e4bc0` machine-code probe passed **16 motion cases**, with
  maximum position/velocity difference below **0.000008** world units.
- All **16 new PNGs** match the original RGB bitmap plus original grayscale
  alpha mask pixel-for-pixel; original source SHA-256 values are recorded.
- An isolated hardware-WebGL source scene on AMD RX 6700 XT rendered the green
  flashes, ring and gold streaks, checked transparent output and final
  retirement, and reported **zero GL errors** and **zero remaining scene
  objects** after cleanup. This is not a campaign playthrough or a package test.

Evidence, reproducible probes and reports are under
[`temp_work/native-behavior-followup-2026-10-26/effects/`](../temp_work/native-behavior-followup-2026-10-26/effects/),
including `variant-artwork-verification.json`,
`explosion-variants-gpu-report.json` and `electric/`.
No package build or unrelated full test suite was run.

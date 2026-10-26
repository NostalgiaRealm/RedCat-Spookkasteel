# Presentation comparison with the original executable

Reviewed and corrected on 26 October 2026. This is a bounded comparison of
menu, audio, effect timing and effect-save paths, not a claim that every branch
of the original program is identical. The original installation was read only.
Deliberate changes listed in [intentional fixes](intentional-fixes-and-findings.md)
remain in place.

## Confirmed correction: ordinary fairy and portal particle fades

The port already reconstructed Fleurifee's ribbon history and the portal's
emission, motion and sequence. However, the secondary particles still computed
opacity directly from their age. That skipped three independent timer states
in the shared native `CParticle` implementation: lifetime, fade delay and fade
duration. It also skipped the original integer alpha conversion.

`source/particle-clock-native.js` now implements the recovered clocks, used by
`source/fairy-effects.js` and `source/teleporter-effects.js`:

- The first particle update arms lifetime and fade-delay deadlines. Expiration
  uses `now > deadline`; a particle still lives and moves at exact equality.
- Lifetime is checked before fade or movement. An expired particle performs
  neither a final alpha write nor an extra movement step.
- When the fade delay expires, that update only enables fading. The following
  update arms the fade timer and writes its first alpha.
- Native duration inputs are float32 seconds multiplied by 1000 and truncated.
  In particular, the portal's stored `.9` becomes **899 ms**, whereas `2.4`
  becomes 2400 ms.
- Starting alpha is an integer byte. The native float constant used by Start
  makes the configured 100-percent start **254/255**. The active fade uses a
  separate double constant and a float32 remaining fraction; its first write
  can become 255/255. Later alpha is likewise quantized to whole bytes.
- Restart retains the current displayed opacity and the existing motion state,
  while resetting the clocks. The new fade subsequently uses the configured
  endpoints, as the native code does. It is not multiplied by the old opacity.

Fleurifee's 50 secondary/departure stars use the recovered four-second lifetime,
one-second delay and three-second fade. Portal corner, seek, orbit and outward
burst particles share the same clock semantics with their own native durations.
The visual lifetime can therefore extend slightly beyond an age-only deadline
because native timers arm on an update; no arbitrary extra lifetime was added.

This does not change spawning, velocities, ribbon fades, teleport relocation,
portal beam geometry, sound scheduling or any gameplay damage timer.

## Native evidence

All addresses below refer to `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
The instruction bytes and arithmetic, rather than inferred configuration alone,
establish the behavior.

| Address | Observed behavior |
| --- | --- |
| `0x47db60–0x47dd56` | Particle initialization stores lifetime, fade delay, fade duration and alpha endpoints. Positive duration conversion uses x87 multiplication followed by `__ftol`. |
| `0x47dd60–0x47ddcc` | Tick checks the lazily initialized lifetime first, uses a strict signed deadline comparison, and returns immediately on expiry. |
| `0x47ddcf–0x47de70` | Active fade has a separate deadline and float32 fraction; the blended percentage is multiplied by the double at `0x64e328` before integer conversion. |
| `0x47de75–0x47def7` | Delay uses its own timer; expiry enables fading and initializes the fade timer for its subsequent check. |
| `0x47e710–0x47e775` | Start converts initial alpha using the float32 constant at `0x64e338`, clears velocity and resets timers. |
| `0x47e780–0x47e850` | Restart resets flags and timers without resetting current alpha, velocity or reused oscillator phase. |
| `0x47c989–0x47ca67` | Fairy secondary-particle construction passes lifetime 4, delay 1, fade 3, start 100 and end 0. |
| `0x475312–0x475414` | Portal secondary-particle construction supplies the native corner/orbit parameters. |
| `0x475720–0x475808` | Portal Show reconfigures existing live particles as seek particles and calls Restart. |
| `0x474f20–0x47502d` | Terminal burst changes each live particle to linear outward motion, supplies the three-second lifetime and calls Restart. |
| `0x471b80`, `0x471bb0` | Runtime initializers store float32 `3 × .8` and `3 × .3` in `0x6b868c` and `0x6b8688`. These globals are not file-backed constants. |

Retained evidence and the read-only extraction script are in
[`temp_work/original-source-parity-2026-10-26/presentation/`](../temp_work/original-source-parity-2026-10-26/presentation/).
`native-particle-evidence.json` records the original hash, exact excerpt ranges,
file-backed constants and separately derived runtime globals. Earlier complete
particle evidence is in `temp_work/native-spouts-2026-10-05/particle-base.asm`.
The separately exported decompilation is under
`../RC_ORIGINAL_DECOMPILED/decompiled/RcHcGame.dat/` relative to the project root.
Decompiler coverage and recovered names are not themselves proof of original
source-code recovery; the addressed native assembly is authoritative here.

## Saved effects and performance

Active particle snapshots now include their timer deadlines, fade mode and
displayed alpha. Current snapshots resume those values exactly. Validation
rejects malformed timer records. Inactive slots retain their existing compact
representation, so expired particles do not leave obsolete timer records in
save history.

Older snapshots containing particles but no clocks receive a bounded,
closed-form clock reconstruction on the existing 60 Hz timeline. Their saved
positions, velocities, oscillator states, random state and visible opacity are
preserved; movement and emission are not replayed. A missing historical clock
cannot be recovered exactly, so that migration is explicitly approximate.
Older age-only saves retain the existing bounded fallback.

There is no new world scan, collision trace or unbounded effect history. The
clock adds constant work only for live slots in the existing bounded pools.
The intentional fixed visual update rate, per-effect RNG and streaming limits
are preserved.

## Reviewed areas that did not require changes

- **Menu actions and voices:** `source/original-menu.js` and `source/menu-audio.js`
  were compared with the retained menu handlers and
  [menu recovery findings](../temp_work/native-menu-restoration-2026-10-20/behavior/findings.md).
  Native home choice handlers `0x56114c`, `0x5611a0`, `0x5611f4`, home-show
  `0x560978`, settings `0x560c94`/`0x55bbd8`, start `0x55ccd8` and shared Help
  `0x553208` are documented there. The requested universal `RCMN32` launch
  voice, modern settings, profile backup import/export, restart confirmation
  and portable Help remain intentional differences. No additional confirmed
  unintended menu difference was established by this pass.
- **Music:** the recovered constant-rate volume envelope and native gain
  conversion are already implemented; see [music evidence](music-fade-native.md)
  for `0x57e050`, `0x57e0f3`, `0x553170` and `0x54d030`. Full-track looping,
  combat triggers, continuity, ranges and audio scheduling were deliberately
  changed earlier and were not reverted.
- **Smoke/flame emitters:** their independent native timers and saved live
  state already exist. The native equal-size update skip and strict expiry
  ordering are retained; see [spout recovery](spout-effects-native.md).
- **Fleurifee:** ribbon endpoint timing and fade are already recovered, and
  existing snapshots preserve ribbon and particle state. Her selected sounds,
  one-active-fairy rule and skip cleanup were left intact. This correction
  concerns the separate ordinary stars, not another ribbon rewrite.
- **Portal restart:** the original really preserves the current alpha until
  the next delayed fade writes the configured endpoints. That potentially
  non-monotonic transition was retained rather than replaced with a new curve.

## Focused verification and limits

The affected source checks passed **36 tests, 0 failures**:

```sh
node --test tests/particle-clock-native.test.mjs \
  tests/teleporter-native.test.mjs tests/fairy-native-state.test.mjs \
  tests/fairy-save-state.test.mjs tests/fairy-ribbon-native.test.mjs
```

They cover strict deadline ordering, delayed fade arming, exact alpha values,
all four portal particle phases, save continuation, malformed timer rejection,
older-save migration and the existing fairy/ribbon behaviors. The retained
`particle-clock-final-tests.log` contains the successful run. The initial log
records the two old opacity assertions that needed updating from 1 to 254/255.

No release build, full test suite or new browser/native side-by-side visual
capture was performed for this small timing correction. The 60 Hz visual
adaptation, floating-point integration and renderer clipping remain portable
boundaries; this does not establish pixel-identical rendering at every native
frame rate or universal parity across the complete game.

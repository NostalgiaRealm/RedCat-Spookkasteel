# Fleurifee cutscene skipping and corrected sounds

The latest user correction sets this sound sequence:

| Event | Original file | Playback |
| --- | --- | --- |
| Appearance | `Gri5FX11.WAV` | Once per appearance |
| Present/idling | `IdleFee1.wav` | Loop until disappearance or skip |
| Ordinary disappearance | `magiev12.WAV` | Once |

The imported filenames are normalized to lowercase for portable asset lookup.
They are unchanged copies of the original installation's recordings:

| Imported asset | SHA-256 |
| --- | --- |
| `assets/audio/gri5fx11.wav` | `e230484df3e930bc3f335b2438643257d856f61565249598a8a46fd2c95bbba7` |
| `assets/audio/idlefee1.wav` | `6233f489d282ee24b4ab6f1173058c8487bb054f64bc36a9b3272f2e93fef6ad` |

The appearance cue now replaces the previously selected `IHealthL.WAV`.
Repeating `FairySprinkle1.wav` playback remains removed. The existing movement, hover, light, orbital trails, periodic particles
and ordinary disappearance burst are unchanged. Restoring an active fairy
resumes its idle loop without repeating the appearance cue. Render-only updates
do not start sounds again.

The skip path still runs the original script callbacks to completion. It records
fairies active when skipping starts, those with surviving disappearance particles
or trails, and those enabled by callbacks during the skip. After successful
completion, it disables only those fairy entities, clears
their remaining visual effects, and stops their audio. It does not start a new
departure sound for a skipped transient. Disabled future fairy encounters remain
available, and skill/potion script outcomes still execute. An unsuccessful skip
does not apply this cleanup.

## Latest appearance correction verification

Only the affected appearance unit case was run for the `Gri5FX11.WAV` change:

```sh
node --test --test-name-pattern='fairy appearance' tests/fairy-skip-audio.test.mjs
```

It verifies the original imported recording's hash, one appearance cue, one idle
loop, silent particle pulses/render updates, and stopping both current and legacy
appearance audio keys on skip. No builds or previous test suites were run.

## Previous focused verification

No builds or complete regression suites were run. Seven selected unit cases
covered the corrected sound sequence, normal departure, skipping before and
after fairy activation, future encounters, the skill reward, saved active age
and render-only sound stability. A separate regression verifies skipping during
the disappearance tail clears its particles, trails and sound while preserving
future encounters. Unchanged movement/particle tests were not rerun.

```sh
node --test --test-name-pattern='fairy appearance|ordinary fairy departure' tests/fairy-skip-audio.test.mjs
node --test --test-name-pattern='skipping' tests/fairy-skip-audio.test.mjs
node --test --test-name-pattern='skipping during fairy departure' tests/fairy-skip-audio.test.mjs
node --test --test-name-pattern='saved active age' tests/fairy-native-state.test.mjs
node --test --test-name-pattern='native fairy lifecycle' tests/native-visuals.test.mjs
node tests/fairy-skip-audio-scenes.mjs
```

The browser fixture follows the original forest dialogue and uses a real
three-second E hold. It verifies the appearance cue and idle loop are each
started once, then confirms zero remaining fairy sprites, trails, light or
audio after skipping. There were no browser or HTTP errors.

- `artifacts/fairy-skip-audio-scenes.json`
- `artifacts/fairy-after-cutscene-skip.png`

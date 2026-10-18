# Fleurifee idle audio — 2026-10-18

The reported saved encounter uses the correct original `IdleFee1.wav`. Two
verified playback differences were corrected: the port's idle base volume was
1.0 instead of the native 0.4, and HTML audio inserted small gaps at loop seams.
No appearance/disappearance filename repeated in this save. These findings do
not identify which earlier change caused the newly noticed sound, nor prove
that every aspect of the reported symptom has the same cause.

## Original behavior and retained choices

The installed `RcHcGame.dat` (SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`)
has the following Fairy sound table and activation behavior:

| Phase | File | Playback |
| --- | --- | --- |
| Appearance | `Gri5fx11.wav` | One-shot, base gain 1.0 |
| Initial idle | `IdleFee1.wav` | Loop, base gain 0.4, normal sample frequency |
| Departure | `Magiev12.wav` | One-shot, base gain 1.0; stops idle first |

Activation `0x47cdb0` selects slots 0 and 2. Loop helper `0x47d570` passes
gain 0.4 and frequency multiplier 1.0. Voice creation stores this gain at
voice offset `+0x2c`; updater `0x553170` retains it and combines file/channel
gain before the native logarithmic volume conversion. It is not overwritten
with 1.0 on subsequent frames. `Settings/Volume.ini` gives these files gain
1.0, so the quieter loop is a separate base gain.

The native travelling particle-burst branch can replace the loop with a louder
**IdleFee1** one-shot. It is gated by the centre particle's seeking flag and
does not run throughout settled hovering. This change retains the port's
established continuous idle lifecycle, silent particle pulses, spatial hearing
from RedCat, and requested threefold range. It does not add the travelling
restart quirk, repeated `FairySprinkle1.wav`, or changes to music/dialogue/
ambience scheduling.

[Detailed native evidence](../temp_work/fairy-idle-regression-2026-10-18/native/findings.md)
includes the exact branches, voice gain update, and asset hashes. REA's fresh
Hopper operation timed out; the investigation used retained same-hash REA
records and fresh disassembly. This is native-code evidence, not a new
audition of the original running game.

## Saved encounter and playback correction

No player game process was running when inspected. Only a copy of the desktop
profile's Local Storage was opened, in an isolated extraction process. The
active save was Castle `Fairy1`, active at age 8.9574 seconds. Its sole fairy
record was `idlefee1.wav`, loop=true, rate=1, saved cursor 0.755573 seconds.
The original and imported idle WAV match byte for byte; it contains 89,836
mono PCM frames at 44,100 Hz (2.0370975 seconds).

The copied save was resumed in isolated browser storage before and after the
fix. Both runs emitted only one resumed idle and one ordinary departure, with
no repeated appearance cue or fairy voice errors. A guessed malformed
save/filename repair was therefore not applied.

A separate real-time sample capture measured HTML loop lengths of 90,368 and
90,496 frames: **532–660 extra frames, or roughly 12–15 ms, per repeat**.
The decoded buffer path repeated exactly 89,836 frames with no extra gap.
These measurements are specific to the captured Chromium/audio configuration.

`GameAudio` now routes only the fairy idle loop through the existing decoded
buffer player, which repeats the full PCM like DirectSound. The native 0.4
base gain is combined before logarithmic conversion, independently of saved
or script volume. Existing saves receive the correction immediately,
and saving/reloading repeatedly does not multiply it again. Appearance,
departure, and non-looping uses of this file retain their existing playback.
The media fallback remains available where Web Audio is unavailable.

## Focused validation

- `node --test tests/fairy-idle-audio.test.mjs tests/fairy-skip-audio.test.mjs tests/fairy-audio-lifecycle.test.mjs`
  — 18 passing checks: loop ownership, native gain, old saved cursor,
  pause/resume, repeated reloads, late decode cancellation, cue selection,
  skip/deactivation, and all 31 authored fairy bindings.
- `node tests/fairy-idle-audio-scenes.mjs` — original PCM rendered across four
  loop boundaries at 44.1 and 48 kHz through both spatial stereo channels;
  one continuous source, no completion/restart, no sample mismatches above
  1e-6 after the native base gain.
- Copied Castle save: one buffered idle at the corrected gain, no replay of
  appearance, ordinary departure stops the idle, no page errors.

The baseline, waveform capture, disassembly, and saved-session reports are
retained under `temp_work/fairy-idle-regression-2026-10-18/`. The isolated PCM
check is under `temp_work/fairy-idle-audio-1792328494825/`.
No personal save or original asset was changed, and no package was built.

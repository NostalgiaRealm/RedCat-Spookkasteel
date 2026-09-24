# Native portal audio

The earlier portal notes swapped frequency and volume. Following the executable's
sound call through the mixer and DirectSound driver corrects the interpretation:

| Trigger | Slot / sample | Native volume | Frequency multiplier |
| --- | --- | --- | --- |
| `Show`, `0x4758d8–0x4758e8` | 2 / `LV2snd7.wav`, looping | 1.9 | 0.075 |
| `Show`, `0x4758ed–0x4758fb` | 0 / `Magiev18.wav` | 1 | 0.5 |
| First special particle expires, `0x47593a–0x475976` | 1 / `Magiev1.wav` | 1 | 0, meaning original frequency |
| Terminal flash ends, `0x475c94–0x475ca2` | Stop slot 2 | — | — |

The sound helper is `0x4763c0`. It calls `0x54ed80`, which forwards to
`0x54f240`. Volume is multiplied by the sample and mixer gains at
`0x54f2ec–0x54f2f8`. Frequency reaches `geSound_PlaySoundDef` at `0x5c7f50`,
then multiplies the sample's original frequency before the DirectSound
`SetFrequency` call at `0x5c8e51–0x5c8e62`.

The terminal argument of zero therefore does **not** mean silent playback.
DirectSound's original-frequency value restores the buffer's original sample
rate. See [Microsoft's SetFrequency documentation](https://learn.microsoft.com/en-us/previous-versions/windows/embedded/ms897844%28v%3Dmsdn.10%29).
The portable equivalent is playback rate 1.

`Magiev18.wav` contains 3.351383 seconds of audio: at half speed it lasts
6.702766 seconds. `LV2snd7.wav` is 0.528254 seconds, making its slowed loop about
7.043386 seconds. `Magiev1.wav` lasts 1.483129 seconds. The terminal flash's
300 ms timer stops the loop, not the terminal one-shot; the latter can ring out
after the visuals disappear. No per-frame terminal gain envelope was found in
the portal class. Slots 3–5 initialize `Bonus2.wav`, `Bonus3.wav`, and
`Magiev17.wav`, but the class never calls its sound player with those indices.

## Portable playback contract

`GameAudio.play({nativeFrequency:true, playbackRate:...})` preserves the native
frequency interpretation. Zero selects rate 1. Rates below .25 use decoded Web
Audio buffer sources, so they do not depend on media-element support for very
slow playback. Other voices retain the existing media path and rate limits.
Pitch changes along with speed. The existing mixer still applies master,
authored, script, range, obstruction and stereo gains.

The buffered voice exposes the existing `record.element` interface for pause,
resume, current position, completion and volume. Pausing stops its current
source while retaining the sample offset; resuming creates a source at that
offset. Stopped or replaced pending loads cannot start later. Decodes are
shared by URL, limited to eight retained entries and cleared by mixer reset.

## Focused checks

`tests/portal-audio-native.test.mjs` checks shared decode, original-frequency
zero, unchanged ordinary media behavior, pause/resume offsets, canceled loads,
stereo gains, natural completion and delayed loops.

`tests/portal-audio-native-scenes.mjs` measures actual browser output. Local
Chrome produced nonzero output from the original portal WAV at .075x and
shifted a 4000 Hz probe to approximately 298.8 Hz (300 Hz expected; analyser
bin rounding). Turning the camera reversed the measured .316 opposite-channel
gain. Pause preserved the exact sample position and resume advanced it.
The same Chrome also supported .075x media-element playback; the decoded path
provides consistent behavior without depending on that browser-specific range.
Results are in `artifacts/portal-audio-native-scenes.json`. Seven directly
affected existing mixer gain/lifecycle checks also passed. No build was made.

# Audio mix restoration (0.2.2)

The earlier runtime started every active EffectSound at the master volume,
ignoring Volume.ini and Use3DSound. Forest level 1 has 17 simultaneous looping
emitters, so distant forest sounds and the nearby UFO overwhelmed the voice.

The portable mixer in `src/audio.js` now reads the original sound gains exported
by `tools/import_audio_settings.py` to `src/audio-settings.js`. This importer is
also part of the full asset import. It resolves filename paths and case, and
keeps the first matching INI section/key as the original Windows lookup does.
The exported values retain the original data; the runtime clamps per-file gains
to 0–1 as the native loader did.

The original volume controls are not linear waveform amplitudes. The verified
Adam/Genesis3D/DirectSound conversion is reproduced before applying the port's
existing linear master slider:

```text
nativeGain = fileGain × scriptGain × distanceGain
waveformAmplitude = master × 10^(0.5 × log2(nativeGain))
```

Zero is silent. Script gains are clamped after every MultiplyVolume command.
The old arbitrary 0.45 music multiplier has been removed; music uses its own
original per-file setting, including 0.7 for the forest track. Effects and
dialogue share the same baseline, as the observed gameplay profile does.
Existing portable master volume preferences and saves are retained.

At master 0.6 and full script gain, a nearby UFO uses 0.06 waveform amplitude
(authored gain 0.25), a nearby forest loop about 0.159 (authored gain 0.45), and
unattenuated dialogue 0.6. Distant sources become quieter still. These numbers
describe gain, not the recorded samples' peak levels or perceived loudness.

Spatial sounds follow the camera position. Each level inherits Computer.ini's
3DSound settings and applies its first matching Game.ini sublevel override.
The supplied five levels use a minimum distance of 50 meters and a maximum
distance factor of 150; one meter is 32 world units. The native logarithmic
distance curve is converted to amplitude along with the other gains. Dialogue
and music remain nonspatial.

The mixer also retains gain factors when the master changes, stops replaced
voices/loops, pauses all active sounds, handles authored replay delay bounds,
and restores enabled repeating ambience and selected script music after loading a save. Completed one-shot
effects are not replayed by restoring a save.

## Verification and limits

`npm test` includes original forest/host regression cases, gain math, distance,
script clamping, pause/replacement, mute/unmute and replay scheduling.
`npm run test:audio` checks decoded WAV playback in the browser, the opening
Dutch dialogue, 17 spatial loops, changes through the actual volume UI,
save/load, listener distance, resume and returning to the menu. The same audio
checks run in `npm run test:desktop`, using a temporary profile. Results are
written to `artifacts/audio-forest.json`.

The detailed executable evidence, including its hash and function addresses,
is in `audio-native.md`. No original-versus-port audio recording comparison has
been completed. Stereo panning, native BSP sound occlusion, authored fade
envelopes and sample-exact replay/voice timing remain unfinished. The mixer
currently uses portable HTML media elements and no operating-system audio API.

Version 0.2.3 also restores player action/health and regular-enemy sound routing;
see `enemy-gameplay.md` and `gameplay-sound-native.md`.

# Audio mix restoration

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
and music remain nonspatial. Positioned effects (including spatial enemy
voices) now use the original stereo balance: the camera's local azimuth lowers
the opposite channel by up to 10 dB, without changing the near channel. Web
Audio routes media-element sound through stereo channel gains; mono samples
are copied to both channels before balancing. Browsers without Web Audio keep
the existing distance-volume playback path.

Sound visibility uses the imported original leaf/cluster bitsets and connected
door areas, independently of render visibility. A solid BSP obstruction applies
the recovered 1.5 effective-distance multiplier, including moving door poses;
actors do not obstruct this trace. Obstruction refreshes at 10 Hz or after a
source/listener moves over one meter; panning updates each frame. Audio nodes
disconnect when a sound ends/stops, and changing levels releases the bound
world. The same media elements retain their pause/resume position, replay
delays and full-length dialogue sequencing.

Preserved user choices include local Castle/Cave ambience ranges, quieter tower
fire, and Fleurifee's threefold radius/player listener. Her active idle is
exempt from camera-PVS muting. A no-clip camera outside the map retains
distance/pan rather than silencing everything.

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
been completed. Native stereo and BSP obstruction are implemented; authored
effect-specific fade envelopes and sample-exact replay/voice timing are not
claimed. In particular, the teleporter terminal sound's native volume envelope
still needs complete recovery. The mixer uses portable HTML media and Web Audio,
without an operating-system-specific audio API.

`node --test tests/spatial-audio.test.mjs` covers the native centibel balance,
camera rotation, obstruction distance, PVS/door state, nonspatial dialogue,
the fairy exception and original castle visibility. `node
tests/spatial-audio-scenes.mjs` measures the actual left/right waveform RMS of
a mono WAV in Chrome, checks rotation and pause/resume, and exercises real
castle PVS mixing. Its measured report is `artifacts/spatial-audio-scenes.json`.

The action-audio update also restores player action/health and regular-enemy sound routing;
see `enemy-gameplay.md` and `gameplay-sound-native.md`.

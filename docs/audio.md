# Audio mix restoration

The earlier runtime started every active EffectSound at the master volume,
ignoring Volume.ini and Use3DSound. Forest level 1 has 17 simultaneous looping
emitters, so distant forest sounds and the nearby UFO overwhelmed the voice.

The portable mixer in `src/audio.js` now reads the original sound gains exported
by `tools/import_audio_settings.py` to `src/audio-settings.js`. This importer is
also part of the full asset import. It resolves filename paths and case, and
keeps the first matching INI section/key as the original Windows lookup does.
Per-file gains retain the original data and are clamped to 0–1 as the native
loader did. Spatial hearing distances also include the user's intentional
range increases, described below.

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
The original five levels use a minimum distance of 50 meters and a maximum
distance factor of 150; one meter is 32 world units. The current configuration
uses 175.5 meters with the same factor after the requested hearing-range
increases. The native logarithmic
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

Preserved user choices include the local ambience ranges in
`src/ambience-ranges.js`: Castle sources fade between 17.55 and 87.75 meters,
Cave loops between 17.55 and 105.3 meters, and Tower fire between 10.53 and
63.18 meters with a 0.65 gain multiplier. These replace the earlier, shorter
local ranges. Fleurifee retains her threefold radius and player listener; her
active idle is exempt from camera-PVS muting. These are intentional mix
differences from the original. A no-clip camera outside the map retains
distance/pan rather than silencing everything.

The mixer also retains gain factors when the master changes, stops replaced
voices/loops, pauses all active sounds, handles authored replay delay bounds,
and restores enabled repeating ambience and selected script music after loading a save. Completed one-shot
effects are not replayed by restoring a save.

## Verification and limits

Earlier audio verification covered original forest/host regression cases,
gain math, distance, script clamping, pause/replacement, mute/unmute and replay
scheduling.
`npm run test:audio` checks decoded WAV playback in the browser, the opening
Dutch dialogue, 17 spatial loops, changes through the actual volume UI,
save/load, listener distance, resume and returning to the menu. The same audio
checks run in `npm run test:desktop`, using a temporary profile. Results are
written to `artifacts/audio-forest.json`.

The detailed executable evidence, including its hash and function addresses,
is in `audio-native.md`. No original-versus-port audio recording comparison has
been completed. Native stereo and BSP obstruction are implemented; authored
effect-specific fade envelopes and sample-exact replay/voice timing are not
claimed. Exact native scheduling of nonzero EffectSound replay delays and the
music fade curve remain verification limits. The later
[portal audio audit](portal-audio-native.md) found no per-frame terminal volume
envelope in the portal class: `Magiev1.wav` finishes naturally beyond the
visual flash, which the port now preserves. The mixer uses portable HTML media
and Web Audio, without an operating-system-specific audio API. This status
update does not change playback scheduling or the chosen hearing ranges.

`node --test tests/spatial-audio.test.mjs` covers the native centibel balance,
camera rotation, obstruction distance, PVS/door state, nonspatial dialogue,
the fairy exception and original castle visibility. `node
tests/spatial-audio-scenes.mjs` measures the actual left/right waveform RMS of
a mono WAV in Chrome, checks rotation and pause/resume, and exercises real
castle PVS mixing. Its measured report is `artifacts/spatial-audio-scenes.json`.

The action-audio update also restores player action/health and regular-enemy sound routing;
see `enemy-gameplay.md` and `gameplay-sound-native.md`.

## Complete music loops and encounter continuity

The five original background tracks remain mapped to their authored levels:

| Level | Original WAV | Complete PCM duration |
| --- | --- | --- |
| Het Bos | `Level 1 - The Forest.wav` | 61.714558 s |
| Het Kasteel | `Level 2- -The Castle.wav` | 59.306712 s |
| Het Kerkhof | `Level 3 - The Graveyard.wav` | 72.486168 s |
| De Grotten | `Level 4 - The Caves.wav` | 71.168390 s |
| De Kasteeltoren | `Level 5 - The CastleTowerr.wav` | 64.226349 s |

These assets are byte-identical to the original installation. Music now uses
the complete decoded Web Audio buffer, looping indefinitely on a single source.
There is no timer cutting off a track or media-element seek/rebuffer at each
repeat. Platforms without Web Audio retain the HTML media loop and end-event
replay fallback. Music stays nonspatial and uses the existing volume controls.

The desktop HTML-media baseline repeated every file, but reported durations
3–46 ms shorter than the PCM sample counts and briefly entered a waiting state
at each wrap. Buffered playback includes the entire decoded sequence. Its loop
boundary is rounded infinitesimally inward (much less than one sample), still
including the last frame. Using either the exact floating-point duration or an
implicit buffer end produced one incorrect sample at a wrap in Chromium: the
tower track at 22.05/44.1 kHz and both battle tracks at 48 kHz. The inward bound
avoids that conversion error without trimming any complete sample.

Combat and scripted music changes still happen. Previously, every return to
background music began at zero; frequent encounters prevented hearing its later
sections. Interrupted tracks now resume their last playhead. Returning during
an outgoing fade reverses that same voice's fade instead of playing a duplicate
copy. Pause freezes the playhead and fades. Explicit music stops and level
resets clear remembered positions; these positions are not added to save files.

Decoded music has a separate two-buffer cache, cleared when changing levels.
Short native effects retain their own bounded cache. Pending decodes cannot
restart a stopped track or play through a game pause.

Focused checks for this change:

```sh
node --test tests/music-loop.test.mjs tests/portal-audio-native.test.mjs
node tests/music-loop-scenes.mjs
node tests/music-loop-scenes.mjs --electron
```

The 14 music tests and four shared buffered-effect tests passed. After the final
boundary correction, the relevant loop test was rerun. Actual PCM rendering in
both Chrome and Electron covered all five background tracks plus `Endbosses.wav`
and `spookkort3.wav`, each at 22.05, 44.1 and 48 kHz. Every case rendered two full
cycles plus 256 frames of the third cycle, with no missing frames, extra sources,
premature end events or sample mismatches above 1e-6. Electron also verified
playhead preservation, quick fade reversal and pause/resume on the HTML fallback.

Logs, isolated profiles and earlier failed probes are retained under
`current_work/music-loop-2026-09-28/`; full render reports are in timestamped
`current_work/music-loop-render-*/` directories. No release builds were made.

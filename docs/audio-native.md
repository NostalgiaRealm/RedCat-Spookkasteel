# Original audio evidence

Read-only investigation of the installed `RcHcGame.dat` on 2026-09-21.
Addresses below are virtual addresses in SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
They do not apply to the earlier reference executable documented in
`native-reference-builds.md`. Original files were not modified.

## Authored file gains

`Settings/Volume.ini`, section `Volumes`, contains filename-based gain settings:

| Sound | Authored gain |
| --- | ---: |
| `forest1.WAV` through `forest5.WAV` | 0.45 |
| `LV1snd1.WAV` (the UFO) | 0.25 |
| `LV1snd2.WAV` through `LV1snd4.WAV` | 0.50 |
| `Level 1 - The Forest.wav` | 0.70 |
| `torch1.WAV` | 0.20 |
| `empty.wav` | 0 |

The native sound definition loader at `0x552bae` constructs the filename
`Settings/Volume.ini`; `0x552c0e` constructs `Volumes`. The resulting value is
stored in sound definition offset `+0x38` at `0x552cbc`, then clamped to 0..1
through `0x552d22`. Consequently `expl6.wav=1.5` is effectively 1, despite the
INI value. The default is 1. Native per-file matching depends on Windows INI
semantics; the portable importer should normalize case.

At `0x553353`–`0x553374`, the sound's file gain is multiplied by the sound
channel and instance gain before conversion to the engine's logarithmic volume.
Thus these INI values are **not** themselves the final logarithmic values.

The `EffectSound.MultiplyVolume` handler at `0x585ad7` reads the current sound
instance's `+0x2c` gain, multiplies it by the command argument at `0x585ae8`,
then clamps the resulting instance gain to 0..1 (`0x585af0`–`0x585b18`). It
calls the gain setter `0x553610` at `0x585c1d`. At `0x55320e` the instance gain
is loaded, optionally attenuated by 3D distance, and multiplied with file and
channel gains before `LinToLog`. The clamp occurs after each script multiply;
a factor above 1 cannot save amplification credit for a later multiply.

## Game channels and profile defaults

The game runtime reads `MusicVolume` and `SoundVolume` in the current
`Settings/Player%d.ini` profile. The filename helper is `0x43b0a0`, with format
string at `0x69087c`. Reads at `0x528c47` and `0x528e68` each supply default 80,
minimum 0 and maximum 100. Values are multiplied by 0.01 at `0x528d3b` and
`0x528f5d`, then passed respectively to the music setter `0x54e5f0` and common
sound setter `0x54e490`.

The installed `Player1.ini` has `MusicVolume=80`, `SoundVolume=80` and the
additional legacy field `EffectsVolume=100`. `PlayerDef.ini` has `MusicVolume=80`
and `EffectsVolume=100`, with no `SoundVolume`, so the latter's native fallback
is 80. The executable also has an `EffectsVolume` setting constructor, but the
observed running-profile application path above uses `SoundVolume`.

`Game.ini` contains `SOUNDDEFAULTS` with music 0, effects 40, voices 80; these
must not automatically be treated as the running game's mix. The current game
executable has no `SOUNDDEFAULTS` or `VoicesVolume` string. The separate menu
executable has `MUSICVOLUME`, `FXVOLUME`, and `VOICESVOLUME` strings and
`static.ini` settings, but this investigation did not establish those as
separate gameplay channels. A portable mixer may expose separate user controls,
but an unequal effects/voices baseline is not established by these files.

## Conversion to actual waveform amplitude

The debug strings identify these native functions:

* `CAdamSoundSystem::LinToLog` at `0x54d030`: for positive `g`,
  `v = 1 + 0.1 * log2(g)`; for non-positive `g`, it returns 0.
* `CAdamSoundSystem::LogToLin` at `0x54d140`:
  `g = 2 ** ((v - 1) * 10)`.

Constants are double 2 at `0x64d308`, float 0.1 at `0x64d0c8`, and float 10
at `0x64ad5c`. The Genesis sound driver at `0x5c8da7`–`0x5c8dc0` then computes
`integer((1 - v) * -10000)` and calls DirectSound buffer vtable entry `+0x3c`,
`SetVolume`. Its constants are double 1 at `0x64d918` and double -10000 at
`0x6508e0`.

DirectSound expresses that value in hundredths of decibels, from 0 to -10000.
See [Microsoft's SetVolume documentation](https://learn.microsoft.com/en-us/previous-versions/windows/desktop/mt708939(v=vs.85)).

Ignoring sub-decibel integer rounding and treating the native -100 dB floor as
silence, the portable waveform gain equivalent is therefore:

```js
const amplitude = g <= 0 ? 0 : Math.min(1, 10 ** (0.5 * Math.log2(g)));
// Equivalently Math.min(1, g ** 1.660964047443681).
```

At full channel/instance gain, the UFO's 0.25 setting becomes 0.1 amplitude,
not 0.25. The forest's 0.45 becomes approximately 0.2657 amplitude. These
conversions should be applied consistently to authored and script gains;
the port's independent master volume can remain a user-facing linear gain.

## 3D listener, units and distance curve

The listener is the active game camera. The audio routine `0x54e750` obtains
the game camera using `0x421750` (game member `+0xdc`) and passes its transform
at camera offset `+0x1e0` to `geSound3D_GetConfig` at `0x54e963`. The matching
AdamCamera getter/assertion at `0x556638` identifies its camera handle at
`+0x30`. Use the rendered camera position, not the player's feet, for distance.

`0x54e8e6` reads the configured minimum distance from sound-system `+0x1ec`.
`0x54e94c` multiplies it by float 32 at `0x64d0bc` before calling the engine.
**There are 32 world units per meter.**

`0x54daf0` reads `Computer.ini`'s `3DSound` values as fallbacks, then reads
`Game.ini` using a supplied current-sublevel section and stores the results.
Call sites `0x4982b2`, `0x4bd9aa`, and `0x52dffe` supply the current level's
section via `0x4989f0`. The global settings are min 5 meters / factor 25, but
the forest's `sublevel1_1` overrides are **min 50 meters / factor 150**.
Other sublevels have duplicated case-variant sections in the installed INI;
do not silently let a generic last-key-wins parser select old trailing
`Level1_2.bsp` entries over the shipped `lvl01a.bsp` section.

The function at `0x5c7d20` computes this intermediate logarithmic volume:

```js
const max = min * maxDistanceFactor;
const v = d > max ? 0 : d < min ? 1
  : 1 - Math.log(d / min) / Math.log(maxDistanceFactor);
```

It is immediately converted through `LogToLin` at `0x54e979`, then multiplied
with other sound gains. Its final waveform equivalent between min and max is
`10 ** (-5 * Math.log(d / min) / Math.log(maxDistanceFactor))`. Below min it is
1. At/above max it reaches DirectSound's approximately silent -100 dB floor.
Native BSP visibility/collision checks in `0x5c7ba0` can also suppress a sound,
and a blocked sound path multiplies effective distance by 1.5 at `0x5c7c86`.
Those occlusion/visibility checks are separate from the basic distance curve.

## Forest entity evidence and remaining uncertainties

`data/levels/lvl00a/level.json` contains 17 initially active looping sounds,
all with `Use3DSound=1`, plus an initially disabled one-shot `Blockrise`.
`UFO_sound` (`EffectSound12`) uses `LV1snd1.WAV` at `[-1211,-95,2245]`.
All forest replay delay bounds are zero; they are continuous loops.

The original binaries contain an invalid min/max replay-delay assertion in
`CAdamEffectSound::CreateFromEntity` at `0x58530e`. Exact scheduling of nonzero
delay bounds was not fully traced. Nor was a complete original-versus-port
audio capture comparison performed. The evidence above establishes gains,
conversion, current profile application, basic distance curve and camera
listener; it does not establish perfect parity for occlusion, sound onset
scheduling, stereo panning, or all menu/voice paths.

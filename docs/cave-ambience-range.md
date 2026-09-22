# Cave ambience hearing range

This is an intentional departure from the original game, requested by the user.
The installed `Settings/Game.ini` section `[sublevel1_4]` selects `lvl03a.bsp`
with `MinDistanceMeters=50` and `MaxDistanceFactor=150`. Thus a source stays at
full distance gain within 1,600 world units. The native distance model, 32
world units per metre, camera listener and per-file gain conversion are
documented in [audio-native.md](audio-native.md).

The original cave entities establish which loops belong to these hazards:

| Source names | Original sound |
| --- | --- |
| `waterfall` | `LV4snd3.WAV` |
| `stromend_water_A`, `stromend_water_B`, `stromend_water02` | `LV4snd5.WAV` |
| `gangwind`, `airlab_wind01` | `gravey3.WAV` |
| `turb_sound01`, `turb_sound02`, `turb_sound03` | `LV4snd20.WAV` |
| `earth_bolders` | `lv4snd10.wav` |

These ten are spatial, repeating `EffectSound` sources. Their positions, script
activation, volumes and playback state remain authored. Disabled flowing-water
and turbine sources still wait for their original scripts to enable them.

## Chosen portable range

`src/ambience-ranges.js` now limits **every spatial effect loop** in the caves
(`lvl03a`), including delayed replay. The initial five-file list missed lava
(`LV4snd15`), torches (`torch1`), corridor noises (`Gen6`), energy beams/platforms
(`LV4snd21`), moving rocks, the altar machinery and unlock effects (`LV2snd5`).
All original repeating emitters now use the same rule; future imported loops
will inherit it without another filename exception. The range is a tuning
choice, not a recovered native constant: full gain within **5 metres / 160 units**, smooth fading to complete
silence at **30 metres / 960 units**. This covers the nearby section without
carrying across the level. At 15 metres, the final waveform amplitude is about
49% of its nearby amplitude; at 25 metres, about 2.3%.

The control gain is `1 - smoothstep(5, 30, distanceMetres)`, combined with the
existing authored, channel and script gains before native logarithmic
conversion. The range endpoints are smooth and the far gain is exactly zero.
Moving source callbacks continue to update distance. Playback is not restarted
when crossing a boundary. One-shots, voices, music, non-spatial sounds and the
same filenames in other levels keep their existing native attenuation.

## Focused verification

```sh
node --test tests/cave-ambience-range.test.mjs
node tests/cave-ambience-range-scenes.mjs
```

Three focused unit/integration tests passed, covering the distance curve,
channel/level scope, live source positions, master/script volumes, native
activation and restoration of all 36 original cave loops. The browser check
loaded the original caves, decoded all 36 repeating emitters, confirmed nearby
playback,
measured their real audio-element volumes at 0/5/15/25/30/100 metres, and found
no browser or HTTP errors. Results are in
`artifacts/cave-ambience-range-scenes.json`. No unrelated suites or release
builds were run. This does not implement audio occlusion through walls.

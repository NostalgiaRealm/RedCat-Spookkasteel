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
choice, not a recovered native constant: after the user's later range increases,
full gain extends to **17.55 metres / 561.6 units**, with smooth fading to complete
silence at **105.3 metres / 3,369.6 units**. This replaces the initial 5–30 m
choice while retaining a finite audible section.

The control gain is `1 - smoothstep(17.55, 105.3, distanceMetres)`, combined with the
existing authored, channel and script gains before native logarithmic
conversion. The range endpoints are smooth and the far gain is exactly zero.
Moving source callbacks continue to update distance. Playback is not restarted
when crossing a boundary. One-shots, voices, music, non-spatial sounds and the
same filenames in other levels keep their existing attenuation policies.

## Focused verification

```sh
node --test tests/cave-ambience-range.test.mjs
node tests/cave-ambience-range-scenes.mjs
```

At the time of the initial 5–30 m change, three focused unit/integration tests
passed, covering the distance curve,
channel/level scope, live source positions, master/script volumes, native
activation and restoration of all 36 original cave loops. The browser check
loaded the original caves, decoded all 36 repeating emitters, confirmed nearby
playback,
measured their real audio-element volumes at 0/5/15/25/30/100 metres, and found
no browser or HTTP errors. Results are in
`artifacts/cave-ambience-range-scenes.json`. No unrelated suites or release
builds were run. These measurements describe that earlier tuning, not the
current endpoints. The later [spatial audio update](audio.md) implements native
BSP/door obstruction and visibility separately from this local-range policy.

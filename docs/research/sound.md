# Sound: what the game asks for and what the host does with it

How `RcHcGame.dat` makes sound, what the host (`source/host/dsound.js`) and the page's mixer
(`source/web/audio.js`) must do so that it sounds as it does on DirectSound, and how to check it.
Addresses are in `RcHcGame.dat`. The volume chain was first recovered for the JavaScript port
(`../RCSPOOK_NEW/docs/audio-native.md`); the parts used here were read again in the decompilation.

## Confirmed

### The chain inside the game (all original code, recompiled)

| Step | Where | What |
|---|---|---|
| Per-file gain | `Settings\Volume.ini [Volumes]` (0x6A1F34) | 0..1 per WAV, e.g. `forest3.WAV=0.45`, `LV1snd1.WAV=0.25`, the level music 0.7 |
| Player volumes | `Player<N>.ini [Sound] MusicVolume`, `SoundVolume` (0x527C20) | 0..100, default 80 each, times 0.01 |
| Master | `AdamWin.Ini MasterVolume=0.900000` (0x54C500) | times 0.9 |
| 3D distance and sight | `geSound3D_GetConfig` 0x5C7BA0 | 0 when the source's BSP leaf is not visible from the listener's (0x5B9C40); else 1 inside the minimum distance, falling with the logarithm of the distance (0x5C7D20); a wall in between counts as 1.5 times the distance. `Game.ini [sublevel1_N] MinDistanceMeters=50`, `MaxDistanceFactor=150` for the five shipped worlds, 32 units per metre |
| Linear to "logarithmic" | `CAdamSoundSystem::LinToLog` 0x54D030 | `v = 1 + 0.1 * log2(g)`, 0 for `g <= 0` |
| To DirectSound | `ModifyChannel` 0x5C8D80 | `SetVolume(trunc((1 - v) * -10000))`, `SetPan(trunc(pan * 10000))` with `pan = 0.1 * sin(angle)` (0x5C7D80), so pan stays within ±1000; `SetFrequency` |
| Start | `StartSoundChannel` 0x5C89F0 | if the buffer is already playing: `DuplicateSoundBuffer` (0x5C8AB0); then `ModifyChannel`, `SetCurrentPosition(0)`, `Play(0, 0, loop)`. A failing `SetVolume`, `SetPan` or `SetFrequency` means the sound is not started |

Numbers that follow, and that the port's trace shows: level music `0.7 × 0.8 × 0.9 = 0.504` → −988
(−9.9 dB); a voice line `1 × 0.8 × 0.9` → −473; a forest loop at full strength `0.45 × 0.72` → −1625;
the UFO hum `0.25 × 0.72` → −2473. A source that is out of sight gets −10000, which DirectSound treats as silence.

### What the engine relies on in DirectSound

- **A duplicated buffer starts with the original's volume, pan and frequency.** `DupChannel`
  (0x5C8AB0) copies its own record of the three values from the original's record and
  `ModifyChannel` only calls `SetVolume` when the wanted value differs from that record. Every
  level has many copies of one looping ambience file (world 1: 14 emitters of `FOREST3.WAV`, 13 of
  them duplicates), started out of sight at volume 0, that is at an inherited −10000 with no
  `SetVolume` call of their own.
- Buffers are created with flags 0x100E8: software, volume, pan and frequency control,
  `GETCURRENTPOSITION2`. All values the game sets were within DirectSound's ranges in the traced runs.
- A silent `EMPTY.WAV` is duplicated and played about every 1.25 s. It is at −10000.

### The host and the mixer

- `dsound.js` keeps DirectSound's state per buffer (play state and position on the host clock) and
  tells the mixer what changes. The mixer starts every buffer at volume 0, pan 0 and its own rate,
  as DirectSound does for a new buffer; anything that starts otherwise is announced (`tell`).
- Amplitude is `10^(v / 2000)` for a volume or pan of `v` hundredths of a decibel, 0 at −10000. Pan
  lowers the opposite side only. A mono sample goes to both sides at full strength.
- Out-of-range values and missing controls are refused with DirectSound's documented results
  (`DSERR_INVALIDPARAM`, `DSERR_CONTROLUNAVAIL`), leaving the old value.

## Found and fixed (2026-11-12)

1. **Copies of a buffer played at full volume.** The host copied volume, pan and frequency to a
   duplicate, but did not tell the mixer, where the new buffer stood at 0 dB. In world 1 that made
   twelve forest loops that the game holds at silence sound at full strength (16 times the
   amplitude of the one nearby loop the game wants at −22 dB). The same happened to every
   duplicated ambience and enemy sound in the other worlds. Fixed in `DuplicateSoundBuffer`.
2. **A second game inherited the mixer's buffers of the first.** Buffer numbers start at 1 for each
   game; the mixer now forgets everything when a game ends and when one starts.

## Compared with the original under Wine (2026-11-12)

The original `RcHcGame.dat` was started straight into each world under wine-11.20 in a throwaway
prefix with Wine's DirectSound trace on, 42 s per world without input (`tools/reference-wine/`,
results in `evidence/reference-wine/dsound-worlds.md` and `dsound-world<N>.json`, recordings of
Wine's mix in `tools/out/reference-wine/audio/`). The port ran the same 40 s in the Node runner.

**Calls** (`tools/sound-compare.mjs`, buffers matched in creation order, window 38 s after the first `Play`):

| World | Original buffers with the same plays and peak volumes, port at 60 frames/s | Port at the reference's frame rate (`--step`) | What differs |
|---|---|---|---|
| 1 | 175 of 176 | 176 of 176 | the landing sound `rcland1.wav`: -2072 against -2170 at 60 frames/s |
| 2 | 180 of 181 | 181 of 181 | the same sound, -1864 against -1949 |
| 3 | 181 of 182 | 181 of 182 | the same sound, within 0.5 dB |
| 4 | 197 of 199 | 199 of 199 | at 60 frames/s no landing sound at the start and one more `IdleFee1.wav` |
| 5 | 179 of 182 | 180 of 182 | guard steps `wachter1/2.wav`: 65 and 85 audible plays at 60 frames/s, 61 and 61 at the reference's rate, against 59 and 68 |

Same in both: the buffers and their order of creation, the flags, which sounds are audible, every
level that follows from the settings (music -988 after a fade from -10000, voices -473, `LV1snd1`
-2473, one `forest3` copy between -2504 and -1625, `castle2` and `gravey1` -795, `IdleFee1` -1795),
voice lines at the same moments (world 1: 3.0 s and 6.0 s), pan within ±1000, 12 of the 13
`forest3` copies played without a `SetVolume` call and silent. What differs depends on the frame
rate (the reference ran at 170 to 600 frames/s: the fall at the start of a world and its landing
sound) or varies from run to run (guard steps). No call failed in either.

**Levels** (`tools/sound-levels.mjs`: the port's mix rendered by `tools/offline-mix.mjs` with the
mixer's rules, against the recording of Wine's mix, per second over 38 s):

| World | Port (dBFS) | Original (dBFS) | Difference | Largest difference in one second |
|---|---|---|---|---|
| 1 | -22.42 | -22.32 | -0.10 dB | 0.5 dB |
| 2 | -17.12 | -17.06 | -0.06 dB | 0.9 dB |
| 3 | -18.67 | -18.59 | -0.08 dB | 1.1 dB |
| 4 | -20.21 | -20.26 | +0.05 dB | 3.4 dB (the landing sound) |
| 5 | -15.54 | -15.21 | -0.33 dB | 4.4 dB (guard steps) |

**Walking** (world 1, Up held from 20 s to 30 s after the first frame, in the port
`--keys "21017,38,10000"`): 175 of 176 buffers the same; the steps `rcwalk1.wav` and `rcwalk2.wav`
11 times each in both, first at 20.45 s and 20.86 s against 20.44 s and 20.88 s, all at -473; two
`forest3` copies audible in both; level of the mix -22.32 against -22.23 dBFS.

Before the fix of the copies, world 1 rendered at about -14 dBFS with samples over full scale.
The rendering is the Node model of the mixer, not a recording of a browser: in the browser the
gains were read back (`RecompGame.audioState()`), nothing was recorded or listened to.

## With input: shots, pickups, doors, enemies (2026-11-13)

Five scripted scenarios (`tools/sound-scenarios.txt`), run with the same step script in the port
(`node tools/sound-scenarios.mjs`) and on the original under Wine (`tools/reference-wine/scenarios.sh`).
A step holds keys for a time or until the player's position, read from the game's memory, passes a
value; `goto:X,Z` steers by the direction of the player's velocity. So both walk the same route
whatever their frame rates: the steps ended at the same places within a few units and within 0.3 s
(the lists are printed by `sound-scenarios.mjs`; the original's are `evidence/reference-wine/in-<name>.steps.json`).
All scenarios use a player who can already shoot (`Player1.ini [Player] Skill=1`).

| Scenario | What it does | Sounds, port against original (plays, DirectSound volume, first start) |
|---|---|---|
| `w1` world 1, 30 s | three shots from the start, steps back | shot `rcshoot1` 3 and 3 at -473 (13.50 s, 13.52 s); impact `rcshoot4` 3 and 3 at -503; steps 2+2 and 2+2 |
| `w2` world 2, 70 s | walks on, falls into the moat, starts again, shoots | door `opendoornormal` 1 and 1 at -473; shot 1 and 1; its far impact at -838 in both; steps 10+5 and 10+5; landings 4 and 4 |
| `w3` world 3, 64 s | potion, coin, through the mausoleum doors, second coin, three shots | `ipotion` 1 and 1 (40.70 s, 40.69 s); `icoinm` 2 and 2 (41.91 s, 41.83 s); doors `opendoorkey` 6 plays, 5 audible in both; shots and impacts 3 and 3; behind the doors `gravey2` comes up and `gravey1` goes silent in both (46.11 s and 47.98 s; 45.77 s and 47.66 s); the music comes back up at the end of the opening scene at 33.56 s in both |
| `w4` world 4, 80 s | walks to the first ghost, which hits the player until he has to start again | ghost `spookkort3` 1 and 1 at -473 (52.60 s, 52.52 s); RedCat's cry `rcgen1` 4 and 4 times, then his line `rcgen7` once in both, all at -473; steps while he is held 19+19 and 19+19 |
| `w5` world 5, 40 s | walks into the guards | bats `baiiifx1` 5 and 5 at -473 (3.19 s, 3.18 s); the guard's line `wkgen10` 18.34 s and 18.35 s; `grizel1` 23.34 s and 23.35 s; `lv4snd16` 9 of 10 audible in both |

Files with the same audible plays, peak volume and start (within 1 s), port at 60 frames/s: 12 of 13,
21 of 22, 20 of 22, 31 of 34, 12 of 15. With the port at the reference's frame rate: 12 of 13, 20 of 22,
21 of 22, 33 of 34, 11 of 15. Level of the rendered mix against the recording (dBFS): -23.10 and
-22.98; -17.59 and -17.58; -19.07 and -18.83; -19.89 and -19.89; -17.90 and -17.71. `--check-sound`
reported no play with a mixer state different from the game's in any scenario.

What differs, and why it is not counted as a difference between port and original:

- **The landing sound** `rcland1.wav`: its volume follows the speed of the fall (-2072 against -2120
  and the like), and at the start of a world it may or may not come. Seen before without input.
- **The number of guard steps** (`wachter1/2.wav`) in world 5, as without input.
- **The fairy's travelling sound.** While the fairy's centre particle is on its way, `IdleFee1.wav`
  is started once every 2.5 s at -473 (timer in 0x47C2B0). The way ends when the particle's speed is
  below 0.5 in some frame, after a damping of `1 - 0.5·dt` per frame around the last waypoint
  (0x47E850). In world 5 that gave 5 starts in the original, 4 in the port at 2.5 to 8 ms per frame
  and 3 at 60 frames/s; in world 4, 4 in the original and 5 in the port at 60 frames/s, 4 at the
  reference's rate. The port's own count changes with its frame rate.
- **The ghost's rhythm.** Its four hits and RedCat's last line came at 56.14, 60.13, 63.45, 66.87 and
  71.00 s in the original, at 55.77, 58.72, 61.49, 64.10 and 66.83 s in the port at 60 frames/s. The
  time between two hits is one of two kinds, about 2.6 to 3.0 s or 3.3 to 4.1 s, and which one
  changes with the frame rate in the port itself: its last line came between 66.2 and 68.4 s at 8, 4,
  2.5, 2.0 and 1.7 ms per frame. Another time of day (`--clock-offset`) changed nothing, so it is not
  a random number seeded from the clock. Not traced into the ghost's code.
- **A short press while the ghost has the player** fires or not depending on the moment: of seven
  presses the port fired five at 60 frames/s, another five at 2.3 ms per frame and all seven at
  2.0 ms. The scenario therefore has no shots there.
- One step more or less (`rcwalk2` 12 against 11 in world 3).

**The numbers `sound-scenarios.mjs` prints for these (2026-11-14).** The tool counts every start of
a file within its window, copies included, which gives other numbers than the ones above:

| File | Port at 60 frames/s | Original (Wine) | Port at other rates (ms per frame) |
|---|---|---|---|
| `idlefee1.wav`, world 4 (78 s) | 7 | 6 | 6 at 2.0 and at 2.3 |
| `idlefee1.wav`, world 5 (38 s) | 4 | 6 | 5 at 2.5, 3.6, 5 and 8 |
| `wachter1.wav`, world 5, audible | 10 of 11 | 10 of 13 | 8 of 9 at 2.5; 13 of 13 at 3.6; 12 of 13 at 5; 12 of 14 at 8 |
| `wachter2.wav`, world 5, audible | 15 of 16 | 9 of 9 | 12 at 2.5; 7 at 3.6; 11 of 12 at 5; 8 of 9 at 8 |

These are the fairy's travelling sound and the guards' steps of the two points above: the counts
move with the port's own frame rate, and at the reference's rate in world 4 (2.0 ms) the fairy's
count is the original's. They are not a result of the change of 2026-11-14 to what the page's mixer
keeps (`source/web/audio.js`, the `alias` message of `dsound.js`): the port's traces of 2026-11-13
00:36 and 00:41, made before that change (`tools/out/input/w4t16.667.json`, `w5t16.667.json`),
give the same four numbers against the same reference, and the `alias` message only tells the page
which samples a duplicate shares; the game's calls do not pass through it. Not traced further:
why the guards' steps come out so differently per frame rate (inferred: the step sound is started
from the walk animation's frame events, which a frame can pass over or hit twice; not read in the
code).

`sound-scenarios.mjs` runs the port with every fix of `source/host/fixes.js` off since
2026-11-14 (`--fixes on` for the port as players get it): with the fixes on the Tower's fire loop
`lv4snd16.wav` showed as a difference (-1417 against -795), which is the setting "Zachter
torenvuur", not a fault.

A first version of the world 3 route passed the first coin at the edge of its reach: the port took
it at 60 frames/s, the original and the port at 3.1 ms per frame did not. The route now goes closer.

## Not established

- Microsoft's documentation of `DuplicateSoundBuffer` mentions a known issue: a duplicate plays
  at full volume until its volume is set to a different value. Wine does not behave like that,
  and the engine's own bookkeeping (above) expects the copy to inherit. On which Windows versions
  the issue exists, and so whether the original was louder on some machines, was not checked.
- Not compared: a shot that hits an enemy, an enemy that hits the player (only the ghost and the
  guards taking him), the other enemy kinds, bosses, the fairy's speech after a pickup, the results
  screen, and everything further into a world than the scenarios go.
- The sound of a real browser was not recorded.

## How to check

```sh
node tools/run-headless.mjs --seconds 40 --fresh --world 1 --check-sound     # mixer state equals the game's at every play
node tools/run-headless.mjs --seconds 40 --fresh --world 1 --sound-log tools/out/sound-w1.json
node tools/sound-summary.mjs tools/out/sound-w1.json                         # what is audible, at which level
node tools/run-headless.mjs --seconds 40 --fresh --world 1 --trace sound     # every event
```

`--check-sound` fails (exit code 1) when the mixer would play a buffer at another volume, pan or
rate than the game's DirectSound state says: with fix 1 taken out it reports 19 such plays in world 1.
In the browser, `RecompGame.audioState()` lists the running sources with their gains.

```sh
node tools/sound-compare.mjs tools/out/sound-w1.json evidence/reference-wine/dsound-world1.json      # calls against the original
node tools/run-headless.mjs --seconds 45 --fresh --world 1 --sound-wav tools/out/sound-w1.wav
node tools/sound-levels.mjs tools/out/sound-w1.wav tools/out/reference-wine/audio/world1.wav --skip-a 1.017   # levels; 1.017 s = the port's first Play
```

`--step 2.4` runs the port at 2.4 ms per frame, the reference's rate in world 1 (worlds 2 to 5: 4.4, 3.1, 2.0, 3.6).

```sh
node tools/sound-scenarios.mjs             # the five scenarios with input in the port, compared with evidence/reference-wine/dsound-in-*.json
node tools/sound-scenarios.mjs w3 --step 3.1
node tools/run-headless.mjs --seconds 64 --fresh --world 3 --ini 'Settings\Player1.ini|Player|Skill|1' \
  --script "wait:38;goto:1421,3239;tap:Control_L" --positions tools/out/p.json      # one script by hand
```
The reference itself is made again with `tools/reference-wine/campaign.sh` (see its README; about 6 minutes).

The file name in a trace is the last `.WAV` the game opened before it created the buffer: a label
for reading the trace, not something the game depends on.

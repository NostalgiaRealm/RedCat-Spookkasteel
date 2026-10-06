# Door, footstep, Brutus and combat music audio

This source-only pass leaves original installation files unchanged. No release
packages were generated. Native addresses refer to the installed RcHcGame.dat
SHA-256 `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.

## Door movement

`CAdamDoorModel` sound selection at `0x4cc140` uses DoorType:

| Type | Native sound |
| --- | --- |
| 0 | No automatic movement sound |
| 1 | OpenDoorNormal.wav |
| 2 | OpenDoorKey.wav |
| 3 | OpenDoorSecret.wav |
| 4 | empty.wav |

The jump table is at `0x4cc328`. Resource constructors at `0x51e7f0`,
`0x51e900`, `0x51ea10` and `0x51eb20` identify these files. The movement
state machine calls the same function on opening (`0x4ccc78`) and closing
(`0x4cce54`). Consequently the portable router plays the same original sound
on either actual transition, once per door transition. It uses a moving
spatial source and preserves separately authored Davi-Script/EffectSound cues.
Many moving models intentionally use type 4, so the router does not give every
moving model a generic wooden-door sound. The later
[world-action audio update](world-action-audio.md) adds an intentional, bounded
fallback for named visible door panels that otherwise use `empty.wav`.
Authored BeforeOpen/BeforeClose cues take priority. Lifts, slopes, hedges and
invisible barriers do not receive that fallback; native nonempty door types
retain their own cue. Numbered door samples continue through authored scripts.

## RedCat footsteps

The movement/wobble routine at `0x4d9d40` reads `Wobble.RunLoopSpeed` (0.5 in
the installed Game.ini). Its phase rate scales with the square root of speed
relative to the average of run/walk forward speeds. Quarter-cycle crossings
(`0x4da014..0x4da03f`, multiplier 4) alternate the left/right foot.

The native resource slots initialized at `0x42ed70..0x42fe15` and selected
at `0x4da0ec..0x4da3d5` establish:

| Contact | Walking | Running |
| --- | --- | --- |
| Ordinary ground | Rcwalk1 / Rcwalk2 | Rcwalk1 / Rcwalk2 |
| Water, contents 0x10000 | Rcwalk1 / Rcwalk1 | RcLWater / RcRWater |
| Ooze, contents 0x20000 | Rcwalk1 / Rcwalk1 | Rcwalk1 / Rcwalk1 |

Ooze takes precedence when both bits are present. The extra numbered Rcwalk
files are not proof of a stone/wood material table; this native selection
uses contents flags and movement speed. The remake now follows those slots.

The production frame loop supplies actual player positions and input to the
footstep clock. Grounding and displacement stop footfalls in the air, against
walls, during cutscenes, in no-clip, when riding a platform without walking,
and across teleports. Pause retains phase without advancing it. Movement
physics are portable. The follow-up [presentation recovery](presentation-native-recovery.md)
uses the native pre-multiplier input velocity, excludes platform carry from
movement gating and preserves the footstep clock in saves. Native footsteps
use this separate Wobble clock rather than animation contact events.

The 2026-10-04 audit confirmed all four selected WAVs are byte-identical to
the original installation. Footsteps pass fixed gain 1 and default playback
frequency, with no per-step pitch randomization. Native `0x54ffe0` caches the
sound resource, but `0x54f240` creates a separate engine voice through
`0x5c7f50` at `0x54f571`. Each footfall drops its local reference without
stopping the previous voice.

The remake previously reused the `player:step` replacement key. That cut off
the 717/777ms water recordings at the next running footfall (roughly 449ms).
Footsteps now play as independent one-shots grouped under `player:step`, so
their tails overlap naturally and finish even after movement stops. Global
pause/resume and level audio cleanup still cover every active instance.

Only the six footstep/footfall cases in `native-audio-completion.test.mjs`,
`presentation-native.test.mjs` and `presentation-renderer.test.mjs` were run.
They passed, covering surface selection, cadence, movement gating, independent
water playback, pause/resume and saved phase. Hashes, durations, native
disassembly and the test log are retained under
`current_work/footstep-audio-audit-2026-10-04/`. No build was created.

## Brutus combat voices

The two Brutus variants use the same localized voice assets. Mushroom Brutus
sound method `0x41fcb0` and Bone Brutus method `0x419c50` accept event values
2 (attack), 3 (hurt) and 4 (death):

| Event | VoiceNL file |
| --- | --- |
| Attack | BRIN0011.wav |
| Hurt | BRIN0003.wav |
| Death | BRIN0004.wav |

Constructors at `0x41f3c0/0x41f500/0x41f640` and
`0x4191c0/0x419300/0x419440` resolve these through the localized resource path.
The portable router now plays them from `assets/voices`, positioned at the
boss. It does not invent idle/alert clips absent from the native method.

## Ambient, action and special music

The native ordinary-enemy threat counter selects Action when enemies engage
and returns to Ambient after the last threat clears. The separate boss flag
selects Special; clearing it selects Action if ordinary threats remain,
otherwise Ambient (`0x422880`, dispatch methods `0x424b30/0x424c50/0x424d70`).

| Level | Ambient | Action | Special |
| --- | --- | --- | --- |
| Het Bos | Level 1 - The Forest.wav | Endbosses.wav | Endbosses.wav |
| Het Kasteel | Level 2- -The Castle.wav | Endbosses.wav | Endbosses.wav |
| Het Kerkhof | Level 3 - The Graveyard.wav | Endbosses.wav | Endbosses.wav |
| De Grotten | Level 4 - The Caves.wav | spookkort3.wav | Endbosses.wav |
| De Kasteeltoren | Level 5 - The CastleTowerr.wav | spookkort3.wav | Endbosses.wav |

These filenames come from each level's original EffectMusic entity. The host
now reacts to ordinary engagement and loss of threat in every level, while
retaining explicit script selections until combat state changes. Music mode
is saved separately from its filename: Action and Special intentionally share
a WAV in the first three levels. Older saves infer modes cautiously from the
slots and live boss state. An explicitly stopped track stays stopped until a
new script request or combat transition.

The mixer preserves playback position for same-file mode changes and honors
the authored CrossFade/FadeInTimeSeconds/FadeOutTimeSeconds (2 seconds in all
five levels). Pausing freezes fades, and stopping removes all fading layers.
The fade envelope is a portable linear amplitude interpolation; the native
fade curve has not been fully recovered. Threat timing follows perception and
remembered hits. The [knight attack correction](knight-attack-music.md) also starts
music immediately when an accepted shot targets an enemy outside its perception
range. Actual hits refresh `alerted`, `lastSeenAt` and remembered player position;
authored perception ranges remain unchanged.

## Secret discovery

The user corrected the discovery cue to `SecretFound.wav`. The executable
contains that resource at `0x69f808`, initialized at `0x51f6d0`. The previous
Bonus2 selection was wrong. Secret discovery now uses SecretFound and retains
its saved once-per-secret latch.

## Verification for this pass only

- Seven new tests in `tests/native-audio-completion.test.mjs`: native door
  transitions, both Brutus voice routes, footfall cadence/contents, physical
  movement gating, every level's combat music slots, mixer fades, and distinct
  saved Action/Special modes. Failed cases were corrected and rerun by name.
- Three selected music save/restore tests in `tests/script-host.test.mjs`.
- Only the hidden-button secret cue case in
  `tests/environment-interactions.test.mjs`.
- `node tests/native-audio-completion-scenes.mjs` decoded the original audio in
  Chromium and exercised the real source player/collider and event routing.
  No JavaScript or HTTP errors. Results:
  `artifacts/native-audio-completion.json`.

No full old test suite, package build, or version bump was run.

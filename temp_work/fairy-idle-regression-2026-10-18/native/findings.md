# Native Fleurifee audio trace — 2026-10-18

The original Fairy class selects the requested three recordings: `Gri5fx11.wav` for appearance, `IdleFee1.wav` for idle, and `Magiev12.wav` for disappearance. Its initial idle playback is a genuine loop at **0.4 base gain, normal frequency multiplier 1.0, centred pan 0.0**. The gain remains 0.4 through the sound-instance update path; it is not reset to 1.0 each frame.

The original also has a distinct, movement-gated particle-burst path that replaces the idle loop with a full-gain, non-looping `IdleFee1.wav` voice. That historical behavior is separate from the user's requested continuous active-duration loop. Do not restore that replay quirk or repeated `FairySprinkle1.wav` playback. Keep the three requested cue choices and the port's requested 3× idle range.

## Scope and evidence

Read-only analysis of the installed original, current source, and retained original-code evidence. Only evidence files in this directory were written. No gameplay or personal profile was controlled, no source was edited, and no tests or builds were run.

Original executable: `RcHcGame.dat`, SHA-256 `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`. The original settings were copied here without modification; [artifact-hashes.json](artifact-hashes.json) records their identities. [sound-hashes.json](sound-hashes.json) confirms all three requested imported WAV files and `fairysprinkle1.wav` are byte-identical to their original recordings.

REA selected the correct original artifact, but the subsequent Hopper provider operation timed out before provider startup. This is recorded in [rea-provider-limitation.md](rea-provider-limitation.md). No retry or setup changes were made, and the REA session was closed. The existing same-hash REA bundle from `../../fairy-ribbon-fade-2026-10-14/rea-evidence-bundle.json` supplies four retained records, copied into this directory. Fresh `objdump -d -M intel` excerpts independently establish the audio arguments, branches, and update behavior below. This is static native evidence, not a fresh native audio audition.

## Confirmed sound table

Each Fairy sound record has stride `0x18`; its active voice handle is at `Fairy+0x4b5c+slot*0x18`, and its filename descriptor at `Fairy+0x4b60+slot*0x18`.

| Slot | Native string | Initializer/global | Fairy constructor destination |
| --- | --- | --- | --- |
| 0 | `Gri5fx11.wav` at `0x692d6c` | `0x478230`, global `0x6b87c8` | `+0x4b60`, copy at `0x47905a–0x479078` |
| 1 | `Magiev12.wav` at `0x692d7c` | `0x478380`, global `0x6b87b8` | `+0x4b78`, copy at `0x47907b–0x479090` |
| 2 | `IdleFee1.wav` at `0x692fd0` | `0x4784d0`, global `0x6b87a8` | `+0x4b90`, copy beginning `0x479093` |

See [fairy-audio-names.asm](fairy-audio-names.asm), [fairy-constructor.asm](fairy-constructor.asm), and [fairy-string-bytes.txt](fairy-string-bytes.txt). `FairySprinkle1.wav` exists elsewhere in the executable at `0x692d8c`, but it is not slot 2 of this Fairy table. The full-binary immediate-reference search finds its uses at `0x46f8ed/0x46f993`, while this Fairy's initializer refers to `IdleFee1.wav`. Adjacent strings alone are not sound-role evidence.

`Settings/Volume.ini` lines 124–126 give each of the three requested files gain `1.0`. No Fairy-specific cue or gain setting was found in the original `Game.ini`. Thus the `.4` idle gain comes from the Fairy loop helper, not a per-file volume entry.

## Activation, departure, and repeated playback

Activation `0x47cdb0` first returns if the Fairy is already active (`+0x4be8`, `0x47cdb3–0x47cdbb`). Otherwise it activates the centre particle, resets both emission timers, and activates the orbiters. Its final calls are:

```text
0x47cf0b–0x47cf0f: playOnce(slot 0)       // Gri5fx11.wav
0x47cf14–0x47cf18: playLoop(slot 2)       // IdleFee1.wav
```

The frame method `0x479560` detects a centre active→inactive edge. On that edge only, `0x479645–0x479660` emits the departure particle burst, stops slot 2, plays slot 1 once, and clears the active marker. It does not repeatedly trigger disappearance during inactive frames. See [fairy-frame.asm](fairy-frame.asm), [fairy-activation-audio.asm](fairy-activation-audio.asm), and retained REA records `0x479560` and `0x47cdd0`.

The particle method `0x47c2b0` has two early guards: centre active (`Fairy+0x3f8`) and centre seeking/travelling (`Fairy+0x406`, i.e. centre particle `+0x7a`). Activation sets both flags. Centre update `0x47dd60` selects the seek method while `+0x7a` is true and the hover method once false. At the last waypoint, the seek method damps its velocity and clears `+0x7a` when speed drops below 0.5 (`0x47e8ef–0x47e903`). Therefore this particle-emission/replay path is **not active throughout settled hover**.

Within that guarded path, the constructor supplies 250 ms and 2500 ms timers. When either expires and a free particle slot exists, it emits a slow star. The expired short timer has priority and only resets itself. Otherwise, the expired long timer is reset, five fast stars are spawned, then `0x47c540–0x47c544` invokes `playOnce(slot 2)`. If both timers expire on the same frame, the short timer wins and the long-timer action can happen on a later frame. If no pool slot is free, neither emission action completes.

This is a restart of **IdleFee1**, not a separate FairySprinkle cue: both playback helpers own the same per-slot voice handle and stop the previous handle before replacement. The one-shot uses gain 1.0 and loop=false. Consequently, if the travelling burst runs, it replaces the original quiet loop with a louder one-shot. The exact-direct-call search finds only activation invoking the loop helper; it finds no automatic loop restart after settling into hover. This is why the native replay behavior must be distinguished from the intentional continuous-loop override.

Evidence: [fairy-pulse.asm](fairy-pulse.asm), [fairy-centre-movement.asm](fairy-centre-movement.asm), [fairy-centre-activation-seek.asm](fairy-centre-activation-seek.asm), [fairy-audio-direct-xrefs.txt](fairy-audio-direct-xrefs.txt).

## Exact loop arguments and steady-state gain

The complete helpers are in [fairy-audio-methods.asm](fairy-audio-methods.asm):

| Helper | Relevant call | Arguments to `0x54ed80` after output/name |
| --- | --- | --- |
| One-shot `0x47d2f0` | `0x47d3dd` or `0x47d4f6` | loop `0`, gain `1.0`, frequency `0.0`, pan `0.0` |
| Loop `0x47d570` | `0x47d660` or `0x47d77c` | loop `1`, gain `0.4`, frequency `1.0`, pan `0.0` |

Both helpers test the existing slot handle; if present, they stop/release it with `0x47d1f0` before making the new voice. `0x47d1f0` calls voice stop `0x553130` at `0x47d29f` and clears the handle.

Argument propagation is explicit through `0x54ed80→0x54f240→0x5c7f50`. Voice creation multiplies requested gain by file gain and effects-channel gain before the linear-to-log conversion. The loop boolean reaches the DirectSound `Play` flags at `0x5c8a51–0x5c8a66`; the buffer play position is reset to zero immediately before that. The frequency parameter becomes the third member of the backend sound configuration; `0x5c8e51–0x5c8e62` multiplies source Hz by it before `SetFrequency`. Therefore the initial loop uses ordinary pitch at rate 1.0. The one-shot helper's literal frequency parameter is zero, the original-frequency setting used by DirectSound.

Steady-state verification:

1. Creation stores the requested `.4` base gain at `voice+0x2c` (`0x54f867–0x54f86e`). It stores frequency at `+0x30` and pan at `+0x34`.
2. Creation sets spatial-update flag `voice+0x39` to zero (`0x54f8b1`); this helper passes no world position.
3. Sound-instance update `0x553170` copies `+0x2c` into its working gain (`0x55320e–0x55321b`). The spatial adjustment branch is conditional on `+0x39` and is skipped for this voice.
4. `0x553353–0x55336c` multiplies that same working gain by the sound definition's volume and the effects-channel control. It converts/applies the result and forwards the voice update to `0x5c8020` at `0x5535ed`.
5. There is a base-volume setter at `0x553610`, but the Fairy frame method does not call it or access its sound handles to change their gain. The full Fairy class sound calls are playback/stop operations described above.

The native loop base gain thus stays **0.4**, subject to the ordinary file/channel/master controls, until stopped or replaced by the travelling one-shot. There is no Fairy-specific every-frame promotion to 1.0. The port's requested spatial range remains a separate intentional behavior and should not be removed to copy this original non-positional helper.

Evidence: [fairy-audio-call-backend.asm](fairy-audio-call-backend.asm), [voice-create.asm](voice-create.asm), [voice-instance.asm](voice-instance.asm), [genesis-play-sound.asm](genesis-play-sound.asm), [directsound-play-update.asm](directsound-play-update.asm), [fairy-class-all.asm](fairy-class-all.asm).

## Current-port interpretation

At the start of this analysis, `src/world-effects.js` emitted the appearance once, started/resumed `idlefee1.wav` with loop=true, and emitted only a departure cue for the effect's departure event. Particle sprinkle events were silent. Its sound helper defaulted to volume 1, including the idle loop; that differed from the confirmed native loop base gain .4. Restoring an already-active Fairy intentionally resumes the idle loop without appearance replay.

The intended cue/loop policy is documented in `docs/fairy-skip-audio-2026-09-22.md` and `docs/fairy-dialogue-pickup-lifecycle.md`. `src/ambience-ranges.js` explicitly applies `FAIRY_IDLE_DISTANCE_SCALE = 3`; preserve it. This analysis does not establish the cause of the user's perceived repeated/wrong sound or prove an HTML audio loop gap. It establishes the sound identities, native pitch/gain, and exact native replay conditions so the runtime investigation can distinguish them from the requested overrides.

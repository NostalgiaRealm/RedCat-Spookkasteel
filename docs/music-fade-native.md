# Native music volume envelope

Recovered on 15 October 2026 from the shipped `RcHcGame.dat` with REA/Hopper.
SHA-256: `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
The retained queries and assembly are in
`temp_work/music-fade-2026-10-15/rea-music-fade.json`.

## Recovered behavior

`CAdamEffectMusic` stores a control-volume value for each of its two voices.
The crossfade branch adds `frameSeconds / FadeInTimeSeconds` to the incoming
voice (`0x57e050–0x57e06d`) and subtracts
`frameSeconds / FadeOutTimeSeconds` from the outgoing voice
(`0x57e0f3–0x57e109`). It clamps the endpoints to one and zero at
`0x57e11c–0x57e1b9`. The frame duration is converted from integer milliseconds.
This is a constant-rate ramp: reversing a partially completed fade does not
restart a full-duration interpolation over the remaining distance.

`0x553610` passes that control value into the sound's volume field. The sound
mixer (`0x553170`, especially `0x55336c–0x553374`) multiplies it with the other
control gains **before** the native `LinToLog` conversion at `0x54d030`.
Together with DirectSound's centibel conversion, the portable amplitude is
`10 ** (0.5 * log2(controlGain))`; zero is silent. At a half-finished fade-in,
an otherwise full-volume track has amplitude about 0.3162, not 0.5. At a
quarter-finished fade-in it has amplitude 0.1, not 0.25.

REA's Hopper function boundaries split this controller into several pieces.
The conclusions above use the actual x87 arithmetic and call sites, rather
than treating decompiled pseudocode as original source.

## Port implementation

`src/music-fade.js` implements the constant-rate control ramp. `src/audio.js`
applies the fade inside the existing native gain conversion. Fades pause with
the game; saved envelopes retain their current gain and elapsed progress.

This changes the **volume envelope only**. The intentional full-track looping,
track selection, combat triggers, remembered playback positions, same-file
reuse, reversible crossfades and audio ranges remain in place. It does not
restore the original scheduling or try to duplicate the Windows audio driver.
The browser applies the calculated gain on its update rather than reproducing
the original controller's one-frame write ordering or sample-level timing.

## Focused verification

`node --test tests/music-fade-native.test.mjs` checks full ramps, endpoint
clamping, partial reversals, save continuation and the audible quarter/half
gain values through the actual mixer.

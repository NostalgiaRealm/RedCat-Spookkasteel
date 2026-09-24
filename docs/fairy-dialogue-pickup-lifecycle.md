# Fairy identity, complete dialogue and pickup audio

This source change fixes three separate causes; it does not modify original
WAV files or build a release package.

## Wrong fairy identities

The original forest BSP gives editor entity `Fairy10` the Davi-Script name
`fairy11`, and editor entity `Fairy11` the script name `fairy12`. The former
lookup table combined both namespaces case-insensitively, so `fairy11.Enable`
enabled both entities. Similar collisions affected the forest and graveyard
fairies. Repeated identical aliases could also return an entity twice.

`Gameplay.find` now deduplicates matches and prioritizes authored `DaviName`
and `DaviNameGroup`; editor labels are a fallback only. Object-ID lookups used
by saved motions remain direct ID lookups. All 31 original fairy entities are
tested, with their actual positions, waypoint references and script bindings.

Two original editor entities start enabled even though they have later scripted
encounters: forest `fairy12` and castle `fairy3`. To meet the requested behavior
that only the triggered lantern encounter appears, fresh initialization leaves
fairies dormant until their encounter script enables them. Saved live encounters
keep their saved state.

Enabling a different fairy explicitly disables the earlier encounter through
its ordinary departure path. For legacy saves with several enabled fairies,
restoration keeps the one nearest the authoritative saved player position;
without that position it leaves the state untouched until an explicit activation
resolves it. It does not guess from an older checkpoint.

Appearance remains `gri5fx11.wav` once, idle remains `idlefee1.wav` looping,
and ordinary departure remains one `Magiev12.wav`. Departure stops appearance,
idle and legacy fairy sounds before its separate departure cue. Explicit skip
stops every fairy sound and clears the effect, including the departure tail.

## Complete dialogue and pause

Previously, `main.js` stopped the single voice on every subtitle event,
including the subtitle timeout, and again on cutscene completion. Imported
durations start on the script clock, while browser playback can begin later
because of fetching or decoding. Consequently a timeout or the next script
line could cut off a recording before its actual end.

Dialogue now uses a FIFO advanced by the media `ended` event. A failed recording
advances the queue instead of blocking the scene. Subtitle display follows the
currently playing queue item. Natural `StopCutScene` waits for that queue to
finish; the active fairy's automatic lifetime waits with it. Explicit script
Disable still deactivates the fairy, and holding E skips immediately and clears
the entire voice queue. The pending scene-end marker is saved and restored and
cannot strand a restored scene when no voice remains.

Pause now pauses every active media element, including player reaction/death
voices and records created while paused. Resume retains each media position and
the remaining countdown for delayed repeating emitters. The previous special
death-sound exemption is removed. No record is restarted from zero on resume.

The native `CutSceneSay` binding is registered at `0x52770f..0x527731`, its
wrapper is `0x56a2b0`, and it calls the native speech path at `0x481dd0`.
The browser completion queue is a portability correction for the requested
uninterrupted sequence; it is not a claim to emulate the original decoder's
internal scheduling exactly.

## Pickup and BIG BENG recordings

Native coin audio resources are initialized at `0x43bb00` (S), `0x43bc00` (M)
and `0x43bd00` (L). The size selection at `0x43c850` chooses their respective
global resources `0x6b5918`, `0x6b58f0`, and `0x6b58c8`. The router had played
the medium recording for every bag. In the unchanged original files:

| File | Complete duration |
| --- | ---: |
| ICoinS.wav | 0.467211 seconds |
| ICoinM.wav | 0.418231 seconds |
| ICoinL.wav | 0.370884 seconds |

Thus the small bag used a recording about 49 milliseconds shorter than its
proper sample. Coin and health pickups now select S/M/L using the original
entity Type. Each pickup keeps an independent one-shot record so subsequent
pickups cannot replace its ending. Imported coin, potion, heart and mirror
WAVs were verified byte-identical to the installed originals.

The forest mirror's original `PickupCommand` immediately triggers the level
exit. The old 800 ms transition reset all audio, cutting the 3.083628-second
`IMirror.wav` by about 2.28 seconds. Pickup records now carry a mixer group;
the pending level transition waits for every pickup and dialogue recording to
finish after its minimum delay. Media failure/reset releases the guard, and
pausing retains the records and suspends progression until resume.

The native charge start function `0x436b40` chooses global `0x6b52e0` for
projectile factory type 11; its constructor at `0x4308c0` identifies
`rcshoot3.WAV` through string `0x6902b4`. Charge now loops this recording and
release/cancel stops it, matching the native stop entry `0x436a30`. The loop
also obeys pause/resume.

## Focused verification

Nine new tests in `tests/fairy-audio-lifecycle.test.mjs` cover complete FIFO
ordering, delayed-load simulation, every-channel pause/resume, skip/reset,
failed media, all 31 fairy identities/idle lifetimes, held cutscene completion,
pickup sizes/overlapping tails, exclusive encounters/legacy saves and the
charge-loop lifetime and the completion guard for pickup tails. These pass.

Only the new focused tests were run for this pass. Browser integration results
for the real menu, pause and cutscene events are recorded by the accompanying
integration check. No broad old test suite or package build was run.

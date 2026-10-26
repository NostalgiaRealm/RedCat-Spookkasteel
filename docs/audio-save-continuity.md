# Audio continuity when restoring an adventure

Implemented 2026-10-15 in `source/audio.js` and the adventure save/load path in
`source/main.js`. This extends the port's saves; it does not claim that the native
save format preserved every active recording.

## Saved playback

An adventure now stores a versioned audio state alongside gameplay. It retains:

- The current playback position of active music, effects, dialogue and pickup
  tails, including overlapping one-shots of the same recording.
- Both layers of a music crossfade, their current native control gain and fade
  progress, and remembered positions of tracks temporarily replaced by combat.
- Loop replay countdowns, their authored minimum/maximum delay, and playback
  rate. Loading does not draw a fresh random delay.
- The currently spoken dialogue line and all already queued lines, in order.
  The active line resumes at its saved position; the queue is not reconstructed
  from the last subtitle alone.
- Authored/script volume, source identity and spatial position. Existing moving
  source bindings are retained; other moving actors are rebound by their ID.
  Saved positions remain the fallback for emitters without a current binding.

Settings such as master volume, channel gains and the intentional ambience
ranges remain those of the current session. See
[`music-fade-native.md`](music-fade-native.md) for the separately recovered native
volume envelope; sound selection and music scheduling are unchanged.

## Restore ordering and cancellation

Level/scripts/effects restore first while the audio mixer is paused. The saved
playback state then replaces the reconstructed sounds without replaying script,
pickup or dialogue-trigger events. Playback resumes only when level loading has
finished. The current pause state belongs to the caller and is preserved.

A media seek that needs metadata remains pending; it never briefly plays the
beginning of the WAV. The requested offset also remains in a new save made
immediately after loading, even when an HTML media element still reports zero.
Decoded Web Audio sources seek using their decoded sample timeline. Only loops
wrap offsets at their duration; one-shots at the end are not wrapped to zero.

Released source callbacks, delayed metadata and outstanding decoded-buffer loads
cannot resurrect a replaced level or advance a restored dialogue queue.

The saved state contains numeric clocks and metadata, not PCM audio. It is
bounded to 512 live sounds, 32 remembered music positions and 128 dialogue lines;
load validation rejects malformed entries and different-level states. Existing
saves without this state continue to use script/effect reconstruction as before.

## Validation and limits

`tests/audio-save-continuity.test.mjs` covers music layers/fades, remembered
tracks, overlapping pickup tails, moving emitters, delayed loops, dialogue FIFO,
metadata-delayed seeks, immediate re-saving, decoded-buffer waits/cancellation,
legacy saves and invalid input. Related focused music-loop, pickup-tail and
fairy-dialogue lifecycle checks also passed. Logs are retained under
`temp_work/audio-save-2026-10-15/`.

`node tests/audio-save-scenes.mjs` also passed through the actual browser menu
save/load path using real WAV files: paused offsets, crossfade layers, pickup
tails, the active subtitle and queued dialogue survived. The first subsequent
Fleurifee effect update retained the restored idle voice instead of restarting
it. The test uses an isolated profile under `temp_work/`, leaving player saves
untouched.

This preserves source playback position, not the audio already queued in an OS
or hardware output buffer. HTML media seek accuracy remains bounded by the
browser's media implementation. Future random choices after a restored delayed
loop are not made deterministic by this change. No packages were built for this
work.

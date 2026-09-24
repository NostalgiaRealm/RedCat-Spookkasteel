# Fleurifee effect saves

Fleurifee now saves the live `NativeFairyEffect` state instead of deriving it from
`effectAge`. The motion/particle behavior remains the previously recovered
`CFairy`/`CParticle` implementation. This is a portable save-format improvement,
not an implementation of the original game's RCR file format.

The snapshot preserves the current centre position/velocity/waypoint, seeking or
hovering state, all five orbit tips, the complete live ribbon history, all 50
particle slots, slot oscillator phases, random-generator state, emission timers,
colour channel/direction, both pulses, rotation, activation/departure flags and
the fractional fixed-step accumulator. Inactive slots store only the oscillator
state that survives reuse. Pools and trails are bounded; restoration validates
their shape and finite values before accepting the snapshot.

Restoration renders the saved state immediately, including an already departing
fairy. It neither simulates the entire past nor respawns a missing departure
burst. Only an active fairy's idle loop resumes on the first simulation update.
Appearance and already-played departure sounds do not replay; the audio sample's
precise playback cursor is not part of this visual snapshot. Render-only refresh
does not consume random values, alter clocks or trigger sounds. Skipping a
restored dialogue clears its effect and cannot restart its idle sound.

Legacy age-only saves retain the earlier replay fallback; their missing particle
and activation history cannot be recovered exactly. New ordinary saves and all
new rolling recovery snapshots include the complete bounded effect state.

Focused checks: `node --test tests/fairy-save-state.test.mjs` covers active,
departing, dormant/reused, fractional-step, malformed and legacy snapshots, audio
lifecycle and skip cleanup. `node tests/fairy-save-scenes.mjs` verifies exact
state and geometry through the actual menu save/load path. No builds generated.

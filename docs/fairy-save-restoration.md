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

The [26 October particle-clock correction](presentation-source-parity-2026-10-26.md)
also saves each active secondary star's native lifetime, fade-delay and fade
deadlines, fade mode and displayed byte alpha. Older pool snapshots without
those fields receive bounded clock-only reconstruction; their position,
velocity and visible opacity survive without replaying emission or movement.

The [native ribbon follow-up](fairy-ribbon-fade-native.md) additionally preserves
each segment's orbiter and both endpoint timestamps (`trailFormat: 2`). Earlier
segment-only saves migrate once. The original opacity is derived from these
timestamps, so repeated rendering does not advance its fade. Ribbons stop with
the orbiters; a restored departure still preserves the separate fading stars.

Restoration renders the saved state immediately, including an already departing
fairy. It neither simulates the entire past nor respawns a missing departure
burst. Only an active fairy's idle loop resumes on the first simulation update.
Appearance and already-played departure sounds do not replay. The visual
snapshot does not contain audio, but the separate
[audio save state](audio-save-continuity.md) now retains active sound cursors.
When that state restores the idle loop, the visual resume hook does not restart
it on the next frame. Legacy saves still use the idle-start fallback. Render-only refresh
does not consume random values, alter clocks or trigger sounds. Skipping a
restored dialogue clears its effect and cannot restart its idle sound.

Legacy age-only saves retain the earlier replay fallback; their missing particle
and activation history cannot be recovered exactly. New ordinary saves and all
new rolling recovery snapshots include the complete bounded effect state.

Focused checks: `node --test tests/fairy-save-state.test.mjs` covers active,
departing, dormant/reused, fractional-step, malformed and legacy snapshots, audio
lifecycle and skip cleanup. `node tests/fairy-save-scenes.mjs` verifies exact
state and geometry through the actual menu save/load path. No builds generated.

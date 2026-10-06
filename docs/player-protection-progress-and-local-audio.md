# Player protection, permanent abilities and local environmental audio

These changes are source-only. No packages or website deployment are generated.

## No-clip protection

`CastleWorld.attachGameplay` supplies `Gameplay.damage` with the current player
controller's no-clip flag. Every damage route through the gameplay damage entry
point is ignored during free flight, including enemies, projectile bodies,
beams, liquids and scripted `KillPlayer`. Mushroom ribbons are visual only:
the native `TrailDamage` field has no hurt consumer; direct mushroom-body
contact supplies their damage. Ignored damage causes no hurt
reaction, death, lost life or new hit cooldown. Turning no-clip off immediately
restores ordinary damage; a blocked safe-exit attempt keeps both flight and
protection enabled. Loading a save with no-clip enabled also retains protection.
This is an intentional convenience requested for the remake, not native behavior.

## Earned abilities across chapter replays

The existing `redcat.progress.v1` record now optionally stores `earnedSkills`, a
validated mask of the original five skill bits. Actual `RcEnableSkill` events
persist their skill immediately, independently of the one-minute checkpoint.
Loading a chapter or replaying an earlier one merges those learned skills into
its initial/restored player state before its scripts initialize. Completing a
chapter and the unlock-all-levels cheat preserve the learned mask. Supplies and
unlock cheats do not themselves award skills. A valid older adventure checkpoint
migrates its saved skill mask; malformed masks or checkpoints are ignored.

`Start opnieuw` is the intentional exception: a successfully loaded new
adventure clears the earned mask and starts the Forest with ordinary shooting
and jumping. Cancelling the confirmation or failing to load the new adventure
preserves the previous progress. Chapter replay and the unlock cheat do not
perform this reset.

Temporary scripted weapon restrictions remain under script control. The campaign
mask is applied at chapter entry, not forcibly reapplied every frame.
See [native player abilities](player-abilities-native.md) for the actual reward
gates, BIG BENG script correction, jump animation and shot timing.

## Deliberately shorter sound ranges

The native castle has 14 positioned `EffectSound` entities. These include four
with `Use3DSound=0`: the moving/stopping drawbridge, a secret-door sound and a
second stopping mechanism. The remake localizes these positioned effects as
well as spatial sounds. Unpositioned pickup/UI sounds, music and dialogue keep
their existing routing.

- Castle effects retain their authored gain within 17.55 metres, smoothly fade
  between 17.55 and 87.75 metres, and are silent beyond 87.75 metres. Moving sound-source
  callbacks continue to use their updated positions.
- Tower `LV4snd16.WAV` is positively identified by nine `s_torch01`…`s_torch09`
  emitters plus the cauldron-area `vuur` emitter. Its gain is multiplied by .65,
  then fades between 10.53 and 63.18 metres and is silent beyond 63.18 metres. With the
  existing native logarithmic conversion this is about half the previous
  close-up amplitude. `LV4snd15.WAV` is the separately authored `bubbles` sound
  and is unchanged.
- Cave loops fade between 17.55 and 105.3 metres.

These are the current `src/ambience-ranges.js` values after the requested
hearing-range increases. They supersede the original local choices of 5–25 m,
3–18 m and 5–30 m respectively. The normal five-level minimum distance is now
175.5 m instead of the native 50 m; its maximum-distance factor remains 150.

Distances use 32 engine units per metre and the existing audio listener. Range
changes preserve original WAV files and their per-file, script, channel and
master volume controls. These ranges are chosen for nearby-section audibility
as requested; they intentionally differ from the original game's long reach.

## Focused verification

- `node --test tests/player-cheat-progress.test.mjs` — four checks covering live,
  restored and blocked-exit no-clip protection, lethal script damage, campaign
  skill persistence/replay and migration validation.
- `node --test tests/castle-tower-ambience.test.mjs` — three checks covering every
  actual castle sound emitter, moving positions and volume factors, all ten
  actual tower fire emitters and untouched bubbling/music/voice routing.
- `node tests/player-audio-integration-scenes.mjs` — browser checks of the real
  cheats setting, immunity, reload/replay skill retention, complete sequential
  WAV playback, pause/resume and explicit two-second skip. Results are recorded
  in `artifacts/player-audio-integration-scenes.json`.
- `node tests/mirror-audio-transition-scenes.mjs` — the original forest mirror
  script completes the level, but its entire 3.084-second recording finishes
  before the castle loads. Pausing suspends both playback and the pending
  transition; resuming plays the remaining tail before advancing. The minimum
  transition delay remains .8 seconds, and any pending dialogue also completes.

Other changes in this batch are documented in
[door activation](door-activation-native.md) and
[fairy dialogue and pickups](fairy-dialogue-pickup-lifecycle.md).

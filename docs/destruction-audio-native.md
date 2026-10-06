# Native destruction audio

Read-only comparison against the installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`,
on 2026-10-04. Source changes only; no builds generated.

## Correct recording and volume

The remake previously emitted `Explosion.wav` for every destroyed actor.
That file is original, but it is not the recording selected by the native
actor explosion factory. Native `RcExplosion` selects **`expl6.wav`**.

- `0x51f7f0` / `0x51f875` copies the `expl6.wav` literal at `0x69f818`;
  `0x51f895` initializes its sound definition at `0x6ba1a0`.
- Actor destruction constructs `RcExplosion` at `0x4a7fd2`.
- Its initialization at `0x58d904` passes `0x6ba1a0` to sound-cell constructor
  `0x4ac120`, with zero delay at `0x58d90a`.
- `0x58d92f..0x58d988` sets instance gain to
  `clamp(SizePercentage * 0.04, 0.4, 0.98)`. `SmokeOnly` overrides this to 0.4.
  Setter `0x4ac660` writes the cell's `+0x68` gain, used at `0x4ac4ca..0x4ac4ea`
  when starting positional playback.
- `Volume.ini` gives `expl6.wav` gain 1.5; the native file loader clamps it to 1,
  before applying instance gain. The existing mixer already does this.

The correction uses `expl6.wav` and that volume formula for destructible
actors, including boxes, gravestone covers, glass and exploding passages.
Zero-size debris-only explosions still sound; an explicit zero explosion
count does not. Successive destructions use independent one-shots, preserving
each recording's tail and pause/resume position.

All 140 installed actor INIs with explosion settings specify exactly one
explosion. Their optional `ExplodeParticleFallSoundType` and
`ExplodeExtraSoundType` fields are all zero. Those optional native paths
select `crate3.wav` for types 1/2 and `crate4.wav` for type 3
(`0x4a81b7..0x4a82d9`, with definitions initialized at `0x4a11e0..0x4a1810`).
They are therefore not additional box-destruction sounds to play in the
shipped levels. This correction does not implement unused optional sound
layers or change projectile-specific impact sounds.

## Focused verification

- SHA-256 comparison: imported `expl6.wav`, `Explosion.wav` and `crate1..5.wav`
  are byte-identical to the original files. `expl6.wav` lasts about 579 ms;
  the previously selected `Explosion.wav` lasts about 2,116 ms.
- `tests/destruction-audio.test.mjs`: original actor settings, sound selection,
  size/smoke gain, independent complete tails, pause/resume, silent reload of
  destroyed props, and explicitly disabled explosions.
- Existing destruction assertions now expect `expl6.wav`. Only the focused
  crate-hit, grave-trigger and solved-puzzle restoration cases were rerun.

Evidence and logs are retained in
`current_work/explosion-audio-audit-2026-10-04/`.

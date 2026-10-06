# Native behavior follow-up

23 September 2026. Read-only reference executable: `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
These changes use recovered values and imported assets; they do not establish
complete frame-for-frame native parity. No builds or packages were made.
Status reviewed against the current source on 5 October 2026. The verification
results below describe their original focused runs, not new tests during this
documentation review.

## Enemy navigation and combat

- The graph search at `0x59c630` floods integer hop counts from the destination;
  `0x5994c0` chooses a neighbour with the lowest label. The remake now uses this
  breadth-first route rule for pursuit around obstacles. Choosing nearby entry
  and terminal nodes, body clearance and a short retry cache remain portable
  implementation choices. Authored patrol edges bypass pursuit search, fixing
  the [graveyard performance regression](graveyard-performance-regression.md).
- `RcShootInfo` construction (`0x426800`, count calculation
  `0x426905–0x426948`) samples
  `trunc(1 + (AverageShotsPerSalvo - 1) * (rand % 10000) * .0001)` once.
  Attack states copy that stored count, for example `0x401562–0x40156e`.
  Each enemy now preserves its sampled salvo size across attacks and saves.
  The portable per-enemy saved RNG remains different from the Windows CRT's
  global random stream.
- Spider attack exit enters MoveToStart (`0x408f12`, `0x409122`); the return
  ascent adds the same configured FallSpeed (`0x40950d–0x409553`). Spiders now
  return to their own hanging point after losing a remembered target, climb
  their web and become dormant again. Return/ascent state is saved.
- The touch-enemy decision at `0x40ae9c` has three outcomes: MoveCloser or
  two opposite two-second waypoint selectors. The earlier contact-wait label
  was incorrect: the one-second movement wait means no valid destination,
  independently of the damage cooldown. Exact neighbor scoring, timing and
  shared reservations replaced continuous orbits on 2026-10-05; see
  [enemy waypoint movement](enemy-waypoint-movement.md).
- Guardian construction (`0x40d660 → 0x42dc80`) inherits CRcTouchEnemy; the
  initializer (`0x42dd20`) installs the same touch main-state family as bats.
  Its native collision callback (`0x42def2–0x42df2a`) damages on contact with
  a one-second cooldown. Guardians now approach for actual contact rather than
  dealing generic melee damage from a distance. No separate shield or boss-like
  guardian phase was established by this investigation.
- Knights now check the whole configured strike interval, including
  ShootMotionCollisionEnd, rather than only the opening instant. One swing
  damages at most once; its saved window shifts when scripts freeze combat.

The old audit inferred missing behavior from `TimeToRecoverFromHit`, but that
setting name is absent from this executable. Its mere presence in imported data
is insufficient evidence for an additional native recovery timer. Hit-motion
rates remain consumed through HitMotionFactor.

`tests/enemy-native-completion.test.mjs`: nine new native/navigation/save tests
passed, followed by the separately added patrol-versus-pursuit regression test.
The actual graveyard frog patrol/save scene and repeat-visit performance scene
also passed. This is targeted coverage, not a full campaign playthrough.

## Actor and projectile lighting

The actor importer now retains ActorLighting and ActorLightAnimation. Actor
instances apply authored sunlight/ambient switches, ambient overrides, default
sun settings, maximum dynamic-light count and interpolated a–z colour patterns.
The shared actor colour update is at `0x4a6c30`. For example, the original heart
cycles red to white over two seconds; stained glass uses its fullbright ambient.
Each actor selects its own nearest in-range lights up to its authored limit
(default two, bounded to 32), rather than inheriting only the lights nearest the
camera. The later recovery also restored root-reference preparation, local Sun
selection, baked/dynamic floor ambient and raw-RGB vertex shading. Ghost/death
material clones retain their instance lighting state. See
[actor lighting](actor-lighting-native.md).

Ordinary projectile constructors call `0x44c1b0` with a radius-200 orange
light (250,175,20); the light setter forces alpha 255 (`0x4e30b1`). Mushrooms
use their difficulty's TrailRed/Green/Blue values. Lights now move with their
projectile and disappear when it retires. They illuminate world surfaces and
actors; projectile artwork remains white-tinted and retains its readability
scaling. The earlier fixed sun/ambient and approximate world falloff have been
replaced: BSP surfaces use the recovered texture-axis luxel arithmetic, channel
clamping and interpolation. Authored shadow-casting world lights now perform
cached static-BSP obstruction checks. The selected-world-light budget and
portable precision differences remain; see [world falloff](world-light-falloff-research.md)
and [world shadows](world-light-shadows-native.md).

Five focused JS tests, two actor-import tests and the source-browser forest
lighting scene passed. The scene measured changed pixels when a shot light was
added, exact removal afterward, the heart's animated colour and successful
shader compilation. See `artifacts/actor-projectile-lighting-scenes.json` and
`artifacts/actor-projectile-lighting.png`.

## Directional audio and wall obstruction

`geSound3D_GetConfig` at `0x5c7cbf` uses camera-local azimuth with
`pan = sin(azimuth) * .1`. DirectSound converts this to up to ±1000 centibels:
the opposite speaker is attenuated by up to 10 dB, while the near speaker stays
unchanged. Web Audio now implements those separate channel gains, preserving
mono/stereo input. Music, dialogue and UI remain on their existing nonpositional
paths. A browser without Web Audio retains the distance mixer.

Spatial queries use the imported source/listener BSP leaves, PVS and connected
areas, with moving-door state refreshed independently of rendering. The native
solid-model trace uses contents mask 0x43; actors do not obstruct sound. A blocked
path scales effective distance by 1.5. Per-source obstruction checks are cached
briefly; camera rotation still updates panning each frame. The asset import
orchestrator now also generates the visibility data required for these queries.

Authored gains, FIFO full-WAV dialogue, pause/resume and intentionally shorter
ambience ranges remain in effect. Fleurifee retains the requested threefold
range and player-centred hearing exception, so overview-camera PVS cannot silence
her idle effect. Audio reset disconnects routed nodes and invalidates pending
world attachment.

Five new spatial unit tests and the eight existing directly affected mixer tests
passed. `tests/spatial-audio-scenes.mjs` measured real mono-WAV channel output:
about 0.316 opposite/near amplitude, reversed by turning the camera. It also
checked frozen paused playback time, resume continuity and actual castle PVS
suppression, with no browser errors. See `artifacts/spatial-audio-scenes.json`.

## Portal and debris recovery

A deeper audit corrected the earlier swapped volume/frequency interpretation.
Show starts LV2snd7 at volume 1.9 and frequency .075, plus Magiev18 at volume 1
and frequency .5. The terminal cue is Magiev1 at original frequency. There is
no recovered terminal volume envelope. The looping voice now supports the
actual low sample rate through Web Audio; completion stops only that loop.
See [portal audio](portal-audio-native.md).

Portal particles now follow the recovered spawn, seek, orbit and outward-burst
rules, with a bounded saved pool. Beams span ceiling to descending head at
native width; the floor blast and camera-facing final flash use recovered
sizes and timing. See [portal recovery](portal-native-recovery.md).

Debris uses source-volume spawning and inherited scale, each fragment's own
INI physics/collision dimensions, native gravity/drag, reflection, spin and
settle-triggered fading. Blasts now use the original placement/delay rules and
finite smoke emissions, with per-puff motion, size and opacity. See
[debris recovery](debris-native-recovery.md).

Targeted unit checks cover those native rules, save/load continuation, legacy
completed saves, audio lifecycle, the eleven authored portal journeys and
rendered source bounds. The source-browser tower/graveyard fixture passed
without script, loading or WebGL errors; it kept nine shader programs through
the portal sequence, and the grave fragments all retired. Maximum measured
graveyard update time in that focused run was 14.7 ms (a diagnostic result,
not a whole-level performance guarantee). See
`artifacts/portal-debris-native.json` and `tests/portal-debris-native-scenes.mjs`.
The separate audio browser fixture verified the slowed waveform and pause/resume.
`tests/explosion-native-scenes.mjs` also exercised the actual graveyard crate:
blast pixels appeared before smoke, the smoke cohorts expired, and all fragments
retired. Pixel comparisons verified rendered sprites rather than just allocation
counters; `artifacts/explosion-native-scenes.json` records the checks.
Only affected checks were run; no packages were built.

Player reactions, projectile collision and the correction to the earlier
"shove" claim are documented in
[player reactions and projectile contact](player-reactions-and-projectile-contact-native.md).

# Enemy ambushes, flight and turret hits

This source update does not produce release packages. It addresses ceiling
spiders, dormant skeletons, clustered bats, Witch combat after the introduction,
and the requested ability to damage cave Max by shooting his vehicle.

## Original evidence

The research used the installed `RcHcGame.dat` read-only, the original enemy
settings, the imported actor motions and the compiled level scripts.

- Spider initialization at `0x413a90` calls the upward ceiling trace at
  `0x429600`, retains its lower start position (`0x413b13`), and moves the actor
  to its upper position (`0x413b31`–`0x413b46`). The two spider movement handlers
  at `0x409440` and `0x409a60` add/subtract `dt * FallSpeed` and clamp at the
  endpoints. They do not apply falling gravity. The web is a plain dark line
  drawn by `0x40971c`–`0x409749`, with RGB components of 10. `spiderweb.act` is a
  separate static prop and is not the descent effect.
- Skeleton default state `0x407b70` selects the first motion with a held clock;
  `0x407950` initiates the motion state and waits for its completion. In the
  original `skeleton.act`, the first frame of `start` is the pile of bones.
  This motion lasts about 2.133344 seconds. The original cave room scripts
  enable the skeleton groups; an enabled room alone must not turn the bones
  into an already walking skeleton. Normal `Skeleton.ini` perception range
  is 250 world units.
- Touch-bat state `0x40ac60` contains the one-second no-destination wait (`0x40ae2b`)
  and three randomized pursuit modes (`0x40ae9c`), including two timed
  2,000-ms flight modes. Their exact waypoint selectors were recovered in the
  [2026-10-05 follow-up](enemy-waypoint-movement.md). The original rest-pose bat body is much narrower than
  its animated spread wings.
- The actual tower introduction enables `The_Witch` through
  `trigger_witchmodel`, unfreezes enemies and returns RedCat to the ground.
  The authored initial flight is `witch110` to `witch100`, rising through the
  decorative cauldron. Body collision previously trapped her inside it.
  Later automatic point-visibility links could also select a shortcut that
  was clear for a ray but blocked the Witch's full body.

## Runtime behavior

Spiders are placed at a BSP ceiling above their lower landing point. Their
ambush senses RedCat near that landing point, descends at the difficulty's
original `FallSpeed`, renders the native-style line during descent and then
hands movement to the ordinary spider AI. Outdoor spiders without a usable
ceiling remain ground enemies. Skeletons hold the first `start` frame, wake
when enabled and within their perception range and line of sight, finish the
original rising motion, then begin ordinary combat. Ambush progress persists
through saves and pauses during script freezes. Pre-update saves preserve
already active or damaged enemies.

The Witch's first explicitly authored takeoff segment is allowed through the
cauldron. Later flight choices require full body clearance. A restored old
save targeting a blocked cauldron shortcut returns to a reachable waypoint
and continues. Attack motion, salvo timing, ammunition and defeat handling
remain driven by the existing imported settings and phase implementation.

Bats slide tangentially along a blocked flight trace, select body-clear
nearby authored waypoints when pursuit is obstructed, and separate overlapping
bodies. Detour reservations discourage several bats choosing the same point.
The separation and detour scoring are reconstruction behavior, not claimed
instruction-for-instruction reproductions of the three native steering modes.

Cave Max's bottom, animated lid and crate now forward pellet hits to his
health, as requested by the user. These parts retain physical player collision;
Max's own ammunition still ignores his assembly. This deliberately supersedes
the earlier portable interpretation of the vehicle parts as cover that only
allowed shots at the exposed body. It is not presented as proof that the
native game enabled the same shot-collision flag on every part.

Brutus and knights continue turning toward visible RedCat during a locked
attack motion instead of holding an obsolete facing angle.

## Focused verification

Only changed behavior is tested; no package build or full historical suite is
required for these edits:

```sh
node --test tests/enemy-ambush-flight.test.mjs
node --test --test-name-pattern='Dungeon' tests/actor-collision.test.mjs
node tests/enemy-ambush-scenes.mjs
```

The unit scenarios load actual cave, castle, graveyard and tower data. The
Witch regression runs the actual introductory script and then uses original
BSP collision with a stationary ground-level RedCat for 90 seconds, checking
continued flight and repeated magic-ball releases. A separate saved-game
regression starts at the previously blocked cauldron shortcut.

The browser scenario renders an imported skeleton's held bones frame and a
spider descending on its line, verifies removal of the line on landing, and
fires pellets through the real world collision query at the cave vehicle's
body, crate and lid after its original stand-in has withdrawn. It writes
`artifacts/caves-spider-descent.png` and `artifacts/enemy-ambush-scenes.json`.

This section records the original encounter correction. Subsequent work
implemented spider return/ascent and recovered the native bat and random patrol
waypoint selectors. Current movement limits are recorded in
[enemy waypoint movement](enemy-waypoint-movement.md).

## Contact and ending follow-up

The castle bats were still able to move through RedCat because their movement
traces only considered the world. An overlap then persisted while the contact
damage timer repeated. Flight now clips its swept, asymmetric body against
RedCat's 22-by-56-unit collision box. If RedCat walks into a bat, or an older
save contains an overlap, the bat separates along a clear face of that box;
the same world trace prevents pushing it through a wall. Shooting bats also
receive this body correction, including while their attack animation is held.

Native inspection identified the formerly unnamed pursuit modes: RTTI at
`0x650028` is `CAdamGMS_MoveClockWise`, `0x650038` is
`CAdamGMS_MoveAntiClockWise`, and `0x650048` is `CAdamGMS_MoveCloser`.
Touch-bat code at `0x40af87`/`0x40af9e` supplies 2,000 milliseconds to the
circling constructors; `0x40ae2b` supplies a 1,000-ms no-destination wait.
Earlier versions of this document incorrectly called it a contact wait and
implemented a continuous radius-based orbit. Both were corrected on 2026-10-05:
the three native selectors choose adjacent authored waypoints, independently of
the contact damage cooldown. See [exact selectors, timing and performance](enemy-waypoint-movement.md).
Movement state and destination survive saves and freeze with enemy simulation.

The duplicate Witch had a separate cause. Native `CRcWitchMain`'s defeat
method (`0x64aa80 + 0x28`, implementation `0x40b1c0`) invokes the enemy cleanup
at `0x429900`, which calls `0x4248d0` to retire the actor. The portable generic
corpse timer was instead frozen throughout the ending, showing the defeated
combat Witch alongside the authored cinematic Witch. Her combat body now
retires immediately; the visibility predicate also corrects older saves with
a frozen Witch corpse. Ordinary enemy death animations are unchanged.

The original `door_witch01.DoorBeforeOpenCommand` hides the later
`witch_model03` and `witch_model04` transformation doubles. The ending's
`beam_sequence02` starts `move_witch02` at 0.4 seconds, switches to
`witch_model03` at 41.599998 seconds, then to the stone Witch at 60 seconds.
These original handlers and timelines remain in control. A test that jumps
straight into the boss introduction must first open the arena door to
exercise these authored visibility prerequisites.

Focused commands for this follow-up only:

```sh
node --test tests/bat-contact-witch-ending.test.mjs
node tests/bat-contact-witch-ending-scenes.mjs
```

The browser regression uses the original castle room, both green bats and
actual imported hulls/BSP. It checks stationary and moving RedCat, spaced
contact attacks, recovery from an already overlapping position, and no
sustained overlap. The tower regression runs the original door, introduction
and ending events and verifies that only the current cinematic double is
visible. Results and inspection images are written to
`artifacts/bat-contact-witch-ending-scenes.json`,
`artifacts/castle-bat-contact-escape.png` and
`artifacts/witch-ending-single-actor.png`. No packages are generated.

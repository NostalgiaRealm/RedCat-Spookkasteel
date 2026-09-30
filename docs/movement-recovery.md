# Recovery from stuck movement

This is an intentional convenience added to the remake. RedCat and independently
moving enemies can recover from geometry wedges without restarting or using
no-clip. Normal movement, jumping and authored patrol destinations are retained.

## Behavior

`src/movement-recovery.js` is shared by the player and enemy controllers. It:

- Detects sustained blocked movement or a shallow body overlap. Ordinary player
  movement against a wall or closed door does not trigger a nudge if another
  direction is clear.
- Tries small nearby offsets before recently visited safe positions. Ground
  destinations need full body clearance, an additional three units of space
  around the sides, and support directly beneath the feet. Flying enemies need
  clear space without ground support.
- Checks the route as well as the destination. A shallow overlap may be exited
  sideways before settling onto lower ground, as needed beside the castle well.
  A closed gate, intervening wall or unsafe drop prevents that candidate.
- Handles a suspended body between sloped surfaces even when the stationary
  hull is not overlapping. It tries a combined outward/downward direction from
  the blocking faces, then diagonal alternatives, and verifies both the escape
  segment and the subsequent fall onto support.
- Revalidates recorded positions against current obstacles and hazardous water
  or death volumes. Enemy destinations also avoid other live enemies and RedCat.
- Clears stuck velocity and obsolete pursuit calculations after recovery while
  preserving the enemy's authored patrol destination.

The history holds at most twelve verified positions. Nearby candidates extend
up to 32 horizontal world units, or 48 for a suspended ground actor. Ordinary
grounded recovery settles at most 18 units below its candidate; a suspended
actor can settle onto verified support up to 64 units below its original
position. History fallbacks are limited to 192 units.
One candidate is checked per frame to spread collision work over time. A safe
candidate must exist: recovery does not teleport through a sealed obstacle.

Save restoration, teleports, respawns and no-clip transitions reset the history.
Pausing does not advance recovery. Recovery displacement does not generate
footsteps or a swept damage trace along the nudge.

Scripted motion remains controlled by its script: doors, lifts, rolling boulders,
attached props, spider web descents, boss entrances and turret anchors are not
relocated by this system. Ordinary ground and flying enemy locomotion uses it.

## Focused verification

Run only the relevant tests from the project root:

```sh
node --test tests/movement-recovery.test.mjs
node --test tests/player-movement.test.mjs tests/graveyard-frog-patrol.test.mjs
node tests/movement-recovery-scenes.mjs
node tests/well-recovery-scene.mjs
```

The browser scene test uses Playwright and `/usr/bin/google-chrome` (override
with `CHROME_PATH`) with the source server; it does not create a release build.
It retains logs, profiles
and screenshots in `current_work/`. Its Chromium temporary directory is relative
(`TMPDIR=current_work`) to avoid the Unix socket path length limit at this
project's long absolute path.

Initial verification on 2026-09-27:

- All 16 recovery tests passed, including shallow overlap, corners, lower ledges,
  changed obstacles, closed gates, thin walls, unsafe water, unsupported edges,
  bounded trace work, history resets, and ground/flying enemy recovery.
- All 12 existing player movement and graveyard frog patrol tests passed.
- In the actual Level 2 map, a deliberately seeded shallow overlap beside
  `put01` recovered in 35 steps of 0.025 seconds, moving 29.41 units to a clear
  supported position with health unchanged. The maximum was 11 collision traces
  in a complete player update. This exercises real well geometry; it does not
  reproduce the exact input sequence of the reported jump.
- In the actual graveyard map, the trapped frog recovered in nine steps of
  0.025 seconds with its patrol state preserved. Neither scene reported a
  JavaScript error.

Evidence is retained in:

- `current_work/movement-recovery-tests-2026-09-27/ledge-run.log`
- `current_work/movement-recovery-controllers-2026-09-27.log`
- `current_work/movement-recovery-scenes-2026-09-27T19-03-58-969Z/report.json`
- `current_work/movement-recovery-audit-2026-09-27/audit.md`

Earlier failed investigations remain in `current_work/` for comparison. No
release packages were generated for this change.

## Follow-up: actual suspended well state

The initial shallow-overlap test did not reproduce the player's reported trap.
The running desktop game's autosave captured RedCat at
`[-254.20535006077, 19.20870499742, 164.09120801031]` with a 91-second-old jump,
zero vertical velocity, retained horizontal launch velocity, and no ground
contact. The stationary hull was clear, but every horizontal direction and the
downward sweep immediately hit one of two sloped faces. The earlier search
could not reach support 51 units below or follow the required diagonal exit.

The follow-up regression uses that exact position and motion state in the real
castle map. With no input, each walking direction, or jump held, recovery now
takes 36 steps of 0.025 seconds (0.9 seconds). RedCat reaches supported courtyard
ground, clears the stale launch velocity and can immediately walk another
100.8 units away. The maximum was 16 traces in a complete player update, and no
JavaScript errors occurred. The live desktop game and its saves were not changed
by the test; a copy of its autosave was preserved for diagnosis.

All 19 focused recovery tests passed after this correction, including a
synthetic two-slope wedge and protections for gates, hazards and excessive drops.
Only the recovery suite and this exact-well scene were run for the follow-up.

Additional evidence:

- `current_work/well-live-2026-09-27/` (copied autosave and failed/passing probes)
- `current_work/well-recovery-review-2026-09-27/targeted-test-run.log`
- `current_work/well-recovery-2026-09-27T19-21-43-413Z/report.json`

An already running desktop session keeps its loaded JavaScript. Restart the
source game and continue the saved adventure to use the corrected recovery.

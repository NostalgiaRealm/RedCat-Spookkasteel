# Caves Earth branch — normal-input validation, 18 October 2026

## Scope and provenance

This isolated branch starts from the **unchanged native Caves chapter-entry save** in `../caves-full-input-2026-10-18/runtime-attempt6/chapter-entry-save.json`; copied locally as `entry-fixture-unchanged.json`. Entry: Normal, HP10/lives3, potions0, mirror3, skill11. It is a declared chapter fixture, not evidence of an uninterrupted Forest-to-Caves campaign.

Traversal uses keyboard inputs and the normal camera-look input adapter. The collision planner only reads the live world. No live position, health, inventory, skill, puzzle, enemy, or model-state assignments, script callbacks, cheats, or no-clip. Normal deaths/respawns retain earned puzzle progress. No build was made. The isolated browser profile and all logs remain in this folder.

## Verified result

- Earth entrance hub doors and laboratory doors work with E; rolling-stone ramp is traversable in both directions; sluice gates open on approach.
- Earth checkpoint reached and used by normal respawns.
- Secret touch switch, secret door, life, and both secret potions reached.
- Earth crate destroyed by normal shooting; its rock wall opens. Close-range explosion approach was unsafe (see below).
- All twelve moving pillars traversed, including all three branches and returns to the central platform. All three rotation buttons touched; `draai_opening02` count3 opens the altar passage.
- All eight named Earth potions and the two secret potions collected: **10 total**.
- All five platform-room spiders and all three altar skeletons killed normally.
- All three altar buttons touched, in order 03,01,02. Corresponding trigger counts1,2,3; `beam_rots_altaar` enabled; **`unlock_max` count1** after the native camera sequence.
- Returned from altar through the opened rotating doorway to the checkpoint without further damage. Completed save: `earth-complete-earned-save.json` (HP2/lives2 at that moment).
- No runtime/page errors or confirmed source blocker found in this branch.

## Route (coordinates are X,Z; ordinary walking unless a hop is stated)

Entry → [0,1920] → [0,1820] → [-400,850]. Aim at Earth hub door[-446,834], E, wait about1s, walk[-550,800]. Follow the floor route to[-1264,200], aim lab door[-1264,114], E, wait0.75s, walk[-1264,40].

The rolling-stone ramp inbound was solved by repeatedly planning a short16-unit-grid segment toward[-1264,-1100], following at most4 grid steps or the next turn, then replanning against current moving stones. Full-hull planner settings: step16, stepHeight18, maxDrop16, maxNodes7000. If no route, release controls and wait10frames. The successful pass took about35 segments and no health. Repeated straight double jumps were pushed back and were abandoned; this is a driver route failure, not a source blocker.

From[-1264,-1100], walk[-1264,-1264],[-1264,-1420],[-1264,-1600], then floor route to[-1250,-1884]. Checkpoint becomes[-1246,68,-1888]. Potion at[-1264,-1415], then[-1162,-1918],[-1254,-2010],[-1347,-1921] gives4.

Secret: route[-1288,-2050], walk toward[-1288,-2096] (actual contact atZ-2083.95) to touch `secret_button01`. Route[-1438,-2199] for life, then[-1483,-2257],[-1395,-2257] for two potions; return[-1438,-2080]. Route[-1428,-1548] for potion7.

Shoot Earth crate at[-1584,64,-1537]; opened wall then allows route[-1584,-1450]→[-1664,-1280]. **Our firing spot[-1430,64,-1555] was too close:** crate1→0 and wall opened, then player died during the explosion/overview interval. Exact cause of that first death was not instrumented; do not represent it as a proven source bug. Spider11 also died. After normal respawn, the open wall and potions remained.

### Moving-pillar technique

Normal jump is sufficient. Aim before launch. Hold **Shift+W+Space** for the first2 frames, continue Shift+W to frame30, then **Shift+S** until grounded. This travels roughly80–95 units; landing on rising pillars can extend it. For the long corner gaps use W without Shift (roughly125–135 units). No double jump was required here.

For each neighboring pair wait until the source pillar top is at least40 and the next pillar top is at most40. To land on the static64-height corner/center, wait until the current pillar top is at least62. Exact read-only top calculation and input helper are in `helpers-current.js`. Always wait out the5-second fixed overview after touching a rotation button before using the camera-look hop helper; fixed views need Arrow turning.

Pillar centers:

| Branch | Outer → middle → inner |
|---|---|
| Entry/SE | 04[-1664,-1184] →05[-1688,-1104] →06[-1768,-1080] |
| NE/button02 | 07[-1756,-842] →08[-1828,-878] →09[-1860,-951] |
| SW/button01 | 10[-2106,-936] →11[-2066,-1010] →12[-1989,-1032] |
| NW/button03 | 01[-2016,-1272] →02[-1941,-1242] →03[-1912,-1168] |

Central static platform is around[-1888,-1064], Y64.

- Entry: takeoff[-1664,-1280] →04→05→06→center. Return center takeoff[-1848,-1068]→06→05→04→[-1664,-1280].
- NE: center takeoff[-1860,-1034]→09→08→07→[-1664,-800]. Potion[-1643,-720], touch button02[-1488,-672] (actualX-1511.05). Return takeoff[-1668,-810]→07→08→09→center.
- SW: center takeoff[-1910,-1032]→12→11→10, then **run-hop**[-2188,-840]. Potion[-2125,-726], button01[-2288,-672] (actualX-2264.95). Return takeoff[-2168,-864]→10→11→12→center.
- NW: center takeoff[-1912,-1084]→03→02→01, then **run-hop**[-2150,-1360]. Potion[-2131,-1388], button03[-2288,-1457] (actualX-2264.95). Return[-2150,-1360] **run-hop**01→02→03→[-1912,-1084]→center.

Clear room spiders before waiting through the button overviews. In the initial exploration, waiting on the NE corner allowed several distant spider shots; later center aiming at a spider outside the480-unit auto-aim range failed and caused a second normal death. After respawn, combat from the broad checkpoint floor[-1246,-1800]/[-1300,-1750], with normal Ctrl and side-to-side movement, cleared spiders10,07,08,09. Health10→6; nearby pickups[-1141,-2024],[-1737,-2042],[-1739,-1559] restored9; SW-corner pickup restored10. These are +1 health pickups, not heart containers.

### Altar and return

After all rotations, return via06→05→04→SE corner and walk[-1600,-1450]. Floor route to[-1650,-1800], through the now-open doorway to[-2130,-2250]. A16-unit planner grid reliably fits this passage.

Altar skeletons are activated on entry. Safe floor routes to firing positions: east[-1950,-2370] for skelet02; north[-2020,-2660] for skelet01; west[-2310,-2472] for skelet03. Normal Ctrl and lateral movement killed them; total HP10→2. Some diagonal firing positions are occluded by room geometry and produce no auto-aim lock; move to the specified sectors.

- Route[-1750,-2472], walk[-1712,-2472] touches altar03. Wait8s.
- Route[-2133,-2850], walk[-2133,-2899] touches altar01. Wait8s.
- Route[-2510,-2472], walk[-2556,-2472] touches altar02. Wait10s. Beam active; unlock count1.

Return floor route[-2130,-2250]→[-1650,-1800]→[-1246,-1888]. This succeeded without touching the beam. Downhill ramp return follows[-1264,-1600],[-1264,-1420],[-1264,-1264],[-1264,-1100],[-1264,-700],[-1264,-300],[-1264,40], also without damage. Opening the laboratory door at only2HP allowed spider03's projectile to kill the player while retreating; event log confirms source MovingEnemy3, damage2. This third death respawned at the Earth checkpoint, HP10/lives1, all earned Earth state retained. Final hub-return status is appended below.

## Evidence files

`commands.jsonl` records the actual driver commands. `evidence-so-far.json` captures all pillar routes through the third switch. `earth-altar-return-evidence.json` captures altar and checkpoint return, including normal events. `earth-three-rotations-earned-save.json` and `earth-complete-earned-save.json` were written using the visible Save menu. `helpers-current.js` is the retained normal-input/collision-read helper snapshot.

## Final hub return

After the third normal respawn, repeated the verified downhill route. Normal shooting killed the entrance spider03 (10→0); health10→4 across the fight and an already-fired projectile. Walked the floor route to[-550,800], E at the Earth hub doors, then crossed to[-400,850]. One hub ghost shot cost2HP. Final ordinary Save: **position[-401.4462,-15.95,849.3632], HP2/lives1,10potions, mirror3,skill11,score775,kills9,secrets1**. All six Earth switches remain on and `unlock_max` remains1. `earth-hub-return-earned-save.json` is this exact earned state. `earth-final-evidence.json` retains372 movement/hop records and2454 events; `earth-hub-return.png` shows the saved paused session. Three total normal deaths, one secret life gained, no game-over, no reload or live state edits after the initial declared import. Browser/server stopped after saving.

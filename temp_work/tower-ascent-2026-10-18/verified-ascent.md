# Tower physical ascent — verified 2026-10-18

Source runtime only, no build. A fresh isolated browser profile imported the exact retained `temp_work/caves-input-encounter-2026-10-15/runtime/tower-entry-carried-save.json` unchanged. This is a declared chapter fixture: the earlier encounter run began from a seeded late-Caves fixture, then earned Max's defeat, mirror4 and the ordinary Tower transition. It is not evidence of an uninterrupted campaign. This ascent begins at the authored Tower start[-227,-3919.95,-454] with10health,3lives,skill15,mirror4,score360.

After that import, no position, health, inventory, skill, enemy, or puzzle state was assigned. Controls used ordinary key events, camera yaw via world.look, and frame advancement. Full-hull collision planning was read-only. Native cutscenes and the portal repositioned the player through their own scripts. No no-clip, direct trigger calls, direct attacks, or puzzle callbacks were used.

## Verified route

Coordinates below are [x,z] walking targets, never teleports. `__walkHeight` follows a read-only A* route using actual collision models; options for the stairs were step16,stepHeight18,maxDrop24,tolerance4,attack=false, with targetY as listed. All141 actual waypoint results are retained in ascent-evidence.json.

1. WALK[-180,-342] triggers the introduction near[-191.61,-3919.95,-369.66]. Ordinary E pulses (down2frames,release10frames) skip its dialogue. Native intro ends at[-235,-3919.95,-280].
2. Follow floor route to[200,350] (step24,tolerance5,attack=false). Ends[194.56,-3919.95,341.22]. Track/fire guard01, then bat01 with normal charged shots. This stationary combat cost6HP; both died and player remained4HP/3lives. It is a completed route, not a no-damage combat strategy. Charged-shot helper holds ControlLeft120frames, releases30frames, repeats while tracking the enemy. Player hurt reactions interrupt charging, so individual hits can deal less than4.
3. Follow staircase to[-333,523],targetY=-3808. Collect ItemHealth3, health4→5. Continue[-553,-111],targetY=-3691, collect ItemHealth2, health5→6.
4. Continue[2,-516],targetY=-3576, collect ItemHealth1, health6→7. Continue[547,-111],targetY=-3472, collect ItemHealth4, health7→8. These four walking sections took no damage while passing the remaining guards/bats.
5. Continue[367,600],targetY=-3354. Actual contact at[371.08,-3353.95,597.17] triggers telepoort01 once and starts its normal cutscene. E pulses finish it. Native arrival[-1,2484.05,1400],health8/lives3 unchanged.
6. WALK[0,1008] descends upper hall stairs to2368.09. WALK[0,931] touches the checkpoint trigger (player[0,2370.05,931.83]); checkpoint becomes[0,2376,944],orientation12.
7. WALK[80,800] around the checkpoint pillar, then[0,590]. Both Witch doors opened normally. Stop at[0.8325655,2368.05,593.0728833]. The Witch remains disabled with8HP; mirror4 and skill15 remain. Final encounter, mirror placement sequence and outro were not repeated.

The initial route query failed only because it requested the wrong portal floor height(-3312 rather than actual-3353.95). A query to the savepoint's center also hit its decorative pillar; walking into the trigger atz931 and around[80,800] works. These are planning/driver issues, not source blockers. No new game defect was found during Tower ascent.

## Evidence and final state

- `entry-fixture-unchanged.json`: exact imported Tower entry save.
- `commands.jsonl`: ordinary input and observation commands.
- `ascent-evidence.json`: complete141-waypoint route, final status, checkpoint, portal count and unstarted Witch state.
- `upper-arena-save.json` and `upper-arena-storage.json`: normal pause-menu save at the verified arena approach.
- `input-helpers.js`: input helpers and read-only route planner used.
- `tower-upper-portal-arrival.png`, `upper-witch-arena-arrived.png`: arrival screenshots.
- Final: lvl04a,health8/10,lives3,score480,mirror4,skill15,potions0,kills3 (two kills during this ascent),noClipfalse,script errors[],VM errornull. No death/reload during this ascent.

The ascent is a static spiral staircase followed by the authored teleport and upper hall stairs. No lift or button puzzle occurs on this main route. The two optional upper side portals to bonus rooms were not traversed in this ascent scope.

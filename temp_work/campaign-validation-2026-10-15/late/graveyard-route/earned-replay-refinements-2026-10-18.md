# Earned Graveyard replay refinements

Parent earned Forest and Castle normally, entering Graveyard with skill 3,
mirror 2, health 6 and one life. This agent received exclusive control of API
4511. The chapter fixture on 4551 was stopped and not imported. Commands and
responses for this replay are in `../../resume-responses-2026-10-18.jsonl` and
`../../playthrough-1792088801065/live-commands.jsonl`.

The low-health mausoleum attempts included real deaths, F9 loads and an earlier
save-menu recovery. No position, inventory, health, enemy-health or puzzle writes
were used. A forwarding event observer recorded projectile impacts and damage;
it preserved the original event callback. All later inputs used normal keys and
camera look. These are input test refinements, not source fixes:

- After F9, wait for BOTH `mode === 'playing'` and positive health, with wall-clock
  polling. Restored health appears before loading finishes. Manual RAF makes the
  default RAF-based wait unsuitable.
- 100 coins do not grant a life here. A coin detour was an incorrect assumption;
  source and the actual 101-coin result show they are score pickups only.
- Clear the mausoleum zombies from [1220,-2340]. Both were defeated with held
  Ctrl and strafing while keeping the remaining two health points.
- For the bats behind the north wall, stage [1310,-2120]. Held Ctrl with A/D
  alternating every 30 frames keeps the actor in the clear doorway. The final
  two bats died normally with health unchanged at 2. Long strafes leave the
  doorway and obstruct shots. Recorded projectile impacts hit solid wall/floor
  outside the opening, and hit the bats normally from inside it. No projectile
  collision bug was established.
- Strafing near the painting wall can touch controls. Switch counts do not tell
  the completed picture when a new press occurs before an earlier motion stops.
  After every deliberate press, release input and let the full motion finish
  (about 2 seconds; this replay used 180 frames), then inspect the visible pose
  or read-only motion state. Do not infer completion from a transient VM flag.
- Correct painting poses enable mspina, mspinb and mspinc. Earlier deaths during
  stationary button waits were attributed to bats without recording the damage
  source; the enabled ambush spiders were another possible source. All three
  spiders were subsequently killed with normal shots before further waits.
- From [1450,-2200], stationary held Ctrl killed the final ceiling spider with
  health still 2. The final settled painting states were all time 0.01 and all
  five solution globals 1. The authored cutscene opened the mausoleum door.
- The route through [1810,-2450], [1810,-2780], [2212,-3066], [2216,-3417]
  reached potion 16 and restored health normally to 10.

## Earned completion and evidence

This replay completed Graveyard and used the actual debriefing's Enter action to
start Caves. It continues the parent's earned Forest and Castle state. This is
stronger evidence than the separate chapter fixture described in
`verified-route-2026-10-18.md`, but does not establish the rest of the campaign.

At the actual Graveyard debrief: health 4/10, lives 1, skill 11, mirror 3, score
5735, potions 30, coins 71, total kills 48 and total secrets 3. No-clip remained
false, script errors were empty and VM error was null. The rendered overview
showed 30/40 magic bottles, 4/64 money bags, 35/59 enemies and 0/4 secrets, with
4700 prebonus score, 1035 level bonus and 5735 final score. Chapter counters and
campaign counters differ intentionally.

The exact completed save and the next-level entry save are retained under
`../../playthrough-1792088801065/`:

- `earned-graveyard-completed-save-2026-10-18.json`: actual saved localStorage
  value at the completed chapter, exported read-only.
- `earned-graveyard-state-2026-10-18.json`: compact completion state.
- `earned-graveyard-debriefing-settled-2026-10-18.png`: visually checked rendered
  overview. The earlier screenshot without `settled` caught the transition fade
  and is retained too.
- `earned-caves-entry-save-2026-10-18.json`: actual save after Enter into Caves and
  ordinary Escape pause. Entry is lvl03a at [-712,-15.95,3148], health 4/10, one
  life, skill 11, mirror 3, score 5735, coins 71, total kills 48, total secrets 3,
  and reset chapter potions 0. No-clip false, no script or VM error.

API 4511 control was explicitly handed to the Caves agent at that paused earned
entry. No fixture was imported into this continuous campaign. No game source
change or build was needed for this chapter.

## Route refinements after the mausoleum

All coordinates below are ordinary walking or jumping targets [x,z], never
assignments. Use `input-route-helpers-final.js` with navigation `attack:false`:
continuous firing can compete with navigation camera targeting. The retained
command and response logs contain the exact inputs and outcomes, including
failed attempts. This guide omits optional collection when the required thirty
bottles were already assured.

1. After the potion 16 and full-health pickup, clear the plank chain in order:
   zombie5, ghost1, ghost2, zombie6. Collect [3292,-3860] for potion 17 and
   [3305,-3665] for the actual extra life (lives 1→2). Portal [793,-3809] starts
   its authored transfer after a short wait; arrival is [-62,527,520]. Touch the
   chapel save brush [244,111].
2. The maze's essential first trigger was missing from the earlier concise
   guide: from the chapel route through [-540,0], [-843,16], then walk to
   [-928,-850] before returning to [-928,-692]. This touches heg1_trigger near
   [-928,536,-816] and opens the next route. Skipping it produced a wrong route
   attempt and an actual death during combat. The ordinary checkpoint respawn
   restored health 10 and consumed the earned spare life, leaving one life and
   seventeen potions. Puzzle progress and opened planks persisted.
3. Stage [-1240,-576] and shoot ghost1 before closing. Then visit
   [-1296,-576], [-1104,-840], [-1296,-576], [-1450,-576], [-1500,-960], allowing
   120 frames after each hedge trigger and clearing the encountered ghosts with
   normal shots. Collect [-1263,-696] (18) and [-892,-968] (19).
4. For timed heg6, walk [-1040,-1250], [-1200,-1250], [-1200,-1290], wait until
   its actual translation opens the passage, then [-1040,-1290], [-1040,-1450],
   [-1268,-1405] (20). Approach the exit switch at [-1432,-1416] with A* step 16
   and press by walking to [-1404,-1416]. The default 24-unit route grid returned
   no path for this valid narrow approach. Shoot heg_brcrate from [-1000,-1450],
   follow [-1300,-1560] to [-2043,-1997] (21), then approach [-2259,-1729] to
   trigger the actual return portal. That last optional bottle was not collected.
5. East chapel exit [540,0]→[843,16], rotary1 [1595,-660]→[1624,-660], then
   [1760,-1064] (22), gate [2010,-1064]→[2240,-1064], frog and [2830,-884] (23).
   Stage [2600,-850]. Board moving model39 at z=-722 from the south bank.
   Transfer only when actual model centers align: 39→40 difference <12 while
   converging, move to model40 z=-686 then -606; 40→41 difference <25, move to
   model41 z=-570 then -490, then exit to z=-430. Root waits were 68 and 84
   frames, but these are observed timings, not a substitute for alignment.
   Collect [2356,-386] (24), [2379,-10] (25), [3191,-709] (26). This horizontal
   platform traversal incurred no falls or health loss.
6. Rotary2 [3430,-896]→[3456,-896], portal [3923,-757], actual return arrival
   [1904,528,-1072]. Follow [1536,-1070], [1520,-1602], [2379,-1925] and clear
   the bat. Ferry1 switch [2524,-1968]→[2524,-1997], wait open and stopped,
   board model26 at z=-1908, wait closed and stopped, exit [3400,-1908]. The
   carried bottle raises the count to 27. Ferry2 switch [3410,-1976]→[3444,-1976],
   wait open and stopped, board [3408,-1762], ride, exit [3416,-1230] (28).
   Bats at these exits cost health 10→8→6. Stage [3293,-1235]; the route south
   through [3300,-1326] crosses a gap.
7. Wait for platform model30 top height 518..532, jump [3200,-1300], settle and
   verify actual contact. Align [3152,-1350]; wait |top30-top31|<8, jump
   [3060,-1350]. Align [3024,-1350]; wait |top31-top32|<8, jump [2924,-1340].
   When model32 top reaches at least 520, jump west [2780,-1340]. Landing and
   bat combat cost health 6→2. No state was corrected to compensate.
8. The optional platform secret was skipped in this earned run (already
   separately fixture-tested). Rotary3 [2734,-1400]→[2734,-1440], ferry6 switch
   [2670,-1356]→[2640,-1356], wait open and stopped, stage [2665,-1420], board
   [2540,-1420], ride until stopped at the west side. Safe return through
   [1536,-1070], explicitly [1320,-1070], [1120,-1070] avoids the corner where
   the old fixture fell. Stair A* step16,targetY308 reaches [64,-1622] (29),
   [64,-1359] (30), then fairy [-40,-950]. The actual scene grants skill3→11.
9. SuperSkippie's second normal Space press at frame20 of the 72-frame cycle
   (about333ms) clears the authored 72-unit steps. The earlier 200ms attempt
   did not. From [20,-1100], double jump [250,-1100], then [300,-960], kill
   jspider2 normally, walk [570,-940], double jump [720,-940]. Full health
   [906,-1070] restores 2→10. Gate switch [964,-1077]→[993,-1077]; wait for
   the lift to stop. Return [928,-720], [843,16], [540,0], lift [0,-216]. Its
   actual lower checkpoint is [0,220,-480].
10. Lower corridor: use floor routes to [-560,-210] and [-1100,-240], firing at
    the two ceiling spiders. Skip the optional bottle [-1466,-237]. Touch the
    main checkpoint near [-811,587]. Enemies damaged the player 10→6; an
    unnecessary prolonged fight reduced this to2. Ordinary health pickups at
    [-807,1071], [-1244,1252], [-1346,925], [-1695,1089], with an intervening
    enemy hit, brought health back to4. Save while alive. A straight walking
    attempt down the next corridor died from two incoming hits; ordinary F9
    restored that living save. SuperSkippie jumps through the same corridor
    then reached [-1708,2150] with health4 unchanged.
11. The push trigger extends through z2708. Walking only to z2150 or2500 leaves
    the actor inside it. Continue to [-1708,2800]; the authored boss intro
    begins near z2742 and enables the10HP boss. From [-1708,2830], held Ctrl
    with A/D alternating every120frames defeated Brutus/bonecollector normally
    in about850frames (10→8→6→4→2→0); player health stayed4. Allow the actual
    death scene to end, then walk [-1692,3740]. Mirror2→3, authored exit and
    debriefing all ran normally. Enter then started Caves with the carried state
    above.

## Limits and failed attempts retained

This was a completing, non-cheat run, not a deathless or100% collection run.
Ordinary deaths, save loading, earlier-save menu recovery and one checkpoint
respawn are part of its evidence. The100-coin detour did not award a life and
was lost after later recovery. Several health pickups on the platform approach
were consumed at full health; an optimized player route could preserve them.
The platform secret, remaining bottles, most money bags, remaining enemies and
the other optional secrets are outside this earned completion claim. The
separate fixture report must remain labelled as such.

No proven bat projectile bug was found. Solid walls and doorway alignment
explained the observed blocked shots; normal unobstructed shots damaged the
bats. Earlier unobserved damage cannot establish which enemy caused a death.
No new source fix was justified by these observations.

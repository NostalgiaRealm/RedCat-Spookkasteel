# Graveyard input route, completed 18 October 2026

## Scope and result

This was a resumed **isolated Graveyard chapter fixture**, not a new five-level
campaign. The original fixture setup unlocked Graveyard and supplied the expected
incoming skill mask 3. The retained save resumed at 15 potions. All subsequent
travel, shots, jumps, touch switches, pickups and combat used ordinary keyboard
and mouse entry points. Collision queries and object reads helped choose routes.
There were no traversal writes to position, health, inventory, enemy health,
puzzle state or skills, and no no-clip. Scripted teleports and cutscenes moved
RedCat normally. Ordinary saves, loads, deaths and recovery-menu loads were used.

The run reached the actual Graveyard debriefing, then Enter started Caves:

- Graveyard: 32/40 potions, 6/64 money pickups, 28/59 enemies, 1/4 secrets.
- Health 4/10, lives 1, coins 60, skill 11, mirror 1. Score 2155 + 1005 = 3160.
- Caves entry: `lvl03a`, position `[-712,-15.95,3148]`, health 4, lives 1,
  skill 11, mirror 1, score 3160 and local potions reset to 0.
- No-clip stayed false. Final browser error list was empty and script VM error
  was null. No game source was changed and no package/build was produced.

The first fairy visit at 29 potions withheld SuperSkippie. After the secret
platform corridor raised the count to 31, returning to the same fairy earned
skill 8 through the real dialogue/callback (mask 3 became 11). Brutus, named
`bonecollector` in the data, was defeated with held Ctrl and alternating strafe;
his health went 10 to 0, while player health remained 4 throughout that fight.
The mirror pickup and exit sequence produced the debriefing above.

This does not establish 40/40 bottles, every secret/enemy, or a continuous
Forest-to-ending run. Earlier script fixtures remain separately scoped in
`../verification-scope.md`.

## Evidence and helpers

- `commands.jsonl`: original 15 October commands and all later input requests.
- `resume-results.jsonl`: 18 October requests and results, including failed
  navigation attempts and recovery. Some diagnostic object dumps are large.
- `resume-index.json`: compact status index with the original result line numbers.
- `graveyard-debriefing-2026-10-18.png`: rendered completion screen.
- `graveyard-completed-save-2026-10-18.json`: read-only export of actual completed
  local save, before continuing to Caves.
- `caves-entry-save-2026-10-18.json`: actual next-level save, exported after Escape.
- `profile/`: retained isolated browser profile, origin `http://127.0.0.1:4550`.
- `profile-before-resume-2026-10-18/`: unchanged backup from before this resume.
- `input-route-helpers-final.js`: final keyboard/mouse and read-only planner
  helpers. Requires the manual RAF driver (`__stepFrame`). Syntax checked.

`__moveTo([x,z],{attack:false})` follows ordinary input. Never use simultaneous
attack for long navigation: attack target lock prevents intended camera turns.
Use `__fightStill` for stationary ceiling spiders and `__fightVisible` for bats
or Brutus. These helpers release keys at the end. The latter strafes only where
a read-only floor/trigger probe finds a safe floor.

`__walkHeight` is a read-only A* planner followed by input waypoints. It includes
current dynamic solids and rejects damaging triggers. It does **not** predict
platform motion or jumping. It can cut a narrow corner; use the explicit points
below around the rotary bridge. Do not flatten stair heights. A failed path
does not prove an unreachable game location.

`__moveTo` stops on a cutscene. Wait with input released until that scene or its
named teleport controller ends, then plan again from the new position. Never
continue an old destination after a scripted teleport.

For reliable SuperSkippie climbs, `__moveToSuper(...,{jump:true})` presses Space
at frames 0 and 20 of a 72-frame cycle (second tap about 333 ms after the first).
At 200 ms the measured peak was only about 66.7 units and failed a 72-unit crate;
the later second tap successfully climbed all three authored 72-unit steps.
This is input timing, not a gameplay change.

Use F5 only while alive, and confirm the stored state. Pausing saves too. Loading
a dead save normally restarts the level; the earlier-save menu can recover its
2/5/10-minute snapshots. Several navigation deaths occurred, with route sections
replayed through that menu. This is not a deathless playthrough.

## Route from the retained early save

Coordinates are `[x,z]`; quoted Y values are floor heights. Object Origin values
can differ substantially from their actual brush. Approach the brush positions
listed here. The initial courtyard/paired-grave-switch route is in original
`commands.jsonl` lines 6–35; those old attack-while-walking attempts are historical
evidence, not a recommended input recipe. The retained resume began near
`[961,-2462]`, with 15 potions and skill 3.

1. Reach the painting chamber through the mausoleum ramps. Kill the four bats
   with normal Ctrl/strafe. Touch the five painting controls respectively
   **3,1,0,3,2 times**. The logged switch counts include the scripted reset and
   therefore end as **6,2,0,6,4**. All five solution globals become 1;
   `mausodeur_mc` disappears after the authored scene. The ceiling spiders then
   enable. Pass through the opened passage and collect the full health near
   `[2216,-3417]`.
2. In the plank corridor, defeat `zombie5` near `[2996,-4124]`, then `ghost1`,
   `ghost2`, and `zombie6` as each previous death opens the next planks. Collect
   the bottle `[3292,-3860]` and extra life `[3305,-3665]`.
3. Touch portal 1 at `[793,-3809]`. Let its full scene finish; it places RedCat
   in the chapel near `[-62,520]`. The chapel save brush is `[244,111]`, not
   the save entity's editor origin. Touch it and the chapel intro near `[-326,277]`.

## Hedge maze

1. Approach the west chapel door at `[-540,0]`, then move through to `[-843,16]`.
2. Enter the maze, collecting `[-1263,-696]` and `[-892,-968]` along the route.
   The verified hedge sequence was `[-928,-692]`, `[-1296,-576]`,
   `[-1104,-840]`, back to `[-1296,-576]`, then `[-1450,-576]`, `[-1500,-960]`.
   This reaches the successive triggers and opens the next route.
3. For timed `heg6_mc`, use the side alcove `[-1040,-1250]`, `[-1200,-1250]`,
   `[-1200,-1290]`. Wait for its translation Z to be above -15, then move
   `[-1040,-1290]`, `[-1040,-1450]`. Kill the nearby frogs normally.
4. Collect `[-1268,-1405]`. Approach the final button at `[-1432,-1416]`, then
   push to `[-1404,-1416]` with tolerance 2. Its scene opens `mazedeur1_dm`.
5. Shoot the destructible hedge/crate `heg_brcrate` near `[-1300,-1560]` from
   `[-1000,-1450]`; this removes `heg8_mc`. The exit bottle `[-2043,-1997]`
   was collected. Approaching `[-2259,-1729]` triggered portal 3 before that
   bottle, so that bottle was **not** claimed. Portal 3 returns to the chapel.

## Eastern rotary route and Frogger

1. East chapel door: `[540,0]` to `[843,16]`. Collect health `[933,-647]`.
   Rotary button 1: approach `[1595,-660]`, push `[1624,-660]`; `blad2_mc`
   closes into a usable path. Bottle `[1760,-1064]` brought this run to 21.
2. Pass the proximity gate `[2010,-1064]` to `[2240,-1064]`. The surrounding
   `killwater` is an authored damage trigger (100/s), even where BSP contents
   do not report water. Kill the southern frog and collect `[2830,-884]`.
3. Bank alignment `[2600,-850]`. The three horizontal raft models are 39,40,41.
   `__moveOnRaft(model,z)` aims and walks toward the current raft center X;
   it never moves the actor directly.
   - Align with raft 39 at Z -850, then board it near Z -722.
   - Wait until the center-X separation of raft 40 and 39 is <12 and decreasing.
     Move to raft 40 at Z -686, then advance on it to Z -606.
   - Wait until center-X separation of raft 41 and 40 is <25.
     Move to raft 41 at Z -570, then Z -490; exit to `[currentX,-430]`.
   - If a wait times out, do not transfer. A collision map sampled before the
     move cannot substitute for watching these moving platforms.
4. Collect `[2356,-386]`, `[2379,-10]`, `[3191,-709]` (25 potions in this run).
   Rotary button 2: approach `[3430,-896]`, push `[3456,-896]`. The gates open.
   Touch portal 4 `[3923,-757]`; stop input and wait roughly 1167 frames while
   its motion/scene runs. It returns to `[1904,-1072]`.

## Temporary ferries and vertical platforms

1. Return through `[1536,-1070]`, `[1520,-1602]`, `[2379,-1925]`; two small
   health pickups are on this route. Defeat the nearby bat.
2. Ferry 1 button `[2524,-1997]`: approach from `[2524,-1968]`, press with
   tolerance 2. Wait until `platform1_mc.open && !moving`. Its model is 26,
   with original center `[3242,-1908]`; open translation X is -604.
   Board using `__moveOnRaft(26,-1908,160)`. Wait until `!open && !moving`;
   the ferry carries RedCat east. Its attached bottle is collected in transit.
   Exit to `[3400,-1908]`, defeat the bat.
3. Ferry 2: approach `[3410,-1976]`, press `[3444,-1976]`; wait open/still.
   Board `[3408,-1762]`, wait closed/still (it moves north 396 units), and exit
   `[3416,-1230]`. Collect that bottle (27), defeat the bat. Safe staging point
   on the bank: `[3293,-1235]`. **Do not walk south to `[3300,-1326]`: it is a gap.**
4. Vertical platform 3 is model30, top `388 + translationY`. Wait for its top
   to be 518–532; jump normally from the bank to `[3200,-1300]`, then allow
   about60frames to land. Models31 and32 are platforms4 and5, whose tops are
   `572 + translationY` and `444 + translationY`.
5. Optional but actually verified secret, useful for reaching30 bottles:
   from platform3, aim at the shootable button brush center `[3356,455,-1180]`
   and hold Ctrl through its downward cycle. It can lock/hit when the platform
   is low. Button `secret3button_mc` closes `secret3door_mc` into a bridge.
   Wait for that door to be closed/still and platform3 top <396. Walk
   `[3172,-1094]`, `[3181,-845]`: two bottles and secret2. Return to
   `[3184,-1240]`, wait platform3 top <400, jump to `[3184,-1326]`, settle.
6. On platform3 align `[3152,-1350]`; wait until absolute top difference with
   platform4 is <8, then jump to `[3060,-1350]`, settle60frames. Align
   `[3024,-1350]`, wait top difference with platform5 <8, jump `[2924,-1340]`,
   settle. Wait platform5 top >=520; jump to the western bank `[2780,-1340]`.
   Defeat its bat.
7. Rotary button3: approach `[2734,-1400]`, push `[2734,-1440]` with tolerance2.
   `blad4_mc` closes. Ferry6 button: approach `[2670,-1356]`, push `[2640,-1356]`.
   Wait `platform6_mc.open && !moving`; its center is then `[2540,-1420]`.
   Move `[2665,-1420]`, board `[2540,-1420]`, wait closed/still. It carries to
   original center `[2268,-1556]`.
8. Use `__walkHeight([1536,-1070])`, then explicit straight points
   **`[1320,-1070]`, `[1120,-1070]`**. A direct long planned path from ferry6
   to the fairy cut the central bridge corner and caused an actual fall.

## Fairy, chapel lift, Brutus and exit

1. From `[1120,-1070]`, the ordinary stairs go north to Z about-1869, then west
   down in12-unit steps and around to the lower corridor. Collect bottles
   `[64,-1622]`, `[64,-1359]`. The run first reached29 here, returned for the
   secret above, then revisited with31. Walk to `[-40,-950]` to trigger the
   fairy. Wait until its scene ends and skill becomes11.
2. Three72-unit crate climbs: approach `[20,-1100]`; use `__moveToSuper`
   to `[250,-1100]` (floor380), settle; jump to `[300,-960]` (floor452), settle.
   Kill the spider that drops onto that tier. Move `[570,-940]`; superjump to
   `[720,-940]` (floor524), settle.
3. Walk to full health `[906,-1070]`, then approach `[964,-1077]` and touch
   `[993,-1077]`. This button must be approached **from the west**. The apparent
   route from the rotary bridge east side ends at a solid wall. The button opens
   gate2 and raises the chapel lift. Wait until `kerklift_mc.moving` is false.
4. Walk `[928,-720]`, `[843,16]`, through the east chapel door to `[540,0]`.
   Walk to lift center `[0,-216]`. Touching it opens/lowers it304units; wait until
   open/still. The real callback sets checkpoint `[0,220,-480]`, orientation12.
5. Lower corridor: stage `[-560,-210]`, then `[-750,-240]`; stationary Ctrl
   killed ceiling spider10. Stage `[-1100,-240]`; stationary Ctrl killed spider11.
   The optional bottle `[-1466,-237]` was collected (32). Main-route checkpoint
   brush is `[-811,587]`, setting `[-812,220,589]`, orientation3.
6. Walk toward `[-1708,2150]`. The boss approach force-push trigger carries
   RedCat into the arena and starts the intro; stop input immediately on the
   scene. This traversal took player health10→4 through normal enemy attacks.
   Wait until the intro ends (about1167frames). Save while alive.
7. Approach `[-1708,2830]`; hold Ctrl with alternating A/D every120frames,
   aiming normally at the live bonecollector. Two observed bouts,1600frames
   then about450frames, reduced its health10→0. Player health stayed4. On
   death the authored scene moved RedCat to `[-1712,147,3032]`; wait for it.
8. Walk to `[-1692,3740]`. The mirror pickup starts the exit sequence. It moved
   RedCat downward normally, awarded the bonus and showed the real debriefing.
   Enter started Caves with the carried values recorded above. The retained
   profile is paused at that Caves entry.

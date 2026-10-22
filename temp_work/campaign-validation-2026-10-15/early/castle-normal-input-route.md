# Castle normal-input route (completed 2026-10-18)

All coordinates are movement waypoints [x,z], not teleports. The live driver steers the camera with `world.look`, emits keyboard W/Space/ControlLeft/E and advances ordinary frames. No health, position, skills, inventory, puzzle state or enemy health assignments. Separate chapter fixture initially unlocked Castle in the menu; this does **not** prove an earned Forest-to-Castle progression. Root's campaign holds that earned save separately.

## Entry, library, basement (verified)

Normal defaults10health/3lives/skill1, noClipfalse. After following route:7potions,175score,1secret,fullhealth/3lives. No enemy kills required here.

1. Walk [-90,2000], [-90,1700]. Shoot `knopbridge` from bank for180frames, then wait240frames for lowered bridge. Jump along[-84,1555],[-84,1300],[-84,1080],[-84,700]. Touch[-181,575], collect[10,584],[-132,208].
2. Enterleftdoor[-500,96],[-650,96],[-860,64],[-892,-96]. Library maze (walk, tolerance5):[-780,-162],[-780,-226],[-1004,-226],[-1052,-82],[-1116,-82],[-1116,-354],[-972,-370],[-940,-498],[-908,-626],[-620,-674],[-620,-802],[-700,-802],[-716,-786],[-780,-786],[-828,-930],[-844,-994].
3. Walk/jump[-1100,-1000] (stops atx-1077),[-1100,-1200](stops atz-1013), then[-850,-1253] aroundtable. This touchesflipbutton, bookcase opens. Immediatelywalk[-984,-1270],[-984,-1430],[-840,-1384]. No E needed.
4. Leftstairs U-route[-731,-1944] (potion),[-550,-1944],[-500,-1384] (descendsbasement).
5. Secretpassage[-332,-1512],[-332,-1590],[-396,-1550] (checkpoint),[-319,-1660](potion),[-183,-1595](secretdoor),[0,-1595],[106,-1686](potion). Return[0,-1595],[-183,-1595],[-332,-1595],[-332,-1450].
6. Basement corridor[-332,-1384],[0,-1384],[316,-1388]. Rightstairs U-route[430,-1400],[430,-1940],[615,-1940],[667,-1389]. Collect[870,-1377],enter[790,-1288],collect[599,-1190],touchliftbutton[594,-1251].

## Storage warehouse

Inprogress. Firstliftcenter[976,-1240], fromfloor-24to166. Buttonautofiresafter1second; repeatsup/down5seceach. Ifstandingunderneathdescendliftitstopsaboveyourhead,stepout[976,-1130],wait2sec,jumponto[976,-1240]. Atupperpoint, jump east to x1040,z-1200 (platformtop168). Straightnorthfromliftisgap anddropsbacktobottom.

## Warehouse continuation (verified 2026-10-18)

The retained profile resumed with 8 potions, not 7: `ItemPotion15` had already been collected in the warehouse exploration. The exploratory fixture suffered two warehouse pit falls while deriving this route. These are recorded in `castle-route/commands.jsonl`; do not report this fixture as a death-free or continuous Forest campaign. Every listed movement is keyboard movement, never coordinate assignment.

- Lift 1: walk [976,-1130], wait until `storagelift01` motion time <0.7, jump to [976,-1240] with tolerance 5. Release input and wait for player y>150, jump to [1120,-1200], wait50 frames to land.
- Touch crate button [1188,-914] (actual contact near z=-917). Check `knopstoragecrates01.switchedOn`; it can later switch off while crates remain open. For safe takeoff WALK [1120,-950],[950,-950],[924,-950], release30 frames to settle. JUMP [872,-944],[802,-944],[716,-945]; settle50 frames, now y232. Long airborne turns can retain the previous launch direction and fall behind the crates.
- WALK [700,-1020],[640,-1130],[544,-1220],[544,-1100],[544,-950],[544,-830],[700,-820]. The actual upper passage is x544, along a ramp. The north wall across the rest of the room cannot be jumped through.
- Shoot `knopstoragevlak01` for240 frames from [697,-820], y312. Stand [712,-828], wait moving platform time>3.4, WALK [790,-828] (limit50,tolerance4). This lands grounded on the platform. Release input until x>964, WALK [1080,-828]. Do not jump onto the moving platform: retained launch momentum overshoots its small footprint before landing.
- Walk [1252,-634] to touch lift2 button, wait90 frames for delayed activation. WALK [1240,-848], release input until player y<155. WALK [1220,-790],[1220,-640],[1207,-546] for potion9, [1140,-550] (stops x1158), [1140,-790],[1080,-800],[1096,-522] (stops [1094.95,-545.05]). JUMP toward [1096,-522] for80 frames to touch switch. Wait240 frames: all three lower bridges open.
- WALK [1080,-670],[970,-670],[880,-670],[780,-670],[716,-670],[720,-760],[600,-760],[600,-730]. JUMP [600,-654] (limit160,tolerance4), collecting potion10; wait50 frames, settling near[600,-595]. WALK [590,-476],[590,-360],[900,-350]. Direct travel from bridge to potion is blocked by a crate maze; do not improvise east into the pit.

## Eastern passages (verified)

- WALK [1428,-337] potion11, [1400,-800],[1484,-892],[1527,-1112] potion12. Route through secret area [1583,-1125],[1583,-1181],[1535,-1357],[1479,-1357],[1367,-1237] potion13. Ordinary firing while moving was used here; no kills required.
- Return [1480,-1357], health[1497,-1409], [1535,-1357],[1583,-1181],[1608,-1148], health[1669,-1109]. Walk [1698,-902],[1842,-886],[1920,-850]. Stop and shoot `spider08` (540frames sufficed, no damage); moving into the doorway while aiming at a waypoint instead of the spider can be lethal.
- Walk [2173,-850], health[2173,-805], [2075,-800],[2075,-771],[2130,-614] potion14, [2164,-628] secret, [2400,-617],[2587,-617],[2762,-441] potion15.
- Far-room maze: [2781,-397],[2829,-397],[2941,-525],[2941,-685],[2845,-765] potion16. Return [2942,-684],[2942,-524],[2814,-396],[2782,-396],[2622,-604],[2587,-617],[2400,-617],[2164,-628]. Stationary shooters at [2652,-564] and [2652,-686] caused 3HP loss on return; this was survivable, not a no-damage route.
- Walk [2078,-520],[2080,-473],[2080,-443], shoot `spider09` (420frames clean kill), [2179,-433] potion17. Walk [1800,-360], shoot `spider07` (540frames reduced9HP to3; continuously track its current position to finish), [1694,-337],[1484,-180] armoury entrance.

## Armoury (historical first attempt; successful continuation below)

- From [1484,-180], walk [1312,-68],[944,-52],[880,-68], then [765,-240] potion18. Kill spider11 while tracking its current position; the fixture lost1HP approaching it after fixed-direction firing missed most shots. `__fight` in commands.jsonl continually steers the ordinary camera and holds ControlLeft until enemy dies.
- Return [880,-68], [850,100],[780,200],[780,400]. Walk along front raised ledge [925,476],[1437,458] potion19. The gate at z488 prevents direct access to first armoury button [931,607].
- The rolling-ball corridor entrance is through [1430,120],[1484,120],[1550,120]. Exact z120 matters; trying to cross at z141 stops before the proximity door opens.
- **Unresolved:** two rolling balls must be dodged on corridor x1511..1657,z120..550. A straight jump-heavy route at x1550 became blocked at z192 and was pushed backward into a lethal pit. This exhausted the isolated fixture's last life; game-over replaced its save with a chapter restart. Do not reuse those failed commands as a successful route.
- Read-only authored motion: kogel01 is a52-unit box, lane center aboutx1618, cycle3seconds; kogel02 is also52units, centeraboutx1546, cycle2.75seconds. The22-unit player hull makes the lane footprints overlap by about2units, so there is no permanently safe central lane. Button `knoparmoury02` [1692,64,594] stops/hides both balls. Button `knoparmoury01` [931,72,607] enables `deur_mc`.
- Next unvalidated work: both armoury buttons, throne room switch chain,20-potion power shot, Max, mirror.

## Earned-save replay corrections and armoury completion (2026-10-18)

This continuation imported root's untouched, normal-earned Forest/Castle warehouse save into the isolated browser profile: 7 potions, 6.8 health, 2 lives, skill1. Failed route experiments reloaded preserved ordinary checkpoints; they are exploration, not a single uninterrupted campaign. No live position, health, inventory, enemy health, or puzzle assignments were used.

- East entrance: from [897,-350], continuously aim/fire at spider06 until dead (1600-frame budget; it died near[1179,-436] without damage). WALK[1428,-337] for potion11, then track/fire spider14 until dead (1000-frame budget). Focusing on spider14 first lets spider06 attack from the side.
- Secret potion13: use the actual secret-door center [1608,-1148], cross[1608,-1220], then[1535,-1357],[1479,-1357],[1367,-1237]. The earlier x1583 approach depended on a prior door touch and can remain blocked. Health[1497,-1409] is accessible afterward.
- Do not stop in the far-east doorway [2584,-617] firing at StandingEnemy20/21. Their projectiles reach that exposed spot while return fire may be blocked. The continuously walked maze route above completed with3HP loss. This replay reached17potions,5.8HP,2lives, then19potions,4.8HP,2lives atarmoury.
- Rolling balls: WALK, do not jump. Exact successful start [1549.10,-23.95,120.00], ball motion clocks2.1166667/1.8666667. WALK[1645,145](limit120,tolerance4),[1640,320](limit100,tolerance4). At[1640,319.61] both clocks were0.35. WALK[1540,320],[1640,430],[1640,540](eachlimit160,tolerance4). End[1639.95,24.05,537.45], clocks1.9666667/1.9666667. No collision damage, jump, teleport or recovery. Align timing while outside the corridor; waiting inside the ball lane is unsafe.
- Stop button is on the back of its support. From corridor end WALK[1725,550],[1725,610],[1692,610],[1692,594]. Player endsz597.05; knoparmoury02=true and both mckogel01/02 disabled and hidden. Direct approach from south is blocked by a static support. No jump needed.
- WALK[1725,650],[1714,813] collects potion20.
- Cross armoury back room toward[960,630] using a read-only full-hull floor route. Successful turns approximately[1618,811],[1586,779],[1474,779],[1458,763],[1330,763],[1314,747],[1250,747],[1234,731],[1170,731],[1154,715],[1122,715],[1106,699],[1090,699],[1074,683],[1058,683],[1042,667],[1026,667],[1010,651],[994,651],[978,651],[962,635]. Then WALK[931,607] fromeast: endsx933.05,y32; knoparmoury01=true, deur_mc enabled, cutscene. E skips dialogue normally.
- Health[843,604] gives2HP. Walk around button support via[933,636],[901,636],[885,620],[869,620],[853,604],[843,604]. Replay now20potions,6.8HP,2lives.
- Return toward foyer via back-roomfront[1512,532], down emptiedballcorridor[1512,124], thenwest[1032,124],[460,118]; proximity doors open with normal approach.

Retained ordinary checkpoints in castle-route/: earned-10-potions-2026-10-18.json, earned-east-12-potions-2026-10-18.json, earned-armoury-17-potions-2026-10-18.json, earned-armoury-19-potions-2026-10-18.json.

## Throne access and first secret switch (verified)

- Return through door at exact[460,118] then[350,118]; diagonal crossing toward[428,92] can hit its frame.
- Central moving stair models are already extended. From foyer floor[148,-200], WALK[-80,-190],[-80,-400](y48),[-80,-475],[-80,-600],[-80,-700](y64),[-80,-1450](y68). No damage. Do not holdfire during movement: auto-aim turns toward nearby knights and can pull the player off the intended center line.
- Optional upper-right foyer walkway: [350,30],[268,-68],[268,-260],[148,-392],[300,-392],[310,-228],[348,-164],[348,0]. This is not required for throne access. The z-392 rampbase matters; z-356 runs under the ramp lip. A planner excluding dynamicmodels1/2/3 cannot see the central throne stairs.
- Firstthroneswitch: from[-80,-1450] WALK[-80,-1660],[140,-1660],[140,-1680],[140,-1688]. Root independently verified that StandingEnemy18 wakes only after the last8units; track/fire there for800frames kills5HP without playerdamage. Then JUMP[140,-1780],settle45frames,WALK[206,-1826](tolerance3) touchesknopthrone01 andopenswestsecretdoor. The isolated unprepared approach lost3HP to this guard; use root's verified kill before jumping.
- Westpassage: from rearhall enter[-326,-1480],[-326,-1380], then WALK[-326,-1040](y113), JUMP[-326,-920],settle40frames,WALK[-324,-710],[-324,-680](tolerance2). knopthronesercet01=true, thronebackopen, liftthrone01enabled. No damage.
- The westpassage ramp rises fromy64 atz-1376 toy112 atz-1120. A narrowgap aroundz-1008..-992 mustbejumped; a long walk falls to lowerfloor64 andstalls underthenextplatform atz-987. Recovery route fromthatlowerfloor: [-392,-1000],[-392,-1380],[-326,-1380], thenrepeatramptopandjump.

## Remaining throne switches (verified)

- Return from west secret: WALK[-324,-920],[-326,-944], JUMP[-326,-1060], settle40frames, WALK[-326,-1390],[-316,-1660],[-316,-1688](tolerance1). Track/fire StandingEnemy19 for800frames; its5HP reached0 without player damage.
- Approach the lift from the west stage via[-410,-1800]. Wait until liftthrone01 motion time<0.6, then WALK[-349,-1822](tolerance3,limit100). If the descending lift stalls at its floor, press Space for2frames, release, and wait until player y>225. This normal in-place jump released the lift and it rose without damage. A jump from[-316,-1780] hugs the stage edge and can fall below it.
- From upper lift WALK[-410,-1830](tolerance3), then wait45frames. Player ends near[-407.3,236.05,-1830]; knopthrone02 switches on and opens the east secret. Walking into its face produces one clean contact. Jumping onto its top caused two rapid toggles and cancelled the door-opening animation.
- East passage: WALK[-300,-1800],[-80,-1660],[160,-1480],[160,-1380],[160,-1040], JUMP[160,-920], settle40frames, WALK[160,-710],[160,-680](tolerance2), wait60frames. knopthronesecret02 switches on and opens secretdoorthrone. No damage.
- Return east: WALK[160,-920],[160,-944], JUMP[160,-1060], settle40frames, WALK[160,-1390],[160,-1480] before turning toward the center. Turning diagonally from[160,-1390] collides with the passage wall.
- Full-hull floor planning around the final throne pillars successfully reached[-120,-1976] using step12,stepHeight18,maxDrop64 and tolerance4, with attack=false. Route turns were[141,-1414],[141,-1450],[129,-1462],[117,-1474],[93,-1498],[93,-1594],[81,-1606],[81,-1690],[69,-1702],[45,-1726],[-63,-1834],[-63,-1858],[-75,-1870],[-75,-1882],[-87,-1894],[-87,-1906],[-99,-1918],[-99,-1930],[-111,-1942],[-111,-1966],[-120,-1976]. All planner queries were read-only; the route was followed with keyboard movement.

## Power shot and final checkpoint (verified)

- WALK[-80,-2050] enters the actual choice_tr brush, whose z range is-2000..-2136. Its authored origin[-120,112,-1976] lies outside that brush and is not sufficient to activate it. With20potions, the normal trigger changed skill1→3, unlocking power shots; no inventory/skill assignment was used.
- WALK[-204,-2010] touches savepoint03. Checkpoint becomes position[-208,114,-2010],orientation3. Saved snapshot: castle-route/earned-max-entry-power-shot-2026-10-18.json,3.8health,2lives,20potions,skill3.
- WALK[-80,-2050],[-80,-2224] opens the arena doors and starts the intro. Skip with ordinary E down for2frames, release10frames, repeated while cutscene active. A helper that presses E then calls __wait fails because __wait releases all input before advancing a frame.

## Max fight (verified, combat timing matters)

- Boss is StandingEnemy23 (enemyType maxj), initially8HP. Aim every frame at gameplay.objectPosition(boss) with ordinary world.look yaw rotation, then hold ControlLeft. Camera pitch was0.16. Power shots deal2 damage.
- This successful attempt first walked[-80,-2420], then circled for600frames while holding ControlLeft+KeyA, adding W when boss distance>430 or S when distance<150. Max fell8→6 with no player damage. The arena intro then interrupted and repositioned the player through its normal script. Skip that dialogue and WALK[-80,-2600].
- At player[-80.4077,56.05,-2598.2981], stationary tracking/fire for1200frames reduced6→2; roughly another320frames killed2→0. Health remained3.8 throughout. Max frequently repeats invulnerable teleports at low health: this fight had about20seconds between the last two hits. Do not infer stationary fire is safe from a fresh8HP encounter; root's independent fresh attempt lost a life, and the successful setup above had already damaged Max while circling.
- Exact camera helper: desired=Math.atan2(-(targetX-playerX),-(targetZ-playerZ)); delta=Math.atan2(Math.sin(desired-world.yaw),Math.cos(desired-world.yaw)); world.look(-delta/.002/world.settings.sensitivity,0). Input is window keydown/keyup ControlLeft; __stepFrame(1/60), yielding every10frames. No enemy state edits or direct attack invocation.
- Max health0, playerhealth3.8,lives2,score1810,kills11; no errors. Wait240frames for normal victory cutscene, then E to skip.

## Mirror, debriefing, and chapter transition (verified)

- After victory WALK[-80,-3050],[-80,-3080] onto liftendboss03. Release input until player y>=163; lift top is164. WALK[-80,-3220], then[-80,-3339]. Reached[-80,176.05,-3329.08], collected mirror1→2, completed=true. Health3.8 and lives2 unchanged; score became2380.
- Allow ordinary frames and audio to finish. Debriefing appeared:20/30magical bottles,3/30bags,7/40enemies,3/5secrets,levelbonus495,score2380. This validates the completion route, not all collectible pickups.
- Clicked the visible "KLIK/TIK hier om verder te gaan" button. Normal transition entered lvl02a/Het Kerkhof at[1616,-63.95,3753], with health3.8,lives2,mirror2,skill3 preserved and potions reset0. Graveyard intro active, no runtime errors, noClipfalse.
- Retained complete storage snapshot: castle-route/earned-castle-mirror-complete-2026-10-18.json. Other retained checkpoints include earned-armoury-complete-20-potions, earned-throne-entry-20-potions, earned-throne-west-switch, earned-throne-lift-switch, earned-throne-all-switches, and earned-max-entry-power-shot (all dated2026-10-18). Detailed commands and results remain in castle-route/commands.jsonl.
- Scope: this isolated exploration used unchanged normal-earned checkpoint imports/reloads after failed experiments. It proves the listed individual routes, puzzle chain, power-shot upgrade, boss defeat, mirror, debriefing and onward transition. Root separately validates one uninterrupted earned Forest→Castle campaign. No builds were produced.

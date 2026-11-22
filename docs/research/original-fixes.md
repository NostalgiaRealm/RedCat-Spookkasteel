# Fixes of original faults, carried over from the JavaScript port

Written 2026-11-14. Every item here changes what the original game does, on purpose. The code is
`source/host/fixes.js` (one flag per item, `FIX_DEFAULTS`; a flag off is the original), the check
`node tools/fixes-check.mjs`, which plays each scenario with the fix off and on. Addresses are in
`RcHcGame.dat`. **C** confirmed (read in the code or the data and seen in a run of the Node
runner), **I** inferred, **U** unresolved. "Run" means: `tools/run-headless.mjs` with
`tools/fixes-plugin.mjs`, on the original code with the fix switched off.

Switching: `node tools/run-headless.mjs --fixes off` (or `name=0,name=0`); in the browser
`?fixes=off` in the address or the setting `fixes`; two of them are settings of the player
(Meer instellingen). With every flag off the game's memory is what it was before this work: the
save-state pair of world 1 (`--save-at 900 --hash-after 300 --fixes off`) prints `307574ef`, and with
the fixes on `8f54e89b`. (Until 2026-11-14 the pair's hash covered the image and the heap only and
printed `4bcff851` either way: it did not read the pages at the top of memory, where the game's own
heap is, the player and his god-mode byte included, so it could not tell off from on. The reviewers
of that day compared the build before the fixes with this one, fixes off, over image, heap and pages
in all five worlds: equal. In world 1 off and on differ by one byte after the opening scene, the 7 or
3 of the Caves' `StandardSkill` in the game's copy of `Game.ini`.)

## How they reach the game

| Way | Used by | Changes the game module |
|---|---|---|
| A byte of an original file as the game reads it (`vfs.patch`, only while the bytes around it are the expected ones) | bigBeng | no |
| A value in `Settings\Game.ini` before the game starts | cavesStartSkill | no |
| Between two passes of the main loop, with the game's own functions and data | cutsceneProtect, flightSafe, mazeReset | no |
| The host guard that is already in front of a function with a `try` block (`meta.hooks.eh_…`) | fractionalDamage (0x503FC0) | no |
| A host hook (`GAME_HOOKS` in `tools/recomp/build.py`, `late`) | doorSound (0x4CC140), towerFire (0x54E750) | yes: two hooks |
| The host's DirectSound | musicContinuity | no |
| In the pass that changed the sublevel, after `ChangeToSubLevel` returned (`mainLoop.afterChange`), with the game's own functions and data | soundRelease | no |
| The render driver | wallTrim; skyBackdrop and smoothSprites (not faults: the original's picture made better, `effects-low-end.md` 7); hudShape (not a fault: the port's wide modes, `genesis-driver.md` 11b) | no |

The two new hooks are `late`: their thunks are numbered from the top of the thunk table, so the
host's own thunks keep their numbers and the addresses the game stores of them do not move. That
is why the memory with all fixes off is still the old build's. The module's hash did change, and
the host has a new state part (`fixes`) and a new version of the `dsound` part: save states of
before 2026-11-14 are dropped once, as after every such build.

## 1. Graveyard hedge maze (mazeReset)

- C (level data, `lvl02a`): five triggers with `MaxTriggerTimes=1` (`heg1_trigger_mc`,
  `heg3_trigger1_mc`, `heg3_trigger2_mc` disabled at first, `heg2_closetrigger_mc`,
  `heg5_trigger_mc`), four hedge controllers with `RepeatMode 0` (`heg1_mc`, `heg3_mc`, `heg4_mc`,
  `heg5_mc`), the hedge door `heg2_mc`; the World's `OnPlayerRespawnCommand` is empty.
- C (run): RedCat put inside each trigger's model in turn; the triggers count 1 (`+0x174`), the
  hedges stand at the end of their motions (`+0x100`: 0.5, 3, 2, 0.5 s). After the game's own
  `Kill` (0x4DD1A0) and the new start with a life less, all of that is unchanged, and a second walk
  changes nothing. The engine resets nothing at a respawn. The original's way out is "Level
  opnieuw opstarten" in its menu.
- Object layout used (C, 0x4D3680, 0x4D5080, 0x502350): enabled `+0x7C`; `CAdamTriggerModel`
  (vtable 0x64F078) state `+0x16C`, times triggered `+0x174`, entity `+0x168` (`MaxTriggerTimes`
  at entity `+0x34`); `CAdamModelController` (0x64F014) motion time `+0x100`; `CAdamDoorModel`
  (0x64EEB8) state `+0x16C` (1 closed … 6 open), DoorType `+0x18C`. An object by DaviName:
  0x4F4C30, thiscall on the sublevel with a `std::string*`.
- The fix: when RedCat has health again after having none, in `lvl02a`, and the maze is not
  finished (the lamp `mazedeur1_groen` off, `mazedoortrigger` not started, `mazedeur1_dm` closed),
  each of the ten objects gets the script procedure `Reset` of its class (vtable slot 23:
  0x4D5080, 0x4D3140, 0x4CE200; what `object.Reset()` in a level script calls through 0x4D1940)
  and its authored enabled state (0x502350). Run: counts 0, hedges at 0, a second walk fires all
  five again.
- U: a death during the one-second press of the last button (the JavaScript port cancels that
  press; here the original's behaviour stays). The hedges' collision after `Reset` was not probed
  with a sweep; `Reset` sets the model through the same call as the script's `SetTo` (0x4D0770).
  Not walked by hand: the triggers were entered by putting RedCat inside them in free flight.

## 2. BIG BENG in the Caves (bigBeng) and the Caves' Snelspel start (cavesStartSkill)

- C (`lvl03a.dso`, handler of `trigger_cuts04`): `RcHasAllPotions(2)`, then `RcEnableSkill(4)`.
  The other three fairies ask and give the same index (0/0, 1/1, 3/3). 0x436EA0 maps index 4 to
  mask 0x10, which no reader of the skill mask tests (`cheats-and-player.md` 2.1).
- C (run): 100 potions, the trigger's own "triggered by RedCat" (0x4D4310): skill mask 0 → 0x10.
  With the fix (the operand at file offset 0x18F5 read as 2): 0 → 4.
- C: `Game.ini [sublevel1_4] StandardSkill=7`; a Snelspel replaces the mask by it (0x43AB49). Run:
  7 without, 3 with the fix. The owner chose 3, as the JavaScript port has it. Noted, not acted
  on: an adventure reaches the Caves with 11 (the Graveyard's fairy gives 8), so a Snelspel there
  starts without the super jump, with either value.
- U: a player file that already has 0x10 from before the fix is not repaired.

## 3. No damage during cutscenes (cutsceneProtect)

- C (run, Castle): during the opening scene (cutscene state `player+0x300` = 2, no control) the
  damage dispatch 0x503FC0 with 2 damage on RedCat costs 2 health.
- The fix holds bit 1 of the original's god-mode byte (`props+0x14`; `ChangeHealth` 0x439BF0
  refuses every loss that is not forced while it is not 0) while the state is not 0, and takes it
  away afterwards. Bit 0 stays the player's own switch. Run: 0 lost during the scene, 2 after it.
- **The level-completion wait of the JavaScript port does not exist here** (C, run): RedCat put
  inside the Forest's end trigger, the change of world with its results screen began inside the
  seventh pass after that. Nothing to protect.
- U: whether any enemy actually reaches RedCat during a scene in play; forced kills still kill.

## 4. Explosion damage to enemies (fractionalDamage)

- C: the hurt cell 0x4AF180 hands out `(1 - d / radius) * dt[ms] * rate * 0.001` per frame through
  0x503FC0; all twenty enemy classes share the receiver 0x4232A0 (vtable slot 7), which does
  `health (int, +0x178) -= ftol(damage)` (0x4232D3).
- C (run): a crate of the Caves (`earth_crate`) blown up: at 60 frames per second 502 doses, the
  largest 0.72; at 25 the largest 1.7. Eight doses of 0.78 for a spider: health 10 → 10.
- The fix keeps the fraction per enemy and passes on the whole part (a dose that leaves nothing
  whole goes through as it came). Run: 10 → 4. Only for targets whose receiver is 0x4232A0 and
  only for calls that return into the hurt cell.
- U: no enemy was caught in a real blast (the spider beside that crate got no dose: not in line of
  sight or not active); the enemy doses in the check enter the dispatch as the cell enters it.
  Other per-frame damage (liquids, beams) was not looked at.

## 5. Free flight (flightSafe)

- C (run): flying (`engine+0x48` = 0), 2 damage costs 2 health; switched off 300 units under the
  floor, RedCat is left there in the air state.
- The fix: the same protection bit while flying; and before collision goes back on, a test of
  the place. The engine's box sweep 0x5B7D80 only reports going into something solid (run: from
  inside the floor or outside the level it reports nothing, or an impact that is not below the
  start), so "free" is: the player's box (`player+0x1D4`, `+0x1E0`) swept 4096 units down meets a
  floor at or below where it began. Not free: the place 1, 4, 16, 32, 64 units higher, then where
  he last stood (move state 0), then where the flight began, each also lifted. None: flight stays
  on. Run: back at the start; half in the floor: 16 higher; outside the level with nothing
  remembered: still flying and protected.
- U: inside a wall with a room below the test says free (he drops into the room, as in the
  original). Not tried in a level by hand.

## 6. Door panels (doorSound)

- C: 0x4CC140 picks by DoorType (`+0x18C`): 1 `OpenDoorNormal.wav`, 2 `OpenDoorKey.wav`, 3
  `OpenDoorSecret.wav`, 4 `empty.wav`. Run: `doorhallway02_01` (type 4) plays `EMPTY.WAV`.
- The fix shows type 1, or 3 for a name with "secret", for the length of that call, for the
  JavaScript port's list of panels (Castle `door…`, `secretdoor…`, `fence`; Graveyard
  `mazedeur1_dm`, `kerk_1/2_links/rechts`, `froggerdeur_links/rechts`; Caves
  `door_left/right_walab01/airlab01`). A door whose own command for that movement enables a
  sound of the level (the Castle's `snd_OpenDoorSecret.enable`, six doors) keeps that alone.
- Not listened to; the levels are the original's for a type 1 or 3 door at that place.

## 7. Sound: Tower fire (towerFire), music (musicContinuity), and what was not carried over

- C (run): at the start of the Tower nine `LV4snd16.wav` loops are at -795 (full distance gain);
  with the fix -1417 to -3546 by distance (0.65 × a fade from 10.53 to 63.18 m, in the 3D helper
  0x54E750 for voices the update 0x553170 keeps up to date).
- C (run): a fight for the music, made with an enemy's own "threat begins / ends" (0x422630,
  0x422740): the level music is stopped at 20 s and played again from position 0. With the fix it
  is played from where it stopped (`dsound.js`).
- **Fairy loop from three times the distance: not carried over, there is nothing to change.** C:
  the fairy's loop helper 0x47D570 starts `IdleFee1.wav` with the plain start 0x54ED80 (gain 0.4),
  not the 3D one, and in a run it never passed the 3D helper; with RedCat 6000 units away its
  level stayed -1795. In the original it is heard everywhere at one level. The JavaScript port
  needed the rule because its own mix made the sound local.

## 8. Picture

- **wallTrim.** C (level data): faces 920 and 921 of `lvl02a` carry `hek_door` (128×128, 9538
  texels of palette index 255, black) without the transparency flag. C (run): the driver gets a
  1555 surface with those texels at alpha 0 and two such world polygons a frame with flags 0;
  the gates' own faces come with flags 3. C (picture of this port): the strips show the gate
  pattern with black between. The fix draws those two polygons with every texel. **In this port
  the picture is the same with the fix on and off** (five views, 0 pixels different): nothing is
  drawn behind the strips, so the holes show black and the see-through texels are black. It is in
  the driver for the case that something does get drawn there.
- **Larger far shots: not done.** The driver only sees screen polygons and texture handles
  without names; where the live projectiles hand their sprite and its scale to the engine was not
  researched. The owner left it out when he asked for the hand torches (2026-11-14).
- **Flames and light on all hand torches: done, section 10.**

## 9. The original's cheat page while the host protects RedCat (2026-11-14)

Confirmed (read): the game's menu 0x52EC30 copies the god-mode byte when it opens
(`DAT_006ba66c = GetGodMode() != 0`, 0x53202F) and clears "changed" (0x6BA674). The entry "wordt
onsterfelijk" of the cheat page reads that copy through its getter 0x534850 and sets it through
its setter 0x534830, which also sets "changed" when the value is another. When the menu closes and
"changed" is set it calls `SetGodMode(copy != 0)` 0x4DDEB0 (0x532EFB), which stores the value as it
is. The toggle 0x4DDEC0 (the debug key) stores `byte == 0`.

Confirmed (run, `tools/fixes-plugin.mjs` `godpage`, the game's own menu opened and closed with Esc,
the entry set by calling 0x534830): with `flightSafe` and RedCat flying the byte is 2 while the
player never asked for immortality. Before 2026-11-14 the copy was then 1 ("on"), and setting the
entry to "off" wrote 0, which the host read as the toggle: immortal after the flight (the
reviewers' run: byte 1 after flight, no health lost). Now: at the second frame of a pass (the game
is in a loop of its own: `mainLoop.frames`, `onNested`) the copy gets the player's own bit unless
"changed" is set, and a 0 or 1 found after such a pass is taken as it is. Runs: copy 0 while the
byte stays 2; entry off: 0 after the flight, 2 damage costs 2; entry on: byte 3, then 1; immortality
on and then switched off on the page while flying: 0.

Not seen: what the page draws for the entry (the copy was read, not the picture), and the page
worked with the keyboard.

## 10. Hand torches: every one lit, the flame on the moving hand (handTorches, 2026-11-14)

Not a fault of the original: the JavaScript port's own addition "All 32 moving hand torches lit"
(release 0.9.7, `../RCSPOOK_NEW/source/torch-flames.js`), which the owner asked for here. Code:
`source/host/torches.js`; flag `handTorches`; checks `node tools/fixes-check.mjs --only handTorches`
(Node runner) and `node tools/torches-check.mjs` (pictures in a browser).

### The original

Confirmed, level data (`data/levels/lvl01a`, `lvl02a` of the JavaScript port, made from the
original BSPs; `tools/out/torches/research-oldport/hands-table.txt`):
- 32 `AdamAnyActor` entities with `ActorFileName` `htorch.act`: 8 in the Castle, 24 in the
  Graveyard, none elsewhere. `MotionName` `anim` on 31; blank on Graveyard `AdamAnyActor131`.
- 16 of the Graveyard's hands have an `EffectSpoutEntity` (`flame03.bmp`) 9.5 to 15.5 units from
  the wick at rest, typically 24 above and 40 in front of the actor's origin. The other 8 and all 8
  of the Castle have no emitter within 300 units. No hand has a `DynamicLightEntity` near it (the
  Castle has none at all).

Confirmed, original code and runs of the Node runner with `--fixes off`
(`tools/out/torches/research-original/*-plugin.mjs`, `tools/fixes-plugin.mjs` `torch`):
- A hand is a `CRcAnyActor` (vtable 0x64BB14): actor file name at `+0xFC`, `geActor*` at `+0x114`,
  scale `+0x150` (3.5 three times), a 12-float transform at `+0x168` (translation `+0x18C` = the
  entity's origin), enabled `+0x7C`. The sublevel's objects are a list: head `sub+0x34`, node
  `{ object, next }` (0x4F4940, 0x4F4C30). Walked: 8 hands in lvl01a, 24 in lvl02a.
- The factory 0x4A87E0 sets a motion only when `MotionName` is not empty and not `<null>`, so
  #131 stands still: on the hand's animator (`hand+0x19C`; motion name `std::string` at `+0x18`,
  its length `+0x20`, `geMotion*` `+0x38`, time factor `+0x40`) it calls set-motion 0x4A06B0
  `(std::string*)` at 0x4A8B1F and the time factor 0x4A0BD0 `(float MotionSpeed)` at 0x4A8BBB. Run
  beside #131 (camera 63 units away): name length 0, no `geMotion`, time factor 1, swing 0.
- `geActor_GetBoneTransform` is 0x5B44A0 (fastcall: ECX actor, EDX bone name, one stack argument,
  the transform). The wick: BONE03's transform x scale x (0.11176, 0.22691, 14.13521), the centre
  of mesh vertices 51 to 53 as the JavaScript port's model research has it. Run: 17.273 above the
  actor's origin for all 8 Castle hands once they are posed, while the nearest one sways 23.0 units
  sideways; 19.878 is the rest pose of every hand the game is not posing.
- Posing depends on the camera, confirmed by runs of the second reviewer
  (`tools/out/torches/review-fidelity/yard*.json`): with the camera at the Graveyard's entrance 18
  of 24 hands are at 19.878 with swing 0, all 1849 units or more from the camera, and the 6 within
  1359 sway 23.04; hands up to 1553 units from the camera sway and hands from 2111 do not, wherever
  RedCat himself is; a hand that leaves the range stops in the pose it has (swing 0 at 17.273); the
  Castle's 8 jump by 2.61 (19.878 to 17.273) when the camera comes into range. Unresolved: the
  exact distance (between 1553 and 1849; the JavaScript port documents 1800) and the code that
  decides it. #131, which has no motion, is at 19.878 at any distance.
- A flame is a `CRcParticleSystem` (vtable 0x64D9E4, constructor 0x466A90, update 0x468540, draw
  0x467EB0). The entity has an origin and a `SpoutDirection`, no actor or bone. The constructor
  computes fifteen birth templates once (`+0x1498`, stride 0x1C: place, velocity, delay in ms); the
  update copies a template at every birth; the emitter's origin is at `+0x2B4`. So a flame is
  born where the level has it whatever the hand does. Run (Graveyard, hand `AdamAnyActor133`): the
  wick moves up to 17.9 units (horizontally) from the emitter's origin, the birth places up to
  18.5 from the wick and 3.7 off in height.
- The draw hands every live particle to the engine for one frame: `geWorld_AddPolyOnce` 0x5B6E90
  `(world, GE_LVertex[4], 4, geBitmap, 0, 1, 0)` at 0x468415, the quad from the billboard helper
  0x477D50 `(camera - particle, outA, outB)`, both vectors turned round when the camera is above
  the particle (0x468183), corner offsets and UVs from 0x64D928 onward. The bitmap object is
  `emitter+0xFC`: file name at `+0x20`, `geBitmap*` at `+0x2C`.
- Dynamic lights: 32 slots of 0x34 bytes at `*(world+0x3B0)+0x3E4`, number in use at `+0xA64`.
  `geWorld_AddLight` 0x5D36A0 takes the first free slot from the bottom, `RemoveLight` 0x5D3710
  clears word 0 and lowers the number, the setter 0x5D3730 `(slot, pos*, rgba*, radius, cast)`
  fills a slot. The world render reads the table (0x5D34C0 from 0x5B8730). Run: 3 or 4 slots in
  use in both worlds.
- A hand that takes 1000 damage through the dispatch 0x503FC0 is gone within that pass: out of
  the list, vtable 0x650104, `geActor*` 0 (`tools/out/torches/work/shot-plugin.mjs`). So the host
  walks the list again before every use and never keeps a hand's address as valid.

Inferred: "not lit" is authoring, not a limit of the engine (all emitter entities become objects,
the light table is nearly empty); no script was searched for torch lights.

### What the flag does

The numbers are the JavaScript port's (`torch-flames.js`): wick + 3 in height, light 0.75 0.4
0.1 (191 102 26) with radius 150 and no shadow, hands within 1800 units of the camera, pairing
within 32 units of the wick at rest. The number of lights is not the port's: the eight hands
nearest the camera, on top of the game's own lights (see the differences below).
- **The hand without a motion** (#131) gets `anim` at time factor 1, its entity's `MotionSpeed`
  and what the JavaScript port plays (`source/world.js`: the explicit `htorch.act` exception for a
  blank `MotionName`; `docs/enemy-actor-animations-native.md` there). Between two passes, once per
  hand whose animator has no name and no motion: a `std::string` made with the game's own code
  (0x4040A0, 0x401940, 0x404190, as the factory makes it), set-motion 0x4A06B0, the string's
  destructor, time factor 0x4A0BD0. Game memory: the animator's fields and one heap block for the
  name. Run beside #131: name length 4, a `geMotion`, swing 23.04 (the other hands': 23.04), its
  flame's birth places within 1.481 of the wick. So all 32 move, the port's count. With the flag
  switched off in a running game the hand gets the empty name back (the same call) and stands
  still, in the pose it was in (17.273, not the rest pose's 19.878: run).
- **16 authored flames** follow their hand: between two passes the host writes the fifteen birth
  places as they were made + (wick - emitter origin). 45 floats of game memory per emitter.
  Particles that are alive keep their path, as in the JavaScript port. Run: every birth place
  within 1.5 (the emitter's own `StartRadius`) of the wick, height error 0.
- **16 hands without a flame** get a pool of the host: 15 slots, the constructor's and the
  update's rules (`docs/spout-effects-native.md` of the JavaScript port) with the values of the
  Graveyard's hand flames, own random numbers, the game clock `sub+0x3E8` in steps of at most
  125 ms. Each live particle goes to `geWorld_AddPolyOnce` at the first `BeginWorld` of a scene
  with the level's `flame03` bitmap, the quad from the game's own helper 0x477D50. Run (Castle,
  8 hands in reach): 41 polygons a frame handed over, 5.7 more reach the driver than without (the
  engine culls the rest by leaf and view).
- **Light**: at the driver's `BeginScene` up to eight free slots, from slot 31 downwards, are
  filled through 0x5D3730; at `EndScene` their bytes are put back and the number lowered again.
  Run: 7 (Graveyard entrance) and 8 (Castle) warm lights while the world is drawn, none between
  two passes, number equal to the slots in use throughout. A slot the game uses is never taken.
  Run with the table filled to 30 of 32 by the game's own `geWorld_AddLight` (Graveyard and
  Castle): two torches get the two free slots, 32 in use while the world is drawn, 30 between
  passes, and seven or eight torch lights again once the game's are removed.
- **The same sublevel paired again** (a hand is gone, or the game wrote an emitter's places): an
  emitter keeps the level's places the host knows for every float that still is what the host
  wrote last; a float that is something else is taken as the game's. Before the review fix
  (2026-11-14) everything was read again, so the places the host had moved became "the level's"
  (reviewer's run: all 16 emitters off by up to 10.54 units for the rest of the level, and "off"
  wrote those back). Run now, one float changed by 0.5 as if by the game: 16 records kept, that
  one float differs (by 5.44: the moved value is taken as the game's), nothing else; with the
  flag off afterwards every other float of every emitter is the level's again. Not reached in
  play so far: the constructor is the only known writer of the places.
- **A hand that is destroyed** (run: 1000 damage through the dispatch on the entrance hand with
  an authored flame): gone within the pass, its emitter still there with the level's own 45
  floats again (same hash as with the flag off), 23 hands and 6 lights go on, a scene every frame.
- A light put in at `BeginWorld` instead comes too late for the lightmaps (research probe), which
  is why this cannot be done in the driver alone: lightmaps are computed inside the engine.

Game memory: with the flag off nothing is called or written; memory and what the driver is
handed are the build's before (runs, 600 passes of play: Castle `c026738b`, Graveyard `ec52ae73`,
driver calls hashed, equal to the tree before the change; the README pair still `307574ef`, and
`8f54e89b` with the fixes on because world 1 has no hand). With the flag on memory differs from
the original in the Castle and the Graveyard: the birth places, heap blocks of one frame, light
marks. A state holds the pools and the authored birth places (part `torches`; `STATE_ABI` 3, so
states of earlier builds are dropped once). Run: a game saved with hands in view equals itself
restored (Castle `1833ce66`, Graveyard `e3e5ca1d`; the Graveyard's was `0f3b0373` before #131
got its motion).

What is written while the flag is on, in full: the 45 floats per authored flame; #131's animator
and the heap block of its motion name; light slots for the length of a scene; what
`geWorld_AddPolyOnce` and the lightmap code leave (heap blocks of one frame, light marks on
faces); and the stack below the stack pointer. The last one, inferred harmless, not confirmed:
`beginScene` and `beginWorld` run inside game code and call 0x5B44A0, 0x5D3730, 0x477D50 and
0x5B6E90 on a stack 0x1000 below the driver's, so the leftovers in dead stack are not the
original's, and the game reads dead stack in places (`snapshot.js`; a vertex scratch array in
world 3). The other fixes call game code that way between two passes only; inside a scene this
is the first. Seen: the result is deterministic (restored equals continued), and the first
reviewer's gameplay digests (rand seed, player, objects) are equal with the flag on and off over
5000 to 6000 passes in both levels. Not provable by a hash: an effect on something drawn cannot
be told from the lights.

Different from the JavaScript port:
- A hand that is shot leaves its authored flame where the level has it, as in the original,
  instead of putting it out.
- The 16 authored flames keep the game's own emission. The port stops the births of a bound
  flame when its hand is hidden, disabled, destroyed or more than 1800 units from the camera
  (`torch-flames.js` `enabled`, `world-effects.js`); here only the host's 16 pools obey that
  (reviewer's run: emitters 2000 to 4950 units away were still moved every pass). Nothing to see
  at those distances. They also keep their own spread direction (three of the sixteen are a
  little off straight up; the port forces straight up).
- **Light budget.** Eight torch lights in addition to the game's own (run, Castle: 12 slots in
  use, 4 of the game and 8 torches). The port has 8 world-light slots in all with RedCat's
  reserved (`world-effects.js` `nearestWorldLights`), so at most 7 torch lights, and fewer near
  authored lights.
- **Light strength on walls: about twice the port's.** Same colour and radius, but the gain from
  flag off to on, measured by the second reviewer on matching surfaces (red channel): Castle wall
  beside Handtorch01, port +6 to 9 % (89.7 to 95.4, 78.9 to 86.2), here +12 to 21 % (124.8 to
  139.7..144.2, 102.4 to 118.5..123.7); Graveyard entrance pillar, port +19 % (61.7 to 73.6),
  here +34 % (48.1 to 64.7); the beam, port +14 %, here +107 % (30.9 to 64.2; its unlit base is
  much darker here). Pictures: `tools/out/torches/review-fidelity/diff-sheet.png` (differences
  amplified four times), `old-sheet.png`. In the port the Castle wall's light is barely visible;
  here the whole wall face is visibly warmer. Here the light goes through the engine's own
  arithmetic (0x5D3730 and its lightmap code), in the port through a reimplementation, and the
  two ports' unlit pictures differ as well: a difference of look, not a wrong constant. Left as
  it is; for the port's subtler look lower `LIGHT.rgba` or `radius` in `torches.js` after a
  side-by-side (the owner's choice).
- Not different any more: #131 moves (it was left still until the review of 2026-11-14).

Pictures (`tools/torches-check.mjs`, RedCat put in place by the tool, not walked there): see
`PLAN.md` for which browsers. Castle, flag on: a small flame above each of the two hands in
view, trailing a little behind the swaying wick, and the wall around each hand lighter.
Graveyard: the flame that hangs beside the hand in the original sits on the torch, and the
pillars, the beam and the wall beside the hands are lit warm.

Cost, measured on a desktop only. The flag does nothing where no hand is in reach: at the
Castle's start a run with the flag on is byte for byte the run before the change over 6000 passes
(first reviewer), so `gpu-memory-check --world 2` and `phone-check`, which stand at a world's
start, say nothing about the Castle's hands; only the Graveyard's start has 7 lights. At the two
torch places (first reviewer, Node): game thread 1.08 to 1.37 ms a pass in the Castle (+27 %),
1.38 to 1.56 in the Graveyard; lightmap uploads a frame 7 to 69 and 0 to 32, each 10 to 40
texels into an existing texture (no growth of GPU memory expected; the heap's high-water mark is
the same on and off). Software WebGL at 844x390 holds 60 frames a second both ways, but in the
Castle the game thread's wait drops from about 90 % to 73..82 % and the chip load rises from
about 46 % to 60..82 % (two runs, noisy). Tools that do stand there:
`node tools/gpu-memory-check.mjs --torch castle|yard [--fixes handTorches=0]` and
`node tools/torches-check.mjs --phone` (a phone-shaped window; frame rate, wait and chip load
with the flag off and on). If a real phone loses frames there: lower `MAX_LIGHTS` (4) or the
reach of the lights on phones.

Unresolved: the cost on a real phone (see above: every number is a desktop's); a scene with two
world renders (the flames are added at the first only); what the
game's own lights need at worst (a busy slot is skipped, so a torch then goes without light);
nothing was played to: no hand was reached on foot, none was shot in a browser.

## 11. The sounds of a world that was left (soundRelease, 2026-11-22)

Not a fault a player of 2000 saw: the original never frees a sound before the game ends, and a
Windows process had 2 GB of address space for it. The game thread here has 192 MB (159 MB of heap),
and a player who went through all five worlds in one sitting got "out of game memory (heap 158 MB
in use)" at the witch's door, where a game started in the Tower with the cheat came through.

### The original

Confirmed, original code:

- Genesis3D's sound manager (`SoundSystem.c`, the module's 0x5C7E10 to 0x5C9000) keeps a channel
  per loaded sound: the file's bytes (`channel+0x18`, kept for the case that
  `DuplicateSoundBuffer` fails, 0x5C8BA0) and a DirectSound buffer (`channel+0`), its number
  (`+4`), the next channel (`+0x1C`) and its duplicates (`+0x20`). The manager: count `+0`, next
  number `+4`, first channel `+0xC`.
- `geSound_FreeSoundDef` is not in the module. Channels are freed only by the loop of 0x5C8CB0,
  reached only from `geSound_DestroySoundSystem` 0x5C7ED0, which only `CAdamSoundSystem`'s
  shutdown 0x54E060 calls (`calls.tsv`: no other caller of any of the three).
- `geSound_LoadSoundDef` 0x5C7F00 has two callers, both in `CAdamSoundDefMgr::CreateSoundDef`
  (0x551DE0, 0x552310); both store the channel's number in the definition object at `+0x1C`
  (0x5520E5, 0x55254F). A definition (vtable 0x64F818, use count `+0x14`, file name `+0x24`) lives
  in the manager's list (`system+0x30`: begin `+0x34`, end `+0x38`).
- `CAdamSoundSystem::RemoveUnusedSounds` 0x550330 walks the list of effects (`system+0x54`: begin
  `+0x58`), erases every sound only the list refers to (use count under 2; with its argument 1
  only those not playing, 0x5530E0) with the list's erase 0x553FD0, and then calls
  `CAdamSoundDefMgr::RemoveUnusedSoundDefs` 0x5525D0, which does the same for definitions. The
  definition's destructor (0x552E20) calls nothing of the engine: the channel stays.
- A second list holds music (`system+0x70`: begin `+0x74`, end `+0x78`; filled by 0x54F910, walked
  by the music volume setter 0x54E5F0). `RemoveUnusedSounds` does not walk it, and no other code
  erases from it before the shutdown 0x54CEB0. So every music that was ever started keeps its sound
  object (vtable 0x64F820) with use count 1, that object its definition, the definition its channel.

Confirmed, runs of the Node runner (`tools/memory-check.mjs`, `tools/memory-plugin.mjs`; every
block of the heap followed from its allocation, by the world it was made in; worlds ended with the
game's own `nextsave`, 300 passes of play in each):

| after | heap in use, original | with the fix | a game started there |
|---|---|---|---|
| Forest, played | 36.7 MB | 36.7 | 36.7 |
| Castle, played | 57.9 | 44.6 | |
| Graveyard, played | 81.9 | 53.6 | |
| Caves, played | 94.5 | 50.8 | |
| Tower, played | 108.4 | 46.7 | 39.4 |
| Tower, at the witch (`trigger_witchmodel`) | 109.2 | 47.5 | 40.2 |
| highest during the run | 109.2 | 68.1 | 40.2 |

- What a change of world leaves in the original (blocks of the world before that are still
  allocated one world later): 16.4 MB after the Castle, 16.9 after the Graveyard, 18.6 after the
  Caves. Of the Castle's 16.4: the music twice (5.0 MB of file bytes, 5.0 MB of buffer), the
  other sounds twice (2.3 + 2.4 MB), 1.5 MB of other blocks.
- After the first change (Forest to Castle) the original's sound manager has 190 channels for 177
  definitions; the 13 without a definition hold 3.1 MB. The Forest's music is in the music list
  with use count 1, not playing; the only words in the game's memory that point at its sound
  object are that list's element and the object's own list link.
- The Tower started again with the game's `restart` ("Ja" on the retry screen): 5.9 MB more each
  time in the original, 0.8 with the fix.
- The witch's door and the witch need 0.8 MB. The heap's free lists were never the problem: at the
  Tower the original has 0.25 MB free inside the heap, in 6,700 blocks.

Inferred: the 158 MB of the report are the five worlds (108 MB after a few seconds in each; a
played world loads more sounds than that) and some deaths with "Ja". Not reproduced to the
megabyte: nobody played the five worlds through here.

### The fix

`releaseSounds` in `source/host/fixes.js`, run from `mainLoop.afterChange`: inside the pass that
changed the sublevel, when `ChangeToSubLevel` has returned, so that the state the game thread
takes of that pass is taken after it.

1. The music list by the rule the game has for its effects: an element only the list refers to
   (use count 1) that is not playing (the game's own 0x5530E0) is erased with the list's own
   0x553FD0, which destructs the sound object and lets go of its definition.
2. The game's own `RemoveUnusedSoundDefs` 0x5525D0, when 1 erased something.
3. Every channel whose number no definition holds: what `geSound_FreeSoundDef` does in Genesis3D:
   the module's own "stop the duplicates" 0x5C8980 and "free the duplicates" 0x5C89A0, `Stop` and
   `Release` of the buffer through its vtable, `geRam_Free` 0x5CF400 of the file's bytes and of the
   channel, the channel out of the list, the count one less.

Inside a world nothing is released: a music that stopped keeps its channel and its buffer, as in
the original (musicContinuity keeps the place of the level's music on that buffer), and a sound
the game asks for again is not read from its file a second time. Nothing is released at the start
or after a restore either, so a restored game goes on exactly as the one that was saved. One
exception, for need: with less than 32 MB of the heap left (`SOUND_NEED`; read from the heap's two
cursors, which are part of a state) the same is done before every pass. That is what relieves a
state made by a build before this fix: one that carried five worlds and five restarts (137.7 MB)
went on with 50.5 MB.

No thunk, no low memory, no part of a state, no change to the game module: states of the build
before this fix stay usable. With the flag off the host does nothing (`307574ef`); the README pair
with the fixes on still prints `8f54e89b`, because a game that never changes its world never gets
here.

### Left as the original has it

- 0.6 to 1.5 MB per change of world, 0.8 MB per restart of the Tower: three bitmaps of the Adam
  layer (`CAdamBitmap`, allocated under 0x50C300) and three of the engine (under 0x5C1140) per
  load, with the driver's texture for each (`THandle_Create`). Who should have freed them was not
  looked for. At that rate the heap's 159 MB hold over fifty more loads after a whole adventure.
- The address space stays 192 MB (`MEM_PAGES` in `tools/recomp/recompile.py`): the module declares
  its memory with that size as its maximum, so it cannot grow while a game runs, and another size
  is another module, which no stored state fits (`host.snap.abi`). With the fix a whole adventure
  peaks at 68 MB of the heap's 159. When the module is next rebuilt for another reason, 4096 pages
  (256 MB) would cost only address space; the VirtualAlloc pages are counted down from the end of
  memory, so every state is lost by it anyway.
- Every DirectSound buffer object takes 16 bytes of the host's low area (0x20000 to 0xF0000, of
  which the handle table has 512 KB) and that is never given back: about 42 objects per load of a
  world (measured) and one per sound that is played while it still plays (read from `dsound.js`,
  not counted in play). 320 KB were left after five worlds (20,000 objects); the game ends with
  "low area full" when they are gone. Not changed here: giving
  the 16 bytes back changes where every later object lands, and so both hashes of the README pair.

Unresolved: a whole adventure played by hand (every number above is 300 passes per world); the
browser (nothing here was run in one: the fix is in the host, which the Node runner shares with
the game thread); whether a level script exists that starts a music again through a sound object
it no longer holds (none can: the list's element is the only pointer, see above, but only the
Forest's music was looked at that way).


# Scenes: how the original runs and ends them, skipping, subtitles

Written 2026-11-14 for two things carried over from the JavaScript port: skipping a scene
("Overslaan") and the readable subtitle box. Addresses are `RcHcGame.dat`'s. C = read in the code
(`../RCSPOOK_NEW/RC_ORIGINAL_DECOMPILED`), S = read in the levels' recovered scripts
(`recovered-scripts/listings/lvl0Na.davi`), R = run in the Node runner or headless Chromium.

## 1. What a scene is in the original

- **A scene is a motion with named moments** (S). Every level has motion objects (`csmc00`,
  `csmc01`, …, `cutscene01`); the level's script answers each named moment of a motion in a
  `MotionCommand(a_Description, a_Time)` handler, which calls a function per motion
  (`CSL000_MotionCommand`, …). The moments are words: `"startcutscene"`, `"stopcutscene"`,
  `"startcamera"`, the id of a line of speech (`"rcgen44"`), `"rcshow"`, and whatever else the
  scene does (doors, gifts, enemies frozen and released).
- **Who starts a scene** (S): the level itself at its start (the opening scenes of the Forest,
  Castle, Graveyard and Caves), or a trigger whose `CommandOnEnter` enables the motion
  (`csmc01_tr` → `csmc01.Enable()`; the fairy's gifts first ask `RcHasAllPotions`).
- **The script calls** (C, registered at 0x56… with their names): `StartCutScene(t)` 0x569ED0 →
  0x4819F0, `StopCutScene(t)` 0x56A0C0 → 0x481B20, `CutSceneSay(id)` 0x56A2B0 → 0x481DD0. The
  listings have as many `StopCutScene` as `StartCutScene` calls in every level: 28, 19, 27, 15, 13.
- **The cutscene object** (C; `CRcCutScene`, vtable 0x64E374, embedded in the player at
  `player+0x258`) only keeps the bars and the line of text:

  | Offset | What |
  |---|---|
  | `+0x14` | time of the running fade in ms (from the script call) |
  | `+0x18` | the line of text, a string: characters at `+0x1C`, length at `+0x20` |
  | `+0x28` | the bars' alpha, 0 to 255 |
  | `+0x2C` | time into the fade |
  | `+0xA8` | state: 0 none, 1 bars coming, 2 running, 3 bars going |
  | `+0xAC`, `+0xB0` | the loaded voice, the playing voice |
  | `+0xB4`, `+0xB8` | a byte and the text object the line is drawn with (both must be set for a line to be drawn) |

  Slot 1 (0x481980, the update) moves 1 → 2 and 3 → 0 when the fade time is over and gives the
  controls back at 3 → 0 (0x480C80). Slot 2 (0x481670) is the draw, section 3.
  `StartCutScene` takes the controls (0x480DC0: HUD off, `player+0x104 = 0`).
- **Nothing ends a scene early** (C, S). No key is read by the cutscene object or its callers,
  no script function stops a motion at its end, and the game's commands (`nextsave` and the
  cheat page) have none for it. A scene ends because its motion reaches the moment
  `"stopcutscene"`, on the game's clock (`timeGetTime`, through `CAdamSubLevel::Update` 0x4F5170,
  which caps a frame at 500 ms and steps in 125 ms: `startup-and-loop.md` 4.3).

## 2. Skipping (`source/host/skip.js`)

Rewritten 2026-11-15 after the owner's verdict on the skip of the day before ("Skipping a
cut-scene like when talking to Fleurifee should skip immediately instead of holding the game on a
black screen for a while"): the black screen stood for as long as the device needed to play the
scene at 33⅓ ms per frame, 0.25 to 3.2 s in Chromium on the desktop and 2.6 to 39 s in Playwright's
Firefox.

**Choice.** The scene is still played to its end by the original code, and no memory of the game
is written. Three things changed:

1. **The clock goes on by half a second per pass** (`SKIP_STEP`, 500 ms) instead of 33⅓ ms.
2. **The engine's `RenderScene` is not run** while a skip runs (host hook `renderscene`).
3. **The picture is not made black.** The canvas keeps the last picture of the scene, under the
   full circle of "Overslaan", until the first picture of the game after the scene.

The skip runs to the pass in which the cutscene's state is 0 again (bars gone, controls back) and
then through the tail below; it also ends when the game leaves the world, when RedCat has no
health, or after five minutes of game time in the scene itself ("Deze scène kan nu niet worden
overgeslagen.").

**The step** (C). `CAdamSubLevel::Update` 0x4F5170 takes the time since its last pass from
`CAdamClock::GetTime` 0x565870 (`timeGetTime`). When more than 500 ms went by it sets its last time
to now − 500, so one pass simulates at most half a second; that span is cut into updates of at
most 125 ms (0x7D), and every object gets `Update(t, step)` once per update (0x502E40). So down to
two passes a second the original loses no game time: a pass is then four updates and one draw.
What follows from the code for such passes:

- A motion (`CAdamModelController::Update` 0x4D23D0) adds the step to its time and walks its
  named moments between the old and the new time in order (0x4D1740), calling the script's
  `MotionCommand` for each: none is lost, and within one motion their order is kept.
- The cutscene's bars (0x481980) and the scene cameras (0x459D40, 0x45A130) add up steps too.
- The `LifeTime` timers (an object's delay in 0x502E40, `CAdamCommandTimer` 0x4DF870, the fairy's
  life) and DirectSound's positions run on the absolute clock and are tested once per update.
  They agree with what adds up steps only while a pass is no longer than 500 ms: a larger step
  gains no passes (a pass still simulates 500 ms) and lets the timers run ahead of the motions
  (R, 2026-11-15, `tools/out/skip3-step/`: at 1000 and 5000 ms the fairy's life ends early
  relative to the scene and sounds change order). 500 ms is therefore the step, exactly.
- Three things count updates or passes and not time, and so depend on the rate: an object's
  "near enough to be updated" byte (`+0xDE`), worked out again at every 14th update (0x440290 →
  0x421560, counter `+0xE0`); the route camera's waypoint index (`+0x510`, at most one further per
  update); and the cutscene's draw 0x481670, which empties the line of text in state 2 once the
  line's voice is over and runs once per pass.

**While RedCat himself is moved** during a skipped scene (his place changes in a pass while the
scene has the controls; with the controls back two passes in a row, because handing them back
drops him onto the ground in one) the passes are 33⅓ ms again for a second of game time after the
last change (`SKIP_FINE_STEP`, `SKIP_FINE_PASSES`). This is the fallback for scenes nobody ran: a
walk, a fall or a ride given by a script is then stepped as it was until 2026-11-15. R: in the 36
scenes of the check it was used for one pass, in the Forest's `csmc11`; in no scene of the check
is RedCat moved while the scene has the controls. No scene needed a smaller step by name.

**The draw** (C). The draw of a pass (`CRcGStateGAME` 0x4848E0) reaches `World_WorldRenderQ`
0x5B8730, which in this order adds one to the world's frame counter, works out what is visible
from the camera's place (`Vis_VisWorld` 0x5D5580), sets up the lights (0x5D34C0), calls
**`RenderScene` 0x5B88D0**, turns the sky, calls the driver's `BeginMeshes` and `EndMeshes`, and
ends the polygons that live one frame (0x5B62F0). `RenderScene` hands the driver one view: the
world's faces, the actors, the polygons, between `BeginWorld` and `EndWorld`; its other caller is a
mirror's view (0x5BB0EB). The hook answers 1 ("drawn") without running it while a skip runs, and
calls the body and nothing else at every other time. Left in on purpose: the frame counter and
`Vis_VisWorld` (the game's coronas ask whether a leaf was seen, `geWorld_MightSeeLeaf` 0x5B9C10 ←
0x57A5B0), and 0x5B62F0 (particles hand in one-frame polygons from their update: R, 2026-11-15,
`tools/out/skip3-cost/`: with the whole world render left out they pile up, 31 MB in the Castle's
scene). Also left in: the HUD, the cutscene's own draw (it empties the line of text), `EndScene`.
Measured and not done: leaving out more of `World_WorldRenderQ` (a lasting difference in the
count of leaf changes, which no run of the original showed), a driver that answers at once (1 to 5
percent with `RenderScene` gone), the sound system's update (changes the run).
R (in-thread timers, Castle's scene, before): the draw was 64 percent of a 33⅓ ms pass, the update
19 percent; a 500 ms pass with four updates and the draw cost 1.7 to 2.6 ms in Chromium, now 1.2
to 2.1 ms.

**The tail: what a scene leaves running** (C, R). The original removes nothing when a scene ends.
`StopCutScene` 0x481B20 only sets state 3 and the fade time; the update 0x481980 goes from 3 to 0
after the fade and gives the controls back. A fairy (`CRcFairy`, vtable 0x64E294) is switched on
by the scene's script ("startfairy" → `Enable`, start 0x47CDB0) and never switched off by it: her
centre (`+0x38C`) and five orbiters (`+0x4490`, 0x144 bytes each, "active" at `+0x6C`) end with
the level's `LifeTime`, the frame 0x479560 in which the centre ends starts the burst of fifty
stars (`+0x548`), stops her idle loop and plays `magiev12`, and the stars live four seconds. A
scene camera with a time limit (camera controller `player+0x250`, mode `+0x450` 7, 8 or 10, time
and limit `+0x508`, `+0x50C`) goes back to the follow camera when its time is up. Both run on the
game's clock, not on the cutscene's state. The skip goes on after state 0 while a fairy that had
anything switched on during the skip still has (`+0x4BE8`, centre, ribbons `+0x4B54`, any of the
55 particles), or a timed camera still runs: 0 to 5 s of game time in the scenes run. It stops
when another scene begins or RedCat's health drops, which is seen at the end of a pass, so up to
half a second of game time late, and after 6 s at most (`SKIP_TAIL_MS`). RedCat has the controls
in the game's memory during the tail, but no input reaches the game. (The JavaScript port removed
the fairies by hand, `finishSkippedFairies`.)

**What the player gets** (`source/web/game.js` `sceneCover`, `scene().held`, `scene().slow`;
`source/web/skip.js`; `worker.js`; `remote.js` `thin`; `dsound.js` `mute`; `audio.js` `hush`). The
moment the hold is complete the page silences everything its mixer plays except the level's music
and takes the subtitle box away; the picture stays. The game thread takes the request before its
next pass (the pass in between does not wait for the display), draws nothing while it skips, and
stops what the sink plays except the level's music, which is left playing (`kept`: no hole and no
jump in it; what is heard of it is then behind the place DirectSound reports, by the game time
skipped). The circle stays full over the held picture until the render worker has drawn the first
frame after the skip (the game thread sends that frame's number with its answer; 500 ms at most).
**A skip that takes long shows a busy sign**: the circle becomes an arc that turns, when the game
thread, after three passes, finds that sixty passes at that cost would take more than 250 ms
(sixty passes are a scene of half a minute; how long the scene still is the host does not know),
or when 250 ms have gone by. When the skip ends, the loops DirectSound has playing are started at
their place and what plays once is left silent; the next pass's scene is the first picture.

Why not otherwise: the JavaScript port replayed the motion's callbacks by hand and needed special
cases for what it had jumped over (gifts, doors, the fairy's light and sound). Calling
`StopCutScene` from the host would take the bars away and leave the motion running: the scene's
later moments would still come, with the player in control. Setting the motion's time to its end
skips every moment in between. The game's own clock speed (`CAdamClock::SetSpeed` 0x565AE0) does
not move the sound positions, which run on `timeGetTime`.

### The standard a skip is held to

Until 2026-11-15 the check demanded the memory of the game played at 30 frames a second, byte for
byte, and every faster way was refused for it. That is stricter than the original is with itself:
whole runs of a scene at 60, 50, 40 and 30 frames a second differ from each other in bytes and in
words of script objects. The standard now: **after a skip the game is in a state the original
reaches by playing the scene at a frame rate it supports, with every value of the game as the
watched scene leaves it, and differences only where runs of the original at different frame rates
differ too.** (Byte equality is still what the save-state pair demands; nothing changed there.)
`node tools/skip-check.mjs` (also `--fixes off`; `--sweep` adds 25 scenes) checks it in three
steps, per scene with eight runs (watched at 60, 50 and 40 frames a second; the skip with
`RenderScene` kept, `host.skip.draw`; the game played with that skip's clock steps without the
skip module, "paced"; the skip; the skip with a recording sink), written down at two game times
that are the same in every run of a scene: one second after the scene and seven seconds after it.

1. **The step alone: byte equality.** The skip that draws and the paced run leave the same memory
   (the host's low memory, the image, the heap, the pages) in the pass of state 0, in the pass
   after the skip and seven seconds after the scene. A skip that draws is the original at two
   passes a second and nothing else.
2. **The draw left out.** The skip against the skip that draws: the same passes, frames and tail;
   RedCat, the fairies, the camera and the sounds playing exactly the same; every object of the
   sublevel's list (424 to 1095) with the same class and the same words of state (`+0x74` to
   `+0x1A0`; RedCat `+0x74` to `+0x310`, what he has, the camera `+0x440` to `+0x520`), but for
   words that are addresses of the game's heaps in both runs. Of the image only the renderer's
   working tables may differ.
3. **Against the watched scene**: RedCat's place (0.01, where the three watched runs agree on
   it), heading, velocity, the controls, health, lives, points, potions, mirror parts, skills, the
   cutscene's state and line, the camera's mode; every object the level's script names (133 to
   705): the same class, and every word on which the three watched runs agree has that value
   after the skip, unless it is of a kind listed below and the paced run has the skip's value.

Result (R, 2026-11-15, fixes on and off): 556 checks each way, 36 scenes (the twelve of before;
with `--sweep` eight more of the Forest's triggers and its motions `csmc11` and `csmc12`, four of
the Graveyard's triggers and its motions `csmc06` to `csmc09`, four of the Caves' triggers and its
`cutscene07`, the Tower's `trigger_cuts02`; the Graveyard's `csmc01_tr` starts no scene from where
RedCat stands). Two of the swept scenes leave the world (Graveyard `csmc08`, like the Castle's).
The sweep starts a scene through its trigger or by enabling its motion with RedCat where the world
put him and 100 potions: what a scene does to a RedCat standing at its own place was run only for
the twelve.

**What differs after the draw is left out, and why it is the renderer's** (step 2; R):

| Where | What | Evidence |
|---|---|---|
| Image 0x6CB000–0x6CF000, 0x720000–0x747B50 | The renderer's working tables: lightmap tables, `RenderScene`'s arrays, the camera's frustum. 0 to 1353 words per scene seven seconds later | Every instruction of the module that names an address there (`assembly.tsv`: 175 functions, and five instructions Ghidra gave no function, at 0x5DE740 to 0x5DF372) is engine code, 0x5B3B90 to 0x5E2000 |
| Image 0x747E88–0x747EA4 | The C runtime's heap words (where the next allocation lands) | Named only by eleven functions of the C runtime, 0x60B25D to 0x6173D5 |
| The game's pages | An actor's render arrays are made at its first draw (7056, 2352 and 5424 bytes behind a 72-byte block), so with the draw left out they are made after the skip and what was allocated in between (the scene's voices) lies elsewhere; a polygon's depth key, written when it is drawn; 0 to 25063 words | Read in three dumps (Forest's gift): the allocator's first pages, addresses into them, eleven 15-word actor records that are zero until the first draw, one float after a polygon's four corners. The watched runs at 60, 50 and 40 frames a second differ among themselves in the same way (`tools/out/skip3-cost/live.mjs`, the Tower) |
| Words of objects that are addresses of the heaps | 0 to 42 per scene | Both values lie in the heaps |
| `CAdamActorParticle` (0x64F8F8: the pieces of the Graveyard's chest) | Compared by number and class only | Its bytes sit in words whose other three bytes nobody sets: they hold what the allocation had there before |

No word of any other object differed in any scene. **Not judged:** the rest of the host's heap and
of the game's pages word by word (the counts are printed); the levels' script variables, which are
not objects of the list: for the step they are inside the byte equality of 1, for the draw they
are only as safe as "the hook runs no game code and `RenderScene` calls none" (C: its callees are
engine functions and the driver).

**What half-second passes change against the watched scene** (step 3). Each kind is in the check
by name (`FREE`: words the original's own runs disagree on, so not compared; `RATE`: accepted when
the paced run has the skip's value), with what was run for it (`tools/out/skip3-impl/honest.sh`:
whole runs of the scene at 60, 50, 40, 30, 25 and 20 frames a second):

| What | Seen in | Evidence |
|---|---|---|
| `CRcMushroomBrutus` (0x64B96C): whether he has taken RedCat as his target (`+0xF8`, `+0x15C`, `+0x160`, `+0x170`, `+0x180`), seven seconds after the scene too | Forest `csmc10` | The runs at 60, 50 and 40 frames a second have him with a target, the runs at 30, 25 and 20 without one: the skip's values word for word |
| A teleporter's three light colours (`CRcTeleporterFX` 0x64E040, `+0x118` to `+0x120`) | Graveyard `csmc03` | Six runs, five different triples (as the fairy's light, already left out) |
| An item's turning matrix and place (`+0x160` to `+0x19C` of 0x64C758, 0x64C638, 0x64C908) | Graveyard `csmc07` | `endhart_1 +0x17C` is 0x3F800000 in some of the six runs and 0x3F800001 in the others |
| The byte `+0xDE` "near enough to be updated", one second after the scene only | Forest `csmc02`, `04`, `09`, `12`, Graveyard `csmc03` | Read: worked out at every 14th update. All six whole runs agree; the paced run has the skip's value; the same again in every run seven seconds after the scene |
| `CAdamEffectSound` (0x64FCE8) `+0x10C` "waiting", `+0x160`, one second after the scene only | Caves (four scenes) | As the row above |
| The scene's last line of text still in memory (`player+0x258+0x1C`) | Seven scenes | Read: the draw 0x481670 empties it in state 2 when the voice is over, once per pass; a half-second pass can hold the voice's end and the scene's. It is never drawn: only state 2 draws a line, after that same test. The paced run has it too |
| A scene camera still on its own timer one second after the scene (mode 10 where the watched scene is at 5) | Forest `csmc02` | The skip is still in its tail there and is written down at the end of a half-second pass. The paced run has it too; the same mode seven seconds after the scene |
| RedCat's height one second after the scene | Forest `csmc02`, Caves (three scenes) | Not compared where the watched runs disagree: −100.59, −97.92 and −101.84 at 60, 50 and 40 frames a second (he sinks onto the ground over some frames), −105.82 in all of them later |
| An address of the heaps where the watched runs have another | Forest `csmc10` (`plant_1 +0xF8`) | Both lie in the heaps; the thing was allocated at another moment |

In the twelve scenes of before only one of these shows (the Caves' `altaar2b +0x160`). **Not
seen in any scene:** a difference in what RedCat has, where he stands seven seconds later, which
objects exist, their classes, a door, a trigger's count or an "enabled" byte.

Other checks of the same run: nothing is started on the sink during a skip, the level's music is
left playing, at the end only loops are started and what plays once is left silent; after the
skip no fairy has anything switched on and no timed camera runs (one tail was given up for another
scene, Forest `csmc11`); a skip asked for while no scene runs is refused and changes nothing; a
skip that reaches its limit stops and the scene plays on to the same end.

**Measured** (R, 2026-11-15; the desktop, RX 6700 XT; Node: the skip's own wall time, best of
three; browsers: headless and silent through `tools/browsers.mjs`, from the completed hold to the
first picture of the game after the scene, one run each; before = the tree as committed that
morning, served beside the new one; `tools/out/skip3-impl/`):

| Scene | Passes: before, now | Node: before, now | Chromium: before, now | Playwright's Firefox: before, now |
|---|---|---|---|---|
| Forest, opening | 223, 16 | 217 ms, 19 ms | 250 ms, 26 ms | 2.6 s, 295 ms |
| Castle, opening | 792, 54 | 966 ms, 88 ms | 973 ms, 95 ms | 12.8 s, 1.3 s |
| Graveyard, opening | 972, 66 | 1.3 s, 125 ms | 1.3 s, 124 ms | 15.3 s, 1.8 s |
| Caves, opening | 1422, 97 | 1.6 s, 168 ms | 1.6 s, 170 ms | 21.6 s, 2.4 s |
| Tower, the guards | 2033, 137 | 2.2 s, 184 ms | 2.1 s, 183 ms | 28.8 s, 2.9 s |
| Forest, first lesson | 3049, 206 | 3.2 s, 232 ms | 3.2 s, 263 ms | 38.9 s, 3.8 s |
| Forest, gift | 658, 46 | 687 ms, 57 ms | 700 ms, 66 ms | 9.0 s, 999 ms |
| Caves, gift | 942, 64 | 1.2 s, 137 ms | 1.2 s, 141 ms | 15.1 s, 2.3 s |
| Castle, gift | 583, 40 | 819 ms, 64 ms | 829 ms, 66 ms | 8.9 s, 950 ms |
| Castle, opening, from its first pass | 853, 59 | 1.1 s, 106 ms | 1.1 s, 99 ms | 12.8 s, 1.3 s |
| Caves, opening, late | 196, 15 | 224 ms, 25 ms | 274 ms, 33 ms | 3.0 s, 454 ms |
| Castle, the scene that ends the world | 226, 18 | 409 ms, 25 ms | 491 ms, 191 ms | 3.9 s, 757 ms |

- Fairy scenes in Chromium: 66, 66 and 141 ms (before 700, 829 and 1219). The longest scene run,
  the lesson of 102 s: 263 ms (before 3.2 s).
- The scene that ends the Castle: the skip itself is over after 25 ms; the rest is the game's own
  fade to the results screen.
- Playwright's Firefox needs 18 to 35 ms for a pass (PLAN.md "Not verified": that build is slow in
  ordinary play as well): 0.3 to 3.8 s, with the scene's last picture held and the busy sign from
  about a tenth of a second on. A release Firefox, Safari and a phone were not measured.
- Pictures (looked at; `tools/out/skip3-impl/shots/*-sheet.jpg`, one every 50 ms from 0.35 s
  before the completed hold): the Forest's gift and the lesson in both engines. Every picture
  between the hold and the game is the scene's last, with its bars and the circle, none black; the
  first picture after it is the game with its HUD, no bars, no fairy, no stars, no subtitle. In
  Firefox the circle is an arc while the skip runs (`firefox-lesson-busy.png`).
- Voice files: a skip reads the scene's remaining voice files (1 to 16, 36 KB to 1.8 MB), each by
  a blocking request. From this desktop's own server that is 5 to 36 ms of the figures above; over
  a real connection it was not measured, and no file is fetched ahead for it.
- `node tools/screens-check.mjs --only skip,touch,pad`: the picture is visible and the circle
  full in every sample while a skip runs, the busy sign only when the skip takes long.

**Keys during a scene** (R, headless Chromium, the Castle's opening scene). Esc does nothing: the
game's menu does not open while a scene runs. P does pause: the game is then inside its pause loop
(0x534D00), which draws frames but ends no pass of the main loop, so a request to skip cannot be
taken (requests are taken between two passes). The page takes such a request back after 0.8 s
(`EV.SKIP` 2, `host.skip.withdraw()`), so that the keys reach the game again; after the pause the
scene can be skipped.

## 3. Subtitles (`source/host/subtitles.js`)

- `CutSceneSay(id)` → 0x481DD0 (C): looks the id up as a key of a section `CUT Scene` (0x5ACAF0;
  inferred: in the language file, where the Dutch lines are), stops the line before it (0x480E10), loads and starts the voice of the same name
  (0x481160 → 0x481180, 0x480FE0), and stores the text with 0x481C30, which stores an empty string
  when the byte `+0xB4` is 0.
- The draw 0x481670 (C; `thiscall(this, one argument)`, `ret 4`; only called through the vtable):
  sets the bars' alpha from the state, draws the two bars (0x5614E0 twice), and in state 2: when
  no voice plays any more (`+0xB0` is 0, or 0x5530E0 says it has ended) the text is emptied; then,
  at 0x481893, the line is drawn (0x514E80, 0x4F07D0, 0x4F0630) if `+0xB4`, `+0xB8` and the length
  `+0x20` are all not 0. `+0xB8` is read in that branch only (0x4818A1, 0x481914, 0x481943).
- So a line shows from its `CutSceneSay` until its voice is over (or the next line), as plain
  letters over the picture: `Game.ini [CUT Scene]` has `TextWidth=500`, `TextHeight=200`,
  `TextBoxY=300`, `FontSize=23`, `FontName=Verdana`, and no box. R (headless Chromium, 1280×720
  wide screen): the line starts 140 pixels from the left edge, about two thirds down, over
  whatever the scene shows (`tools/out/screens-check/subtitle-original.png`).
- **The box** (setting `subtitleBox`, on by default; off is the original's drawing). A host hook
  on the draw (`cutdraw`, `tools/recomp/build.py`): with the setting on, the pointer at `+0xB8` is
  0 for the length of the call and put back before it returns, so the original does everything it
  does, the letters included; the render driver leaves out the polygons the call hands it after the
  two bars (the bars are the two calls of 0x5614E0 at the top of the body, one
  `RenderMiscTexturePoly` each; R: 2 polygons a call without a line, 17 to 196 with one). The line
  is read after the original ran and handed to the page, which shows it in the JavaScript port's
  box (`#subtitle`). With the setting off the host calls the original body and nothing else. R: the
  Forest's and the Castle's lines with their times in the Node runner (`--subtitle-box`): "Waar ben
  ik?" 4.03 to 4.73 s, "Zo, ik ga maar eens rondkijken!" 7.02 to 8.70 s. R: the Castle's opening
  scene with the box and without leaves the same memory (low memory, image, heap and pages,
  compared at passes 600, 1200 and 2500; `tools/fixes-check.mjs --only subtitle`). Until 2026-11-14
  the hook switched the letters' branch off inside the game (the pointer at `+0xB8` was 0 for the
  call): the original's text drawing makes and keeps things, so heap and pages then differed from
  the first line on (4997 words of the heap, 73 of the pages), which the earlier hash did not see.
- Not carried over: the `Say` messages of scripts outside scenes (`CAdamGame::DisplayMessage`
  0x529C90) keep the original's drawing.

## 4. The results screen

- The results screen is the game's own (state 4 at `game+0x98`, the loop 0x52E620) and waits for
  the key of Schieten ("Druk op SCHIETEN om verder te gaan"). R (headless Chromium, the end of
  world 1 made with the game's command `nextsave`): the left mouse button alone, sent as the game
  gets it, does not go on (the state was still 4 two seconds later); the keys of the action Fire
  do. So the page presses those keys for a click or tap on the picture while the state is 4.
- C (read): the screen ends by itself. `CRcGStateRESULTS` (vtable 0x64E520; update 0x4900D0) goes
  through phases at `+0xAC` with a timer at `+0xB0` (length), `+0xB4` (end, `timeGetTime`): the
  length is set to 90000 ms where phase 3, the one that waits for the key, begins, and the state
  says "done" when the phase is past 3 (slot 6, 0x4916D0). R (the reviewers of 2026-11-14, headless
  Chromium, nothing pressed): state 4 left after 89.0 s. `tools/screens-check.mjs` therefore wants
  the screen left within ten seconds of the click or tap.

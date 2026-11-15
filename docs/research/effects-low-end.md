# The original's "Low End PC" switch, and the fairy's effects

Written 2026-11-14. Why Fleurifee had no stars, ribbons or light in the browser, what the original
draws for her, and what else hangs on the same switch. Addresses are in `RcHcGame.dat` unless
`RcHcMenu.dat` is named. **C** confirmed (read in the decompilation or the data, or measured in a
run), **I** inferred, **U** unresolved. The check is `node tools/effects-check.mjs`.

## 1. The cause

Nothing was wrong in the driver, the recorder or the renderer. The game itself did not offer the
polygons: it ran in the state the original calls "Low End PC".

- **C (read)** `CAdamApplication` start-up, 0x4BDE80 at 0x4BE08C to 0x4BE0F8: after the engine is
  initialised the game reads `engine+0x198`. Value 0 or 1: it formats the number 1 and sets the
  application's setting with it; any other value: 0. The setter is 0x5ACDB0; the setting is the
  one registered under the name `IsLowEndPC` (0x4BB0E0, string 0x697660).
- **C (read)** `engine+0x198` is `[Display] Mode` of the player's file: accessor 0x557DC0 registers
  section `Display` (0x6975D8), key 0x6A2430.
- **C (read)** The original menu writes that key: `RcHcMenu.dat` 0x566768 writes `[Display]`
  `Gamma`, `SoftwareOnly`, `Effects` = 3, then the key at 0x5668C0 with the value of the options
  form (the same object whose other fields go to `MusicVolume` and `SoundVolume`), i.e. the
  Beeldkwaliteit choice. When that value is 0 the same function also writes `SoftwareOnly=1` (else 0):
  the lowest choice is software rendering as well. **I** Laag / Normaal / Hoog are 0 / 1 / 2 (the
  order of the labels in `menu.ini`, 68 to 70).
- **C (read, data)** The form's value for a new player is **2**: `RcHcMenu.dat` 0x56B850 fills the
  form (`+0x2C`) from `[DEFAULTSETTINGS] RESOLUTION` with 1 only as the fallback for a missing key,
  and the shipped `Settings\static.ini` (the only file with that section) has `Resolution=2` (line
  439). (Corrected 2026-11-14, second review: an earlier version of this note took the fallback 1 for
  the default.) **I** nothing else changes the form before a new player's file is written; the
  shipped `Player1.ini` (`Mode=2`, `SoftwareOnly=0`) fits. So a new player of the original plays
  **with** the fairy's effects, and the low end is what the original gives after choosing Laag or
  Normaal.
- **C (data)** `Settings\PlayerDef.ini`, from which a new player's file is made, has `Mode=0`. The
  `Player1.ini` that came with the files has `Mode=2`. In the original the menu's write (0x566768)
  comes over the template's value; this port's page copied the template and wrote nothing.
- **C (run)** The page makes players from `PlayerDef.ini` (`applyLaunch` in `source/host/ini.js`),
  so in the browser every game was low end: a state the original only has after a choice in its
  options, not its default. The Node runner plays player 1 with the shipped file,
  so every Node check ran the other path, the save-state pair included. That is why no check saw it.

How the game holds it: the setting's text at `app+0x49C` ("0" or "1"), and the number the code
reads at `app+0x4E8` (0x80000000 until first asked, then `atoi` of the text). It is set once per
start of the game and is part of a save state.

## 2. What the original draws for the fairy (Mode 2)

**C (run, Node, world 1, `csmc01_tr` fired, `tools/effects-plugin.mjs`)**

| | Mode 2 | Mode 0 or 1 |
|---|---|---|
| `IsLowEndPC` | "0" | "1" |
| Orbiters on (`fairy+0x4494 + j·0x144`, byte `+0x68`), ribbon (`+0x4B54`) | 5, 1 | 0, 0 |
| `RenderMiscTexturePoly` with flags 9 (ALPHA, NO_ZWRITE), most in one frame | 239 | 1 |
| the same, mean per frame over the scene's first 10 s | 148 | 0.7 |
| Dynamic lights in the engine's table (`*(world+0x3B0)+0xA64`), most | 4 | 0 |

The opening scenes of the Castle, the Graveyard and the Caves have her too: 243, 249 and 311
polygons with flags 9 in one frame against 1, 13 and 16, and 4 lights against 0, 1 and 0.

What the polygons are (research step of the same day, textures dumped from the game's memory;
the old port's `source/fairy-effects.js` names the same parts from the same code): the core
(`fleuri`, flags 3), the halo (`fleurl8`), two spiral rays (`fleurl7`), five star orbiters with
star particles (`star`), about 200 ribbon quads (`ptrail`, alpha 100 fading over 800 ms) and one
dynamic light. On the low end only core and halo remain.

**The loose stars** (the pool of 50 at `fairy+0x548`, stride 0x144, on: `+0x6C`; spawner 0x47C2B0,
one per 250 ms) are a different thing from the five orbiters, and they are only made **while she
travels**. C (read): the spawner asks `fairy+0x406`, which is byte `+0x7A` of her centre object
(`fairy+0x38C`). That object follows a path (`+0x50` points, `+0x54` the point it flies to; update
0x47E850): the byte is set when she is switched on (0x47E710) and cleared once she is at her last
point and, after that pass's damping (velocity × (1 − dt/2)), slower than 0.5. C (run, Node, Mode 2,
`tools/out/uifairy/fix2/c7a-plugin.mjs`, every pass):

| Scene | Path | Byte set | Most loose stars at once |
|---|---|---|---|
| Caves, opening (`introFF`) | 7 points | 12.7 s, until she rests at the last | 28 |
| Forest, first lesson (`fairy11`), 60 passes a second | 2 points, the first 8 units from where she appears | 2 passes | 0, for the whole scene (101 s, her leaving included) |
| the same at 25 and at 20 passes a second (`--step 40`, `--step 50`) | | 3.2 s | 15 |
| Castle, opening (`fairy1`) | 1 point | 1 pass | 0 |

So the lesson's stars depend on the frame rate **in the original code**: she reaches her first point
in the pass she appears, and in the next pass the test finds the velocity of one pass of
acceleration: 0.24 at 16.7 ms a pass, 0.57 at 40 ms. Under 0.5 the byte is cleared for good; over it
she keeps making stars until she has flown the 75 units to her place and come to rest. The limit is
near 35 ms a pass (28 frames a second). A PC of 2000 below that showed about three seconds of loose
stars at the lesson, a faster one none, and this port at 60 a second none. Nothing the host supplies
is wrong here: the clock step is the only input, and it is the true one. The JavaScript port draws
loose stars for the whole lesson ("a slow particle every 0.25 s"), which no frame rate of the
original gives. U: the burst `0x47C580(-1)` (who calls it, and when) was not followed in code; the
lesson's run had no star in the pool at her leaving, and the Caves' whole opening reaches all 50 at
one moment (`tools/effects-check.mjs`, Node), which a spawner of one per 250 ms cannot do alone.
Seen in the browser: `tools/out/effects/pictures/fix-caves-flight.png`, loose stars behind her. Not compared with the original under Wine (a present-day
machine runs it far above 28 frames a second, so it would show none either).

The fairy's code asks the switch in every one of her functions (0x478A00 load, 0x479560,
0x479870, 0x479A10, 0x47A7B0, 0x47B860, 0x47C580, 0x47C760, 0x47CDB0): **C** that they read
`app+0x4E8`; what each leaves out was not followed function by function, only measured as above.

## 3. What else the switch decides

Sixteen functions read `app+0x4E8`. Nine are the fairy's (section 2). The others:

| What | Where | Status |
|---|---|---|
| **Every game object's range**: `CAdamGO`'s constructor sets `+0xE4` to 2,560,000 (1600²) or, on the low end, 1,000,000 (1000²) | 0x501CB0 (0x4A1C4000 / 0x49742400) | C read. I: `CRcEnemy` 0x4230D1 compares the squared distance with it for byte `+0xDE` (in range). This is game play, not picture; not played |
| Shots | 0x44B130, 0x44C530, 0x44C760 | C read: the constructor only **logs** "Low End PC: Skipping projectile light and trail for the %s", and only with `[Debug] DebugLowEndPC` (`AdamWin.Ini`: 0); in 0x44C530 and 0x44C760 the decompilation shows the value fetched and not used. C run (`tools/effects-plugin.mjs --shoot`, `[Player] Skill=1`, Mode 2 against Mode 1, seven seconds with a shot and a charged shot, calls per frame): the Forest and the Graveyard give the same driver calls in both states (flags 9: 0 and 0; 9.8 and 9.8). The Castle, the Caves and the Tower do not: flags 9 5.9 against 0, 41.2 against 34.4, 38.5 against 25.7, and flags 0 651 against 645 and 998 against 948 in the Castle and the Tower. The shot's own polygons (flags 8) are the same everywhere (1 to 1.4 a frame in both). I: the surplus is the fairy and objects inside the longer range, not the shot. In the pictures of all five worlds the throw, the glow at the hand and the charge look the same, and at a near wall (`--scenes boom2`, `--mode 1` for the other state: the Castle's hall, keys put in by the game thread, no caught mouse) so do the shot in flight and its flash on the wall; RedCat himself is lighter with Mode 2 (5 dynamic lights against 2). Enemy shots and the stronger shots: U |
| RedCat: 0x4318C0, 0x431820, 0x434900, 0x430B00, 0x432420 | | C that they read it; U what they leave out. Nothing was seen of it in the shot pictures |
| Explosions, pickups, portals, coronas, smoke, torch flames (`CRcParticleSystem`) | | I: not behind the switch (no read of `app+0x4E8` in those classes; the spouts' own `DiscardOnLowEndPC` is 0 for all 139 of them according to the old project's audit). Seen: the worlds' starts and the pictures of `tools/torches-check.mjs` did not change in these |

What does change in the pictures outside her scenes: the engine's dynamic-light table holds two or
three more lights with Mode 2, **everywhere in a level, not only near a fairy**. C (run): 3 against
0 at the Forest's and the Castle's start, 3 against 1 in the Graveyard, 2 against 0 in the Caves, 8
against 5 in the Tower; the second review stood at eight places in every world and found the same
surplus at each (Castle 3 against 0 at all eight). RedCat and the ground around him are lighter for
it. I (not read in code): the 1600-unit range also applies to effect objects; the review saw
another set of coronas with a filled position (`+0x1B8`) in worlds 2, 3 and 4. Reading where
`CAdamEffectCorona` and `CRcParticleSystem` use `CAdamGO+0xE4` would settle it. **Cost:** 60 frames
a second on both trees on a desktop's graphics chip, a phone-shaped window included; **no real
phone was measured**, and the Castle and the Tower (most lights and flags-9 polygons) are where to
measure.

## 4. The change

`applyLaunch` writes `[Display] Mode=2` into the player's file before every start
(`source/host/ini.js`). The game then does all of the above itself; the port draws nothing of its
own. The driver's `Init` gets "640x480" for Mode 0, 1 and 2 alike (research step), so nothing else
follows from the value.

`Mode=2` is what the original's menu gives a new player (section 1), so this puts the port where
the original starts; what the browser played until 2026-11-14 (Mode 0: range 1000, no fairy
effects, and in the original software rendering too) was the state of a player who chose Laag. It
stays listed in `docs/intentional-differences.md` for the one thing that does differ: the port has
no Beeldkwaliteit that means what the original's meant (the port's is the drawing size), so Laag
and Normaal of the original cannot be chosen here.

Nothing in what the game computes changed for the runs the checks make: they always had Mode 2.
The save-state pair still prints `8f54e89b` and `307574ef`.

## 5. Measured in a browser (Chromium, 1280 × 960, 2026-11-14)

`node tools/effects-check.mjs`: the Forest, lesson fired from the game thread.

| | after the change | control (Mode 1 put into `ini.js` on its way to the browser) = before the change |
|---|---|---|
| `IsLowEndPC` | "0" | "1" |
| Orbiters, ribbons | 5, 1 | 0, 0 |
| Flags-9 polygons, most in a frame; triangles the renderer got without depth writing | 239; 480 | 1; 4 |
| Pixels more than 40 lighter than the other run's picture of the same moment, per 10000, pictures 1 to 4 | 50, 171, 126, 175 (a second run: 49, 191, 158, 223) | 1, 30, 21, 28 (1, 68, 26, 44) |

Two runs without the effects differ by 0, 0, 15, 16 either way. The check asks for 250 in sum and twice the other direction.
Since the second review each picture is asked for by the game thread at a fixed value of the game's
clock after the trigger and taken with the game paused: before, the check waited by its own clock
and a busy machine (load 14) moved the fairy between the two series (926 against 798: a failure in
one run of two). The verdict that cannot move is the game thread's: setting, orbiters, ribbon,
flags-9 polygons, triangles without depth writing. Pictures: `tools/out/effects/pictures/`
(`before-*`, `after-*`, a sheet per scene; `skill-shotN-*` a shot and a charged shot with and without `-mode0`).
Looked at: the lesson, the Castle's opening, the Tower's start and the shots of worlds 1 to 5, before and after.

## 6. Open

- **Saved games from before the change stay low end.** The setting is in the game's memory, so a
  state saved by a game that started low end continues low end, through changes of world too, until
  that player starts a world from the menu without continuing. Switching a running game was not
  tried: the fairy's orbiters are set up when a level loads (0x478A00), and every object's range is
  set in its constructor, so a game switched in the middle would be neither.
- **This weighs more since the default is known to be 2**: those games are in a state the original
  only had after choosing Laag or Normaal, not in its default.
- Which label is which value (section 1) stays inferred; the default is read (2).
- The lesson's loose stars depend on the frame rate in the original code (section 2): none at 60 a
  second. Whether the port should give what a slow PC of 2000 showed would be a fix of the kind in
  `source/host/fixes.js` (it changes what the game computes); not made.
- The halo's grey, stepped outer edge: the original's, section 7.
- The original was not run for a picture of the fairy; "as the original" rests on the original code
  running here, not on a comparison with the original's screen.
- Against the JavaScript port (`/classic/`, the same trigger fired by that port's own
  `gameplay.trigger`, seven pictures at the same moments: `tools/out/effects/pictures/oldport-lesson-sheet.png`,
  made by `tools/out/effects/old-port-shot.mjs`): the same parts are there, halo, pink rays, star
  orbiters, ribbons. That port shows more loose stars spread around her. Which is nearer to the
  original's screen is not known for the parts both have. The loose stars are settled in section 2:
  the original's code makes none in the lesson at this frame rate, and never for the whole lesson.
- Enemy shots, RedCat's stronger shots and the range's effect on enemies were not played.
- The black area behind the fairy in the lesson's close shot: the original's, section 7.

## 7. Her close-up: the black area behind her and the halo's stepped edge (2026-11-15)

The owner: "Fix the black background and stepped halo edge in her close-up." Both are what the
original draws. The port drew the same; it now draws something better by default, each behind a
flag of `source/host/fixes.js` whose off is the original's picture: `skyBackdrop` and
`smoothSprites` (`?fixes=skyBackdrop=0,smoothSprites=0`). Both act on what goes to the renderer
only; the save-state pair still prints `8f54e89b` and `307574ef`.

### 7.1 Confirmed

- **The original shows both.** The original `RcHcGame.dat` with the original `D3DDrv.dll` under
  Wine (the reference harness, `D3DDrv.Log`: "D3DDrv v100.3 ... W: 640, H: 480, Bpp: 16"), the
  lesson started by putting RedCat on the trigger `csmc01_tr`: every close shot has the black area
  between the orange slab of sky, the trunks and the ground's edge, and a grey halo with two
  stepped contours (`tools/out/halohud/research-halo/orig-lesson/`, side by side with the port in
  `crops/cmp-orig-vs-port.png`; looked at).
- **The black area is the cleared frame buffer.** In that view the engine hands the driver no
  polygon for those pixels but the fairy's own: one frame of driver calls (`frame-plugin.mjs` there)
  has 718 polygons, no fog, `BeginScene` with clear, and the sixteen sky polygons (misc, flags 18,
  the 256 × 256 sky bitmaps) all above line 135. The sky box is only drawn through world faces
  marked as sky: `RenderSkyThroughFrustum` 0x5BB340 clips the box's faces to such a face's outline
  and calls the driver's slot 0x80 with FLUSH, and CLAMP unless the sky's scale is over 1. Behind
  her there is neither a world face nor a sky face.
- **The whole sky box of a view is in memory before the world is drawn.** `RenderScene` 0x5B88D0
  clears a local `SkyInfo` and calls `SetupSkyForScene` 0x5BA160, which clips the six faces to the
  camera's view (0x5BA250): number of polygons at `+0x10C`, camera-space vertices at
  `+0x110 + k * 0x78` (12 bytes each), texture coordinates at `+0x3E0 + k * 0xF0` (0x18 each),
  vertex counts at `+0x980`, the box's face at `+0x998`. It then calls 0x5B8B40 with the camera,
  the frustum and that SkyInfo, whose first act is the driver's `BeginWorld` (0x5B8B5E, after
  `SUB ESP,0x6A0; PUSH EBP`): at the driver, `[esp]` is 0x5B8B61, `[esp+0x6A8]` 0x5B8964,
  `[esp+0x6AC]` the camera and `[esp+0x6B4]` the SkyInfo. Read at run time in all five worlds
  (`tools/out/halohud/fix-halo/sky2-plugin.mjs`): always that return address, depth counter
  0x722F24 zero, the SkyInfo 0xD0C above; one to three polygons in the Forest, Castle, Graveyard
  and Tower, none in the Caves (no sky textures: all six indices -1). A face's texture: index at
  `*(*0x6CC41C + 0x18) + 0xF4 + face * 4` (the table 0x5BA250 tests), bitmap by 0x5D40F0
  (`*(*(*0x6CC40C + 0x1C8) + 4) + 0x40 + index * 0x4C`), driver handle at `bitmap + 0xAC`
  (0x453600); in the lesson these are the handles the engine's own sky polygons come with.
  Projection: 0x5C9330 / 0x5C92E0 (`x = cam[0x28] + X * cam[0x24] / -Z`,
  `y = cam[0x2C] - Y * cam[0x24] / -Z`, `z = -Z * cam[0x11C]`, 0.092 here).
- **The halo's steps are in the bytes the engine writes.** The halo is one misc polygon (flags 3,
  vertex alpha 200) with `fleuri.bmp` (128 × 128, white) and its alpha bitmap `fleuri_A.bmp` (8
  bits, 239 different values). The driver offers 565, 4444, 565 with a colour key, a 565 lightmap
  and 1555 (`genesis-driver.md` 6.2, the original's list), so a bitmap with an alpha bitmap gets
  4444. Texture bytes in game memory against the original files
  (`tools/out/halohud/fix-halo/verify-q.mjs` on the dumps in `research-halo/frame/`): for `fleuri`,
  `fleurl7`, `fleurl8`, `Star`, `RcSdw` and `PTrail`, every texel's alpha is the file's palette
  grey `>> 4` and every colour channel the file's `>> 4`, no texel different. Sixteen levels; the
  outermost one is a ring some nine texels wide that covers 30 screen pixels in the close-up.
  `webgl.js` adds nothing to that: 8 bits per channel from `level * 17`, bilinear, no alpha test.
- Offering another format (32-bit ARGB) makes the engine write the file's alpha exactly, but
  changes game memory (the pair then prints `4ab0554f`): not done.

### 7.2 What the port does now

- **`skyBackdrop`** (`gdriver.js`, `BeginWorld`): when nothing of the scene is on the picture yet,
  not inside a mirror's scene, the polygons of that SkyInfo are drawn at once, projected as the
  camera projects, without depth test or write, with the fog every misc polygon gets. Everything
  the game draws comes over it; the engine's own pieces of sky land on the same pixels with the
  same texels. Where the original shows the clear colour in a world with a sky, the sky shows. The
  Caves have no sky and are unchanged. It reads game memory and writes none.
- **`smoothSprites`** (`source/host/smooth.js`, called from `pixels()` for a 3D handle of 4444):
  per channel, level `a` stands for the file's values `16a` to `16a + 15`. A texel whose eight
  neighbours are within one level of it is averaged with them a quarter of the level's width times
  (8 to 32), kept inside its sixteen values; one closing pass does the same for texels with
  neighbours within two levels. Any other texel keeps `a * 17`. So a texel never leaves what the
  game's data says (largest change 15 of 255), and an edge of three levels or more is untouched.
  Game memory keeps its 4444 bytes. Switching the flag in a running game uploads every texture again.

### 7.3 Measured

- Against the 88 original alpha bitmaps that are 8-bit (`tools/out/halohud/fix-halo/eval2.mjs`,
  `eval4.mjs`; error against the file, root mean square over a bitmap, of 255):

  | | alpha | colour where the file's alpha is over 0 |
  |---|---|---|
  | `level * 17` (the original's picture) | 4.72 | 5.79 |
  | smoothed | 4.43; 46 bitmaps better by 0.25 or more, 17 worse | 5.01; 58 better, 10 worse |
  | every texel free to move, same passes | 6.64; 10 better, 68 worse | 6.51 |

  `fleuri_A`: 5.89 to 3.25; along a row from the middle outwards the file has `95 86 79 74 70 66
  62 58 55 50 45 40 37 35 33 31 30 28 26 25 23 22 20`, the surface `85 85 68 68 68 68 51 51 51 51
  34 34 34 34 34 17 17 17 ...`, the smoothed bytes `95 86 79 74 71 67 63 61 57 52 47 46 43 39 36
  31 31 30 28 26 24 22 21`. Bitmaps that are noise in alpha (smoke, shot trails) get slightly
  worse by this measure (at most 15 of 255 per texel, by construction).
- Every 4444 texture of each world, before and after (`tex-plugin.mjs` there, sheets
  `tools/out/halohud/fix-halo/tex/lvl0Na-sheet.png`): 133 to 142 different ones per world, six
  unchanged (cut-outs with alpha 0 or 15 only, and flat ones), largest change 15. Looked at: the
  Forest's sheet (explosions, coronas, stars, the potion's ring, smoke, the shadow): shapes and
  edges as before, the rings inside soft sprites gone.
- Cost, Node runner, 40 s of each world with a renderer that takes every texture: the driver's
  calls take 110 to 170 ms more in all; a texture is converted when it is first drawn (5 to 12
  per world in that time, a 256 × 256 one about 35 ms once), and none again while its bytes stay.
- The lesson in Chromium (1280 × 960, `tools/effects-check.mjs`), four series: black pixels
  around the halo 0.3 to 0.9 percent with `skyBackdrop`, 22 to 45 without; the halo's edge
  (`haloPicture` in the check) 2 to 3 with `smoothSprites`, 6 to 8 without, with and without
  the sky behind it. On the code of before both checks fail (33.5 22.4 36.6 30.2 44.7 percent
  black; edge 6.6), now 0.3 to 0.9 and 2.0. With the sky behind her the lesson's light stands out
  less against the control (section 5's measure: 184 to 205 in five series, the control 7 to 12 the
  other way), so that check now asks for 80 instead of 150. Pictures looked at: `tools/out/halohud/fix-halo/pics/` (`on-`, `off-`,
  `skyonly-`, `smoothonly-`) and the crops beside them.
- **The halo is not in every frame** (review, 2026-11-15; confirmed). In the Node runner at 60
  passes a second, counted from the halo's first frame in the lesson, the game draws the halo's
  polygon for 242 frames, leaves it out for 8, draws it 76, out 26, 44, out 5, 76, out 35, 23, out
  16, 76, out 28 (`tools/out/halohud/fix-review/frames-plugin.mjs`; 537 of 834 frames of the ten
  seconds measured, with the flags on and off alike). In a frame without it her 128 × 128 light
  sprite (flags 9, vertex alpha 180, drawn every frame) shows as a cyan disc or a swirl instead.
  Which of the two a picture at a fixed moment shows differs from run to run, so **picture 6 of
  the lesson (and 4, 7) must not be used to compare flags on and off**: compare pictures that have
  the halo. The check's verdicts on the close-up were built on the seven fixed pictures and had 2
  to 5 of them with a halo over nine runs, where three are asked for (one false failure). Now the
  game thread takes four more pictures (`-c1` to `-c4`), each in the first frame from its moment on
  in which the halo is drawn close up, and every picture is of the very frame the game thread
  stopped itself in (it sets the pause itself at `EndScene`; before, the page paused it some frames
  later). Six runs: eight close-ups each (`02 c1 03 c2 04 c3 05 c4`), black 0.4 to 1.0 percent,
  edge `1 2 2 2 2 1 2 2`; with `smoothSprites=0` `0 7 7 6 7 0 5 7`, with both off `0 7 7 7 6 0 7
  7` and 22 to 45 percent black. Pictures 02 and c3 read 0 or 1 either way (the halo at its
  largest and low in the picture: only rays over the orange sky stay in the band, whose blue is 0;
  the steps are there to the eye, `tools/out/halohud/fix-review/pair02.png`), so the verdict is
  the median over the close-ups (2 against 7; limit 4.5), no longer the mean (1.9 against 4.9 to 5.1).
- **What smoothing does at alpha 0 and 255** (review, `tools/out/halohud/review-halo/bias-plugin.mjs`,
  every 4444 level of the five worlds): largest change 15, mean change of alpha +0.26 to +0.32; 16
  to 18 percent of the texels with alpha 0 become 1 to 15 and 12 to 14 percent of those with 255
  become 240 to 254, only beside texels of level 1 or 14 (the rule above); the Forest's foliage
  cut-out (handle 5857, flags 2) has 82.6 percent of its alpha-0 texels raised, to 4.9 on average.
  Looked at: the Forest's start at the same value of the game's clock with the flag on and off
  (`tools/out/halohud/fix-review/trio01.png`, `grass.png`): pixels that differ by more than 3
  percent are at the fairy only (1353 of 1.2 million), no box or fringe elsewhere.

### 7.4 Inferred

- A PC of 2000 showed the steps too: the 4444 choice is the engine's and the driver's, whatever
  the card; a 16-bit frame buffer with dithering would add its own banding. Wine's software
  Direct3D is not such a card.
- The hole is the level's as seen from that scripted camera (no sky brush and no world face that
  way, or none in the camera leaf's visible set).
- The scale that decides CLAMP in 0x5BB340 (`[sky + 0x370]`, four bytes before its texture table at
  `+0x374`) is the float four bytes before the table at `+0xF4` that the port reads; it is 0 in the
  four worlds with a sky and the engine's own sky polygons arrive with CLAMP.

### 7.5 Not established, not done

- Why the level has the hole (its BSP faces that way were not listed), and whether other places
  have one: wherever the original shows black past the level in a world with a sky, the port now
  shows sky.
- No picture of the original on hardware of its time.
- The backdrop against the engine's own sky polygons was compared in pictures of the lesson (no
  seam at the orange slab), not pixel by pixel; with fog on (no world with a sky was seen with fog)
  and in a mirror's scene (left out on purpose) it was not seen at all.
- The file's own 8 bits could be read from game memory instead of being reconstructed, if the
  engine keeps them after attaching a bitmap (the Genesis 1.1 source does); the bitmap's layout was
  not worked out, and a handle does not say which bitmap it belongs to.
- The halo polygon writes depth where its texels are see-through (flags 3, no alpha test), in the
  original as here: what that hides was not looked at.
- Real phones: the one-time cost of a 256 × 256 texture there is unmeasured.
- Why the game leaves the halo's polygon out for stretches (7.3), and why the light sprite under it
  is a disc in one frame and a swirl in another: not traced in the game's code. The same happens
  with both flags off, so it is not the port's change.
- The raised alpha of see-through texels (7.3) was looked at in one picture of the Forest; which
  polygons use the foliage texture 5857 and how they look close up was not established.


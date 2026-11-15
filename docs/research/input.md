# Input: what the original does, and what this port adds

Written 2026-11-14 for the controls carried over from the JavaScript port. Addresses are
`RcHcGame.dat`'s. C = confirmed by reading the code, R = confirmed by a run in the Node runner or
in headless Chromium, I = inferred, U = unresolved. Check: `node tools/input-check.mjs`.

## 1. The original's own input

| Finding | Evidence | |
|---|---|---|
| The move vector of a frame is made from input actions that are held or not: `MoveForward` / `MoveBack` give z −1 / +1, `MoveLeft`, `TurnLeft`, `MoveRight`, `TurnRight` give x −1 / +1, `MoveDown` / `MoveUp` give y. | `CRcInput` slot 1 `0x482110` | C |
| **A joystick is digital.** The poll `0x5A6440` calls `joyGetPosEx` and hands X, Y and the buttons to `0x5A61F0`, which stores four booleans: X or Y beyond centre ± range × 0.1 (the constant `0x3FB999999999999A`, set in `0x5A5DD0`), and ten button bits. Nothing of the game sees the axis values. | `0x5A61F0`, `0x5A6440`, `0x5A5DD0` | C |
| The only fractional move vector the original can make is its mouse mode (`CRcInput+0x46` set, `+0x45` clear): mouse deltas × 0.125 go into x and z. | `0x482147`–`0x4821EC` | C |
| **The steering throws the size away.** `0x434F20` only tests the signs of x and z, turns RedCat towards "camera forward", 45° beside it or 90° beside it, and writes a new move vector of whole numbers with `0x437770`: (0, 0, −1) forward, (0, 0, 1) back. So neither a joystick nor the mouse mode gives a gradual walk or a free direction outside lock-on. | `0x434F20`, `0x434430` | C |
| **The action `Walk` does nothing.** The walk speeds (`0x6B92C0`, `0x6B92C4`) are chosen when the input object's slot 11 answers true (`0x4DAD62`); that slot is `0x53DC80`, which returns 0. | `docs/research/cheats-and-player.md` 1.5 | C |
| | Up, and Up with Alt (the shipped key of `Walk`), both cover 3.699 units a pass; the walk byte stays 0 and the speeds stay 156.8 / 144 | R |
| In the game's own menu page Spelbesturing the action `Walk` is called **Ontwijken**. Its shipped key Alt is also the key the sidesteps are made with (`MoveLeft=Alt+Left`). | screenshot `tools/out/input-check/spelbesturing.png` | R |
| The speed of a frame: move vector × `RunOtherSpeed` (144), and for a forward part × `RunForwardSpeed` (156.8); rotated by the heading; plus what the level adds (`player+0x1B4` × world scale); then `CRCPlayer::Move`. | `0x4DAD83`–`0x4DAE67` | C |
| The heading turns by `min(1, dt × rate)` of the difference, rate 6.1 with a forward or back part and 2.4 without, and jumps onto the target within π/8, but only in part of the cases: the comparison is made after fix-ups that add 2π to one side. Held Up+Right from a heading of −90°, RedCat never jumps onto the target; he keeps closing a tenth per pass. | `0x43468A`–`0x434800`; run: `tools/out/input-check/k-up-right.json` | C, R |

So PLAN.md's former next action 6 ("gradual stick movement through the original joystick path, if
its mapping allows") is answered: it does not. `winmm.js` still answers `joyGetDevCapsA` and
`joyGetPosEx`, and the platform still reports no joystick.

## 2. Key bindings

| Finding | Evidence | |
|---|---|---|
| `Settings\Player<N>.ini [KeyBinds]`: one line per action, `Action=Key[+Key][,Key[+Key]…]`. Action names are `Game.ini [InputActions]` (30), key names `Game.ini [InputKeys]` (90: no U, no numpad). | the files | C |
| Several keys per action work, and a combination is only that combination. | run: `MoveForward=Up,W,Shift+T` walks with Up, with W and with Shift+T, not with T alone | R |
| The lines are read when a world is set up: `0x4D5E74` → `0x53DC20` (input object + 0x14) → `0x544B80` → `0x540F80(player file, "KeyBinds")`. | code | C |
| The game keeps the INI files it has read in one object (`CDaviIniFileSystem`, pointer at `0x6CA01C`). Only three functions touch that pointer: `0x5AD130` and `0x5AD1A0` make the object when there is none, `0x5A4480` deletes it (called when the game ends, `0x5924A2`). | code | C |
| Calling the loader alone after the file changed keeps the old keys; `0x5A4480` first, then the loader: the new key walks and the old one does not. | `input-check.mjs`, "a state continued after the player changed a key" | R |
| The game's own page Spelbesturing shows the lines as they are, several keys too ("Vooruit: Omhoog,W"), for Schieten, Spring, Ontwijken, Vooruit, Achteruit, Draai links / rechts, Stap links / rechts, and on its second page Menu, Pauze, Stoppen. | screenshots | R |
| What that page writes when a key is changed there, and whether it keeps a second key of the action. | not run | U |
| A mouse button bound to an action (`Jump=Space,RightMouse`, shipped) did not make RedCat jump in the Node runner, although the host reports the button as a key that is down. Whether the original needs its mouse to be "allowed" for that, or the host answers something wrong, was not looked up. | run | U |
| The original menu program had a form for these lines (`TfrmKeyConfig`; `menu.ini` strings 6, 13, 14, 19–28: "Toetsen instellen", "De toets %s wordt al gebruikt! Kies een andere toets.", "Je hebt een ongeldige toets gekozen.", "Er zijn toetsen dubbel toegewezen, verander dit eerst.", Vooruit, Rechts, Achteruit, Links, Schieten, Springen, Ontwijken). The form itself was not decompiled. | `menu.ini` | C, I |

## 3. What the port adds

### 3.1 Gradual movement and walking slowly (`source/host/move.js`)

Two host hooks (`tools/recomp/build.py`, `GAME_HOOKS`, both `late` and `guarded`), each of which
calls the original function and nothing else unless a stick is deflected or walk is held:

- **`steer`, `CRCPlayer` slot 24 `0x434430`.** The original runs first. When it took its steering
  branch (told by its static at `0x6B52BC`, which only that branch writes) and no target is locked,
  the heading it stored is replaced by the JavaScript port's rule (`touchSteer` in its
  `native-camera.js`): target = the stick's direction relative to the camera, at any angle; within
  45° of straight back RedCat keeps facing away and backs up; he turns by
  `min(1, dt × 6.1 × max(0.35, deflection))` of the difference and jumps onto the target within
  π/8. "Forward" and "left" are the two vectors the original takes from the engine camera's matrix
  (`0x434F20`: up and −right, flattened). The move vector is left as the original wrote it. With a
  locked target the original's heading stays and the move vector becomes the stick's direction in
  RedCat's own frame (the original leaves the raw vector there too).
- **`move`, `CRCPlayer::Move` `0x435490`** as called from the player's update (`0x4DAE67`): the
  part of the velocity that comes from input is multiplied by the deflection, and by 96 / 156.8
  while walk is held. The original's own walk table is not used: it would back up faster (156.8)
  than running (144).

Measured (Node runner, world 1, `tools/out/input-check/*.json`): stick straight forward and
straight back at full deflection put RedCat pass by pass where the Up and Down keys put him;
half deflection gives 0.500 of the run, forward and back; walking slowly 0.612; both together
multiply; the move vector stays (0, 0, ∓1); targets at 45°, 30° right and 20° left of "camera
forward" to 0.01°; the first pass of 45° turns exactly as the original's Up+Right; a light push
turns at 0.35 of the full rate. With nothing held the pair prints the original game's hash (`307574ef` with `--fixes off`; `4bcff851` under the hash of before 2026-11-14, which did not cover the pages with the game's own heap).

Different from the original on purpose: the jump onto the target within π/8 is made always (the
JavaScript port's rule), where the original makes it in part of the cases. Different from the
JavaScript port: there only the touch stick was gradual in third person; here the controller's left
stick is too (the owner asked for both). The d-pad and the keyboard are the original's.

Not looked at: the walk animation's speed (it is the original's whatever the speed over the
ground), free flight with a stick beyond a short run, lock-on with a real target.

### 3.2 The keys (`source/web/keybinds.js`, `source/menu/key-menu.js`)

The form **Toetsen instellen** (Instellingen → Meer instellingen → Toetsen) writes the player's
own `[KeyBinds]` lines. That was chosen over a table of the page in front of the game because
there is then one list: the form and the game's Spelbesturing page show and change the same
lines, the controller and the touch buttons press the keys the file names for an action
(`game.input.vks`), and nothing has to be translated. What it costs:

- A save state holds the game's bindings in memory. When a state is continued and the menu's
  lines differ from the state's, the file gets the menu's (`kernel32.js`, `MENU_KEYS`) and the
  host drops the game's INI objects and calls its loader before the next pass (`move.js`,
  `host.keysChanged`). With equal lines nothing is called, so the README pair is unchanged.
- The form only works from the main menu; over a running game it points to Spelbesturing.
- The action "Rustig lopen" is the game's dead action `Walk` ("Ontwijken" in Spelbesturing): the
  page watches the keys bound to it and asks the host to walk slowly (`SET.WALK`).
- "Camera wisselen" has no action in the game and is kept in the port's settings (`keys.camera`).

A new player starts with the original's keys and the JavaScript port's next to them
(`MoveForward=Up,W`, `MoveBack=Down,S`, `MoveLeft=Alt+Left,A`, `MoveRight=Alt+Right,D`,
`Walk=Shift`). `Walk` moved from Alt to Shift because Alt is also the sidestep key: with Alt,
Alt+Left would step aside slowly.

### 3.3 Controller, touch, hints

`source/web/gamepad.js`, `touch.js`, `hints.js`, `stick.js`; rules and wording from the JavaScript
port (`docs/controller-support.md`, `docs/touch-controls.md`, `touch-intro-hint.js` there). All of
it was only played to the page in headless Chromium: no real controller, no real touch screen.

## Review of 2026-11-14

- Confirmed (read): `PlayerDef.ini` has `Walk=Alt`, `MoveLeft=Alt+Left`, `MoveRight=Alt+Right`, and
  the action Walk does nothing in the original (section 2), so Alt+Left is a sidestep at full speed
  there. The page watched every key of Walk, Alt too, for a player whose file still had these lines
  next to one changed key (the adoption only took files that were exactly the shipped set): his
  sidesteps were slowed to 0.612. Now a key of Walk that another action uses inside a combination is
  not watched (`walkKeys` in `source/web/keybinds.js`), and the adoption moves `Walk=Alt` to Shift
  for such a file when Shift is free. Run: the pure functions under Node, and the file after a
  reload in headless Chromium (`tools/input-check.mjs`). The slowed sidestep itself was read from
  the code, not measured.
- The mark that the players of before were given their keys was `v: 2` inside the settings'
  default value, so a visitor who never stored a setting read it as set and his players kept the
  arrows alone, while the hint and the help page named W, A, S, D and Shift. The mark is `v: 3`
  now and only exists once it was written.
- The camera key is kept per player (`keys.cameraBy`).
- "A controller is in use" was the menu's `body.controller-input`, which is only kept up while the
  menu or a dialog is in front: over a game started with the mouse X did not skip a scene and the
  hint was the keyboard's. `gamepad.inUse` (`source/web/gamepad.js`) is set by a button or a stick
  and taken away by a real key press or pointer. Run with a controller played to the page.
- The left mouse button was not covered by a check: `tools/input-check.mjs` now tells the page the
  canvas has the pointer and reads the keys the button holds (`game.input.mouseKeys()`).

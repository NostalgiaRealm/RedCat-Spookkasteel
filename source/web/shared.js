// Layout of the memory shared between the page, the game worker and the render worker.
// From FRAMES on: what the render worker tells the game thread, which cannot receive messages
// (source/render/remote.js). FRAMES: frames drawn; DEAD: the render worker failed; WIDTH, HEIGHT,
// SAMPLES, MAX_SAMPLES: the drawing size in use; RESTORED: counts WebGL contexts that came back
// after a loss; BUSY: the share of the last second, in percent, the graphics chip was at work
// (webgl.js takeBusy; read by the page). SCENE and GSTATE: what the game thread tells the page every frame
// (worker.js): the cutscene's state (0 none, 1 bars coming, 2 running, 3 bars going) plus 4 while a
// scene is being skipped (source/host/skip.js), 64 while that skip is taken for long on this device (worker.js), 8 while the game is in a loop of its own and in bits 4 and 5
// which (1 its menu, 2 its pause, 3 its retry screen, 0 another), and the game's own state (3 a world is played, 4 the
// results screen, 7 the retry screen).
export const CTRL = { TICK: 0, IN_WRITE: 1, IN_READ: 2, PAUSED: 3, ANSWER: 4, CLOSE: 5, SAVE: 6, FRAMES: 7, DEAD: 8, WIDTH: 9, HEIGHT: 10, SAMPLES: 11, MAX_SAMPLES: 12, RESTORED: 13, BUSY: 14, SCENE: 15, GSTATE: 16, MODE_W: 17, MODE_H: 18 };      // MODE_W, MODE_H: the size of the game's screen in use, written by the game thread every frame (source/host/shape.js)
export const RING = 1024, REC = 5;
// record types in the ring: input, and commands from the page
export const EV = { MOVE: 1, DOWN: 2, UP: 3, KEYDOWN: 4, KEYUP: 5, ACTIVATE: 6, WHEEL: 7, SETTING: 8, CHEAT: 9, LOOK: 10, STICK: 11, SKIP: 12 };      // LOOK: to the right and downwards, in millionths of a radian; STICK: a movement stick, to the right and forward, in ten-thousandths (source/host/move.js)
// (EV.SKIP: 1 skip the scene that runs, 2 take that request back if it was not taken yet, 0 stop skipping)
// EV.SETTING ids (value in the next field)
export const SET = { SIZE: 1, MSAA: 2, STATS: 3, FIRST_PERSON: 4, FIX: 5, WALK: 6, SUBTITLES: 7, VOLUME: 8, SHAPE: 9, HUD_LIFT: 10 };      // SHAPE: another size of the game's screen, width and height (source/host/shape.js); HUD_LIFT: lines of the game's screen the HUD's bottom group is lifted on a high screen (gdriver.js hudLift);          // VOLUME: 0 the music, 1 the effects (0..100 in the next field), 2 write both to the player's file (source/host/volume.js);          // SIZE: the drawing's width and height in pixels (two fields); first person 1 or 0; FIX: the number of a flag of source/host/fixes.js (its place in FIX_NAMES) and 1 or 0; WALK: walking slowly, 1 while held; SUBTITLES: the readable subtitle box, 1 or 0 (source/host/subtitles.js)
// EV.CHEAT ids
export const CHEAT = { SUPPLIES: 1, FLIGHT: 2, GOD: 3, MENU: 4 };          // same ids as source/host/cheats.js

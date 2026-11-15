// The page side of the game: starts the game thread and the render thread that draws its frames
// on the page's canvas, plays its sound, feeds input, keeps save states. A menu (or the simple
// start card) drives everything through the exported `game` object; no game code runs on the page.
//
//   await game.ready
//   game.players, game.settings          see players.js and settings.js
//   await game.start({ player, world, difficulty, adventure, resume, flight })
//   game.onExit = (how, info) => ...     'exit' (the game quit) or 'crash'
//   game.stop()                          asks the game to quit, as closing its window would
//   game.save()                          takes a save state now (also F5, every minute (every three on a phone), when the page is hidden and when the world changes)
//   await game.saveInfo(player)          { savedAt, world, adventure, difficulty } or null; game.onSaved / event 'recomp-saved'
//   await game.reload()                  loads the saved place of the game that runs (also F9); game.reload({ recovery: 'r2' }) an older one
//   await game.recoveryInfo(player)      the older saved places of a player's adventure: [{ id, minutes, savedAt, world }]
//   await game.loadRecovery(player, id)  makes one of them the saved place (then start with resume: true)
//   event 'recomp-save-skipped'          { why: 'dead' | 'quit' }: a state that was asked for is not taken now (worker.js onPass)
//   await game.forgetSnelspel()          deletes what Snelspel games left behind (a tab closed in the middle of one)
//   game.notice, event 'recomp-notice'   a line the player is shown without a question (a saved place that could not be used)
//   game.setPaused(bool)                 for a dialog over the game; no input reaches a paused game
//   game.cheats.supplies() / .flight(on) / .god(on) / .originalMenu(on); game.cheats.state = { world, flight, god, menu, potions, mirror, score }
//   game.input.key(vk, down) / .mouse(dx, dy) / .button(n, down)     for touch and gamepad code
//   game.input.stick(x, y) / .walk(source, on) / .vks(action)        a movement stick, walking slowly, the keys the player's file has for an action
//   game.hint(text, ms)                  a line that teaches something; never in place of a notice
//   game.scene()                         { cut, skipping, held, slow, nested, own, state }: the cutscene's state, a skip that runs, the game inside a loop of
//                                        its own and which ('menu', 'pause', 'retry', or '' for any other), the game's state (shared.js SCENE, GSTATE)
//   game.skipScene()                     skips the scene that runs (source/host/skip.js); events 'recomp-skip' { result }, 'recomp-subtitle' { text }
//   game.maxSamples()                    the most anti-aliasing samples this device draws with, or 0 while that is not known
import { CTRL, RING, REC, EV, SET, CHEAT } from './shared.js';
import { createAudioSink } from './audio.js';
import { gameFiles } from './files.js';
import { store } from './persist.js';
import { players, WORLD_NAMES } from './players.js';
import { settings } from './settings.js';
import { phone } from './device.js';
import { STATE_ABI } from '../host/snapshot.js';
import { FIX_NAMES, fixFlags } from '../host/fixes.js';
import { RECOVERY, planRotation, minutesAgo } from './recovery.js';
import { readBindings, vksFor, walkKeys, defaultBindings, cameraKeysOf, bindingLabel } from './keybinds.js';

let canvas = document.getElementById('screen');
const stage = document.getElementById('stage');
const baseUrl = new URL('.', document.baseURI).href;
// the recompiled game module and its lists: next to the scripts, wherever these are served from
const gameUrl = new URL('../../game/', import.meta.url).href;

let ctrl = null, ring = null, worker = null, audio = null, tickHandle = 0;
// The render worker (render-worker.js) draws on the canvas. A canvas can be handed to a worker only
// once, so the worker is kept for all games of this page; should it fail, the next game gets a new
// canvas element and a new worker.
let painter = null, canvasGiven = false;
let logicalW = 640, logicalH = 480;          // the game's screen in use (the game thread reports it: CTRL.MODE_W, MODE_H)
let starting = false;       // between game.start() and the game thread existing, and while a game is started anew
// What an error in the running game leads to: set per game in begin() (a continued game that fails starts the world instead).
let crashed = (d) => { window.__crash = d; end('crash', d); };
let leaving = () => {};       // set per game in begin()
window.addEventListener('pagehide', () => leaving());
// Two reasons to stop the game thread: the page is hidden, or the caller asked (a dialog over the game).
// blur: the window is not the one in front (another program, another window of the browser).
const pause = { hidden: false, user: false, blur: false };
const paused = () => pause.hidden || pause.user || pause.blur;
/** A scene is being skipped: the game thread says so every frame. */
const skipping = () => !!ctrl && (Atomics.load(ctrl, CTRL.SCENE) & 4) !== 0;
const keysDown = new Set();
const push = (type, a = 0, b = 0, c = 0, d = 0) => {
  if (!game.running) return;
  // no input reaches a paused game: it would all be played out when the game goes on
  // nor a scene that is being skipped: it must end as it does without anybody at the keys
  if ((paused() || skipAsked || skipping()) && type <= EV.WHEEL && type !== EV.KEYUP && type !== EV.UP) return;
  if (type === EV.KEYDOWN) keysDown.add(a); else if (type === EV.KEYUP) keysDown.delete(a);
  if ((type === EV.KEYDOWN || type === EV.KEYUP) && walkVks.has(a)) walkBy('key' + a, type === EV.KEYDOWN);
  const w = Atomics.load(ctrl, CTRL.IN_WRITE);
  const o = (w % RING) * REC;
  ring[o] = type; ring[o + 1] = a; ring[o + 2] = b; ring[o + 3] = c; ring[o + 4] = d;
  Atomics.store(ctrl, CTRL.IN_WRITE, (w + 1) | 0);
};

// --- picture size -----------------------------------------------------------------------
// The game works in a screen of the picture's shape: 480 lines high and 640 to 1280 wide for a
// picture of 4:3 or wider (854 for 16:9), 640 wide and 480 to 1706 high for one that is higher (a
// phone held upright, 412 x 915: 640 x 1422). The short side is always the original's, so the
// game's own 2D keeps the original's size on it (gdriver.js hudShape) and the view from top to
// bottom keeps the original's angle (ini.js fieldOfView): the JavaScript port's two rules (its
// hud.js hudViewport, its main.js resize()). Shapes beyond 8:3 and 3:8 get the nearest of these and
// bars. The drawing resolution is a separate matter: the renderer scales the game's coordinates to
// whatever size is asked. The size is chosen when a game starts and follows the window while it
// runs (source/host/shape.js: between two passes of the game's main loop).
const MODE_SHORT_W = 640, MODE_SHORT_H = 480, MODE_MAX_W = 1280, MODE_MAX_H = 1706;
// What the browser keeps free of the picture's box on a screen held upright (the notch, the home bar): env() can only be read through an element.
let safeProbe = null;
const safeInsets = () => {
  if (!safeProbe) {
    safeProbe = document.createElement('div');
    safeProbe.style.cssText = 'position:fixed;left:0;top:0;width:0;height:0;visibility:hidden;pointer-events:none;padding:env(safe-area-inset-top,0px) env(safe-area-inset-right,0px) env(safe-area-inset-bottom,0px) env(safe-area-inset-left,0px)';
    document.documentElement.appendChild(safeProbe);
  }
  const c = getComputedStyle(safeProbe), n = (v) => Math.max(0, parseFloat(v) || 0);
  return [n(c.paddingTop), n(c.paddingRight), n(c.paddingBottom), n(c.paddingLeft)];
};
/**
 * The part of the stage the picture may take, in CSS pixels: [width, height, top, left]. All of it
 * for a stage of 4:3 or wider (as it always was); a higher one leaves the safe-area insets free, so
 * that the game's HUD, which is drawn into the picture's top, is not under a notch.
 */
const pictureBox = () => {
  const w = stage.clientWidth, h = stage.clientHeight;
  if (!w || !h || w * 3 >= h * 4) return [w, h, 0, 0];
  const [t, r, b, l] = safeInsets();
  return [Math.max(1, w - l - r), Math.max(1, h - t - b), t, l];
};
const outputSize = () => {
  const r = settings.get('resolution');
  const m = /^(\d+)x(\d+)$/.exec(r || '');
  const dpr = window.devicePixelRatio || 1, box = pictureBox();
  let w = m ? Number(m[1]) : Math.round(box[0] * dpr), h = m ? Number(m[2]) : Math.round(box[1] * dpr);
  if (!w || !h) { w = 1280; h = 960; }
  return [w, h];
};
/** The game's screen for a picture of w x h. */
export const modeFor = (w, h, wide = true) => {
  if (!wide || !(w > 0) || !(h > 0)) return [MODE_SHORT_W, MODE_SHORT_H];
  if (w * 3 >= h * 4) return [Math.max(MODE_SHORT_W, Math.min(MODE_MAX_W, Math.round(MODE_SHORT_H * w / h / 2) * 2)), MODE_SHORT_H];      // from 4:3 up to 8:3
  return [MODE_SHORT_W, Math.max(MODE_SHORT_H, Math.min(MODE_MAX_H, Math.round(MODE_SHORT_W * h / w / 2) * 2))];                          // down to 3:8
};
const chooseMode = () => modeFor(...outputSize(), !!settings.get('widescreen'));
/**
 * The picture inside w x h: the game's shape, as large as fits. The game's long side is a whole even
 * number (854 for 16:9), so its shape can be a fraction off the window's; the picture then fills
 * the window instead of leaving a line of it open (1920x1079 in a 1920x1080 window).
 */
const fitInto = (w, h) => {
  const kw = w / logicalW, kh = h / logicalH, k = Math.min(kw, kh);
  return Math.abs(kw - kh) <= 0.004 * k ? [w, h] : [logicalW * k, logicalH * k];
};
// The JavaScript port's budget for phones (its androidRenderSize with a short edge of 540): the
// automatic resolution draws at most 540 lines and at most 960x540 pixels, about 1.7 times the
// original's 640x480, whatever the screen has. It reached 30 frames per second there where the
// screen's own resolution gave 10 to 15 (that port's docs/mobile-performance.md).
const PHONE_SHORT_EDGE = 540;
/**
 * The size of the drawing in pixels. This, and nothing else, is where a budget may be applied:
 * outputSize() also decides the shape of the game's screen (chooseMode). The budget of a phone
 * counts the short side and the number of pixels, so it is the same for a picture held upright.
 */
const drawSize = () => {
  let [w, h] = fitInto(...outputSize());
  const res = settings.get('resolution') || '';
  // "auto" follows the window, but not beyond 2560x1440 worth of pixels (a 4K monitor would
  // otherwise draw four times as much for little gain), and on a phone not beyond the budget
  // above. A chosen resolution is taken as given, and so is "full" on a phone: every pixel of the screen.
  if (!/^\d+x\d+$/.test(res) && !(phone && res === 'full')) {
    let cap = Math.sqrt(2560 * 1440 / (w * h));
    if (phone) cap = Math.min(cap, PHONE_SHORT_EDGE / Math.min(w, h), Math.sqrt(PHONE_SHORT_EDGE * 16 / 9 * PHONE_SHORT_EDGE / (w * h)));
    if (cap < 1) { w *= cap; h *= cap; }
  }
  // the render scale, between a quarter of and eight times the game's own screen
  const k = Math.max(0.25 * logicalW / w, Math.min(8 * logicalW / w, settings.get('renderScale') / 100));
  return [Math.max(1, Math.round(w * k)), Math.max(1, Math.round(h * k))];
};
const layout = () => {
  const [bw, bh, top, left] = pictureBox();
  let [w, h] = fitInto(bw, bh);
  w = Math.floor(w); h = Math.floor(h);
  canvas.style.width = w + 'px';
  canvas.style.height = h + 'px';
  // A picture higher than 4:3: what the page lays over it is placed by where the picture really is
  // and by the size the game's 480 lines have in it (public/index.html --pic-top, --pic-h, --pic-u;
  // the style sheets' own values are for a picture of 4:3 or wider). The insets move it off the stage's middle.
  const root = document.documentElement, tall = onStage && logicalH > MODE_SHORT_H;
  const y = top + (bh - h) / 2, x = left + (bw - w) / 2;
  canvas.style.transform = tall && (top || left || stage.clientWidth !== bw || stage.clientHeight !== bh) ? `translate(${x - (stage.clientWidth - w) / 2}px, ${y - (stage.clientHeight - h) / 2}px)` : '';
  root.classList.toggle('pic-tall', tall);
  for (const [name, v] of [['--pic-top', y], ['--pic-h', h], ['--pic-u', h * MODE_SHORT_H / logicalH]]) { if (tall) root.style.setProperty(name, v.toFixed(2) + 'px'); else root.style.removeProperty(name); }
  sendHudLift();
};
// On a high screen the HUD's bottom group (the enemy's portrait and hearts) is lifted over the touch
// controls, as the JavaScript port did (its hud.js bottomInset): the page says how many of the game's lines.
let liftSent = -1, onStage = false;          // onStage: a game has the canvas, from its start (the loading screen is the game's own) to its end
const sendHudLift = () => {
  if (!game.running) return;
  let lines = 0;
  if (logicalH > MODE_SHORT_H && document.documentElement.classList.contains('touch-shown')) {
    // the stick's upper edge (touch.css: its size, 18 pixels or the safe area from the bottom), 10 pixels of air, in lines of the game's screen above the picture's bottom
    const c = canvas.getBoundingClientRect(), vmin = Math.min(window.innerWidth, window.innerHeight);
    const stickTop = stage.clientHeight - Math.max(18, safeInsets()[2]) - Math.max(120, Math.min(190, 0.34 * vmin)) - 10;
    if (c.height) lines = Math.round((c.bottom - stickTop) * logicalH / c.height);
    lines = Math.max(0, Math.min(logicalH - 300, lines));
  }
  if (lines === liftSent) return;
  liftSent = lines;
  push(EV.SETTING, SET.HUD_LIFT, lines);
};
// The game's screen follows the picture's shape while a game runs: asked of the game thread, which
// changes it between two passes (source/host/shape.js) and reports the size in use; the page lays the
// picture out by what is in use, so until then the old shape is shown whole, with bars, never stretched.
let shapeTimer = 0, shapeSent = 0;
const sendShape = () => {
  clearTimeout(shapeTimer);
  if (!game.running) return;
  const [w, h] = chooseMode(), size = w * 65536 + h;
  if (size === shapeSent) return;
  shapeSent = size;
  push(EV.SETTING, SET.SHAPE, w, h);
};
const sendShapeSoon = () => { clearTimeout(shapeTimer); shapeTimer = setTimeout(sendShape, 250); };
/** Every display tick: has the game thread another screen than the page lays out? */
let touchSeen = false;
const followMode = () => {
  const w = Atomics.load(ctrl, CTRL.MODE_W), h = Atomics.load(ctrl, CTRL.MODE_H);
  const touch = document.documentElement.classList.contains('touch-shown');
  if (touch !== touchSeen) { touchSeen = touch; sendHudLift(); }          // the touch controls came or went (touch.js)
  if (!w || !h || (w === logicalW && h === logicalH)) return;
  logicalW = w; logicalH = h;
  layout(); sendScale();
  window.dispatchEvent(new CustomEvent('recomp-mode', { detail: { width: w, height: h } }));
};
// The drawing size follows the window. Every change of it makes the renderer build its buffers
// anew (tens of megabytes), so a size that did not change is not sent again, and while a window is
// being dragged only the size it ends at is.
let scaleSent = 0, scaleTimer = 0;
const sendScale = () => {
  clearTimeout(scaleTimer);
  const [w, h] = drawSize(), size = w * 65536 + h;
  if (size === scaleSent || !game.running) return;
  scaleSent = size;
  push(EV.SETTING, SET.SIZE, w, h);
};
const sendScaleSoon = () => { clearTimeout(scaleTimer); scaleTimer = setTimeout(sendScale, 150); };
window.addEventListener('resize', () => { layout(); sendScaleSoon(); sendShapeSoon(); });
settings.onChange((key, value) => {
  if (key === 'resolution' || key === 'renderScale' || key === 'msaa') quality.reset();
  if (key === 'resolution' || key === 'renderScale') sendScale();
  if (key === 'resolution' || key === 'widescreen') sendShapeSoon();
  else if (key === 'msaa') push(EV.SETTING, SET.MSAA, value);
  else if (key === 'volume' && audio) audio.setMasterVolume(value / 100);
  else if (key === 'showFps') push(EV.SETTING, SET.STATS, value ? 1 : 0);
  else if (key === 'fullscreen') { fsLeft = false; applyFullscreen(); }
  else if (key === 'subtitleBox') { push(EV.SETTING, SET.SUBTITLES, value ? 1 : 0); if (!value) setSubtitle(''); }
});
// Full screen follows the setting, which is on unless somebody switches it off: the original always
// ran full screen, and the JavaScript port had it on. A browser only allows entering it from a
// click or key press, so it is asked for where the player gives one: Start! in the menu
// (source/menu/menu.js), and the first click or key press in a running game (below), which is what
// a game started without a click gets (a continued game after the page was opened again).
// Not every browser can (Safari on an iPhone has no full screen for a page), and an older one
// answers without a promise: whatever happens here, a game must still start.
// A player who leaves full screen (Esc, F11) is left alone for the rest of that game: it is not
// asked for again until the next game starts or the setting is touched, and the setting stays on.
// Firefox takes the mouse back when full screen is entered (seen in Playwright's Firefox 146: the click
// that caught the mouse and asked for full screen gave lock, no lock, full screen within 5 ms). That is
// not the player's Esc: asking for full screen marks itself as the page's own (`ownExit`), and a mouse
// that was let go within a second of that (`fsTookMouse`) is asked for again once full screen is there
// (`mouseBack`; a browser that refuses gives it at the next click). A browser that keeps the mouse, and
// a full screen entered from a key press or a tap, get nothing of this.
let fsLeft = false, fsOwnExit = 0, fsAsked = -1e9, fsTookMouse = false;
const mouseBack = () => {
  if (!fsTookMouse || !document.fullscreenElement) return;
  fsTookMouse = false;
  if (!game.running || paused() || performance.now() - fsAsked > 3000 || !settings.get('mouseLook') || !canvas || document.pointerLockElement || !canvas.requestPointerLock || document.querySelector('dialog[open]')) return;
  try { const p = canvas.requestPointerLock(); if (p && typeof p.catch === 'function') p.catch(() => {}); } catch (e) { /* refused: the next click asks */ }
};
const canFullscreen = () => typeof document.documentElement.requestFullscreen === 'function' && document.fullscreenEnabled !== false;
const applyFullscreen = () => {
  const want = !!settings.get('fullscreen'), root = document.documentElement;
  try {
    let asked = null;
    if (want && !document.fullscreenElement) { if (canFullscreen()) { ownExit = fsAsked = performance.now(); fsTookMouse = false; asked = root.requestFullscreen({ navigationUI: 'hide' }); } }
    else if (!want && document.fullscreenElement) { if (typeof document.exitFullscreen === 'function') { fsOwnExit = performance.now(); asked = document.exitFullscreen(); } }
    if (asked && typeof asked.catch === 'function') asked.catch(() => {});
  } catch (e) { /* refused: the game runs in the window */ }
};
// The first click or key press in a game that is not full screen yet. Listened for on the window, after the
// canvas' own handler has asked for the mouse (a browser gives one click to one request, and looking around
// comes first). Not for Esc, Tab, the function keys and keys with Ctrl, Alt or the system key, not while a
// dialog of the port is open, and never from a made-up event.
const fullscreenGesture = (e) => {
  if (!game.running || fsLeft || !settings.get('fullscreen') || document.fullscreenElement || !canFullscreen()) return;
  if (e.isTrusted === false || e.ctrlKey || e.altKey || e.metaKey || document.querySelector('dialog[open]')) return;
  if (e.type === 'keydown') { if (e.repeat || /^(Escape|Tab|Shift|Control|Alt|Meta|CapsLock|NumLock|PrintScreen|F\d+)$/.test(e.key || '')) return; }
  else if (e.button > 0) return;
  applyFullscreen();
};
window.addEventListener('click', fullscreenGesture);
window.addEventListener('keydown', fullscreenGesture);
document.addEventListener('fullscreenchange', () => {
  layout(); sendScaleSoon(); sendShapeSoon();
  if (document.fullscreenElement) { mouseBack(); return; }
  const own = performance.now() - fsOwnExit < 1000;
  if (game.running && settings.get('fullscreen') && !own) fsLeft = true;
  // the Esc that left full screen never reached the page: the game gets it, and opens its own menu
  if (!own) swallowedEscape();
});

// --- what a browser keeps from the page: Esc, and the window in front ----------------------
// Esc is the browser's own key for giving the mouse back and for leaving full screen, and the page
// does not get it then: the game would run on with the mouse gone, as the owner found on the live
// site of the JavaScript port. So when the mouse is let go or full screen is left while a game
// runs, not by the page itself and with the window still in front, the game is given that Esc:
// what it does with it is the original's business in every state (its menu opens in a world; in
// its menu it goes one page back). Once per 300 ms: one key press can end both.
// A window that is no longer in front makes the game wait, as a hidden tab does and as the
// original does when another program comes to the front (it stops handling its states,
// window+0x59, docs/research/startup-and-loop.md 3.2). It goes on when the window is back.
let ownExit = 0, escAt = 0, escSeen = 0;
function swallowedEscape() {
  const now = performance.now();
  if (!game.running || paused() || document.hidden || !document.hasFocus() || now - escAt < 300 || now - escSeen < 300) return;
  escAt = now;
  push(EV.KEYDOWN, 0x1B, 27);
  setTimeout(() => push(EV.KEYUP, 0x1B), 100);
  window.dispatchEvent(new CustomEvent('recomp-escape'));
}
document.addEventListener('pointerlockchange', () => {
  if (document.pointerLockElement) return;
  if (mouseFire.length) { for (const vk of mouseFire) push(EV.KEYUP, vk); mouseFire = []; }
  if (performance.now() - fsAsked < 1000) { fsTookMouse = true; mouseBack(); }          // taken by the browser as full screen came (see applyFullscreen)
  if (performance.now() - ownExit > 1000) swallowedEscape();
});
document.addEventListener('pointerlockerror', () => { if (game.running) showHint('Klik in het spel om rond te kijken.', 5000); });
window.addEventListener('blur', () => { if (!game.running || document.hasFocus()) return; pause.blur = true; applyPause(); window.dispatchEvent(new CustomEvent('recomp-blur', { detail: { paused: true } })); });
const unblur = () => { if (!pause.blur) return; pause.blur = false; applyPause(); armNotice(); window.dispatchEvent(new CustomEvent('recomp-blur', { detail: { paused: false } })); };
window.addEventListener('focus', unblur);
// (a browser that does not say the window is back: a key or a click in the page says it as well)
for (const type of ['pointerdown', 'keydown']) window.addEventListener(type, (e) => { if (pause.blur && e.isTrusted !== false) unblur(); }, true);

// --- the readable subtitle box --------------------------------------------------------------
// With the setting `subtitleBox` the game does not draw the line of a scene itself; the game thread hands it
// over when it appears and when it goes (source/host/subtitles.js), and it is shown here as the JavaScript
// port showed it: a dark, rounded box near the bottom, up to 900 pixels wide, in larger letters.
const subtitleEl = document.createElement('div');
subtitleEl.id = 'subtitle'; subtitleEl.setAttribute('role', 'status'); subtitleEl.hidden = true;
document.body.appendChild(subtitleEl);
function setSubtitle(text) {
  text = settings.get('subtitleBox') !== false && !skipAsked ? String(text || '') : '';
  if (subtitleEl.textContent !== text) subtitleEl.textContent = text;
  subtitleEl.hidden = !text;
  window.dispatchEvent(new CustomEvent('recomp-subtitle', { detail: { text } }));
}

// The most anti-aliasing samples the device draws with. The render worker says so once it has a context
// (CTRL.MAX_SAMPLES); before the first game the page asks a context of its own, once, and gives it back
// (the one of offscreenWebGL2 below when that was asked first, which it is on the menu's page: one
// context of the page's own, not two).
let pageSamples = null;
function maxSamples() {
  const live = ctrl ? Atomics.load(ctrl, CTRL.MAX_SAMPLES) : 0;
  if (live > 0) return (pageSamples = live);
  if (pageSamples !== null) return pageSamples;
  pageSamples = 0;
  try {
    const gl = (typeof OffscreenCanvas === 'function' ? new OffscreenCanvas(1, 1) : document.createElement('canvas')).getContext('webgl2');
    // (given back on purpose, see offscreenWebGL2: Firefox writes "WebGL context was lost" in the console for it)
    if (gl) { pageSamples = gl.getParameter(gl.MAX_SAMPLES) | 0; const ext = gl.getExtension('WEBGL_lose_context'); if (ext) ext.loseContext(); }
  } catch (e) { /* not known */ }
  return pageSamples;
}

// --- phones: frame rate and quality, as in the JavaScript port ---------------------------
// (its render-quality.js). A 90 or 120 Hz phone would otherwise draw the whole game up to twice as
// often, heating it into throttling: display frames between 60 Hz deadlines are skipped. The game
// thread runs one frame per tick it is given; its own clock is the real time either way.
const limiter = phone ? {
  interval: 1000 / 60, due: -Infinity,
  ready(now) {
    if (now < this.due - 1.5) return false;
    this.due += this.interval;
    if (this.due < now) this.due = now + this.interval;          // after a slow frame the cadence starts anew instead of catching up
    return true;
  },
} : null;
// On every device, a desktop too (as the JavaScript port did; only the 60 frames per second limit above is a phone's):
// When the game draws fewer than 30 frames per second for three seconds in a row, the render scale
// goes down by 25 points (not below 25) and anti-aliasing off, and both are kept as the settings,
// so the menu shows what is in use. The first two seconds of a game, and after a pause or a change
// of these settings, do not count. Unlike the JavaScript port's, this only acts when the graphics
// chip was at work for at least half of the time (`busy` in the statistics, measured by the render
// worker: webgl.js takeBusy). A world that is loading, a processor too slow for the game itself,
// and a display that gives few ticks (a phone saving power shows 30 a second, and less in a window
// that is partly covered) also give few frames, and a smaller picture helps none of them. The game
// thread's own waiting does not tell these apart: a chip that cannot keep up slows the display's
// ticks down, so that thread waits for the display in both cases.
const quality = {
  warm: 2, low: 0,
  reset() { this.warm = 2; this.low = 0; },
  sample(d) {
    if (!game.running || paused() || skipping()) { this.reset(); return; }        // (every device, as in the JavaScript port; until 2026-11-14 a phone only)
    if (this.warm > 0) { this.warm--; return; }
    this.low = d.fps < 30 && d.busy >= 50 ? this.low + 1 : 0;
    if (this.low < 3) return;
    const scale = settings.get('renderScale'), msaa = settings.get('msaa');
    this.reset();
    if (scale <= 25 && !msaa) return;
    console.info(`[beeld] minder dan 30 beelden per seconde: renderschaal ${scale}% -> ${Math.max(25, scale - 25)}%, anti-aliasing uit`);
    settings.set('renderScale', Math.max(25, scale - 25));
    settings.set('msaa', 0);
  },
};

// --- notices ----------------------------------------------------------------------------
// A line for the player that needs no answer, over the loading screen and the picture: it stays
// until the game has shown its world for NOTICE_MS with the page in view, long enough to read it.
// The time counts from the first report of this game thread that says a world is there (`worldSeen`),
// not from the game running: a world may take longer to load than the line stays, and the line was
// gone before the player saw anything but the loading screen. (Frames drawn say nothing: the loading
// screen draws some twenty.) A game that never reports a world arms it after WORLD_WAIT_MS all the same.
const NOTICE_MS = 12000, WORLD_WAIT_MS = 60000;
let worldSeen = false, worldTimer = 0;
const noticeEl = document.createElement('p');
noticeEl.id = 'game-notice'; noticeEl.setAttribute('role', 'status'); noticeEl.hidden = true;
document.body.appendChild(noticeEl);
let noticeTimer = 0;
const hideNotice = () => { clearTimeout(noticeTimer); noticeEl.hidden = true; };
const armNotice = () => { clearTimeout(noticeTimer); if (!noticeEl.hidden && game.running && worldSeen && !document.hidden) noticeTimer = setTimeout(hideNotice, NOTICE_MS); };
const showNotice = (text) => {
  game.notice = { text, at: Date.now() };
  noticeEl.textContent = text; noticeEl.hidden = false; noticeEl.classList.remove('hint');
  armNotice();
  if (game.onNotice) game.onNotice(text);
  window.dispatchEvent(new CustomEvent('recomp-notice', { detail: { text } }));
};
// A line that teaches something (source/web/hints.js). It never takes the place of a notice: with one on
// screen the hint is not shown, and a notice that comes while a hint shows replaces it.
const showHint = (text, ms = 10000) => {
  if (!noticeEl.hidden || !game.running) return false;
  noticeEl.textContent = text; noticeEl.hidden = false; noticeEl.classList.add('hint');
  clearTimeout(noticeTimer);
  noticeTimer = setTimeout(() => { noticeEl.classList.remove('hint'); hideNotice(); }, ms);
  window.dispatchEvent(new CustomEvent('recomp-hint', { detail: { text } }));
  return true;
};
// the places as the menu names them (source/menu/menu.js)
const PLACES = ['Het Bos', 'Het Kasteel', 'Het Kerkhof', 'De Grotten', 'De Toren'];
/** What the player is told when his saved place cannot be used. kind 'version': made by another build; else: unreadable or it did not work. */
const lostText = (kind, world) => (kind === 'version' ? 'Je opgeslagen plek past niet meer bij deze versie van het spel.' : 'Je opgeslagen plek kon niet meer geladen worden.') + ` Je begint ${PLACES[world - 1] || PLACES[0]} opnieuw.`;

// --- save states: one per player and kind of game, kept compressed in IndexedDB --------
// Keys of the store: 'player<n>' the saved place of the player's adventure; 'player<n>.quick' that
// of a Snelspel, which only serves the Snelspel that runs (F5 and F9, a tab that comes back) and
// goes when it ends, so that a Snelspel never costs the place in the adventure; 'player<n>.r1',
// '.r2', '.r3' older places of the adventure (recovery points, recovery.js), when the setting
// `recovery` is on.
// A record: { v: RECORD, build, savedAt, size, launch, logicalW, logicalH, data }: the gzip of what
// snapshot.js packs, its length before packing, the launch and screen size of the game that
// saved it (logicalH only when it is not 480: a record of before 2026-11-15 has none), and the build that game ran on. data is a Blob: the state arrives from the game thread
// in pieces, is compressed as a stream and kept by the browser, so that neither the 45 MB nor
// their gzip are ever one array in the page's memory (a phone has little to spare, and saves just
// when the page is hidden). Where a Blob cannot be stored (WebKit in a private window), and in
// records written before 2026-11-14, data is a Uint8Array; both are read.
//
// A state can only be continued by the build that made it (source/host/snapshot.js), and a record
// may be anything: written by an older page, cut off, damaged. None of that may ever reach the
// player as an error. A state that cannot be used is deleted, he gets the world his own progress
// says (the caller's arguments, which the menu takes from Player<N>.ini; never the launch kept
// with the state) and a line that says so:
//  - readState(): the record's shape and its build, before anything is unpacked or started. The
//    menu asks through saveInfo(), so it never promises a place that will be thrown away.
//  - gunzip(): gzip carries a checksum and a length; the length is compared with the record's.
//  - the game thread, before the game runs and again where the main loop stands: the state's own
//    identity, parts and sizes ('restore-failed', worker.js). Nothing is written before these pass.
//  - loading itself failing, or the continued game ending in an error before it has run for
//    PROVEN_MS: the world starts instead of the error dialog. Only in that last case the state
//    may be good (the fault could be anything), so it is kept for one more try and deleted after
//    the second in a row; a page that died twice while continuing counts the same.
const DB = 'rcspook-recomp', STORE = 'states', RECORD = 2;
const PROVEN_MS = 10000;
const MAX_STATE = 256 * 1048576;
/** One request in a transaction of its own; the connection is closed again. Rejects on an error, an abort (full storage) or a store that is not there. */
const withStore = (mode, request) => new Promise((res, rej) => {
  let open;
  try { open = indexedDB.open(DB, 1); } catch (e) { rej(e); return; }
  open.onupgradeneeded = () => { if (!open.result.objectStoreNames.contains(STORE)) open.result.createObjectStore(STORE); };
  open.onerror = () => rej(open.error || new Error('IndexedDB'));
  open.onblocked = () => rej(new Error('IndexedDB is bezet'));
  open.onsuccess = () => {
    const d = open.result;
    const fail = (e) => { d.close(); rej(e || new Error('afgebroken')); };
    let t, r;
    try { t = d.transaction(STORE, mode); r = request(t.objectStore(STORE)); } catch (e) { fail(e); return; }
    // (a request whose transaction was aborted before it finished has no error to read: asking throws)
    const why = () => { try { return t.error || r.error; } catch (e) { return null; } };
    t.oncomplete = () => { d.close(); res(r.result); };
    t.onerror = () => fail(why());
    t.onabort = () => fail(why());
  };
});
const dbGet = (key) => withStore('readonly', (s) => s.get(key));
const dbPut = (key, value) => withStore('readwrite', (s) => s.put(value, key));
const dbDel = (key) => withStore('readwrite', (s) => s.delete(key));
/** A record's data, whichever form it has, as a Blob; null when it is neither. */
const blobOf = (data) => (data instanceof Blob ? data : data instanceof Uint8Array ? new Blob([data]) : null);
const canPack = typeof CompressionStream === 'function' && typeof DecompressionStream === 'function';
const slot = (player, kind = '') => 'player' + (player || 1) + (kind ? '.' + kind : '');
const kindOf = (launch) => (launch && launch.adventure === false ? 'quick' : '');
const KINDS = ['', 'quick', ...RECOVERY.slots];
/** Several records in one go: an array in the order of the keys, undefined where there is none. */
const dbGetMany = (keys) => new Promise((res, rej) => {
  let open;
  try { open = indexedDB.open(DB, 1); } catch (e) { rej(e); return; }
  open.onupgradeneeded = () => { if (!open.result.objectStoreNames.contains(STORE)) open.result.createObjectStore(STORE); };
  open.onerror = () => rej(open.error || new Error('IndexedDB'));
  open.onblocked = () => rej(new Error('IndexedDB is bezet'));
  open.onsuccess = () => {
    const d = open.result, out = new Array(keys.length);
    try {
      const t = d.transaction(STORE, 'readonly'), s = t.objectStore(STORE);
      keys.forEach((key, k) => { s.get(key).onsuccess = (e) => { out[k] = e.target.result; }; });
      t.oncomplete = () => { d.close(); res(out); };
      t.onerror = t.onabort = () => { d.close(); rej(new Error('afgebroken')); };
    } catch (e) { d.close(); rej(e); }
  };
});
const dbKeys = () => withStore('readonly', (s) => s.getAllKeys());

// What this build is, as far as the page can know before a game thread exists: the game module's
// lists (spook.meta.json names the translated module by its hash, every import and hook) and the
// host's hand-kept state number. The game thread's own, finer identity is inside the state.
const hex = (buffer) => [...new Uint8Array(buffer)].map((b) => b.toString(16).padStart(2, '0')).join('');
let buildAsked = null;
/** The list, asked for again when the server refuses for a moment (after 0.3, 0.6 and 1.2 s), as the game thread does for its files. */
const fetchMeta = async () => {
  for (let attempt = 0; ; attempt++) {
    let status = 0;
    try { const r = await fetch(gameUrl + 'spook.meta.json'); if (r.ok) return await r.arrayBuffer(); status = r.status; } catch (e) { status = 0; }
    const passing = status === 0 || status === 408 || status === 429 || status >= 500;
    if (!passing || attempt >= 3) throw new Error(status ? 'HTTP ' + status : 'geen antwoord');
    await new Promise((done) => setTimeout(done, 300 << attempt));
  }
};
const buildId = () => buildAsked || (buildAsked = fetchMeta()
  .then((bytes) => crypto.subtle.digest('SHA-256', bytes))
  .then((sum) => hex(sum).slice(0, 16) + '.' + STATE_ABI)
  .catch((e) => { buildAsked = null; console.warn('[opslag] de versie van het spel is niet te bepalen', e); return null; }));

// Attempts to continue from a state that have not shown to work yet: { player: { at: savedAt, n } }.
// Counted when the game thread has loaded the state ('restored'), cleared when the continued game
// has run for PROVEN_MS, ended by itself, or the page was left or hidden meanwhile (a page that is
// closed, or thrown away by a phone, is no sign of a bad state). Not counted earlier: before the
// state is loaded the game that boots is an ordinary one, and that takes a whole world's loading
// time, in which leaving the page is common. Kept where it survives a page that dies (persist.js).
const TRIES = 'rcspook-recomp.resume-tries';
const tries = {
  all: () => { try { const a = JSON.parse(store.get(TRIES) || '{}'); return a && typeof a === 'object' ? a : {}; } catch (e) { return {}; } },
  count: (player, savedAt) => { const t = tries.all()[player]; return t && t.at === savedAt ? t.n | 0 : 0; },
  add: (player, savedAt) => { const a = tries.all(); a[player] = { at: savedAt, n: tries.count(player, savedAt) + 1 }; store.set(TRIES, JSON.stringify(a)); },
  clear: (player) => { const a = tries.all(); if (a[player]) { delete a[player]; store.set(TRIES, JSON.stringify(a)); } },
};

// Writes to the store go one after the other: a state thrown away never takes a newer one with it.
let writes = Promise.resolve();
const inTurn = (fn) => { const p = writes.then(fn); writes = p.catch(() => {}); return p; };
const lost = new Map();        // player -> 'version' | 'damaged': his state was thrown away in this visit and he has not been told yet
const unjudged = new Set();    // players with a record that could not be judged, because the build is not known (see readState)
/** which: the kind of record ('' the adventure's saved place: only that one is something the player is told about). */
const dropNow = async (player, kind, reason, which = '') => {
  try { await dbDel(slot(player, which)); } catch (e) { /* it stays, and is found unusable again the next time */ }
  console.warn(`[opslag] de save state${which ? ' (' + which + ')' : ''} van speler ${player} is weggegooid: ${reason}`);
  if (which) return;
  tries.clear(player);
  lost.set(player, kind);
  window.dispatchEvent(new CustomEvent('recomp-save-dropped', { detail: { player, kind, reason } }));
};
const dropState = (player, kind, reason, which = '') => inTurn(() => dropNow(player, kind, reason, which));
/** Why a record cannot be continued from, as [kind, reason], or null. */
const faultOf = (rec, player, build) => {
  const int = Number.isInteger;
  if (!rec || typeof rec !== 'object') return ['damaged', 'not a record'];
  if (rec.v !== RECORD || typeof rec.build !== 'string') return ['version', 'made before states carried their build'];
  if (rec.build !== build) return ['version', `made by build ${rec.build}, this is ${build}`];
  const l = rec.launch;
  if (!l || typeof l !== 'object' || l.player !== player || !int(l.world) || l.world < 1 || l.world > PLACES.length) return ['damaged', 'no launch of this player in it'];
  // the game is booted with this launch before the state replaces it: a value the game cannot start with would end it there
  if ((l.difficulty !== undefined && !(int(l.difficulty) && l.difficulty >= 0 && l.difficulty <= 2)) || (l.adventure !== undefined && typeof l.adventure !== 'boolean')
    || (l.fov !== undefined && !(Number.isFinite(l.fov) && l.fov >= 0 && l.fov <= 180))) return ['damaged', 'a launch the game cannot start with'];
  const data = blobOf(rec.data);
  if (!data || !data.size || !int(rec.size) || rec.size < 8 || rec.size > MAX_STATE) return ['damaged', 'no data in it'];
  if (!Number.isFinite(rec.savedAt) || !int(rec.logicalW) || rec.logicalW < MODE_SHORT_W || rec.logicalW > MODE_MAX_W
    || (rec.logicalH !== undefined && !(int(rec.logicalH) && rec.logicalH >= MODE_SHORT_H && rec.logicalH <= MODE_MAX_H))) return ['damaged', 'no time or screen size in it'];
  // Not for the record the game that runs was continued from: its try is counted until that game has run for
  // PROVEN_MS, and F9, the settings over the game or the list of older places asked within those seconds of a
  // second try would otherwise take a state that is plainly good for one that failed twice, and delete it.
  const running = current && current.fresh.player === player && current.resumedAt === rec.savedAt;
  if (!running && tries.count(player, rec.savedAt) >= 2) return ['damaged', 'continuing from it ended badly twice'];
  return null;
};
/** The player's record when a game can be continued from it, else null. An unusable one is deleted here. Never throws. In turn with the writes: two readers (the menu, a start) do not both find and drop the same record. */
const readState = (player, which = '') => inTurn(async () => {
  try {
    await store.ready;
    const rec = await dbGet(slot(player, which));
    if (!which) unjudged.delete(player);
    if (rec === undefined) return null;
    // Until 2026-11-14 a Snelspel wrote its state where the adventure's is kept. Nothing ever
    // continued from such a record: it goes, without a word (the adventure lost nothing new by it).
    if (!which && rec && typeof rec === 'object' && rec.launch && rec.launch.adventure === false) { await dbDel(slot(player)).catch(() => {}); return null; }
    const build = await buildId();
    // Nothing can be said about it now: it is neither offered nor thrown away, and whoever asks is
    // told so (game.saveUnknown), so that no new game is started over it (source/menu/menu.js).
    if (!build) { if (!which) unjudged.add(player); return null; }
    const fault = faultOf(rec, player, build) || ((rec.launch.adventure === false) !== (which === 'quick') ? ['damaged', 'a state of the other kind of game'] : null);
    if (!fault) return rec;
    await dropNow(player, fault[0], fault[1], which);
  } catch (e) { console.warn('[opslag] de save state van speler ' + player + ' is niet te lezen', e); }
  return null;
});
/** The packed state of a record, as the game thread wants it. Throws when it is not what was stored. */
const gunzip = async (rec) => {
  if (!canPack) throw new Error('this browser has no DecompressionStream');
  // the game thread wants the state as one buffer: the only time it is one, and it is handed over
  const raw = await new Response(blobOf(rec.data).stream().pipeThrough(new DecompressionStream('gzip'))).arrayBuffer();
  if (raw.byteLength !== rec.size) throw new Error(`${raw.byteLength} bytes, ${rec.size} were stored`);
  return raw;
};
// Saving must never get in the way of playing: when it fails (no room on the device, a browser
// without compression streams, storage switched off) the game goes on and the player is told once.
let saveTold = false;
const saveFailed = (error) => {
  console.warn('[opslag] opslaan is mislukt', error);
  window.dispatchEvent(new CustomEvent('recomp-save-failed', { detail: { message: String(error && error.message ? error.message : error) } }));
  if (saveTold) return;
  saveTold = true;
  showNotice(error && error.name === 'QuotaExceededError' ? 'Opslaan lukt niet: er is te weinig ruimte op dit apparaat. Je kunt gewoon verder spelen.' : 'Opslaan lukt nu niet. Je kunt gewoon verder spelen.');
};
// --- recovery points (recovery.js has the rule) ------------------------------------------
// The playing time of the player whose game runs, in seconds: it only goes on while his game runs
// and is not paused, and never back (loading an older place does not rewind it, as in the
// JavaScript port). Every record carries the value of the moment it was made (`play`); a point's
// age is the difference. It starts from the highest value among the player's records.
const clock = { player: 0, seconds: 0, last: 0 };
const startClock = async (player) => {
  clock.player = player; clock.last = performance.now(); clock.seconds = 0;
  try { clock.seconds = (await dbGetMany(KINDS.map((k) => slot(player, k)))).reduce((most, r) => (r && Number.isFinite(r.play) ? Math.max(most, r.play) : most), 0); } catch (e) { /* from nothing */ }
};
setInterval(() => {
  const now = performance.now(), dt = (now - clock.last) / 1000;
  clock.last = now;
  if (game.running && !game.paused && !document.hidden && dt > 0 && dt < 5) clock.seconds += dt;          // (a page that slept does not count)
}, 1000);
/** Whether a stored record can be one of `player`'s adventure states of this build. */
const adventureRecord = (r, player, build) => !!r && typeof r === 'object' && r.v === RECORD && r.build === build && !!r.launch && r.launch.player === player && r.launch.adventure !== false && Number.isFinite(r.play) && !!blobOf(r.data);
let recoveryTold = false;
let bytesOnly = false;        // this browser keeps a state as bytes, not as a Blob: moving one would take it through the page's memory
/**
 * Before a new state replaces the adventure's newest: the older ones move down their ladder.
 * Copies of stored records (the browser copies the Blob's file; nothing is unpacked or read into
 * the page). Never in the way of the save itself: without room the ladder stands still, and an
 * error here is told once and costs the oldest point.
 */
const rotateRecovery = async (player, build, now) => {
  if (!settings.get('recovery') || bytesOnly) return;
  const keys = ['', ...RECOVERY.slots].map((k) => slot(player, k));
  try {
    if (navigator.storage && navigator.storage.estimate) {
      const room = await navigator.storage.estimate().catch(() => null);
      if (room && Number.isFinite(room.quota) && Number.isFinite(room.usage) && room.quota - room.usage < RECOVERY.spare) return;
    }
    const recs = await dbGetMany(keys);
    // Only records the browser holds as files are moved. Bytes (a browser that cannot keep a Blob
    // in IndexedDB, a record from before 2026-11-14) would come into the page's memory, 23 MB each.
    // (Such a browser is known from its first save on, storeState below; then nothing is read here any more.)
    if (recs.some((r) => r && typeof r === 'object' && !(r.data instanceof Blob))) return;
    const ages = recs.map((r) => (adventureRecord(r, player, build) ? now - r.play : null));
    const moves = planRotation(ages);
    for (const [from, to] of moves) await dbPut(keys[to], recs[from]);
    if (moves.length) await trimRecovery(player);
  } catch (e) {
    console.warn('[opslag] herstelpunten bewaren is mislukt', e);
    await dbDel(keys[3]).catch(() => {});
    if (!recoveryTold) { recoveryTold = true; if (game.onStatus) game.onStatus('Herstelpunten konden niet worden bewaard. Controleer de beschikbare lokale opslag.', 8000); }
  }
};
/** Keeps all recovery points together within their budget: the oldest of other players go first, then this player's oldest. */
const trimRecovery = async (player) => {
  const keys = (await dbKeys()).filter((k) => typeof k === 'string' && /^player\d+\.r\d$/.test(k));
  const recs = await dbGetMany(keys);
  const list = keys.map((key, k) => ({ key, own: key.startsWith(slot(player) + '.'), at: (recs[k] && recs[k].savedAt) || 0, size: recs[k] && blobOf(recs[k].data) ? blobOf(recs[k].data).size : 0 }));
  let total = list.reduce((n, r) => n + r.size, 0);
  list.sort((a, b) => (a.own - b.own) || (a.at - b.at));
  for (const r of list) { if (total <= RECOVERY.budget(phone)) break; await dbDel(r.key); total -= r.size; console.info(`[opslag] herstelpunt ${r.key} vervalt: samen nemen ze meer ruimte dan ${Math.round(RECOVERY.budget(phone) / 1048576)} MB`); }
};
const dropRecovery = (player) => inTurn(async () => { for (const k of RECOVERY.slots) await dbDel(slot(player, k)).catch(() => {}); });
settings.onChange((key, value) => {
  // switched off: the points go, for every player (they take room and would only grow older)
  if (key === 'recovery' && !value) inTurn(async () => { for (const k of await dbKeys()) if (typeof k === 'string' && /^player\d+\.r\d$/.test(k)) await dbDel(k); }).catch(() => {});
});

/** pieces: the state as the game thread hands it over, byte arrays that follow each other (snapshot.js pieces()). */
const storeState = (pieces, launch, screen, changed = false) => inTurn(async () => {
  if (!canPack) throw new Error('this browser has no CompressionStream');
  const build = await buildId();
  if (!build) throw new Error('the build is not known');          // a state nobody could ever check is not kept
  const size = pieces.reduce((n, b) => n + b.length, 0);
  const whole = new Blob(pieces);
  pieces = null;          // the Blob has them now: the page's own copy can go
  const packed = await new Response(whole.stream().pipeThrough(new CompressionStream('gzip'))).blob();
  const savedAt = Date.now(), which = kindOf(launch), key = slot(launch.player, which);
  const play = clock.player === launch.player ? Math.round(clock.seconds) : 0;
  const rec = { v: RECORD, build, savedAt, size, launch, logicalW: screen[0], play, data: packed };
  if (screen[1] !== MODE_SHORT_H) rec.logicalH = screen[1];
  if (!which) await rotateRecovery(launch.player, build, play);
  const put = async () => {
    try { await dbPut(key, rec); } catch (e) {
      if (e && e.name === 'QuotaExceededError') throw e;
      // a browser that cannot keep a Blob in IndexedDB: the bytes themselves, then
      rec.data = new Uint8Array(await packed.arrayBuffer());
      await dbPut(key, rec);
      bytesOnly = true;
    }
  };
  try { await put(); } catch (e) {
    // no room: the newest place counts for more than the older ones
    if (which || !(e && e.name === 'QuotaExceededError')) throw e;
    for (const k of RECOVERY.slots) await dbDel(slot(launch.player, k)).catch(() => {});
    await put();
  }
  if (!which) lost.delete(launch.player);          // (a Snelspel's state is nobody's saved adventure)
  game.lastSave = { raw: size, packed: packed.size, savedAt, player: launch.player, adventure: !which, play, changed };      // changed: taken because a pass changed the world (worker.js)
  if (game.onSaved) game.onSaved(game.lastSave);
  window.dispatchEvent(new CustomEvent('recomp-saved', { detail: game.lastSave }));
  if (game.onStatus) game.onStatus(`Opgeslagen (${(packed.size / 1048576).toFixed(1)} MB)`, true);
}).catch(saveFailed);

// --- the player's keys --------------------------------------------------------------------
// The keys of the game that runs, from its player's file (keybinds.js): read when the game starts
// and again whenever the game writes that file (its own menu page Spelbesturing). The controller
// and the touch buttons press these keys. The game's action Walk does nothing in the game
// (source/host/move.js): the page watches the keys bound to it and asks the host to walk slowly.
let binds = defaultBindings(), walkVks = walkKeys(binds), bindsOf = 0;
const loadBinds = (player) => {
  bindsOf = player;
  const text = players.text(player);
  binds = text ? readBindings(text).binds : defaultBindings();
  walkVks = walkKeys(binds);
  window.dispatchEvent(new CustomEvent('recomp-keys'));
};
const walking = new Set();
function walkBy(source, on) {
  const before = walking.size > 0;
  if (on) walking.add(source); else walking.delete(source);
  if (before !== walking.size > 0) push(EV.SETTING, SET.WALK, walking.size > 0 ? 1 : 0);
}
let stickSent = [0, 0];
const sendStick = (x, y) => {
  x = Math.round(Math.max(-1, Math.min(1, x || 0)) * 1e4); y = Math.round(Math.max(-1, Math.min(1, y || 0)) * 1e4);
  if (x === stickSent[0] && y === stickSent[1]) return;
  stickSent = [x, y];
  push(EV.STICK, x, y);
};

/** Every key, the stick and walking slowly are let go of: what a game that stops listening must not keep. */
const letGo = () => { for (const vk of [...keysDown]) push(EV.KEYUP, vk); stickSent = [1, 1]; sendStick(0, 0); if (walking.size) { walking.clear(); push(EV.SETTING, SET.WALK, 0); } };
const applyPause = () => {
  if (!ctrl) return;
  const p = paused();
  quality.reset();
  if (p) letGo();          // let go of everything first
  Atomics.store(ctrl, CTRL.PAUSED, p ? 1 : 0); Atomics.notify(ctrl, CTRL.PAUSED);
  if (audio) { if (p) audio.suspend(); else audio.resume(); }
};

/** Stops the game thread and everything that belongs to its game. */
const teardown = () => {
  pause.user = false; pause.blur = false; skipAsked = false; heldFor = null; clearTimeout(skipTimer); sceneCover(false); setSubtitle(''); keysDown.clear(); manualSave = false; current = null; walking.clear(); stickSent = [0, 0];
  game.running = false;
  clearTimeout(worldTimer);
  cancelAnimationFrame(tickHandle);
  if (worker) { worker.terminate(); worker = null; }
  if (painter) painter.postMessage({ t: 'stop' });          // frees the game's textures; the canvas goes black
  if (audio) audio.reset();
  if (document.pointerLockElement) { ownExit = performance.now(); document.exitPointerLock(); }
  document.documentElement.classList.remove('game-running');
  onStage = false; layout();
};
const end = (how, info) => {
  teardown();
  hideNotice();
  if (game.onExit) game.onExit(how, info);
  window.dispatchEvent(new CustomEvent('recomp-exit', { detail: { how, info } }));
};

/**
 * Gives the render worker the game that is starting: its control words, the port its frames come
 * through, and the drawing size and anti-aliasing to begin with. The first time, and after a
 * render worker that failed, the worker is made and gets the canvas.
 */
function startPainter(port) {
  let offscreen = null;
  if (!painter) {
    if (canvasGiven) { const fresh = canvas.cloneNode(false); canvas.replaceWith(fresh); canvas = fresh; bindCanvas(); layout(); }
    const mine = painter = new Worker(new URL('./render-worker.js', import.meta.url), { type: 'module' });
    // without a renderer there is no game: it ends as it does when the game thread fails
    const failed = (message) => {
      if (painter !== mine) return;
      mine.terminate(); painter = null;
      if (ctrl) { Atomics.store(ctrl, CTRL.DEAD, 1); Atomics.notify(ctrl, CTRL.FRAMES); }
      console.error(message);
      if (worker) crashed({ message, stack: '' });
    };
    mine.onmessage = (e) => { if (e.data.t === 'fatal') failed(e.data.message); else if (e.data.t === 'log') console.log('[render]', e.data.s); };
    mine.onerror = (e) => failed(e.message || 'De tekenthread is gestopt');
    offscreen = canvas.transferControlToOffscreen();
    canvasGiven = true;
  }
  const [width, height] = drawSize();
  painter.postMessage({ t: 'start', canvas: offscreen, ctrl: ctrl.buffer, port, width, height, msaa: settings.get('msaa') }, offscreen ? [offscreen, port] : [port]);
}

/**
 * Fetches, one after the other and without hurry, the files this world may ask for later. The
 * game thread waits for every file it asks for itself; a file that is in the browser's cache by
 * then costs it no time on the network. Ends with the game it was started for.
 */
async function warm(urls, forWorker) {
  for (const url of urls || []) {
    if (worker !== forWorker) return;
    try { const r = await fetch(url, { priority: 'low' }); await r.arrayBuffer(); } catch (e) { /* the game fetches it itself when it needs it */ }
  }
}

/** Where a player's adventure is by his own file: the world, the worlds done, the adventure done. Not his score: the game writes that at other moments too. */
const placeOf = (player) => { const p = players.get(player); return p ? `${p.world}|${p.completed.map(Number).join('')}|${p.adventureDone ? 1 : 0}` : ''; };
let stopAsked = false;        // game.stop() was called for the game that runs
let manualSave = false;       // the player himself asked for the state that is under way (F5): he is told when it cannot be taken
let current = null;           // the game that runs: { fresh, leave() }, for game.reload()
let skipAsked = false, skipTimer = 0;         // a skip was asked for and the game thread has not answered yet
let skipSince = 0;                            // when that was (performance.now())
// The skip is over and the picture on the canvas is still the scene's: until CTRL.FRAMES reaches this number (the
// first picture of the game after the scene, worker.js), or HELD_MS at most. null: no picture is being waited for.
let heldFor = null, heldSince = 0;
const HELD_MS = 500;
const held = () => {
  if (heldFor === null) return false;
  if (!ctrl || !game.running || ((Atomics.load(ctrl, CTRL.FRAMES) - heldFor) | 0) >= 0 || performance.now() - heldSince > HELD_MS) { heldFor = null; return false; }
  return true;
};
// From the moment a hold is complete until the game thread says the skip is over, the page plays nothing of the
// scene: what sounds is silenced at once except the level's music (audio.js hush), without waiting for the game
// thread's own stop, and the subtitle box goes. The picture is not hidden: the canvas keeps the last picture of the
// scene (the game thread draws none while it skips, worker.js) until the first picture of the game after it.
// (Until 2026-11-15 the stage was black for as long as the skip took. html.scene-skipped is still set, for the
// style sheets and the checks; no rule of the port hides anything by it.)
function sceneCover(on) {
  document.documentElement.classList.toggle('scene-skipped', on);
  if (audio) audio.hush(on);
}
let restoredNote = '';        // what the status line says when the state of the game that starts is loaded, in place of the usual line

/** Whether a game booted with launch `a` is the game launch `b` asks for (free flight aside: that is switched on afterwards). */
const sameLaunch = (a, b) => a.player === b.player && a.world === b.world && a.difficulty === b.difficulty && (a.adventure !== false) === (b.adventure !== false) && (a.fov || 0) === (b.fov || 0);

/**
 * Starts a game thread. fresh: the launch the caller asked for; resume: continue from the
 * player's save state when a usable one is there; note: a line for the player (the reason this
 * game is started in place of another).
 */
async function begin(fresh, resume, note) {
  await game.ready;
  // Nothing here may ask the browser for a permission: the page is entering full screen or is in
  // it, and Firefox answers a request then by cancelling it or by leaving full screen. The request
  // to keep this site's storage is made from the menu (source/web/keep-storage.js).
  // The page's own WebGL questions are asked before a render worker exists: in WebKit a worker's
  // first ask for a context failed when the page made one just after that worker was started.
  offscreenWebGL2(); maxSamples();
  const player = fresh.player, which = kindOf(fresh);
  // a Snelspel that starts leaves nothing of an earlier one behind (its state only serves the Snelspel that runs)
  if (which && !resume) await inTurn(() => dbDel(slot(player, which))).catch(() => {});
  let saved = resume ? await readState(player, which) : null, restore = null;
  // a record that could not be judged (the game's lists did not arrive): no game is started over it
  if (resume && !saved && unjudged.has(player)) throw new Error('De bestanden van het spel zijn nu niet te bereiken. Probeer het over een ogenblik opnieuw.');
  if (saved) {
    try { restore = await gunzip(saved); } catch (e) { await dropState(player, 'damaged', 'it cannot be unpacked: ' + (e && e.message ? e.message : e), which); saved = null; }
  }
  // a state of this player was thrown away (just now, or when the menu looked): he is told as his adventure starts
  if (!saved && !note && fresh.adventure && lost.has(player)) note = lostText(lost.get(player), fresh.world);
  if (saved || fresh.adventure) lost.delete(player);
  // A continued game is booted as the game that saved it (its world's files, its screen size),
  // then replaced by the state; the screen then follows the window as in any game (sendShape below). Everything else about a state that fails comes from `fresh`.
  let launch = saved ? saved.launch : fresh;
  loadBinds(player);
  await startClock(player);
  const freshMode = chooseMode();
  [logicalW, logicalH] = saved ? [saved.logicalW, saved.logicalH || MODE_SHORT_H] : freshMode;
  shapeSent = logicalW * 65536 + logicalH; liftSent = -1; onStage = true;          // (a game continued in the shape it was saved in gets the window's own from its first pass on: sendShape at 'running')
  fsLeft = false;
  if (settings.get('fullscreen')) applyFullscreen();
  layout();
  if (!audio) audio = createAudioSink();
  audio.reset();
  audio.setMasterVolume(settings.get('volume') / 100);
  audio.resume();
  if (game.onStatus) game.onStatus('Laden…');
  if (note) showNotice(note);
  ctrl = new Int32Array(new SharedArrayBuffer(64 * 4));
  ring = new Int32Array(new SharedArrayBuffer(RING * REC * 4));
  // the game thread's frames go straight to the render worker, through a channel of their own
  const frames = new MessageChannel();
  scaleSent = 0;
  const mine = worker = new Worker(new URL('./worker.js', import.meta.url), { type: 'module' });
  // resumed: this game is to continue from a state. ran: the game thread got as far as booting for it; at: when it said the state was loaded.
  let resumed = saved ? { savedAt: saved.savedAt, ran: false, at: 0 } : null, over = false;
  // The player's place in his adventure by his own file (Player<N>.ini) as it was when the state now
  // stored was taken or loaded; null while this game has neither. See 'exit' below.
  let placeAt = null;
  stopAsked = false;
  /** This game is given up and the player's own world started in its place, with a line that says why. drop: the state goes too. */
  const again = async (kind, reason, drop) => {
    if (over || worker !== mine) return;
    over = true; starting = true;
    teardown();
    const text = lostText(kind, fresh.world);
    window.dispatchEvent(new CustomEvent('recomp-restart', { detail: { launch: fresh, text } }));
    try {
      if (drop) await dropState(player, kind, reason, which); else console.warn(`[opslag] verder spelen is mislukt (${reason}); de save state blijft voor nog een poging`);
      lost.delete(player);
      await begin(fresh, false, text);
    } catch (e) { const d = { message: String(e && e.message ? e.message : e), stack: '' }; window.__crash = d; end('crash', d); }
    finally { starting = false; }
  };
  // the page is left (closed, another address, hidden) while the continued game stands: that is no failed try
  leaving = () => { if (worker === mine && resumed) tries.clear(player); };
  current = { fresh, leave: () => leaving(), get resumedAt() { return resumed ? resumed.savedAt : null; } };
  readCameraKeys();
  crashed = (d) => {
    if (worker !== mine) return;
    // A continued game that fails before it has shown to run: the world starts in its place.
    // Whether the state was at fault is not known, so it is kept for one more try (see `tries`).
    if (resumed && resumed.ran) { again('damaged', 'the continued game failed: ' + d.message, tries.count(player, resumed.savedAt) >= 2); return; }
    window.__crash = d;
    end('crash', d);
  };
  worker.onmessage = (e) => {
    if (worker !== mine) return;
    const d = e.data;
    switch (d.t) {
      case 'audio': audio.handle(d.m); break;
      case 'status': if (game.onStatus) game.onStatus(d.s); break;
      case 'running':
        if (resumed) resumed.ran = true;
        worldSeen = false; clearTimeout(worldTimer); worldTimer = setTimeout(() => { if (worker === mine && !worldSeen) { worldSeen = true; armNotice(); } }, WORLD_WAIT_MS);
        game.running = true; quality.reset(); saveDue = performance.now() + SAVE_EVERY; warm(d.later, worker); if (game.onStatus) game.onStatus(''); push(EV.ACTIVATE, 1); sendScale(); sendShape(); sendHudLift(); push(EV.SETTING, SET.MSAA, settings.get('msaa')); document.documentElement.classList.add('game-running'); armNotice(); if (game.onRunning) game.onRunning(); window.dispatchEvent(new CustomEvent('recomp-running', { detail: { world: launch.world, adventure: launch.adventure !== false, resumed: !!restore } }));
        break;
      case 'stats':
        if (resumed && resumed.at && performance.now() - resumed.at > PROVEN_MS) { tries.clear(player); resumed = null; }
        quality.sample(d);
        if (d.world && !worldSeen) { worldSeen = true; armNotice(); }
        game.stats = d; if (d.cheats) { game.cheats.state = d.cheats; if (game.cheats.onChange) game.cheats.onChange(d.cheats); } if (game.onStats) game.onStats(d); break;
      case 'log': console.log('[game]', d.s); break;
      case 'persist': gameFiles.persisted(d.path, d.data); if (bindsOf && new RegExp('\\\\PLAYER' + bindsOf + '\\.INI$', 'i').test(d.path)) loadBinds(bindsOf); break;
      case 'state': {          // (the game's writes before this state have arrived before it)
        placeAt = placeOf(player);
        manualSave = false;
        // An adventure that went on to its next world: the state is that world's, and a game that
        // continues from it is booted there (the world's own files fetched together, worker.js).
        const at = which ? null : players.get(player);
        if (at && at.world !== launch.world) launch = { ...launch, world: at.world };
        if (d.changed) saveDue = performance.now() + SAVE_EVERY;
        // the player's file is at the new world now: whoever keeps what a player reached notes it at once
        // (the menu's open Griezelplekken; an older place loaded afterwards puts the file back)
        if (d.changed) window.dispatchEvent(new CustomEvent('recomp-world', { detail: { player, world: at ? at.world : launch.world, adventure: !which } }));
        storeState(d.pieces, launch, d.screen || [logicalW, logicalH], !!d.changed);
        break;
      }
      case 'state-failed': manualSave = false; saveFailed(new Error(d.message)); break;
      case 'state-skipped':
        // No state of a RedCat without health or of a game that is ending (worker.js onPass): the
        // last one of a living RedCat stays. 'dead': the state is taken when he is back.
        window.dispatchEvent(new CustomEvent('recomp-save-skipped', { detail: { why: d.why } }));
        if (manualSave && d.why === 'dead' && game.onStatus) game.onStatus('Je avontuur is niet opgeslagen. Dat gebeurt zodra RedCat terug is.', 6000);
        manualSave = false;
        break;
      case 'restored': if (resumed) { resumed.at = performance.now(); tries.add(player, resumed.savedAt); if (document.hidden) leaving(); } placeAt = placeOf(player); if (game.onStatus) game.onStatus(restoredNote || 'Opgeslagen spel geladen', restoredNote ? 6000 : true); restoredNote = ''; break;
      case 'restore-failed': {
        // the state cannot be used, and that will not change: it goes. The game thread either runs the
        // world it booted (which is the player's own) or has stopped, and then that world is started here.
        const kind = /another build/.test(d.reason) ? 'version' : 'damaged';
        resumed = null;
        if (d.goesOn) { dropState(player, kind, d.reason, which).then(() => lost.delete(player)); showNotice(lostText(kind, fresh.world)); } else again(kind, d.reason, true);
        break;
      }
      case 'skip':
        skipAsked = false; sceneCover(false);
        if (d.result === 'done' && Number.isInteger(d.frame)) { heldFor = d.frame; heldSince = performance.now(); }
        if (d.result === 'failed') showNotice('Deze scène kan nu niet worden overgeslagen.');
        window.dispatchEvent(new CustomEvent('recomp-skip', { detail: { result: d.result, frames: d.frames, ms: d.ms, tailMs: d.tailMs, tailWhy: d.tailWhy, fineFrames: d.fineFrames, wallMs: Math.round(performance.now() - skipSince) } }));
        break;
      case 'subtitle': setSubtitle(d.text); break;
      case 'cheat': game.cheats.state = d.state; if (game.cheats.onChange) game.cheats.onChange(d.state); break;
      case 'messagebox':
        // the original shows these with MessageBox; the answer is OK
        window.alert((d.caption ? d.caption + '\n\n' : '') + d.text);
        Atomics.store(ctrl, CTRL.ANSWER, 1); Atomics.notify(ctrl, CTRL.ANSWER);
        break;
      case 'exit':
        if (resumed) tries.clear(player);
        // A continued game that ends by itself before its state was loaded: the game could not
        // even start with what the record says (the player did not ask for it). Like a refused state.
        if (resumed && resumed.ran && !resumed.at && !stopAsked) { again('damaged', 'the game ended before the state was loaded', true); break; }
        // The game ended by itself (its own menu, the end of an adventure) after its player file
        // moved on from where the stored state stands: a finished world, say, with the last state
        // from before its end. Continuing from that state would put the older file back over the
        // newer one. So the state goes, and the menu starts the world the file says. (The gear's
        // "Spel stoppen" takes a state first; then the two agree and the state stays.)
        if (!which && placeAt !== null && placeOf(player) !== placeAt) {
          console.info(`[opslag] de save state van speler ${player} is ouder dan zijn voortgang en vervalt`);
          inTurn(() => dbDel(slot(player))).catch(() => {});
          dropRecovery(player);
          tries.clear(player); lost.delete(player);
        }
        // a Snelspel that is over leaves no state behind
        if (which) inTurn(() => dbDel(slot(player, which))).catch(() => {});
        end('exit', { code: d.code });
        break;
      case 'crash': console.error(d.message + '\n' + d.stack); crashed(d); break;
      default: break;
    }
  };
  worker.onerror = (e) => crashed({ message: e.message || 'De spelthread is gestopt', stack: '' });
  worker.postMessage({
    t: 'start', ctrl: ctrl.buffer, ring: ring.buffer, baseUrl, gameUrl,
    width: logicalW, height: logicalH, port: frames.port1,
    debugLog: new URLSearchParams(location.search).has('log'), saved: gameFiles.entries(), launch, restore, firstPerson: settings.get('camera') === 'first',
    // for a state that turns out unusable: is the booted game the one the caller asked for, and does he fly
    sameStart: !!saved && sameLaunch(launch, fresh), flight: fresh.flight,
    fixes: fixesNow(), subtitleBox: settings.get('subtitleBox') !== false,
  }, restore ? [restore, frames.port1] : [frames.port1]);
  startPainter(frames.port2);
  const tick = (now) => { followMode(); if (!limiter || limiter.ready(now)) { Atomics.add(ctrl, CTRL.TICK, 1); Atomics.notify(ctrl, CTRL.TICK); } tickHandle = requestAnimationFrame(tick); };
  tickHandle = requestAnimationFrame(tick);
}

// Whether WebGL 2 can draw on a canvas that is not on the page, which is what the render worker
// does. Safari 16.4 to 16.6 has such canvases but only 2D on them. Asked once, on the page: a
// canvas of one pixel, whose context is given back at once. A browser that has no OffscreenCanvas
// constructor at all but can hand a canvas over is taken at its word.
let webgl2Known = null;
const offscreenWebGL2 = () => {
  if (webgl2Known !== null) return webgl2Known;
  if (typeof OffscreenCanvas !== 'function') return (webgl2Known = true);
  try {
    const gl = new OffscreenCanvas(1, 1).getContext('webgl2');
    webgl2Known = !!gl;
    if (gl && pageSamples === null) pageSamples = gl.getParameter(gl.MAX_SAMPLES) | 0;          // what maxSamples() would ask a context of its own for
    // Given back at once and on purpose: a context that waits for the garbage collector counts
    // towards the browser's limit and keeps its memory. Firefox writes "WebGL context was lost" in
    // the console for this, once per page; that is this line and no fault.
    const ext = gl && gl.getExtension('WEBGL_lose_context');
    if (ext) ext.loseContext();
  } catch (e) { webgl2Known = false; }
  return webgl2Known;
};
// Why no game can start here, for whoever looks into it: 'isolation' (no shared memory: the server's
// headers, a page inside another site's page, an old browser), 'canvas' (a canvas cannot be handed
// to a worker), 'webgl2' (no WebGL 2 on a canvas that is not on the page), or null. The order matters:
// a page that is not isolated says so whatever else is missing.
const unsupportedReason = () => (!(self.crossOriginIsolated && typeof SharedArrayBuffer !== 'undefined') ? 'isolation'
  : typeof canvas.transferControlToOffscreen !== 'function' ? 'canvas'
  : !offscreenWebGL2() ? 'webgl2' : null);
// for 'webgl2': whether WebGL 2 works on a canvas of the page at all (asked once, and only when it is needed)
let pageWebGL2Known = null;
const pageWebGL2 = () => {
  if (pageWebGL2Known !== null) return pageWebGL2Known;
  try {
    const gl = document.createElement('canvas').getContext('webgl2');
    pageWebGL2Known = !!gl;
    const ext = gl && gl.getExtension('WEBGL_lose_context');
    if (ext) ext.loseContext();
  } catch (e) { pageWebGL2Known = false; }
  return pageWebGL2Known;
};
/** The same in a sentence for the console (English, as the other lines for whoever runs the site). */
const unsupportedDetail = () => {
  const reason = unsupportedReason();
  return reason === 'isolation' ? 'The page is not cross-origin isolated, so it cannot share memory with the game thread. The server has to send Cross-Origin-Opener-Policy: same-origin and Cross-Origin-Embedder-Policy: require-corp (node tools/serve.mjs does; docs/hosting.md).'
    : reason === 'canvas' ? 'This browser cannot hand a canvas to a worker (no canvas.transferControlToOffscreen), which is how the game draws.'
    : reason !== 'webgl2' ? ''
    : pageWebGL2() ? 'WebGL 2 works on the page but not on an OffscreenCanvas or a worker\'s canvas, which is where the game draws (Safari 16.4 to 16.6, WebKitGTK/WPE builds without AllowWebGLInWorkers). The page is cross-origin isolated; the server is not the cause.'
    : 'This browser gives no WebGL 2 context at all (not on the page either: the graphics chip is blocked or WebGL is switched off). The page is cross-origin isolated; the server is not the cause.';
};

export const game = {
  running: false,
  players, settings, WORLD_NAMES, files: gameFiles,
  onExit: null, onStatus: null, onStats: null, onRunning: null, onSaved: null, onNotice: null,
  lastSave: null, notice: null,
  ready: Promise.all([players.init(baseUrl), store.ready]).then(() => {}),
  supported: () => unsupportedReason() === null,
  /** Why not: 'isolation' | 'canvas' | 'webgl2', or null when a game can start. unsupportedDetail(): a sentence about it for the console. */
  unsupportedReason, unsupportedDetail,
  logicalSize: () => [logicalW, logicalH],
  /** The game's screen the picture's shape asks for now (the one in use follows it between two passes of the game). */
  wantedSize: () => chooseMode(),

  /**
   * Starts the game. player 1..8 (its Player<N>.ini must exist: players.create), world 1..5,
   * difficulty 0..2, adventure true (go on to the next world) or false (quick play: one world),
   * resume true to continue from the player's save state when there is one.
   */
  async start({ player = 1, world = 1, difficulty, adventure = true, resume = false, flight = false } = {}) {
    if (game.running || worker || starting) return;
    // fov: the wanted field of view, fixed when the game starts (launch settings, source/host/ini.js);
    // flight: free flight is this player's kept preference (the menu says so)
    const fresh = { player: Number(player) || 1, world: Math.min(PLACES.length, Math.max(1, Math.round(Number(world)) || 1)), difficulty, adventure: adventure !== false, fov: settings.get('fov') || 0, flight: !!flight };
    starting = true;
    try { await begin(fresh, !!resume, ''); } finally { starting = false; }
  },
  /** Asks the game to quit the way closing its window does (it writes its files and ends). */
  stop() { if (game.running) { stopAsked = true; Atomics.store(ctrl, CTRL.CLOSE, 1); } },
  /** manual: the player asked himself (F5): he is told when no state can be taken now. */
  save({ manual = false } = {}) { if (!game.running) return; saveDue = performance.now() + SAVE_EVERY; if (manual) manualSave = true; if (canPack) Atomics.add(ctrl, CTRL.SAVE, 1); else saveFailed(new Error('this browser has no CompressionStream')); },
  /** The saved place the game that runs would go back to with reload(): { savedAt } or null. */
  async reloadInfo() { const c = current; if (!c) return null; const s = await readState(c.fresh.player, kindOf(c.fresh)); return s ? { savedAt: s.savedAt, world: s.launch.world } : null; },
  /**
   * Loads the saved place of the game that runs, in place of that game (F9, and "Opgeslagen plek
   * laden" in the settings over a game). recovery: 'r1' | 'r2' | 'r3' first makes that older place
   * of the adventure the saved place. Resolves false, with the game left as it is, when there is
   * no such place. Leaving the running game this way is no failed try to continue (see `tries`).
   */
  async reload({ recovery = '', note = '' } = {}) {
    const c = current;
    if (!c || !game.running || starting) return false;
    const player = c.fresh.player, which = kindOf(c.fresh);
    // should the saved place fail after all, the world to start is where the adventure is now (it may have gone on since this game started)
    const fresh = which || !players.get(player) ? c.fresh : { ...c.fresh, world: players.get(player).world };
    starting = true;
    try {
      const saved = await readState(player, recovery && !which ? recovery : which);
      if (!saved || current !== c || !game.running) { if (!saved && game.onStatus) game.onStatus(recovery ? 'Dit herstelpunt is er niet meer.' : 'Er is nog geen opgeslagen plek om te laden.', 4000); return false; }
      c.leave();
      teardown();
      hideNotice();
      window.dispatchEvent(new CustomEvent('recomp-restart', { detail: { launch: { ...fresh, world: saved.launch.world }, text: '', reload: true } }));
      const loaded = !recovery || which || (await game.loadRecovery(player, recovery));          // (it went meanwhile: the newest place, then)
      restoredNote = loaded ? note : '';
      await begin(fresh, true, '');
      return true;
    } catch (e) { const d = { message: String(e && e.message ? e.message : e), stack: '' }; window.__crash = d; end('crash', d); return false; }
    finally { starting = false; }
  },
  /**
   * The older saved places of a player's adventure, newest first: [{ id, minutes, savedAt, world }];
   * minutes is playing time ago (against the playing time of the game that runs, else of the newest
   * saved place). Unusable ones are deleted by this call.
   */
  async recoveryInfo(player) {
    const out = [];
    let newest = clock.player === player && game.running ? clock.seconds : 0;
    const main = await readState(player);
    if (main && Number.isFinite(main.play)) newest = Math.max(newest, main.play);
    for (const id of RECOVERY.slots) {
      const r = await readState(player, id);
      if (r && Number.isFinite(r.play)) out.push({ id, play: r.play, savedAt: r.savedAt, world: r.launch.world });
    }
    for (const r of out) newest = Math.max(newest, r.play);
    return out.map((r) => ({ id: r.id, minutes: minutesAgo(newest - r.play), savedAt: r.savedAt, world: r.world })).sort((a, b) => b.savedAt - a.savedAt);
  },
  /**
   * Makes an older saved place of the adventure the saved place. The place that was the newest is
   * gone with that (it is the one the player wants to get away from); the other older places stay
   * as they are, so another one can still be tried, as in the JavaScript port. True when done.
   */
  async loadRecovery(player, id) {
    if (!RECOVERY.slots.includes(id)) return false;
    const rec = await readState(player, id);
    if (!rec) return false;
    return inTurn(async () => {
      const build = await buildId();
      if (!build) return false;
      // the playing time does not go back: the chosen place is the newest from now on
      let now = clock.player === player ? clock.seconds : 0;
      for (const r of await dbGetMany(KINDS.map((k) => slot(player, k)))) if (r && Number.isFinite(r.play)) now = Math.max(now, r.play);
      now = Math.round(now) + 1;
      if (clock.player === player) clock.seconds = Math.max(clock.seconds, now);
      await dbPut(slot(player), { ...rec, play: now });
      tries.clear(player); lost.delete(player);
      return true;
    }).catch((e) => { console.warn('[opslag] het herstelpunt kon niet geladen worden', e); return false; });
  },
  /** The player's save state, when a game can be continued from it. One that cannot (another build, damaged) is deleted by this call: see lostSaveNote. null also when nothing could be said about it: see saveUnknown. */
  async saveInfo(player) { const s = await readState(player); return s ? { savedAt: s.savedAt, world: s.launch.world, adventure: s.launch.adventure !== false, difficulty: s.launch.difficulty, size: blobOf(s.data).size } : null; },
  /** Whether the last saveInfo() of this player found a record it could not judge (the game's lists could not be fetched). Ask again later; do not start a game over it. */
  saveUnknown: (player) => unjudged.has(player),
  /** Deletes everything stored of a player's games: the saved place of his adventure, its recovery points, a Snelspel's state. */
  async deleteSave(player) { await inTurn(async () => { for (const k of KINDS) await dbDel(slot(player, k)); }).catch(() => {}); tries.clear(player); lost.delete(player); unjudged.delete(player); },
  /** Deletes what Snelspel games left behind (a tab that was closed in the middle of one): nothing continues from it. */
  async forgetSnelspel() { await inTurn(async () => { for (const k of await dbKeys()) if (typeof k === 'string' && /^player\d+\.quick$/.test(k)) await dbDel(k); }).catch(() => {}); },
  /** For a menu: the line for a player whose saved place was thrown away in this visit and who has not been told yet, or ''. world: where his adventure is. */
  lostSaveNote(player, world) { return lost.has(player) ? lostText(lost.get(player), world) : ''; },
  /** Stops or continues the game thread and its clock, for a dialog over the game. A hidden page pauses too, on its own account. */
  setPaused(on) { pause.user = !!on; applyPause(); },
  get paused() { return paused(); },
  /** Why the game waits, for the page's own line: 'blur' when only the window lost the focus, else ''. */
  get pausedBy() { return pause.hidden ? 'hidden' : pause.user ? 'user' : pause.blur ? 'blur' : ''; },
  resumeAudio() { if (audio) audio.resume(); },
  /** Frames the render worker has drawn in this game (for the checks in tools/). */
  get framesDrawn() { return ctrl ? Atomics.load(ctrl, CTRL.FRAMES) : 0; },
  /** For the checks in tools/: takes the WebGL context away and gives it back after `ms`. */
  loseContext(ms) { if (painter) painter.postMessage({ t: 'lose', ms }); },
  audioState() { return audio ? audio.state() : []; },

  /**
   * Muziek and Geluidseffecten of the running game, 0..100 (null: leave it): handed to the game's own two setters
   * between two frames (source/host/volume.js); keep: also written to the playing player's file. A game that waits
   * (the settings over it) takes them when it goes on.
   */
  setVolumes(music, effects, keep = false) {
    if (!game.running) return false;
    if (music !== null && music !== undefined) push(EV.SETTING, SET.VOLUME, 0, Math.round(music));
    if (effects !== null && effects !== undefined) push(EV.SETTING, SET.VOLUME, 1, Math.round(effects));
    if (keep) push(EV.SETTING, SET.VOLUME, 2, 0);
    return true;
  },
  cheats: {
    state: null, onChange: null,
    /** Fills potions and mirror pieces and adds 9000 points, as in the JavaScript port. */
    supplies() { push(EV.CHEAT, CHEAT.SUPPLIES, 1); },
    /** Free flight on or off: the original's own no-clip mode, flown as in the JavaScript port (source/host/move.js): Jump up, Walk down; Home and End as well. */
    flight(on) { push(EV.CHEAT, CHEAT.FLIGHT, on ? 1 : 0); },
    /** Immortal on or off: the original's own god mode. */
    god(on) { push(EV.CHEAT, CHEAT.GOD, on ? 1 : 0); },
    /** Shows or hides the original's hidden cheat page in the game's own menu (Esc). */
    originalMenu(on) { push(EV.CHEAT, CHEAT.MENU, on ? 1 : 0); },
  },

  /** Raw input for touch and gamepad code: Windows virtual-key codes, mouse movement in game pixels, buttons 0 left 1 right 2 middle. */
  input: {
    key(vk, down, ch = 0) { push(down ? EV.KEYDOWN : EV.KEYUP, vk, ch); },
    /** Looking around from a stick or a finger, in mouse pixels: turns RedCat and the camera (look()), and moves the game's pointer for its own screens. */
    mouse(dx, dy) { if (dx || dy) push(EV.MOVE, Math.round(dx), Math.round(dy)); look(dx, dy); },
    button(n, down) { push(down ? EV.DOWN : EV.UP, n); },
    /** The keys the left mouse button holds down now (the keys of Schieten while the mouse is caught): for the checks. */
    mouseKeys: () => [...mouseFire],
    /** A movement stick, x to the right and y forward, -1 .. 1 with its dead zone taken off; (0, 0) when released. The caller also holds the key for forward or back (stick.js, gamepad.js). */
    stick(x, y) { sendStick(x, y); },
    /** Walking slowly while a source (a button's name) holds it. */
    walk(source, on) { walkBy(String(source), !!on); },
    /** The virtual keys the playing player's file has for an action of keybinds.js ('forward', 'jump', ...). */
    vks(action) { return vksFor(binds, action); },
    /** Those keys as the form Toetsen instellen names them: "Pijl omhoog / W". */
    label(action) { return bindingLabel(binds[action]); },
  },
  /**
   * What the game thread said at its last frame: cut 0 none, 1 bars coming, 2 a scene runs, 3 bars going; skipping; state 3 a world, 4 the results
   * screen, 7 the retry screen. held: a skip is over and the picture is still the scene's last (the game after it is not drawn yet). slow: the skip
   * that runs takes long on this device (the game thread's estimate from its first passes, or 250 ms went by since it was asked for).
   */
  scene() { const s = ctrl && game.running ? Atomics.load(ctrl, CTRL.SCENE) : 0, skips = (s & 4) !== 0 || skipAsked; return { cut: s & 3, skipping: skips, held: held(), slow: skips && ((s & 64) !== 0 || performance.now() - skipSince > 250), nested: (s & 8) !== 0, own: (s & 8) ? ['', 'menu', 'pause', 'retry'][(s >> 4) & 3] : '', state: ctrl && game.running ? Atomics.load(ctrl, CTRL.GSTATE) : 0 }; },
  /** Skips the scene that runs: the game plays it to its end without a new picture, sound or waiting (source/host/skip.js). False when there is none. */
  skipScene() {
    const s = game.scene();
    if (!game.running || paused() || s.skipping || !(s.cut === 1 || s.cut === 2)) return false;
    letGo();          // nobody is at the keys while it runs
    skipAsked = true; skipSince = performance.now(); heldFor = null;
    sceneCover(true);          // silent from here on, and the picture stands still, until the game thread answers
    setSubtitle('');
    push(EV.SKIP, 1);
    // A request is taken between two passes of the game's main loop. Inside one of the game's own loops (its
    // menu or its pause, which can be opened during a scene) no pass comes: the request is taken back, so that
    // the keys reach the game again.
    clearTimeout(skipTimer);
    skipTimer = setTimeout(() => { if (skipAsked && !skipping()) { skipAsked = false; sceneCover(false); push(EV.SKIP, 2); } }, 800);
    return true;
  },
  /** The most samples the renderer can use: the render worker's own answer once a game has run, else asked once on the page. 0: not known. */
  maxSamples,
  /** A short press of Schieten: what the results screen of a world waits for (a tap on the touch prompt). */
  continueResults() { return game.running && game.scene().state === GS_RESULTS ? tapFire() : false; },
  /** See showHint. Returns whether the line was shown. */
  hint(text, ms) { return showHint(text, ms); },
};
window.RecompGame = game;

// --- keyboard and mouse ------------------------------------------------------------------
// KeyboardEvent.code -> Windows virtual-key code
export const VK = {
  Escape: 0x1B, Backspace: 0x08, Tab: 0x09, Enter: 0x0D, NumpadEnter: 0x0D, Space: 0x20,
  ShiftLeft: 0x10, ShiftRight: 0x10, ControlLeft: 0x11, ControlRight: 0x11, AltLeft: 0x12, AltRight: 0x12,
  Pause: 0x13, CapsLock: 0x14, PageUp: 0x21, PageDown: 0x22, End: 0x23, Home: 0x24,
  ArrowLeft: 0x25, ArrowUp: 0x26, ArrowRight: 0x27, ArrowDown: 0x28, Insert: 0x2D, Delete: 0x2E,
  Minus: 0xBD, Equal: 0xBB, BracketLeft: 0xDB, BracketRight: 0xDD, Semicolon: 0xBA, Quote: 0xDE, Backquote: 0xC0,
  Backslash: 0xDC, Comma: 0xBC, Period: 0xBE, Slash: 0xBF,
  NumpadMultiply: 0x6A, NumpadAdd: 0x6B, NumpadSubtract: 0x6D, NumpadDecimal: 0x6E, NumpadDivide: 0x6F,
};
for (let k = 0; k < 26; k++) VK['Key' + String.fromCharCode(65 + k)] = 65 + k;
for (let k = 0; k < 10; k++) { VK['Digit' + k] = 48 + k; VK['Numpad' + k] = 0x60 + k; }
for (let k = 1; k <= 12; k++) VK['F' + k] = 0x6F + k;

// The keys of the game's actions are the game's own: the player's file, [KeyBinds] (keybinds.js, the form
// "Toetsen instellen" of the menu). One key is the page's: switching between the original camera and first
// person (setting `keys`, action `camera`: KeyboardEvent.code values).
let cameraKeys = new Set();
// (the key of the player whose game runs: keybinds.js cameraKeysOf; read again when a game starts)
const readCameraKeys = () => { cameraKeys = new Set(cameraKeysOf(settings.get('keys') || {}, current ? current.fresh.player : players.current)); };
readCameraKeys();
settings.onChange((key) => { if (key === 'keys') readCameraKeys(); });
/** Switches between the original camera and first person, as the camera key does (controller, touch). */
export const toggleCamera = () => settings.set('camera', settings.get('camera') === 'first' ? 'third' : 'first');

// Looking around, as in the JavaScript port (its camera-control.js). The original has no mouse look
// (with its shipped settings the mouse does nothing in the world); the host does it on the original
// camera (source/host/look.js): sideways turns RedCat and the camera together at once, up and down
// tilts the view (in third person the camera swings around RedCat's chest). 0.002 radians per pixel
// at look speed 1, on both axes; moving the mouse down looks down.
const LOOK_RADIANS = 0.002;
const lookRest = [0, 0];
function look(dx, dy = 0) {
  if (!(dx || dy) || !game.running) return;
  const s = Math.min(2, Math.max(0.2, Number(settings.get('sensitivity')) || 1));
  const out = [0, 0];
  for (const [k, d] of [[0, dx], [1, dy]]) { const v = d * LOOK_RADIANS * s * 1e6 + lookRest[k]; out[k] = Math.trunc(v); lookRest[k] = v - out[k]; }
  if (out[0] || out[1]) push(EV.LOOK, out[0], out[1]);
}
settings.onChange((key, value) => { if (key === 'camera' && game.running) push(EV.SETTING, SET.FIRST_PERSON, value === 'first' ? 1 : 0); });
// The fixes carried over from the JavaScript port (source/host/fixes.js). All are on unless the
// setting `fixes` (or ?fixes= in the address, for a test) says otherwise; two of them are the
// player's own settings and can be changed while a game runs.
const FIX_SETTINGS = ['towerFire', 'musicContinuity'];
function fixesNow() {
  let over = '';
  try { over = new URLSearchParams(location.search).get('fixes') || settings.get('fixes') || ''; } catch (e) { /* no address */ }
  let f;
  try { f = fixFlags(over); } catch (e) { f = fixFlags(''); }
  for (const k of FIX_SETTINGS) f[k] = f[k] && settings.get(k) !== false;
  return f;
}
settings.onChange((key) => { if (!game.running || !(FIX_SETTINGS.includes(key) || key === 'fixes')) return; const f = fixesNow(); FIX_NAMES.forEach((name, k) => push(EV.SETTING, SET.FIX, k, f[name] ? 1 : 0)); });

const typing = (e) => e.target instanceof HTMLElement && (e.target.isContentEditable || /^(INPUT|TEXTAREA|SELECT)$/.test(e.target.tagName));
window.addEventListener('keydown', (e) => {
  if (!game.running || typing(e)) return;
  if (e.code === 'Escape') escSeen = performance.now();          // this one did reach the page (see swallowedEscape)
  if (e.code === 'F5') { e.preventDefault(); if (!e.repeat) game.save({ manual: true }); return; }
  // F9 loads the saved place, as in the JavaScript port. Never sent to the game: there it is the debug key for god mode.
  if (e.code === 'F9') { e.preventDefault(); if (!e.repeat) game.reload(); return; }
  if (cameraKeys.has(e.code) && !e.ctrlKey && !e.metaKey && !e.altKey) { e.preventDefault(); if (!e.repeat) toggleCamera(); return; }
  const vk = VK[e.code];
  if (vk === undefined) return;
  if (e.code !== 'F11' && e.code !== 'F12') e.preventDefault();
  if (!e.repeat) push(EV.KEYDOWN, vk, e.key.length === 1 ? e.key.charCodeAt(0) & 0xFF : vk === 0x0D ? 13 : vk === 0x1B ? 27 : vk === 0x08 ? 8 : 0);
}, { capture: true });
window.addEventListener('keyup', (e) => {
  if (e.code === 'F5' || e.code === 'F9') return;          // the page's own keys: the game never saw them go down
  const vk = VK[e.code]; if (game.running && vk !== undefined && !typing(e)) { push(EV.KEYUP, vk); e.preventDefault(); }
}, { capture: true });
// the canvas' own listeners: bound again when a new canvas element takes its place (startPainter)
function bindCanvas() {
  const c = canvas;
  c.addEventListener('mousedown', (e) => {
    if (!game.running) return;
    // With the mouse caught for looking around, the left button shoots, as in the JavaScript port: it holds the
    // keys of the action Fire. (The click that catches the mouse does not shoot. The button itself still reaches
    // the game, whose own screens read the mouse.)
    if (e.button === 0 && settings.get('mouseLook') && document.pointerLockElement === c && !mouseFire.length) { mouseFire = vksFor(binds, 'attack').filter((vk) => !keysDown.has(vk)); for (const vk of mouseFire) push(EV.KEYDOWN, vk, 0); }
    if (settings.get('mouseLook') && document.pointerLockElement !== c && c.requestPointerLock) c.requestPointerLock();
    game.resumeAudio();
    push(EV.DOWN, e.button === 2 ? 1 : e.button === 1 ? 2 : 0);
    // The results screen of a world waits for the key of Schieten (0x52E620, "Druk op SCHIETEN om verder te
    // gaan"): a click or a tap anywhere on the picture is that key, as in the JavaScript port.
    if (e.button === 0 && game.scene().state === GS_RESULTS) tapFire();
    e.preventDefault();
  });
  c.addEventListener('contextmenu', (e) => e.preventDefault());
  c.addEventListener('wheel', (e) => { if (game.running) { push(EV.WHEEL, e.deltaY < 0 ? 120 : -120); e.preventDefault(); } }, { passive: false });
}
bindCanvas();
let mouseFire = [];       // the keys the left mouse button holds
const GS_RESULTS = 4;
/** A short press of the keys of Schieten. */
function tapFire() {
  const keys = vksFor(binds, 'attack').filter((vk) => !keysDown.has(vk));
  for (const vk of keys) push(EV.KEYDOWN, vk, 0);
  setTimeout(() => { for (const vk of keys) push(EV.KEYUP, vk); }, 150);
  return keys.length > 0;
}
window.addEventListener('mouseup', (e) => { if (e.button === 0 && mouseFire.length) { for (const vk of mouseFire) push(EV.KEYUP, vk); mouseFire = []; } if (game.running) push(EV.UP, e.button === 2 ? 1 : e.button === 1 ? 2 : 0); });
window.addEventListener('mousemove', (e) => {
  if (!(game.running && document.pointerLockElement === canvas && (e.movementX || e.movementY))) return;
  push(EV.MOVE, e.movementX, e.movementY);          // the game's own screens (retry, menus) read the pointer
  if (settings.get('mouseLook')) look(e.movementX, e.movementY);
});
// a hidden tab stops the game thread and its clock
document.addEventListener('visibilitychange', () => { if (document.hidden) leaving(); if (document.hidden && game.running && !pause.user) game.save(); pause.hidden = document.hidden; applyPause(); if (!document.hidden && document.hasFocus()) unblur(); armNotice(); });
// One saved place per player and kind of game: F5, when the world changes (worker.js onPass), when the page is hidden (that is what keeps a game whose tab a
// phone throws away; the game thread finishes the pass it is in and takes the state before it
// pauses, worker.js frame(); a game inside one of its own loops, such as its menu, cannot), and by itself every minute of a game, counted from its start and from the
// last save. On a phone every three minutes: a save is some 45 MB passing through memory and a
// moment without frames.
const SAVE_EVERY = phone ? 180000 : 60000;
let saveDue = Infinity;
setInterval(() => { if (game.running && !game.paused && performance.now() >= saveDue) game.save(); }, 2000);

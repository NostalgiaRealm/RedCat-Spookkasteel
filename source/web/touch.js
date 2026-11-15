// Touch controls: a stick for walking, the rest of the picture for looking around, and buttons
// for the game's actions. Like the gamepad they press the keys the player's file has for each
// action (see gamepad.js), and the stick is also given to the host as a value: RedCat walks in
// its direction at its speed (source/host/move.js). Shown on a phone or tablet (setting "touch":
// auto; device.js has the rule, the JavaScript port's), always (on) or never (off). The overlay is
// built here; its look is in touch.css.
//
//   stick              walk towards it, relative to the camera; pulling back backs up; how far sets the speed
//   the picture        look around
//   Spring, Schieten   jump (and Enter for the game's own screens), shoot
//   Lopen              tap: walk slowly, in every direction, until tapped again
//   Camera             tap: first person / the original camera
//   Menu               the game's own menu (Esc)
//   free flight        as in the JavaScript port: Spring is labelled Omhoog (the Jump key flies up, source/host/move.js),
//                      a button Omlaag (the original's MoveDown, End) takes the place of Lopen, which is not there
// While the game is inside a loop of its own (its Esc menu and that menu's pages, its pause, its retry screen, the
// results screen: game.scene().nested) the game draws text over the whole picture and there is nothing to steer. The JavaScript
// port took its whole overlay away while its menu was open (touch-controls.js: hidden unless "playing"); here the
// menu is the game's own and wants keys, so the stick, the look area, Camera and Lopen go and four small arrow
// buttons come instead, at the edges where the game's pages have no text: ▲ ▼ at the left edge (the game's menu
// takes the arrow keys themselves: run 2026-11-14, Down moves the selection), ◀ ▶ at the right above Schieten (the
// sliders of Weergave and Geluid). Spring (Enter) picks, Menu (Esc) closes or goes back; Menu moves clear of the
// page's title (touch.css). The retry screen has a wider title and Ja / Nee in its bottom band: Menu goes
// further right, Spring rises above the band and Schieten is not there. The results screen (state 4) has nothing to
// choose: no arrows, and Schieten (the key its own line asks for) in Spring's corner. The game's pause (P) has no
// arrows either. Which loop it is comes from the game thread (game.scene().own, worker.js).
// While the game loads a world (state 1, GS_LOADING: at the start, after "Ja" on the retry screen, between two worlds)
// there are no touch controls at all: the screen is drawn from inside one call and its refresh asks for no action
// (CAdamApplication::ProcessMessages 0x4BEF70 handles Menu and Pause only for the main loop's own call,
// docs/research/startup-and-loop.md 4.2), so Menu, Spring, Schieten and the arrows did nothing there, and Menu lay
// over the last letter of the title "Even Wachten" (0.205 of the picture's height to either side of the middle).
// The gear stays. What is on screen is also written on <html> (data-game-screen: loading, menu, pause, retry,
// results; absent in play), for the frame counter's place (public/index.html).
// A fade (FadeOutCurrentState 0x52C270 / FadeInCurrentState 0x52C5F0, docs/research/startup-and-loop.md N7: a loop of
// the game's own with every change of state, seen as nested with no own loop named while a world is current, e.g.
// between the loading screen and play) is no screen: only the arrows go, everything else and the frame counter stay as
// the screen before it had them. It was taken for the game's menu, so the arrows flashed and the counter jumped.
import { game, toggleCamera } from './game.js';
import { settings } from './settings.js';
import { holdKeys, releaseAll, setStick, setWalk } from './gamepad.js';
import { phone } from './device.js';

const VK = { ENTER: 0x0D, ESC: 0x1B, HOME: 0x24, END: 0x23, LEFT: 0x25, UP: 0x26, RIGHT: 0x27, DOWN: 0x28 };
const GS_GAME = 3;              // CAdamGame +0x98 (game.scene().state): a world is played
const GS_LOADING = 1;           // CAdamGame +0x98 (game.scene().state): the world is being loaded
const LOOK_FACTOR = 3;          // mouse pixels per CSS pixel of finger movement, as in the JavaScript port (TOUCH_LOOK_GAIN)
const DEAD = 0.12;              // of the stick's radius: takes out a finger's jitter, the rest stays gradual (the JavaScript port's touch-controls.js)
const stage = document.getElementById('stage');
if (!document.querySelector('link[href$="touch.css"]')) { const l = document.createElement('link'); l.rel = 'stylesheet'; l.href = new URL('./touch.css', import.meta.url).href; document.head.appendChild(l); }

const el = (tag, cls, text) => { const e = document.createElement(tag); e.className = cls; if (text) e.textContent = text; return e; };
const root = el('div', 'touch-controls');
root.hidden = true;
const look = el('div', 'touch-look');
const stick = el('div', 'touch-stick'), knob = el('div', 'touch-knob');
stick.appendChild(knob);
const jump = el('button', 'touch-button touch-jump', 'Spring');
const fire = el('button', 'touch-button touch-fire', 'Schieten');
const menu = el('button', 'touch-button touch-pill touch-menu', 'Menu');
const camera = el('button', 'touch-button touch-pill touch-camera', 'Camera');
const walk = el('button', 'touch-button touch-pill touch-walk', 'Lopen');
walk.setAttribute('aria-pressed', 'false');
// only while the free-flight cheat is on, in Lopen's place: the original's MoveDown (End)
const flyDown = el('button', 'touch-button touch-pill touch-descend', 'Omlaag');
flyDown.hidden = true;
// only while the game is in a loop of its own (its menu, pause, retry screen): the arrow keys
const nav = [['up', '▲', 'Omhoog', VK.UP], ['down', '▼', 'Omlaag', VK.DOWN], ['left', '◀', 'Links', VK.LEFT], ['right', '▶', 'Rechts', VK.RIGHT]].map(([name, sign, label, vk]) => {
  const b = el('button', 'touch-button touch-nav touch-nav-' + name, sign);
  b.setAttribute('aria-label', label); b.hidden = true;
  return { b, name, vk };
});
for (const b of [jump, fire, menu, camera, walk, flyDown, ...nav.map((n) => n.b)]) b.type = 'button';
root.append(look, stick, jump, fire, menu, camera, walk, flyDown, ...nav.map((n) => n.b));
stage.appendChild(root);

export const touchEnabled = () => {
  const mode = settings.get('touch');
  if (mode === 'on') return true;
  if (mode === 'off') return false;
  return phone;
};
let stickId = null, lookId = null, walking = false, ownLoop = false, ownKind = '', walkOff = false;
const buttons = [];
/** Lets go of everything a finger holds: the game must not keep walking when the fingers' events stop coming. */
const letGo = () => {
  stickId = null; lookId = null; knob.style.transform = '';
  for (const b of buttons) b.release();
  setStick('touch', 0, 0);
};
const setWalking = (on) => { walking = on; walk.classList.toggle('held', on); walk.setAttribute('aria-pressed', String(on)); setWalk('touch', on); };
const refresh = () => {
  const flying = !!(game.cheats.state && game.cheats.state.flight);
  // the game's own menu, pause, retry screen or results screen: see the top of this file
  const now = game.running ? game.scene() : { nested: false, own: '', state: 0 };
  const own = now.nested;
  // which of them (game.scene().own, read by the game thread from the game's stack; state 4 is the results screen)
  const kind = now.state === GS_LOADING ? 'loading' : !own ? '' : now.state === 4 ? 'results' : now.own === 'retry' || now.own === 'pause' ? now.own : now.own === '' && now.state === GS_GAME ? 'fade' : 'menu';
  if (kind === 'fade') {
    // a fade between two screens (see the top of this file): what the screen before it showed stays, but for the arrows
    if (ownKind !== 'fade') { ownKind = 'fade'; ownLoop = own; for (const n of nav) n.b.hidden = true; for (const b of buttons) if ((b.own !== undefined && b.own !== own) || b.button.hidden) b.release(); }
  } else if (kind !== ownKind) {
    ownKind = kind; ownLoop = own;
    const loading = kind === 'loading';
    if (kind) document.documentElement.dataset.gameScreen = kind; else delete document.documentElement.dataset.gameScreen;
    root.classList.toggle('touch-own-loop', own);
    root.classList.toggle('touch-retry', kind === 'retry');
    root.classList.toggle('touch-results', kind === 'results');
    camera.hidden = walkOff = own || loading;
    menu.hidden = loading;
    // the arrows only where they do something: the game's menu and Ja / Nee of the retry screen; the results screen
    // and the pause have nothing to choose
    for (const n of nav) n.b.hidden = kind !== 'menu' && kind !== 'retry';
    // the results screen goes on with Schieten (its own line says so), which takes Spring's corner there, clear of
    // the score column; the retry screen has Ja and Nee (arrows, Spring) and no use for Schieten
    jump.hidden = kind === 'results' || loading; fire.hidden = kind === 'retry' || loading;
    for (const b of buttons) if ((b.own !== undefined && b.own !== own) || b.button.hidden) b.release();
  }
  // free flight: Omlaag where Lopen is, and Spring says what it does there (a walk left switched on would sink him: move.js)
  if (flying && walking) setWalking(false);
  walk.hidden = walkOff || flying;
  const sink = !flying || walkOff;
  if (flyDown.hidden !== sink) { flyDown.hidden = sink; if (sink) for (const b of buttons) if (b.button === flyDown) b.release(); }
  const label = flying && !own ? 'Omhoog' : 'Spring';
  if (jump.textContent !== label) jump.textContent = label;
  // while a scene of the game has the controls there is nothing to steer: the stick and the look area go, the buttons stay
  // (the cutscene's own state comes every frame, game.scene(); the statistics, once a second, also know the moments RedCat gets up)
  const scene = own || kind === 'loading' || (game.running && (game.scene().cut !== 0 || !!(game.stats && game.stats.cutscene)));
  if (stick.hidden !== scene) { stick.hidden = look.hidden = scene; if (scene) { stickId = null; lookId = null; knob.style.transform = ''; setStick('touch', 0, 0); } }
  const show = game.running && touchEnabled();
  document.documentElement.classList.toggle('touch-shown', show);
  if (root.hidden === !show) return;
  root.hidden = !show;
  if (!show) { letGo(); setWalking(false); releaseAll(); }
};
setInterval(refresh, 150);
settings.onChange((k) => { if (k === 'touch') refresh(); });
window.addEventListener('recomp-running', () => { setWalking(false); refresh(); });
// as in the JavaScript port: held input is cleared when the window changes shape and when the page goes to the background
window.addEventListener('resize', letGo);
window.addEventListener('blur', letGo);
document.addEventListener('visibilitychange', () => { if (document.hidden) letGo(); });

// stick: its place relative to the middle, as a value from 0 at the dead zone to 1 at the rim
const stickMove = (e) => {
  const r = stick.getBoundingClientRect();
  const cx = r.left + r.width / 2, cy = r.top + r.height / 2, R = Math.max(1, r.width / 2);
  const dx = e.clientX - cx, dy = e.clientY - cy, distance = Math.hypot(dx, dy);
  const strength = Math.max(0, (Math.min(distance / R, 1) - DEAD) / (1 - DEAD));
  const travel = distance ? Math.min(distance, R) / distance * 0.6 : 0;
  knob.style.transform = `translate(${dx * travel}px, ${dy * travel}px)`;
  setStick('touch', distance ? dx / distance * strength : 0, distance ? -dy / distance * strength : 0);
};
const stickEnd = (e) => {
  if (e.pointerId !== stickId) return;
  stickId = null; knob.style.transform = '';
  setStick('touch', 0, 0);
};
stick.addEventListener('pointerdown', (e) => { if (stickId !== null) return; stickId = e.pointerId; stick.setPointerCapture(e.pointerId); game.resumeAudio(); stickMove(e); e.preventDefault(); });
stick.addEventListener('pointermove', (e) => { if (e.pointerId === stickId) { stickMove(e); e.preventDefault(); } });
for (const type of ['pointerup', 'pointercancel', 'lostpointercapture']) stick.addEventListener(type, stickEnd);

// look area: finger movement becomes mouse movement
let lx = 0, ly = 0;
look.addEventListener('pointerdown', (e) => { if (lookId !== null) return; lookId = e.pointerId; lx = e.clientX; ly = e.clientY; look.setPointerCapture(e.pointerId); game.resumeAudio(); e.preventDefault(); });
look.addEventListener('pointermove', (e) => { if (e.pointerId !== lookId) return; game.input.mouse((e.clientX - lx) * LOOK_FACTOR, (e.clientY - ly) * LOOK_FACTOR); lx = e.clientX; ly = e.clientY; e.preventDefault(); });
for (const type of ['pointerup', 'pointercancel', 'lostpointercapture']) look.addEventListener(type, (e) => { if (e.pointerId === lookId) lookId = null; });

// buttons: held while a finger is on them; the keys are asked for when the finger comes down
const bind = (button, name, vks, own) => {
  const ids = new Set();
  const off = () => { holdKeys(name, [], false); button.classList.remove('held'); };
  const up = (e) => { if (!ids.delete(e.pointerId)) return; if (!ids.size) off(); };
  button.addEventListener('pointerdown', (e) => { ids.add(e.pointerId); button.setPointerCapture(e.pointerId); holdKeys(name, vks(), true); button.classList.add('held'); game.resumeAudio(); e.preventDefault(); });
  for (const type of ['pointerup', 'pointercancel', 'lostpointercapture']) button.addEventListener(type, up);
  button.addEventListener('contextmenu', (e) => e.preventDefault());
  buttons.push({ own, button, release: () => { if (ids.size) { ids.clear(); off(); } } });         // own: a button of the game's own loops only (true) or of play only (false)
};
// a button that does something once, when the finger comes down
const tap = (button, fn) => {
  button.addEventListener('pointerdown', (e) => { game.resumeAudio(); fn(); e.preventDefault(); });
  button.addEventListener('contextmenu', (e) => e.preventDefault());
};
bind(jump, 't-jump', () => [...game.input.vks('jump'), VK.ENTER]);
bind(fire, 't-fire', () => game.input.vks('attack'));
bind(menu, 't-menu', () => [VK.ESC]);
bind(flyDown, 't-fly-down', () => [VK.END], false);
for (const n of nav) bind(n.b, 't-nav-' + n.name, () => [n.vk], true);
tap(camera, toggleCamera);
tap(walk, () => setWalking(!walking));
root.addEventListener('contextmenu', (e) => e.preventDefault());

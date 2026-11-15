// "Overslaan": hold a key, a controller button or a finger for two seconds during a scene of the
// game and the scene is skipped. The rule and the look are the JavaScript port's (its
// cutscene-skip.js and main.js): the circle at the bottom right fills while the hold lasts,
// letting go or a pause empties it, and a hold that did its work counts for nothing more until it
// is let go (no second scene skipped with the same press). What skipping is: source/host/skip.js.
//
//   keyboard     E (setting `keys.skip`: KeyboardEvent.code values; the JavaScript port's "Gebruiken / overslaan")
//   controller   X / square (it also shoots, but nobody shoots in a scene)
//   touch        the line "Overslaan" itself, which is a button there
import { game } from './game.js';
import { settings } from './settings.js';
import { gamepad, padHeld } from './gamepad.js';
import { touchEnabled } from './touch.js';

export const HOLD_SECONDS = 2;
/** The hold, as the JavaScript port's CutsceneSkipHold. */
export class SkipHold {
  constructor() { this.elapsed = 0; this.consumed = false; }
  reset() { this.elapsed = 0; this.consumed = false; }
  /** dt seconds went by; held: the key is down; active: a scene runs that can be skipped. True once, when the hold is complete. */
  update(dt, held, active) {
    if (!held) { this.reset(); return false; }
    if (!active) { this.elapsed = 0; return false; }
    if (this.consumed) return false;
    this.elapsed = Math.min(HOLD_SECONDS, this.elapsed + Math.max(0, dt));
    if (this.elapsed >= HOLD_SECONDS - 1e-8) { this.consumed = true; return true; }
    return false;
  }
  get progress() { return this.elapsed / HOLD_SECONDS; }
}

const el = document.getElementById('cutscene-skip');
const hold = new SkipHold();
const keys = new Set(), fingers = new Set();
const codes = () => { const k = (settings.get('keys') || {}).skip; return Array.isArray(k) && k.length ? k : ['KeyE']; };
const keyLabel = () => { const c = codes()[0] || 'KeyE'; return c.replace(/^Key|^Digit/, ''); };
window.addEventListener('keydown', (e) => { if (codes().includes(e.code) && !e.ctrlKey && !e.metaKey && !e.altKey) keys.add(e.code); }, true);
window.addEventListener('keyup', (e) => { keys.delete(e.code); }, true);
const clear = () => { keys.clear(); fingers.clear(); hold.reset(); };
window.addEventListener('blur', clear);
document.addEventListener('visibilitychange', () => { if (document.hidden) clear(); });
if (el) {
  el.addEventListener('pointerdown', (e) => { fingers.add(e.pointerId); try { el.setPointerCapture(e.pointerId); } catch (x) { /* no capture: the up event still comes */ } game.resumeAudio(); e.preventDefault(); });
  for (const type of ['pointerup', 'pointercancel', 'lostpointercapture']) el.addEventListener(type, (e) => { fingers.delete(e.pointerId); });
  el.addEventListener('contextmenu', (e) => e.preventDefault());
}
const controllerActive = () => gamepad.connected && gamepad.inUse;        // (not the menu's body.controller-input: nothing keeps that up while a game runs)
let labelFor = '';
const label = () => {
  if (!el) return;
  const kind = controllerActive() ? 'controller' : touchEnabled() ? 'touch' : 'key:' + keyLabel();
  if (kind === labelFor) return;
  labelFor = kind;
  el.classList.toggle('controller', kind === 'controller'); el.classList.toggle('touch', kind === 'touch');
  el.setAttribute('aria-label', kind === 'controller' ? 'Houd X of vierkant twee seconden ingedrukt om over te slaan' : kind === 'touch' ? 'Houd Overslaan twee seconden ingedrukt' : `Houd ${keyLabel()} twee seconden ingedrukt om over te slaan`);
  const b = el.querySelector('b');
  b.textContent = kind === 'controller' ? 'X /' : kind === 'touch' ? '2s' : keyLabel();
  if (kind === 'controller') { const square = document.createElement('span'); square.className = 'controller-square'; square.setAttribute('aria-hidden', 'true'); b.append(square); }
};
let last = 0, shown = null, drawn = -1, ownLoop = false;
const frame = (t) => {
  requestAnimationFrame(frame);
  const dt = Math.min(0.1, (t - last) / 1000) || 0;
  last = t;
  if (!el) return;
  const scene = game.running ? game.scene() : { cut: 0, skipping: false, held: false, slow: false, nested: false, state: 0 };
  // the game's own menu or pause over a scene (Esc and P work there): no pass comes, so a hold would do nothing;
  // the prompt goes, and so does the subtitle box, which would lie over the game's menu (port.css)
  if (scene.nested !== ownLoop) { ownLoop = scene.nested; document.documentElement.classList.toggle('game-own-loop', ownLoop); }
  // a scene runs (the bars are coming or it is under way), nothing is being skipped yet, and the game is not waiting
  const active = game.running && !game.paused && !scene.skipping && (scene.cut === 1 || scene.cut === 2) && !scene.nested && !document.querySelector('dialog[open]');
  const held = keys.size > 0 || fingers.size > 0 || (controllerActive() && padHeld(2));
  if (game.paused) hold.reset();
  else if (hold.update(dt, held, active)) game.skipScene();
  // while a skip runs, and until the game after the scene is on the canvas, the circle stays, full, over the scene's last picture
  const visible = active || scene.skipping || scene.held;
  if (visible !== shown) { shown = visible; el.hidden = !visible; if (visible) { labelFor = ''; } }
  if (!visible) return;
  label();
  // a skip that takes long on this device (game.scene().slow): the circle turns, so that the still picture is not taken for a game that hangs
  el.classList.toggle('busy', scene.skipping && scene.slow);
  const progress = scene.skipping || scene.held ? 1 : hold.progress, step = Math.round(progress * 100);
  if (step !== drawn) { drawn = step; document.getElementById('skip-progress').style.strokeDashoffset = String(100 * (1 - progress)); el.setAttribute('aria-valuenow', String(step)); }
};
requestAnimationFrame(frame);
export const skip = { hold, el };

// The results screen of a world: "Druk op SCHIETEN om verder te gaan". A click or a tap on the picture is that
// key (game.js); this line says so and is a button for whoever cannot reach the picture (the touch controls lie
// over it). Wording of the JavaScript port.
const more = document.getElementById('results-continue');
if (more) {
  more.addEventListener('click', () => { game.resumeAudio(); game.continueResults(); });
  setInterval(() => { const on = game.running && !game.paused && game.scene().state === 4; if (more.hidden === on) more.hidden = !on; }, 250);
}

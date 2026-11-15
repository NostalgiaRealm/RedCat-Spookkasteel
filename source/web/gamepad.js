// Gamepad support. The original game knows the keyboard, the mouse and an old-style joystick whose
// axes it reduces to on and off (source/host/move.js); a modern controller is mapped onto the
// original key path, and its left stick is also given to the host as a value, so that RedCat walks
// in the stick's direction at the stick's speed. Uses the standard mapping of the browser Gamepad
// API; a controller the browser cannot map is ignored.
//
//   left stick           walk in that direction, gradually      (forward or back key + the stick's value)
//   d-pad                walk and turn, the game's own menus    (Up, Down, Left, Right and the player's keys for them)
//   right stick          look around                            (mouse movement)
//   A                    jump, confirm; fly up in free flight   (Jump, Enter; Jump flies up there, source/host/move.js, and MoveUp)
//   X, RT, RB            shoot                                  (Fire); X held for two seconds in a scene skips it (skip.js)
//   B                    shoot; fly down in free flight         (Fire; MoveDown)
//   Y                    first person / original camera         (the page's camera key)
//   LB                   walk slowly while held
//   LT                   fly down in free flight                (MoveDown: End)
//   Start                the game's menu                        (Esc)
//   Back / View          pause                                  (P)
//   L3                   scores                                 (Tab)
//   R3                   this port's settings over the game     (as F10)
// The keys are the ones the player's file has for each action (keybinds.js, game.input.vks), so a
// player who changes keys keeps a working controller. As in the JavaScript port: an 18 percent
// radial dead zone (setting `deadzone`), and the game is paused when the controller that was being
// used disappears.
import { game, toggleCamera } from './game.js';
import { settings } from './settings.js';
import { radial, stickKey } from './stick.js';

const VK = { UP: 0x26, DOWN: 0x28, LEFT: 0x25, RIGHT: 0x27, SPACE: 0x20, ENTER: 0x0D, ESC: 0x1B, P: 0x50, TAB: 0x09, HOME: 0x24, END: 0x23 };
const LOOK_SPEED = 900;         // mouse pixels per second at full deflection, as in the JavaScript port: 1.8 radians per second at look speed 1
const held = new Map();         // vk -> number of sources holding it
const sources = new Map();      // source name -> Set(vk)
const CHARS = { [VK.ENTER]: 13, [VK.ESC]: 27, [VK.SPACE]: 32 };

/** Holds or releases keys for a named source (a stick direction, a button); keys shared by sources stay down until all let go. */
export function holdKeys(source, vks, down) {
  let set = sources.get(source);
  if (!set) sources.set(source, set = new Set());
  // a source that holds other keys than before (the player changed his keys) lets go of the old ones first
  if (down) for (const vk of [...set]) if (!vks.includes(vk)) { set.delete(vk); const n = (held.get(vk) || 1) - 1; held.set(vk, n); if (n === 0) game.input.key(vk, false); }
  for (const vk of down ? vks : [...set]) {
    if (down === set.has(vk)) continue;
    const n = (held.get(vk) || 0) + (down ? 1 : -1);
    held.set(vk, n);
    if (down) { set.add(vk); if (n === 1) game.input.key(vk, true, CHARS[vk] || 0); }
    else { set.delete(vk); if (n === 0) game.input.key(vk, false); }
  }
}
// A movement stick (the controller's left one, the touch stick): its value for the host, and the key for the one
// of the game's two directions it lies in. Several sticks add up.
const sticks = new Map();
export function setStick(source, x, y) {
  if (x || y) sticks.set(source, [x, y]); else sticks.delete(source);
  let sx = 0, sy = 0;
  for (const [a, b] of sticks.values()) { sx += a; sy += b; }
  const n = Math.hypot(sx, sy);
  if (n > 1) { sx /= n; sy /= n; }
  const key = stickKey(sx, sy);
  holdKeys('stick-forward', game.input.vks('forward'), key === 'forward');
  holdKeys('stick-back', game.input.vks('backward'), key === 'back');
  game.input.stick(sx, sy);
}
const walks = new Set();
export function setWalk(source, on) { if (on) walks.add(source); else walks.delete(source); game.input.walk(source, on); }
export function releaseAll() {
  for (const [name, set] of sources) holdKeys(name, [...set], false);
  for (const name of [...sticks.keys()]) setStick(name, 0, 0);
  for (const name of [...walks]) setWalk(name, false);
}

let last = 0, active = -1, used = false, lost = false;
const edge = new Map();
// inUse: the controller is what the player works with now: set by a button or a stick moved, taken away by a real
// key press or pointer. The menu keeps its own mark for its focus ring (body.controller-input, menu.js), but that
// one is only kept up while the menu or a dialog is in front; the prompts over a running game (the skip circle,
// the first-time hint) ask here.
export const gamepad = { connected: false, id: '', available: true, inUse: false };
for (const type of ['keydown', 'pointerdown', 'mousedown', 'touchstart']) window.addEventListener(type, (e) => { if (e.isTrusted) gamepad.inUse = false; }, { capture: true, passive: true });
// the buttons of the controller in use that are down now, by number: for code that wants a button without a key (skip.js)
let buttonsDown = 0;
export const padHeld = (b) => (buttonsDown & (1 << b)) !== 0;
const flying = () => !!(game.cheats.state && game.cheats.state.flight);
const poll = (t) => {
  requestAnimationFrame(poll);
  const dt = Math.min(0.1, (t - last) / 1000) || 0;
  last = t;
  let pads = [];
  // (a page that is not served over HTTPS or from localhost has no controllers, and a browser may refuse them)
  try { pads = navigator.getGamepads ? navigator.getGamepads() : []; gamepad.available = !!navigator.getGamepads && window.isSecureContext !== false; } catch (e) { gamepad.available = false; }
  let pad = pads[active] && pads[active].connected && pads[active].mapping === 'standard' ? pads[active] : null;
  // The controller that was being played with is gone: the game waits, as in the JavaScript port. One that was
  // connected but not used does not interrupt anything. Another controller does not take over without a word.
  if (!pad && active >= 0 && used && game.running && !game.paused) lost = true;
  if (!pad) { active = -1; used = false; for (const p of pads) if (p && p.connected && p.mapping === 'standard') { pad = p; active = p.index; break; } }
  if (gamepad.connected !== !!pad || (pad && gamepad.id !== pad.id)) {
    gamepad.connected = !!pad; gamepad.id = pad ? pad.id : '';
    if (!pad) releaseAll();
    window.dispatchEvent(new CustomEvent('recomp-gamepad', { detail: { ...gamepad, lost } }));
  }
  buttonsDown = 0;
  if (pad) for (let b = 0; b < Math.min(17, pad.buttons.length); b++) if (pad.buttons[b] && (pad.buttons[b].pressed || pad.buttons[b].value > 0.5)) buttonsDown |= 1 << b;
  if (!pad) gamepad.inUse = false;
  else if (!gamepad.inUse && (buttonsDown !== 0 || Math.hypot(pad.axes[0] || 0, pad.axes[1] || 0) > 0.35 || Math.hypot(pad.axes[2] || 0, pad.axes[3] || 0) > 0.35)) gamepad.inUse = true;
  if (lost) { lost = false; releaseAll(); window.dispatchEvent(new CustomEvent('recomp-gamepad-lost')); return; }
  // no game, or one that waits: nothing stays held, whoever held it (the touch controls use the same holders)
  if (!game.running || game.paused) { if (held.size || sticks.size || walks.size) releaseAll(); edge.clear(); return; }
  if (!pad) return;
  const down = (b) => !!(pad.buttons[b] && (pad.buttons[b].pressed || pad.buttons[b].value > 0.5));
  const once = (b) => { const d = down(b), was = edge.get(b); edge.set(b, d); return d && was === false; };
  const vks = game.input.vks, fly = flying();
  const fire = vks('attack');
  holdKeys('b0', [...vks('jump'), VK.ENTER, ...(fly ? [VK.HOME] : [])], down(0));
  holdKeys('b1', fly ? [VK.END] : fire, down(1));
  for (const b of [2, 5, 7]) holdKeys('b' + b, fire, down(b));
  if (once(3)) toggleCamera();
  setWalk('pad', down(4));
  holdKeys('b6', fly ? [VK.END] : [], down(6) && fly);
  holdKeys('b8', [VK.P], down(8)); holdKeys('b9', [VK.ESC], down(9)); holdKeys('b10', [VK.TAB], down(10));
  if (once(11)) window.dispatchEvent(new CustomEvent('recomp-open-settings'));
  // the d-pad: the arrow keys for the game's own menus, and the player's keys for the four directions
  holdKeys('b12', [...new Set([VK.UP, ...vks('forward')])], down(12)); holdKeys('b13', [...new Set([VK.DOWN, ...vks('backward')])], down(13));
  holdKeys('b14', [...new Set([VK.LEFT, ...vks('turnLeft')])], down(14)); holdKeys('b15', [...new Set([VK.RIGHT, ...vks('turnRight')])], down(15));
  const zone = Math.max(0, Math.min(0.95, Number(settings.get('deadzone')) || 0));
  const [x, y] = radial(pad.axes[0] || 0, pad.axes[1] || 0, zone);
  setStick('pad', x, -y);
  const [rx, ry] = radial(pad.axes[2] || 0, pad.axes[3] || 0, zone);
  if (rx || ry) game.input.mouse(rx * LOOK_SPEED * dt, ry * LOOK_SPEED * dt);
  if (!used && (x || y || rx || ry || pad.buttons.some((b, k) => down(k)))) used = true;
};
requestAnimationFrame(poll);
window.addEventListener('blur', releaseAll);

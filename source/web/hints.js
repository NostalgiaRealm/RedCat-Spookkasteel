// First-time hints, as in the JavaScript port (its touch-intro-hint.js): one line that names the
// controls this port adds to the original, the first time somebody starts the first world. The
// original's own tutorials know nothing of a mouse that looks around, W A S D, a controller or a
// touch stick. Shown once per kind of input, ten seconds, when the opening scene has given the
// controls to the player; never for a continued game, and never in place of a notice.
// A visitor who saw the hint in the JavaScript port is not shown it again (its two marks are only read).
import { game } from './game.js';
import { store } from './persist.js';
import { gamepad } from './gamepad.js';
import { touchEnabled } from './touch.js';

export const HINTS = {
  desktop: 'Klik om rond te kijken · WASD om te bewegen · Esc voor het menu',
  controller: 'Linkerstick: bewegen · rechterstick: kijken · A / ×: springen · RT / R2: schieten · Start / Options: menu',
  // (the JavaScript port said "Menu: pauzeren"; here the button opens the game's own menu)
  touch: 'Stick links: bewegen · veeg rechts: kijken · Menu: het menu van het spel',
};
// Free flight (the cheat): the JavaScript port's controls line for it (its main.js, updateCheatControls), with the
// player's own keys. Shown for ten seconds each time a flight begins: when the cheat is switched on, and when a game
// starts with it on. The controller's line is this port's.
export const flightHint = (kind) => (kind === 'touch' ? 'Stick · vliegen · Omhoog / Omlaag · Schieten · Menu'
  : kind === 'controller' ? 'NO-CLIP · Linkerstick · vliegen · A / × · omhoog · B / ○ · omlaag · RT / R2 · schieten · Start / Options · menu'
  : `NO-CLIP · ${game.input.label('forward')} · vliegen · ${game.input.label('jump')} · omhoog · ${game.input.label('walk')} · omlaag · ${game.input.label('attack')} / klik · schieten · ESC · menu`);
const KEY = 'rcspook-recomp.hints.v1';
const OLD = { desktop: 'redcat.desktop-intro-hint.v1', touch: 'redcat.touch-intro-hint.v1' };
const seen = () => { try { const v = JSON.parse(store.get(KEY) || '{}'); return v && typeof v === 'object' ? v : {}; } catch (e) { return {}; } };
const oldSeen = (kind) => { try { return !!OLD[kind] && localStorage.getItem(OLD[kind]) !== null; } catch (e) { return false; } };
/** Which hint this player would get now: the touch controls, a controller that is being used, or mouse and keyboard. */
const kindNow = () => (touchEnabled() ? 'touch' : gamepad.connected && gamepad.inUse ? 'controller' : 'desktop');

let pending = false, opening = false, worldAt = 0, stale = null, timer = 0, flightSaid = false;
// the start of a game: world 1, begun and not continued
window.addEventListener('recomp-running', (e) => {
  const d = e.detail || {};
  pending = d.world === 1 && !d.resumed;
  // game.stats still holds the numbers of the game before this one until this game's first report
  opening = false; worldAt = 0; stale = game.stats;
});
window.addEventListener('recomp-exit', () => { pending = false; });
const flightCheck = () => {
  const flying = game.running && !!(game.cheats.state && game.cheats.state.flight);
  if (!flying) { flightSaid = false; return; }
  if (flightSaid || game.paused || !game.stats || game.stats === stale || !game.stats.control) return;
  if (game.hint(flightHint(kindNow()), 10000)) flightSaid = true;
};
const check = () => {
  flightCheck();
  if (!pending || !game.running || game.paused || !game.stats || !game.stats.world) return;
  // the opening scene first (the Forest's script takes the controls on its first update); the hint when it is over
  if (game.stats === stale) return;      // the numbers of the game before this one (this test comes first: their control may say "a scene")
  if (!game.stats.control) { opening = true; return; }
  // In control from the start: wait a little, a scene may still begin. Counted from the first report
  // with the world there, not from the game's start: a world that takes long to load had used the
  // time up, and the hint came before or during the opening scene.
  if (!worldAt) worldAt = performance.now();
  if (!opening && performance.now() - worldAt < 4000) return;
  const kind = kindNow(), was = seen();
  pending = false;
  if (was[kind] || oldSeen(kind)) return;
  if (!game.hint(HINTS[kind], 10000)) { pending = true; return; }      // a notice is on screen: later
  was[kind] = true;
  store.set(KEY, JSON.stringify(was));
};
timer = setInterval(check, 500);
export const hints = { kindNow, stop: () => clearInterval(timer) };

// Reads a standard-mapped controller for the menu: d-pad or left stick moves, A confirms, B goes
// back, the right stick scrolls. Repeat timing as in ../RCSPOOK_NEW/source/gamepad-input.js.
// The game's own controller input is ../web/gamepad.js; this module does nothing while a game
// runs.
const REPEAT_DELAY = 0.35, REPEAT_INTERVAL = 0.12, THRESHOLD = 0.5;
const pressed = (b) => !!b && (b.pressed === true || b.value >= 0.5);

/**
 * poll(dt, enabled) returns null (no controller, or disabled) or
 * { up, down, left, right, confirm, cancel, scroll, active }.
 * Buttons held when polling is (re)enabled or after reset() are ignored until released.
 */
export class GamepadNav {
  constructor({ deadzone = () => 0.18 } = {}) {
    this.deadzone = deadzone;
    this.nav = {};
    this.previous = { confirm: false, cancel: false };
    this.blocked = true;
  }
  reset() { this.blocked = true; this.nav = {}; }
  poll(dt, enabled = true) {
    let pad = null;
    try { for (const p of (navigator.getGamepads ? navigator.getGamepads() : [])) if (p && p.connected && p.mapping === 'standard') { pad = p; break; } } catch (e) { pad = null; }
    if (!pad || !enabled) { this.reset(); return null; }
    const dz = this.deadzone();
    const ax = (i) => { const v = pad.axes[i] || 0; return Math.abs(v) <= dz ? 0 : v; };
    const x = ax(0), y = ax(1);
    const held = {
      up: pressed(pad.buttons[12]) || y <= -THRESHOLD, down: pressed(pad.buttons[13]) || y >= THRESHOLD,
      left: pressed(pad.buttons[14]) || x <= -THRESHOLD, right: pressed(pad.buttons[15]) || x >= THRESHOLD,
    };
    const confirm = pressed(pad.buttons[0]), cancel = pressed(pad.buttons[1]);
    const anything = confirm || cancel || held.up || held.down || held.left || held.right;
    if (this.blocked) {
      if (anything) { this.previous = { confirm, cancel }; return { active: false, scroll: 0 }; }
      this.blocked = false;
    }
    const out = { confirm: confirm && !this.previous.confirm, cancel: cancel && !this.previous.cancel, scroll: ax(3), active: anything };
    this.previous = { confirm, cancel };
    for (const dir of ['up', 'down', 'left', 'right']) {
      const opposite = { up: 'down', down: 'up', left: 'right', right: 'left' }[dir];
      const on = held[dir] && !held[opposite];
      out[dir] = false;
      if (!on) delete this.nav[dir];
      else if (this.nav[dir] === undefined) { out[dir] = true; this.nav[dir] = REPEAT_DELAY; }
      else {
        const left = this.nav[dir] - dt;
        out[dir] = left <= 1e-9;
        this.nav[dir] = left <= 1e-9 ? REPEAT_INTERVAL + (left % REPEAT_INTERVAL) : left;
      }
    }
    return out;
  }
}

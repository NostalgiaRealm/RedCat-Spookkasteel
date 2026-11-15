// First in line for key events. ../web/game.js listens on window in the capture phase and, while
// a game runs, sends every key to the game and cancels its default action. This module must be
// evaluated before game.js (menu.js imports it first, and index.html loads menu.js before
// main.js), so that the menu can take F10 and can keep keys for itself while its settings are
// open over the game.
export const keyGuard = {
  keydown: null,          // (event) => void; may call event.stopImmediatePropagation()
  keyup: null,
  held: new Set(),        // KeyboardEvent.code of the keys that are down
};
window.addEventListener('keydown', (e) => { keyGuard.held.add(e.code); if (keyGuard.keydown) keyGuard.keydown(e); }, { capture: true });
window.addEventListener('keyup', (e) => { keyGuard.held.delete(e.code); if (keyGuard.keyup) keyGuard.keyup(e); }, { capture: true });
window.addEventListener('blur', () => keyGuard.held.clear());

// Stick arithmetic shared by the controller, the touch stick and the checks. No browser needed.
//
// A stick is sent to the game twice (source/host/move.js): as the key the original steering needs to
// see movement at all (forward or back), and as its value, with which the host turns that into a walk
// in the stick's own direction at the stick's own speed.
export const BACK_ANGLE = 3 * Math.PI / 4;      // within 45 degrees of straight back RedCat backs up (the JavaScript port's touchSteer)

/** A radial dead zone: nothing within `zone`, then from 0 to 1 at the rim (the JavaScript port's gamepad-input.js; 0.18 there). */
export function radial(x, y, zone) {
  x = Number.isFinite(x) ? Math.max(-1, Math.min(1, x)) : 0; y = Number.isFinite(y) ? Math.max(-1, Math.min(1, y)) : 0;
  const length = Math.hypot(x, y);
  if (!(length > zone)) return [0, 0];
  const scale = (Math.min(1, length) - zone) / ((1 - zone) * length);
  return [x * scale, y * scale];
}
/** Which of the game's two directions a stick (x right, y forward) holds: 'forward', 'back' or null when it is released. */
export function stickKey(x, y) {
  if (!(Math.hypot(x, y) > 0)) return null;
  return Math.abs(Math.atan2(x, y)) >= BACK_ANGLE ? 'back' : 'forward';
}

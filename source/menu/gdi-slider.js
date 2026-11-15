// The slider of the original options form (TGDISlider as TCompOptionB sets it up,
// docs/research/menu-audio.md 1.5): whole numbers from 0 to 100. Dragging the needle gives any
// of them, a click on the track beside the needle is one step of 10 towards the click, and the
// keys are Left / Up -1, Right / Down +1, PgUp -10, PgDn +10, Home 0, End 100.
// It sits on an <input type="range"> (for the keyboard, a controller and screen readers), but a
// browser's own range moves to wherever the track is clicked, so the pointer is handled here on
// an element that lies over the input: `hit`.
// Sizes of the original: the slider is 206 wide and the needle 37, which leaves 169 of travel;
// position = needle offset * 100 div 169 (0x55850C).
const WIDTH = 206, NEEDLE = 37, TRAVEL = WIDTH - NEEDLE;

export function gdiSlider(input, hit) {
  const clamp = (v, lo, hi) => Math.max(lo, Math.min(hi, v));
  const value = () => Number(input.value);
  const set = (v) => {
    v = clamp(Math.round(v), 0, 100);
    if (v === value()) return;
    input.value = String(v);
    input.dispatchEvent(new Event('input', { bubbles: true }));
  };
  // pointer position in the slider's own 206 pixels, whatever the form is scaled to
  const local = (e) => { const r = hit.getBoundingClientRect(); return (e.clientX - r.left) * WIDTH / (r.width || WIDTH); };
  const needleLeft = () => value() * TRAVEL / 100;
  let drag = null;          // { id, offset }: where inside the needle it was taken hold of

  hit.addEventListener('pointerdown', (e) => {
    if (e.button !== 0 || input.disabled) return;
    e.preventDefault();
    input.focus({ preventScroll: true });
    const x = local(e), left = needleLeft();
    if (x >= left && x <= left + NEEDLE) {
      drag = { id: e.pointerId, offset: x - left };
      try { hit.setPointerCapture(e.pointerId); } catch (err) { /* the pointer is already gone */ }
    } else set(value() + (x < left + NEEDLE / 2 ? -10 : 10));       // one click, one step: no repeat
  });
  hit.addEventListener('pointermove', (e) => {
    if (!drag || e.pointerId !== drag.id) return;
    set(Math.floor(clamp(local(e) - drag.offset, 0, TRAVEL) * 100 / TRAVEL));
  });
  const release = (e) => { if (drag && e.pointerId === drag.id) drag = null; };
  hit.addEventListener('pointerup', release);
  hit.addEventListener('pointercancel', release);
  hit.addEventListener('lostpointercapture', release);

  input.addEventListener('keydown', (e) => {
    if (e.altKey || e.ctrlKey || e.metaKey) return;
    const step = { ArrowLeft: -1, ArrowUp: -1, ArrowRight: 1, ArrowDown: 1, PageUp: -10, PageDown: 10 }[e.key];
    if (step !== undefined) set(value() + step);
    else if (e.key === 'Home') set(0);
    else if (e.key === 'End') set(100);
    else return;
    e.preventDefault();
  });
}

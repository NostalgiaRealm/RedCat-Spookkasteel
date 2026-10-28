/** Touch input is opt-in on desktop and automatic only on mobile web devices. */
export function normalizeTouchPreference(value) {
  if (value === true) return 'on';
  if (value === false) return 'off';
  const preference = typeof value === 'string' ? value.trim().toLowerCase() : '';
  return preference === 'on' || preference === 'off' ? preference : 'auto';
}

export function isMobileWeb({
  navigator: device = globalThis.navigator,
  matchMedia = globalThis.matchMedia?.bind(globalThis),
  desktop = globalThis.desktop,
} = {}) {
  const ua = device?.userAgent || '';
  if (desktop || /Electron\//i.test(ua)) return false;
  if (device?.userAgentData?.mobile === true) return true;
  if (/Android|iPhone|iPad|iPod|IEMobile|Opera Mini|Mobile/i.test(ua)) return true;
  const touches = Number(device?.maxTouchPoints || 0);
  if (touches > 1 && (/Macintosh/i.test(ua) || device?.platform === 'MacIntel')) return true;
  try {
    return touches > 0 && !!matchMedia?.('(pointer: coarse)').matches &&
      !!matchMedia?.('(hover: none)').matches;
  } catch {
    return false;
  }
}

export function touchControlsEnabled(preference, environment) {
  const normalized = normalizeTouchPreference(preference);
  return normalized === 'on' || (normalized === 'auto' && isMobileWeb(environment));
}

const EMPTY_INPUT = Object.freeze({forward:0,right:0,jump:false,descend:false,walk:false,attack:false,use:false});
// Skipping is a cutscene-only control, mapped to the existing hold-to-skip input.
const HELD_ACTIONS = new Map([['jump','jump'], ['attack','attack'], ['skip','use'], ['descend','descend']]);
// Finger travel is limited by the screen; keep swipes faster than mouse input.
// The camera still applies the user's sensitivity setting to these deltas.
const TOUCH_LOOK_GAIN = 3;

export class TouchControls {
  constructor({onLook = () => {}, onAction = () => {}, onGesture = () => {}} = {}) {
    this.onLook = onLook;
    this.onAction = onAction;
    this.onGesture = onGesture;
    this.enabled = false;
    this.context = {playing:false,cutscene:false,noClip:false};
    this.pointers = new Map();
    this.input = {...EMPTY_INPUT};
    this.listeners = [];
    this.disposed = false;

    this.element = document.createElement('div');
    this.element.id = 'touch-controls';
    this.element.setAttribute('aria-label', 'Aanraakbediening');
    this.element.hidden = true;

    this.move = this.createControl('move', 'div', 'Bewegen');
    this.move.setAttribute('role', 'group');
    this.knob = document.createElement('span');
    this.knob.className = 'touch-move-knob';
    this.knob.setAttribute('aria-hidden', 'true');
    this.move.append(this.knob);
    this.look = this.createControl('look', 'div', 'Veeg om te kijken');
    this.look.setAttribute('role', 'group');
    const lookHint = document.createElement('span');
    lookHint.className = 'touch-look-hint';
    lookHint.textContent = 'Veeg om te kijken';
    lookHint.setAttribute('aria-hidden', 'true');
    this.look.append(lookHint);

    this.actions = document.createElement('div');
    this.actions.className = 'touch-actions';
    this.element.append(this.actions);
    this.buttons = {};
    for (const [name, label] of [
      ['walk','Lopen'], ['camera','Camera'], ['descend','Omlaag'],
      ['skip','Overslaan · 2 s'], ['attack','Schieten'], ['jump','Spring'],
    ]) {
      const button = this.createControl(name, 'button', label, this.actions);
      button.type = 'button';
      button.textContent = label;
      button.setAttribute('aria-pressed', 'false');
      this.buttons[name] = button;
      // Keyboard and assistive-technology clicks have no preceding pointer event.
      this.listen(button, 'click', event => {
        event.preventDefault();
        if (event.detail === 0 && this.canUse(name) && !HELD_ACTIONS.has(name)) {
          this.onGesture();
          this.activate(name);
        }
      });
    }

    this.listen(window, 'pointerup', event => this.release(event));
    this.listen(window, 'pointercancel', event => this.cancel(event));
    this.listen(window, 'blur', () => this.reset());
    this.listen(window, 'resize', () => this.reset());
    this.listen(document, 'visibilitychange', () => this.reset());
    document.body.append(this.element);
    this.renderContext();
  }

  listen(target, type, handler) {
    target.addEventListener(type, handler, {passive:false});
    this.listeners.push(() => target.removeEventListener(type, handler));
  }

  createControl(name, tag, label, parent = this.element) {
    const control = document.createElement(tag);
    control.id = `touch-${name}`;
    control.className = 'touch-control';
    control.setAttribute('aria-label', label);
    this.listen(control, 'pointerdown', event => this.press(event, name, control));
    this.listen(control, 'pointermove', event => this.drag(event));
    this.listen(control, 'pointerup', event => this.release(event));
    this.listen(control, 'pointercancel', event => this.cancel(event));
    this.listen(control, 'lostpointercapture', event => this.cancel(event));
    this.listen(control, 'contextmenu', event => event.preventDefault());
    parent.append(control);
    return control;
  }

  canUse(name) {
    return !this.disposed && this.enabled && this.context.playing &&
      (this.context.cutscene ? name === 'skip' : name !== 'skip') &&
      (name !== 'descend' || this.context.noClip) &&
      (name !== 'walk' || !this.context.noClip);
  }

  setEnabled(enabled) {
    const next = !!enabled;
    if (next === this.enabled || this.disposed) return;
    this.reset();
    this.enabled = next;
    this.renderContext();
  }

  setContext(context = {}) {
    if (this.disposed) return;
    const next = {...this.context};
    for (const name of ['playing','cutscene','noClip']) {
      if (name in context) next[name] = !!context[name];
    }
    if (Object.keys(next).every(name => next[name] === this.context[name])) return;
    this.reset();
    this.context = next;
    this.renderContext();
  }

  renderContext() {
    const {playing,cutscene,noClip} = this.context;
    this.element.hidden = !this.enabled || !playing;
    this.element.classList.toggle('touch-cutscene', cutscene);
    this.element.classList.toggle('touch-noclip', noClip);
    this.move.hidden = this.look.hidden = cutscene;
    for (const [name, button] of Object.entries(this.buttons)) {
      button.hidden = (cutscene ? name !== 'skip' : name === 'skip') || (name === 'descend' && !noClip) || (name === 'walk' && noClip);
    }
    const jumpLabel = noClip ? 'Omhoog' : 'Spring';
    this.buttons.jump.textContent = jumpLabel;
    this.buttons.jump.setAttribute('aria-label', jumpLabel);
  }

  press(event, name, control) {
    if (!this.canUse(name) || (event.button != null && event.button !== 0) || this.pointers.has(event.pointerId)) return;
    event.preventDefault();
    this.onGesture();
    if ((name === 'move' || name === 'look') && [...this.pointers.values()].some(pointer => pointer.name === name)) return;
    const pointer = {name,control,x:event.clientX,y:event.clientY};
    if (name === 'move') {
      const bounds = control.getBoundingClientRect();
      pointer.centerX = bounds.left + bounds.width / 2;
      pointer.centerY = bounds.top + bounds.height / 2;
      pointer.radius = Math.max(1, Math.min(bounds.width, bounds.height) * .34);
    }
    this.pointers.set(event.pointerId, pointer);
    try { control.setPointerCapture(event.pointerId); } catch { /* Global release still clears state. */ }
    if (name === 'move') this.updateMove(pointer, event);
    else if (HELD_ACTIONS.has(name)) this.input[HELD_ACTIONS.get(name)] = true;
    else this.activate(name);
    this.renderPressed();
  }

  activate(name) {
    if (name === 'walk') {
      this.input.walk = !this.input.walk;
      this.renderPressed();
    } else if (name === 'camera') this.onAction('camera');
  }

  drag(event) {
    const pointer = this.pointers.get(event.pointerId);
    if (!pointer) return;
    event.preventDefault();
    if (pointer.name === 'move') this.updateMove(pointer, event);
    else if (pointer.name === 'look') {
      const dx = event.clientX - pointer.x, dy = event.clientY - pointer.y;
      pointer.x = event.clientX;
      pointer.y = event.clientY;
      if (dx || dy) this.onLook(dx * TOUCH_LOOK_GAIN, dy * TOUCH_LOOK_GAIN);
    }
  }

  updateMove(pointer, event) {
    const dx = event.clientX - pointer.centerX, dy = event.clientY - pointer.centerY;
    const distance = Math.hypot(dx, dy);
    const magnitude = Math.min(distance / pointer.radius, 1);
    // A small dead zone removes finger jitter; the remaining range stays analog.
    const strength = Math.max(0, (magnitude - .12) / .88);
    this.input.right = distance ? dx / distance * strength : 0;
    this.input.forward = distance ? -dy / distance * strength : 0;
    const travel = distance ? Math.min(distance, pointer.radius) / distance : 0;
    this.knob.style.transform = `translate(${dx * travel}px, ${dy * travel}px)`;
  }

  release(event) {
    const pointer = this.pointers.get(event.pointerId);
    if (!pointer) return;
    event.preventDefault();
    this.pointers.delete(event.pointerId);
    if (pointer.name === 'move') {
      this.input.forward = this.input.right = 0;
      this.knob.style.transform = '';
    } else if (HELD_ACTIONS.has(pointer.name)) {
      this.input[HELD_ACTIONS.get(pointer.name)] = [...this.pointers.values()].some(other => other.name === pointer.name);
    }
    // Delete first: releasePointerCapture can dispatch lostpointercapture synchronously.
    try { pointer.control.releasePointerCapture(event.pointerId); } catch { /* Already released. */ }
    this.renderPressed();
  }

  cancel(event) {
    if (!this.pointers.has(event.pointerId)) return;
    event.preventDefault();
    this.reset();
  }

  renderPressed() {
    this.move.classList.toggle('is-pressed', [...this.pointers.values()].some(pointer => pointer.name === 'move'));
    this.look.classList.toggle('is-pressed', [...this.pointers.values()].some(pointer => pointer.name === 'look'));
    for (const [name, button] of Object.entries(this.buttons)) {
      const pressed = !!this.input[HELD_ACTIONS.get(name) || name] ||
        [...this.pointers.values()].some(pointer => pointer.name === name);
      button.classList.toggle('is-pressed', pressed);
      button.setAttribute('aria-pressed', String(pressed));
    }
  }

  reset() {
    const pointers = [...this.pointers];
    this.pointers.clear();
    this.input = {...EMPTY_INPUT};
    this.knob.style.transform = '';
    for (const [id, pointer] of pointers) {
      try { pointer.control.releasePointerCapture(id); } catch { /* No active capture. */ }
    }
    this.renderPressed();
  }

  readInput() {
    return {...this.input};
  }

  dispose() {
    if (this.disposed) return;
    this.reset();
    this.disposed = true;
    for (const removeListener of this.listeners) removeListener();
    this.listeners.length = 0;
    this.element.remove();
  }
}

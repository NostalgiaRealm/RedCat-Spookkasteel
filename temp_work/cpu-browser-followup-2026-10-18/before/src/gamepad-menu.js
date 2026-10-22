const CONTROLS = 'button, input:not([type="hidden"]), select, a[href]';

function available(element) {
  if (!element?.isConnected || element.matches(':disabled') ||
      element.closest('[hidden], [inert], [aria-hidden="true"], [aria-disabled="true"], dialog:not([open])')) return false;
  if (!element.getClientRects().length) return false;
  const view = element.ownerDocument.defaultView;
  for (let parent = element; parent; parent = parent.parentElement) {
    const style = view.getComputedStyle(parent);
    if (style.display === 'none' || style.visibility === 'hidden' || style.visibility === 'collapse' || style.opacity === '0') return false;
  }
  return true;
}

function changed(element) {
  const Event = element.ownerDocument.defaultView.Event;
  element.dispatchEvent(new Event('input', {bubbles:true}));
  element.dispatchEvent(new Event('change', {bubbles:true}));
}

function cycleSelect(select, direction) {
  const options = [...select.options].filter(option => !option.disabled && !option.hidden &&
    !option.closest('optgroup[disabled], optgroup[hidden]'));
  if (!options.length) return;
  const current = options.indexOf(select.options[select.selectedIndex]);
  const index = current < 0 ? (direction > 0 ? 0 : options.length - 1) :
    (current + direction + options.length) % options.length;
  const next = options[index];
  if (next.index === select.selectedIndex) return;
  select.selectedIndex = next.index;
  changed(select);
}

function stepRange(input, direction) {
  const previous = input.value;
  if (input.step === 'any') {
    const min = input.min === '' ? 0 : Number(input.min);
    const max = input.max === '' ? 100 : Number(input.max);
    input.value = String(Math.max(min, Math.min(max, Number(input.value) + direction * (max - min) / 100)));
  } else if (direction > 0) input.stepUp();
  else input.stepDown();
  if (input.value !== previous) changed(input);
}

/** DOM navigation for an already-selected menu scope and debounced gamepad actions. */
export class GamepadMenu {
  constructor() {
    this.root = null;
    this.focused = null;
  }

  reset() {
    this.focused?.classList.remove('gamepad-focus');
    this.focused = null;
    this.root = null;
  }

  focus(element) {
    if (this.focused !== element) this.focused?.classList.remove('gamepad-focus');
    this.focused = element;
    if (!element) return;
    element.classList.add('gamepad-focus');
    if (element.ownerDocument.activeElement !== element) {
      element.focus({preventScroll:true});
      element.scrollIntoView({block:'nearest', inline:'nearest'});
    }
  }

  scroll(root, delta) {
    if(!root || !delta)return;
    // Panels on narrow screens and long dialogs must be readable without a mouse.
    const candidates=[this.focused,...root.querySelectorAll('.panel'),root].filter(Boolean);
    for(const element of candidates) {
      const style=element.ownerDocument.defaultView.getComputedStyle(element);
      if(/auto|scroll/.test(style.overflowY)&&element.scrollHeight>element.clientHeight+1){
        element.scrollTop+=delta;return;
      }
    }
  }

  update(root, actions = {}) {
    if (!root?.isConnected) {
      this.reset();
      return;
    }
    const switched = root !== this.root;
    if (switched) {
      this.reset();
      this.root = root;
    }
    const controls = [...root.querySelectorAll(CONTROLS)].filter(available);
    if (root.matches(CONTROLS) && available(root)) controls.unshift(root);
    if (!controls.length) {
      this.focus(null);
      return;
    }
    const active = root.ownerDocument.activeElement;
    const current = controls.includes(active) ? active :
      controls.includes(this.focused) ? this.focused :
      controls.find(element => element.hasAttribute('autofocus')) || controls[0];
    this.focus(current);

    // The action that opened this scope must not also activate its first item.
    if (switched) return;
    const vertical = Number(Boolean(actions.down)) - Number(Boolean(actions.up));
    if (vertical) {
      this.focus(controls[(controls.indexOf(current) + vertical + controls.length) % controls.length]);
      return;
    }
    const horizontal = Number(Boolean(actions.right)) - Number(Boolean(actions.left));
    if (horizontal) {
      if (current.tagName === 'SELECT') cycleSelect(current, horizontal);
      else if (current.tagName === 'INPUT' && current.type === 'range') stepRange(current, horizontal);
      else this.focus(controls[(controls.indexOf(current) + horizontal + controls.length) % controls.length]);
      return;
    }
    if (!actions.confirm) return;
    if (current.tagName === 'SELECT') cycleSelect(current, 1);
    else current.click();
    // Activation can synchronously remove or hide its panel.
    if (!available(current)) this.focus(null);
  }
}

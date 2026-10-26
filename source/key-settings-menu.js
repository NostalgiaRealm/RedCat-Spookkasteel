import {
  CONTROL_ACTIONS, normalizeControlBindings, assignControlBinding,
  controlBindingLabel, validateControlBindings,
} from './control-bindings.js';

/** Keyboard preferences are edited as a draft until the original OK action. */
export class KeySettingsMenu {
  constructor({document = globalThis.document, audio, getBindings, onApply}) {
    Object.assign(this, {document, audio, getBindings, onApply});
    this.$ = id => document.getElementById(id);
    this.dialog = this.$('key-settings');
    this.capture = null; this.busy = false;
    this.$('open-key-settings').addEventListener('click', () => this.open());
    this.$('close-key-settings').addEventListener('click', () => this.cancel());
    this.$('cancel-key-settings').addEventListener('click', () => this.cancel());
    this.$('default-key-settings').addEventListener('click', () => this.defaults());
    this.$('apply-key-settings').addEventListener('click', () => this.apply());
    this.dialog.addEventListener('cancel', event => {event.preventDefault(); this.back();});
    this.dialog.addEventListener('close', () => {this.capture = null;});
    // Capture before gameplay's bubbling handler, so assigning a key never
    // also jumps, shoots, switches view, or opens another menu.
    this.keydown = event => this.captureKey(event);
    document.addEventListener('keydown', this.keydown, true);
  }

  get isOpen() { return this.dialog.open; }

  open() {
    if (this.isOpen || this.busy) return;
    this.audio.say(['mn_in05.wav']);
    this.origin = this.document.activeElement;
    this.draft = normalizeControlBindings(this.getBindings());
    this.capture = null; this.render(); this.dialog.showModal();
    this.$('key-bindings').querySelector('button')?.focus();
  }

  render(message = '') {
    this.$('key-bindings').replaceChildren(...CONTROL_ACTIONS.map(({id, label}) => {
      const row = this.document.createElement('div'); row.className = 'setting key-binding-row';
      const name = this.document.createElement('span'); name.textContent = label;
      const button = this.document.createElement('button');
      button.type = 'button'; button.className = 'secondary key-binding-button';
      button.id = `key-binding-${id}`; button.dataset.action = id;
      button.textContent = this.capture === id ? 'Druk op een toets…' : controlBindingLabel(this.draft, id);
      button.setAttribute('aria-label', `${label}: ${button.textContent}`);
      button.setAttribute('aria-pressed', String(this.capture === id));
      button.disabled = this.busy;
      button.addEventListener('click', () => this.beginCapture(id));
      row.append(name, button); return row;
    }));
    this.$('key-binding-status').textContent = message;
    this.updateControls();
  }

  updateControls() {
    for (const element of this.dialog.querySelectorAll('button')) element.disabled = this.busy;
  }

  beginCapture(action) {
    if (!this.isOpen || this.busy) return;
    this.capture = action;
    this.render('Druk op de gewenste toets. Met Esc annuleer je deze wijziging.');
    this.$(`key-binding-${action}`)?.focus();
  }

  captureKey(event) {
    if (!this.isOpen || !this.capture || this.busy) return;
    event.preventDefault(); event.stopImmediatePropagation();
    if (event.repeat || event.isComposing) return;
    if (event.code === 'Escape') {this.cancelCapture(); return;}
    const action = this.capture;
    const result = assignControlBinding(this.draft, action, event.code);
    if (!result.ok) {
      this.render(result.error.message);
      this.$(`key-binding-${action}`)?.focus();
      return;
    }
    this.draft = result.bindings; this.capture = null;
    this.render(); this.$(`key-binding-${action}`)?.focus();
  }

  cancelCapture() {
    if (!this.capture) return;
    const action = this.capture; this.capture = null;
    this.render(); this.$(`key-binding-${action}`)?.focus();
  }

  back() {
    if (this.capture) this.cancelCapture();
    else this.cancel();
  }

  defaults() {
    if (!this.isOpen || this.busy) return;
    this.audio.say(['rcmn20.wav']);
    this.capture = null; this.draft = normalizeControlBindings();
    this.render('De standaardtoetsen zijn hersteld. Klik op OK om ze te bewaren.');
    this.$('default-key-settings').focus();
  }

  close() {
    this.capture = null; this.dialog.close();
    const origin = this.origin?.isConnected ? this.origin : this.$('open-key-settings');
    origin?.focus();
  }

  cancel() {
    if (!this.isOpen || this.busy) return;
    this.close(); this.audio.say(['rcmn2.wav']);
  }

  async apply() {
    if (!this.isOpen || this.busy) return;
    const error = validateControlBindings(this.draft);
    if (error) {this.$('key-binding-status').textContent = error.message; return;}
    this.capture = null; this.busy = true; this.updateControls();
    try {
      const result = await this.onApply(normalizeControlBindings(this.draft));
      if (result === false) throw new Error('De toetsen konden niet worden opgeslagen.');
      this.close(); this.audio.say(['rcmn1.wav']);
    } catch (error) {
      this.$('key-binding-status').textContent = error.message || 'De toetsen konden niet worden opgeslagen.';
    } finally {
      this.busy = false; this.updateControls();
    }
  }
}

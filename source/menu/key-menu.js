// "Toetsen instellen": the keys of the current player, as a page of Instellingen. The form is the
// JavaScript port's (its key-settings-menu.js: a draft until OK, one key per click, the original
// form's refusals for a key that is in use, Standaard), and what it edits is what the original
// menu's own form edited: the [KeyBinds] lines of the player's file (../web/keybinds.js), which
// the game reads when a world starts and which its own menu page Spelbesturing shows and changes
// too. One action is the port's own (Camera wisselen) and is kept in the port's settings.
// Only from the main menu: a game that runs has read its keys, and changes them itself (Esc ->
// Spelbesturing).
import { ACTIONS, readBindings, validateBindings, assignBinding, bindingLabel, bindingEntries, cameraCodes, cameraKeysOf, defaultBindings } from '../web/keybinds.js';

export class KeyMenu {
  /** players: ../web/players.js; settings: game.settings; show(page): the settings dialog's page switch. */
  constructor({ players, settings, audio, show, document = globalThis.document }) {
    Object.assign(this, { players, settings, audio, show, document });
    this.$ = (id) => document.getElementById(id);
    this.capture = null; this.draft = null; this.other = new Map(); this.player = 0;
    this.$('default-key-settings').addEventListener('click', () => this.defaults());
    this.$('apply-key-settings').addEventListener('click', () => this.apply());
    this.$('cancel-key-settings').addEventListener('click', () => this.cancel());
  }
  get isOpen() { const page = this.$('key-settings'); return !page.hidden && this.$('settings').open; }
  cameraKeys() { return cameraKeysOf(this.settings.get('keys') || {}, this.player); }

  open() {
    this.player = this.players.current;
    const text = this.player ? this.players.text(this.player) : null;
    if (!text) return false;
    const { binds, other } = readBindings(text, this.cameraKeys());
    this.draft = binds; this.other = other; this.capture = null;
    const p = this.players.get(this.player);
    this.$('key-settings-player').textContent = p && p.name ? `De toetsen van ${p.name}. Kies een actie en druk op de toets die je wilt gebruiken.` : 'Kies een actie en druk op de toets die je wilt gebruiken.';
    this.audio.say(['mn_in05.wav']);
    this.render();
    this.show('keys');
    return true;
  }
  /**
   * The rows are made once and changed in place: replacing them emptied the list for a moment, which put a
   * scrolled page back at its top, so the row being set was out of view after every click and every refused key.
   */
  render(message = '') {
    const list = this.$('key-bindings');
    if (list.children.length !== ACTIONS.length) list.replaceChildren(...ACTIONS.map(({ id, label }) => {
      const row = this.document.createElement('div'); row.className = 'setting key-binding-row';
      const name = this.document.createElement('span'); name.textContent = label;
      const button = this.document.createElement('button');
      button.type = 'button'; button.className = 'key-binding-button'; button.id = `key-binding-${id}`; button.dataset.action = id;
      button.addEventListener('click', () => this.beginCapture(id));
      row.append(name, button); return row;
    }));
    for (const { id, label } of ACTIONS) {
      const button = this.$(`key-binding-${id}`), text = this.capture === id ? 'Druk op een toets…' : bindingLabel(this.draft[id]);
      if (button.textContent !== text) button.textContent = text;
      button.setAttribute('aria-label', `${label}: ${text}`);
      button.setAttribute('aria-pressed', String(this.capture === id));
    }
    this.$('key-binding-status').textContent = message;
  }
  focus(action) { const b = this.$(`key-binding-${action}`); if (!b) return; b.focus({ preventScroll: true }); if (b.scrollIntoView) b.scrollIntoView({ block: 'nearest' }); }
  beginCapture(action) {
    if (!this.isOpen) return;
    this.capture = action;
    this.render('Druk op de gewenste toets. Met Esc annuleer je deze wijziging.');
    this.focus(action);
  }
  /** A key press while the page is open (from key-guard.js, before anything else sees it). Returns true when it was taken. */
  key(event) {
    if (!this.isOpen || !this.capture) return false;
    event.preventDefault(); event.stopImmediatePropagation();
    if (event.repeat || event.isComposing) return true;
    if (event.code === 'Escape') { this.cancelCapture(); return true; }
    const action = this.capture;
    const result = assignBinding(this.draft, action, event.code, this.other);
    if (!result.ok) { this.render(result.error.message); this.focus(action); return true; }
    this.draft = result.bindings; this.capture = null;
    this.render(); this.focus(action);
    return true;
  }
  cancelCapture() { if (!this.capture) return; const action = this.capture; this.capture = null; this.render(); this.focus(action); }
  /** Escape, or B on a controller: first out of "press a key", then out of the page. */
  back() { if (this.capture) this.cancelCapture(); else this.cancel(); }
  defaults() {
    if (!this.isOpen) return;
    this.audio.say(['rcmn20.wav']);
    this.capture = null;
    // the keys of the game's other actions may have taken a default key (changed in the game's own page): such a key is left out
    const d = defaultBindings();
    for (const id of Object.keys(d)) d[id] = d[id].filter((c) => !this.other.has(c));
    this.draft = d;
    this.render('De standaardtoetsen zijn hersteld. Klik op OK om ze te bewaren.');
    this.$('default-key-settings').focus({ preventScroll: true });
  }
  cancel() { if (!this.isOpen) return; this.capture = null; this.audio.say(['rcmn2.wav']); this.show('more'); }
  apply() {
    if (!this.isOpen) return;
    const error = validateBindings(this.draft, this.other);
    if (error) { this.$('key-binding-status').textContent = error.code === 'duplicate' ? 'Er zijn toetsen dubbel toegewezen, verander dit eerst.' : error.message; return; }
    if (!this.players.exists(this.player)) { this.$('key-binding-status').textContent = 'De toetsen konden niet worden opgeslagen.'; return; }
    this.capture = null;
    this.players.set(this.player, bindingEntries(this.draft));
    { const keys = this.settings.get('keys') || {}; this.settings.set('keys', { ...keys, v: 3, cameraBy: { ...(keys.cameraBy || {}), [this.player]: cameraCodes(this.draft) } }); }      // his own camera key, like his other keys
    this.audio.say(['rcmn1.wav']);
    this.show('more');
  }
}

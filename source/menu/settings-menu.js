// Instellingen. The first page is the original options form (artwork and layout from
// ../RCSPOOK_NEW); the pages Geavanceerd, Meer instellingen and Cheats are this port's own, with
// the wording of the old project where it had the same setting. Every value of those pages is
// one of game.settings. Their controls hold a draft: OK writes it, Annuleren (or Escape on the
// first page) drops it.
// The two sliders of the first page, Geluidseffecten and Muziek, are the original's and work as
// there (docs/research/menu-audio.md 1.5): they belong to the player, both act at once (Muziek on
// the music that is playing, Geluidseffecten on every clip that starts after the change), a move
// says RcMn16 (up) or RcMn15 (down), OK keeps the values and Annuleren puts back the ones from
// when the form opened. `volumes` is where they come from and go to: { get(): { music, effects },
// store({ music, effects }) }. Over a running game they are not shown: the game reads its
// volumes when it starts.
// The Cheats page acts at once. Opened over a running game (F10 or the gear) the caller pauses
// the game and gets onClose when the dialog goes away.
// Meer instellingen: the two sound fixes of the JavaScript port that are the player's choice (source/host/fixes.js): element id, setting.
const FIX_BOXES = [['fix-tower-fire', 'towerFire'], ['fix-music', 'musicContinuity']];
// The switches of the Cheats page: element id, function of game.cheats, key of game.cheats.state, texts.
const SWITCHES = [
  ['cheat-noclip', 'flight', 'Vrij vliegen aan. Spatie omhoog, Shift omlaag.', 'Vrij vliegen uit.'],
  ['cheat-god', 'god', 'Onsterfelijk aan.', 'Onsterfelijk uit.'],
  ['cheat-original-menu', 'originalMenu', 'De cheatpagina staat in het menu van het spel (Esc).', 'De cheatpagina is weer verborgen.'],
];
const STATE_KEY = { flight: 'flight', god: 'god', originalMenu: 'menu' };
const supplyLine = (state) => `${state.mirror} spiegelstukken · ${state.potions} toverdrank · ${state.score} punten`;
const QUALITY = { low: { scale: 50, icon: '06160000', label: 'Laag', voice: 'mn_in08.wav' }, normal: { scale: 75, icon: '06170000', label: 'Normaal', voice: 'rcmn20.wav' }, high: { scale: 100, icon: '06180000', label: 'Hoog', voice: 'mn_in09.wav' } };

import { hasLegacyData, classicAddress } from '../web/legacy-import.js';
import { phone } from '../web/device.js';
import { KeyMenu } from './key-menu.js';
import { gamepad } from '../web/gamepad.js';

export class SettingsMenu {
  constructor({ game, audio, sliderAudio, help, volumes, players = game.players, flightChoice = { get: () => false, set: () => {} }, onClose = () => {}, onStopGame = () => {}, onLoadSave = () => {}, onRecovery = null, document = globalThis.document }) {
    Object.assign(this, { game, audio, sliderAudio, help, volumes, flightChoice, onClose, onStopGame, onLoadSave, onRecovery, document });
    this.settings = game.settings;
    this.$ = (id) => document.getElementById(id);
    this.dialog = this.$('settings');
    this.inGame = false; this.page = 'base'; this.origin = null;
    this.opened = null; this.opening = 0;             // the two volumes when the form opened; counts the times it opened
    this.asked = {}; this.suppliesAsked = false;      // cheat requests the game has not answered yet
    const $ = this.$;

    // "Volle schermresolutie" is for phones and tablets, where Automatisch draws within a pixel
    // budget (game.js); elsewhere Automatisch already is the window's resolution
    if (!phone) { const full = $('resolution').querySelector('[value="full"]'); if (full) full.remove(); }
    $('open-settings').addEventListener('click', () => this.open());
    $('apply-settings').addEventListener('click', () => this.apply());
    $('close-settings').addEventListener('click', () => this.cancel());
    $('native-settings-help').addEventListener('click', () => this.help('settings'));
    $('open-advanced-settings').addEventListener('click', () => this.show('advanced'));
    $('open-more-settings').addEventListener('click', () => this.show('more'));
    $('open-cheats').addEventListener('click', () => this.show('cheats'));
    // Besturing: the port's own help page (port-help.js), in the Help viewer
    $('open-port-help').addEventListener('click', () => this.help('port-controls'));
    $('msaa').addEventListener('change', () => this.refreshMsaa());
    // The render scale and anti-aliasing can be lowered by the game itself (under 30 frames a second, game.js `quality`): a
    // form that is open shows the new values, so that OK does not write the old ones back.
    this.settings.onChange((key, value) => { if (!this.dialog.open) return; if (key === 'renderScale') { $('render-scale').value = value; $('render-scale').dispatchEvent(new Event('input', { bubbles: true })); } else if (key === 'msaa') { $('msaa').value = String(value); this.refreshMsaa(); } });
    // Toetsen instellen: a page of its own with its own OK and Annuleren, which lead back to Meer instellingen
    this.keys = new KeyMenu({ players, settings: this.settings, audio, show: (page) => this.show(page), document });
    $('open-key-settings').addEventListener('click', () => { if (!this.inGame && !this.keys.open()) $('key-settings-note').textContent = 'Kies eerst een speler in de Spelerlijst.'; });
    const pad = () => { $('controller-status').textContent = !gamepad.available ? 'Controller niet beschikbaar. Gebruik in een browser HTTPS of localhost.' : gamepad.connected ? `Controller: ${gamepad.id}` : 'Controller: sluit een controller aan en druk op een knop.'; };
    window.addEventListener('recomp-gamepad', pad); pad(); this.padStatus = pad;
    $('settings-stop-game').addEventListener('click', () => { this.close(); this.onStopGame(); });
    // over a running game: back to the saved place (the same as F9), or to an older one
    $('settings-load-save').addEventListener('click', () => { this.close(); this.onLoadSave(); });
    $('settings-recovery').addEventListener('click', () => { if (this.onRecovery) this.onRecovery(); });
    for (const b of this.dialog.querySelectorAll('[data-settings-action]')) {
      b.addEventListener('click', () => ({ back: () => this.show('base'), ok: () => this.apply(), cancel: () => this.cancel() })[b.dataset.settingsAction]());
    }
    this.dialog.addEventListener('cancel', (e) => { e.preventDefault(); if (this.page === 'base') this.cancel(); else if (this.page === 'keys') this.keys.back(); else this.show('base'); });

    for (const b of $('native-quality').querySelectorAll('[data-quality]')) {
      b.addEventListener('click', () => {
        // The original presets selected obsolete renderer modes. Here they are presets of the
        // render scale, as in the old project; the exact value is on the Geavanceerd page.
        const q = QUALITY[b.dataset.quality];
        $('render-scale').value = q.scale; this.refreshDraft();
        this.sliderAudio.reset(this.sliderValues()); this.audio.say([q.voice]);
      });
    }
    $('render-scale').addEventListener('input', () => { this.refreshDraft(); this.sliderAudio.input('render-scale', $('render-scale').value); });
    $('volume').addEventListener('input', () => {
      // the port's master volume: heard at once, kept on OK
      this.refreshDraft();
      this.audio.setVolume(Number($('volume').value) / 100);
      this.sliderAudio.input('volume', $('volume').value);
    });
    // OnChangeVolumeMusic 0x55BAA0: the clip (at the effects volume), then the music follows at once
    $('volume-music').addEventListener('input', () => {
      this.sliderAudio.input('music', $('volume-music').value);
      this.audio.setMusicVolume(Number($('volume-music').value));
    });
    // OnChangeVolumeEffect 0x55B98C: the clip starts before the new value is stored, so it still
    // plays at the previous one
    $('volume-effects').addEventListener('input', () => {
      this.sliderAudio.input('effects', $('volume-effects').value);
      this.audio.setEffectsVolume(Number($('volume-effects').value));
    });

    // Cheats: at once, not part of the draft. The game applies a request between two frames, so
    // over a paused game it takes effect when play goes on. game.cheats.state is what the game
    // itself reports (once a second, and after every request).
    $('cheat-supplies').addEventListener('click', () => {
      if (!this.game.running) return;
      this.suppliesAsked = true;
      this.game.cheats.supplies();
      $('cheat-status').textContent = 'Voorraad vullen is gevraagd.' + (this.inGame ? ' Je ziet het zodra je verder speelt.' : '');
    });
    for (const id of ['fov', 'look-speed']) $(id).addEventListener('input', () => this.refreshDraft());
    for (const kind of ['music', 'effects']) $(`game-volume-${kind}`).addEventListener('input', () => { $(`game-volume-${kind}-value`).textContent = $(`game-volume-${kind}`).value + '%'; });
    for (const [id, name, on, off] of SWITCHES) {
      $(id).addEventListener('change', () => {
        // free flight is also the player's kept choice: it holds for his next games
        if (name === 'flight') {
          this.flightChoice.set($(id).checked);
          if (!this.game.running) { $('cheat-status').textContent = $(id).checked ? 'Vrij vliegen staat aan voor je volgende spel.' : 'Vrij vliegen staat uit.'; return; }
        }
        if (!this.game.running || typeof this.game.cheats[name] !== 'function') { this.refreshCheats(); return; }
        this.asked[name] = $(id).checked;
        this.game.cheats[name]($(id).checked);
        // (free flight: the JavaScript port's line, with the keys this player has for Jump and Walk)
        const keys = name === 'flight' && this.game.input && this.game.input.label ? `Vrij vliegen aan. ${this.game.input.label('jump')} omhoog, ${this.game.input.label('walk')} omlaag.` : on;
        $('cheat-status').textContent = ($(id).checked ? keys : off) + (this.inGame ? ' Het gaat in zodra je verder speelt.' : '');
      });
    }
    $('cheat-unlock-levels').addEventListener('change', () => {
      this.settings.set('unlockAll', $('cheat-unlock-levels').checked);
      $('cheat-status').textContent = $('cheat-unlock-levels').checked ? 'Alle vijf griezelplekken zijn ontgrendeld en dat is bewaard.' : 'De griezelplekken volgen weer je voortgang in het avontuur.';
    });
    game.cheats.onChange = (state) => {
      if (!state) return;
      this.asked = {};                       // the game has answered: its state counts from here
      // Leaving free flight (cheats.js, fixes.js): the game may have put RedCat at a free place, or kept him flying
      // because there is none. The wording is the JavaScript port's.
      if (state.exit === 'blocked' || state.exit === 'returned') {
        const text = state.exit === 'blocked' ? 'Er is nu geen vrije plek om veilig te landen. Vrij vliegen blijft aan.' : 'Vrij vliegen uit. Je bent terug op een veilige plek.';
        if (state.exit === 'blocked') this.flightChoice.set(true);
        $('cheat-status').textContent = text;
        if (this.dialog.open) this.refreshCheats(); else if (this.game.onStatus) this.game.onStatus(text, true);
      }
      if (this.suppliesAsked && state.world) {
        this.suppliesAsked = false;
        if (this.game.onStatus) this.game.onStatus(supplyLine(state), true);
      }
    };
    window.addEventListener('recomp-running', () => { this.asked = {}; this.suppliesAsked = false; });
    window.addEventListener('recomp-exit', () => { this.asked = {}; this.suppliesAsked = false; });
  }

  get isOpen() { return this.dialog.open; }
  /** The note with the way back to the JavaScript port: only when that port left data here and is kept next to this one. */
  showClassic() {
    const note = this.$('settings-classic');
    note.hidden = true;
    if (!hasLegacyData()) return;
    classicAddress().then((url) => { if (url) { this.$('settings-classic-link').href = url; note.hidden = false; } });
  }
  sliderValues() { return { volume: this.$('volume').value, 'render-scale': this.$('render-scale').value, music: this.$('volume-music').value, effects: this.$('volume-effects').value }; }

  open({ inGame = false } = {}) {
    if (this.dialog.open) return;
    const $ = this.$, s = this.settings;
    this.inGame = inGame; this.origin = this.document.activeElement;
    // a resolution that is not in the list (set by hand or by an older version) stays selectable
    const res = !phone && s.get('resolution') === 'full' ? 'auto' : String(s.get('resolution'));
    if (![...$('resolution').options].some((o) => o.value === res)) $('resolution').add(new Option(res.replace('x', ' × '), res));
    $('resolution').value = res;
    $('render-scale').value = s.get('renderScale');
    $('msaa').value = String(s.get('msaa'));
    $('widescreen').checked = !!s.get('widescreen');
    $('touch-controls-setting').value = s.get('touch');
    // the keys are the player's own file: only from the main menu, and only with a player chosen
    $('open-key-settings').disabled = inGame || !this.keys.players.current;
    $('key-settings-note').textContent = inGame ? 'Tijdens het spelen verander je de toetsen in het spel zelf: Esc → Spelbesturing.' : !this.keys.players.current ? 'Kies eerst een speler in de Spelerlijst.' : 'De toetsen van de gekozen speler: lopen, draaien, springen, schieten, rustig lopen en de camera. Dezelfde toetsen staan in het spel onder Esc → Spelbesturing.';
    this.padStatus();
    // a browser without full screen for a page (Safari on an iPhone): the box cannot be changed, and says why
    const canFull = this.document.fullscreenEnabled !== false && typeof this.document.documentElement.requestFullscreen === 'function';
    $('fullscreen').disabled = !canFull;
    $('fullscreen').checked = !!s.get('fullscreen');
    if (!canFull) $('fullscreen-note').textContent = 'Deze browser kan een pagina niet op het volledige scherm tonen.';
    $('subtitle-box').checked = s.get('subtitleBox') !== false;
    $('show-fps').checked = !!s.get('showFps');
    $('volume').value = s.get('volume');
    this.opening++;
    this.opened = inGame ? null : this.volumes.get();
    if (this.opened) {
      $('volume-music').value = this.opened.music; $('volume-effects').value = this.opened.effects;
      this.audio.setMusicVolume(this.opened.music); this.audio.setEffectsVolume(this.opened.effects);
    }
    for (const id of ['volume-music', 'volume-effects']) $(id).closest('.native-audio-slider').hidden = inGame;
    // Over a running game the two volumes are on Meer instellingen (the first page has no room next to the saved
    // places): the player's own values, handed to the game's own setters on OK (game.setVolumes, source/host/volume.js).
    this.gameVolumes = inGame ? this.volumes.get() : null;
    for (const kind of ['music', 'effects']) {
      $(`game-volume-${kind}-row`).hidden = !inGame;
      if (this.gameVolumes) { $(`game-volume-${kind}`).value = this.gameVolumes[kind]; $(`game-volume-${kind}-value`).textContent = this.gameVolumes[kind] + '%'; }
    }
    this.dialog.querySelector('.native-options-frame').classList.toggle('in-game', inGame);
    $('mouse-look').checked = !!s.get('mouseLook');
    $('fov').value = s.get('fov') || 54;
    $('look-speed').value = s.get('sensitivity') || 1;
    $('camera-mode').value = s.get('camera') === 'first' ? 'first' : 'third';
    $('play-intro').checked = s.get('intro') !== false;
    $('recovery-points').checked = !!s.get('recovery');
    for (const [id, key] of FIX_BOXES) $(id).checked = s.get(key) !== false;
    this.showClassic();
    $('cheat-unlock-levels').checked = !!s.get('unlockAll');
    $('cheat-status').textContent = '';
    $('settings-stop-game').hidden = !inGame;
    // "Opgeslagen plek laden": only with a saved place of the game that runs (asked now; the button says from when it is)
    $('settings-load-save').hidden = !inGame; $('settings-load-save').disabled = true; $('settings-load-save').title = '';
    $('settings-recovery').hidden = !inGame || !this.onRecovery || !this.onRecovery('available');
    if (inGame) {
      const opening = this.opening;
      this.game.reloadInfo().then((info) => {
        if (opening !== this.opening || !this.dialog.open) return;
        $('settings-load-save').disabled = !info;
        $('settings-load-save').title = info ? 'Opgeslagen om ' + new Date(info.savedAt).toLocaleTimeString('nl-NL', { hour: '2-digit', minute: '2-digit' }) + ' (F9)' : 'Er is nog geen opgeslagen plek.';
      }).catch(() => {});
    }
    this.refreshDraft(); this.refreshCheats(); this.refreshMsaa();
    this.sliderAudio.reset(this.sliderValues());
    this.dialog.showModal();
    this.show('base', { focus: false });
    ($('native-quality').querySelector('[aria-pressed="true"]') || $('apply-settings')).focus({ preventScroll: true });
    this.audio.say(['mn_red24.wav', 'mn_in01.wav']);
  }

  show(page, { focus = true } = {}) {
    const previous = this.page;
    this.page = page;
    for (const section of this.dialog.querySelectorAll('[data-settings-page]')) section.hidden = section.dataset.settingsPage !== page;
    if (page === 'cheats') this.refreshCheats();
    if (!focus) return;
    this.sliderAudio.cancel();
    if (page === 'more' && previous === 'keys') this.$('open-key-settings').focus({ preventScroll: true });
    else if (page === 'base') this.$({ advanced: 'open-advanced-settings', more: 'open-more-settings', cheats: 'open-cheats' }[previous] || 'apply-settings').focus({ preventScroll: true });
    else this.dialog.querySelector(`[data-settings-page="${page}"] :is(select, input, button):not(:disabled)`).focus({ preventScroll: true });
  }

  /** Labels that follow the draft values. */
  refreshDraft() {
    const $ = this.$, scale = Number($('render-scale').value);
    const key = scale <= 50 ? 'low' : scale <= 75 ? 'normal' : 'high', q = QUALITY[key];
    $('render-scale-value').textContent = scale + '%';
    $('fov-value').textContent = $('fov').value + '°' + (Number($('fov').value) === 54 ? ' (origineel)' : '');
    $('look-speed-value').textContent = Number($('look-speed').value).toFixed(2).replace('.', ',');
    $('volume-value').textContent = $('volume').value + '%';
    $('native-quality-icon').src = `assets/menu/${q.icon}.png`; $('native-quality-value').textContent = q.label;
    for (const b of $('native-quality').querySelectorAll('[data-quality]')) b.setAttribute('aria-pressed', String(b.dataset.quality === key));
  }
  /**
   * Anti-aliasing: a number of samples the device cannot draw with is marked and cannot be chosen, and the line
   * under the setting says what is used instead, as in the JavaScript port (its refreshMsaaOptions). The limit
   * comes from the renderer (game.maxSamples); while it is not known nothing is marked.
   */
  refreshMsaa() {
    const $ = this.$, max = this.game.maxSamples ? this.game.maxSamples() : 0, asked = Number($('msaa').value) || 0;
    for (const option of $('msaa').options) {
      const n = Number(option.value);
      option.disabled = max > 0 && n > max && n !== asked;
      option.textContent = n ? `${n}x${max > 0 && n > max ? ' · niet ondersteund' : ''}` : 'Uit';
    }
    // the renderer draws with the device's limit when more is asked for (source/render/webgl.js)
    const used = max > 0 ? Math.min(asked, max) : asked;
    $('msaa-status').textContent = max > 0 && used !== asked
      ? `Dit apparaat ondersteunt ${asked}x niet. Hier wordt ${used ? used + 'x MSAA' : 'geen MSAA'} gebruikt.`
      : 'Maakt randen van 3D-objecten gladder. Meer samples vragen meer grafisch geheugen en rekenkracht. Na automatisch uitschakelen kun je MSAA hier weer aanzetten.';
  }
  refreshCheats() {
    const $ = this.$, running = !!this.game.running, state = running ? this.game.cheats.state : null;
    $('cheat-supplies').disabled = !running;
    for (const [id, name] of SWITCHES) {
      const available = typeof this.game.cheats[name] === 'function';
      $(id).closest('label').hidden = !available;
      $(id).disabled = (!running && name !== 'flight') || !available;
      $(id).checked = running ? (name in this.asked ? this.asked[name] : !!(state && state[STATE_KEY[name]])) : name === 'flight' && this.flightChoice.get();
    }
    $('cheat-running-note').hidden = running;
    if (state && state.world && !$('cheat-status').textContent) $('cheat-status').textContent = 'Nu: ' + supplyLine(state);
  }

  apply() {
    if (!this.dialog.open) return;
    const $ = this.$, s = this.settings;
    this.sliderAudio.cancel();
    // btnReqOkClick 0x55BE60: both values from the sliders, then the clip
    if (this.opened) {
      const now = { music: Number($('volume-music').value), effects: Number($('volume-effects').value) };
      this.audio.setEffectsVolume(now.effects); this.audio.setMusicVolume(now.music);
      this.volumes.store(now);
    }
    if (this.gameVolumes) {
      const now = { music: Number($('game-volume-music').value), effects: Number($('game-volume-effects').value) };
      if (now.music !== this.gameVolumes.music || now.effects !== this.gameVolumes.effects) this.game.setVolumes(now.music, now.effects, true);
    }
    this.audio.say(['rcmn1.wav']);
    s.set('resolution', $('resolution').value);
    s.set('renderScale', Math.max(25, Math.min(200, Number($('render-scale').value) || 100)));
    s.set('msaa', Number($('msaa').value));
    s.set('widescreen', $('widescreen').checked);
    s.set('touch', $('touch-controls-setting').value);
    s.set('showFps', $('show-fps').checked);
    s.set('subtitleBox', $('subtitle-box').checked);
    s.set('volume', Number($('volume').value));
    s.set('mouseLook', $('mouse-look').checked);
    s.set('fov', Number($('fov').value) === 54 ? 0 : Math.max(45, Math.min(90, Number($('fov').value) || 54)));
    s.set('sensitivity', Math.max(0.2, Math.min(2, Number($('look-speed').value) || 1)));
    s.set('camera', $('camera-mode').value === 'first' ? 'first' : 'third');
    s.set('intro', $('play-intro').checked);
    s.set('recovery', $('recovery-points').checked);
    for (const [id, key] of FIX_BOXES) s.set(key, $(id).checked);
    // last: game.js enters or leaves full screen when this value changes, and a browser only
    // allows entering it from the click or key press that is being handled right now
    if (!$('fullscreen').disabled) s.set('fullscreen', $('fullscreen').checked);
    this.close();
  }
  cancel() {
    if (!this.dialog.open) return;
    this.sliderAudio.cancel();
    // btnReqCancelClick 0x55C03C: the clip still at the sliders' values, and when it is over the
    // two values from when the form opened
    const said = this.audio.say(['rcmn2.wav']);
    const before = this.opened, opening = this.opening;
    if (before) {
      this.audio.setEffectsVolume(before.effects);          // counts for the next clip, not for this one
      said.then(() => { if (opening === this.opening) this.audio.setMusicVolume(before.music); });
    }
    this.close();
  }
  close() {
    if (!this.dialog.open) return;
    this.audio.setVolume(this.settings.get('volume') / 100);
    this.dialog.close();
    if (this.origin && this.origin.isConnected && !this.inGame) this.origin.focus({ preventScroll: true });
    this.onClose(this.inGame);
  }
}

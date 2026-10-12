import {MAX_PLAYERS, PLAYER_NAME_MAX_LENGTH} from './player-profiles.js';

// RcHcMenu's TfrmPlayer, TfrmPlayerName and delete confirmation. Profile data
// stays outside the UI; selecting a row does not switch the running adventure.
export class PlayerMenu {
  constructor({profiles, audio, selectPlayer, removePlayer, canOpen = () => true, error = null, document = globalThis.document}) {
    Object.assign(this, {profiles, audio, selectPlayer, removePlayer, canOpen, error, document});
    this.$ = id => document.getElementById(id);
    this.dialog = this.$('player-list');
    this.nameDialog = this.$('player-name-dialog');
    this.deleteDialog = this.$('player-delete-dialog');
    this.busy = false; this.pending = false; this.generation = 0;
    this.$('player-name').maxLength = PLAYER_NAME_MAX_LENGTH;
    const bind = (id, action) => this.$(id).addEventListener('click', action);
    bind('open-players', () => this.open());
    bind('close-players', () => this.cancel());
    bind('player-cancel', () => this.cancel());
    bind('player-add', () => this.openName());
    bind('player-remove', () => this.openDelete());
    bind('player-select', () => this.confirm());
    bind('player-name-cancel', () => this.cancelName());
    bind('player-delete-yes', () => this.confirmDelete());
    bind('player-delete-no', () => this.cancelDelete());
    this.$('player-name-form').addEventListener('submit', event => {event.preventDefault(); this.create();});
    for (const dialog of [this.dialog, this.nameDialog, this.deleteDialog]) {
      dialog.addEventListener('cancel', event => {event.preventDefault(); this.back(dialog.id);});
    }
  }

  get openDialog() { return this.deleteDialog.open || this.nameDialog.open || this.dialog.open; }

  open() {
    if (this.openDialog || this.busy || !this.canOpen()) return;
    this.selected = this.profiles?.activeId;
    this.render(); this.dialog.showModal();
    this.focusSelected(); this.audio.say(['rcmn13.wav']);
  }

  render(message = '') {
    const players = this.profiles?.list() || [];
    if (!players.some(player => player.id === this.selected)) this.selected = this.profiles?.activeId;
    this.$('player-choices').replaceChildren(...players.map(player => {
      const button = this.document.createElement('button'); button.type = 'button';
      button.className = 'player-choice'; button.dataset.playerId = player.id;
      button.setAttribute('aria-pressed', String(player.id === this.selected));
      const name = this.document.createElement('span'); name.textContent = player.name;
      const current = this.document.createElement('small'); current.textContent = player.id === this.profiles.activeId ? 'Huidige speler' : '';
      button.append(name, current);
      button.addEventListener('click', () => {
        if (this.busy || this.pending) return;
        this.selected = player.id; this.render(); this.focusSelected();
      });
      return button;
    }));
    this.$('player-list-status').textContent = this.error?.message || message ||
      (players.length === MAX_PLAYERS ? 'De Spelerlijst is vol: maximaal acht spelers.' : 'Elke speler heeft een eigen opgeslagen avontuur.');
    this.updateControls();
  }

  updateControls() {
    for (const dialog of [this.dialog, this.nameDialog, this.deleteDialog]) {
      for (const element of dialog.querySelectorAll('button,input')) element.disabled = this.busy;
    }
    const players = this.profiles?.list() || [];
    this.$('player-add').disabled = this.busy || this.pending || !this.profiles || players.length >= MAX_PLAYERS;
    this.$('player-remove').disabled = this.busy || this.pending || players.length <= 1;
    this.$('player-select').disabled = this.busy || this.pending || !this.profiles;
    for (const button of this.$('player-choices').children) button.disabled = this.busy || this.pending;
  }

  focusSelected() {
    const button = [...this.$('player-choices').children].find(button => button.dataset.playerId === this.selected);
    (button || this.$('player-cancel')).focus();
  }

  back(id) {
    if (id === 'player-name-dialog') this.cancelName();
    else if (id === 'player-delete-dialog') this.cancelDelete();
    else this.cancel();
  }

  cancel() {
    if (this.busy || !this.dialog.open || this.nameDialog.open || this.deleteDialog.open) return;
    this.generation++; this.pending = false;
    this.audio.say(['rcmn2.wav']); this.dialog.close(); this.$('open-players').focus();
  }

  async prompt(intro, show) {
    if (this.busy || this.pending || !this.dialog.open) return;
    this.pending = true; const generation = ++this.generation; this.updateControls();
    // The original waits for the button announcement before opening its prompt.
    // A canceled menu invalidates the continuation, including after audio denial.
    await this.audio.say([intro]);
    if (generation !== this.generation || !this.dialog.open) return;
    this.pending = false; this.updateControls(); show();
  }

  openName() {
    if (!this.profiles || this.profiles.list().length >= MAX_PLAYERS) return;
    return this.prompt('mn_red26.wav', () => {
      this.$('player-name').value = ''; this.$('player-name-status').textContent = '';
      this.nameDialog.showModal(); this.$('player-name').focus(); this.audio.say(['rcmn7.wav']);
    });
  }

  cancelName() {
    if (this.busy || !this.nameDialog.open) return;
    this.audio.say(['rcmn2.wav']); this.nameDialog.close(); this.$('player-add').focus();
  }

  create() {
    if (this.busy || !this.nameDialog.open) return;
    try {
      const player = this.profiles.create(this.$('player-name').value);
      this.selected = player.id; this.nameDialog.close(); this.render(); this.focusSelected();
      this.audio.say(['rcmn1.wav']);
    } catch (error) {this.$('player-name-status').textContent = error.message; this.$('player-name').focus();}
  }

  openDelete() {
    const player = this.profiles?.list().find(player => player.id === this.selected);
    if (!player || this.profiles.list().length <= 1) return;
    return this.prompt('mn_red27.wav', () => {
      this.deleting = player.id;
      this.$('player-delete-question').textContent = `Weet je zeker dat je speler ${player.name} uit de Spelerlijst wilt verwijderen?`;
      this.$('player-delete-status').textContent = '';
      this.deleteDialog.showModal(); this.$('player-delete-no').focus(); this.audio.say(['rcmn8.wav']);
    });
  }

  cancelDelete() {
    if (this.busy || !this.deleteDialog.open) return;
    this.audio.say(['rcmn4.wav']); this.deleteDialog.close(); this.$('player-remove').focus();
  }

  async confirmDelete() {
    if (this.busy || !this.deleteDialog.open) return;
    this.busy = true; this.updateControls(); this.audio.say(['rcmn3.wav']);
    try {
      const message = await this.removePlayer(this.deleting);
      this.deleteDialog.close(); this.render(typeof message === 'string' ? message : 'Speler verwijderd.');
    } catch (error) {this.$('player-delete-status').textContent = error.message;}
    finally {this.busy = false; this.updateControls(); if (!this.deleteDialog.open) this.focusSelected();}
  }

  async confirm() {
    if (this.busy || this.pending || !this.dialog.open || !this.profiles) return;
    this.busy = true; this.updateControls(); this.$('player-list-status').textContent = 'Speler laden…';
    try {
      await this.selectPlayer(this.selected);
      this.audio.say(['rcmn1.wav']); this.dialog.close(); this.$('open-players').focus();
    } catch (error) {this.render(error.message);}
    finally {this.busy = false; this.updateControls();}
  }
}

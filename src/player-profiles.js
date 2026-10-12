export const PLAYER_PROFILES_KEY = 'redcat.players.v1';
export const LEGACY_PROFILE_ID = 'legacy';
export const PLAYER_NAME_MAX_LENGTH = 12;
export const MAX_PLAYERS = 8;
export const PROFILE_STORAGE_KEYS = Object.freeze([
  'redcat.save.v1', 'redcat.progress.v1', 'redcat.player-options.v1',
  'redcat.touch-intro-hint.v1', 'redcat.desktop-intro-hint.v1',
]);
const SHARED_SETTINGS_KEY = 'redcat.settings.v1';
const validId = id => typeof id === 'string' && (id === LEGACY_PROFILE_ID || /^p_[a-z0-9_-]{8,80}$/.test(id));
const namespace = id => `redcat.player.${id}.`;
const nameIdentity = name => name.normalize('NFC').toLocaleLowerCase('nl-NL');
const copy = value => ({...value});

export class PlayerProfileError extends Error {
  constructor(code, message, cause) {
    super(message, cause ? {cause} : undefined);
    this.name = 'PlayerProfileError';
    this.code = code;
  }
}

export function normalizePlayerName(value, maxLength = PLAYER_NAME_MAX_LENGTH) {
  if (typeof value !== 'string') throw new PlayerProfileError('invalid-name', 'Vul een spelersnaam in.');
  const name = value.normalize('NFC').trim().replace(/\s+/gu, ' ');
  if (!name) throw new PlayerProfileError('invalid-name', 'Vul een spelersnaam in.');
  if (/\p{Cc}|\p{Cf}/u.test(name)) throw new PlayerProfileError('invalid-name', 'Deze spelersnaam bevat ongeldige tekens.');
  if ([...name].length > maxLength) throw new PlayerProfileError('invalid-name', `Een spelersnaam mag maximaal ${maxLength} tekens bevatten.`);
  return name;
}

function generateId() {
  if (globalThis.crypto?.randomUUID) return `p_${globalThis.crypto.randomUUID()}`;
  // Old embedded WebViews may lack randomUUID; IDs are storage identifiers,
  // never credentials. Check collisions against metadata and orphaned data.
  return `p_${Date.now().toString(36)}_${Math.random().toString(36).slice(2)}_${Math.random().toString(36).slice(2)}`;
}

/** Profile metadata is committed first, then exposed to the running game.
 * The existing adventure remains in its original keys and IndexedDB database;
 * migration never copies or deletes a checkpoint or recovery history.
 */
export class PlayerProfiles {
  constructor({storage = globalThis.localStorage, defaultName = 'Speler 1', maxNameLength = PLAYER_NAME_MAX_LENGTH, idFactory = generateId} = {}) {
    if (!Number.isInteger(maxNameLength) || maxNameLength < 1 || maxNameLength > 128) throw new TypeError('Invalid player name limit.');
    this.storage = storage;
    this.maxNameLength = maxNameLength;
    this.idFactory = idFactory;
    this.raw = this.readMetadata();
    if (this.raw === null) {
      this.state = null;
      this.commit({version: 1, activeId: LEGACY_PROFILE_ID, players: [{id: LEGACY_PROFILE_ID, name: normalizePlayerName(defaultName, maxNameLength)}]});
    } else {
      try { this.state = this.validate(JSON.parse(this.raw)); }
      catch (cause) { throw new PlayerProfileError('invalid-metadata', 'De opgeslagen spelerlijst is beschadigd of niet ondersteund. Je opgeslagen voortgang is behouden.', cause); }
    }
  }

  readMetadata() {
    try { return this.storage.getItem(PLAYER_PROFILES_KEY); }
    catch (cause) { throw new PlayerProfileError('storage-read', 'De spelerlijst kan niet worden gelezen. Controleer of lokale opslag beschikbaar is.', cause); }
  }

  validate(state) {
    if (!state || state.version !== 1 || !Array.isArray(state.players) || !state.players.length || state.players.length > MAX_PLAYERS) throw new Error('Invalid player list.');
    const ids = new Set(), names = new Set();
    const players = state.players.map(player => {
      if (!player || !validId(player.id) || ids.has(player.id)) throw new Error('Invalid player identifier.');
      const name = normalizePlayerName(player.name, this.maxNameLength), identity = nameIdentity(name);
      if (names.has(identity)) throw new Error('Duplicate player name.');
      ids.add(player.id); names.add(identity);
      return {id: player.id, name};
    });
    if (!ids.has(state.activeId)) throw new Error('Unknown active player.');
    return {version: 1, activeId: state.activeId, players};
  }

  commit(next) {
    // localStorage has atomic single-key writes. Refuse a stale list rather
    // than erasing a profile added or removed by a different game window.
    if (this.readMetadata() !== this.raw) throw new PlayerProfileError('stale-metadata', 'De spelerlijst is in een ander spelvenster gewijzigd. Herlaad dit venster.');
    const validated = this.validate(next), raw = JSON.stringify(validated);
    try { this.storage.setItem(PLAYER_PROFILES_KEY, raw); }
    catch (cause) { throw new PlayerProfileError('storage-write', 'De spelerlijst kon niet worden opgeslagen. Er is niets gewijzigd.', cause); }
    this.raw = raw;
    this.state = validated;
  }

  get activeId() { return this.state.activeId; }
  get active() { return copy(this.state.players.find(player => player.id === this.activeId)); }
  list() { return this.state.players.map(copy); }

  requirePlayer(id) {
    const player = this.state.players.find(item => item.id === id);
    if (!player) throw new PlayerProfileError('unknown-player', 'Deze speler bestaat niet meer.');
    return player;
  }

  key(base, id = this.activeId) {
    // Explicit IDs remain usable after switching/deletion so queued work can
    // retain its original owner. Never derive an ID from a display name.
    if (!validId(id)) throw new PlayerProfileError('invalid-id', 'Ongeldige speler.');
    if (typeof base !== 'string' || !base || base === PLAYER_PROFILES_KEY) throw new TypeError('Invalid profile storage key.');
    if (base === SHARED_SETTINGS_KEY || id === LEGACY_PROFILE_ID) return base;
    return namespace(id) + base;
  }

  recoveryDatabase(id = this.activeId) {
    if (!validId(id)) throw new PlayerProfileError('invalid-id', 'Ongeldige speler.');
    return id === LEGACY_PROFILE_ID ? 'redcat-recovery-saves' : `redcat-recovery-saves-${id}`;
  }

  storedKeys() {
    try { return Array.from({length: this.storage.length}, (_, index) => this.storage.key(index)).filter(key => typeof key === 'string'); }
    catch (cause) { throw new PlayerProfileError('storage-read', 'De opgeslagen spelersgegevens kunnen niet worden gelezen. Er is niets gewijzigd.', cause); }
  }

  create(value) {
    if (this.state.players.length >= MAX_PLAYERS) throw new PlayerProfileError('player-limit', 'Er kunnen maximaal acht spelers in de Spelerlijst staan.');
    const name = normalizePlayerName(value, this.maxNameLength);
    if (this.state.players.some(player => nameIdentity(player.name) === nameIdentity(name))) throw new PlayerProfileError('duplicate-name', 'Er is al een speler met deze naam. Kies een andere naam.');
    const keys = this.storedKeys();
    let id;
    for (let attempts = 0; attempts < 16; attempts++) {
      const candidate = this.idFactory();
      if (validId(candidate) && candidate !== LEGACY_PROFILE_ID && !this.state.players.some(player => player.id === candidate) && !keys.some(key => key.startsWith(namespace(candidate)))) { id = candidate; break; }
    }
    if (!id) throw new PlayerProfileError('id-generation', 'Er kon geen nieuwe speler worden aangemaakt. Probeer het opnieuw.');
    const player = {id, name};
    this.commit({...this.state, players: [...this.state.players, player]});
    return copy(player);
  }

  select(id) {
    const player = this.requirePlayer(id);
    if (id !== this.activeId) this.commit({...this.state, activeId: id});
    return copy(player);
  }

  remove(id) {
    const removed = copy(this.requirePlayer(id));
    if (this.state.players.length === 1) throw new PlayerProfileError('last-player', 'Maak eerst een andere speler aan voordat je deze speler verwijdert.');
    const players = this.state.players.filter(player => player.id !== id);
    const keys = id === LEGACY_PROFILE_ID ? [...PROFILE_STORAGE_KEYS] : this.storedKeys().filter(key => key.startsWith(namespace(id)));
    this.commit({...this.state, players, activeId: this.activeId === id ? players[0].id : this.activeId});
    // Cleanup follows the durable list update. A failed cleanup leaves only
    // unreachable data; it must never remove another player's adventure.
    const cleanupErrors = [];
    for (const key of keys) {
      try { this.storage.removeItem(key); }
      catch (error) { cleanupErrors.push({key, error}); }
    }
    return {removed, active: this.active, cleanupErrors};
  }
}

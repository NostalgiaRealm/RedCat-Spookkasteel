import test from 'node:test';
import assert from 'node:assert/strict';
import {PlayerProfiles, PLAYER_PROFILES_KEY, PROFILE_STORAGE_KEYS, MAX_PLAYERS} from '../src/player-profiles.js';

class MemoryStorage {
  constructor(entries = {}) {this.items = new Map(Object.entries(entries));}
  get length() {return this.items.size;}
  key(index) {return [...this.items.keys()][index] ?? null;}
  getItem(key) {return this.items.get(key) ?? null;}
  setItem(key, value) {if (this.failWrite === key) throw new Error('quota'); this.items.set(key, String(value));}
  removeItem(key) {if (this.failRemove === key) throw new Error('readonly'); this.items.delete(key);}
}
function fixture(entries) {
  const storage = new MemoryStorage(entries); let id = 0;
  return {storage, profiles: new PlayerProfiles({storage, idFactory: () => `p_testing_${++id}`})};
}

test('adopts the old adventure in place, including the old recovery database', () => {
  const old = Object.fromEntries(PROFILE_STORAGE_KEYS.map(key => [key, `old:${key}`]));
  const {storage, profiles} = fixture({...old, 'redcat.settings.v1': '{"volume":0.5}'});
  assert.deepEqual(profiles.active, {id: 'legacy', name: 'Speler 1'});
  for (const key of PROFILE_STORAGE_KEYS) {
    assert.equal(profiles.key(key), key); assert.equal(storage.getItem(key), old[key]);
  }
  assert.equal(profiles.recoveryDatabase(), 'redcat-recovery-saves');
  assert.equal(storage.getItem('redcat.settings.v1'), '{"volume":0.5}');
});

test('players have independent saves, skills, unlocks, options, hints and recovery names', () => {
  const {storage, profiles} = fixture();
  const a = profiles.active, b = profiles.create('Rick');
  assert.equal(profiles.activeId, a.id, 'creating does not select');
  for (const key of PROFILE_STORAGE_KEYS) storage.setItem(profiles.key(key), 'A');
  profiles.select(b.id);
  for (const key of PROFILE_STORAGE_KEYS) {
    assert.equal(storage.getItem(profiles.key(key)), null); storage.setItem(profiles.key(key), 'B');
  }
  assert.notEqual(profiles.recoveryDatabase(a.id), profiles.recoveryDatabase(b.id));
  assert.equal(profiles.key('redcat.settings.v1'), 'redcat.settings.v1', 'display/audio settings are shared');
  profiles.select(a.id);
  for (const key of PROFILE_STORAGE_KEYS) assert.equal(storage.getItem(profiles.key(key)), 'A');
  assert.deepEqual(new PlayerProfiles({storage}).list(), [a, b]);
  assert.equal(new PlayerProfiles({storage}).activeId, a.id);
});

test('original limit is eight players and names have at most twelve characters', () => {
  const {profiles} = fixture();
  assert.throws(() => profiles.create('1234567890123'), /12/);
  profiles.create('123456789012');
  for (let i = 2; i < MAX_PLAYERS; i++) profiles.create(`Naam ${i}`);
  assert.equal(profiles.list().length, 8);
  assert.throws(() => profiles.create('Negende'), error => error.code === 'player-limit');
});

test('names are normalized and duplicate or empty names rejected', () => {
  const {profiles} = fixture();
  assert.equal(profiles.create('  Éva  ').name, 'Éva');
  for (const name of ['éva', 'E\u0301VA', '   ', '', 'a\u0000b', 'a\u202eb']) assert.throws(() => profiles.create(name));
});

test('metadata errors and failed writes preserve both prior metadata and saves', () => {
  const {storage, profiles} = fixture({'redcat.save.v1': 'precious'});
  const raw = storage.getItem(PLAYER_PROFILES_KEY), list = profiles.list();
  storage.failWrite = PLAYER_PROFILES_KEY;
  assert.throws(() => profiles.create('Rick'), /opgeslagen/);
  assert.deepEqual(profiles.list(), list); assert.equal(storage.getItem(PLAYER_PROFILES_KEY), raw);
  assert.equal(storage.getItem('redcat.save.v1'), 'precious');
  storage.failWrite = null;
  storage.setItem(PLAYER_PROFILES_KEY, 'broken');
  assert.throws(() => new PlayerProfiles({storage}), /beschadigd/);
  assert.equal(storage.getItem(PLAYER_PROFILES_KEY), 'broken');
  assert.equal(storage.getItem('redcat.save.v1'), 'precious');
});

test('failed switch/deletion does not expose another profile or clean up its saves', () => {
  const {storage, profiles} = fixture();
  const b = profiles.create('Rick'); storage.setItem(profiles.key('redcat.save.v1', b.id), 'B');
  storage.failWrite = PLAYER_PROFILES_KEY;
  assert.throws(() => profiles.select(b.id)); assert.equal(profiles.activeId, 'legacy');
  assert.throws(() => profiles.remove(b.id)); assert.equal(profiles.list().length, 2);
  assert.equal(storage.getItem(profiles.key('redcat.save.v1', b.id)), 'B');
});

test('deletion cleans only that player and preserves shared settings', () => {
  const {storage, profiles} = fixture();
  const b = profiles.create('Rick');
  for (const id of ['legacy', b.id]) for (const key of PROFILE_STORAGE_KEYS) storage.setItem(profiles.key(key, id), id);
  storage.setItem('redcat.settings.v1', 'shared');
  profiles.select(b.id); const removed = profiles.remove('legacy');
  assert.deepEqual(removed.cleanupErrors, []);
  for (const key of PROFILE_STORAGE_KEYS) {
    assert.equal(storage.getItem(key), null); assert.equal(storage.getItem(profiles.key(key)), b.id);
  }
  assert.equal(storage.getItem('redcat.settings.v1'), 'shared');
  assert.throws(() => profiles.remove(b.id), /andere speler/);
});

test('cleanup failure is reported after committing removal without harming other players', () => {
  const {storage, profiles} = fixture({'redcat.save.v1': 'A'});
  const b = profiles.create('Rick'), key = profiles.key('redcat.save.v1', b.id);
  storage.setItem(key, 'B'); storage.failRemove = key;
  const result = profiles.remove(b.id);
  assert.equal(result.cleanupErrors.length, 1); assert.equal(profiles.list().length, 1);
  assert.equal(storage.getItem('redcat.save.v1'), 'A');
  assert.equal(new PlayerProfiles({storage}).list().length, 1);
});

test('another window cannot overwrite a newer player list', () => {
  const {storage, profiles} = fixture(), stale = new PlayerProfiles({storage});
  profiles.create('Rick'); const raw = storage.getItem(PLAYER_PROFILES_KEY);
  assert.throws(() => stale.create('Eva'), error => error.code === 'stale-metadata');
  assert.equal(storage.getItem(PLAYER_PROFILES_KEY), raw);
});

test('profile keys remain tied to IDs and cannot collide with orphaned data', () => {
  const {storage, profiles} = fixture(); const b = profiles.create('<b>Rick</b>');
  assert(!profiles.key('redcat.save.v1', b.id).includes(b.name));
  assert.throws(() => profiles.key('redcat.save.v1', '../../legacy'));
  assert.throws(() => profiles.key(PLAYER_PROFILES_KEY));
  const key = profiles.key('redcat.save.v1', b.id); storage.setItem(key, 'orphan');
  storage.failRemove = key; profiles.remove(b.id);
  const reloaded = new PlayerProfiles({storage, idFactory: () => b.id});
  assert.throws(() => reloaded.create('Next'), error => error.code === 'id-generation');
});

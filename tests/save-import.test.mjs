import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {createSaveExport} from '../src/save-export.js';
import {parseSaveImport, validateSaveImport, MAX_SAVE_IMPORT_BYTES} from '../src/save-import.js';
import {PlayerProfiles, PLAYER_PROFILES_KEY} from '../src/player-profiles.js';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';
import {NativeFairyEffect} from '../src/fairy-effects.js';

const json = path => JSON.parse(readFileSync(new URL(path, import.meta.url)));
const clone = value => structuredClone(value);
function simpleBundle() {
  return createSaveExport({playerName: 'Rick', exportedAt: '2026-10-22T12:00:00.000Z',
    save: {version: 1, level: 'lvl02a', position: [1, 2, 3], yaw: .4, pitch: -.2,
      game: {version: 1, level: 'lvl02a', state: {health: 9, score: 1234, skill: 6}}},
    progress: {version: 1, highestUnlocked: 3}, options: {difficulty: 'Hard', noClip: false}}).bundle;
}
class Storage {
  constructor() {this.items = new Map(); this.writeCount = 0;}
  get length() {return this.items.size;}
  key(index) {return [...this.items.keys()][index] ?? null;}
  getItem(key) {return this.items.get(key) ?? null;}
  setItem(key, value) {
    if (++this.writeCount === this.failAt) throw new Error('Quota exceeded');
    this.items.set(key, String(value));
  }
  removeItem(key) {this.items.delete(key);}
}
function profilesFixture() {
  const storage = new Storage(), profiles = new PlayerProfiles({storage, idFactory: () => 'p_import_test'});
  const other = profiles.create('Andere');
  for (const id of ['legacy', other.id]) for (const base of ['redcat.save.v1', 'redcat.progress.v1', 'redcat.player-options.v1', 'redcat.adventure-revision.v1', 'redcat.touch-intro-hint.v1']) storage.setItem(profiles.key(base, id), `old raw: ${id}: ${base}`);
  storage.setItem('redcat.settings.v1', '{"musicVolume":0.25}');
  return {profiles, storage, other};
}

test('original v1 exports round-trip without sharing mutable state or importing unrelated keys', () => {
  const bundle = simpleBundle(), parsed = parseSaveImport('\uFEFF' + JSON.stringify(bundle));
  assert.deepEqual(parsed, bundle);
  parsed.save.game.state.score = 0;
  assert.equal(bundle.save.game.state.score, 1234);
  bundle.settings = {musicVolume: 0}; bundle.player.id = 'legacy'; bundle.options.other = 'ignored';
  const selected = validateSaveImport(bundle);
  assert.deepEqual(Object.keys(selected), ['format', 'formatVersion', 'exportedAt', 'player', 'save', 'progress', 'options']);
  assert.deepEqual(selected.player, {name: 'Rick'});
  assert.deepEqual(selected.options, {difficulty: 'Hard', noClip: false});
});

test('all five actual campaign exports restore scripts, objects, camera routes and effect state', () => {
  for (let index = 0; index < 5; index++) {
    const id = `lvl0${index}a`, level = json(`../data/levels/${id}/level.json`), program = json(`../data/davi/${id}.json`), motions = json(`../data/motions/${id}.json`);
    const game = new Gameplay(level, {deferInit: true}), host = new ScriptHost(game, program, {motions, dialogue: json('../data/dialogue/nl.json')});
    host.initialize(); host.update(.25);
    const route = game.objects.find(object => Number(object.entity.CamScriptPosTotal) > 1);
    if (route) host.activateCamera(route);
    const fairy = game.objects.find(object => object.entity.classname === 'Fairy');
    if (fairy) {
      const effect = new NativeFairyEffect({origin: [...fairy.position], waypoints: [[...fairy.position]], seed: 42});
      effect.advance(.5); fairy.fairyState = effect.snapshot();
    }
    const save = {version: 1, level: id, position: [...level.spawn.position], lastSafe: [...level.spawn.position], yaw: .25, pitch: .1, game: game.snapshot(),
      audio: {version: 1, level: id, sounds: [{sound: 'idlefee1.wav', channel: 'effects', currentTime: .4, position: [1, 2, 3]}], dialogue: [], musicPositions: [['the forest.wav', 23.25]]}};
    const result = parseSaveImport(createSaveExport({playerName: 'Test', save}).text);
    assert.deepEqual(result.save, JSON.parse(JSON.stringify(save)), id);
    const restored = new Gameplay(level, {deferInit: true}); assert.equal(restored.restore(result.save.game), true);
    const restoredHost = new ScriptHost(restored, program, {motions, dialogue: json('../data/dialogue/nl.json')});
    restoredHost.initialize(result.save.game.scripts);
    assert.equal(restoredHost.vm.lastError, null);
    assert.deepEqual(restoredHost.vm.snapshot(), host.vm.snapshot());
    if (route) assert.deepEqual(restoredHost.camera.points, host.camera.points);
    const brokenCamera = clone(result); brokenCamera.save.game.scripts.camera = {};
    assert.throws(() => validateSaveImport(brokenCamera), /scripts.camera/);
    const foreignScript = clone(result); foreignScript.save.game.scripts.vm.script = '0'.repeat(64);
    assert.throws(() => validateSaveImport(foreignScript), /scripts.vm/);
    if (index === 2) {
      const missingPuzzle = clone(result); delete missingPuzzle.save.game.scripts.vm.globals['37:1'];
      assert.throws(() => validateSaveImport(missingPuzzle), /scripts.vm.globals/);
    }
  }
});

test('legacy v1 snapshots may omit fields that were added later', () => {
  const bundle = simpleBundle();
  assert.equal(bundle.save.game.scripts, undefined);
  const parsed = validateSaveImport(bundle);
  assert.equal(parsed.save.game.healthVersion, undefined);
  assert.equal(parsed.save.game.difficulty, undefined);
  assert.equal(parsed.progress.highestUnlocked, 3);
  assert.equal(parsed.progress.earnedSkills, 6);
  assert.deepEqual(parsed.progress.playedLevels, ['lvl02a']);
});

test('refuses foreign files, unsupported future versions and malformed restore containers', () => {
  const corruptions = [
    b => {b.format = 'original-rcr';}, b => {b.formatVersion = 2;}, b => {b.save.version = 2;},
    b => {b.exportedAt = 'not a date';}, b => {b.player.name = '';}, b => {b.save.level = 'lvl99a';},
    b => {b.save.game.level = 'lvl00a';}, b => {b.save.position = [1, 2];}, b => {b.save.position = [1, 2, 1e100];},
    b => {b.save.game.state.health = '10';}, b => {b.save.game.objects = {};}, b => {b.save.game.objects = [null];},
    b => {b.save.game.objects = [{id: 'same'}, {id: 'same'}];}, b => {b.save.game.objects = [{id: 'one', position: 'not-a-vector'}];},
    b => {b.save.game.variables = [null];}, b => {b.save.game.scripts = {version: 1};},
    b => {b.save.game.completed = true; b.save.game.debriefing = {version: 1, level: b.save.level, rows: [null, null, null, null]};},
    b => {b.save.audio = {version: 1, level: b.save.level, sounds: {}, dialogue: []};},
    b => {b.progress.highestUnlocked = 9;}, b => {b.progress.earnedSkills = 32;}, b => {b.progress.playedLevels = ['unknown'];},
    b => {b.options.difficulty = 'impossible';}, b => {b.options.noClip = 'false';},
  ];
  for (const corrupt of corruptions) {const bundle = simpleBundle(); corrupt(bundle); assert.throws(() => parseSaveImport(JSON.stringify(bundle)));}
  assert.throws(() => parseSaveImport('{'), /JSON-exportbestand/);
  assert.throws(() => parseSaveImport('{}'), /bestandsformaat/);
});

test('rejects unsafe keys, excessive nesting, nonfinite numbers and oversized UTF-8 before use', () => {
  for (const key of ['__proto__', 'constructor', 'prototype']) {
    const bundle = simpleBundle(); Object.defineProperty(bundle.save.game, key, {value: {polluted: true}, enumerable: true});
    assert.throws(() => parseSaveImport(JSON.stringify(bundle)), /onveilige veldnaam/);
  }
  assert.equal({}.polluted, undefined);
  const deep = simpleBundle(); let object = deep;
  for (let i = 0; i < 65; i++) object = object.nested = {};
  assert.throws(() => validateSaveImport(deep), /geneste gegevens/);
  const invalid = simpleBundle(); invalid.save.game.state.score = Infinity;
  assert.throws(() => validateSaveImport(invalid), /getal/);
  assert.throws(() => parseSaveImport(JSON.stringify(simpleBundle()).replace('1234', '1e999')), /getal/);
  const getter = simpleBundle(); Object.defineProperty(getter, 'bad', {enumerable: true, get() {assert.fail('getter executed');}});
  assert.throws(() => validateSaveImport(getter), /JSON-veld/);
  assert.throws(() => parseSaveImport(' '.repeat(MAX_SAVE_IMPORT_BYTES + 1)), /32 MiB/);
  assert.throws(() => parseSaveImport('€'.repeat(Math.ceil(MAX_SAVE_IMPORT_BYTES / 3))), /32 MiB/);
});

test('imports only the chosen profile, commits a new revision, and preserves selection, names, settings and hints', () => {
  const {profiles, storage, other} = profilesFixture(), before = new Map(storage.items), bundle = simpleBundle();
  const result = profiles.importAdventure(other.id, bundle);
  assert.deepEqual(result, bundle); assert.equal(profiles.activeId, 'legacy');
  assert.equal(profiles.list().find(p => p.id === other.id).name, 'Andere');
  for (const [base, field] of [['redcat.save.v1', 'save'], ['redcat.progress.v1', 'progress'], ['redcat.player-options.v1', 'options']]) assert.deepEqual(JSON.parse(storage.getItem(profiles.key(base, other.id))), result[field]);
  assert.equal(typeof JSON.parse(storage.getItem(profiles.key('redcat.adventure-revision.v1', other.id))), 'string');
  const changed = new Set(['redcat.save.v1', 'redcat.progress.v1', 'redcat.player-options.v1', 'redcat.adventure-revision.v1'].map(key => profiles.key(key, other.id)));
  for (const [key, value] of before) if (!changed.has(key)) assert.equal(storage.getItem(key), value, key);
  const revision = storage.getItem(profiles.key('redcat.adventure-revision.v1', other.id));
  profiles.importAdventure(other.id, bundle);
  assert.notEqual(storage.getItem(profiles.key('redcat.adventure-revision.v1', other.id)), revision);
});

test('every write-failure position rolls back exact prior raw bytes including absent keys', () => {
  for (const empty of [false, true]) for (let step = 1; step <= 4; step++) {
    const {profiles, storage, other} = profilesFixture();
    if (empty) for (const key of [...storage.items.keys()]) if (key.startsWith(`redcat.player.${other.id}.`)) storage.removeItem(key);
    const before = new Map(storage.items); storage.failAt = storage.writeCount + step;
    assert.throws(() => profiles.importAdventure(other.id, simpleBundle()), error => error.code === 'storage-write');
    assert.deepEqual(storage.items, before, `empty=${empty}, failing write=${step}`);
    assert.equal(profiles.activeId, 'legacy');
  }
});

test('stale profile metadata and invalid direct bundles refuse all storage writes', () => {
  const {profiles, storage, other} = profilesFixture(), bundle = simpleBundle();
  bundle.save.game.objects = 'invalid'; const before = new Map(storage.items), writes = storage.writeCount;
  assert.throws(() => profiles.importAdventure(other.id, bundle));
  assert.equal(storage.writeCount, writes); assert.deepEqual(storage.items, before);
  storage.setItem(PLAYER_PROFILES_KEY, storage.getItem(PLAYER_PROFILES_KEY) + ' ');
  const newer = new Map(storage.items);
  assert.throws(() => profiles.importAdventure(other.id, simpleBundle()), error => error.code === 'stale-metadata');
  assert.deepEqual(storage.items, newer);
});

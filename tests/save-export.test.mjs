import test from 'node:test';
import assert from 'node:assert/strict';
import {createSaveExport, downloadSaveExport} from '../source/save-export.js';
import {PlayerMenu} from '../source/player-menu.js';

function fixture() {
  return {
    playerName: 'Éva / Test',
    save: {version: 1, level: 'lvl02a', position: [100, 200, 300], yaw: .4, pitch: -.3,
      savedAt: '2026-10-20T12:00:00.000Z',
      game: {version: 1, level: 'lvl02a', difficulty: 'Hard', state: {health: 9, skill: 6, score: 1234},
        scripts: {flags: {gateOpen: true}}, particles: [{position: [1, 2, 3], age: .25}]}},
    progress: {version: 1, highestUnlocked: 3, earnedSkills: 6, playedLevels: ['lvl00a', 'lvl02a'], privateKey: 'exclude'},
    options: {difficulty: 'Easy', noClip: false, privateKey: 'exclude'},
    exportedAt: '2026-10-20T12:34:56.000Z',
  };
}

test('export contains only the selected adventure, campaign and player options', () => {
  const input = fixture(), before = JSON.stringify(input);
  const exported = createSaveExport(input), bundle = JSON.parse(exported.text);
  assert.deepEqual(Object.keys(bundle), ['format', 'formatVersion', 'exportedAt', 'player', 'save', 'progress', 'options']);
  assert.equal(bundle.format, 'redcat-spookkasteel-save');
  assert.equal(bundle.formatVersion, 1);
  assert.deepEqual(bundle.save, input.save);
  assert.deepEqual(bundle.player, {name: 'Éva / Test'});
  assert.equal(bundle.progress.highestUnlocked, 3);
  assert.equal(bundle.progress.earnedSkills, 6);
  assert.deepEqual(bundle.options, {difficulty: 'Easy', noClip: false});
  assert.doesNotMatch(exported.text, /privateKey|redcat\.settings|redcat\.players/);
  assert.equal(JSON.stringify(input), before, 'export never mutates the save or profile');
  assert.equal(exported.filename, 'RedCat-Spookkasteel-Eva_Test-2026-10-20T123456Z.json');
  bundle.save.game.state.score = 0;
  assert.equal(input.save.game.state.score, 1234, 'exported data is a detached snapshot');
});

test('export refuses missing, malformed and non-serializable adventures', () => {
  for (const save of [null, {}, {...fixture().save, level: 'unknown'}, {...fixture().save, position: [NaN, 0, 0]}]) {
    assert.throws(() => createSaveExport({...fixture(), save}), /geldig opgeslagen avontuur/);
  }
  const circular = fixture(); circular.save.game.self = circular.save;
  assert.throws(() => createSaveExport(circular), /ongeldige gegevens/);
  const invalid = fixture(); invalid.save.game.state.score = Infinity;
  assert.throws(() => createSaveExport(invalid), /ongeldige gegevens/);
  assert.throws(() => createSaveExport({...fixture(), exportedAt: 'not a date'}), /exportdatum/);
});

test('native export receives a single file payload and cancellation never falls through to a browser download', async () => {
  const exported = createSaveExport(fixture()), calls = [];
  const result = await downloadSaveExport(exported, {exportFile: async payload => {calls.push(payload); return {canceled: true};}, document: null});
  assert.deepEqual(calls, [{filename: exported.filename, text: exported.text}]);
  assert.equal(result.status, 'cancelled');
  assert.equal((await downloadSaveExport(exported, {exportFile: async () => true, document: null})).status, 'saved');
  await assert.rejects(downloadSaveExport(exported, {exportFile: async () => {throw new Error('Disk full');}, document: null}), /Disk full/);
});

test('browser export downloads the complete JSON and releases its Blob after the handoff', async () => {
  const exported = createSaveExport(fixture()), events = [], deferred = [];
  let blob, anchor;
  const document = {body: {append(value) {anchor = value; events.push('append');}}, createElement(tag) {
    assert.equal(tag, 'a');
    return {click() {events.push('click');}, remove() {events.push('remove');}};
  }};
  const urlApi = {createObjectURL(value) {blob = value; return 'blob:test';}, revokeObjectURL(value) {events.push(value);}};
  const result = await downloadSaveExport(exported, {document, urlApi, defer: callback => deferred.push(callback)});
  assert.equal(await blob.text(), exported.text);
  assert.equal(blob.type, 'application/json;charset=utf-8');
  assert.equal(anchor.download, exported.filename);
  assert.equal(anchor.href, 'blob:test');
  assert.equal(result.status, 'downloaded');
  assert.deepEqual(events, ['append', 'click', 'remove']);
  deferred[0](); assert.equal(events.at(-1), 'blob:test');
});

test('player-list export uses the selected owner without switching or replacing any profile', async () => {
  const calls = [], status = {textContent: ''}, exportButton = {focus() {}};
  let complete;
  const menu = Object.assign(Object.create(PlayerMenu.prototype), {
    selected: 'other-player', profiles: {activeId: 'legacy', list: () => [{id: 'legacy'}, {id: 'other-player'}]},
    dialog: {open: true}, busy: false, pending: false,
    $: id => id === 'player-list-status' ? status : exportButton,
    updateControls() {},
    exportPlayer: id => {calls.push(id); return new Promise(resolve => {complete = resolve;});},
  });
  const pending = menu.exportSelected();
  assert.equal(menu.busy, true);
  await menu.exportSelected();
  assert.deepEqual(calls, ['other-player'], 'double-click does not create another file picker');
  assert.equal(menu.profiles.activeId, 'legacy');
  complete({status: 'downloaded'}); await pending;
  assert.equal(menu.busy, false);
  assert.equal(menu.selected, 'other-player');
  assert.match(status.textContent, /browserdownloads/);
  assert.equal(menu.profiles.activeId, 'legacy');
});

test('player-list export displays cancellation and errors while preserving selection', async () => {
  const status = {textContent: ''};
  const menu = Object.assign(Object.create(PlayerMenu.prototype), {
    selected: 'legacy', profiles: {list: () => [{id: 'legacy'}]}, dialog: {open: true},
    busy: false, pending: false, $: () => status, updateControls() {},
  });
  status.focus = () => {};
  menu.exportPlayer = async () => ({status: 'cancelled'});
  await menu.exportSelected(); assert.match(status.textContent, /geannuleerd/);
  menu.exportPlayer = async () => {throw new Error('Geen opgeslagen avontuur');};
  await menu.exportSelected(); assert.equal(status.textContent, 'Geen opgeslagen avontuur');
  assert.equal(menu.selected, 'legacy'); assert.equal(menu.dialog.open, true);
});

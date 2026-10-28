import test from 'node:test';
import assert from 'node:assert/strict';
import path from 'node:path';
import {mkdir, mkdtemp, readFile, writeFile} from 'node:fs/promises';
import {fileURLToPath, pathToFileURL} from 'node:url';
import {createRuntimeBundle, RUNTIME_BUNDLE, RUNTIME_BUNDLE_MAP} from '../tools/runtime-bundle.mjs';
import {moduleSpecifiers, refreshWebCache} from '../tools/refresh-web-cache.mjs';
import {createSaveExport as originalExport} from '../source/save-export.js';
import {testOutput} from './support/scene-output.mjs';

const project = fileURLToPath(new URL('../', import.meta.url));
const evidence = testOutput('js-bundling-2026-10-26-unit-fixtures');
async function put(root, relative, contents) {
  await mkdir(path.dirname(path.join(root, relative)), {recursive:true});
  await writeFile(path.join(root, relative), contents);
}
async function fixture(files = {}) {
  await mkdir(evidence, {recursive:true});
  const root = await mkdtemp(path.join(evidence, 'run-'));
  const defaults = {
    'package.json':'{"type":"module"}',
    'index.html':'<!doctype html><html><head><script type="importmap">{"imports":{}}</script></head><body><script type="module" src="./source/main.js"></script></body></html>',
    'source/main.js':"export {value} from './leaf.js';",
    'source/leaf.js':'export const value = 1;',
  };
  for (const [relative, contents] of Object.entries({...defaults, ...files})) await put(root, relative, contents);
  return root;
}
async function importBundle(root, revision = '') {
  return import(`${pathToFileURL(path.join(root, RUNTIME_BUNDLE)).href}?v=${revision}`);
}
async function copySourceGraph(root, entries) {
  const copied = new Set(), pending = [...entries];
  while (pending.length) {
    const relative = pending.pop();
    if (copied.has(relative)) continue;
    copied.add(relative);
    const contents = await readFile(path.join(project, relative));
    await put(root, relative, contents);
    for (const specifier of moduleSpecifiers(contents.toString('utf8'), relative)) {
      assert(specifier.startsWith('.'), 'Save/profile fixture must stay independent of browser graphics');
      pending.push(path.posix.normalize(path.posix.join(path.posix.dirname(relative), specifier)));
    }
  }
  return copied;
}
class Storage {
  constructor(entries) {this.items = new Map(entries);}
  get length() {return this.items.size;}
  key(index) {return [...this.items.keys()][index] ?? null;}
  getItem(key) {return this.items.get(key) ?? null;}
  setItem(key, value) {this.items.set(key, String(value));}
  removeItem(key) {this.items.delete(key);}
}

test('minified real save/profile cycle retains existing saves, export format and storage namespaces', async () => {
  const root = await fixture({'source/main.js':[
    "export {PlayerProfiles, PlayerProfileError} from './player-profiles.js';",
    "export {createSaveExport} from './save-export.js';",
    "export {parseSaveImport} from './save-import.js';",
  ].join('\n')});
  const copied = await copySourceGraph(root, ['source/player-profiles.js', 'source/save-export.js', 'source/save-import.js']);
  assert(copied.has('source/campaign-progress.js'));
  const result = await refreshWebCache({projectDir:root});
  const bundled = await importBundle(root, result.version);
  const save = {version:1, level:'lvl02a', position:[1,2,3], yaw:.4, pitch:-.2,
    game:{version:1, level:'lvl02a', state:{health:9, score:1234, skill:6},
      objects:[{id:'gate', open:true, openFraction:1, switchedOn:true}]}};
  const input = {playerName:'Rick', save, progress:{version:1, highestUnlocked:3},
    options:{difficulty:'Hard', noClip:false}, exportedAt:'2026-10-22T12:00:00.000Z'};
  const rawSave = JSON.stringify(save), otherId = 'p_existing_player';
  const storage = new Storage([
    ['redcat.players.v1', JSON.stringify({version:1, activeId:'legacy', players:[{id:'legacy', name:'Rick'}, {id:otherId, name:'Andere'}]})],
    ['redcat.save.v1', rawSave],
    [`redcat.player.${otherId}.redcat.save.v1`, rawSave],
    ['redcat.settings.v1', '{"musicVolume":0.25}'],
  ]);
  const before = [...storage.items];
  const profiles = new bundled.PlayerProfiles({storage});
  assert.deepEqual([...storage.items], before, 'Initialization must not migrate or rewrite existing storage');
  assert.equal(profiles.key('redcat.save.v1'), 'redcat.save.v1');
  assert.equal(profiles.key('redcat.save.v1', otherId), `redcat.player.${otherId}.redcat.save.v1`);
  assert.equal(profiles.recoveryDatabase(), 'redcat-recovery-saves');
  assert.equal(profiles.recoveryDatabase(otherId), `redcat-recovery-saves-${otherId}`);
  const exported = bundled.createSaveExport(input);
  assert.deepEqual(exported, originalExport(input), 'Bundling must preserve serialized field names and exact export bytes');
  assert.deepEqual(bundled.parseSaveImport(exported.text).save, save);
  profiles.importAdventure(otherId, exported.bundle);
  assert.equal(storage.getItem('redcat.save.v1'), rawSave, 'Import to another player must leave legacy save bytes intact');
  assert.deepEqual(JSON.parse(storage.getItem(profiles.key('redcat.save.v1', otherId))), save);
  assert.equal(storage.getItem('redcat.settings.v1'), '{"musicVolume":0.25}');
  assert.equal(bundled.PlayerProfiles.name, 'PlayerProfiles');
  assert.equal(bundled.createSaveExport.name, 'createSaveExport');
  assert.throws(() => profiles.create(''), error => error instanceof bundled.PlayerProfileError && error.name === 'PlayerProfileError');
});

test('minification preserves dynamic property access, diagnostic names and module side effects', async () => {
  const root = await fixture({
    'source/main.js':"export {SaveState, diagnosticName, readField, initialization} from './api.js';",
    'source/api.js':`const initialization = [];
      initialization.push('initialized');
      export {initialization};
      export class SaveState { constructor() {this.playerAttackSerial=17; this.openFraction=.75;} snapshot() {return {...this};} }
      export function diagnosticName() {return 'named';}
      export function readField(object, field) {return object[field];}`,
  });
  const result = await refreshWebCache({projectDir:root});
  const api = await importBundle(root, result.version), state = new api.SaveState();
  assert.equal(api.SaveState.name, 'SaveState');
  assert.equal(api.diagnosticName.name, 'diagnosticName');
  assert.equal(api.readField(state, 'playerAttackSerial'), 17);
  assert.equal(JSON.stringify(state.snapshot()), '{"playerAttackSerial":17,"openFraction":0.75}');
  assert.deepEqual(api.initialization, ['initialized']);
});

test('bundler consumes validated snapshot bytes even if files on disk changed meanwhile', async () => {
  const root = await fixture();
  const files = new Map([
    ['source/main.js', Buffer.from("export {value} from './leaf.js';")],
    ['source/leaf.js', Buffer.from('export const value = 42;')],
  ]);
  await put(root, 'source/leaf.js', "throw new Error('Must not read changed disk content');");
  const resolveImport = (specifier, parent) => path.posix.normalize(path.posix.join(path.posix.dirname(parent), specifier));
  const built = await createRuntimeBundle({projectDir:root, entry:'source/main.js', files, resolveImport, revision:'snapshot-test'});
  await put(root, RUNTIME_BUNDLE, built.code);
  assert.equal((await importBundle(root)).value, 42);
  const map = JSON.parse(built.sourceMap);
  assert(map.sourcesContent.includes('export const value = 42;'));
  assert(!map.sourcesContent.some(source => source.includes('Must not read changed disk')));
  assert.match(built.code.toString(), /sourceMappingURL=game\.bundle\.js\.map\?v=snapshot-test/);
});

test('refresh is deterministic, excludes generated output, repairs output and versions dependency changes', async () => {
  const root = await fixture(), first = await refreshWebCache({projectDir:root});
  const code = await readFile(path.join(root, RUNTIME_BUNDLE)), map = await readFile(path.join(root, RUNTIME_BUNDLE_MAP));
  const html = await readFile(path.join(root, 'index.html'), 'utf8');
  assert.match(html, new RegExp(`src="\\./src/game\\.bundle\\.js\\?v=${first.version}"`));
  assert.match(html, /data-source="\.\/source\/main\.js"/);
  assert(!first.modules.includes(RUNTIME_BUNDLE));
  assert.deepEqual(await refreshWebCache({projectDir:root}), {...first, changed:false});
  await put(root, RUNTIME_BUNDLE, "import 'missing/generated-dependency.js';");
  await put(root, RUNTIME_BUNDLE_MAP, 'stale source map');
  const repaired = await refreshWebCache({projectDir:root});
  assert.equal(repaired.version, first.version, 'Generated bytes must not enter source revision');
  assert.equal(repaired.changed, true);
  assert.deepEqual(await readFile(path.join(root, RUNTIME_BUNDLE)), code);
  assert.deepEqual(await readFile(path.join(root, RUNTIME_BUNDLE_MAP)), map);
  await put(root, 'source/leaf.js', 'export const value = 73;');
  const changed = await refreshWebCache({projectDir:root});
  assert.notEqual(changed.version, first.version);
  assert.equal((await importBundle(root, changed.version)).value, 73);
  assert.match((await readFile(path.join(root, RUNTIME_BUNDLE), 'utf8')), new RegExp(`sourceMappingURL=game\\.bundle\\.js\\.map\\?v=${changed.version}`));
});

test('invalid edited source leaves the last complete HTML and runtime bundle intact', async () => {
  const root = await fixture();
  await refreshWebCache({projectDir:root});
  const paths = ['index.html', RUNTIME_BUNDLE, RUNTIME_BUNDLE_MAP];
  const before = await Promise.all(paths.map(relative => readFile(path.join(root, relative))));
  await put(root, 'source/leaf.js', 'export const value = ;');
  await assert.rejects(refreshWebCache({projectDir:root}));
  for (let index = 0; index < paths.length; index++) assert.deepEqual(await readFile(path.join(root, paths[index])), before[index]);
});

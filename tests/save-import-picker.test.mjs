import test from 'node:test';
import assert from 'node:assert/strict';
import {pickSaveImport} from '../source/save-import-picker.js';
import {MAX_SAVE_IMPORT_BYTES} from '../source/save-import.js';

function fixture() {
  const input = new EventTarget(), window = new EventTarget(), callbacks = [];
  Object.assign(input, {files: [], setAttribute() {}, click() {this.clicked = true;}, remove() {this.removed = true;}});
  const parent = {append(child) {assert.equal(child, input);}};
  const document = {createElement: () => input, querySelector: () => parent};
  return {input, window, callbacks, options: {document, window, defer: callback => {callbacks.push(callback); return callbacks.length;}, cancelDefer() {}}};
}

test('browser import reads the selected JSON file and removes its picker', async () => {
  const {input, options} = fixture();
  const picked = pickSaveImport(options);
  assert.equal(input.clicked, true);
  input.files = [{name: 'backup.JSON', size: 2, text: async () => '{}'}];
  input.dispatchEvent(new Event('change'));
  assert.deepEqual(await picked, {filename: 'backup.JSON', text: '{}'});
  assert.equal(input.removed, true);
});

test('browser picker cancellation and focus fallback release the pending menu', async () => {
  for (const kind of ['cancel', 'focus']) {
    const {input, window, callbacks, options} = fixture();
    const picked = pickSaveImport(options);
    if (kind === 'cancel') input.dispatchEvent(new Event('cancel'));
    else {window.dispatchEvent(new Event('focus')); callbacks.at(-1)();}
    assert.deepEqual(await picked, {canceled: true});
    assert.equal(input.removed, true);
  }
});

test('focus return cannot cancel a selected file while its contents are being read', async () => {
  const {input, window, callbacks, options} = fixture();
  let complete;
  const picked = pickSaveImport(options);
  input.files = [{name: 'backup.json', size: 2, text: () => new Promise(resolve => {complete = resolve;})}];
  input.dispatchEvent(new Event('change'));
  window.dispatchEvent(new Event('focus')); callbacks.at(-1)();
  complete('{}');
  assert.equal((await picked).text, '{}');
});

test('browser import refuses oversized, empty and non-JSON files before reading', async () => {
  for (const [name, size] of [['bad.exe', 2], ['empty.json', 0], ['large.json', MAX_SAVE_IMPORT_BYTES + 1]]) {
    const {input, options} = fixture();
    const picked = pickSaveImport(options);
    let read = false;
    input.files = [{name, size, text: async () => {read = true; return '{}';}}];
    input.dispatchEvent(new Event('change'));
    await assert.rejects(picked);
    assert.equal(read, false); assert.equal(input.removed, true);
  }
});

test('native cancellation or errors never fall through to a browser picker', async () => {
  assert.deepEqual(await pickSaveImport({importFile: async () => ({canceled: true}), document: null}), {canceled: true});
  await assert.rejects(pickSaveImport({importFile: async () => {throw new Error('read failure');}, document: null}), /read failure/);
});

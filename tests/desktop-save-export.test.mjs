import test from 'node:test';
import assert from 'node:assert/strict';
import {createRequire} from 'node:module';
import {createSaveExport} from '../source/save-export.js';
const {validateExportPayload, trustedExportSender, createSaveExporter, MAX_SAVE_EXPORT_BYTES} =
  createRequire(import.meta.url)('../electron/save-export.cjs');

function fixture() {
  const payload = createSaveExport({playerName:'Rick', save:{
    version:1, level:'lvl00a', position:[1,2,3], yaw:0, pitch:0,
    game:{version:1, level:'lvl00a', state:{health:10}},
  }});
  const mainFrame = {url:'redcat://game/index.html'}, webContents = {mainFrame};
  const win = {isDestroyed:()=>false, webContents};
  const event = {sender:webContents, senderFrame:mainFrame};
  return {payload, win, event};
}

test('desktop save export only accepts the main local game frame and bounded JSON payloads', () => {
  const {payload, win, event} = fixture();
  assert.equal(trustedExportSender(event, win), true);
  for (const url of ['https://game/index.html', 'redcat://other/index.html', 'redcat://evil@game/index.html']) {
    event.senderFrame.url = url;
    assert.equal(trustedExportSender(event, win), false);
  }
  assert.equal(trustedExportSender({...event,senderFrame:{url:'redcat://game/index.html'}}, win), false);
  assert.equal(trustedExportSender({...event,sender:{}}, win), false);
  assert.deepEqual(validateExportPayload(payload), {filename:payload.filename,text:payload.text});
  for (const invalid of [
    {...payload,filename:'../save.json'}, {...payload,filename:'script.js'},
    {...payload,text:'{}'}, {...payload,text:'{invalid'},
    {...payload,text:'x'.repeat(MAX_SAVE_EXPORT_BYTES + 1)},
  ]) assert.throws(() => validateExportPayload(invalid));
});

test('desktop save export writes exclusively to the path chosen in the native dialog', async () => {
  const {payload, win, event} = fixture(), writes = [], dialogs = [];
  const exportFile = createSaveExporter({
    getWindow:()=>win,
    dialog:{async showSaveDialog(parent, options) {dialogs.push({parent,options}); return {canceled:false,filePath:'/chosen/save.json'};}},
    writeFile:async (...args)=>writes.push(args),
  });
  assert.deepEqual(await exportFile(event, {...payload,filePath:'/ignored/bad.json'}), {saved:true});
  assert.equal(dialogs[0].parent, win);
  assert.equal(dialogs[0].options.defaultPath, payload.filename);
  assert.deepEqual(dialogs[0].options.filters[0].extensions,['json']);
  assert.ok(dialogs[0].options.properties.includes('showOverwriteConfirmation'));
  assert.deepEqual(writes, [['/chosen/save.json',payload.text,{encoding:'utf8'}]]);
});

test('desktop save export cancellation never writes and concurrent dialogs are rejected', async () => {
  const {payload, win, event} = fixture();
  let close;
  const exportFile = createSaveExporter({
    getWindow:()=>win, dialog:{showSaveDialog:()=>new Promise(resolve=>{close=resolve;})},
    writeFile:()=>assert.fail('cancelled exports never write'),
  });
  const pending = exportFile(event,payload);
  await assert.rejects(exportFile(event,payload),/al een exportvenster/);
  close({canceled:true});
  assert.deepEqual(await pending,{canceled:true});
  const retry = exportFile(event,payload);
  close({canceled:true});
  await retry;
});

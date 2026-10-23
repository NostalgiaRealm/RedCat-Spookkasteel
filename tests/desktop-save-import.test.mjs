import test from 'node:test';
import assert from 'node:assert/strict';
import {EventEmitter} from 'node:events';
import {createRequire} from 'node:module';
const {MAX_SAVE_IMPORT_BYTES, readSaveDocument, createSaveImporter} =
  createRequire(import.meta.url)('../electron/save-import.cjs');

function fixture() {
  const mainFrame = {url:'redcat://game/index.html'};
  const webContents = Object.assign(new EventEmitter(), {mainFrame});
  const win = {isDestroyed:()=>false, webContents};
  const event = {sender:webContents, senderFrame:mainFrame};
  return {win, event};
}

function reader(bytes, {size=bytes.length, isFile=true} = {}) {
  let offset=0, closed=0, opened=0;
  return {
    get closed() { return closed; }, get opened() { return opened; },
    async openFile(filename, mode) {
      opened++;
      assert.equal(filename,'/chosen/backup.json'); assert.equal(mode,'r');
      return {
        async stat() { return {size,isFile:()=>isFile}; },
        async read(buffer,start,length) {
          const count=Math.min(length,bytes.length-offset);
          bytes.copy(buffer,start,offset,offset+count); offset+=count;
          return {bytesRead:count};
        },
        async close() { closed++; },
      };
    },
  };
}

test('desktop import only opens a JSON file selected by the native dialog', async () => {
  const {win,event}=fixture(), file=reader(Buffer.from('\ufeff{"name":"Renée"}')), dialogs=[];
  const importSave=createSaveImporter({getWindow:()=>win,openFile:file.openFile,dialog:{
    async showOpenDialog(parent,options) { dialogs.push({parent,options}); return {filePaths:['/chosen/backup.json']}; },
  }});
  assert.deepEqual(await importSave(event,{filePath:'/ignored/secret'}),{filename:'backup.json',text:'{"name":"Renée"}'});
  assert.equal(dialogs[0].parent,win);
  assert.deepEqual(dialogs[0].options.filters[0].extensions,['json']);
  assert.deepEqual(dialogs[0].options.properties,['openFile']);
  assert.equal(file.closed,1);
});

test('desktop import rejects untrusted senders before opening its picker', async () => {
  const {win,event}=fixture();
  const importSave=createSaveImporter({getWindow:()=>win,dialog:{showOpenDialog:()=>assert.fail('untrusted picker')},openFile:()=>assert.fail('untrusted read')});
  for (const bad of [{...event,sender:{}},{...event,senderFrame:{url:'redcat://game/index.html'}}]) {
    await assert.rejects(importSave(bad),/vanuit het spel/);
  }
  event.senderFrame.url='https://example.com';
  await assert.rejects(importSave(event),/vanuit het spel/);
});

test('desktop import cancellation releases its lock and never reads a file', async () => {
  const {win,event}=fixture(); let close;
  const importSave=createSaveImporter({getWindow:()=>win,dialog:{showOpenDialog:()=>new Promise(resolve=>{close=resolve;})},openFile:()=>assert.fail('cancelled read')});
  const pending=importSave(event);
  await assert.rejects(importSave(event),/al een importvenster/);
  close({canceled:true}); assert.deepEqual(await pending,{canceled:true});
  const retry=importSave(event);
  close({canceled:true}); await retry;
});

test('desktop import discards selections after main-page navigation or window destruction', async () => {
  for (const reason of ['navigation','destroyed','renderer']) {
    const {win,event}=fixture(); let close;
    const importSave=createSaveImporter({getWindow:()=>win,dialog:{showOpenDialog:()=>new Promise(resolve=>{close=resolve;})},openFile:()=>assert.fail('stale read')});
    const pending=importSave(event);
    if (reason==='navigation') win.webContents.emit('did-start-navigation',{},'redcat://game/index.html',false,true);
    else if (reason==='renderer') win.webContents.emit('render-process-gone');
    else win.isDestroyed=()=>true;
    close({filePaths:['/chosen/backup.json']});
    assert.deepEqual(await pending,{canceled:true});
    assert.equal(win.webContents.listenerCount('did-start-navigation'),0);
  }
});

test('desktop import checks file type, actual byte limits, valid UTF-8 and closes every handle', async () => {
  await assert.rejects(readSaveDocument('/chosen/backup.txt',()=>assert.fail('wrong extension')),/JSON-bestand/);
  const cases=[
    [Buffer.from('{}'),{size:MAX_SAVE_IMPORT_BYTES+1},/te groot/],
    [Buffer.from('{}'),{isFile:false},/ongeldig/],
    [Buffer.alloc(0),{size:1},/leeg/],
    [Buffer.from([0xc3,0x28]),{},/UTF-8/],
    // The file grew after stat. Enforce the stream limit independently.
    [Buffer.alloc(MAX_SAVE_IMPORT_BYTES+1,65),{size:1},/te groot/],
  ];
  for (const [bytes,options,error] of cases) {
    const file=reader(bytes,options);
    await assert.rejects(readSaveDocument('/chosen/backup.json',file.openFile),error);
    assert.equal(file.closed,1);
  }
});

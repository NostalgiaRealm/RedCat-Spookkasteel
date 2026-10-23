import test from 'node:test';
import assert from 'node:assert/strict';
import {AndroidHost, androidRenderSize} from '../src/android-host.js';

function nativeWindow() {
  const window = new EventTarget(), messages = [];
  window.RedCatAndroid = {postMessage: json => messages.push(JSON.parse(json))};
  const emit = detail => window.dispatchEvent(Object.assign(new Event('redcat:android'), {detail}));
  return {window, messages, emit};
}

test('ordinary desktop and mobile browser hosts require no native handshake', () => {
  for (const window of [undefined, new EventTarget(), {desktop:{}}]) {
    const host = new AndroidHost(window);
    host.connect({onForeground: () => assert.fail('no Android callback on a browser')});
    assert.equal(host.enabled, false);
    assert.equal(host.active, true);
    assert.equal(host.setFullscreen(true), false);
    assert.equal(host.quit(), false);
  }
});

test('native lifecycle waits for foreground, deduplicates events and blocks background Back', () => {
  const {window, messages, emit} = nativeWindow(), events = [];
  const host = new AndroidHost(window);
  const handlers = {onSuspend:()=>events.push('pause'),onForeground:()=>events.push('foreground'),onBack:()=>events.push('back')};
  host.connect(handlers); host.connect(handlers);
  assert.deepEqual(messages,[{type:'ready'}]);
  assert.equal(host.active,false);
  emit({type:'back'}); emit({type:'lifecycle',active:'true'});
  assert.deepEqual(events,[]);
  emit({type:'lifecycle',active:true}); emit({type:'lifecycle',active:true}); emit({type:'back'});
  emit({type:'lifecycle',active:false}); emit({type:'lifecycle',active:false}); emit({type:'back'});
  assert.deepEqual(events,['foreground','back','pause']);
  host.dispose(); emit({type:'lifecycle',active:true});
  assert.equal(host.active,false);
});

test('native display messages release keep-awake while suspended without a per-frame bridge call', () => {
  const {window, messages, emit} = nativeWindow(), host = new AndroidHost(window);
  host.connect(); emit({type:'lifecycle',active:true});
  host.setFullscreen(true); host.setKeepAwake(true); host.setKeepAwake(true);
  emit({type:'lifecycle',active:false}); host.setKeepAwake(true); host.setKeepAwake(false); host.quit();
  assert.deepEqual(messages,[{type:'ready'},{type:'fullscreen',enabled:true},{type:'keep-awake',enabled:true},{type:'keep-awake',enabled:false},{type:'quit'}]);
});

test('Android automatic render size caps pixels without stretching portrait or ultrawide screens', () => {
  for (const [width,height,dpr] of [[1920,1080,1],[412,915,3],[915,412,3],[360,640,1],[768,1024,2]]) {
    const [w,h] = androidRenderSize(width,height,dpr);
    assert.ok(w*h<=1280*720);
    assert.ok(Math.min(w,h)<=720);
    assert.ok(w<=width*dpr && h<=height*dpr);
    assert.ok(Math.abs(w/h-width/height)<.005);
  }
  assert.deepEqual(androidRenderSize(360,640,1),[360,640]);
  assert.deepEqual(androidRenderSize(NaN,0,-1),[1,1]);
});

test('Android save export correlates document picker results and treats cancellation as cancellation', async () => {
  const {window,messages,emit} = nativeWindow(), host = new AndroidHost(window);
  host.connect();
  const payload = {filename:'RedCat-Spookkasteel-Rick-2026-10-20T120000Z.json',text:'{"format":"redcat-spookkasteel-save"}'};
  const pending = host.exportSave(payload), request = messages.at(-1);
  assert.deepEqual(request,{type:'export-save',id:'save-1',...payload});
  await assert.rejects(host.exportSave(payload),/al een exportvenster/);
  emit({type:'export-result',id:'unrelated',ok:true});
  assert.equal(host.exports.size,1);
  emit({type:'export-result',id:request.id,canceled:true});
  assert.equal(await pending,false);
  const next = host.exportSave(payload);
  emit({type:'export-result',id:'save-2',ok:true});
  assert.deepEqual(await next,{saved:true});
  const failed = host.exportSave(payload);
  emit({type:'export-result',id:'save-3',error:'Geen ruimte'});
  await assert.rejects(failed,/Geen ruimte/);
});

test('Android save export validates names and byte limits and rejects disposed requests', async () => {
  const {window,messages} = nativeWindow(), host = new AndroidHost(window);
  host.connect();
  await assert.rejects(host.exportSave({filename:'../bad.json',text:'{}'}),/ongeldig/);
  await assert.rejects(host.exportSave({filename:'RedCat-Spookkasteel-Rick.json',text:'é'.repeat(17*1024*1024)}),/te groot/);
  assert.equal(messages.length,1);
  const pending=host.exportSave({filename:'RedCat-Spookkasteel-Rick.json',text:'{}'});
  host.dispose();
  await assert.rejects(pending,/gesloten/);
  assert.equal(host.exports.size,0);
});

test('Android import correlates picker results, supports cancellation and excludes export concurrently', async () => {
  const {window,messages,emit}=nativeWindow(), host=new AndroidHost(window);
  host.connect();
  const first=host.importSave(), request=messages.at(-1);
  assert.deepEqual(request,{type:'import-save',id:'import-1'});
  await assert.rejects(host.importSave(),/bestandsvenster/);
  await assert.rejects(host.exportSave({filename:'RedCat-Spookkasteel-Rick.json',text:'{}'}),/importvenster/);
  emit({type:'import-result',id:'unrelated',ok:true,text:'{}',filename:'backup.json'});
  assert.equal(host.imports.size,1);
  emit({type:'import-result',id:request.id,canceled:true});
  assert.deepEqual(await first,{canceled:true});
  const second=host.importSave();
  emit({type:'import-result',id:'import-2',ok:true,text:'{"name":"Renée"}',filename:'backup.json'});
  assert.deepEqual(await second,{text:'{"name":"Renée"}',filename:'backup.json'});
  const exporting=host.exportSave({filename:'RedCat-Spookkasteel-Rick.json',text:'{}'});
  await assert.rejects(host.importSave(),/bestandsvenster/);
  emit({type:'export-result',id:'save-3',canceled:true}); await exporting;
});

test('Android import rejects malformed results, native read errors and disposed requests', async () => {
  const {window,messages,emit}=nativeWindow(),host=new AndroidHost(window);
  await assert.rejects(host.importSave(),/niet beschikbaar/);
  host.connect();
  for (const result of [
    {ok:true,text:'{}',filename:'backup.txt'}, {ok:true,text:'',filename:'backup.json'},
    {ok:true,text:'é'.repeat(17*1024*1024),filename:'backup.json'},
    {error:'Bestand niet leesbaar'},
  ]) {
    const pending=host.importSave();
    emit({type:'import-result',id:messages.at(-1).id,...result});
    await assert.rejects(pending);
    assert.equal(host.imports.size,0);
  }
  const pending=host.importSave(); host.dispose();
  await assert.rejects(pending,/gesloten/);
  assert.equal(host.imports.size,0);
});

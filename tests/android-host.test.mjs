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

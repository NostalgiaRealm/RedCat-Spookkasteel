import test from 'node:test';
import assert from 'node:assert/strict';
import {FullscreenPreference,normalizeFullscreenPreference} from '../src/fullscreen-preference.js';

function eventTarget() {
  const listeners=new Map();
  return {
    addEventListener(type,handler){if(!listeners.has(type))listeners.set(type,new Set());listeners.get(type).add(handler);},
    removeEventListener(type,handler){listeners.get(type)?.delete(handler);},
    async dispatch(event){await Promise.all([...(listeners.get(event.type)||[])].map(handler=>handler(event)));},
  };
}
function deferred() {
  let resolve,reject;
  const promise=new Promise((yes,no)=>{resolve=yes;reject=no;});
  return {promise,resolve,reject};
}
function fixture({enabled=true,supported=true,request,fullscreen=false,shouldRequest}={}) {
  const calls=[],window={...eventTarget(),navigator:{userActivation:{isActive:true}}};
  const document={...eventTarget(),defaultView:window,fullscreenEnabled:supported,fullscreenElement:null};
  document.documentElement={requestFullscreen(){calls.push('fullscreen');return request?.()??Promise.resolve();}};
  if(fullscreen)document.fullscreenElement=document.documentElement;
  const preference=new FullscreenPreference(document,{enabled,shouldRequest});
  const gesture=(options={},before=()=>{})=>{
    const event={type:'click',button:0,isTrusted:true,...options};
    before(event);
    return window.dispatch(event);
  };
  const change=async enabled=>{document.fullscreenElement=enabled?document.documentElement:null;await document.dispatch({type:'fullscreenchange'});};
  return {calls,window,document,preference,gesture,change};
}

test('fullscreen defaults on and preserves an explicitly disabled saved preference',()=>{
  for(const value of [undefined,null,true,0,'false',{}])assert.equal(normalizeFullscreenPreference(value),true);
  assert.equal(normalizeFullscreenPreference(false),false);
});

test('default entry waits for a gesture and runs after media playback and pointer lock',async()=>{
  const {calls,gesture,preference}=fixture();
  assert.deepEqual(calls,[]);
  await gesture({},()=>calls.push('unmute','play','pointerlock'));
  assert.deepEqual(calls,['unmute','play','pointerlock','fullscreen']);
  assert.equal(preference.pending,false);
});

test('disabled preferences and unsupported browsers never request fullscreen',async()=>{
  for(const options of [{enabled:false},{supported:false}]) {
    const {calls,gesture}=fixture(options);
    await gesture();
    assert.deepEqual(calls,[]);
  }
  const {calls,document,gesture}=fixture();
  delete document.documentElement.requestFullscreen;
  await gesture();
  assert.deepEqual(calls,[]);
});

test('synthetic clicks, escape, repeated keys and browser shortcuts do not trigger entry',async()=>{
  const {calls,gesture}=fixture();
  for(const options of [
    {isTrusted:false},{button:2},{ctrlKey:true},{altKey:true},{metaKey:true},
    {type:'keydown',key:'Escape'},{type:'keydown',key:'F11'},
    {type:'keydown',key:'Shift'},{type:'keydown',key:'Tab'},
    {type:'keydown',key:'a',repeat:true},
  ])await gesture(options);
  assert.deepEqual(calls,[]);
  await gesture({type:'keydown',key:'a'});
  assert.deepEqual(calls,['fullscreen']);
});

test('keyboard activation of controls preserves the gesture for their click handler',async()=>{
  const {calls,gesture}=fixture();
  const button={closest:()=>button};
  await gesture({type:'keydown',key:'Enter',target:button});
  assert.deepEqual(calls,[]);
  await gesture({target:button},()=>calls.push('unmute','play'));
  assert.deepEqual(calls,['unmute','play','fullscreen']);
});

test('a gesture already consumed by another control waits for a later interaction',async()=>{
  const {calls,window,gesture}=fixture();
  window.navigator.userActivation.isActive=false;
  await gesture();
  assert.deepEqual(calls,[]);
  window.navigator.userActivation.isActive=true;
  await gesture();
  assert.deepEqual(calls,['fullscreen']);
});

test('reserved UI gestures leave the initial request pending',async()=>{
  let allowed=false;
  const {calls,gesture}=fixture({shouldRequest:()=>allowed});
  await gesture();
  assert.deepEqual(calls,[]);
  allowed=true;
  await gesture();
  assert.deepEqual(calls,['fullscreen']);
});

test('gestures cannot start concurrent fullscreen requests',async()=>{
  const pending=deferred();
  const {calls,gesture}=fixture({request:()=>pending.promise});
  const first=gesture();
  await gesture();
  assert.deepEqual(calls,['fullscreen']);
  pending.resolve();
  await first;
  await gesture();
  assert.deepEqual(calls,['fullscreen']);
});

test('a rejected initial request can retry on the next trusted gesture',async()=>{
  let attempts=0;
  const {calls,gesture,preference}=fixture({request:()=>++attempts===1?Promise.reject(new Error('Activation expired')):Promise.resolve()});
  await gesture();
  assert.equal(preference.pending,true);
  await gesture();
  assert.equal(preference.pending,false);
  assert.deepEqual(calls,['fullscreen','fullscreen']);
});

test('disabling fullscreen while a request is pending prevents retries after rejection',async()=>{
  const pending=deferred();
  const {calls,gesture,preference}=fixture({request:()=>pending.promise});
  const first=gesture();
  preference.setEnabled(false);
  pending.reject(new Error('Blocked'));
  await first;
  await gesture();
  assert.deepEqual(calls,['fullscreen']);
  assert.equal(preference.pending,false);
});

test('exiting fullscreen with Escape never triggers automatic re-entry',async()=>{
  const {calls,gesture,change}=fixture();
  await gesture();
  await change(true);
  await change(false);
  await gesture({type:'keydown',key:'Escape'});
  await gesture();
  assert.deepEqual(calls,['fullscreen']);
});

test('manual fullscreen entry satisfies the default even when an old request rejects later',async()=>{
  const pending=deferred();
  const {calls,gesture,change,preference}=fixture({request:()=>pending.promise});
  const first=gesture();
  await change(true);
  await change(false);
  pending.reject(new Error('Superseded'));
  await first;
  await gesture();
  assert.deepEqual(calls,['fullscreen']);
  assert.equal(preference.pending,false);
});

test('a document already fullscreen at startup does not re-enter after exit',async()=>{
  const {calls,gesture,change}=fixture({fullscreen:true});
  await change(false);
  await gesture();
  assert.deepEqual(calls,[]);
});

test('explicit settings changes do not re-arm a completed automatic startup entry',async()=>{
  const {calls,gesture,preference}=fixture();
  await gesture();
  preference.setEnabled(false);
  preference.setEnabled(true);
  await gesture();
  assert.deepEqual(calls,['fullscreen']);
});

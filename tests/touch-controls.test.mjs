import test from 'node:test';
import assert from 'node:assert/strict';
import {TouchControls,normalizeTouchPreference,isMobileWeb,touchControlsEnabled} from '../src/touch-controls.js';

test('touch preference preserves explicit choices and migrates legacy booleans', () => {
  for (const value of [undefined,null,'auto','unknown',0,{}]) assert.equal(normalizeTouchPreference(value),'auto');
  for (const value of [true,'on',' ON ']) assert.equal(normalizeTouchPreference(value),'on');
  for (const value of [false,'off','OFF']) assert.equal(normalizeTouchPreference(value),'off');
  assert.equal(touchControlsEnabled('off',{navigator:{userAgent:'Android'}}),false);
  assert.equal(touchControlsEnabled('on',{desktop:{},navigator:{userAgent:'Electron/44'}}),true);
  assert.equal(touchControlsEnabled(true,{navigator:{userAgent:'Desktop'}}),true);
});

test('mobile auto detection uses device capabilities, including iPad desktop UA', () => {
  const matches = (...queries) => query => ({matches:queries.includes(query)});
  const cases = [
    [{userAgentData:{mobile:true}},undefined,true],
    [{userAgent:'Mozilla/5.0 (Linux; Android 14)'},undefined,true],
    [{userAgent:'Mozilla/5.0 (iPhone; CPU iPhone OS)'},undefined,true],
    [{userAgent:'Mozilla/5.0 (Macintosh; Intel Mac OS X)',platform:'MacIntel',maxTouchPoints:5},undefined,true],
    [{userAgent:'Desktop',maxTouchPoints:2},matches('(pointer: coarse)','(hover: none)'),true],
    [{userAgent:'Desktop',maxTouchPoints:2},matches('(any-pointer: coarse)','(hover: none)'),false],
    [{userAgent:'Desktop',maxTouchPoints:2},matches('(pointer: coarse)'),false],
    [{userAgent:'Desktop',maxTouchPoints:0},matches('(pointer: coarse)','(hover: none)'),false],
    [{userAgent:'Mozilla/5.0 (Macintosh; Intel Mac OS X)',maxTouchPoints:0},undefined,false],
    [{userAgent:'Mozilla/5.0 (Windows NT)',maxTouchPoints:10},matches('(pointer: fine)','(hover: hover)'),false],
    [{userAgent:'Android Electron/44.0'},undefined,false],
    [{userAgent:'Desktop'},() => { throw new Error('unavailable'); },false],
  ];
  for (const [navigator,matchMedia,expected] of cases) {
    assert.equal(isMobileWeb({navigator,matchMedia,desktop:false}),expected,JSON.stringify(navigator));
    assert.equal(touchControlsEnabled('auto',{navigator,matchMedia,desktop:false}),expected);
  }
  assert.equal(isMobileWeb({navigator:{userAgentData:{mobile:true}},desktop:{}}),false);
  assert.equal(isMobileWeb({navigator:undefined,matchMedia:undefined,desktop:false}),false);
});

const idle = {forward:0,right:0,jump:false,descend:false,walk:false,attack:false,use:false};
function pointer(target,type,id,x=50,y=50) {
  const event = new Event(type,{cancelable:true});
  Object.assign(event,{pointerId:id,pointerType:'touch',button:0,clientX:x,clientY:y});
  target.dispatchEvent(event);
  return event;
}

// A small DOM fixture exercises event ownership and cleanup without a browser or
// external DOM dependency. The browser touch suite covers actual pointer capture.
class Element extends EventTarget {
  constructor(tag) {
    super();
    this.tagName = tag.toUpperCase();
    this.children = [];
    this.attributes = new Map();
    this.style = {};
    this.captured = new Set();
    this.classes = new Set();
    this.classList = {
      toggle:(name,enabled) => enabled ? this.classes.add(name) : this.classes.delete(name),
      contains:name => this.classes.has(name),
    };
  }
  append(child) { child.parent = this; this.children.push(child); }
  remove() { if (this.parent) this.parent.children = this.parent.children.filter(child => child !== this); }
  setAttribute(name,value) { this.attributes.set(name,String(value)); }
  getAttribute(name) { return this.attributes.get(name); }
  getBoundingClientRect() { return {left:0,top:0,width:100,height:100}; }
  setPointerCapture(id) { this.captured.add(id); }
  releasePointerCapture(id) {
    if (!this.captured.delete(id)) return;
    pointer(this,'lostpointercapture',id);
  }
}

function withControls(run,callbacks={}) {
  const previousDocument = globalThis.document, previousWindow = globalThis.window;
  const document = new EventTarget();
  document.createElement = tag => new Element(tag);
  document.body = new Element('body');
  const window = new EventTarget();
  globalThis.document = document;
  globalThis.window = window;
  const controls = new TouchControls(callbacks);
  const element = id => {
    const search = parent => parent.id === id ? parent : parent.children.map(search).find(Boolean);
    return search(document.body);
  };
  try {
    controls.setEnabled(true);
    controls.setContext({playing:true});
    run({controls,element,window,document});
  } finally {
    controls.dispose();
    if (previousDocument === undefined) delete globalThis.document; else globalThis.document = previousDocument;
    if (previousWindow === undefined) delete globalThis.window; else globalThis.window = previousWindow;
  }
}

test('joystick is analog with a dead zone and a circular limit', () => withControls(({controls,element}) => {
  const move = element('touch-move');
  pointer(move,'pointerdown',1,52,50);
  assert.equal(controls.readInput().right,0);
  pointer(move,'pointermove',1,67,50);
  assert.ok(Math.abs(controls.readInput().right-(.5-.12)/.88)<1e-10);
  pointer(move,'pointermove',1,150,-50);
  const input = controls.readInput();
  assert.ok(input.forward>0 && input.right>0);
  assert.ok(Math.abs(Math.hypot(input.forward,input.right)-1)<1e-10);
  pointer(move,'pointerdown',2,0,0);
  pointer(move,'pointerup',2);
  assert.deepEqual(controls.readInput(),input,'a second finger cannot steal the joystick');
  pointer(move,'pointerup',1);
  assert.deepEqual(controls.readInput(),idle);
  assert.equal(controls.knob.style.transform,'');
}));

test('move, look, attack and jump can be held independently with multiple pointer owners', () => {
  const looks = [];
  withControls(({controls,element}) => {
    pointer(element('touch-move'),'pointerdown',1,50,16);
    pointer(element('touch-look'),'pointerdown',2,70,30);
    pointer(element('touch-attack'),'pointerdown',3);
    pointer(element('touch-jump'),'pointerdown',4);
    pointer(element('touch-attack'),'pointerdown',5);
    pointer(element('touch-look'),'pointermove',2,95,18);
    assert.deepEqual(looks,[[75,-36]],'touch camera swipes receive the 3x sensitivity boost');
    assert.equal(controls.readInput().forward,1);
    assert.equal(controls.readInput().jump,true);
    assert.equal(controls.readInput().attack,true);
    pointer(element('touch-attack'),'pointerup',3);
    assert.equal(controls.readInput().attack,true,'the other attack pointer remains held');
    pointer(element('touch-jump'),'pointerup',4);
    assert.equal(controls.readInput().attack,true);
    assert.equal(controls.readInput().jump,false);
    pointer(element('touch-attack'),'pointerup',5);
    assert.equal(controls.readInput().attack,false);
    assert.equal(controls.readInput().forward,1);
    const snapshot = controls.readInput(); snapshot.forward = 0;
    assert.equal(controls.readInput().forward,1,'callers cannot mutate internal input');
  },{onLook:(...delta) => looks.push(delta)});
});

test('repeated frame context preserves a hold; actual transitions clear it and update controls', () => withControls(({controls,element}) => {
  pointer(element('touch-jump'),'pointerdown',1);
  controls.setContext({playing:true,cutscene:false,noClip:false});
  assert.equal(controls.readInput().jump,true);
  controls.setContext({noClip:true});
  assert.deepEqual(controls.readInput(),idle);
  assert.equal(element('touch-jump').textContent,'Omhoog');
  assert.equal(element('touch-descend').hidden,false);
  assert.equal(element('touch-walk').hidden,true);
  pointer(element('touch-descend'),'pointerdown',2);
  assert.equal(controls.readInput().descend,true);
  controls.setContext({cutscene:true});
  assert.deepEqual(controls.readInput(),idle);
  assert.equal(element('touch-skip').textContent,'Overslaan · 2 s');
  assert.equal(element('touch-move').hidden,true);
  assert.equal(element('touch-look').hidden,true);
  assert.equal(element('touch-attack').hidden,true);
  pointer(element('touch-jump'),'pointerdown',3);
  assert.equal(controls.readInput().jump,false);
  pointer(element('touch-skip'),'pointerdown',4);
  assert.equal(controls.readInput().use,true,'skip remains held for the existing two-second timer');
  controls.setContext({playing:false});
  assert.deepEqual(controls.readInput(),idle);
  assert.equal(controls.element.hidden,true);
}));

test('skip is available only in cutscenes and clears use when leaving them', () => withControls(({controls,element}) => {
  const skip=element('touch-skip');
  assert.equal(skip.hidden,true);
  pointer(skip,'pointerdown',1);
  assert.equal(controls.readInput().use,false);
  controls.setContext({cutscene:true});
  assert.equal(skip.hidden,false);
  pointer(skip,'pointerdown',2);
  pointer(skip,'pointerdown',3);
  assert.equal(controls.readInput().use,true);
  pointer(skip,'pointerup',2);
  assert.equal(controls.readInput().use,true,'another finger still owns the skip hold');
  pointer(skip,'pointerup',3);
  assert.equal(controls.readInput().use,false);
  pointer(skip,'pointerdown',4);
  controls.setContext({cutscene:false});
  assert.equal(skip.hidden,true);
  assert.deepEqual(controls.readInput(),idle);
}));

test('cancel, capture loss, blur, visibility, resize, disable, and reset clear every held action', () => {
  const interruptions = [
    ({element}) => pointer(element('touch-attack'),'pointercancel',1),
    ({element}) => pointer(element('touch-attack'),'lostpointercapture',1),
    ({window}) => window.dispatchEvent(new Event('blur')),
    ({window}) => window.dispatchEvent(new Event('resize')),
    ({document}) => document.dispatchEvent(new Event('visibilitychange')),
    ({controls}) => controls.setEnabled(false),
    ({controls}) => controls.reset(),
  ];
  for (const interrupt of interruptions) withControls(fixture => {
    const {controls,element} = fixture;
    pointer(element('touch-attack'),'pointerdown',1);
    pointer(element('touch-jump'),'pointerdown',2);
    pointer(element('touch-walk'),'pointerdown',3);
    pointer(element('touch-walk'),'pointerup',3);
    pointer(element('touch-move'),'pointerdown',4,50,16);
    assert.equal(controls.readInput().walk,true);
    interrupt(fixture);
    assert.deepEqual(controls.readInput(),idle);
    assert.equal(controls.pointers.size,0);
    for (const node of [element('touch-attack'),element('touch-jump'),element('touch-move')]) assert.equal(node.captured.size,0);
  });
});

test('camera and walk respond once per gesture without obsolete use or save/load controls', () => {
  const actions = [];
  let gestures = 0;
  withControls(({controls,element}) => {
    for (const name of ['camera','walk']) {
      pointer(element(`touch-${name}`),'pointerdown',1);
      pointer(element(`touch-${name}`),'pointerup',1);
      const click = new Event('click',{cancelable:true}); Object.assign(click,{detail:1});
      element(`touch-${name}`).dispatchEvent(click);
    }
    assert.deepEqual(actions,['camera']);
    assert.equal(controls.readInput().walk,true);
    for (const name of ['use','options','tools','save','load']) assert.equal(element(`touch-${name}`),undefined);
    assert.equal(gestures,2);
  },{onAction:name => actions.push(name),onGesture:() => gestures++});
});

test('dispose clears input, removes controls and disconnects their listeners', () => withControls(({controls,element,document}) => {
  const jump = element('touch-jump');
  pointer(jump,'pointerdown',1);
  controls.dispose();
  assert.deepEqual(controls.readInput(),idle);
  assert.equal(document.body.children.length,0);
  pointer(jump,'pointerdown',2);
  assert.deepEqual(controls.readInput(),idle);
  controls.dispose();
}));

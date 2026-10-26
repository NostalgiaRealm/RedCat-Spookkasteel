import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {runInNewContext} from 'node:vm';
import {OriginalHud} from '../source/hud.js';

const manifest=JSON.parse(readFileSync(new URL('../assets/hud/manifest.json',import.meta.url)));
class LoadedHud extends OriginalHud {
  async load(){this.manifest=structuredClone(manifest);this.atlas={complete:true,src:'hud.png'};}
}
function fixture(t) {
  const previous=globalThis.window,browser={devicePixelRatio:1};globalThis.window=browser;
  t.after(()=>{if(previous===undefined)delete globalThis.window;else globalThis.window=previous;});
  const calls={draw:[],clear:[],transform:[],rect:0},listeners=new Map(),rect={width:640,height:480};
  const context={
    setTransform(...args){calls.transform.push(args);},
    clearRect(...args){calls.clear.push(args);},
    drawImage(...args){if(this.failNext){this.failNext=false;throw new Error('draw failed');}calls.draw.push(args);}
  };
  const canvas={width:640,height:480,getContext:()=>context,
    getBoundingClientRect(){calls.rect++;return {...rect};},
    addEventListener(name,callback){listeners.set(name,callback);}
  };
  const hud=new LoadedHud(canvas),input={state:{health:8,maxHealth:10,lives:3,potions:4,score:9000},totalPotions:15,
    enemy:{kind:'enemy',enemyType:'bat',variant:1,health:6,maxHealth:8},viewWidth:640,viewHeight:480,bottomInset:0};
  const render=()=>hud.render(input.state,input.totalPotions,input.enemy,input.viewWidth,input.viewHeight,{bottomInset:input.bottomInset});
  return {hud,input,canvas,context,calls,rect,browser,listeners,render};
}

test('unchanged HUD frames retain pixels without clear/draw calls while still measuring layout',t=>{
  const f=fixture(t);f.render();
  const draws=f.calls.draw.length;assert.ok(draws>10);
  for(let i=0;i<60;i++)f.render();
  assert.equal(f.calls.clear.length,1);assert.equal(f.calls.draw.length,draws);
  assert.equal(f.calls.transform.length,2);assert.equal(f.calls.rect,61);
  f.input.state={...f.input.state};f.input.enemy={...f.input.enemy,position:[20,30,40]};f.render();
  assert.equal(f.calls.draw.length,draws,'new object identities and non-HUD position changes do not redraw');
});

test('every displayed state and target value invalidates the HUD drawing',t=>{
  const f=fixture(t),changes=[
    ['health',()=>f.input.state.health--],
    ['max health',()=>f.input.state.maxHealth+=2],
    ['lives',()=>f.input.state.lives++],
    ['potions and digit spacing',()=>f.input.state.potions=123],
    ['score',()=>f.input.state.score++],
    ['level potion total',()=>f.input.totalPotions++],
    ['enemy health',()=>f.input.enemy.health--],
    ['enemy max health',()=>f.input.enemy.maxHealth+=2],
    ['enemy variant',()=>f.input.enemy.variant=2],
    ['enemy subtype fallback',()=>{delete f.input.enemy.variant;f.input.enemy.entity={SubType:'3'};}],
    ['enemy type',()=>f.input.enemy.enemyType='witch'],
    ['non-enemy target',()=>f.input.enemy.kind='actor'],
    ['eligible enemy returns',()=>f.input.enemy.kind='enemy'],
    ['dead target disappears',()=>f.input.enemy.health=0],
    ['positive target health returns',()=>f.input.enemy.health=3],
    ['target cleared',()=>f.input.enemy=null],
    ['legacy target without kind',()=>f.input.enemy={enemyType:'knight',health:1}]
  ];
  f.render();
  for(const [name,change] of changes){
    const before=f.calls.clear.length;change();f.render();
    assert.equal(f.calls.clear.length,before+1,name);
    f.render();assert.equal(f.calls.clear.length,before+1,`${name}: unchanged next frame`);
  }
});

test('HUD redraw follows CSS size, game viewport, DPR and touch inset changes',t=>{
  const f=fixture(t),changes=[
    ['CSS width',()=>f.rect.width=900],['CSS height',()=>f.rect.height=600],
    ['game width',()=>f.input.viewWidth=1024],['game height',()=>f.input.viewHeight=768],
    ['DPR',()=>f.browser.devicePixelRatio=2],['touch inset',()=>f.input.bottomInset=200],
    ['portrait rotation',()=>{f.rect.width=390;f.rect.height=844;f.input.viewWidth=390;f.input.viewHeight=844;}]
  ];
  f.render();
  for(const [name,change] of changes){
    const before=f.calls.clear.length;change();f.render();
    assert.equal(f.calls.clear.length,before+1,name);
    assert.equal(f.canvas.width,Math.round(f.rect.width*f.browser.devicePixelRatio));
    assert.equal(f.canvas.height,Math.round(f.rect.height*f.browser.devicePixelRatio));
    f.render();assert.equal(f.calls.clear.length,before+1,`${name}: unchanged next frame`);
  }
});

test('HUD redraw follows artwork replacement and recovers after artwork is temporarily unavailable',t=>{
  const f=fixture(t);f.render();
  for(const change of [
    ()=>f.hud.atlas={...f.hud.atlas},
    ()=>f.hud.atlas.src='replacement.png',
    ()=>f.hud.manifest=structuredClone(f.hud.manifest),
    ()=>f.hud.manifest.width+=1,
    ()=>f.hud.manifest.height+=1
  ]){
    const before=f.calls.clear.length;change();f.render();assert.equal(f.calls.clear.length,before+1);
  }
  const before=f.calls.clear.length,loaded=f.hud.manifest;
  f.hud.atlas.complete=false;f.render();assert.equal(f.calls.clear.length,before);
  f.hud.atlas.complete=true;f.render();assert.equal(f.calls.clear.length,before+1);
  f.hud.manifest=null;f.render();assert.equal(f.calls.clear.length,before+1);
  f.hud.manifest=loaded;f.render();assert.equal(f.calls.clear.length,before+2);
});

test('canvas resets and restored contexts redraw an otherwise unchanged HUD',t=>{
  const f=fixture(t);f.render();
  f.canvas.width=1;f.render();assert.equal(f.calls.clear.length,2);assert.equal(f.canvas.width,640);
  f.canvas.height=1;f.render();assert.equal(f.calls.clear.length,3);assert.equal(f.canvas.height,480);
  f.listeners.get('contextlost')();f.render();assert.equal(f.calls.clear.length,4);
  f.listeners.get('contextrestored')();f.render();assert.equal(f.calls.clear.length,5);
  f.render();assert.equal(f.calls.clear.length,5);
  // Any explicit owner clearing path can invalidate even with identical size.
  f.context.clearRect(0,0,640,480);f.hud.invalidate();f.render();assert.equal(f.calls.clear.length,7);
});

test('a failed draw cannot retain the signature of an earlier cleared image',t=>{
  const f=fixture(t);f.render();
  f.input.state.score++;f.context.failNext=true;
  assert.throws(()=>f.render(),/draw failed/);
  f.input.state.score--;f.render();
  assert.equal(f.calls.clear.length,3,'restoring the earlier values must redraw its cleared pixels');
  f.render();assert.equal(f.calls.clear.length,3);
});

test('main HUD counter updates write only changed text and keep checking canvas layout',()=>{
  const source=readFileSync(new URL('../source/main.js',import.meta.url),'utf8');
  const start=source.indexOf('function renderHud(){'),end=source.indexOf('\nfunction updateSkipIndicator',start);
  assert.ok(start>=0&&end>start);
  const writes=[],nodes=new Map();
  for(const key of ['health','lives','score','potions','mirror']){
    let text='';nodes.set(key,{get textContent(){return text;},set textContent(value){text=String(value);writes.push([key,text]);}});
  }
  nodes.set('game',{width:640,height:480});
  const state={health:10,lives:3,score:0,potions:0,mirror:0},draws=[];
  const render=runInNewContext(`${source.slice(start,end)};renderHud;`,{
    gameplay:{state,totalPotions:15},world:{targeting:{locked:false}},$:id=>nodes.get(id),
    originalHud:{render(...args){draws.push(args);}},touchEnabled:false,controllerActive:false
  });
  render();assert.equal(writes.length,5);
  render();assert.equal(writes.length,5);assert.equal(draws.length,2);
  state.health=9.5;render();assert.deepEqual(writes.at(-1),['health','9.5']);assert.equal(writes.length,6);
  state.mirror=1;render();assert.deepEqual(writes.at(-1),['mirror','1']);assert.equal(writes.length,7);
});

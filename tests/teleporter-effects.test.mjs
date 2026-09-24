import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync,existsSync} from 'node:fs';
import * as THREE from 'three';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';
import {WorldEffects} from '../src/world-effects.js';
import {showTeleporter,teleporterGeometry,TELEPORT_EFFECT_SECONDS} from '../src/teleporter-effects.js';

const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
const manifest=json('assets/effects/manifest.json'),level=json('data/levels/lvl04a/level.json');
function effects(game) {
  const world={scene:new THREE.Scene(),camera:new THREE.PerspectiveCamera(),modelMeshes:new Map(),physicalModels:[0],collider:{trace(a,b){return{fraction:.1,end:[a[0],b[1]>a[1]?a[1]+220:a[1]-30,a[2]]};}}};
  const renderer=new WorldEffects(world,game,manifest);renderer.attachLights();
  for(const key of Object.keys(manifest.textures)){
    const batch={count:0,add(){this.count++;},addDisc(){this.count++;},flush(){},mesh:new THREE.Object3D()};
    (/beam|blast|fleuri/.test(key)?renderer.beamBatches:renderer.batches).set(key,batch);
    if(key.startsWith('fleuri.'))renderer.batches.set(key,{...batch});
  }
  return renderer;
}

test('all 13 authored teleport effects support their original waypoint layouts despite NumberOfWayPoints zero',()=>{
  let count=0,anchored=0;
  for(const id of ['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a']) {
    const game=new Gameplay(json(`data/levels/${id}/level.json`),{deferInit:true});
    for(const object of game.objects.filter(o=>o.entity.classname==='TeleporterFX')) {
      count++;assert.ok(['0','4'].includes(object.entity.NumberOfWayPoints));
      const waypoints=Array.from({length:4},(_,i)=>game.find(object.entity['TeleporterFXWP'+i])[0]?.position).filter(Boolean);
      assert.ok(waypoints.length===4||waypoints.length===0);if(waypoints.length)anchored++;
      const geometry=teleporterGeometry({origin:object.position,floorY:object.position[1]-30,ceilingY:object.position[1]+200,waypoints,age:3,showAge:1});
      assert.ok(geometry.sparks.length>0&&geometry.sparks.length<=250);
      assert.ok(geometry.sparks.every(s=>s.position.every(Number.isFinite)));assert.equal(geometry.active,true);
    }
  }
  assert.equal(count,13);assert.equal(anchored,11);
  for(const name of ['spark8','blast','fleuri']) {
    const entry=manifest.textures[`${name}.bmp|${name}_a.bmp`];assert.ok(entry);assert.ok(existsSync(new URL('../assets/effects/'+entry.file,import.meta.url)));
    assert.match(manifest.sources[name+'.bmp'],/^[a-f0-9]{64}$/);
  }
});

test('native terminal flash uses a billboard and its one-shot survives completion without duplicate player-transition cues',()=>{
  const events=[],game=new Gameplay(level,{deferInit:true,onEvent:e=>events.push(e)}),host=new ScriptHost(game,json('data/davi/lvl04a.json'));
  const renderer=effects(game),object=game.find('telepfx01')[0];game.command(object,'show');
  for(let i=0;i<69;i++)renderer.update(.1);
  const state=renderer.entries.get(object.id),startup=events.find(e=>e.sound==='Magiev18.wav');
  assert.equal(startup.volume,1);assert.equal(startup.playbackRate,.5);assert.equal(startup.nativeFrequency,true);
  assert.equal(state.teleporterGeometry.stage,'terminal');assert.equal(state.teleporterGeometry.rays.length,0);
  assert.equal(renderer.batches.get('fleuri.bmp|fleuri_a.bmp').count,1);
  const cues=()=>events.filter(e=>e.sound==='Magiev1.wav');assert.equal(cues().length,1);
  host.playerVisible=true;host.portalTransition={id:object.id,serial:object.teleportEffectSerial,fromVisible:true};host.portalPlayerVisibility(false);
  assert.equal(cues().length,1,'same native cue is not replayed by script visibility');
  const save=JSON.parse(JSON.stringify(game.snapshot())),restored=new Gameplay(level,{save,deferInit:true,onEvent:e=>events.push(e)}),loaded=effects(restored);
  loaded.update(0);loaded.update(.25);assert.equal(cues().length,1,'loading a terminal flash neither replays nor stops its cue');
  assert.equal(loaded.entries.get(object.id).teleporterGeometry.active,false);
  assert.ok(!events.some(e=>e.id===cues()[0].id&&e.stop),'the WAV can finish after the visual flash');
  loaded.dispose();renderer.dispose();
});

test('Show ignores a disabled effect and repeated calls while its native sequence is active',()=>{
  const object={enabled:false};assert.equal(showTeleporter(object),false);object.enabled=true;
  assert.equal(showTeleporter(object),true);assert.equal(object.teleportEffectSerial,1);
  object.teleportEffectAge=2;assert.equal(showTeleporter(object),false);assert.equal(object.teleportEffectAge,2);
  object.teleportEffectAge=TELEPORT_EFFECT_SECONDS;assert.equal(showTeleporter(object),true);assert.equal(object.teleportEffectSerial,2);
});

test('authored tower motion event starts portal Show, with original artwork, movement and finite sequence',()=>{
  const game=new Gameplay(level,{deferInit:true}),host=new ScriptHost(game,json('data/davi/lvl04a.json'),{motions:json('data/motions/lvl04a.json')});host.initialize();
  for(const player of host.players.values())player.stop();host.cutscene=false;
  const renderer=effects(game),object=game.find('telepfx01')[0],events=[];game.onEvent=e=>events.push(e);
  game.command(game.find('telepoort01')[0],'enable');for(let i=0;i<10;i++){host.update(.025);renderer.update(.025);}
  assert.equal(host.cutscene,true);assert.ok(object.teleportEffectAge>0);assert.equal(object.teleportEffectSerial,1);assert.equal(host.vm.lastError,null);
  const state=renderer.entries.get(object.id),before=state.teleporterGeometry.sparks.map(s=>s.position);
  assert.equal(state.teleporterGeometry.rays.length,5);renderer.update(.1);assert.notDeepEqual(state.teleporterGeometry.sparks.map(s=>s.position),before);
  assert.equal(events.filter(e=>e.id===`teleporter:${object.id}`&&!e.stop).length,1);
  for(let i=0;i<70;i++)renderer.update(.1);
  assert.equal(state.teleporterGeometry.active,false);assert.equal(state.teleporterGeometry.rays.length,0);assert.ok(state.teleporterGeometry.sparks.length>0);
});

test('portal save/load resumes particle pose and looping layer without replaying startup',()=>{
  const events=[],game=new Gameplay(level,{deferInit:true,onEvent:e=>events.push(e)}),renderer=effects(game),object=game.find('telepfx01')[0];
  game.command(object,'show');for(let i=0;i<25;i++)renderer.update(.1);
  const geometry=renderer.entries.get(object.id).teleporterGeometry,save=JSON.parse(JSON.stringify(game.snapshot()));
  const restored=new Gameplay(level,{save,deferInit:true,onEvent:e=>events.push(e)}),loaded=effects(restored),before=events.length;
  loaded.update(0);assert.deepEqual(loaded.entries.get(object.id).teleporterGeometry,geometry);assert.equal(events.length,before+1);assert.equal(events.at(-1).sound,'LV2snd7.wav');assert.equal(events.at(-1).loop,true);
  for(const entry of loaded.entries.values())if(entry.object.entity.classname==='TeleporterFX')restored.command(entry.object,'disable');
  loaded.update(.1);assert.equal(loaded.entries.get(object.id).active,false);
  assert.equal(loaded.batches.get('spark8.bmp|spark8_a.bmp').count,0);
});


test('native portal looping layer starts once and stops on completion, disable and disposal',()=>{
  const events=[],game=new Gameplay(level,{deferInit:true,onEvent:e=>events.push(e)}),renderer=effects(game),object=game.find('telepfx01')[0];
  game.command(object,'show');renderer.update(.1);renderer.update(.1);
  const loops=()=>events.filter(e=>e.id===`teleporter-loop:${object.id}`);
  assert.equal(loops().length,1);assert.equal(loops()[0].volume,1.9);assert.equal(loops()[0].playbackRate,.075);assert.equal(loops()[0].nativeFrequency,true);assert.equal(loops()[0].loop,true);
  for(let i=0;i<70;i++)renderer.update(.1);
  assert.equal(loops().length,2);assert.equal(loops().at(-1).stop,true);
  game.command(object,'show');renderer.update(.1);game.command(object,'disable');renderer.update(.1);
  assert.equal(loops().length,4);assert.equal(loops().at(-1).stop,true);
  game.command(object,'enable');for(let i=0;i<75;i++)renderer.update(.1);game.command(object,'show');renderer.update(.1);renderer.dispose();
  assert.equal(loops().length,8);assert.equal(loops().at(-1).stop,true);
});

test('a completed seven-second legacy save does not revive the portal loop or terminal flash',()=>{
  const events=[],game=new Gameplay(level,{deferInit:true,onEvent:e=>events.push(e)}),object=game.find('telepfx01')[0];
  object.teleportEffectAge=7;object.teleportEffectSerial=1;object.effectAge=3600;
  const renderer=effects(game);renderer.update(0);
  assert.equal(renderer.entries.get(object.id).teleporterGeometry.active,false);
  assert.equal(object.teleportEffectAge,TELEPORT_EFFECT_SECONDS);
  assert.ok(!events.some(e=>e.sound==='LV2snd7.wav'||e.sound==='Magiev1.wav'||e.sound==='Magiev18.wav'));
  renderer.dispose();
});

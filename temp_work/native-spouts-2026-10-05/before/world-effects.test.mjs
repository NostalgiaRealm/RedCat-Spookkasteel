import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import * as THREE from 'three';
import {Gameplay} from '../src/gameplay.js';
import {GameAudio} from '../src/audio.js';
import {WorldEffects,saveBeaconGeometry,spoutParticle,sampleParticle,coronaRadius,lightFunction} from '../src/world-effects.js';

const manifest=JSON.parse(fs.readFileSync(new URL('../assets/effects/manifest.json',import.meta.url)));
const levels=['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a'].map(id=>JSON.parse(fs.readFileSync(new URL(`../data/levels/${id}/level.json`,import.meta.url))));

test('every original authored emitter texture has a portable color/alpha pair',()=>{
  for(const level of levels)for(const e of level.entities.filter(e=>e.classname==='EffectSpoutEntity')){
    const entry=manifest.textures[`${e.BitmapFileName}|${e.BitmapAlphaFileName}`.toLowerCase()];
    assert.ok(entry,`${level.id}: ${e.BitmapFileName}`);
    assert.ok(fs.existsSync(new URL('../assets/effects/'+entry.file,import.meta.url)));
    assert.match(manifest.sources[e.BitmapFileName.toLowerCase()],/^[a-f0-9]{64}$/);
  }
});

test('beacon assembles six radial rays then extends seventh to ceiling',()=>{
  const origin=[10,20,30];
  assert.equal(saveBeaconGeometry(origin,.59).rays.length,0);
  const first=saveBeaconGeometry(origin,.8).rays[0];
  assert.equal(first.width,5);assert.ok(Math.abs(first.start[1]+3.5)<1e-6);
  assert.ok(Math.abs(first.end[1]-8)<1e-6);
  const six=saveBeaconGeometry(origin,4.01,500);assert.equal(six.rays.length,6);assert.ok(six.glowRadius>0);
  for(const ray of six.rays)assert.deepEqual(ray.end,[10,19.5,30]);
  const final=saveBeaconGeometry(origin,5,500);assert.equal(final.rays.length,7);assert.deepEqual(final.rays[6].end,[10,500,30]);assert.equal(final.glowRadius,25);
});

test('corona size uses authored distance/radius bounds',()=>{
  const e={RadiusMin:'2',RadiusMax:'12',RadiusDistanceMin:'100',RadiusDistanceMax:'500'};
  assert.equal(coronaRadius(e,0),2);assert.equal(coronaRadius(e,300),7);assert.equal(coronaRadius(e,5000),12);
});

test('dynamic light animation wraps and interpolates authored a-z functions',()=>{
  assert.equal(lightFunction('az',.25,1),0);assert.equal(lightFunction('az',.75,1),1);
  assert.equal(lightFunction('az',.25,1,true),.5);assert.equal(lightFunction('az',1.25,1,true),.5);
  assert.equal(lightFunction('az',2,0,true,1),1);
});

test('spout uses authored endpoint direction, speed, lifetime, growth and fade',()=>{
  const e={SpeedMin:'8',SpeedMax:'8',LifeSecondsMin:'2',LifeSecondsMax:'2',AlphaPercentageStart:'100',AlphaPercentageEnd:'0',SizePercentageStart:'25',SizePercentageEnd:'100',Scale:'2',Gravity:'2'};
  const p=spoutParticle(e,[10,20,30],[0,1,0],1);
  assert.deepEqual(p.velocity,[0,8,0]);const s=sampleParticle(e,p,1);
  assert.deepEqual(s.position,[10,27,30]);assert.equal(s.size,1.25);assert.equal(s.opacity,.5);assert.equal(sampleParticle(e,p,2).alive,false);
});

function fixture(entity){
  const object={id:'effect1',entity,position:[1,2,3],enabled:entity.IsInitiallyEnabled!=='0',visible:true};
  const world={scene:new THREE.Scene(),camera:new THREE.PerspectiveCamera(),modelMeshes:new Map(),physicalModels:[0],collider:{trace(a,b){return{fraction:1,end:b};}}};
  const game={objects:[object],find(){return[];}},effects=new WorldEffects(world,game,manifest);effects.attachLights();
  for(const key of Object.keys(manifest.textures)){
    const batch={count:0,add(){this.count++;},flush(){},mesh:new THREE.Object3D()};
    (/beam/.test(key)?effects.beamBatches:effects.batches).set(key,batch);
  }
  return {object,effects,state:effects.entries.get(object.id)};
}

test('Davi-Script enabled beacon retains activation clock and resets only when disabled',()=>{
  const {object,effects,state}=fixture({classname:'SavePoint',IsInitiallyEnabled:'0'});
  effects.update(.2);assert.equal(effects.beams.length,0);
  object.enabled=true;for(let i=0;i<25;i++)effects.update(.2);
  assert.equal(effects.beams.length,7);assert.equal(object.effectAge,state.age);
  effects.update(0);assert.equal(effects.beams.length,7);
  object.enabled=false;effects.update(.1);assert.equal(effects.beams.length,0);assert.equal(object.effectAge,0);
});

test('turning off a flame stops emission and allows existing particles to expire',()=>{
  const {object,effects,state}=fixture({classname:'EffectSpoutEntity',BitmapFileName:'flame03.bmp',BitmapAlphaFileName:'a_flame.bmp',DelaySecondsMin:'.1',DelaySecondsMax:'.1',LifeSecondsMin:'.5',LifeSecondsMax:'.5',SpeedMin:'2',SpeedMax:'2'});
  for(let i=0;i<10;i++)effects.update(.1);assert.ok(state.particles.length>0);
  object.enabled=false;for(let i=0;i<10;i++)effects.update(.1);assert.equal(state.particles.length,0);
  object.enabled=true;effects.update(.1);assert.ok(state.particles.length>0);
});

test('authored dynamic light follows a moving model and Davi-Script disable',()=>{
  const {object,effects}=fixture({classname:'DynamicLightEntity',ColorA:'255 0 0',ColorZ:'0 255 0',StartZValues:'1',ColorTime:'0',RadiusA:'100',RadiusZ:'300',RadiusFunction:'z',RadiusTime:'1'});
  object.modelIndex=7;effects.gameplay.scripts={modelTransforms:new Map([[7,{origin:[0,0,0],translation:[10,20,30],rotation:[0,0,0,1]}]])};
  effects.update(.1);assert.deepEqual(effects.lights,[{position:[11,22,33],color:[0,1,0],radius:300}]);
  object.enabled=false;effects.update(.1);assert.equal(effects.lights.length,0);assert.ok(effects.pointLights.every(l=>l.intensity===0));effects.dispose();
});

test('save beacon emits original staged sound and seventh-ray pitch without replaying after load',()=>{
  const {object,effects}=fixture({classname:'SavePoint'}),events=[];
  effects.gameplay.emit=(type,e)=>events.push({type,...e});
  for(let i=0;i<50;i++)effects.update(.1);
  const starts=events.filter(e=>!e.stop);assert.equal(starts.length,7);
  assert.ok(starts.every(e=>e.sound==='Magiev10.wav'&&e.volume===.75&&e.spatial));
  assert.deepEqual(starts.map(e=>e.playbackRate),[1,1,1,1,1,1,1.5]);assert.equal(events.filter(e=>e.stop).length,6);
  const level={...levels[0],entities:[{...object.entity,'%name%':object.id,Origin:'1 2 3'}]},game=new Gameplay(level,{deferInit:true});
  game.objects[0].effectAge=object.effectAge;
  const restored=new Gameplay(level,{save:JSON.parse(JSON.stringify(game.snapshot())),deferInit:true,onEvent:e=>events.push(e)});
  const loaded=new WorldEffects(effects.world,restored,manifest);loaded.attachLights();const count=events.length;
  loaded.update(.1);assert.equal(events.length,count);assert.equal(loaded.beams.length,7);
  const audio=new GameAudio({createAudio:()=>({play(){return Promise.resolve();},pause(){}})});
  const sound=audio.play(starts.at(-1));assert.equal(sound.element.playbackRate,1.5);assert.equal(sound.element.preservesPitch,false);
});

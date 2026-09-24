import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {nativeStereoGains,BspAudioEnvironment} from '../src/spatial-audio.js';
import {GameAudio,distanceGain,nativeGainToAmplitude} from '../src/audio.js';
import {BspCollider} from '../src/collision.js';

const close=(a,b)=>assert.ok(Math.abs(a-b)<1e-10,`${a} != ${b}`);
class Media {
  constructor(){this.volume=1;this.paused=true;this.currentTime=0;}
  play(){this.paused=false;return Promise.resolve();}pause(){this.paused=true;}
}
const mixer=()=>new GameAudio({createAudio:()=>new Media(),createContext:()=>null});

test('native azimuth and centibel stereo law preserve near speaker and do not pan above/below',()=>{
  for(const [source,left,right] of [ [[100,0,0],10**(-.5),1], [[-100,0,0],1,10**(-.5)], [[0,0,-100],1,1], [[0,100,0],1,1] ]) {
    const result=nativeStereoGains([0,0,0],source);close(result.left,left);close(result.right,right);
  }
  const turned=nativeStereoGains([0,0,0],[100,0,0],[0,1,0,0]);close(turned.left,1);close(turned.right,10**(-.5));
  const elevated=nativeStereoGains([0,0,0],[100,1000,0]);close(elevated.left,10**(-.5));
});

test('blocked BSP path changes effective distance by 1.5 without changing stereo source or dialogue',()=>{
  const audio=mixer();audio.environment={refreshPortals(){},query(){return {audible:true,blocked:true,distanceScale:1.5};}};
  const effect=audio.play({sound:'unknown.wav',position:[800,0,0],spatial:true});
  const voice=audio.play({channel:'voices',sound:'rcgen44.wav'}),music=audio.play({channel:'music',sound:'unknown.wav'});
  close(effect.distanceGain,distanceGain([0,0,0],[1200,0,0]));close(effect.pan,.1);
  close(effect.element.volume,.6*nativeGainToAmplitude(effect.distanceGain));
  close(voice.element.volume,.6);close(music.element.volume,.6);
  audio.pause();audio.update(.2,[0,0,0]);assert.ok([...audio.sounds].every(r=>r.element.paused));
  audio.resume();assert.ok([...audio.sounds].every(r=>!r.element.paused));
  audio.reset();assert.equal(audio.environment,null);assert.equal(audio.world,null);
});

test('PVS suppression, shortened ambience and player-centered fairy exception are retained',()=>{
  const audio=mixer();audio.setLevel('lvl03a');audio.setPlayerListener([0,0,0]);
  audio.environment={refreshPortals(){},query(_a,_b,{visibility}){return {audible:!visibility,blocked:false,distanceScale:1};}};
  const waterfall=audio.play({sound:'lv4snd1.wav',position:[100,0,0],spatial:true,loop:true});
  const fairy=audio.play({sound:'idlefee1.wav',position:[100,0,0],spatial:true,loop:true});
  audio.update(.1,[20000,20000,20000]);assert.equal(waterfall.element.volume,0);assert.ok(fairy.element.volume>0);
  audio.environment=null;audio.update(.2,[0,0,0]);assert.ok(waterfall.element.volume>0);
  audio.update(.2,[1200,0,0]);assert.equal(waterfall.element.volume,0,'30-meter cave boundary still silences ambience');
  assert.ok(fairy.element.volume>0,'fairy range still uses player position');
});

function simpleWorld() {
  const collision={models:[{root:0,min:[-200,-200,-200],max:[200,200,200]}],nodes:[[ -1,-2,0 ]],planes:[[1,0,0,0]]};
  const door={id:'door',kind:'door',modelIndex:1,open:false,visible:true,openFraction:0};
  const world={level:{collision},physicalModels:[0,1],collider:{trace(...args){world.traceArgs=args;return {fraction:world.blocked?.5:1};}},
    gameplay:{objects:[door],scripts:{players:new Map()}},modelMeshes:new Map([[1,[{material:{opacity:1}}]]]),blocked:false};
  const metadata={faceCount:0,leaves:[[0,0,0,0],[1,1,0,0]],clusters:[0,1],areas:[[1,0],[1,1]],areaPortals:[[1,1],[1,0]]};
  const environment=new BspAudioEnvironment(world,metadata,new Uint8Array([3,3]));environment.refreshPortals();
  return {world,environment,door};
}
test('audio areas track the real door pose and never trace actors',()=>{
  const {world,environment,door}=simpleWorld();
  assert.equal(environment.query([100,0,0],[-100,0,0]).audible,false);
  door.open=true;environment.refreshPortals();assert.equal(environment.query([100,0,0],[-100,0,0]).audible,true);
  door.open=false;world.gameplay.scripts.players.set('door',{time:.5,motion:{startTime:0}});environment.refreshPortals();
  world.blocked=true;assert.equal(environment.query([100,0,0],[-100,0,0]).distanceScale,1.5);
  assert.equal(world.traceArgs.at(-1),null,'actor occlusion is excluded');
  world.gameplay.scripts.players.get('door').time=0;environment.refreshPortals();assert.equal(environment.query([100,0,0],[-100,0,0]).audible,false);
  environment.visibility.metadata.clusters[0]=-1;assert.equal(environment.query([100,0,0],[-100,0,0]).audible,true,'native missing PVS row bypasses area filtering');
});

test('original castle PVS and BSP obstruct spatial emitters independently of renderer visibility',()=>{
  const read=path=>JSON.parse(readFileSync(new URL(path,import.meta.url)));
  const level=read('../data/levels/lvl01a/level.json'),metadata=read('../data/visibility/lvl01a.json');
  const world={level,physicalModels:[0],collider:new BspCollider(level.collision)};
  const env=new BspAudioEnvironment(world,metadata,new Uint8Array(readFileSync(new URL('../data/visibility/lvl01a.bin',import.meta.url))));env.refreshPortals();
  const listener=level.spawn.position.map((v,i)=>v+(i===1?50:0));
  const sources=level.entities.filter(e=>e.classname==='EffectSound'&&e.Origin).map(e=>e.Origin.split(/\s+/).map(Number));
  const results=sources.map(p=>env.query(listener,p));
  assert.ok(results.some(r=>!r.audible),'native distant sections are PVS-suppressed');
  assert.ok(results.some(r=>r.audible),'audible sounds are not all suppressed');
  assert.ok(sources.some(p=>env.query(listener,p,{visibility:false}).blocked),'solid castle walls obstruct traces');
});

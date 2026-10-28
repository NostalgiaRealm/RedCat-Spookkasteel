// Focused checks for the corrections recorded in docs/claude-native-parity-review.md.
import test from 'node:test';
import assert from 'node:assert/strict';
import {Gameplay} from '../source/gameplay.js';
import {ScriptHost} from '../source/script-host.js';
import {GameAudio} from '../source/audio.js';
import {GameplayAudio} from '../source/gameplay-audio.js';
import {enemyDeathOpacity} from '../source/enemy-death-effects.js';
import {flashRays,FLASH_SECONDS} from '../source/flash-effect-native.js';
import {hudCommands} from '../source/hud.js';
import {BspCollider,PlayerController} from '../source/collision.js';
import {PLAYER_HALF_WIDTH} from '../source/player-hull.js';
import {readFileSync} from 'node:fs';
import {thinkingEnemy} from './support/enemy-thinking.mjs';

const level=entities=>({id:'parity',spawn:{position:[0,0,0],orientation:0},entities});
const near=(actual,expected,epsilon=1e-6,message)=>assert.ok(Math.abs(actual-expected)<=epsilon,message||`${actual} != ${expected}`);
const floorTrace=floorY=>(a,b)=>({fraction:(a[1]-floorY)/(a[1]-b[1]),end:[b[0],floorY,b[2]],startSolid:false,normal:[0,1,0]});

test('Jester Easy/Hard sections inherit the native constructor shooter defaults; Normal keeps its INI values',()=>{
  const jester={classname:'StandingEnemy','%name%':'jester',Type:'4',Origin:'0 0 0'};
  for(const difficulty of ['Easy','Hard']) {
    const stats=new Gameplay(level([jester]),{difficulty}).objects[0].stats;
    assert.equal(stats.AverageShotsPerSalvo,3);assert.equal(stats.BulletDeviation,.05);assert.equal(stats.MinPlayerDistance,100);
  }
  const normal=new Gameplay(level([jester]),{difficulty:'Normal'}).objects[0].stats;
  assert.equal(normal.AverageShotsPerSalvo,2);assert.equal(normal.BulletDeviation,.01);
});

test('boss and zombie AfterDestroyCommand waits for the death clip; ordinary enemies run it at once',()=>{
  const game=new Gameplay(level([
    {classname:'MovingEnemy','%name%':'zombie',Type:'4',Origin:'0 0 0',AfterDestroyCommand:'zombiedone=1'},
    {classname:'MovingEnemy','%name%':'spider',Type:'1',Origin:'500 0 0',AfterDestroyCommand:'spiderdone=1'},
  ]));
  const [zombie,spider]=game.objects;zombie.animationDurations={death:1.6};
  game.destroy(spider);assert.equal(game.variables.get('spiderdone'),1);
  game.destroy(zombie);assert.equal(game.variables.has('zombiedone'),false);
  const save=JSON.parse(JSON.stringify(game.snapshot()));
  const restored=new Gameplay(game.level,{save});
  assert.equal(restored.objects[0].afterDestroyPending,true,'the pending command survives save/load');
  while(game.time<zombie.animationUntil-.05)game.update(.05,[10000,0,0]);
  assert.equal(game.variables.has('zombiedone'),false);
  game.update(.1,[10000,0,0]);assert.equal(game.variables.get('zombiedone'),1);
  game.update(.1,[10000,0,0]);assert.equal(game.dyingEnemies.size,0);
  for(let i=0;i<40;i++)restored.update(.05,[10000,0,0]);assert.equal(restored.variables.get('zombiedone'),1);
});

test('a dead ghost sinks to the traced floor while fading over five seconds from the moment of death',()=>{
  const game=new Gameplay(level([{classname:'MovingEnemy','%name%':'ghost',Type:'3',SubType:'1',Origin:'0 100 0',AfterDestroyCommand:'ghostdone=1'}]));
  const ghost=game.objects[0];ghost.animationDurations={death:1.5};ghost.position=[0,100,0];
  game.destroy(ghost);assert.equal(game.variables.get('ghostdone'),1,'drop-dead runs AfterDestroyCommand immediately');
  // 0x4298c0 traces down 100 units; the floor here is 90 below the corpse.
  const trace=floorTrace(10);
  for(let i=0;i<50;i++)game.update(.05,[10000,0,0],{traceEnemy:trace});
  near(ghost.position[1],55,1e-6);near(enemyDeathOpacity(ghost,game.time),.5,1e-6);
  const restored=new Gameplay(game.level,{save:JSON.parse(JSON.stringify(game.snapshot()))});
  assert.deepEqual(restored.objects[0].dropDead,{fromY:100,floorY:10});
  for(let i=0;i<60;i++)game.update(.05,[10000,0,0],{traceEnemy:trace});
  near(ghost.position[1],10);assert.equal(enemyDeathOpacity(ghost,game.time),0);assert.equal(game.dyingEnemies.size,0);
});

test('door Lock/Unlock click only on a state change; a locked UserFeedBack door plays ErrorSound without a toast',()=>{
  const events=[],game=new Gameplay(level([
    {classname:'DoorModel','%name%':'door',DoorType:'2',UserFeedBack:'1',Origin:'0 0 0'},
  ]),{onEvent:event=>events.push(event)}),door=game.objects[0];
  game.command(door,'lock');game.command(door,'lock');game.command(door,'unlock');
  assert.deepEqual(events.filter(e=>e.type==='doorLock').map(e=>e.locked),[true,false]);
  game.command(door,'lock');events.length=0;game.setDoor(door,true);
  assert.equal(door.open,false);assert.deepEqual(events.map(e=>e.type),['doorLocked']);
  const audio=new GameAudio({createAudio:src=>({src,volume:1,paused:true,play(){this.paused=false;return Promise.resolve();},pause(){this.paused=true;}})});
  audio.setLevel('lvl00a');const router=new GameplayAudio(audio);
  for(const [event,sound] of [[{type:'doorLock',id:door.id,locked:true},'lockdoorkey.wav'],[{type:'doorLock',id:door.id,locked:false},'unlockdoorkey.wav'],[{type:'doorLocked',id:door.id},'errorsound.wav']]) {
    audio.reset();router.handle(event,game);assert.deepEqual(audio.snapshot().map(r=>r.sound),[sound]);assert.equal(audio.snapshot()[0].spatial,true);
  }
});

test('pickups use the native hull/item box overlap without a sight line, keeping the old radius only without bounds',()=>{
  const make=()=>new Gameplay(level([{classname:'ItemCoin','%name%':'coin',Type:'1',Origin:'0 0 0'}]));
  const blocked={lineOfSight:()=>false};
  let game=make(),coin=game.objects[0];coin.pickupBounds={min:[-5,-5,-5],max:[5,5,5]};
  game.update(.01,[PLAYER_HALF_WIDTH+5+1.5,0,0],blocked);assert.equal(coin.collected,false,'20 units is inside the old radius but outside the boxes');
  game.update(.01,[PLAYER_HALF_WIDTH+5+.5,0,0],blocked);assert.equal(coin.collected,true,'overlap within 1 unit collects without sight');
  game=make();coin=game.objects[0];game.update(.01,[20,0,0]);assert.equal(coin.collected,true,'items without loaded bounds keep the radius rule');
});

test('the heart container awards no score but its 75 card; HUD hearts use truncated health',()=>{
  const game=new Gameplay(level([{classname:'ItemHartContainer','%name%':'hart',Origin:'0 0 0'}]));
  game.pickup(game.objects[0]);assert.equal(game.state.score,0);assert.equal(game.rewardEffects[0].score,75);
  const manifest=JSON.parse(readFileSync(new URL('../assets/hud/manifest.json',import.meta.url)));
  const frames=health=>hudCommands(manifest,{health,maxHealth:10,lives:3,potions:0,score:0,coins:0,mirror:0},15,null).filter(c=>c.name==='HealthContainer').map(c=>c.frame);
  assert.deepEqual(frames(1.9),frames(1));assert.deepEqual(frames(.9),frames(0));
});

test('FlashEffect is a one-second burst of five static short and five accelerating long rays',()=>{
  // Size envelope min(t, 1 - t): nothing at the start and end, largest halfway.
  assert.ok(flashRays(0).every(r=>r.size===0));
  const half=flashRays(.5),short=half.filter(r=>r.size<25),long=half.filter(r=>r.size===25);
  assert.equal(half.length,10);assert.equal(short.length,5);assert.equal(long.length,5);
  near(short[0].size,50*.65*.5);
  near(flashRays(.25)[1].size,12.5);near(flashRays(.75)[1].size,12.5);
  // Static short rays; long rays spin by 6 t^2.
  assert.deepEqual(short.map(r=>r.rotation),flashRays(.1).filter((_,i)=>i%2===0).map(r=>r.rotation));
  near(long[0].rotation-Math.PI/5,.5*12*.25);
  // Outer vertices (245,245,255) with alpha 180 - 160 t; the tip (10,5,255) at 180.
  assert.deepEqual(half[0].outer.slice(0,3),[245/255,245/255,1]);near(half[0].outer[3],100/255);
  near(flashRays(.999)[0].outer[3],(180-159.84)/255);assert.equal(flashRays(0)[0].outer[3],0,'first frame');
  assert.deepEqual(half[0].tip,[10/255,5/255,1,180/255]);
  assert.deepEqual(flashRays(FLASH_SECONDS),[]);
});

test('FlashEffect rays are camera-facing triangles from the native template with per-vertex colour',async()=>{
  const THREE=await import('three'),{FlashRays}=await import('../source/world-effects.js');
  const world={scene:new THREE.Scene(),track:value=>value},camera=new THREE.PerspectiveCamera();
  camera.position.set(0,0,100);camera.lookAt(0,0,0);camera.updateMatrixWorld();
  const mesh=new FlashRays(world,new THREE.Texture(),1);
  mesh.begin(camera);for(const ray of flashRays(.5))mesh.add([0,0,0],ray);mesh.flush();
  assert.equal(mesh.count,30);assert.equal(mesh.mesh.visible,true);
  // A long ray at rotation pi/5 + 1.5: tip at the origin, outer corners at size * (-.5,2.5) and (.5,1.5).
  const ray=flashRays(.5)[1],c=Math.cos(ray.rotation),s=Math.sin(ray.rotation),at=i=>[mesh.positions.getX(i),mesh.positions.getY(i),mesh.positions.getZ(i)];
  near(at(3)[0],(c*-.5-s*2.5)*25,1e-4);near(at(3)[1],(s*-.5+c*2.5)*25,1e-4);near(at(3)[2],0,1e-4);
  assert.deepEqual(at(5).map(v=>Math.abs(v)<1e-9?0:v),[0,0,0]);
  near(mesh.colors.getW(3),100/255);near(mesh.colors.getW(5),180/255);near(mesh.colors.getX(5),10/255);
  assert.deepEqual([mesh.uvs.getX(3),mesh.uvs.getY(3),mesh.uvs.getX(5),mesh.uvs.getY(5)],[1,0,0,1]);
  mesh.begin(camera);mesh.flush();assert.equal(mesh.mesh.visible,false,'nothing drawn without a running flash');
});

test('every Enable restarts a FlashEffect, which disables itself after one second and survives a save',()=>{
  const game=new Gameplay(level([{classname:'FlashEffect','%name%':'flash',Origin:'0 0 0'}])),host=new ScriptHost(game,{version:27}),flash=game.objects[0];
  const step=seconds=>{for(let t=0;t<seconds-1e-9;t+=.05){game.time+=.05;host.update(.05);}};
  game.command(flash,'enable');assert.equal(flash.flashStartedAt,game.time);
  step(.5);game.command(flash,'enable');const restarted=game.time;
  assert.equal(flash.flashStartedAt,restarted,'an Enable while enabled restarts it');
  const saved=JSON.parse(JSON.stringify(game.snapshot())),copy=new Gameplay(level([{classname:'FlashEffect','%name%':'flash',Origin:'0 0 0'}]));
  assert.equal(copy.restore(saved),true);assert.equal(copy.objects[0].flashStartedAt,restarted);
  step(.95);assert.equal(flash.enabled,true);
  step(.1);assert.equal(flash.enabled,false,'disabled at the end of the burst');assert.equal(flash.flashStartedAt,undefined);
});

test('StopCutScene fade and fixed/route cameras hold control; route mode 4 with no time expires at once',()=>{
  const emitted=[],host=Object.create(ScriptHost.prototype);
  Object.assign(host,{time:10,cutscene:true,camera:null,subtitle:null,pendingCutsceneStop:null,portalTransition:null,
    cutsceneFadeUntil:0,cutsceneFadeInUntil:0,skippingCutscene:false,game:{emit:(type,event)=>emitted.push({type,...event}),find:()=>[]}});
  host.finishCutscene(1);
  assert.equal(host.cutscene,false);assert.equal(host.controlLocked,true);assert.deepEqual(emitted.at(-1),{type:'cutscene',active:false,fade:1});
  host.time=11;assert.equal(host.controlLocked,false);
  for(const [mode,locked] of [[1,false],[2,true],[3,true],[4,true]]){host.camera={mode};assert.equal(host.controlLocked,locked,`mode ${mode}`);}
  host.camera=null;
  const camera={id:'cam',entity:{CameraMode:'4',CamTimeInMode:'0'},position:[0,0,0]};
  host.activateCamera(camera);assert.equal(host.camera.instant,true);
  const active=host.camera;host.activateCamera(camera);assert.equal(host.camera,active,'reactivating the active view is a no-op');
  host.skippingCutscene=true;host.cutscene=true;host.finishCutscene(1);assert.equal(host.controlLocked,false,'a skipped cutscene does not hold control');
});

test('CamActivateOnEnable re-activates on every Enable within MaxTriggerTimes and never runs CommandOnEnter',()=>{
  const game=new Gameplay(level([{classname:'CameraTrigger','%name%':'cam',CamActivateOnEnable:'1',MaxTriggerTimes:'2',CommandOnEnter:'entered=1',CameraMode:'2',Origin:'0 0 0'}]));
  const activated=[];game.scripts={objectEnabled(){},activateCamera:object=>activated.push(object.id),dispatch(){}};
  const cam=game.objects[0];for(let i=0;i<3;i++)game.command(cam,'enable');
  assert.equal(activated.length,2);assert.equal(game.variables.has('entered'),false);
});

test('MultiplyVolume scales only the playing track; a new track starts at full gain',()=>{
  const emitted=[],host=Object.create(ScriptHost.prototype);
  Object.assign(host,{musicState:null,game:{emit:(type,event)=>emitted.push(event)}});
  const music={id:'m',volume:1,entity:{MusicAmbient:'a.wav',MusicAction:'b.wav'}};
  host.selectMusic(music,'ambient');music.volume=.5;
  host.selectMusic(music,'ambient');assert.equal(emitted.at(-1).volume,.5,'reselecting the same track keeps its gain');
  host.selectMusic(music,'action');assert.equal(emitted.at(-1).volume,1);assert.equal(music.volume,1);
});

test('the shipped cutscene volumedown/volumeup pairs end at full gain even when the track changes in between',()=>{
  // Every shipped MultiplyVolume call is a cutscene pair on "muziek": x0.5 at
  // the dialogue, x2 afterwards (research-d9-multiplyvolume.txt). 0x57f1a0
  // clamps the product to [0, 1], as the port does.
  const emitted=[],host=Object.create(ScriptHost.prototype);
  const music={id:'m',kind:'effect',volume:1,entity:{classname:'EffectMusic',DaviName:'muziek',MusicAmbient:'a.wav',MusicSpecial:'boss.wav'}};
  Object.assign(host,{musicState:null,game:{objects:[music],find:()=>[music],emit:(type,event)=>emitted.push({type,...event})}});
  host.selectMusic(music,'ambient');
  host.callMethod('muziek','MultiplyVolume',[.5]);assert.equal(music.volume,.5);
  host.selectMusic(music,'special');assert.equal(emitted.at(-1).volume,1,'the boss track starts at full gain');
  host.callMethod('muziek','MultiplyVolume',[2]);assert.equal(music.volume,1,'clamped at full gain');
  host.callMethod('muziek','MultiplyVolume',[.5]);assert.equal(music.volume,.5,'the next dialogue still halves it');
  host.callMethod('muziek','MultiplyVolume',[2]);assert.equal(music.volume,1);
});

test('lethal damage restores the normal camera',()=>{
  const game=new Gameplay(level([]));game.scripts={camera:{mode:2},cutscene:false,dispatch(){}};
  game.damage(100);assert.equal(game.scripts.camera,null);
});

test('a saved position just inside a wall under the wider native hull is recovered by movement recovery',()=>{
  const data={planes:[],nodes:[],leaves:[],leafSides:[],models:[]};
  for(const [min,max] of [[[-500,-30,-500],[500,0,500]],[[20,0,-200],[40,100,200]]]){
    const firstSide=data.leafSides.length;
    for(let axis=0;axis<3;axis++)for(const sign of [1,-1]){const normal=[0,0,0];normal[axis]=sign;data.leafSides.push([data.planes.length,0]);data.planes.push([...normal,sign===1?max[axis]:-min[axis]]);}
    data.leaves.push({contents:1,firstSide,numSides:6,min,max});data.models.push({root:-data.leaves.length,min,max});
  }
  // 8.95 was flush with the wall for the port's former 11-unit half-width.
  const p=new PlayerController(new BspCollider(data),[8.95,.05,0],[0,1]);p.grounded=true;
  for(let i=0;i<40;i++)p.update(.05,{forward:0,right:0},0);
  assert.ok(p.position[0]<=20-PLAYER_HALF_WIDTH+1e-6,`left the wall: ${p.position[0]}`);
});

test('a real sloped brush is floor above normal.y 0.7 and too steep below it',()=>{
  // A convex ramp brush rising toward +X: its top face has normal (-sin a, cos a, 0)
  // through the origin, closed by axial bevels, as in a compiled Genesis3D leaf.
  const ramp=normalY=>{
    const a=Math.acos(normalY),top=200*Math.tan(a);
    const data={planes:[],nodes:[],leaves:[],leafSides:[],models:[]};
    const min=[-200,-200*Math.tan(a)-30,-200],max=[200,top,200];
    for(const plane of [[-Math.sin(a),Math.cos(a),0,0],[0,-1,0,-min[1]],[1,0,0,max[0]],[-1,0,0,-min[0]],[0,0,1,max[2]],[0,0,-1,-min[2]],[0,1,0,max[1]]]){
      data.leafSides.push([data.planes.length,0]);data.planes.push(plane);
    }
    data.leaves.push({contents:1,firstSide:0,numSides:7,min,max});data.models.push({root:-1,min,max});
    return new BspCollider(data);
  };
  const results={};
  for(const normalY of [.75,.65]) {
    // Drop RedCat onto the ramp, then walk him straight up it.
    const p=new PlayerController(ramp(normalY),[0,60,0],[0]);
    let landed=false;
    for(let i=0;i<40;i++){p.update(.05,{forward:0,right:0},0);landed||=p.grounded;}
    const before=[...p.position];
    let walking=0;
    for(let i=0;i<10;i++){p.update(.05,{forward:0,right:1},0);if(p.grounded)walking++;}
    results[normalY]={landed,walking,rise:p.position[1]-before[1]};
  }
  assert.equal(results[.75].landed,true,'a 0.75 slope is floor');
  assert.equal(results[.75].walking,10,'RedCat stays grounded walking up it');
  assert.ok(results[.75].rise>0,`and climbs it: ${results[.75].rise}`);
  assert.equal(results[.65].landed,false,'a 0.65 slope is too steep to stand on');
  assert.equal(results[.65].walking,0);
});

test('D10: enemies test their sight every 500 ms and keep the cached result in between',()=>{
  const game=new Gameplay(level([{classname:'MovingEnemy','%name%':'zombie',Type:'4',Origin:'0 0 0'}])),zombie=game.objects[0];
  zombie.stats={...zombie.stats,SenseRange:1000,VisualRange:1000};
  const checks=new Set();let clear=true;
  const lineOfSight=()=>clear;
  for(let i=0;i<60;i++){game.update(1/60,[0,0,200],{lineOfSight});checks.add(zombie.sight.lastCheck);}
  assert.equal(zombie.alerted,true,'seen on the first test');
  // The first test comes with the first thinking update (the 14th, 0x422fb0),
  // the next 0.5 s later, within the first second.
  const times=[...checks].filter(Number.isFinite);assert.equal(times.length,2,`tests at ${times}`);
  assert.ok(Math.abs(times[0]-14/60)<1e-9,`first test at ${times[0]}`);assert.ok(times[1]-times[0]>=.5-1e-9);
  // Blocked sight is only noticed at the next test; until then the cached sighting refreshes last-seen.
  clear=false;const blocked=game.time;
  for(let i=0;i<6;i++)game.update(1/60,[0,0,200],{lineOfSight});
  assert.ok(zombie.lastSeenAt>blocked,'cached sighting still refreshes the last-seen time');
});

test('unaware chatter is requested every other thinking update (period 4-5 ms)',()=>{
  let frame=0;const idle=[],game=new Gameplay(level([{classname:'MovingEnemy','%name%':'zombie',Type:'4',Origin:'0 0 0'}]),
    {onEvent:e=>{if(e.type==='enemyAction'&&e.action==='idle')idle.push(frame);}});
  for(frame=1;frame<=60;frame++)game.update(1/60,[0,0,-900],{lineOfSight:()=>false});
  // Chatter belongs to the state logic, which first runs on update 14 (0x422fb0):
  // armed there, requested on update 15, then on every other update.
  assert.equal(idle.length,23,'armed on one update, requested on the next');
  assert.equal(idle[0],15,'the first request comes on the second thinking update');
  const period=game.objects[0].idleTimer.period;
  assert.ok(period===.004||period===.005,`period ${period}`);
});

test('think gate: no state logic or sight test on updates 1-13, then thinking from the 14th (0x422fb0)',()=>{
  const events=[],game=new Gameplay(level([{classname:'MovingEnemy','%name%':'zombie',Type:'4',Origin:'0 0 0'}]),{onEvent:e=>events.push(e)}),zombie=game.objects[0];
  zombie.stats={...zombie.stats,SenseRange:1000,VisualRange:1000};
  // RedCat in plain view, 200 units in front.
  for(let update=1;update<=13;update++) {
    game.update(1/60,[0,0,200],{lineOfSight:()=>true});
    assert.equal(zombie.sight.lastCheck,-Infinity,`update ${update}: no sight test`);
    assert.equal(zombie.think.inRadius,false);assert.equal(zombie.alerted,false);
  }
  assert.equal(events.filter(e=>e.type==='enemyAction').length,0,'no state logic: not even unaware chatter');
  game.update(1/60,[0,0,200],{lineOfSight:()=>true});
  assert.equal(zombie.think.inRadius,true);assert.equal(zombie.sight.lastCheck,game.time,'the first sight test runs on update 14');
  assert.equal(zombie.sight.seen,true);
});

test('think gate: an enemy beyond 1600 units never thinks, and starts at the next 14-update recheck once RedCat is in range',()=>{
  const game=new Gameplay(level([{classname:'MovingEnemy','%name%':'zombie',Type:'4',Origin:'0 0 0'}])),zombie=game.objects[0];
  for(let update=1;update<=30;update++)game.update(1/60,[0,0,2000],{lineOfSight:()=>false});
  assert.equal(zombie.think.inRadius,false);assert.equal(zombie.sight.lastCheck,-Infinity);assert.equal(zombie.idleTimer,undefined);
  // RedCat comes within range after the recheck on update 28; the next one is update 42.
  for(let update=31;update<=41;update++){game.update(1/60,[0,0,1000],{lineOfSight:()=>false});assert.equal(zombie.think.inRadius,false,`update ${update}`);}
  game.update(1/60,[0,0,1000],{lineOfSight:()=>false});
  assert.equal(zombie.think.inRadius,true);assert.equal(zombie.sight.lastCheck,game.time);assert.ok(zombie.idleTimer,'state logic runs (chatter armed)');
});

test('ordering: the state logic sees the previous sight test, so an alert follows on the next thinking update',()=>{
  const game=new Gameplay(level([{classname:'MovingEnemy','%name%':'zombie',Type:'4',Origin:'0 0 0'}])),zombie=game.objects[0];
  zombie.stats={...zombie.stats,SenseRange:1000,VisualRange:1000};
  thinkingEnemy(game,zombie,[0,0,200],()=>false);assert.equal(zombie.sight.seen,false);
  zombie.sight.lastCheck=-Infinity;
  game.update(1/60,[0,0,200],{lineOfSight:()=>true});
  assert.equal(zombie.sight.seen,true,'the sight test of this update sees RedCat');
  assert.equal(zombie.alerted,false,'its state logic ran before the test');
  game.update(1/60,[0,0,200],{lineOfSight:()=>true});
  assert.equal(zombie.alerted,true,'the next thinking update alerts');
});

test('save/restore keeps the think counter and flag; an older save starts a fresh counter',()=>{
  const entities=[{classname:'MovingEnemy','%name%':'zombie',Type:'4',Origin:'0 0 0'}];
  const game=new Gameplay(level(entities)),zombie=game.objects[0];
  for(let update=1;update<=20;update++)game.update(1/60,[0,0,1000],{lineOfSight:()=>false});
  assert.deepEqual(zombie.think,{count:6,inRadius:true});
  const save=JSON.parse(JSON.stringify(game.snapshot()));
  const restored=new Gameplay(level(entities),{save});assert.deepEqual(restored.objects[0].think,{count:6,inRadius:true});
  delete save.objects.find(o=>o.id===zombie.id).think;
  const older=new Gameplay(level(entities),{save});assert.deepEqual(older.objects[0].think,{count:0,inRadius:false});
});

test('D7: Say queues literal messages; KillPlayer is forced; RespawnPlayer keeps lives; EnableWeapons and LooseAllWeapons do nothing',()=>{
  const events=[],game=new Gameplay(level([]),{onEvent:e=>events.push(e)}),host=new ScriptHost(game,{version:27});
  game.setCheckpoint([100,0,50],1.5);game.state.skill=7;
  host.callNative('EnableWeapons',[0]);host.callNative('LooseAllWeapons',[]);
  assert.equal(host.weaponsEnabled,true);assert.equal(game.state.skill,7);
  // Say: literal text; the same queued text or a repeat of the last within 3 s is dropped.
  host.callNative('Say',['start cut scene']);host.callNative('Say',['Start Cut Scene']);
  assert.deepEqual(events.filter(e=>e.type==='scriptMessages').map(e=>e.lines),[['start cut scene']]);
  assert.equal(events.some(e=>e.type==='dialogue'),false,'not a dialogue lookup');
  host.update(5.01);assert.deepEqual(events.at(-1).lines,[],'a line lasts 5 s');
  for(let i=0;i<10;i++)host.callNative('Say',[`line ${i}`]);
  assert.equal(events.at(-1).lines.length,8,'at most eight lines are drawn');
  // KillPlayer passes the respawn protection; RespawnPlayer restores health without using a life.
  game.respawnProtection=5;host.callNative('KillPlayer',[]);
  assert.equal(game.state.health,0);assert.equal(game.playerReaction.phase,'death');
  const lives=game.state.lives;host.callNative('RespawnPlayer',['ignored']);
  assert.equal(game.state.health,game.state.maxHealth);assert.equal(game.state.lives,lives);
  assert.equal(game.respawnProtection,5);
  assert.deepEqual(events.filter(e=>e.type==='teleport').at(-1).position,[100,0,50]);
  assert.equal(events.some(e=>e.type==='respawn'),false,'no respawn event or World command');
});

test('D4: Easy guardians use the loader defaults, because the original drops the malformed [Easy block',()=>{
  const guardian=difficulty=>new Gameplay(level([{classname:'MovingEnemy','%name%':'g',Type:'10',Origin:'0 0 0'}]),{difficulty}).objects[0];
  const easy=guardian('Easy'),normal=guardian('Normal');
  assert.equal(easy.enemyType,'guardian');
  assert.deepEqual({health:easy.health,speed:easy.stats.Speed,attack:easy.stats.AttackRange,sense:easy.stats.SenseRange,score:easy.stats.PlayerScore,min:easy.stats.MinPlayerDistance,damage:easy.stats.Damage},
    {health:5,speed:50,attack:100,sense:50,score:0,min:0,damage:1});
  assert.deepEqual({health:normal.health,speed:normal.stats.Speed,damage:normal.stats.Damage},{health:7,speed:70,damage:2},'Normal keeps its INI block');
});

test('the enemy health bar clamps its maximum to 20 and its value to that maximum',()=>{
  const manifest=JSON.parse(readFileSync(new URL('../assets/hud/manifest.json',import.meta.url)));
  const state={health:10,maxHealth:10,lives:3,potions:0,score:0,coins:0,mirror:0};
  const bar=enemy=>hudCommands(manifest,state,15,{kind:'enemy',enemyType:'zombie',...enemy}).filter(c=>c.name==='EnemyHealth').map(c=>c.frame);
  assert.equal(bar({health:30,maxHealth:30}).length,10,'at most ten hearts');
  assert.deepEqual(bar({health:30,maxHealth:30}),bar({health:20,maxHealth:20}));
  assert.deepEqual(bar({health:9,maxHealth:5}),bar({health:5,maxHealth:5}),'a value above the maximum shows full');
});

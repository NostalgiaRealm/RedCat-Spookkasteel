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
  const start=flashRays(0);assert.equal(start.length,10);
  assert.deepEqual([...new Set(start.map(r=>r.size))].sort((a,b)=>a-b),[32.5,50]);
  const short=flashRays(.5).filter(r=>r.size<50),long=flashRays(.5).filter(r=>r.size===50);
  assert.deepEqual(short.map(r=>r.rotation),start.filter(r=>r.size<50).map(r=>r.rotation));
  near(long[0].rotation-start.find(r=>r.size===50).rotation,.5*12*.25);
  near(long[0].opacity,.5);assert.deepEqual(flashRays(FLASH_SECONDS),[]);
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

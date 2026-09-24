import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {BspCollider,PlayerController,PLAYER_JUMP} from '../src/collision.js';
import {playerMotion} from '../src/player-animation.js';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';
import {CastleWorld} from '../src/world.js';
import {TouchControls} from '../src/touch-controls.js';
import {PLAYER_SHOOT_MOTION,PLAYER_SUPER_CHARGE} from '../src/player-projectiles.js';
const json=p=>JSON.parse(readFileSync(new URL('../'+p,import.meta.url)));
const idle={forward:0,right:0,jump:false,attack:false};
const clear=(start,end)=>({fraction:1,end});
function tick(game,seconds,attack=false) {
  for(let t=0;t<seconds-1e-9;t+=.01)game.update(Math.min(.01,seconds-t),[0,0,0],{attack,traceProjectile:clear});
}
function gameWithSkill(skill=7) {
  const events=[],game=new Gameplay({id:'lvl00a',spawn:{position:[0,0,0]},entities:[]},{onEvent:e=>events.push(e)});
  game.state.skill=skill;return {game,events};
}
function player(skill=8) {
  const level=json('data/levels/lvl02a/level.json'),p=new PlayerController(new BspCollider(level.collision),[0,309,-900]);
  p.skill=skill;for(let i=0;i<30;i++)p.update(1/60,idle,0);return p;
}
function jumpRun(p,{delay=.3,hold=false,move=false,seconds=1.4}={}) {
  let apex=p.position[1],boosts=0;
  for(let i=0;i<Math.round(seconds*100);i++) {
    p.update(.01,{...idle,right:Number(move),jump:hold||i===0||i===Math.round(delay*100)},0);
    apex=Math.max(apex,p.position[1]);boosts+=Number(p.didJump==='super');
  }
  return {apex,boosts};
}

test('native fairy potion gates award SuperSkippie and BIG BENG only at 30 potions',()=>{
  for(const [id,trigger,bit,yes,no] of [
    ['lvl02a','csmc05_tr',8,'csmc06','csmc05'],
    ['lvl03a','trigger_cuts04',4,'cutscene04a','cutscene04b']]) {
    for(const potions of [29,30]) {
      const events=[],game=new Gameplay(json(`data/levels/${id}/level.json`),{deferInit:true,onEvent:e=>events.push(e)});
      const host=new ScriptHost(game,json(`data/davi/${id}.json`),{motions:json(`data/motions/${id}.json`)});
      host.initialize();game.state.potions=potions;
      assert.equal(game.state.skill,3,'real fresh chapter defaults do not pre-grant either fairy reward');
      game.trigger(game.find(trigger)[0]);
      assert.equal(host.vm.lastError,null);assert.equal(game.state.skill&bit,potions===30?bit:0);
      assert.equal(game.find(potions===30?yes:no)[0].enabled,true);
      assert.equal(events.some(e=>e.type==='skill'&&(1<<e.skill)===bit),potions===30);
      assert.equal(game.state.potions,potions,'learning does not spend collected potions');
      // The cave authoring correction must not change the native general API.
      if(id==='lvl03a'){host.callNative('RcEnableSkill',[4]);assert.equal(game.state.skill&16,16);}
    }
  }
});

test('fresh caves and a real graveyard carry keep BIG BENG locked; restored and earned ownership survive',()=>{
  const graveyard=new Gameplay(json('data/levels/lvl02a/level.json'),{deferInit:true});
  const host=new ScriptHost(graveyard,json('data/davi/lvl02a.json'),{motions:json('data/motions/lvl02a.json')});
  host.initialize();graveyard.state.potions=30;graveyard.trigger(graveyard.find('csmc05_tr')[0]);
  assert.equal(graveyard.state.skill,11,'the actual graveyard reward grants SuperSkippie, not BIG BENG');
  const caveLevel=json('data/levels/lvl03a/level.json'),caves=new Gameplay(caveLevel,{deferInit:true});
  assert.equal(caves.state.skill,3);
  // Apply the normal chapter carry used by startLevel, including its OR with
  // the fresh chapter defaults and potion reset.
  const progress={...graveyard.state},skill=caves.state.skill;
  Object.assign(caves.state,progress,{potions:0,skill:skill|progress.skill});
  assert.equal(caves.state.skill,11);assert.equal(caves.state.skill&4,0);assert.equal(caves.state.potions,0);
  caves.state.skill|=4;
  const saved=JSON.parse(JSON.stringify(caves.snapshot())),restored=new Gameplay(caveLevel,{save:saved});
  assert.equal(restored.state.skill,15,'loading learned ownership overrides the fresh default');
  const replay=new Gameplay(caveLevel,{deferInit:true});replay.state.skill|=4;
  assert.equal(replay.state.skill,7,'campaign ownership can re-enable BIG BENG on replay');
  const legacy=structuredClone(saved);legacy.state.skill=7;
  assert.equal(new Gameplay(caveLevel,{save:legacy}).state.skill,7,'ambiguous old checkpoint masks are not revoked');
});

test('SuperSkippie requires its skill and a released/repressed jump within native tap limits',()=>{
  assert.deepEqual(PLAYER_JUMP,{gravity:800,height:41.6,minTapTime:.12,maxTapTime:.55,superSpeedFactor:.89});
  for(const [skill,delay,boost] of [[0,.3,false],[8,.11,false],[8,.12,true],[8,.55,true],[8,.56,false]]) {
    const p=player(skill),result=jumpRun(p,{delay});assert.equal(result.boosts,Number(boost),`${skill}/${delay}`);
    if(!boost)assert.ok(Math.abs(result.apex-349.65)<.12);
  }
  const held=player(),result=jumpRun(held,{hold:true,seconds:2});
  assert.equal(result.boosts,0);assert.equal(held.jumpSerial,1,'held input neither boosts nor auto-bounces on landing');
  assert.equal(held.grounded,true);
});

test('original graveyard cave staircase needs three 72-unit ascents and SuperSkippie climbs all three',()=>{
  const disabled=player(0),start=disabled.position[1];jumpRun(disabled,{move:true});
  assert.ok(Math.abs(disabled.position[1]-start)<.06);assert.ok(disabled.position[0]<60,'ordinary jump stops at the first box');
  const p=player();
  const drive=(count,jumping=false)=>{for(let i=0;i<count;i++)p.update(1/60,{...idle,right:1,jump:jumping&&(i===0||i===18)},0);};
  for(const [walk,height] of [[0,380.05],[24,452.05],[52,524.05]]) {
    drive(walk);drive(80,true);assert.equal(p.grounded,true);assert.ok(Math.abs(p.position[1]-height)<1e-5);
  }
  assert.ok(p.position[0]>600);assert.ok(Math.abs(p.position[1]-start-216)<.06);
});

test('jump2 restarts at the airborne boost and retains the native 1.3x animation through descent',()=>{
  const p=player(),state={};p.update(.01,{...idle,jump:true},0);
  assert.equal(playerMotion(state,p,idle,.01).name,'jump1');
  for(let i=0;i<29;i++){p.update(.01,idle,0);playerMotion(state,p,idle,.01);}
  p.update(.01,{...idle,jump:true},0);let motion=playerMotion(state,p,idle,.01);
  assert.equal(motion.name,'jump2');assert.equal(motion.speed,1.3);assert.ok(motion.time<.02);
  for(let i=0;i<30;i++){p.update(.01,idle,0);motion=playerMotion(state,p,idle,.01);}
  assert.ok(p.velocityY<0);assert.equal(motion.name,'jump2');
  for(let i=0;i<80;i++)p.update(.01,idle,0);
  p.update(.01,{...idle,jump:true},0);assert.equal(playerMotion(state,p,idle,.01).name,'jump1');
});

test('BIG BENG holds its native pose, releases once, scales damage, and recharges for the next shot',()=>{
  for(const [seconds,damage] of [[.1,1],[.75,2],[1.5,4],[2.5,4]]) {
    const {game,events}=gameWithSkill();tick(game,seconds,true);
    assert.equal(game.projectiles.length,0);assert.ok(game.playerCharge);
    const animator={clip:{duration:PLAYER_SHOOT_MOTION.duration},play(name){this.name=name;},update(){}};
    CastleWorld.prototype.syncPlayer.call({gameplay:game,settings:{camera:'third'},yaw:0,player:{position:[0,0,0],grounded:true},
      redcat:{position:{fromArray(){}},rotation:{},userData:{animator}}},.01,idle);
    assert.equal(animator.name,'shoot1');assert.equal(animator.timeScale,0);
    assert.equal(animator.time,PLAYER_SHOOT_MOTION.duration*PLAYER_SUPER_CHARGE.holdFraction);
    tick(game,.01,false);assert.equal(game.playerCharge,null);assert.equal(game.projectiles.length,0);
    tick(game,.19);assert.equal(game.projectiles.length,0);
    tick(game,.02);assert.equal(game.projectiles.length,1);
    assert.equal(game.projectiles[0].kind,'superShot');assert.ok(Math.abs(game.projectiles[0].damage-damage)<1e-8);
    assert.equal(events.filter(e=>e.type==='attack').length,1);
    tick(game,.3,true);assert.equal(game.playerCharge,null,'cooldown blocks a new charge');
    tick(game,1,true);assert.ok(game.playerCharge,'continued hold starts charging once recharged');
    tick(game,1.5,true);tick(game,.3,false);
    assert.equal(events.filter(e=>e.type==='attack').length,2);
  }
});

test('ordinary held fire stays available before BIG BENG and stale charges cancel on death/weapon removal',()=>{
  const {game,events}=gameWithSkill(3);tick(game,2.7,true);
  assert.equal(events.filter(e=>e.type==='attack').length,3);assert.equal(game.playerCharge,null);
  game.state.skill=7;tick(game,1.6,true);assert.ok(game.playerCharge);
  game.damage(10);assert.equal(game.playerCharge,null);game.respawn();tick(game,.5);
  assert.equal(events.filter(e=>e.type==='attack').length,3);
  tick(game,.4,true);game.scripts={weaponsEnabled:false};tick(game,.01,true);assert.equal(game.playerCharge,null);
});

test('charging pauses across cutscenes and survives save/load without losing its release',()=>{
  const {game}=gameWithSkill();tick(game,.75,true);const age=game.playerCharge.age;
  game.scripts={cutscene:true,weaponsEnabled:true};tick(game,2,true);assert.equal(game.playerCharge.age,age);game.scripts=null;
  const restored=new Gameplay(game.level,{save:JSON.parse(JSON.stringify(game.snapshot()))});
  assert.deepEqual(restored.playerCharge,game.playerCharge);tick(restored,.25);
  assert.equal(restored.projectiles.length,1);assert.ok(Math.abs(restored.projectiles[0].damage-2)<1e-8);
});

test('touch press/release supplies the same SuperSkippie and charging edges as held keyboard input',()=>{
  // Exercise the real touch input methods without constructing browser artwork.
  const controls=Object.create(TouchControls.prototype);
  Object.assign(controls,{input:{...idle},pointers:new Map(),canUse:()=>true,onGesture(){},renderPressed(){}});
  const control={setPointerCapture(){},releasePointerCapture(){}},event={pointerId:1,button:0,preventDefault(){}};
  const p=player();controls.press(event,'jump',control);p.update(.01,controls.readInput(),0);
  controls.release(event);for(let i=0;i<29;i++)p.update(.01,controls.readInput(),0);
  controls.press(event,'jump',control);p.update(.01,controls.readInput(),0);assert.equal(p.didJump,'super');controls.release(event);
  const {game}=gameWithSkill();controls.press(event,'attack',control);tick(game,1.6,controls.readInput().attack);
  assert.equal(game.projectiles.length,0);controls.release(event);tick(game,.25,controls.readInput().attack);
  assert.equal(game.projectiles.length,1);assert.equal(game.projectiles[0].damage,4);
});

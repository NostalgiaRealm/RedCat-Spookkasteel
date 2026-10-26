import test from 'node:test';
import assert from 'node:assert/strict';
import {Gameplay} from '../source/gameplay.js';

const player=[0,0,0];
const families=[[1,'spider'],[2,'bat'],[3,'ghost'],[4,'zombie'],[10,'guardian']];
function fixture(type,save=null,level=null) {
  level??={id:'touch-hit',entities:[{classname:'MovingEnemy','%name%':'enemy',Type:String(type),SubType:'1',Origin:'21 0 0'}]};
  const events=[],game=new Gameplay(level,{save,onEvent:event=>events.push(event)}),enemy=game.objects[0];
  game.playerPosition=[...player];enemy.stats={...enemy.stats,Speed:0,Damage:1,SenseRange:1000};
  enemy.animationDurations={hurt:3};enemy.collisionMins=[-10,0,-10];enemy.collisionMaxs=[10,40,10];
  if(!save){game.time=10;enemy.health=100;game.state.health=10;if(enemy.ambush)enemy.ambush.phase='awake';}
  return {game,enemy,events,level,type};
}
function tick(f,dt) {
  f.game.time+=dt;f.game.hitCooldown=Math.max(0,f.game.hitCooldown-dt);
  f.game.updateEnemy(f.enemy,dt,player,()=>true);
}
function hit(f) {f.enemy.aiRandomState=1;f.game.hurtEnemy(f.enemy,1);}
const contacts=f=>f.events.filter(event=>event.type==='enemyAttack'&&event.contact);

for(const [type,name] of families)test(`${name} contact cooldown survives hurt and expires while still hurt`,()=>{
  const f=fixture(type),position=[...f.enemy.position];
  // Fixed hull faces meet exactly: stationary contact requires no chase step.
  tick(f,.01);assert.equal(f.game.state.health,9);assert.equal(contacts(f).length,1);
  assert.equal(f.enemy.attackTimer,1);hit(f);
  const until=f.enemy.animationUntil,serial=f.enemy.animationSerial;
  assert.equal(f.enemy.animationState,'hurt');assert.equal(f.enemy.attackTimer,1);
  tick(f,.4);hit(f);tick(f,.59);
  assert.equal(f.game.state.health,9,'contact must not repeat before its actor cooldown expires');
  assert.equal(contacts(f).length,1);assert.equal(f.enemy.animationUntil,until);assert.equal(f.enemy.animationSerial,serial);
  tick(f,.02);
  assert.equal(f.game.state.health,8,'hurt does not disable the independent contact callback');
  assert.equal(contacts(f).length,2);assert.equal(f.enemy.animationState,'hurt');
  assert.equal(f.enemy.animationUntil,until);assert.equal(f.enemy.animationSerial,serial);
  assert.deepEqual(f.enemy.position,position);assert.equal(f.game.projectiles.length,0);
});

test('reloading a hurt touching enemy preserves the remaining independent contact cooldown',()=>{
  const f=fixture(10);tick(f,.01);hit(f);tick(f,.4);
  const restored=fixture(f.type,JSON.parse(JSON.stringify(f.game.snapshot())),f.level);
  assert.equal(restored.enemy.animationState,'hurt');assert.equal(restored.enemy.attackTimer,f.enemy.attackTimer);
  tick(restored,.59);assert.equal(restored.game.state.health,9);assert.equal(contacts(restored).length,0);
  tick(restored,.02);assert.equal(restored.game.state.health,8);assert.equal(contacts(restored).length,1);
  assert.equal(restored.enemy.animationState,'hurt');assert.equal(restored.enemy.animationUntil,f.enemy.animationUntil);
});

import test from 'node:test';
import assert from 'node:assert/strict';
import {Gameplay} from '../src/gameplay.js';

const near=[0,0,100],far=[0,0,1000];
function create(type=1){
 const g=new Gameplay({id:'lvl00a',spawn:{position:near,orientation:0},entities:[{classname:'StandingEnemy','%name%':'enemy',Type:String(type),Origin:'0 0 0',StartOrientation:'6'}]});
 const o=g.objects[0],shots=[];o.yaw=0;o.animationDurations={attack:1,hurt:1};o.salvoSize=2;
 o.stats={...o.stats,DrawMotionPart:.5,WaitTimeBetweenShots:10,WaitTimeAfterSalvo:.5};
 g.onEvent=e=>{if(e.type==='enemyProjectile')shots.push(g.time);};
 return {g,o,shots};
}
function tick(g,o,seconds,player=near,visible=true){for(let t=0;t<seconds-1e-8;t+=.01){g.time+=.01;g.updateEnemy(o,.01,player,()=>visible,null);}}

test('a committed plant shot releases once even if RedCat moves out of range and behind cover',()=>{
 const {g,o,shots}=create();tick(g,o,.01);const release=o.pendingAttack.at;
 tick(g,o,release-g.time-.02,far,false);assert.equal(shots.length,0);
 tick(g,o,.03,far,false);assert.equal(shots.length,1);assert.equal(o.pendingAttack,null);
 assert.ok(shots[0]>=release&&shots[0]<release+.011);
});

test('standing-shooter salvo finishes without new visibility gates or invented between-shot waits',()=>{
 const {g,o,shots}=create();tick(g,o,.01);const firstDuration=o.animationUntil-g.time;
 tick(g,o,4,far,false);
 assert.equal(shots.length,2,'only the committed salvo completes; no new salvo starts without perception');
 assert.ok(shots[1]-shots[0]<2.6,'plant repeats shoot1 immediately instead of adding WaitTimeBetweenShots');
 assert.ok(shots[1]-shots[0]>.6);assert.ok(firstDuration>0);assert.equal(o.salvoRemaining,0);
});

test('gargoyle finishes a committed salvo after alert memory expires',()=>{
 const {g,o,shots}=create(3);o.animationDurations.attack=4;o.stats.TimeToRememberVisual=.1;
 tick(g,o,.01);assert.ok(o.pendingAttack);
 tick(g,o,12,far,false);
 assert.equal(shots.length,2);assert.equal(o.salvoRemaining,0);assert.equal(o.ambush.phase,'dormant');
});

test('a selected hit reaction cancels an unreleased shot and death cannot emit it later',()=>{
 for(const lethal of [false,true]){
  const {g,o,shots}=create();tick(g,o,.01);const release=o.pendingAttack.at;
  o.aiRandomState=1;g.hurtEnemy(o,lethal?o.health:1);assert.equal(o.pendingAttack,null);
  if(!lethal)tick(g,o,release-g.time+.02,far,false);
  else g.update(1,far,{lineOfSight:()=>false});
  assert.equal(shots.length,0);
 }
});

test('knight melee still requires RedCat inside the actual strike range',()=>{
 const {g,o}=create(2);
 for(let i=0;i<400&&!o.pendingAttack;i++)tick(g,o,.01,[0,0,60]);
 assert.ok(o.pendingAttack,'knight strikes after its activation animation');
 const end=o.pendingAttack.until;tick(g,o,end-g.time+.02,far,false);
 assert.equal(g.state.health,g.state.maxHealth);assert.equal(o.pendingAttack,null);
});

test('saved and frozen committed release retains its remaining deadline',()=>{
 const {g,o}=create();g.update(.01,near);const before={...o.pendingAttack};
 g.scripts={enemiesFrozen:true};g.update(.1,far,{lineOfSight:()=>false});
 assert.ok(Math.abs(o.pendingAttack.at-before.at-.1)<1e-8);g.scripts=null;
 const restored=new Gameplay(g.level,{save:JSON.parse(JSON.stringify(g.snapshot()))}),r=restored.objects[0];
 const shots=[];restored.onEvent=e=>{if(e.type==='enemyProjectile')shots.push(restored.time);};
 tick(restored,r,r.pendingAttack.at-restored.time+.02,far,false);
 assert.equal(shots.length,1);assert.equal(r.salvoRemaining,1);
});

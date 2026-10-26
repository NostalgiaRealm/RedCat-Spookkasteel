import test from 'node:test';
import assert from 'node:assert/strict';
import {Gameplay} from '../source/gameplay.js';

function fixture(type=4,standing=false){
  const events=[],level={id:'hits',entities:[{classname:standing?'StandingEnemy':'MovingEnemy','%name%':'enemy',Type:String(type),Origin:'0 0 0',StartOrientation:'6'}]};
  const game=new Gameplay(level,{onEvent:event=>events.push(event)}),enemy=game.objects[0];
  game.time=10;game.playerPosition=[0,0,100];enemy.health=100;enemy.animationDurations={hurt:1,attack:2,start:1};
  return {game,enemy,events,level};
}
function attacking(enemy){
  enemy.animationState='attack';enemy.animationUntil=12;enemy.pendingAttack={at:11};
  enemy.salvoRemaining=2;enemy.attackTimer=5;enemy.relocateAfterSalvo=true;
}
const hurtSounds=events=>events.filter(e=>e.type==='enemyAction'&&e.action==='hurt').length;

test('ordinary hits choose reaction or sound-only continuation without changing damage or awareness',()=>{
  for(const [type,standing] of [[1,false],[2,false],[3,false],[4,false],[5,false],[6,false],[10,false],[1,true],[2,true],[3,true]]){
    for(const [seed,react] of [[1,true],[16,false]]){
      const {game,enemy,events}=fixture(type,standing);if(enemy.ambush)enemy.ambush.phase='awake';attacking(enemy);enemy.aiRandomState=seed;
      const pending=enemy.pendingAttack;game.hurtEnemy(enemy,1);
      assert.equal(enemy.health,99);assert.equal(enemy.alerted,true);assert.equal(enemy.lastSeenAt,10);
      assert.deepEqual(enemy.lastSeenPosition,game.playerPosition);assert.equal(hurtSounds(events),1);
      if(react){
        assert.equal(enemy.animationState,'hurt');assert.equal(enemy.pendingAttack,null);
        assert.equal(enemy.salvoRemaining,0);
        assert.equal(enemy.attackTimer,!standing&&[1,2,3,4,10].includes(type)?5:0,'touch contact cooldown belongs to the actor, not the interrupted attack child');
        assert.equal(enemy.relocateAfterSalvo,false);
      }else{
        assert.equal(enemy.animationState,'attack');assert.equal(enemy.pendingAttack,pending);
        assert.equal(enemy.salvoRemaining,2);assert.equal(enemy.attackTimer,5);assert.equal(enemy.relocateAfterSalvo,true);
      }
    }
  }
});

test('selected hits during hurt keep its original pose deadline and entry sound',()=>{
  const {game,enemy,events}=fixture();enemy.aiRandomState=1;game.hurtEnemy(enemy,1);
  const deadline=enemy.animationUntil,serial=enemy.animationSerial;
  for(let i=0;i<4;i++){game.time+=.1;enemy.aiRandomState=1;game.hurtEnemy(enemy,.25);}
  assert.equal(enemy.health,98);assert.equal(enemy.animationUntil,deadline);assert.equal(enemy.animationSerial,serial);
  assert.equal(hurtSounds(events),1);
  enemy.aiRandomState=16;game.hurtEnemy(enemy,1);
  assert.equal(hurtSounds(events),2,'the sound-only branch is independent of current hit state');
  assert.equal(enemy.animationSerial,serial);
});

test('stone inactive immunity alerts on the first hit, and fresh alert wake follows its hit reaction',()=>{
  for(const type of [2,3]){
    const {game,enemy,events}=fixture(type,true);assert.equal(enemy.ambush.phase,'dormant');enemy.aiRandomState=1;
    game.hurtEnemy(enemy,1000);
    assert.equal(enemy.health,100);assert.equal(enemy.alerted,true);assert.equal(enemy.animationState,'hurt');
    assert.equal(enemy.ambush.phase,'awake');assert.equal(enemy.ambush.resumeAlert,true);assert.equal(hurtSounds(events),1);
    enemy.aiRandomState=1;game.hurtEnemy(enemy,2);assert.equal(enemy.health,98,'exiting the inactive child removes immunity');
    game.time=enemy.animationUntil+.01;game.updateEnemy(enemy,.01,[0,0,5000],()=>false);
    assert.equal(enemy.ambush.resumeAlert,undefined);
    if(type===2){assert.equal(enemy.ambush.phase,'waking');assert.equal(enemy.animationState,'start');assert.equal(enemy.animationRate,1.7);}
    else assert.equal(enemy.ambush.phase,'awake');
    enemy.aiRandomState=16;game.hurtEnemy(enemy,1);assert.equal(enemy.health,97,'wake and active alert remain vulnerable');
  }
});

test('a sound-only hit wakes stone enemies through ordinary alert without cancelling another state',()=>{
  const {game,enemy,events}=fixture(2,true);enemy.aiRandomState=16;game.hurtEnemy(enemy,1);
  assert.equal(enemy.health,100);assert.equal(enemy.animationState,'dormant');assert.equal(hurtSounds(events),1);
  game.updateEnemy(enemy,.01,[0,0,5000],()=>false);
  assert.equal(enemy.ambush.phase,'waking');assert.equal(enemy.ambush.resumeAlert,undefined);
});

test('reaction choice and pending stone alert survive save/load and script freezes',()=>{
  const {game,enemy,level}=fixture(2,true);enemy.aiRandomState=1;game.hurtEnemy(enemy,1);
  const saved=JSON.parse(JSON.stringify(game.snapshot())),copy=new Gameplay(level,{save:saved}),restored=copy.objects[0];
  assert.deepEqual(restored.ambush,enemy.ambush);assert.equal(restored.aiRandomState,enemy.aiRandomState);
  const until=restored.animationUntil;copy.scripts={enemiesFrozen:true};copy.update(.05,[0,0,100]);
  assert.equal(restored.animationUntil,until+.05);assert.equal(restored.ambush.resumeAlert,true);
  copy.scripts=null;restored.animationDurations=enemy.animationDurations;
  copy.time=restored.animationUntil+.01;copy.updateEnemy(restored,.01,[0,0,100],()=>true);
  assert.equal(restored.ambush.phase,'waking');
});

test('lethal ordinary damage cancels all pending attacks and awards only one defeat',()=>{
  const {game,enemy,events}=fixture();attacking(enemy);enemy.aiRandomState=16;
  game.hurtEnemy(enemy,100);game.hurtEnemy(enemy,100);
  assert.equal(enemy.health,0);assert.equal(enemy.pendingAttack,null);
  assert.equal(events.filter(e=>e.type==='enemyDefeated').length,1);
});

test('Bone Brutus only accepts damage on its native one-in-three hit branch',()=>{
  for(const [seed,accept] of [[1,false],[2,false],[3,true]]){
    const {game,enemy,events}=fixture(8);attacking(enemy);enemy.aiRandomState=seed;
    game.hurtEnemy(enemy,1);
    assert.equal(enemy.health,accept?99:100);assert.equal(enemy.animationState,accept?'hurt':'attack');
    assert.equal(hurtSounds(events),1);assert.equal(enemy.alerted,true);
  }
});

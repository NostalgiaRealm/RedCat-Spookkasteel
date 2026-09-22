import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';

const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
function boot(save=null){
  const events=[],game=new Gameplay(json('data/levels/lvl01a/level.json'),{deferInit:true,save,onEvent:e=>events.push(e)});
  const host=new ScriptHost(game,json('data/davi/lvl01a.json'));
  const knight=game.objects.find(o=>o.enemyType==='knight'),music=game.objects.find(o=>o.entity.classname==='EffectMusic');
  if(!save){for(const o of game.objects)o.enabled=o===knight||o===music;host.selectMusic(music,'ambient');}
  else host.restore(save.scripts);
  const position=knight.position.map((v,i)=>v+(i===2?300:0));game.playerPosition=[...position];
  return {game,host,knight,music,events,position};
}

test('accepted ranged attack starts castle Action before impact without enlarging knight perception',()=>{
  const {game,host,knight,position,events}=boot();
  assert.equal(knight.stats.VisualRange,100);assert.equal(knight.stats.SenseRange,100);
  game.update(.05,position,{attackTarget:()=>knight});assert.equal(host.musicState.mode,'ambient');
  game.update(.05,position,{attack:true,attackTarget:()=>knight});
  assert.equal(host.musicState.mode,'action');assert.equal(host.musicState.sound,'Endbosses.wav');
  assert.ok(game.pendingPlayerAttack);assert.equal(game.projectiles.length,0);assert.equal(knight.health,5);
  assert.equal(!!knight.alerted,false,'starting music does not give the knight early perception');
  assert.equal(knight.lastAttackedAt,game.time);
  assert.equal(game.attack(position,[0,0,-1],knight),false,'cooldown rejects another attack');
  host.update(.05);assert.equal(events.filter(e=>e.type==='scriptMusic'&&e.mode==='action').length,1);
});

test('empty shots, props, inactive targets and rejected attacks do not trigger enemy music',()=>{
  for(const kind of ['empty','button','actor','disabled','dead','weapons-disabled','cutscene']){
    const {game,host,knight,position}=boot();let target=knight;
    if(kind==='empty')target=null;
    if(['button','actor'].includes(kind))target={kind,enabled:true,visible:true,health:1};
    if(kind==='disabled')knight.enabled=false;
    if(kind==='dead')knight.health=0;
    if(kind==='weapons-disabled')host.weaponsEnabled=false;
    if(kind==='cutscene')host.cutscene=true;
    game.attack(position,[0,0,-1],target);host.update(.05);
    assert.equal(host.musicState.mode,'ambient',kind);assert.equal(knight.lastAttackedAt,undefined,kind);
  }
});

test('a free-aim hit gives a distant knight native hit memory and music expires after disengagement',()=>{
  const {game,host,knight,position}=boot();
  game.update(.05,position);assert.equal(!!knight.alerted,false);
  game.playerProjectileHit(knight,{damage:1,type:1});
  assert.equal(knight.health,4);assert.equal(knight.alerted,true);
  assert.equal(knight.lastSeenAt,game.time);assert.deepEqual(knight.lastSeenPosition,position);
  assert.equal(host.musicState.mode,'action');
  game.time+=knight.stats.TimeToRememberVisual-.1;
  game.updateEnemy(knight,0,position,()=>false);host.update(0);assert.equal(host.musicState.mode,'action');
  game.time+=.2;game.updateEnemy(knight,0,position,()=>false);host.update(0);
  assert.equal(knight.alerted,false);assert.equal(host.musicState.mode,'ambient');
});

test('an aimed attack that misses has a finite music duration',()=>{
  const {game,host,knight,position}=boot();game.attack(position,[0,0,-1],knight);
  game.time=game.pendingPlayerAttack.at;game.releasePlayerAttack();
  game.updateProjectiles(.05,position,(a,b)=>({fraction:.5,end:b,modelIndex:0}));
  assert.equal(game.projectiles.length,0);assert.equal(knight.health,5);assert.equal(!!knight.alerted,false);
  game.time=knight.lastAttackedAt+knight.stats.TimeToRememberVisual+.01;host.update(0);
  assert.equal(host.musicState.mode,'ambient');
});

test('a non-damaging knight hit still refreshes native awareness and remembered player position',()=>{
  const {game,host,knight,position}=boot();game.time=7;
  game.playerProjectileHit(knight,{damage:0,type:1});
  assert.equal(knight.health,5);assert.equal(knight.alerted,true);
  assert.equal(knight.lastSeenAt,7);assert.deepEqual(knight.lastSeenPosition,position);
  assert.equal(host.musicState.mode,'action');
});

test('defeat clears attack music only after the final enemy, with boss music retaining priority',()=>{
  const {game,host,knight}=boot(),other=game.objects.find(o=>o.enemyType==='knight'&&o!==knight);
  other.enabled=true;game.notePlayerAttack(knight);game.notePlayerAttack(other);
  game.destroy(knight);assert.equal(host.musicState.mode,'action');
  game.destroy(other);assert.equal(host.musicState.mode,'ambient');
  const boss=game.objects.find(o=>o.enemyType==='maxj');boss.enabled=true;host.objectEnabled(boss,true,true);
  assert.equal(host.musicState.mode,'special');
  const third=game.objects.find(o=>o.enemyType==='knight'&&o.health>0);third.enabled=true;game.notePlayerAttack(third);
  assert.equal(host.musicState.mode,'special');
});

test('ranged attack music survives saving and frozen gameplay then expires normally',()=>{
  const app=boot();app.game.notePlayerAttack(app.knight);app.game.time+=1;
  const {game,host,knight,position}=boot(app.game.snapshot());
  assert.equal(host.musicState.mode,'action');assert.equal(knight.lastAttackedAt,0);
  host.enemiesFrozen=true;
  for(let i=0;i<50;i++){host.update(.1);game.update(.1,position);}
  assert.equal(host.musicState.mode,'action');assert.ok(Math.abs(game.time-knight.lastAttackedAt-1)<1e-8);
  host.enemiesFrozen=false;game.time+=knight.stats.TimeToRememberVisual;host.update(0);
  assert.equal(host.musicState.mode,'ambient');
});

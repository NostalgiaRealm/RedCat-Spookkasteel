import test from 'node:test';
import assert from 'node:assert/strict';
import {GameAudio} from '../src/audio.js';
import {GameplayAudio} from '../src/gameplay-audio.js';
import {Gameplay} from '../src/gameplay.js';

class Media {
  constructor(src){this.src=src;this.paused=true;this.currentTime=0;}
  play(){this.paused=false;return Promise.resolve();}
  pause(){this.paused=true;}
  end(){this.paused=true;this.onended?.();}
}
const position=[0,0,0],forward=[0,0,-1];
const clear=(start,end)=>({fraction:1,end});
const wall=(start,end)=>({fraction:.5,end:start.map((v,i)=>(v+end[i])/2)});
function setup(skill=1,save=null){
  const audio=new GameAudio({createAudio:src=>new Media(src)}),router=new GameplayAudio(audio),events=[];
  const game=new Gameplay({id:'lvl00a',spawn:{position},entities:[]},{save,onEvent:event=>{events.push(event);router.handle(event,game);}});
  if(!save)game.state.skill=skill;
  return {audio,game,events};
}
const names=audio=>audio.snapshot().map(record=>record.sound);
function release(game){game.time=game.pendingPlayerAttack.at;game.releasePlayerAttack();}

for(const [skill,kind,fire,impact] of [[1,'shot','rcshoot1.wav','rcshoot4.wav'],[3,'powerShot','rcshoot2.wav','rcshoot5.wav'],[7,'superShot',null,'rcshoot6.wav']]){
  test(`${kind}: Gameplay emits the native firing and impact recordings only at their actual events`,()=>{
    const {audio,game,events}=setup(skill);
    if(skill&4){
      game.updatePlayerAttackInput(.01,true,position,forward);
      assert.deepEqual(names(audio),['rcshoot3.wav']);
      const charge=audio.keyed.get('player:charge');assert.equal(charge.loop,true);
      game.updatePlayerAttackInput(.75,true,position,forward);
      assert.equal(audio.sounds.size,1);
      game.updatePlayerAttackInput(.01,false,position,forward);
      assert.equal(charge.element.paused,true);assert.equal(audio.keyed.has('player:charge'),false);
    }else assert.equal(game.attack(position,forward),true);
    assert.deepEqual(names(audio),[],'Starting the shooting animation is silent until pellet release');
    game.time=game.pendingPlayerAttack.at-.001;game.releasePlayerAttack();
    assert.equal(game.projectiles.length,0);assert.deepEqual(names(audio),[]);
    release(game);assert.equal(game.projectiles[0].kind,kind);
    assert.deepEqual(names(audio),fire?[fire]:[]);
    game.updateProjectiles(.1,position,clear);
    assert.deepEqual(names(audio),fire?[fire]:[],'Free flight must not make an impact sound');
    game.updateProjectiles(.1,position,wall);
    assert.deepEqual(names(audio),[...(fire?[fire]:[]),impact]);
    const hit=events.find(event=>event.type==='playerProjectileImpact');
    assert.equal(hit.kind,kind);assert.deepEqual(audio.snapshot().at(-1).position,hit.position);
    assert.equal(game.projectiles.length,0);
  });

  test(`${kind}: expiry is silent and a saved in-flight pellet retains its impact sound after skills change`,()=>{
    const expired=setup(skill);expired.game.attack(position,forward);release(expired.game);
    expired.audio.reset();expired.game.updateProjectiles(100,position,clear);
    assert.equal(expired.game.projectiles.length,0);assert.deepEqual(names(expired.audio),[]);
    const original=setup(skill);original.game.attack(position,forward);release(original.game);
    const restored=setup(skill,JSON.parse(JSON.stringify(original.game.snapshot())));
    restored.game.state.skill=skill===1?7:1;
    restored.game.updateProjectiles(.1,position,wall);
    assert.deepEqual(names(restored.audio),[impact]);
  });
}

test('successive player shots and impacts keep independent complete one-shot tails',()=>{
  const {audio,game}=setup();
  for(let i=0;i<2;i++){
    game.attackCooldown=0;assert.equal(game.attack(position,forward),true);release(game);
    game.updateProjectiles(.1,position,wall);
  }
  assert.deepEqual(names(audio),['rcshoot1.wav','rcshoot4.wav','rcshoot1.wav','rcshoot4.wav']);
  const records=[...audio.sounds];assert.ok(records.every(record=>!record.loop&&!record.element.paused));
  audio.update(60);assert.equal(audio.sounds.size,4,'One-shots last until the recording ends, not a guessed timeout');
  records[0].element.end();assert.equal(audio.sounds.size,3);
  assert.ok(records.slice(1).every(record=>!record.element.paused));
  for(const record of records.slice(1))record.element.end();assert.equal(audio.sounds.size,0);
});

test('cancelled BIG BENG charge stops immediately without a firing or impact cue',()=>{
  const {audio,game,events}=setup(7);
  game.updatePlayerAttackInput(.1,true,position,forward);
  const charge=audio.keyed.get('player:charge');assert.ok(charge);
  game.scripts={cutscene:true,weaponsEnabled:true};
  game.updatePlayerAttackInput(.1,true,position,forward);
  assert.equal(charge.element.paused,true);assert.equal(game.playerCharge,null);
  assert.equal(game.pendingPlayerAttack,null);assert.deepEqual(names(audio),[]);
  assert.equal(events.some(event=>event.type==='attack'||event.type==='playerProjectileImpact'),false);
});

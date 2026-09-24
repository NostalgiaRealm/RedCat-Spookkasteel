import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {advanceProjectileAnimation,projectileAnimationFrame,PROJECTILE_FRAME_COUNTS} from '../src/projectile-animation.js';

const clear=(start,end)=>({fraction:1,end});
const make=()=>new Gameplay({id:'lvl00a',spawn:{position:[0,0,0]},entities:[]});
const projectile=(kind='bone',owner='enemy')=>({id:kind,kind,owner,position:[1000,100,0],velocity:[10,0,0],radius:2,life:20,damage:1,gravity:0,age:0});

test('all original bitmap sequences use the recovered 50 ms interval and native frame counts',()=>{
  const manifest=JSON.parse(readFileSync(new URL('../assets/projectiles/manifest.json',import.meta.url)));
  for(const [kind,count] of Object.entries(PROJECTILE_FRAME_COUNTS)){
    assert.equal(manifest[kind].frames.length,count,kind);
    assert.equal(manifest[kind].frameIntervalMs,50,kind);
    const p=projectile(kind);assert.equal(projectileAnimationFrame(p),0);
    advanceProjectileAnimation(p,.02); // starts deadline at 70 ms
    for(let frame=1;frame<=count;frame++){
      assert.equal(advanceProjectileAnimation(p,.05),(frame-1)%count,'deadline equality holds the existing frame');
      assert.equal(advanceProjectileAnimation(p,.001),frame%count,'strict expiry advances once');
      assert.equal(p.spriteDeadlineMs,null,'the expired timer is not immediately restarted');
      if(frame<count)assert.equal(advanceProjectileAnimation(p,.02),frame%count,'the next update only rearms');
    }
  }
});

test('long updates do not skip frames or bypass the separate native rearm update',()=>{
  const p=projectile();advanceProjectileAnimation(p,.02);
  assert.equal(advanceProjectileAnimation(p,4),1);
  assert.equal(advanceProjectileAnimation(p,4),1);
  assert.equal(advanceProjectileAnimation(p,.051),2);
  const saved=structuredClone(p);advanceProjectileAnimation(p,0);advanceProjectileAnimation(p,-1);advanceProjectileAnimation(p,NaN);
  assert.deepEqual(p,saved,'paused or invalid delta does not advance the animation');
});

test('gameplay advances enemy and player animations and freezes only enemy ammunition',()=>{
  const game=make();game.projectiles=[projectile(),projectile('shot','player')];
  game.updateProjectiles(.01,[0,0,0],clear);game.updateProjectiles(.051,[0,0,0],clear);
  assert.deepEqual(game.projectiles.map(p=>projectileAnimationFrame(p)),[1,1]);
  const frozen=structuredClone(game.projectiles[0]);game.scripts={enemiesFrozen:true};
  game.updateProjectiles(.01,[0,0,0],clear);game.updateProjectiles(.051,[0,0,0],clear);
  assert.deepEqual(game.projectiles[0],frozen);assert.equal(projectileAnimationFrame(game.projectiles[1]),2);
  game.scripts.cutscene=true;const duringDialogue=structuredClone(game.projectiles);
  game.update(.1,[0,0,0],{traceProjectile:clear});
  assert.deepEqual(game.projectiles,duringDialogue,'a cutscene freezes both player and enemy projectile timers');
});

test('save and restore preserve an active deadline and its exact next frame',()=>{
  const game=make();game.projectiles=[projectile('jesterBall')];game.updateProjectiles(.012,[0,0,0],clear);
  const saved=JSON.parse(JSON.stringify(game.snapshot())),restored=new Gameplay(game.level,{save:saved});
  assert.deepEqual(restored.projectiles,game.projectiles);
  for(const dt of [.05,.001,.2,.05,.001]){
    game.updateProjectiles(dt,[0,0,0],clear);restored.updateProjectiles(dt,[0,0,0],clear);
    assert.deepEqual(restored.projectiles,game.projectiles);
  }
  assert.equal(saved.projectiles[0].spriteFrame,0,'taking a snapshot does not retain mutable timer state');
});

test('older saves start at frame zero and never acquire an age-derived or random phase',()=>{
  const game=make();game.projectiles=[{...projectile('superShot','player'),age:12.347}];
  const restored=new Gameplay(game.level,{save:JSON.parse(JSON.stringify(game.snapshot()))});
  assert.equal(projectileAnimationFrame(restored.projectiles[0]),0);
  restored.updateProjectiles(.01,[0,0,0],clear);
  assert.equal(restored.projectiles[0].spriteDeadlineMs,60);assert.equal(projectileAnimationFrame(restored.projectiles[0]),0);
  advanceProjectileAnimation(restored.projectiles[0],.051);assert.equal(projectileAnimationFrame(restored.projectiles[0]),1);
});

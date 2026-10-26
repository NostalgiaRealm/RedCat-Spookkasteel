import test from 'node:test';
import assert from 'node:assert/strict';
import {createParticleClock,advanceParticleClock,validParticleClock,particleMilliseconds} from '../src/particle-clock-native.js';
import {NativeFairyEffect,FAIRY_STEP} from '../src/fairy-effects.js';
import {NativeTeleporterEffect,TELEPORT_STEP} from '../src/teleporter-effects.js';

test('CParticle arms lifetime/delay independently, fades on the following update, and keeps integer alpha',()=>{
  const clock=createParticleClock(4,1,3);
  assert.equal(clock.opacity,254/255);assert.ok(validParticleClock(clock));
  assert.equal(advanceParticleClock(clock,100),true);
  assert.equal(clock.lifeEnd,4100);assert.equal(clock.delayEnd,1100);
  advanceParticleClock(clock,1100);assert.equal(clock.fading,false);assert.equal(clock.opacity,254/255);
  advanceParticleClock(clock,1101);assert.equal(clock.fading,true);assert.equal(clock.fadeEnd,null);assert.equal(clock.opacity,254/255);
  advanceParticleClock(clock,1117);assert.equal(clock.fadeEnd,4117);assert.equal(clock.opacity,1);
  advanceParticleClock(clock,2617);assert.equal(clock.opacity,127/255);
  assert.equal(advanceParticleClock(clock,4100),true,'exact deadline still belongs to the live particle');
  const before=structuredClone(clock);assert.equal(advanceParticleClock(clock,4101),false);
  assert.deepEqual(clock,before,'expiration does not write alpha or run another timer');
});

test('CParticle restart retains current alpha until its new fade, without inheriting old deadlines',()=>{
  const clock=createParticleClock(3,.9,2.4,{opacity:217/255});
  // Native float32(.9) * 1000 truncates to 899, not 900 milliseconds.
  assert.equal(clock.delay,899);
  advanceParticleClock(clock,8000);advanceParticleClock(clock,8899);
  assert.equal(clock.opacity,217/255);assert.equal(clock.fading,false);
  advanceParticleClock(clock,8917);assert.equal(clock.opacity,217/255);
  advanceParticleClock(clock,8933);assert.equal(clock.opacity,1);
  advanceParticleClock(clock,10133);assert.equal(clock.opacity,127/255);
});

test('Fleurifee departure stars retain their native deadline tick and resume exact fade clocks from saves',()=>{
  const effect=new NativeFairyEffect({origin:[0,0,0],waypoints:[[0,0,0]]});
  effect.active=false;effect.spawn(0,30);effect.advance(1.025);
  assert.equal(effect.pool[0].clock.opacity,254/255);
  const saved=effect.snapshot(),restored=NativeFairyEffect.restore(saved);assert.ok(restored);
  effect.advance(FAIRY_STEP*2);restored.advance(FAIRY_STEP*2);
  assert.deepEqual(restored.snapshot(),effect.snapshot());
  effect.advance(4+FAIRY_STEP-effect.time);
  assert.equal(effect.pool[0].active,true);
  const position=[...effect.pool[0].position];effect.advance(FAIRY_STEP);
  assert.equal(effect.pool[0].active,false);assert.deepEqual(effect.pool[0].position,position);
  const invalid=structuredClone(saved);invalid.pool[0].clock.fadeEnd='bad';assert.equal(NativeFairyEffect.restore(invalid),null);
});

test('Portal lifetime/fade clocks survive all phases and legacy saves without replaying movement',()=>{
  const options={origin:[0,20,0],floorY:0,ceilingY:200,waypoints:[[-20,0,-20],[20,0,-20],[20,0,20],[-20,0,20]]};
  const effect=new NativeTeleporterEffect(options);effect.advance(2);
  for(const phase of ['corner','seek','orbit','burst']) {
    if(phase==='seek')effect.show();
    if(phase==='orbit')effect.advance(1.5);
    if(phase==='burst')effect.advance(5.7);
    assert.ok(effect.pool.some(p=>p.active&&p.kind===phase));
    const saved=effect.snapshot(),restored=NativeTeleporterEffect.restore(saved);assert.ok(restored);
    effect.advance(TELEPORT_STEP);restored.advance(TELEPORT_STEP);
    assert.deepEqual(restored.snapshot(),effect.snapshot());
    const legacy=structuredClone(saved);
    for(const p of legacy.pool)if(p?.active)delete p.clock;
    const migrated=NativeTeleporterEffect.restore(legacy);assert.ok(migrated);
    for(let i=0;i<legacy.pool.length;i++)if(legacy.pool[i]?.active) {
      assert.deepEqual(migrated.pool[i].position,legacy.pool[i].position);
      assert.deepEqual(migrated.pool[i].velocity,legacy.pool[i].velocity);
      assert.equal(migrated.pool[i].opacity,legacy.pool[i].opacity);
      assert.ok(validParticleClock(migrated.pool[i].clock));
    }
    migrated.advance(TELEPORT_STEP);
    assert.ok(migrated.pool.every(p=>!p.active||Number.isFinite(p.opacity)));
  }
});

test('Fleurifee legacy star states retain position and displayed alpha when timer fields were absent',()=>{
  const effect=new NativeFairyEffect({origin:[0,0,0],waypoints:[[0,0,0]]});effect.advance(2);
  const saved=effect.snapshot();for(const p of saved.pool)if(p?.active)delete p.clock;
  const restored=NativeFairyEffect.restore(saved);assert.ok(restored);
  for(let i=0;i<saved.pool.length;i++)if(saved.pool[i]?.active) {
    assert.deepEqual(restored.pool[i].position,saved.pool[i].position);
    assert.deepEqual(restored.pool[i].velocity,saved.pool[i].velocity);
    assert.equal(restored.pool[i].clock.opacity,Math.max(0,Math.min(1,(4-(saved.time-saved.pool[i].born))/3)));
  }
  restored.advance(FAIRY_STEP);assert.ok(restored.pool.every(p=>!p.active||validParticleClock(p.clock)));
  assert.equal(particleMilliseconds(1.016666666666665),1016);
});

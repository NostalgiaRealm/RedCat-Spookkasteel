import test from 'node:test';
import assert from 'node:assert/strict';
import {createNativeBlasts,nativeBlastsForEffect,nativeSmokeState,restoreNativeExplosions} from '../src/explosion-native.js';
import {createNativeExplosionDamage} from '../src/explosion-damage.js';
import {DestructibleEffects} from '../src/destructible-effects.js';

const fixture=()=>({id:'crate:12',sourceId:'crate',birth:12,position:[100,200,300],bounds:{min:[-10,-20,-30],max:[10,20,30]},
  settings:{explosion:{NrExplosions:6,SizePercentage:25,DamagePercentage:25,SmokeOnly:0,Green:0}}});

test('damage and rendering share one exact seeded cohort without adding save fields',()=>{
  const effect=fixture(),before=JSON.stringify(effect),expected=createNativeBlasts(effect),damage=createNativeExplosionDamage(effect);
  const shared=nativeBlastsForEffect(effect);
  assert.deepEqual(shared,expected);assert.equal(nativeBlastsForEffect(effect),shared);
  assert.notEqual(createNativeBlasts(effect),shared,'public factory remains fresh');
  for(let i=0;i<damage.length;i++){assert.deepEqual(damage[i].position,expected[i].position);assert.equal(damage[i].birth,expected[i].birth);assert.notEqual(damage[i].position,shared[i].position);}
  const game={time:12,explosions:[effect]},effects=new DestructibleEffects({},game);
  effects.update(0,new Map());
  assert.equal(effects.blasts[0],shared[0]);
  nativeSmokeState(shared[0].smoke[0],12.4);
  assert.equal(JSON.stringify(effect),before,'transient render state stays outside the explosion/save record');
  const restored=restoreNativeExplosions([effect],12.4)[0];
  assert.deepEqual(nativeBlastsForEffect(restored),expected,'restored cohort starts with original particle states, not cached render fields');
  assert.notEqual(nativeBlastsForEffect(restored),shared);
});

test('mutable diagnostic callers invalidate every blast spawn input without changing public factory behavior',()=>{
  const effect=fixture();
  const edits=[()=>effect.id+='x',()=>effect.birth+=1,()=>effect.position[0]+=5,()=>effect.bounds.min[1]-=5,()=>effect.bounds.max[2]+=4,
    ()=>effect.settings.explosion.NrExplosions=1,()=>effect.settings.explosion.SizePercentage=40,()=>effect.settings.explosion.SmokeOnly=1,()=>effect.settings.explosion.Green=1,
    ()=>effect.settings.explosion.NrExplosions=0];
  let previous=nativeBlastsForEffect(effect);
  for(const edit of edits) {
    edit();const next=nativeBlastsForEffect(effect);
    assert.notEqual(next,previous);assert.deepEqual(next,createNativeBlasts(effect));previous=next;
  }
  assert.deepEqual(createNativeExplosionDamage(effect),[]);
});

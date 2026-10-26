import test from 'node:test';
import assert from 'node:assert/strict';
import {jesterTeleportParticles} from '../src/enemy-combat-effects.js';
import {JESTER_EFFECT_SECONDS} from '../src/jester-teleport-timing.js';

const sample=(phase,age)=>jesterTeleportParticles({phase,age,position:[0,0,0]});
const near=(actual,expected,epsilon=1e-5)=>assert.ok(Math.abs(actual-expected)<epsilon,`${actual} != ${expected}`);

test('Jester emits one native delayed slot at a time and retains the complete last particle',()=>{
  for(const phase of ['departure','arrival']) {
    for(const [age,count]of [[0,0],[2/60,0],[3/60,1],[6/60,2],[.5,10],[.75,15],[1.5,6],[1.75,1],[106/60,0]])assert.equal(sample(phase,age).length,count,`${phase} at ${age}`);
    assert.deepEqual(sample(phase,.05),sample(phase,.06),'redraws between fixed steps do not emit or integrate');
    assert.deepEqual(sample(phase,1e10),[]);assert.deepEqual(sample(phase,-1),[]);assert.deepEqual(sample(phase,NaN),[]);
    assert.equal(sample(phase,JESTER_EFFECT_SECONDS).length,0);
  }
  near(JESTER_EFFECT_SECONDS,107/60,1e-12);
});

test('Jester uses half-second radial motion, delayed byte alpha and previous-tick height',()=>{
  const firstOut=sample('departure',.05)[0],firstIn=sample('arrival',.05)[0];
  near(Math.hypot(firstOut.position[0],firstOut.position[2]),50);near(Math.hypot(firstIn.position[0],firstIn.position[2]),.1);
  assert.ok(firstOut.position[2]<0,'native Y rotation maps +X toward negative Z before the first drawing');
  assert.equal(firstOut.opacity,63/255);assert.equal(firstIn.opacity,254/255);
  for(const [phase,initial]of [['departure',63/255],['arrival',254/255]])assert.equal(sample(phase,.15)[0].opacity,initial,'fade delay is live at equality');
  const out=sample('departure',.55)[0],inside=sample('arrival',.55)[0];
  near(Math.hypot(out.position[0],out.position[2]),.1);near(Math.hypot(inside.position[0],inside.position[2]),30);
  assert.equal(out.opacity,133/255);assert.equal(inside.opacity,194/255);
  assert.equal(out.size,45);assert.equal(inside.size,45);
  near(out.position[1],38.775);near(inside.position[1],24.15);
  const lastOut=sample('departure',1.75)[0],lastIn=sample('arrival',1.75)[0];
  assert.equal(lastOut.size,10);assert.equal(lastIn.size,80);
  assert.equal(lastOut.opacity,229/255);assert.equal(lastIn.opacity,111/255);
});

test('saved phase/age reproduces identical particle geometry while each effect retains its own origin',()=>{
  for(const phase of ['departure','arrival']) {
    const effect={phase,age:1.6,position:[100,200,300]},before=jesterTeleportParticles(effect,170);
    assert.deepEqual(jesterTeleportParticles(JSON.parse(JSON.stringify(effect)),170),before);
    const base=sample(phase,1.6);
    before.forEach((particle,i)=>assert.deepEqual(particle.position,base[i].position.map((value,axis)=>value+[100,170,300][axis])));
  }
});

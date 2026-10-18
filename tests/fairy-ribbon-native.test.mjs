import test from 'node:test';
import assert from 'node:assert/strict';
import {
  NativeFairyEffect,FAIRY_STEP,FAIRY_RIBBON_WIDTH,FAIRY_RIBBON_DISTANCE,
  FAIRY_RIBBON_TEXTURE,fairyRibbonOpacity,
} from '../src/fairy-effects.js';

const options={origin:[0,0,0],waypoints:[[0,0,0]],lifeTime:0,seed:712};
const close=(actual,expected)=>assert.ok(Math.abs(actual-expected)<1e-10,`${actual} != ${expected}`);
const json=value=>JSON.parse(JSON.stringify(value));
const tips=x=>Array.from({length:5},(_,i)=>[x,i*20,0]);

test('fairy ribbon uses native alpha100/255, linear800ms attenuation and alpha5 cutoff',()=>{
  close(fairyRibbonOpacity(0),100/255);
  close(fairyRibbonOpacity(200),75/255);
  close(fairyRibbonOpacity(400),50/255);
  close(fairyRibbonOpacity(600),25/255);
  assert.ok(fairyRibbonOpacity(759)>5/255);
  // The native float calculation can round alpha at exactly760ms just above
  // five. At the following integer millisecond it is unambiguously culled.
  assert.ok(fairyRibbonOpacity(760)<=5/255+1e-12);
  assert.equal(fairyRibbonOpacity(761),0);
  assert.equal(fairyRibbonOpacity(800),0);
  assert.equal(fairyRibbonOpacity(1000),0);
  close(FAIRY_RIBBON_WIDTH,1.92);
  close(FAIRY_RIBBON_DISTANCE,1.6);
  assert.equal(FAIRY_RIBBON_TEXTURE,'ptrail.bmp|ptrail_a.bmp');
});

test('fairy ribbon commits a history point only beyond1.6units and keeps a moving head',()=>{
  const effect=new NativeFairyEffect(options);effect.trails=[];
  effect.time=0;effect.updateRibbon(tips(0));
  const initial=effect.trails.length;
  effect.time=.01;effect.updateRibbon(tips(1));
  assert.equal(effect.trails.length,initial);
  for(let i=0;i<5;i++) {
    const head=effect.trails.filter(t=>t.orbiter===i).at(-1);
    assert.deepEqual(head.start,[1,i*20,0]);
    close(head.born,.01);
  }
  effect.time=.02;effect.updateRibbon(tips(1.6));
  assert.equal(effect.trails.length,initial,'equality does not commit another point');
  effect.time=.03;effect.updateRibbon(tips(1.601));
  assert.equal(effect.trails.length,initial+5);
  for(let i=0;i<5;i++) {
    const head=effect.trails.filter(t=>t.orbiter===i).at(-1);
    assert.deepEqual(head.start,head.end,'a committed point starts the next moving-head segment');
  }
});

test('fairy ribbon first quad uses its newer timestamp and following quads use their older timestamp',()=>{
  const effect=new NativeFairyEffect(options);effect.time=.6;
  effect.trails=[
    {end:[0,0,0],start:[2,0,0],fromBorn:0,born:.2,orbiter:0},
    {end:[2,0,0],start:[4,0,0],fromBorn:.2,born:.4,orbiter:0},
    {end:[4,0,0],start:[6,0,0],fromBorn:.4,born:.6,orbiter:0},
    {end:[6,0,0],start:[6,0,0],fromBorn:.6,born:.6,orbiter:0},
  ];
  const rays=effect.geometry().rays.filter(ray=>Math.hypot(...ray.start.map((v,i)=>v-ray.end[i]))>0);
  assert.equal(rays.length,3);
  assert.deepEqual(rays.map(ray=>[ray.start,ray.end]),[
    [[0,0,0],[2,0,0]],[[2,0,0],[4,0,0]],[[4,0,0],[6,0,0]],
  ]);
  [50,50,75].forEach((alpha,i)=>close(rays[i].opacity,alpha/255));
  assert.ok(rays.every(ray=>ray.width===1.92));
  effect.time=100;
  assert.deepEqual(effect.geometry().rays,rays,'drawing uses the last trail update timestamp, not the render clock');
});

test('fairy ribbon disappears with central particle while departure stars keep their own fade',()=>{
  const effect=new NativeFairyEffect(options);effect.advance(2);
  assert.ok(effect.geometry().rays.length>0);
  effect.requestStop();assert.deepEqual(effect.advance(FAIRY_STEP),['departure']);
  assert.equal(effect.active,false);
  assert.deepEqual(effect.geometry().rays,[]);
  assert.ok(effect.geometry().sprites.length>0,'departure burst remains visible');
  assert.equal(effect.geometry().light,null);
  effect.advance(.4);assert.deepEqual(effect.geometry().rays,[]);
  assert.ok(effect.geometry().sprites.length>0);
});

test('fairy ribbon snapshot preserves point timestamps and fractional clock without mutating on draw',()=>{
  const effect=new NativeFairyEffect(options);effect.advance(2.107);
  const saved=json(effect.snapshot()),restored=NativeFairyEffect.restore(saved);
  assert.equal(saved.trailFormat,2);
  assert.ok(saved.trails.every(t=>Number.isFinite(t.fromBorn)&&Number.isInteger(t.orbiter)));
  assert.ok(restored);assert.deepEqual(restored.snapshot(),effect.snapshot());
  assert.deepEqual(restored.geometry(),effect.geometry());
  const before=restored.snapshot();restored.geometry();restored.geometry();restored.advance(0);
  assert.deepEqual(restored.snapshot(),before);
  for(const dt of [.007,.05,.2,.7]) {
    effect.advance(dt);restored.advance(dt);
    assert.deepEqual(restored.geometry(),effect.geometry());
    assert.deepEqual(restored.snapshot(),effect.snapshot());
  }
});

test('legacy segment-only fairy saves migrate without rejecting the rest of their effect state',()=>{
  const effect=new NativeFairyEffect(options);effect.advance(.1);
  const saved=json(effect.snapshot());delete saved.trailFormat;
  saved.trails=Array.from({length:10},(_,i)=>({start:[i,0,0],end:[i-1,0,0],born:i<5?.05:.1}));
  const restored=NativeFairyEffect.restore(saved);assert.ok(restored);
  assert.equal(restored.trailFormat,2);
  assert.deepEqual(restored.pool,effect.pool);
  assert.equal(restored.randomState,effect.randomState);
  for(let orbiter=0;orbiter<5;orbiter++) {
    const group=restored.trails.filter(t=>t.orbiter===orbiter);
    assert.deepEqual(group.map(t=>t.start),[[orbiter,0,0],[orbiter+5,0,0],[orbiter+5,0,0]]);
    assert.deepEqual(group.at(-1).start,group.at(-1).end);
    assert.ok(group.every((t,i)=>i===0||t.fromBorn===group[i-1].born));
  }
  assert.ok(restored.trails.every(t=>t.fromBorn>=0&&t.fromBorn<=t.born));
  restored.advance(.1);assert.ok(restored.geometry().rays.length>0);
});

test('malformed ribbon timing and ownership in new saves are rejected',()=>{
  const effect=new NativeFairyEffect(options);effect.advance(.2);
  const saved=json(effect.snapshot());
  for(const alter of [s=>s.trails[0].orbiter=5,s=>s.trails[0].orbiter=.5,
    s=>s.trails[0].fromBorn=-1,s=>s.trails[0].fromBorn=s.time+1,s=>s.trails[0].fromBorn=NaN]) {
    const invalid=json(saved);alter(invalid);assert.equal(NativeFairyEffect.restore(invalid),null);
  }
});

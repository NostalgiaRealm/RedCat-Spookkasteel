import test from 'node:test';
import assert from 'node:assert/strict';
import {createElectricExplosion,stepElectricExplosion,snapshotElectricExplosion,restoreElectricExplosion,
  stepElectricSpark,electricSparkQuad,ELECTRIC_SPARK_UVS} from '../src/electric-explosion-native.js';
const blast={id:'electric-test',electric:true,birth:10,position:[5,20,30]};
const run=(s,to,fps=60)=>{for(let i=0;i<=Math.round(to*fps);i++)stepElectricExplosion(s,blast.birth+i/fps);return s;};
const comparable=s=>({...snapshotElectricExplosion(s),quietUntil:0,sounds:[]});
const close=(a,b,tolerance=1e-5)=>assert.ok(Math.abs(a-b)<tolerance,`${a} != ${b}`);

test('Electric independently requires its native quality3 branch and uses each staggered blast origin',()=>{
  assert.equal(createElectricExplosion({...blast,electric:false}),null);
  for(const effectsQuality of [0,1,2])assert.equal(createElectricExplosion(blast,{effectsQuality}),null);
  const a=createElectricExplosion(blast),b=createElectricExplosion({...blast,id:'other',birth:11,position:[10,15,40]});
  stepElectricExplosion(a,10);stepElectricExplosion(b,11);
  assert.deepEqual(a.paths[0].position,blast.position);assert.deepEqual(b.paths[0].position,[10,15,40]);
  assert.notEqual(a.rng,b.rng);
});

test('cell emits three paths at0/300/600ms and lazily arms path and spark lifetimes',()=>{
  const state=createElectricExplosion(blast);stepElectricExplosion(state,10);
  assert.equal(state.spawned,1);assert.equal(state.paths[0].lifeEnd,null);assert.equal(state.sparks.length,0);
  stepElectricExplosion(state,10+1/60);
  assert.equal(state.paths[0].lifeEnd,1016);assert.equal(state.paths[0].intervalEnd,null);
  assert.ok(state.sparks.length>=10&&state.sparks.length<=20);assert.ok(state.sparks.every(p=>p.lifeEnd===null));
  stepElectricExplosion(state,10+2/60);assert.ok(state.sparks.every(p=>p.lifeEnd===33+p.life));
  run(state,.6);assert.equal(state.spawned,3);assert.deepEqual(state.paths.map(p=>p.bornTick),[0,18,36]);
  run(state,2.5);assert.equal(state.active,false);assert.equal(state.paths.length,0);assert.equal(state.sparks.length,0);
});

test('burst interval uses strict expiry, with a separate arm tick after each burst',()=>{
  const state=run(createElectricExplosion(blast),2/60),path=state.paths[0];
  path.interval=100;path.intervalEnd=100;const id=state.nextId;
  run(state,.1);assert.equal(state.nextId,id);
  stepElectricExplosion(state,10+7/60);assert.ok(state.nextId>id);assert.equal(path.intervalEnd,null);
  stepElectricExplosion(state,10+8/60);assert.equal(path.intervalEnd,133+path.interval);
});

test('simultaneous path bursts follow native newest-first active-list traversal',()=>{
  const state=run(createElectricExplosion(blast),.6),firstNewId=state.nextId;
  for(const path of state.paths)path.interval=-1;
  const newestPosition=[...state.paths.at(-1).position];
  stepElectricExplosion(state,10+37/60);
  const firstNew=state.sparks.find(p=>p.id===firstNewId);
  assert.deepEqual(firstNew.head,newestPosition);
  assert.equal(firstNew.lifeEnd,null);
});

test('short streak trajectories match isolated original4e4bc0 kernel samples',()=>{
  // Full16-case original-byte probe is retained beside its hash and runner in
  // temp_work/.../effects/electric/spark-kernel-probe.json. Float tolerance only.
  const p={head:[10,20,30],tail:[10,20,30],velocity:[60,0,0],tailVelocity:[60,0,0],tailMoving:false};
  stepElectricSpark(p,1/60);close(p.head[0],10.699999809265137);assert.equal(p.head[1],20);assert.equal(p.tailMoving,false);
  stepElectricSpark(p,1/60);stepElectricSpark(p,1/60);
  assert.equal(p.tailMoving,true);assert.deepEqual(p.tail,[10,20,30]);
  stepElectricSpark(p,1/60);close(p.head[1],19.938751220703125);close(p.tail[0],10.699999809265137);
  for(let i=4;i<20;i++)stepElectricSpark(p,1/60);
  close(p.head[0],24.00000762939453);close(p.head[1],18.06041717529297);close(p.tail[1],18.61166763305664);
});

test('spark quad has native world-axis orientation, tapered widths and longitudinalUV direction',()=>{
  const p={tail:[0,0,0],head:[2,0,0]};
  assert.deepEqual(electricSparkQuad(p),[[0,0,.16],[0,0,-.16],[2,0,-.32],[2,0,.32]]);
  assert.deepEqual(ELECTRIC_SPARK_UVS,[[1,1],[1,0],[0,0],[0,1]]);
  p.head=[0,2,0];assert.deepEqual(electricSparkQuad(p),[[.16,0,0],[-.16,0,0],[-.32,2,0],[.32,2,0]]);
});

test('display refresh does not change particles, RNG, lazy timers or path trails',()=>{
  const baseline=comparable(run(createElectricExplosion(blast),1.2));
  for(const fps of [10,20,30,120,240])assert.deepEqual(comparable(run(createElectricExplosion(blast),1.2,fps)),baseline);
});

test('snapshot restores exact dynamic state and suppresses old crackles',()=>{
  const a=run(createElectricExplosion(blast),.65),saved=snapshotElectricExplosion(a);
  const b=restoreElectricExplosion(JSON.parse(JSON.stringify(saved)),blast,10.65);
  assert.deepEqual(comparable(b),comparable(a));assert.deepEqual(b.sounds,[]);
  for(let i=40;i<100;i++){
    const time=10+i/60;stepElectricExplosion(a,time);stepElectricExplosion(b,time);
    assert.deepEqual(comparable(b),comparable(a));assert.ok(b.sounds.every(e=>e.time>10.65&&e.time>time-.100001));
  }
});

test('large elapsed catchup is bounded and missing/invalid saves reconstruct silently once',()=>{
  const state=createElectricExplosion(blast);stepElectricExplosion(state,11.2);
  assert.equal(state.tick,5);assert.equal(state.sounds.length,0);
  for(let i=0;i<20;i++)stepElectricExplosion(state,11.2);
  const baseline=run(createElectricExplosion(blast),1.2);assert.deepEqual(comparable(state),comparable(baseline));
  const saved=snapshotElectricExplosion(baseline);
  let nested={};for(let i=0;i<15000;i++)nested={child:nested};
  const variants=[null,{...saved,active:undefined},{...saved,cellStarted:'bad'},
    {...saved,paths:saved.paths.map(p=>({...p,intervalEnd:'bad'}))},
    {...saved,sparks:saved.sparks.map(p=>({...p,tailMoving:undefined}))},
    {...saved,sparks:Array(513).fill(saved.sparks[0])},{...saved,unexpected:nested}];
  for(const broken of variants){const restored=restoreElectricExplosion(broken,blast,11.2);assert.deepEqual(comparable(restored),comparable(baseline));assert.deepEqual(restored.sounds,[]);}
});

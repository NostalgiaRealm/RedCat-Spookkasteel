import test from 'node:test';
import assert from 'node:assert/strict';
import {NativeTeleporterEffect,teleporterSpecialPosition,teleporterGeometry,TELEPORT_STEP,TELEPORT_EFFECT_SECONDS} from '../src/teleporter-effects.js';

const options={origin:[100,30,200],floorY:0,ceilingY:200,waypoints:[[60,0,160],[60,0,240],[140,0,240],[140,0,160]]};
const close=(actual,expected,epsilon=1e-8)=>assert.ok(Math.abs(actual-expected)<epsilon,`${actual} != ${expected}`);
const live=e=>e.pool.filter(p=>p.active);

test('native standby timer releases four corner particles and integrates upward acceleration',()=>{
  const e=new NativeTeleporterEffect(options);
  e.advance(.75);assert.equal(live(e).length,0);
  e.advance(TELEPORT_STEP);assert.equal(live(e).length,4);
  for(let i=0;i<4;i++) {
    const p=e.pool[i];assert.equal(p.kind,'corner');
    close(p.velocity[1],32*TELEPORT_STEP);
    close(p.position[1],options.waypoints[i][1]+32*TELEPORT_STEP**2);
    assert.equal(p.opacity,1);
  }
  e.advance(.75);assert.equal(live(e).length,4);
  e.advance(TELEPORT_STEP);assert.equal(live(e).length,8);
});

test('special beam radius finishes contracting at2.1 seconds while orbit continues for6.8',()=>{
  for(const [age,radius] of [[0,100],[1.05,55],[2.1,10],[5,10]])for(let i=0;i<5;i++) {
    const p=teleporterSpecialPosition(options.origin,i,age);
    close(Math.hypot(p[0]-100,p[2]-200),radius);close(p[1],30);
  }
  const e=new NativeTeleporterEffect(options);e.show();e.advance(.5);
  const g=e.geometry();assert.equal(g.rays.length,5);
  for(const ray of g.rays){assert.equal(ray.start[1],200);assert.equal(ray.end[1],100);assert.equal(ray.width,41);assert.equal(ray.opacity,1);assert.deepEqual(ray.color,[210/255,210/255,1]);}
  assert.equal(g.discs.length,0,'floor flash waits for the descending front');
  e.advance(.5);assert.equal(e.geometry().discs[0].texture,'blast');
  close(e.geometry().discs[0].radius,50*(.5+1.3*(1-1/6.8)));
});

test('Show changes living corner particles into Seek and fills at most250 native orbit slots',()=>{
  const e=new NativeTeleporterEffect(options);e.advance(1);
  const oldPositions=live(e).map(p=>[...p.position]);
  assert.equal(e.show(),true);assert.equal(e.show(),false);
  assert.ok(live(e).every(p=>p.kind==='seek'));assert.deepEqual(live(e).map(p=>p.position),oldPositions);
  e.advance(.5);assert.ok(live(e).some(p=>p.kind==='seek'));assert.ok(live(e).some(p=>p.kind==='orbit'));
  e.advance(5);assert.equal(live(e).length,250);assert.equal(e.pool.length,250);
  assert.ok(live(e).every(p=>p.kind==='orbit'));assert.ok(e.geometry().sparks.every(p=>p.opacity>.85));
});

test('native orbit centres only follow height continuously for every third slot',()=>{
  const e=new NativeTeleporterEffect(options);e.show();e.advance(.5);
  const frozen=[...e.pool[1].centre],moving=[...e.pool[0].centre];
  e.advance(.5);assert.deepEqual(e.pool[1].centre,frozen);assert.notDeepEqual(e.pool[0].centre,moving);
  for(const p of live(e))close(Math.hypot(p.position[0]-p.centre[0],p.position[2]-p.centre[2]),30);
});

test('terminal flash lasts300ms, expands8→80 and moves towards the camera before outward burst',()=>{
  const e=new NativeTeleporterEffect(options);e.show();e.advance(6.8);
  const camera=[100,130,500],g=e.geometry(camera);
  assert.equal(g.stage,'terminal');assert.equal(g.rays.length,0);assert.equal(g.discs.length,1);
  assert.equal(g.discs[0].billboard,true);close(g.discs[0].radius,8);
  assert.deepEqual(g.discs[0].position,[100,40,230]);
  e.advance(.15);close(e.geometry(camera).discs[0].radius,44);close(e.geometry(camera).discs[0].cameraFraction,.525);
  e.advance(.15);assert.equal(e.active,false);assert.equal(e.geometry().discs.length,0);
  for(const p of live(e)){assert.equal(p.kind,'burst');close(Math.hypot(...p.velocity),110);assert.equal(p.life,3);}
  e.advance(3.1);assert.ok(live(e).every(p=>p.kind==='corner'),'terminal burst expires, only new standby particles remain');
});

test('native portal state survives save/restore without replay, and geometry refresh is pure',()=>{
  const e=new NativeTeleporterEffect(options);e.advance(1.23);e.show();e.advance(4.317);
  const snapshot=e.snapshot(),before=e.geometry([1,2,3]);
  assert.deepEqual(e.snapshot(),snapshot);assert.deepEqual(e.geometry([1,2,3]),before);
  const restored=NativeTeleporterEffect.restore(JSON.parse(JSON.stringify(snapshot)));assert.ok(restored);
  assert.deepEqual(restored.geometry([1,2,3]),before);
  e.advance(.217);restored.advance(.217);assert.deepEqual(restored.snapshot(),e.snapshot());
  assert.equal(NativeTeleporterEffect.restore({...snapshot,pool:[]}),null);
  assert.equal(NativeTeleporterEffect.restore({...snapshot,remainder:Infinity}),null);
  assert.equal(NativeTeleporterEffect.restore({...snapshot,colorUp:undefined}),null);
  const invalid=e.snapshot();invalid.pool[0].wiggleUp=undefined;
  assert.equal(NativeTeleporterEffect.restore(invalid),null);
});

test('expired portal save slots are compact and retain exact future slot reuse',()=>{
  const e=new NativeTeleporterEffect({...options,waypoints:[]});e.show();e.advance(11);
  assert.equal(live(e).length,0);
  const snapshot=e.snapshot();assert.ok(JSON.stringify(snapshot).length<10000);
  assert.ok(snapshot.pool.every(p=>p===null||Array.isArray(p)));
  const restored=NativeTeleporterEffect.restore(snapshot);assert.ok(restored);
  assert.deepEqual(restored.snapshot(),snapshot);
  e.show();restored.show();e.advance(4.3);restored.advance(4.3);
  assert.deepEqual(restored.snapshot(),e.snapshot());assert.deepEqual(restored.geometry(),e.geometry());
  const before=e.snapshot();e.advance(Infinity);assert.deepEqual(e.snapshot(),before);
});

test('native energy UV scroll changes direction once and continues past the negative endpoint',()=>{
  const e=new NativeTeleporterEffect(options);e.show();e.advance(.05);
  close(e.uvOffset,.03);assert.equal(e.uvUp,false);
  e.advance(.2);close(e.uvOffset,-.09);assert.equal(e.uvUp,false);
  const ray=e.geometry().rays[0];close(ray.uvStart,-.06);close(ray.uvEnd,.88);
});

test('fixed native particle steps give matching trajectories across renderer frame rates',()=>{
  const slow=new NativeTeleporterEffect(options),fast=new NativeTeleporterEffect(options);slow.show();fast.show();
  for(let i=0;i<90;i++)slow.advance(1/30);
  for(let i=0;i<432;i++)fast.advance(1/144);
  assert.equal(slow.ticks,180);assert.equal(fast.ticks,180);assert.deepEqual(slow.geometry(),fast.geometry());
});

test('legacy portal sampling is bounded regardless of saved level age',()=>{
  assert.deepEqual(teleporterGeometry({...options,age:3600,showAge:1}),teleporterGeometry({...options,age:7,showAge:1}));
  assert.equal(TELEPORT_EFFECT_SECONDS,7.1);
});

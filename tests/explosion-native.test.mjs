import test from 'node:test';
import assert from 'node:assert/strict';
import {createNativeBlasts,nativeSmokeState} from '../src/explosion-native.js';
import {DestructibleEffects,explosionFrame} from '../src/destructible-effects.js';

const fixture={id:'blast',birth:5,position:[100,20,300],bounds:{min:[-100,-10,-20],max:[100,10,20]},settings:{explosion:{NrExplosions:3,SizePercentage:25}}};
const close=(a,b)=>assert.ok(Math.abs(a-b)<1e-8,`${a} != ${b}`);

test('blasts follow the native longest-axis layout and are staggered rather than simultaneous',()=>{
  const blasts=createNativeBlasts(fixture);assert.deepEqual(blasts,createNativeBlasts(fixture));assert.equal(blasts.length,3);
  for(const [i,blast] of blasts.entries()) {
    assert.equal(blast.diameter,160);
    const fraction=(blast.position[0]-fixture.position[0]+100)/200,centre=[.5,.1,.7][i];
    assert.ok(fraction>=centre-.05&&fraction<centre+.05);
    assert.ok(Math.abs(blast.position[1]-20)<=4&&Math.abs(blast.position[2]-300)<=8);
    if(i)assert.ok(blast.birth-blasts[i-1].birth>=.149&&blast.birth-blasts[i-1].birth<=.201);
  }
  assert.equal(blasts[0].birth,5);
  const single=createNativeBlasts({...fixture,settings:{explosion:{NrExplosions:1,SizePercentage:25}}})[0];
  assert.ok(single.position[0]>=50&&single.position[0]<70,'native count%6 table offsets even the single blast');
  assert.deepEqual(createNativeBlasts({...fixture,settings:{explosion:{NrExplosions:0}}}),[]);
  assert.equal(createNativeBlasts({...fixture,settings:{explosion:{NrExplosions:500}}}).length,16,'portable corrupted-data cap stays bounded');
});

test('each blast emits a finite native smoke cohort with authored sizes, upward velocity and lifetimes',()=>{
  const [blast]=createNativeBlasts(fixture);assert.equal(blast.smoke.length,4);
  for(const [i,p]of blast.smoke.entries()) {
    close(p.birth-blast.birth,.2+i*.4);
    assert.ok(p.life>=1.2&&p.life<1.799);assert.ok(p.size>=64&&p.size<128);
    assert.ok(Math.hypot(...p.velocity)>=25&&Math.hypot(...p.velocity)<40&&p.velocity[1]>0);
    assert.ok(Math.abs(p.origin[0]-blast.position[0])<=8&&Math.abs(p.origin[2]-blast.position[2])<=8);
    assert.ok(p.origin[1]>=blast.position[1]&&p.origin[1]<blast.position[1]+8);
  }
  assert.ok(blast.expires<=blast.birth+3.2);
});

test('smoke motion, opacity and size use each puff lifetime without per-frame emission or allocation',()=>{
  const p=createNativeBlasts(fixture)[0].smoke[0];
  assert.equal(nativeSmokeState(p,p.birth-.001),null);
  const start=nativeSmokeState(p,p.birth);close(start.size,p.size*.5);close(start.opacity,.8);
  const middle=nativeSmokeState(p,p.birth+p.life*.5);assert.equal(middle,start);
  close(middle.size,p.size*.75);close(middle.opacity,.45);
  p.origin.forEach((v,i)=>close(middle.position[i],v+p.velocity[i]*p.life*.5));
  assert.equal(nativeSmokeState(p,p.birth+p.life+.001),null);
});

test('renderer retains original flash clocks, supports smoke-only/green clouds and releases cohorts',()=>{
  const effect={...fixture,birth:0,settings:{explosion:{NrExplosions:1,SizePercentage:25,SmokeOnly:true,Green:true}}};
  const game={time:0,explosions:[effect]},effects=new DestructibleEffects({},game),calls=[];
  const batches=new Map([['smoke_green.bmp|smoke_green_a.bmp',{add:(...args)=>calls.push(args)}],['explosie01.bmp|explosie01_a.bmp',{add:()=>assert.fail('smoke-only explosion emitted fire') }]]);
  effects.update(0,batches);assert.equal(calls.length,0);assert.equal(effects.blasts.length,1);
  game.time=.2;effects.update(.2,batches);assert.equal(calls.length,1);assert.deepEqual(calls[0][3],[1,1,1]);close(calls[0][4],.8);
  for(let i=0;i<200;i++)effects.update(0,new Map());
  assert.equal(effects.blasts.length,1);assert.equal(effects.blasts[0].smoke.length,4);
  game.time=4;effects.update(3.8,batches);assert.equal(effects.blasts.length,0);
  game.time=7;game.explosions=[];effects.update(3,batches);assert.equal(effects.seen.size,0);
  assert.equal(explosionFrame(0),1);assert.equal(explosionFrame(.6),7);assert.equal(explosionFrame(.699),8);assert.equal(explosionFrame(.8),null);
  effects.dispose();assert.equal(effects.blasts.length,0);
});

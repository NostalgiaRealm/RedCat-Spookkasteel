import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {NativeSpoutEffect,SPOUT_STEP} from '../source/spout-effects.js';
import {WorldEffects,BillboardBatch} from '../source/world-effects.js';

// Reference update before the empty-slot optimization. The recovered step,
// random templates and snapshot encoder remain the production implementation.
class AlwaysStepSpout extends NativeSpoutEffect {
  update(dt,origin,direction,enabled=true,enableSerial=0) {
    if(!(dt>0))return;
    if(enabled!==this.enabled||enabled&&enableSerial!==this.enableSerial) {
      const first=this.enabled===null;this.enabled=enabled;
      if(enabled){this.delay=this.pool[0].delay;this.delayEnd=null;this.lifeEnd=null;
        if(!first)this.restoredAge=0;
        this.finished=this.duration>0&&this.restoredAge>=this.duration;}
    }
    this.enableSerial=enableSerial;this.remainder+=Math.min(dt,.25);
    while(this.remainder+1e-10>=SPOUT_STEP){this.remainder=Math.max(0,this.remainder-SPOUT_STEP);this.ticks++;this.step(origin,direction);}
  }
}

const allEntities=()=>Array.from({length:5},(_,i)=>JSON.parse(readFileSync(new URL(`../data/levels/lvl0${i}a/level.json`,import.meta.url))).entities)
  .flat().filter(e=>e.classname==='EffectSpoutEntity');
const base={BitmapFileName:'smoke.bmp',BitmapAlphaFileName:'smoke_a.bmp',DelaySecondsMin:0,DelaySecondsMax:.04,
  LifeSecondsMin:.25,LifeSecondsMax:2,SpeedMin:1,SpeedMax:20,AngleMin:0,AngleMax:60,Gravity:1,StartRadius:20,Scale:1,
  AlphaPercentageStart:100,AlphaPercentageEnd:0,SizePercentageStart:25,SizePercentageEnd:100};

test('empty inactive or completed spouts preserve every native timer, slot and save field',()=>{
  for(const [index,entity]of [...allEntities(),{...base,LifeTimeSecs:.05},{...base,LifeTimeSecs:.05,ColourCycling:1,ColourFrom:'0 20 40',ColourTo:'100 40 100'}].entries()) {
    const current=new NativeSpoutEffect(entity,{seed:index+100}),reference=new AlwaysStepSpout(entity,{seed:index+100});
    for(let frame=0;frame<400;frame++) {
      const dt=[1/30,1/60,1/120,1/240,0,.25][frame%6],enabled=frame<40||frame>=240&&frame<320,serial=frame>=280?2:1;
      const origin=[Math.sin(frame/10)*100,Math.cos(frame/17)*20,-frame/7],direction=[Math.cos(frame/10),1,Math.sin(frame/10)];
      current.update(dt,origin,direction,enabled,serial);reference.update(dt,origin,direction,enabled,serial);
      assert.deepEqual(current.snapshot(),reference.snapshot(),`emitter ${index}, frame ${frame}`);
      if(frame===200) {
        const restored=NativeSpoutEffect.restore(entity,JSON.parse(JSON.stringify(current.snapshot())));
        assert.ok(restored);assert.deepEqual(restored.snapshot(),current.snapshot());
      }
    }
  }
});

function fixture(origin=[1000,0,-50]) {
  const owner={scene:new THREE.Scene(),track:x=>x},batch=new BillboardBatch(owner,null),reference=new BillboardBatch(owner,null);
  const camera=new THREE.PerspectiveCamera(65,1.5,.1,500);
  camera.updateMatrixWorld();const frustum=new THREE.Frustum().setFromProjectionMatrix(new THREE.Matrix4().multiplyMatrices(camera.projectionMatrix,camera.matrixWorldInverse));
  batch.frustum=reference.frustum=frustum;
  const effects={batches:new Map([['smoke.bmp|smoke_a.bmp',batch]]),torches:{direction:()=>null},endpoint:(_name,fallback)=>fallback};
  const state={object:{id:'spout',entity:base},spout:new NativeSpoutEffect(base,{seed:123}),active:true,age:0};
  const referenceEffect=new AlwaysStepSpout(base,{seed:123});
  return {owner,batch,reference,camera,frustum,effects,state,referenceEffect,origin};
}
const prefix=batch=>['positions','sizes','colors','rotations','diagonalScales','nativeSpouts'].map(key=>batch[key].array.slice(0,batch.count*batch[key].itemSize));
const update=(f,dt,origin=f.origin)=>{
  f.batch.count=f.reference.count=0;
  WorldEffects.prototype.updateSpout.call(f.effects,f.state,origin,dt);
  f.referenceEffect.update(dt,origin,[0,1,0],f.state.active,f.state.object.spoutEnableSerial||0);
  for(const p of f.referenceEffect.particles)f.reference.add(p.position,p.size,p.size,f.referenceEffect.tint,p.opacity,0,null,1);
};
const dispose=f=>{for(const b of [f.batch,f.reference]){b.geometry.dispose();b.mesh.material.dispose();}};

test('whole-cloud culling leaves moving, paused, disabled and returning spout draws identical',()=>{
  const f=fixture();let skipped=0,adds=0;const add=f.batch.add.bind(f.batch);f.batch.add=(...args)=>{adds++;add(...args);};
  try {
    for(let frame=0;frame<2000;frame++) {
      const origin=[Math.cos(frame/100)*1000,Math.sin(frame/30)*300,-50-Math.abs(Math.sin(frame/60))*1000];
      f.camera.position.set(Math.sin(frame/50)*100,Math.cos(frame/73)*100,0);
      f.camera.lookAt(Math.sin(frame/90)*200,0,-100);f.camera.updateMatrixWorld();
      f.frustum.setFromProjectionMatrix(new THREE.Matrix4().multiplyMatrices(f.camera.projectionMatrix,f.camera.matrixWorldInverse));
      f.state.active=frame%500<400;f.state.object.spoutEnableSerial=Math.floor(frame/650);
      const before=adds;update(f,frame%19===0?0:1/(frame%2?240:60),origin);
      if(f.state.spout.particles.length>1&&adds===before)skipped++;
      assert.equal(f.batch.count,f.reference.count,`frame ${frame}`);assert.deepEqual(prefix(f.batch),prefix(f.reference));
      assert.deepEqual(f.state.spout.snapshot(),f.referenceEffect.snapshot());
    }
    assert.ok(skipped>0,'distant clouds avoid all per-particle submissions');
  }finally{dispose(f);}
});

test('cloud bounds keep large tails and native-spout half-unit quads at every frustum plane',()=>{
  const f=fixture();
  try {
    for(let i=0;i<240;i++)update(f,1/60);
    const original=f.state.spout;
    // A restored cloud may have the same tick count as the replaced instance.
    f.state.spout=NativeSpoutEffect.restore(base,original.snapshot());
    f.state.spout.particles.forEach((p,i)=>{p.position=[i%2?1000:0,0,-50];p.size=i%2?1:20;p.opacity=1;});
    f.referenceEffect=NativeSpoutEffect.restore(base,f.state.spout.snapshot());update(f,0);
    assert.ok(f.batch.count>0);assert.deepEqual(prefix(f.batch),prefix(f.reference));
    for(const boundary of ['left','right','top','bottom','near','far']) {
      const camera=new THREE.OrthographicCamera(-1,1,1,-1,1,10);camera.updateMatrixWorld();
      f.frustum.setFromProjectionMatrix(new THREE.Matrix4().multiplyMatrices(camera.projectionMatrix,camera.matrixWorldInverse));
      const positions={left:[-1.7,0,-5],right:[1.7,0,-5],top:[0,1.7,-5],bottom:[0,-1.7,-5],near:[0,0,-.3],far:[0,0,-10.7]};
      const particles=Array.from({length:2},()=>({position:[...positions[boundary]],size:.0001,opacity:1}));
      // Manual diagnostic clouds without a clock deliberately recompute bounds.
      f.state.spout={particles,tint:[1,1,1],time:0,update(){},finished:false};
      f.referenceEffect=f.state.spout;update(f,0);
      assert.equal(f.batch.count,2,boundary);assert.deepEqual(prefix(f.batch),prefix(f.reference));
    }
    f.state.spout.particles.forEach(p=>p.opacity=0);update(f,0);assert.equal(f.batch.count,0,'empty opacity cloud has no Infinity bounds artifact');
  }finally{dispose(f);}
});

test('fully enclosed clouds skip repeated sphere checks; unusual diagnostic sizes retain original data',()=>{
  const f=fixture(),add=f.batch.add.bind(f.batch);let skipped=0;
  f.batch.add=(...args)=>{if(args[8])skipped++;add(...args);};
  try {
    const particles=[{position:[-0,0,-100],size:1,opacity:.25},{position:[1,-0,-100],size:1,opacity:1}];
    f.state.spout={particles,tint:[1,.5,0],time:0,update(){},finished:false};f.referenceEffect=f.state.spout;
    update(f,0);assert.equal(skipped,2);assert.deepEqual(prefix(f.batch),prefix(f.reference));
    for(const size of [0,-0,-50,50,NaN,Infinity,-Infinity])for(const opacity of [0,.2,1,NaN]) {
      particles[0].size=particles[1].size=size;particles[0].opacity=opacity;
      update(f,0);assert.equal(f.batch.count,f.reference.count);assert.deepEqual(prefix(f.batch),prefix(f.reference));
    }
  }finally{dispose(f);}
});

import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {NativeSpoutEffect,SPOUT_STEP,SPOUT_POOL_SIZE} from '../src/spout-effects.js';

const base={DelaySecondsMin:.1,DelaySecondsMax:.1,LifeSecondsMin:2,LifeSecondsMax:2,
  SpeedMin:8,SpeedMax:8,AngleMin:0,AngleMax:0,Gravity:2,StartRadius:0,Scale:2,
  AlphaPercentageStart:100,AlphaPercentageEnd:0,SizePercentageStart:25,SizePercentageEnd:100};
const origin=[10,20,30],up=[0,1,0];
const close=(a,b)=>assert.ok(Math.abs(a-b)<1e-8,`${a} != ${b}`);
const tick=(e,count,enabled=true,direction=up)=>{for(let i=0;i<count;i++)e.update(SPOUT_STEP,origin,direction,enabled);};

test('native deferred birth timers, triple launch speed and semi-implicit gravity',()=>{
  const e=new NativeSpoutEffect(base);tick(e,7);assert.equal(e.serial,0,'deadline equality does not spawn');
  tick(e,1);assert.equal(e.serial,1);const p=e.particles[0];
  assert.deepEqual(p.birthPosition,origin);close(p.velocity[1],24-48/60);close(p.position[1],20+(24-48/60)/60);
  assert.equal(p.size,10);assert.equal(p.opacity,254/255);
  tick(e,7);assert.equal(e.serial,1);tick(e,1);assert.equal(e.serial,2,'next countdown starts one tick after birth');
});

test('alpha has its own delayed integer fade and size uses lifetime, independent of image resolution',()=>{
  const e=new NativeSpoutEffect(base);tick(e,8);const p=e.particles[0];
  tick(e,1);assert.equal(p.opacity,254/255);assert.ok(p.size>10);
  tick(e,1);assert.equal(p.opacity,1,'fade begins after delay and deferred timer start');
  tick(e,60);assert.equal(p.opacity,127/255);close(p.size,10+30*1033/2000);
  const constant=new NativeSpoutEffect({...base,SizePercentageStart:25,SizePercentageEnd:25});tick(constant,8);
  assert.equal(constant.particles[0].size,40,'native equal-percentage quirk');
});

test('15 reusable templates cap long-lived smoke, and first free slot reuses its launch and offset',()=>{
  const e=new NativeSpoutEffect({...base,DelaySecondsMin:0,DelaySecondsMax:0,LifeSecondsMin:10,LifeSecondsMax:10,StartRadius:5,AngleMax:30});
  const refs=[...e.pool],templates=e.pool.map(p=>JSON.stringify([p.launch,p.offset,p.life,p.delay]));
  let previous=0;for(let i=0;i<900;i++){tick(e,1);assert.ok(e.serial-previous<=1);previous=e.serial;assert.ok(e.particles.length<=15);}
  assert.equal(e.pool.length,SPOUT_POOL_SIZE);assert.ok(e.serial>15);
  for(let i=0;i<15;i++){assert.equal(e.pool[i],refs[i]);assert.equal(JSON.stringify([e.pool[i].launch,e.pool[i].offset,e.pool[i].life,e.pool[i].delay]),templates[i]);}
});

test('cone tangents retain native narrowing and spread stays a world-XZ square for sideways emitters',()=>{
  const e=new NativeSpoutEffect({...base,AngleMin:30,AngleMax:30,StartRadius:5,Gravity:0},{seed:123});
  tick(e,8,true,[1,1,0]);const p=e.particles[0],q=Math.SQRT1_2,launch=p.launch;
  close(p.velocity[0],q*launch[0]+.5*launch[2]);close(p.velocity[1],q*launch[0]-.5*launch[2]);close(p.velocity[2],-q*launch[1]);
  assert.equal(p.birthPosition[1],origin[1]);
  assert.ok(e.pool.every(p=>Math.abs(p.offset[0])<=5&&Math.abs(p.offset[2])<=5&&p.offset[1]===0));
  assert.ok(e.pool.some(p=>Math.hypot(p.offset[0],p.offset[2])>5),'square corners are not clipped to a disk');
});

test('pause is inert, disabled particles drain, and re-enable retains survivors without catch-up bursts',()=>{
  const e=new NativeSpoutEffect(base);tick(e,60);const before=JSON.stringify(e);e.update(0,[99,99,99],up,false);assert.equal(JSON.stringify(e),before);
  const survivors=[...e.particles],serial=e.serial;tick(e,2,false);assert.equal(e.serial,serial);
  tick(e,1,true);assert.equal(e.serial,serial);assert.ok(survivors.some(p=>e.particles.includes(p)));
  tick(e,150,false);assert.equal(e.particles.length,0);tick(e,7,true);assert.equal(e.serial,serial);tick(e,1,true);assert.equal(e.serial,serial+1);
});

test('fixed simulation gives the same bounded cloud at 30, 60 and 120 Hz',()=>{
  const states=[];
  for(const hz of [30,60,120]){const e=new NativeSpoutEffect({...base,AngleMax:30,StartRadius:10},{seed:700});
    for(let i=0;i<hz*10;i++)e.update(1/hz,origin,up);states.push(JSON.stringify({...e,remainder:0}));}
  assert.equal(states[0],states[1]);assert.equal(states[1],states[2]);
});

test('finite Tower flash stops new births, drains its tail, and a restored expired flash cannot restart',()=>{
  const level=JSON.parse(readFileSync(new URL('../data/levels/lvl04a/level.json',import.meta.url)));
  const entity=level.entities.find(e=>e.classname==='EffectSpoutEntity'&&e.DaviName==='flash');assert.ok(entity);
  const e=new NativeSpoutEffect(entity);tick(e,75);assert.equal(e.finished,true);assert.ok(e.particles.length>0);const births=e.serial;
  tick(e,180);assert.equal(e.particles.length,0);assert.equal(e.serial,births);
  tick(e,1,false);tick(e,60,true);assert.ok(e.serial>births);
  const restored=new NativeSpoutEffect(entity,{age:1.5});tick(restored,180);assert.equal(restored.serial,0);
});

test('colour cycling belongs to the emitter with the native half-second rate and channel mapping',()=>{
  const e=new NativeSpoutEffect({...base,ColourFrom:'0 20 40',ColourTo:'100 40 100',ColourCycling:1});
  tick(e,15);e.color.forEach(v=>close(v,50));assert.ok(e.particles.length>0);
  tick(e,16);assert.deepEqual(e.color,[100,40,100]);assert.equal(e.colorUp,false);
  const descending=new NativeSpoutEffect({...base,ColourFrom:'100 100 100',ColourTo:'0 0 0',ColourCycling:1});
  tick(descending,15);descending.color.forEach(v=>close(v,50));
});

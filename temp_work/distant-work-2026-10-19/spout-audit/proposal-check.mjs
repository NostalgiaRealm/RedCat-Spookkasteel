import {readFileSync,writeFileSync} from 'node:fs';
import * as THREE from 'three';
import {performance} from 'node:perf_hooks';
import {NativeSpoutEffect,SPOUT_STEP} from '../../../src/spout-effects.js';

const source=readFileSync(new URL('../../../src/spout-effects.js',import.meta.url),'utf8');
const optimizedSource=source.replace('this.ticks++;this.step(origin,direction);','this.ticks++;if(this.particles.length||this.enabled&&(!this.finished||this.cycling))this.step(origin,direction);');
if(source===optimizedSource)throw Error('Update-loop source pattern not found');
const {NativeSpoutEffect:Optimized}=await import('data:text/javascript;base64,'+Buffer.from(optimizedSource).toString('base64'));
const entities=[];
for(let i=0;i<5;i++)for(const e of JSON.parse(readFileSync(new URL(`../../../data/levels/lvl0${i}a/level.json`,import.meta.url))).entities)if(e.classname==='EffectSpoutEntity')entities.push(e);
let differentialFrames=0,clockNoWork=0;
const diffs=[];
for(let index=0;index<entities.length;index++){
  const a=new NativeSpoutEffect(entities[index],{seed:index+123}),b=new Optimized(entities[index],{seed:index+123});
  for(let frame=0;frame<1200;frame++){
    const enabled=frame<60||frame>=600&&frame<850,dt=[1/30,1/60,1/120,1/240,0,.25][frame%6];
    const origin=[Math.sin(frame/10)*100,Math.cos(frame/17)*20,-frame/7],direction=[Math.cos(frame/10),1,Math.sin(frame/10)],serial=frame>=750?2:1;
    a.update(dt,origin,direction,enabled,serial);b.update(dt,origin,direction,enabled,serial);differentialFrames++;
    if(JSON.stringify(a.snapshot())!==JSON.stringify(b.snapshot())){diffs.push({index,frame});break;}
    if(!enabled&&!b.particles.length)clockNoWork++;
  }
}
const entity={...entities.at(-1),LifeTimeSecs:0};
const make=Type=>Array.from({length:80},(_,i)=>{const e=new Type(entity,{seed:i+1});e.update(.1,[i*100,20,100],[0,1,0],false);return e;});
const speed=Type=>{const emitters=make(Type),origin=[1,2,3],direction=[0,1,0];const start=performance.now();for(let frame=0;frame<20000;frame++)for(const e of emitters)e.update(1/240,origin,direction,false);return performance.now()-start;};
speed(NativeSpoutEffect);speed(Optimized);
const measurements=[];for(let i=0;i<5;i++)measurements.push({reference:speed(NativeSpoutEffect),candidate:speed(Optimized)});
const report={authoredEmitters:entities.length,differentialFrames,clockNoWork,diffs,disabledEmptyMilliseconds:measurements};
writeFileSync(new URL('./proposal-check.json',import.meta.url),JSON.stringify(report,null,2)+'\n');console.log(JSON.stringify(report,null,2));

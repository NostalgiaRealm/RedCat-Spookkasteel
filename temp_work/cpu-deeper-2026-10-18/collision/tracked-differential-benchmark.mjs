import {readFileSync,writeFileSync} from 'node:fs';
import {pathToFileURL} from 'node:url';
import path from 'node:path';
import assert from 'node:assert/strict';
import {performance} from 'node:perf_hooks';
const root=path.resolve(import.meta.dirname,'../../..'), sourceRoot=path.join(root,'src');
const source=readFileSync(path.join(import.meta.dirname,'collision.before.js'),'utf8').replace(/from '(\.\/[^']+)'/g,(_,name)=>`from '${pathToFileURL(path.resolve(sourceRoot,name)).href}'`);
const {BspCollider:Before}=await import(`data:text/javascript;base64,${Buffer.from(source).toString('base64')}`);
const {BspCollider:After}=await import(pathToFileURL(path.join(sourceRoot,'collision.js')).href);
const {ModelTransformMap}=await import(pathToFileURL(path.join(sourceRoot,'model-transforms.js')).href);
let seed=0x4debc23;const random=()=>((seed=(Math.imul(seed,1664525)+1013904223)>>>0)/2**32);
const results=[];
for(const level of ['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a']) {
  const data=JSON.parse(readFileSync(path.join(root,'data/levels',level,'level.json'))).collision;
  const before=new Before(data),after=new After(data),indices=Object.freeze(data.models.map((_,i)=>i)),queries=[];
  for(let i=0;i<1200;i++) {
    const index=1+Math.floor(random()*(data.models.length-1)),model=data.models[index];
    const center=model.min.map((v,j)=>(v+model.max[j])*.5),start=center.map(v=>v+(random()-.5)*650);
    const end=i%9===0?[...start]:start.map(v=>v+(random()-.5)*(i%5?170:3000));
    queries.push([start,end,i%4?[-11,0,-11]:[0,0,0],i%4?[11,56,11]:[0,0,0],indices,false,[1,2,3,67][i%4]]);
  }
  let comparisons=0;
  const check=()=>{for(const args of queries){assert.deepEqual(after.trace(...args),before.trace(...args));comparisons++;}};
  check();
  for(let stage=0;stage<4;stage++) {
    const transforms=new Map();
    for(let i=1;i<data.models.length;i+=7) {
      const model=data.models[i],origin=model.min.map((v,j)=>(v+model.max[j])*.5),angle=random()*Math.PI*2;
      transforms.set(i,{origin,translation:[(random()-.5)*2000,(random()-.5)*400,(random()-.5)*2000],rotation:[0,Math.sin(angle/2),0,Math.cos(angle/2)]});
    }
    before.modelTransforms=new Map(transforms);after.modelTransforms=new ModelTransformMap(transforms);for(const c of [before,after])c.disabledModels=new Set(indices.filter(i=>i%11===stage));
    check();
    for(const [index,value] of transforms){value.translation[0]+=700;value.origin[2]-=5;value.rotation[1]*=.75;after.modelTransforms.set(index,value);}
    check();
    for(const [index,value] of [...transforms].slice(0,3)){before.modelTransforms.delete(index);after.modelTransforms.delete(index);check();before.modelTransforms.set(index,value);after.modelTransforms.set(index,value);}
    check();
  }
  for(const c of [before,after]){c.modelTransforms.clear();c.disabledModels.clear();}
  check();
  for(let i=1;i<data.models.length;i++)if(i%3){const m=data.models[i];const pose={origin:m.min.map((v,j)=>(v+m.max[j])*.5),translation:[0,0,0],rotation:[0,0,0,1]};before.modelTransforms.set(i,pose);after.modelTransforms.set(i,pose);}
  for(let i=0;i<2;i++)for(const c of [before,after])for(const args of queries)c.trace(...args);
  const times={before:[],after:[]};let checksum=0;
  for(let run=0;run<8;run++)for(const [name,c] of run%2?[['after',after],['before',before]]:[['before',before],['after',after]]) {
    const started=performance.now();for(let repeat=0;repeat<3;repeat++)for(const args of queries)checksum+=c.trace(...args).fraction;
    times[name].push(performance.now()-started);
  }
  const median=values=>[...values].sort((a,b)=>a-b)[values.length>>1],beforeMs=median(times.before),afterMs=median(times.after);
  results.push({level,models:indices.length,transformed:after.modelTransforms.size,comparisons,queriesPerRun:queries.length*3,beforeMs,afterMs,reductionPercent:(1-afterMs/beforeMs)*100,checksum,times});
  console.log(JSON.stringify(results.at(-1)));
}
writeFileSync(path.join(import.meta.dirname,'tracked-differential-benchmark.json'),JSON.stringify(results,null,2));

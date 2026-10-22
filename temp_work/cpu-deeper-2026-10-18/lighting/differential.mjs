import assert from 'node:assert/strict';
import fs from 'node:fs';
import {performance} from 'node:perf_hooks';
import {ActorWorldLighting as BeforeWorld} from '../before/src/actor-world-lighting.js';
import {ActorWorldLighting as AfterWorld} from '../../../src/actor-world-lighting.js';
import {sampleActorDynamicLights as beforeDynamic} from '../before/src/actor-light-sampling.js';
import {sampleActorDynamicLights as afterDynamic} from '../../../src/actor-light-sampling.js';
import {createActorFloorLighting as beforeFloor} from '../before/src/actor-floor-lighting.js';
import {createActorFloorLighting as afterFloor} from '../../../src/actor-floor-lighting.js';
import {ActorLightVisibility as BeforeVisibility} from '../before/src/actor-light-visibility.js';
import {ActorLightVisibility as AfterVisibility} from '../../../src/actor-light-visibility.js';

let seed=0x72636c74;
const random=()=>((seed=Math.imul(seed,1664525)+1013904223)>>>0)/4294967296;
const report={suns:[],dynamic:{},transforms:{}};
const fixtures=[];
for(let i=0;i<5;i++) {
  const level=JSON.parse(fs.readFileSync(new URL(`../../../data/levels/lvl0${i}a/level.json`,import.meta.url)));
  const before=new BeforeWorld(level.entities),after=new AfterWorld(level.entities);
  const authored=level.entities.filter(entity=>entity.Origin).map(entity=>entity.Origin.trim().split(/\s+/).map(Number)).filter(position=>position.length===3&&position.every(Number.isFinite));
  const queries=authored.map((point,index)=>({point,height:[0,32,57,80,128][index%5]}));
  for(let j=0;j<2000;j++) {
    const anchor=authored[Math.floor(random()*authored.length)];
    queries.push({point:anchor.map(value=>value+(random()-.5)*1600),height:random()*150});
  }
  // Challenge each Sun's exact range/cell endpoints, not only likely actor positions.
  for(const sun of before.suns)for(let axis=0;axis<3;axis++)for(const sign of [-1,1]) {
    if(sun.type===0)continue;
    const point=[...sun.position];point[axis]+=sign*sun.radius;
    queries.push({point,height:0});
  }
  let calls=0;
  for(const {point,height} of queries) {
    const a=[],b=[];
    const trace=list=>(_from,_to,entity)=>{list.push(entity);return level.entities.indexOf(entity)%7!==0;};
    assert.deepEqual(after.sample(point,height,trace(b)),before.sample(point,height,trace(a)));
    assert.deepEqual(b,a);calls+=a.length;
  }
  report.suns.push({level:level.id||`lvl0${i}a`,suns:before.suns.length,queries:queries.length,identicalVisibilityCalls:calls,cells:after.sunCells.size});
  fixtures.push({before,after,queries:queries.slice(0,3000)});
}

const lights=Array.from({length:128},(_,i)=>({position:Array.from({length:3},()=>random()*600-300),radius:400+random()*500,color:[random(),random(),random()],active:i%19!==0}));
let dynamicCases=0;
for(let i=0;i<2000;i++) {
  const position=Array.from({length:3},()=>random()*300-150),maximum=i%34;
  assert.deepEqual(afterDynamic(position,lights,maximum),beforeDynamic(position,lights,maximum));dynamicCases++;
}
for(const ArrayType of [Array,Float32Array,Float64Array])for(let maximum=0;maximum<=32;maximum++) {
  const typed=lights.map(light=>({...light,position:ArrayType===Array?light.position:new ArrayType(light.position),color:ArrayType===Array?light.color:new ArrayType(light.color)}));
  assert.deepEqual(afterDynamic([1/3,2/3,1/7],typed,maximum),beforeDynamic([1/3,2/3,1/7],typed,maximum));dynamicCases++;
}
report.dynamic.identicalCases=dynamicCases;

const collision={models:[{root:-1}],nodes:[],planes:[],leaves:[{contents:0}]};
const collider={data:collision,modelTransforms:new Map(Array.from({length:512},(_,i)=>[i,{origin:[i,2*i,3*i],translation:[0,0,0],rotation:[0,0,0,1]}])),disabledModels:new Set()};
const metadata={nodeFaces:[],faces:[],areaPortals:[],areas:[],leaves:[],clusters:[]};
const world={level:{collision},collider,physicalModels:[0],modelMeshes:new Map(),gameplay:{objects:[],scripts:{players:new Map()}}};
const bf=beforeFloor(collision,metadata,new Uint8Array(),collider),af=afterFloor(collision,metadata,new Uint8Array(),collider);
const bv=new BeforeVisibility(world,metadata,new Uint8Array()),av=new AfterVisibility(world,metadata,new Uint8Array());
for(let i=0;i<100;i++) {
  if(i%3===0)collider.modelTransforms.get(i).translation[0]=i;
  if(i%5===0)collider.modelTransforms.set(i,{translation:[i,0,0]});
  if(i%7===0)collider.disabledModels.add(i);
  if(i%11===0)collider.modelTransforms.delete(i);
  bf.beginFrame();af.beginFrame();bv.beginFrame();av.beginFrame();
  assert.deepEqual(av.transforms,bv.transforms);assert.equal(av.revision,bv.revision);
}
report.transforms.identicalMutatedFrames=100;

const median=values=>values.sort((a,b)=>a-b)[Math.floor(values.length/2)];
const bench=callback=>{const runs=[];for(let i=0;i<7;i++){const start=performance.now();callback();runs.push(performance.now()-start);}return median(runs.slice(2));};
for(let i=0;i<fixtures.length;i++) {
  const {before,after,queries}=fixtures[i];
  const run=lighting=>{for(let repeat=0;repeat<5;repeat++)for(const {point,height} of queries)lighting.sample(point,height);};
  const beforeMs=bench(()=>run(before)),afterMs=bench(()=>run(after));
  Object.assign(report.suns[i],{benchQueries:queries.length*5,beforeMs,afterMs,lessPercent:100*(1-afterMs/beforeMs)});
}
const runDynamic=sample=>{for(let i=0;i<30000;i++)sample([i%100,10,20],lights,2);};
const db=bench(()=>runDynamic(beforeDynamic)),da=bench(()=>runDynamic(afterDynamic));
Object.assign(report.dynamic,{benchQueries:30000,lights:128,beforeMs:db,afterMs:da,lessPercent:100*(1-da/db)});
const runFrames=(floor,visibility)=>{for(let i=0;i<10000;i++){floor.beginFrame();visibility.beginFrame();}};
const fb=bench(()=>runFrames(bf,bv)),fa=bench(()=>runFrames(af,av));
Object.assign(report.transforms,{benchFrames:10000,models:collider.modelTransforms.size,beforeMs:fb,afterMs:fa,lessPercent:100*(1-fa/fb)});
fs.writeFileSync(new URL('differential.json',import.meta.url),JSON.stringify(report,null,2)+'\n');
console.log(JSON.stringify(report,null,2));

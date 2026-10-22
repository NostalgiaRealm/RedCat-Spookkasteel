import fs from 'node:fs';
import assert from 'node:assert/strict';
import {pathToFileURL} from 'node:url';
import {BspCollider} from '../../../src/collision.js';
import {ModelTransformMap} from '../../../src/model-transforms.js';
import {createActorFloorLighting} from '../../../src/actor-floor-lighting.js';
import {ActorLightVisibility} from '../../../src/actor-light-visibility.js';

const root=new URL('../../../',import.meta.url);
const moduleURL=source=>'data:text/javascript;base64,'+Buffer.from(source).toString('base64');
const floorSource=fs.readFileSync(new URL('actor-floor-lighting-before.js',import.meta.url),'utf8')
  .replace("'./world-lighting.js'",JSON.stringify(new URL('src/world-lighting.js',root).href));
const floorURL=moduleURL(floorSource);
const beforeFloor=await import(floorURL);
const visibilitySource=fs.readFileSync(new URL('actor-light-visibility-before.js',import.meta.url),'utf8')
  .replace("'./bsp-visibility.js'",JSON.stringify(new URL('src/bsp-visibility.js',root).href))
  .replace("'./actor-floor-lighting.js'",JSON.stringify(floorURL));
const beforeVisibility=await import(moduleURL(visibilitySource));
let seed=0xcafefead;
const random=()=>((seed=(Math.imul(seed,1664525)+1013904223)>>>0)/4294967296);
const results=[];
for(let index=0;index<5;index++) {
  const base=new URL(`data/levels/lvl0${index}a/`,root),level=JSON.parse(fs.readFileSync(new URL('level.json',base)));
  const metadata=JSON.parse(fs.readFileSync(new URL(level.mesh.lightmap.actorFloorFile,base))),bytes=fs.readFileSync(new URL('lightmaps.bin',base));
  const actual=level.collision,emptyLeaf=actual.leaves.findIndex(leaf=>!(leaf.contents&67));
  const emptyWorld={...actual,models:[{...actual.models[0],root:-emptyLeaf-1},...actual.models.slice(1)]};
  const positions=level.entities.filter(e=>e.Origin).map(e=>e.Origin.trim().split(/\s+/).map(Number));
  const suns=level.entities.filter(e=>e.classname==='Sun'&&e.Origin).map(e=>e.Origin.trim().split(/\s+/).map(Number));
  const points=[];
  for(let i=0;i<1500;i++) {
    const p=positions[Math.floor(random()*positions.length)];
    points.push(p.map(v=>v+(random()-.5)*250));
  }
  let floorChecks=0,sunChecks=0,matchingFloorErrors=0;
  for(const collision of [actual,emptyWorld]) {
    const physicalModels=Object.freeze(collision.models.map((_,i)=>i));
    const colliders=[new BspCollider(collision),new BspCollider(collision)];
    for(const collider of colliders)collider.modelTransforms=new ModelTransformMap();
    const floors=[createActorFloorLighting(collision,metadata,bytes,colliders[0]),beforeFloor.createActorFloorLighting(collision,metadata,bytes,colliders[1])];
    const worlds=colliders.map(collider=>({level:{collision},collider,physicalModels}));
    const lights=[new ActorLightVisibility(worlds[0],{areaPortals:[]},new Uint8Array()),new beforeVisibility.ActorLightVisibility(worlds[1],{areaPortals:[]},new Uint8Array())];
    for(let phase=0;phase<3;phase++) {
      for(const collider of colliders) {
        collider.disabledModels.clear();
        for(let m=1;m<collision.models.length;m+=7) {
          const model=collision.models[m],origin=(model.min||[0,0,0]).map((v,i)=>(v+(model.max?.[i]||0))/2);
          if(phase===0)collider.modelTransforms.delete(m);
          else collider.modelTransforms.set(m,{origin,translation:[phase*40,phase*25,-phase*10],rotation:[Math.sin(phase*.2),0,0,Math.cos(phase*.2)]});
          if(phase===2&&m%3)collider.disabledModels.add(m);
        }
      }
      for(const floor of floors)floor.beginFrame();for(const light of lights)light.beginFrame();
      for(let i=0;i<points.length;i++) {
        const from=points[i],to=suns[i%suns.length];
        const locate=floor=>{try{return floor.locate(from);}catch(error){return {error:error.message};}};
        const located=floors.map(locate);assert.deepEqual(...located);if(located[0]?.error)matchingFloorErrors++;floorChecks++;
        assert.equal(lights[0].blocked(from,to),lights[1].blocked(from,to));sunChecks++;
      }
    }
  }
  results.push({level:level.id,floorChecks,sunChecks,matchingFloorErrors});
}
console.log(JSON.stringify({allExact:true,results},null,2));

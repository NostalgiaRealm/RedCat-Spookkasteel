import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import {createActorFloorLighting} from '../src/actor-floor-lighting.js';

const collision={models:[{root:0}],nodes:[[-1,-2,0]],planes:[[0,1,0,0]],leaves:[{contents:0},{contents:1}]};
const face=[0,0,0,64,0,64,1,0,0,0,0,1,-112,-112,0,0,5,5,0,0,0,0];
const fixture=(faces=[face],value=60)=>createActorFloorLighting(collision,
  {nodeFaces:[[0,faces.length]],faces},new Uint8Array(1+25*3).fill(value));

test('failed shifted floor coordinates recover the actual floor lightmap, retaining cache and cap',()=>{
  const sampler=fixture(),actor={};
  assert.deepEqual(sampler.sample([16,40,16],[],actor),[60/255,60/255,60/255]);
  assert.equal(sampler.locate([16,40,16],actor).recoveredTextureShift,true);
  const queries=sampler.stats.queries;
  for(let frame=0;frame<20;frame++)sampler.sample([16,40,16],[],actor);
  assert.equal(sampler.stats.queries,queries);
  assert.deepEqual(fixture([face],255).sample([16,40,16]),[.3,.3,.3]);
});

test('floor recovery preserves native matches and genuinely unlit or missing floors',()=>{
  const native=[...face];native[12]=native[13]=0;
  const sampler=fixture([face,native]);
  const surface=sampler.locate([16,40,16]);
  assert.equal(surface.index,1,'all native candidates take priority over recovery');
  assert.equal(surface.recoveredTextureShift,false);
  assert.deepEqual(fixture([face],0).sample([16,40,16]),[0,0,0]);
  const unlit=[...native];unlit[18]=-1;
  assert.deepEqual(fixture([unlit,face]).sample([16,40,16]),[0,0,0]);
  assert.equal(fixture().sample([16,-1,16]),null,'inside solid stays invalid');
  assert.equal(fixture().sample([16,30001,16]),null,'no floor within trace stays invalid');
  assert.equal(fixture().sample([-1,40,16]),null,'recovery cannot borrow light outside a face');
  const noLightmap=[...face];noLightmap[19]=32768;
  assert.equal(fixture([noLightmap]).sample([16,40,16]),null);
});

test('all authored hand torches have floor light and the six graveyard failures recover deterministically',()=>{
  let count=0;const recovered=[];
  for(let i=0;i<5;i++){
    const base=new URL(`../data/levels/lvl0${i}a/`,import.meta.url);
    const level=JSON.parse(fs.readFileSync(new URL('level.json',base)));
    const torches=level.entities.filter(e=>e.ActorFileName?.toLowerCase()==='htorch.act');
    if(!torches.length)continue;
    const metadata=JSON.parse(fs.readFileSync(new URL(level.mesh.lightmap.actorFloorFile,base)));
    const sampler=createActorFloorLighting(level.collision,metadata,fs.readFileSync(new URL('lightmaps.bin',base)));
    for(const entity of torches){
      const position=entity.Origin.trim().split(/\s+/).map(Number),ambient=sampler.sample(position,[],entity);
      assert.ok(ambient?.some(v=>v>0),`black hand torch: level ${i+1} ${entity['%name%']}`);
      assert.ok(ambient.every(v=>v>=0&&v<=.3));
      const surface=sampler.locate(position,entity);
      if(i===1)assert.equal(surface.recoveredTextureShift,false,'castle torches retain their native samples');
      if(i===2&&surface.recoveredTextureShift)recovered.push(entity['%name%']);
      count++;
    }
  }
  assert.equal(count,32);
  assert.deepEqual(recovered.sort(),['AdamAnyActor37','AdamAnyActor90','AdamAnyActor132','AdamAnyActor133','AdamAnyActor139','AdamAnyActor141'].sort());
});

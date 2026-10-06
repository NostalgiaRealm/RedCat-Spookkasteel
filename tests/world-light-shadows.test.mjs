import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import {WorldLightShadows,worldLightmapPlacements} from '../src/world-light-shadows.js';

// Floor Y=0 with a solid wall beyond X=24. Another solid submodel must never
// occlude the native world-only shadow ray.
const collision={models:[{root:0},{root:2}],nodes:[[1,-2,0],[-2,-1,1],[-2,-2,0]],
  planes:[[0,1,0,0],[1,0,0,24]],leaves:[{contents:0},{contents:1}]};
const face=[0,0,0,64,0,64,1,0,0,0,0,1,0,0,0,0,5,5,0,0,0,0];
const fixture=()=>new WorldLightShadows(collision,{faces:[face]},16,8);
const lamp=(key='lamp')=>({shadowKey:key,position:[0,20,0],radius:100,shadowRadius:120,castShadow:true});
const texel=(cache,x,y)=>cache.data[(y+1)*cache.width+x+5];

test('native world-only obstruction keeps visible luxels and rejects samples behind solid geometry',()=>{
  const cache=fixture(),light=lamp();assert.equal(cache.update([light]),true);
  assert.equal(texel(cache,0,0),0,'one-unit above-floor endpoint does not self-shadow');
  assert.equal(texel(cache,1,0),0,'solid brush submodel is not part of the trace');
  assert.equal(texel(cache,2,0),1,'static wall blocks the light');
  assert.equal(texel(cache,4,4),1);
  assert.ok(cache.stats.blocked>0);assert.ok(cache.stats.traces>cache.stats.blocked);
  assert.equal(cache.bit({...light,castShadow:false}),0);
});

test('window and clip contents block light, water and empty leaves do not',()=>{
  for(const [contents,blocked] of [[1,1],[2,1],[64,1],[0,0],[16,0]]) {
    const cache=new WorldLightShadows({...collision,leaves:[{contents:0},{contents}]},{faces:[face]},16,8);
    cache.update([lamp()]);assert.equal(texel(cache,2,0),blocked,`contents ${contents}`);
  }
});

test('atlas edges duplicate nearest sample without overwriting another light bit',()=>{
  const cache=fixture();cache.update([lamp('a'),lamp('b')]);
  assert.equal(texel(cache,2,0),3);
  for(let y=-1;y<=5;y++)for(let x=-1;x<=5;x++) {
    assert.equal(texel(cache,x,y),texel(cache,Math.max(0,Math.min(4,x)),Math.max(0,Math.min(4,y))));
  }
  assert.equal(cache.data[0],0,'reserved white sample stays unshadowed');
});

test('pulses, disabled lamps and renderer slot reorder reuse stable identity bits without traces',()=>{
  const cache=fixture(),a=lamp('a'),b=lamp('b');cache.update([a,b]);
  const before={...cache.stats},bytes=cache.data.slice();
  for(let i=0;i<240;i++)assert.equal(cache.update(i%2?[{...b,radius:90,color:[1,0,0]},{...a,radius:30}]:[]),false);
  assert.equal(cache.bit(b),2);assert.equal(cache.bit(a),1);
  assert.deepEqual(cache.stats,before);assert.deepEqual(cache.data,bytes);
});

test('moving a source or growing its radius rebuilds only that light, clears old obstruction',()=>{
  const cache=fixture(),a=lamp('a'),b=lamp('b');cache.update([a,b]);
  const old=cache.data.slice(),before=cache.stats.builds;
  assert.equal(cache.update([{...a,position:[1000,20,0],radius:1,shadowRadius:1},b]),true);
  assert.equal(cache.stats.builds,before+1);
  cache.data.forEach((value,i)=>{assert.equal(value&2,old[i]&2);assert.equal(value&1,0);});
  assert.equal(cache.update([{...b,shadowRadius:160}]),true);
  assert.equal(cache.stats.builds,before+2);
});

test('fullbright/Gouraud/no-lightmap faces are excluded and an unused bit can be recycled',()=>{
  const skipped=[2,32,32768].map(flag=>{const f=[...face];f[19]=flag;return f;});
  const noMap=[...face];noMap[18]=-1;
  assert.deepEqual(worldLightmapPlacements({faces:[...skipped,noMap,face]},16).map(t=>t.index),[4]);
  const cache=fixture(),lights=Array.from({length:8},(_,i)=>lamp(i));cache.update(lights);
  assert.equal(texel(cache,2,0),255);
  const replacement={...lamp(8),position:[1000,20,0],radius:1,shadowRadius:1};
  cache.update([...lights.slice(1),replacement]);assert.equal(cache.bit(replacement),1);
  assert.equal(texel(cache,2,0),254);assert.equal(cache.sources.has(0),false);
});

test('all five authored Tower light masks match independent native luxel audit and imported atlas UVs',()=>{
  const base=new URL('../data/levels/lvl04a/',import.meta.url),read=name=>JSON.parse(fs.readFileSync(new URL(name,base)));
  const level=read('level.json'),atlas=level.mesh.lightmap,metadata=read(atlas.actorFloorFile);
  const cache=new WorldLightShadows(level.collision,metadata,atlas.width,atlas.height);
  const lights=level.entities.filter(e=>e.classname==='DynamicLightEntity'&&Number(e.CastShadow)).map(e=>({
    shadowKey:e['%name%'],position:e.origin.split(/\s+/).map(Number),radius:Math.max(Number(e.RadiusA),Number(e.RadiusZ)),castShadow:true}));
  assert.equal(lights.length,5);assert.equal(cache.data.byteLength,262144);
  const counts=[];
  for(const light of lights){const before={...cache.stats};cache.update([light]);counts.push([cache.stats.traces-before.traces,cache.stats.blocked-before.blocked]);}
  assert.deepEqual(counts,[[393,206],[376,200],[407,211],[374,183],[1026,664]]);
  assert.equal(cache.stats.traces,2576);
  const visibility=JSON.parse(fs.readFileSync(new URL('../data/visibility/lvl04a.json',import.meta.url))),mesh=fs.readFileSync(new URL(level.mesh.file,base)),uv=fs.readFileSync(new URL(atlas.uvFile,base));
  const byFace=new Map(cache.placements.map(tile=>[tile.index,tile]));let checked=0;
  for(const [id,start,count] of visibility.faceSpans) {
    const tile=byFace.get(id);if(!tile)continue;
    for(let vertex=start;vertex<start+count;vertex++) {
      const p=[0,1,2].map(i=>mesh.readFloatLE((vertex*11+i)*4)),f=tile.face;
      const u=(tile.x+(p[0]*f[6]+p[1]*f[7]+p[2]*f[8]-f[14])/16+.5)/atlas.width;
      const v=(tile.y+(p[0]*f[9]+p[1]*f[10]+p[2]*f[11]-f[15])/16+.5)/atlas.height;
      assert.ok(Math.abs(uv.readFloatLE(vertex*8)-u)<1e-6);
      assert.ok(Math.abs(uv.readFloatLE(vertex*8+4)-v)<1e-6);checked++;
    }
  }
  assert.ok(checked>20000);
});

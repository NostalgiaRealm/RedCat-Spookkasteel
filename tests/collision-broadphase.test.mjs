import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {BspCollider} from '../src/collision.js';

function boxes(...bounds) {
  const data={planes:[],nodes:[],leaves:[{contents:0,numSides:0}],leafSides:[],models:[{root:-1}]};
  for(const [min,max] of bounds) {
    const firstSide=data.leafSides.length;
    for(let axis=0;axis<3;axis++)for(const sign of [1,-1]) {
      const normal=[0,0,0];normal[axis]=sign;
      data.leafSides.push([data.planes.length,0]);data.planes.push([...normal,sign*(sign>0?max[axis]:min[axis])]);
    }
    data.leaves.push({contents:1,firstSide,numSides:6,min,max});
    data.models.push({root:-data.leaves.length,min:[...min],max:[...max]});
  }
  return data;
}
function pair(data) {
  // Leave leaf bounds and narrow-phase geometry unchanged. Removing only
  // model metadata supplies the original, unpruned model traversal oracle.
  const unbounded={...data,models:data.models.map(({min,max,...model})=>model)};
  return [new BspCollider(data),new BspCollider(unbounded)];
}
function compare(colliders,...args) {
  const [actual,expected]=colliders.map(c=>c.trace(...args));
  assert.deepEqual(actual,expected);return actual;
}
const pose=(translation,angle=0,origin=[0,0,0])=>({translation,origin,rotation:[0,Math.sin(angle/2),0,Math.cos(angle/2)]});
const applyPose=(colliders,index,value)=>colliders.forEach(c=>c.modelTransforms.set(index,value));

test('broad phase preserves crossing, start-solid, zero-length and exact hull-boundary contacts',()=>{
  const colliders=pair(boxes([[-10,-10,-10],[10,10,10]])),mins=[-2,-2,-2],maxs=[2,2,2];
  for(const [start,end] of [
    [[30,0,0],[-30,0,0]],[[0,0,0],[1,0,0]],[[0,0,0],[30,0,0]],
    [[0,0,0],[0,0,0]],[[12,0,0],[12,0,0]],[[12,-30,0],[12,30,0]],
    [[12.000001,0,0],[12.000001,0,0]],[[30,30,30],[30,30,30]],
  ])compare(colliders,start,end,mins,maxs,[1]);
  assert.equal(compare(colliders,[12,0,0],[12,0,0],mins,maxs,[1]).startSolid,true);
  assert.equal(compare(colliders,[30,0,0],[-30,0,0],mins,maxs,[1]).modelIndex,1);
});

test('translated and rotated brush bounds follow replacement and in-place pose changes',()=>{
  const colliders=pair(boxes([[-10,-2,-3],[10,2,3]]));
  for(const [translation,angle,origin] of [
    [[100,20,-15],0,[0,0,0]],[[40,10,0],Math.PI/4,[10,0,0]],
    [[-70,14,80],Math.PI,[4,3,2]],[[0,0,0],-Math.PI/2,[10,0,0]],
  ]) {
    const transform=pose(translation,angle,origin);applyPose(colliders,1,transform);
    const center=translation.map((v,i)=>v+origin[i]);
    for(const axis of [0,1,2]) {
      const start=center.map((v,i)=>v+(i===axis?60:0)),end=center.map((v,i)=>v-(i===axis?60:0));
      compare(colliders,start,end,[-1,-5,-2],[3,4,2],[1]);
    }
    transform.translation[0]+=400;
    compare(colliders,[translation[0]+60,translation[1],translation[2]],translation,[-1,-5,-2],[3,4,2],[1]);
  }
});

test('collision leaf bounds extend undersized render metadata and missing bounds fall back',()=>{
  const data=boxes([[-10,-10,-10],[10,10,10]]);
  data.models[1].min=[-9,-9,-9];data.models[1].max=[9,9,9];
  const colliders=pair(data);
  assert.equal(compare(colliders,[9.5,0,0],[9.5,0,0],[0,0,0],[0,0,0],[1]).startSolid,true);
  assert.deepEqual(colliders[0].modelBounds[1],[[-10,-10,-10],[10,10,10]]);
  delete data.leaves[1].min;delete data.leaves[1].max;
  const missing=pair(data);assert.equal(missing[0].modelBounds[1],null);
  assert.equal(compare(missing,[9.5,0,0],[9.5,0,0],[0,0,0],[0,0,0],[1]).startSolid,true);
});

test('world exterior, disabled brushes and nearest-model ordering remain unchanged',()=>{
  const data=boxes([[-10,-10,-10],[10,10,10]],[[-10,-10,-10],[10,10,10]]);
  data.models[0]={root:-2,min:[-1,-1,-1],max:[1,1,1]};
  const colliders=pair(data);applyPose(colliders,0,pose([1000,0,0]));applyPose(colliders,1,pose([100,0,0]));applyPose(colliders,2,pose([150,0,0]));
  assert.equal(compare(colliders,[9,0,0],[9,0,0],undefined,undefined,[0]).startSolid,true);
  assert.equal(compare(colliders,[200,0,0],[50,0,0],undefined,undefined,[0,1,2]).modelIndex,2);
  colliders.forEach(c=>c.disabledModels.add(2));
  assert.equal(compare(colliders,[200,0,0],[50,0,0],undefined,undefined,[0,1,2]).modelIndex,1);
});

test('distant model rejection avoids narrow-phase leaf visits',()=>{
  const data=boxes(...Array.from({length:40},(_,i)=>[[i*100,-10,-10],[i*100+10,10,10]]));
  const collider=new BspCollider(data);let visits=0;
  collider.data={...data,leaves:new Proxy(data.leaves,{get(target,key,receiver){if(/^\d+$/.test(String(key)))visits++;return Reflect.get(target,key,receiver);}})};
  const hit=collider.trace([-20,0,0],[20,0,0],undefined,undefined,Array.from({length:40},(_,i)=>i+1));
  assert.equal(hit.modelIndex,1);assert.equal(visits,1,'only the nearby model enters the collision leaves');
});

const random=()=>{let seed=0x42bad123;return()=>{seed=(Math.imul(seed,1664525)+1013904223)>>>0;return seed/2**32;};};
test('bounded randomized rotated hull sweeps match unpruned traversal',()=>{
  const rnd=random(),colliders=pair(boxes([[-14,-6,-4],[11,9,5]],[[-3,-2,-15],[7,18,12]]));
  for(let i=0;i<400;i++) {
    for(let model=1;model<=2;model++)applyPose(colliders,model,pose(Array.from({length:3},()=>rnd()*100-50),rnd()*Math.PI*2,[7,-3,11]));
    const start=Array.from({length:3},()=>rnd()*200-100),end=i%8===0?[...start]:Array.from({length:3},()=>rnd()*200-100);
    compare(colliders,start,end,Array.from({length:3},()=>-rnd()*20),Array.from({length:3},()=>rnd()*20),[0,1,2]);
  }
});

for(const [levelId,indices] of [['lvl02a',[1,4,8,22,45,86,130]],['lvl03a',[1,11,34,57,81,108]]]) {
  test(`${levelId} authored collision matches unpruned traversal around static and moved models`,()=>{
    const data=JSON.parse(readFileSync(new URL(`../data/levels/${levelId}/level.json`,import.meta.url))).collision;
    const colliders=pair(data),rnd=random();
    for(const index of indices) {
      const model=data.models[index],center=model.min.map((v,i)=>(v+model.max[i])/2);
      for(let variant=0;variant<2;variant++) {
        const translation=variant?[81,-23,57]:[0,0,0];
        applyPose(colliders,index,pose(translation,variant?Math.PI*.37:0,center));
        for(let i=0;i<24;i++) {
          const start=center.map((v,axis)=>v+translation[axis]+(rnd()-.5)*300),end=i%6===0?[...start]:center.map((v,axis)=>v+translation[axis]+(rnd()-.5)*100);
          compare(colliders,start,end,[-11,0,-11],[11,56,11],[0,index]);
        }
      }
    }
  });
}

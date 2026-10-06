import test from 'node:test';
import assert from 'node:assert/strict';
import {Scene,Texture} from 'three';
import {PlayerShadow,playerShadowVertices} from '../src/player-shadow.js';
import {BspCollider} from '../src/collision.js';

const near=(a,b)=>a.forEach((v,i)=>assert.ok(Math.abs(v-b[i])<1e-6,`${a} != ${b}`));
const floor=(start,end)=>({fraction:start[1]/(start[1]-end[1]),end:[start[0],0,start[2]],normal:[0,1,0]});
function surfaces(){
  const data={planes:[],nodes:[],leaves:[{contents:0,numSides:0}],leafSides:[],models:[{root:-1}]};
  for(const [height,contents]of [[0,1],[40,64],[70,2]]){
    const min=[-100,height-5,-100],max=[100,height,100],firstSide=data.leafSides.length;
    for(let axis=0;axis<3;axis++)for(const sign of [1,-1]){
      const normal=[0,0,0];normal[axis]=sign;data.leafSides.push([data.planes.length,0]);
      data.planes.push([...normal,sign*(sign>0?max[axis]:min[axis])]);
    }
    data.leaves.push({contents,firstSide,numSides:6,min,max});data.models.push({root:-data.leaves.length,min,max});
  }
  return new BspCollider(data);
}

test('native shadow retains its 25-unit basis, template offsets and ground position through a jump',()=>{
  let ray;
  const vertices=playerShadowVertices([100,.05,200],(a,b)=>{ray=[a,b];return floor(a,b);});
  assert.deepEqual(ray,[[100,10.05,200],[100,-9999.95,200]]);
  [[74.5,1.8,175],[125.5,1.8,175],[125.5,.8,225],[74.5,.8,225]].forEach((v,i)=>near(vertices[i],v));
  assert.deepEqual(playerShadowVertices([100,150,200],floor),vertices);
});

test('sloped ground receives the native plane-aligned shadow rather than a horizontal floating sprite',()=>{
  const normal=[0,Math.SQRT1_2,Math.SQRT1_2],point=[10,20,30];
  const vertices=playerShadowVertices([10,80,30],()=>({fraction:.01,end:point,normal}));
  for(const [i,v]of vertices.entries()){
    const x=i===0||i===3?-1:1,y=i<2?1:-1;
    const planePoint=v.map((n,axis)=>n-point[axis]-(axis===0?x*.5:axis===1?y*.5:0));
    assert.ok(Math.abs(planePoint.reduce((sum,n,axis)=>sum+n*normal[axis],0)-1.3)<1e-8);
  }
});

test('missing ground, an invalid plane or a solid starting position cannot leave a floating shadow',()=>{
  for(const hit of [null,{fraction:1},{fraction:0,startSolid:true},{fraction:.1,normal:[0,0,0]},{fraction:.1,normal:[0,-1,0]}])
    assert.equal(playerShadowVertices([0,0,0],()=>hit),null);
});

test('shadow collision follows solid/window surfaces and moving platforms while skipping invisible clip hulls',()=>{
  const collider=surfaces(),start=[0,60,0],end=[0,-100,0];
  assert.equal(collider.trace(start,end,[0,0,0],[0,0,0],[0,1,2,3]).modelIndex,2,'normal movement still collides with clip');
  const shadowTrace=(a,b)=>collider.trace(a,b,[0,0,0],[0,0,0],[0,1,2,3],'blocksPlayer',3);
  assert.equal(shadowTrace(start,end).modelIndex,1);
  assert.equal(shadowTrace([0,100,0],end).modelIndex,3,'window contents are shadow receivers');
  collider.disabledModels.add(3);
  const before=playerShadowVertices([0,50,0],shadowTrace);
  collider.modelTransforms.set(1,{translation:[0,20,0]});
  const after=playerShadowVertices([0,50,0],shadowTrace);
  after.forEach((v,i)=>near(v,[before[i][0],before[i][1]+20,before[i][2]]));
  collider.disabledModels.add(1);assert.equal(playerShadowVertices([0,50,0],shadowTrace),null);
});

test('renderer reuses one mesh and the artwork alpha, hides with RedCat, and removes the shadow on disposal',()=>{
  const resources=[],calls=[],world={scene:new Scene(),track:r=>(resources.push(r),r),player:{position:[0,.05,0]},redcat:{visible:true},
    physicalModels:[0,1],gameplay:{scripts:{playerVisible:true}},collider:{trace(...args){calls.push(args);return floor(...args);}}};
  const shadow=new PlayerShadow(world,new Texture()),geometry=shadow.mesh.geometry,material=shadow.mesh.material;
  shadow.update();assert.equal(shadow.mesh.visible,true);assert.equal(material.opacity,1);assert.equal(material.depthWrite,false);assert.equal(material.depthTest,true);
  assert.deepEqual(Array.from(geometry.attributes.uv.array),[0,1,1,1,1,0,0,0]);
  assert.equal(calls[0][5],'blocksPlayer');assert.equal(calls[0][6],3);
  for(let i=0;i<120;i++)shadow.update();assert.equal(resources.length,2);assert.equal(shadow.mesh.geometry,geometry);
  world.redcat.visible=false;shadow.update();assert.equal(shadow.mesh.visible,false);
  world.redcat.visible=true;world.gameplay.scripts.playerVisible=false;shadow.update();assert.equal(shadow.mesh.visible,false);
  world.gameplay.scripts.playerVisible=true;shadow.update();assert.equal(shadow.mesh.visible,true);
  shadow.dispose();assert.equal(world.scene.children.length,0);resources.forEach(r=>r.dispose());
});

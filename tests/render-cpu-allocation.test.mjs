import test from 'node:test';
import assert from 'node:assert/strict';
import * as THREE from 'three';
import {BeamBatch,nearestWorldLights} from '../source/world-effects.js';
import {CastleWorld} from '../source/world.js';
import {createActorLighting} from '../source/actor-lighting.js';

function batch(capacity=32) {
  return new BeamBatch({scene:new THREE.Scene(),track:resource=>resource},null,capacity);
}
function dispose(value) {value.mesh.geometry.dispose();value.mesh.material.dispose();}

// Retain the previous calculation as a differential reference, including
// Float32 conversion and the ribbon-specific UV/per-vertex colour overrides.
function previousPoints(points,color,opacity,uvStart=0,uvEnd=1,uvs=null,colors=null) {
  const positions=[],tints=[],texcoords=[];
  for(let i=0;i<6;i++) {
    positions.push(...points[i].toArray());tints.push(...(colors?.[i]||color),opacity);
    texcoords.push(uvs?.[i][0]??[0,1,0,1,1,0][i],uvs?.[i][1]??[uvStart,uvStart,uvEnd,uvStart,uvEnd,uvEnd][i]);
  }
  return [positions,tints,texcoords].map(values=>new Float32Array(values));
}
function previousRay(ray,camera,cameraDirection=null,uvs=null) {
  const start=new THREE.Vector3(...ray.start),end=new THREE.Vector3(...ray.end);
  const side=new THREE.Vector3().crossVectors(end.clone().sub(start),cameraDirection||camera.clone().sub(start));
  if(side.lengthSq()<1e-10)side.set(1,0,0);side.normalize().multiplyScalar(ray.width/2);
  const points=[start.clone().sub(side),start.clone().add(side),end.clone().sub(side),start.clone().add(side),end.clone().add(side),end.clone().sub(side)];
  return previousPoints(points,ray.color,ray.opacity,ray.uvStart,ray.uvEnd,uvs);
}
function checkBuffers(value,expected) {
  for(const [index,name] of ['positions','colors','uvs'].entries()) {
    const packed=Float32Array.from(expected.flatMap(row=>Array.from(row[index])));
    assert.deepEqual(value[name].array.subarray(0,packed.length),packed,name);
  }
}

test('beam scratch vectors preserve exact previous vertices, colours and ribbon UVs across consecutive rays',()=>{
  const value=batch(32),expected=[],camera=new THREE.Vector3(17,-8,23);
  const ribbonUvs=[[0,1],[0,0],[1,1],[0,0],[1,0],[1,1]];
  const rays=[
    {start:[1,2,3],end:[9,-2,13],width:5,color:[.2,.6,1],opacity:.7},
    {start:[0,0,0],end:[0,0,0],width:9,color:[1,0,.4],opacity:1,uvStart:-.3,uvEnd:2.4},
    {start:[1,2,3],end:[4,2,3],width:0,color:[0,1,.2],opacity:0},
    {start:[1,2,3],end:[1,9,3],width:-3,color:[1,1,1],opacity:.3},
  ];
  for(let i=0;i<20;i++)rays.push({start:[i*.13,-i,i+7],end:[-i*2.3,2+i*.11,4-i],width:i/3,color:[i/20,.3,.7],opacity:.8,uvStart:i*.1,uvEnd:i*.2});
  const inputs=structuredClone(rays),cameraBefore=camera.clone(),direction=new THREE.Vector3(1,0,0);
  try {
    for(const [i,ray] of rays.entries()) {
      const toward=i%2?direction:null,uvs=i%3?ribbonUvs:null;
      expected.push(previousRay(ray,camera,toward,uvs));value.add(ray,camera,toward,uvs);
    }
    checkBuffers(value,expected);assert.equal(value.count,rays.length);
    assert.deepEqual(rays,inputs);assert.deepEqual(camera,cameraBefore);assert.deepEqual(direction.toArray(),[1,0,0]);
  } finally {dispose(value);}
});

test('discs and custom coloured quads preserve earlier batch data, capacity and upload state',()=>{
  const value=batch(3),expected=[];
  const points=Array.from({length:6},(_,i)=>new THREE.Vector3(i+.25,i*2,-i));
  const colors=Array.from({length:6},(_,i)=>[i/6,.2,1-i/6]);
  const customUv=[[0,0],[.1,.2],[.3,.4],[.5,.6],[.7,.8],[.9,1]];
  try {
    expected.push(previousPoints(points,[1,1,1],.25,-1,3,customUv,colors));
    // Uploading direct coordinates must not allocate via Vector3.toArray.
    for(const point of points)point.toArray=()=>{throw Error('unexpected vector array allocation');};
    value.addPoints(points,[1,1,1],.25,-1,3,customUv,colors);
    for(const radius of [5,-2]) {
      const position=[2,3,4];
      expected.push(previousPoints([[-1,-1],[1,-1],[-1,1],[1,-1],[1,1],[-1,1]].map(([a,b])=>new THREE.Vector3(position[0]+a*radius,position[1],position[2]+b*radius)),[.3,.2,.1],.6));
      value.addDisc(position,radius,[.3,.2,.1],.6);
    }
    value.addDisc([90,90,90],20,[1,0,0],1);
    value.add({start:[0,0,0],end:[1,2,3],width:5,color:[1,1,1],opacity:1},new THREE.Vector3());
    value.addPoints(points,[0,0,0],1);assert.equal(value.count,3);checkBuffers(value,expected);
    const versions=[value.positions.version,value.colors.version,value.uvs.version];value.flush();
    assert.equal(value.mesh.geometry.drawRange.count,18);assert.equal(value.mesh.visible,true);
    assert.deepEqual([value.positions.version,value.colors.version,value.uvs.version],versions.map(version=>version+1));
    value.count=0;value.flush();assert.equal(value.mesh.visible,false);assert.equal(value.mesh.geometry.drawRange.count,0);
    value.addDisc([0,0,0],0,[1,1,1],1);assert.equal(value.count,1);
    checkBuffers(value,[previousPoints(Array.from({length:6},()=>new THREE.Vector3()),[1,1,1],1)]);
  } finally {dispose(value);}
});

const previousNearest=(lights,camera,playerLight,maximum=8)=>lights.filter(light=>light.radius>0)
  .sort((a,b)=>Number(b===playerLight)-Number(a===playerLight)||camera.distanceToSquared(new THREE.Vector3(...a.position))-camera.distanceToSquared(new THREE.Vector3(...b.position)))
  .slice(0,maximum);

test('precomputed light distances retain stable ties, player priority, eligibility and eight-light limit',()=>{
  const lights=[...Array.from({length:12},(_,i)=>({position:[i%2?1:-1,0,0],radius:100,id:i})),
    {position:[0,0,0],radius:0},{position:[0,0,0],radius:-1},{position:[0,0,0],radius:NaN}];
  const player={position:[1000,1000,1000],radius:300};lights.push(player);
  const original=[...lights],camera=new THREE.Vector3();
  assert.deepEqual(nearestWorldLights(lights,camera,player),[player,...lights.slice(0,7)]);
  assert.deepEqual(nearestWorldLights(lights,camera),lights.slice(0,8));
  for(const maximum of [0,1,8,30])assert.deepEqual(nearestWorldLights(lights,camera,player,maximum),previousNearest(lights,camera,player,maximum));
  assert.deepEqual(lights,original);
});

test('light order matches previous calculation after camera, light position and radius changes',()=>{
  const lights=Array.from({length:40},(_,i)=>({position:[Math.sin(i)*500,Math.cos(i)*100,i*13-100],radius:i%4?500:0}));
  const camera=new THREE.Vector3();
  for(let frame=0;frame<30;frame++) {
    camera.set(frame*13,frame-10,-frame*9);lights[frame].position[0]+=17;lights[frame].radius=500;
    assert.deepEqual(nearestWorldLights(lights,camera,lights[39]),previousNearest(lights,camera,lights[39]));
  }
});

function expectedMatrix(object) {
  const matrix=new THREE.Matrix4();
  for(let node=object;node;node=node.parent)matrix.premultiply(new THREE.Matrix4().compose(node.position,node.quaternion,node.scale));
  return matrix;
}
test('actor lighting reads freshly updated scene matrices for mounted parts and debris without ancestor refreshes',()=>{
  const scene=new THREE.Scene(),parent=new THREE.Group(),mount=new THREE.Group();scene.add(parent);parent.add(mount);
  parent.position.set(20,30,-40);parent.rotation.set(.2,.3,.4);parent.scale.set(2,.7,1.4);
  mount.position.set(3,-2,9);mount.rotation.set(-.1,.7,.2);
  const makeMesh=()=>{const mesh=new THREE.Mesh(new THREE.BoxGeometry(2,4,6),new THREE.MeshLambertMaterial());mesh.userData.actorLighting=createActorLighting({});mesh.userData.actorLighting.floorRecoveryBounds=new Float64Array(6);return mesh;};
  const mounted=makeMesh(),debris=makeMesh(),hidden=makeMesh(),culled=makeMesh();
  mount.add(mounted);scene.add(debris,hidden,culled);mounted.position.set(1,2,3);debris.position.set(-6,7,8);hidden.visible=false;
  const meshes=[mounted,debris,hidden,culled],samples=[],lights=[];let sceneUpdates=0;
  const originalUpdate=scene.updateMatrixWorld;scene.updateMatrixWorld=function(force){sceneUpdates++;return originalUpdate.call(this,force);};
  for(const mesh of meshes)mesh.getWorldPosition=()=>{throw Error('redundant per-actor ancestor update');};
  const world={scene,gameplay:{time:2},actorResidency:{isRendered:mesh=>mesh!==culled},
    actorFloorLighting:{beginFrame(){},sample(position,passedLights,state,bounds){assert.equal(passedLights,lights);samples.push({position:[...position],state,bounds:[...bounds]});return [.1,.2,.3];}},
    actorWorldLighting:{sample(){return null;}},actorLightVisibility:{beginFrame(){}}};
  try {
    for(let frame=0;frame<2;frame++) {
      parent.position.x+=11;parent.rotation.y+=.2;mount.position.y+=3;debris.position.z-=5;samples.length=0;
      CastleWorld.prototype.syncActorLighting.call(world,lights);assert.equal(sceneUpdates,frame+1);assert.equal(samples.length,2);
      for(const mesh of [mounted,debris]) {
        const sample=samples.find(row=>row.state===mesh.userData.actorLighting),matrix=expectedMatrix(mesh);
        const position=new THREE.Vector3().setFromMatrixPosition(matrix).toArray();
        for(let i=0;i<3;i++)assert.ok(Math.abs(sample.position[i]-position[i])<1e-10);
        const bounds=mesh.geometry.boundingBox.clone().applyMatrix4(matrix),expected=[...bounds.min.toArray(),...bounds.max.toArray()];
        for(let i=0;i<6;i++)assert.ok(Math.abs(sample.bounds[i]-expected[i])<1e-10);
        assert.deepEqual(mesh.userData.actorLighting.uniforms.actorAmbient.value.toArray(),[.1,.2,.3]);
      }
    }
  } finally {for(const mesh of meshes){mesh.geometry.dispose();mesh.material.dispose();}}
});

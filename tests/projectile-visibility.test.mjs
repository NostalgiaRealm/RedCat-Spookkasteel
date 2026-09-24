import test from 'node:test';
import assert from 'node:assert/strict';
import {PerspectiveCamera,Texture} from 'three';
import {CastleWorld} from '../src/world.js';
import {projectileVisibilityScale,PROJECTILE_VISIBILITY} from '../src/projectile-visibility.js';

test('readability grows small distant shots without shrinking close sprites or unbounded growth',()=>{
  const projection=1/Math.tan(60*Math.PI/360);
  assert.equal(projectileVisibilityScale(25.6,120,projection),1);
  const scale=projectileVisibilityScale(9.6,600,projection);
  assert.ok(scale>1&&scale<2.5);
  assert.ok(Math.abs(9.6*scale*projection/(2*600)-24/1080)<1e-9);
  assert.equal(projectileVisibilityScale(6.4,10000,projection),2.5);
  assert.equal(projectileVisibilityScale(6.4,-10,projection),1);
  const trailScale=projectileVisibilityScale(6.4,1200,projection,'trail');
  assert.ok(Math.abs(6.4*trailScale*projection/(2*1200)-PROJECTILE_VISIBILITY.trail)<1e-9);
});

test('rendering preserves projectile physics and frame state and uses current camera depth',()=>{
  const camera=new PerspectiveCamera(60,16/9,1,15000),texture=new Texture();
  const projectile={id:'bone',kind:'bone',position:[0,0,-1200],age:.12,spriteScale:.8,radius:4.8,velocity:[0,0,200],damage:1,life:5};
  const before=structuredClone(projectile),resources=new Set();
  const world=Object.assign(Object.create(CastleWorld.prototype),{camera,gameplay:{projectiles:[projectile]},resources,
    scene:{add(){},remove(){}},projectileStyles:new Map([['bone',{textures:[texture],width:25.6,height:25.6,nativeScale:.8,framesPerSecond:20}]]),track:r=>(resources.add(r),r)});
  world.syncProjectiles();const mesh=world.projectileMeshes.get('bone');assert.ok(mesh.scale.x>25.6);
  assert.deepEqual(projectile,before);assert.equal(mesh.material.depthTest,true);assert.equal(mesh.material.depthWrite,false);
  camera.position.z=-1100;world.syncProjectiles();assert.equal(mesh.scale.x,25.6);
  assert.equal(mesh.scale.x,mesh.scale.y);assert.deepEqual(projectile,before);
  world.gameplay.projectiles=[];world.syncProjectiles();assert.equal(world.projectileMeshes.size,0);
});

test('ribbon readability only changes rendered width, retaining native contact geometry and fade',()=>{
  const camera=new PerspectiveCamera(60,16/9,1,15000),resources=new Set();camera.updateMatrixWorld();
  const segment={id:'ribbon',from:[-10,0,-1200],to:[10,0,-1200],width:6.4,color:[255,255,127],opacity:.8,age:.75,life:1.5};
  const before=structuredClone(segment);
  const world=Object.assign(Object.create(CastleWorld.prototype),{camera,gameplay:{hazards:{segments:[segment]}},resources,trailTexture:new Texture(),
    scene:{add(){},remove(){}},track:r=>(resources.add(r),r)});
  world.syncHazards();const mesh=world.hazardMeshes.get('ribbon'),v=mesh.geometry.attributes.position.array;
  const width=Math.hypot(v[3]-v[0],v[4]-v[1],v[5]-v[2]);
  assert.ok(width>6.4&&width<16);assert.equal(mesh.material.opacity,.4);
  assert.ok(mesh.material.depthTest);assert.deepEqual(segment,before);
  camera.position.z=-1100;world.syncHazards();
  assert.ok(Math.abs(Math.abs(mesh.geometry.attributes.position.getY(1)-mesh.geometry.attributes.position.getY(0))-6.4)<1e-5);
  world.gameplay.hazards.segments=[];world.syncHazards();assert.equal(world.hazardMeshes.size,0);
});

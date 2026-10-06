import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import * as THREE from 'three';
import {CastleWorld,triggerOnlyModels} from '../src/world.js';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';
import {BspCollider} from '../src/collision.js';
import {createActorFloorLighting,traceActorFloorBsp} from '../src/actor-floor-lighting.js';

const json=path=>JSON.parse(fs.readFileSync(new URL('../'+path,import.meta.url)));
const newAssets=new Set(['kandela.act','cross5.act','pbench.act']);
const point=entity=>entity.Origin.trim().split(/\s+/).map(Number);
const close=(actual,expected)=>actual.forEach((value,index)=>assert.ok(Math.abs(value-expected[index])<1e-8,`${actual} != ${expected}`));
function template(world,source) {
  const data=json(`assets/actors/${source.replace(/\.act$/i,'')}.json`);
  const geometry=world.track(new THREE.BufferGeometry());
  geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));
  geometry.setAttribute('normal',new THREE.Float32BufferAttribute(data.normals,3));
  geometry.setIndex(data.indices);
  return {data,geometry,materials:[]};
}
function levelScene(id,{knights=false}={}) {
  const base=`data/levels/${id}/`,level=json(base+'level.json');
  const world=new CastleWorld({},{});world.level=level;
  world.gameplay=new Gameplay(level,{deferInit:true});world.collider=new BspCollider(level.collision);
  const scripts=new ScriptHost(world.gameplay,json(`data/davi/${id}.json`),{motions:json(`data/motions/${id}.json`)});
  const names=new Map(level.entities.filter(e=>e.classname==='%Model%').map(e=>[e['%name%'],Number(e.Model)])),triggers=triggerOnlyModels(level.entities,names);
  world.physicalModels=level.collision.models.map((_,index)=>index).filter(index=>!triggers.has(index));
  world.actorFloorLighting=createActorFloorLighting(level.collision,json(base+level.mesh.lightmap.actorFloorFile),fs.readFileSync(new URL('../'+base+level.preserved.lightmaps,import.meta.url)),world.collider);
  const templates=new Map(),actors=[];
  for(const object of world.gameplay.objects.filter(object=>knights?object.enemyType==='knight':newAssets.has(object.entity.ActorFileName?.toLowerCase()))) {
    const entity=object.entity,source=knights?'knight.act':entity.ActorFileName.toLowerCase();
    if(!templates.has(source))templates.set(source,template(world,source));
    const actor=world.instantiateActor(templates.get(source),{entity,
      scale:Number(entity.Scale)>0?Number(entity.Scale):undefined,
      rotation:['X','Y','Z'].map(axis=>Number(entity['Rotate'+axis]||0))});
    actor.position.fromArray(point(entity));world.scene.add(actor);world.actorInstances.set(entity['%name%'],actor);
    actors.push({entity,actor,source,state:actor.userData.mesh.userData.actorLighting});
  }
  scripts.initialize();world.syncModels();world.syncActors(0);
  assert.deepEqual(scripts.errors,[]);
  return {world,level,actors};
}

test('buried-floor recovery opts in only confirmed decorative assets and standing knights',()=>{
  const world=new CastleWorld({},{});
  try {
    for(const source of ['tree.act',...newAssets]) {
      const asset=template(world,source);
      const decorative=world.instantiateActor(asset,{entity:{classname:'AdamAnyActor'}});
      assert.equal(decorative.userData.mesh.userData.actorLighting.floorRecoveryBounds.length,6,source);
      for(const entity of [undefined,{classname:'StandingEnemy'},{classname:'MovingEnemy'},{classname:'ItemLife'}]) {
        const actor=world.instantiateActor(asset,{entity});
        assert.equal(actor.userData.mesh.userData.actorLighting.floorRecoveryBounds,undefined,`${source}: recovery must be decorative opt-in`);
      }
    }
    for(const source of ['witch.act','maxd.act','redcat.act','knight.act','guardian.act','cannball_rol.act','rol_rots.act','mirror_stndrd.act','twig.act']) {
      const actor=world.instantiateActor(template(world,source),{entity:{classname:'AdamAnyActor'}});
      assert.equal(actor.userData.mesh.userData.actorLighting.floorRecoveryBounds,undefined,source);
    }
    const knight=template(world,'knight.act');
    assert.equal(world.instantiateActor(knight,{entity:{classname:'StandingEnemy'}}).userData.mesh.userData.actorLighting.floorRecoveryBounds.length,6);
    for(const entity of [undefined,{classname:'MovingEnemy'},{classname:'AdamAnyActor'}])
      assert.equal(world.instantiateActor(knight,{entity}).userData.mesh.userData.actorLighting.floorRecoveryBounds,undefined);
    assert.equal(world.instantiateActor(template(world,'guardian.act'),{entity:{classname:'MovingEnemy'}}).userData.mesh.userData.actorLighting.floorRecoveryBounds,undefined);
  } finally {world.dispose();}
});

test('ten buried standing knights recover while twelve original samples and animated-pose caches remain intact',()=>{
  const {world,level,actors}=levelScene('lvl01a',{knights:true}),sampler=world.actorFloorLighting,recovered=[],unchanged=[];
  try {
    for(const row of actors) {
      row.position=row.actor.position.toArray();row.quaternion=row.actor.quaternion.toArray();
      row.baseline=sampler.sample(row.position);row.nativeSurface=sampler.locate(row.position);
      row.setup=row.state.bounds.clone();
    }
    world.syncActorLighting();
    for(const row of actors) {
      const {actor,state,entity,position}=row,ambient=state.uniforms.actorAmbient.value.toArray();
      const surface=sampler.locate(position,state,state.floorRecoveryBounds);
      assert.equal(entity.classname,'StandingEnemy');assert.equal(state.settings.lighting.useAmbient,true);
      row.ambient=ambient;row.bounds=Array.from(state.floorRecoveryBounds);
      if(row.baseline===null) {
        assert.equal(position[1],86,'the buried knight roots remain at their authored height');
        const hit=traceActorFloorBsp(level.collision,position,[position[0],position[1]-30000,position[2]]);
        assert.equal(hit?.solid,true);assert.equal(hit.node,undefined);
        assert.ok(ambient.some(value=>value>0));assert.ok(ambient.every(value=>value>=0&&value<=.3));
        assert.ok(surface.point[1]>=87&&surface.point[1]<87.1,'the adjacent authored floor lies about one unit above the root');
        const bounds=row.bounds,box=new THREE.Box3(new THREE.Vector3(...bounds.slice(0,3)),new THREE.Vector3(...bounds.slice(3)));
        assert.ok(box.containsPoint(new THREE.Vector3(...surface.probePosition)));
        recovered.push(entity['%name%']);
      } else {
        assert.deepEqual(ambient,row.baseline);assert.deepEqual(surface,row.nativeSurface);unchanged.push(entity['%name%']);
      }
    }
    const queries=sampler.stats.queries,visits=sampler.stats.nodeVisits;
    for(let frame=0;frame<60;frame++)world.syncActorLighting();
    for(const motion of ['idle','shoot1'])for(let frame=0;frame<20;frame++) {
      for(const {actor} of actors) {
        const animator=actor.userData.animator;assert.equal(animator.play(motion),true);
        animator.time=frame*.08;animator.update(0);
      }
      world.syncActorLighting();
    }
    assert.equal(sampler.stats.queries,queries,'idle and attack animation add no stationary floor queries');
    assert.equal(sampler.stats.nodeVisits,visits,'animation adds no BSP traversal');
    for(const {actor,state,position,quaternion,setup,bounds,ambient} of actors) {
      assert.deepEqual(actor.position.toArray(),position);assert.deepEqual(actor.quaternion.toArray(),quaternion);
      assert.deepEqual(state.bounds,setup);assert.deepEqual(Array.from(state.floorRecoveryBounds),bounds);
      assert.deepEqual(state.uniforms.actorAmbient.value.toArray(),ambient);
    }
    assert.deepEqual(recovered.sort(),[1,2,3,4,5,13,14,15,16,17].map(id=>`StandingEnemy${id}`).sort());
    assert.equal(unchanged.length,12);assert.equal(actors.length,22);
  } finally {world.dispose();}
});

test('production actor lighting recovers the 27 buried decorations and preserves every valid sample across all five levels',()=>{
  const recovered=[],unchanged=[],all=[];
  for(let index=0;index<5;index++) {
    const {world,level,actors}=levelScene(`lvl0${index}a`),sampler=world.actorFloorLighting;
    try {
      for(const row of actors) {
        row.original={position:row.actor.position.toArray(),quaternion:row.actor.quaternion.toArray(),scale:row.actor.userData.mesh.scale.toArray()};
        row.baseline=sampler.sample(row.original.position);
        row.nativeSurface=sampler.locate(row.original.position);
      }
      world.syncActorLighting();
      for(const row of actors) {
        const {entity,actor,state,original,baseline}=row,id=`${level.id}/${entity['%name%']}`;
        const ambient=state.uniforms.actorAmbient.value.toArray(),bounds=Array.from(state.floorRecoveryBounds);
        assert.equal(entity.classname,'AdamAnyActor');
        assert.equal(state.settings.lighting.useAmbient,true);
        assert.deepEqual(actor.position.toArray(),original.position,`${id}: position unchanged`);
        assert.deepEqual(actor.quaternion.toArray(),original.quaternion,`${id}: orientation unchanged`);
        assert.deepEqual(actor.userData.mesh.scale.toArray(),original.scale,`${id}: scale unchanged`);
        const surface=sampler.locate(original.position,state,bounds);
        if(baseline!==null) {
          assert.deepEqual(ambient,baseline,`${id}: retain the original floor color`);
          assert.deepEqual(surface,row.nativeSurface,`${id}: retain the original floor and luxel`);
          assert.equal(surface.probePosition,undefined);unchanged.push(id);
        } else {
          assert.equal(entity.Model||'','','confirmed buried props are not mounted on scripted brushes');
          const hit=traceActorFloorBsp(level.collision,original.position,[original.position[0],original.position[1]-30000,original.position[2]]);
          assert.equal(hit?.solid,true,`${id}: reproduces a buried root`);assert.equal(hit.node,undefined);
          assert.ok(ambient.some(value=>value>0),id);assert.ok(ambient.every(value=>value>=0&&value<=.3),id);
          const box=new THREE.Box3(new THREE.Vector3(...bounds.slice(0,3)),new THREE.Vector3(...bounds.slice(3)));
          assert.ok(box.containsPoint(new THREE.Vector3(...surface.probePosition)),`${id}: probe stays within the prop`);
          assert.equal(surface.model,0);recovered.push(id);
        }
        all.push(id);
      }
      // This bench uses imported Z-up geometry, 90-degree entity yaw, and
      // its INI scale 2.5. The cache must contain the transformed setup box.
      const bench=actors.find(row=>level.id==='lvl02a'&&row.entity['%name%']==='AdamAnyActor11');
      if(bench)close(Array.from(bench.state.floorRecoveryBounds),[906.7032778263092,-65.00000001862645,1982.2086024284363,946.7643213272095,-12.982363700866692,2058.4361600875854]);
      const queries=sampler.stats.queries,visits=sampler.stats.nodeVisits;
      for(let frame=0;frame<60;frame++)world.syncActorLighting();
      assert.equal(sampler.stats.queries,queries,`${level.id}: stationary props add no floor searches`);
      assert.equal(sampler.stats.nodeVisits,visits,`${level.id}: stationary props add no BSP traversal`);
    } finally {world.dispose();}
  }
  const expected=['lvl02a/AdamAnyActor11',...[232,233,234,235].map(id=>`lvl02a/AdamAnyActor${id}`),...Array.from({length:22},(_,i)=>`lvl04a/AdamAnyActor${26+i}`)];
  assert.deepEqual(recovered.sort(),expected.sort());assert.equal(unchanged.length,106);assert.equal(all.length,133);
});

test('production recovery keeps its setup bounds during geometry animation but invalidates on transformed placement',()=>{
  const {world,actors}=levelScene('lvl02a'),row=actors.find(row=>row.entity['%name%']==='AdamAnyActor11');
  try {
    world.syncActorLighting();
    const {actor,state}=row,sampler=world.actorFloorLighting,mesh=actor.userData.mesh;
    const bounds=Array.from(state.floorRecoveryBounds),setup=state.bounds.clone(),ambient=state.uniforms.actorAmbient.value.toArray();
    const queries=sampler.stats.queries;
    // Animation can change geometry bounds after setup; native lighting uses
    // the cached setup box so a stationary pose change cannot move its sample.
    mesh.geometry.boundingBox.expandByScalar(100);
    world.syncActorLighting();
    assert.deepEqual(Array.from(state.floorRecoveryBounds),bounds);
    assert.deepEqual(state.bounds,setup);assert.deepEqual(state.uniforms.actorAmbient.value.toArray(),ambient);
    assert.equal(sampler.stats.queries,queries);
    actor.position.x+=1;world.syncActorLighting();
    close(Array.from(state.floorRecoveryBounds),bounds.map((value,i)=>i===0||i===3?value+1:value));
    assert.ok(sampler.stats.queries>queries,'world transform changes invalidate the old floor result');
    const changedQueries=sampler.stats.queries;
    for(let frame=0;frame<20;frame++)world.syncActorLighting();
    assert.equal(sampler.stats.queries,changedQueries,'the new transformed pose is stationary and cached again');
  } finally {world.dispose();}
});

test('hidden or nonresident buried props skip lighting work and recover when rendered again',()=>{
  const {world,actors}=levelScene('lvl02a'),row=actors.find(row=>row.entity['%name%']==='AdamAnyActor11');
  try {
    for(const {actor} of actors)actor.visible=false;
    const {actor,state}=row,sampler=world.actorFloorLighting,untouched=[.07,.08,.09];
    state.uniforms.actorAmbient.value.fromArray(untouched);
    const queries=sampler.stats.queries,visits=sampler.stats.nodeVisits;
    world.actorResidency={isRendered:()=>true,dispose(){}};
    world.syncActorLighting();
    assert.equal(sampler.stats.queries,queries);assert.equal(sampler.stats.nodeVisits,visits);
    assert.deepEqual(state.uniforms.actorAmbient.value.toArray(),untouched,'invisible actors skip uniform updates');

    actor.visible=true;world.actorResidency.isRendered=()=>false;
    world.syncActorLighting();
    assert.equal(sampler.stats.queries,queries);assert.equal(sampler.stats.nodeVisits,visits);
    assert.deepEqual(state.uniforms.actorAmbient.value.toArray(),untouched,'nonresident meshes skip uniform updates');

    world.actorResidency.isRendered=()=>true;world.syncActorLighting();
    assert.ok(sampler.stats.queries>queries,'the visible resident prop obtains its floor sample');
    assert.deepEqual(state.uniforms.actorAmbient.value.toArray(),[.3,.3,.3]);
    const recoveredQueries=sampler.stats.queries;
    actor.visible=false;state.uniforms.actorAmbient.value.fromArray(untouched);world.syncActorLighting();
    assert.deepEqual(state.uniforms.actorAmbient.value.toArray(),untouched);
    actor.visible=true;world.syncActorLighting();
    assert.deepEqual(state.uniforms.actorAmbient.value.toArray(),[.3,.3,.3]);
    assert.equal(sampler.stats.queries,recoveredQueries,'visibility changes reuse the stationary cached surface');
  } finally {world.dispose();}
});

import fs from 'node:fs';
import path from 'node:path';
import {fileURLToPath} from 'node:url';
import * as THREE from 'three';
import {CastleWorld,actorVisible,triggerOnlyModels} from '../../src/world.js';
import {Gameplay} from '../../src/gameplay.js';
import {ScriptHost} from '../../src/script-host.js';
import {BspCollider} from '../../src/collision.js';
import {ActorStateAnimator} from '../../src/animation.js';
import {ActorWorldLighting} from '../../src/actor-world-lighting.js';
import {ActorLightVisibility} from '../../src/actor-light-visibility.js';
import {createActorFloorLighting} from '../../src/actor-floor-lighting.js';
const out=path.dirname(fileURLToPath(import.meta.url)),repo=path.resolve(out,'../..');
const read=p=>JSON.parse(fs.readFileSync(path.join(repo,p)));
const audit=read('current_work/buried-actor-lighting-2026-10-05/audit.json');
const candidates=audit.records.filter(r=>['knight.act','guardian.act'].includes(r.asset)&&r.poses.initialized.candidate);
const report={scope:'Offline production actor setup, exact Sun visibility, floor sampler, and enemy update paths. No dynamic lights, renderer, or camera visibility. Active simulations call updateEnemy directly after script initialization to isolate normal locomotion from cutscene freezes.',records:[]};
for(const record of candidates)for(const scenario of ['far','near']){
  const id=record.level,base=`data/levels/${id}/`,level=read(base+'level.json');
  const game=new Gameplay(level,{deferInit:true}),host=new ScriptHost(game,read(`data/davi/${id}.json`),{motions:read(`data/motions/${id}.json`)});
  const world=new CastleWorld({},{});world.level=level;world.gameplay=game;world.collider=new BspCollider(level.collision);
  const names=new Map(level.entities.filter(e=>e.classname==='%Model%').map(e=>[e['%name%'],Number(e.Model)])),triggers=triggerOnlyModels(level.entities,names);
  world.physicalModels=level.collision.models.map((_,i)=>i).filter(i=>!triggers.has(i));
  const object=game.objects.find(o=>o.id===record.id),data=read('assets/actors/'+record.asset.replace('.act','.json')),geometry=world.track(new THREE.BufferGeometry());
  geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));geometry.setAttribute('normal',new THREE.Float32BufferAttribute(data.normals,3));geometry.setIndex(data.indices);
  const actor=world.instantiateActor({data,geometry,materials:[]},{entity:object.entity,scale:Number(object.entity.Scale)>0?Number(object.entity.Scale):undefined});
  world.scene.add(actor);world.actorInstances.set(object.id,actor);const mesh=actor.userData.mesh,state=mesh.userData.actorLighting;
  actor.userData.stateAnimator=new ActorStateAnimator(actor.userData.animator,object.stats);object.animationDurations={...actor.userData.stateAnimator.durations};
  mesh.updateMatrix();mesh.geometry.computeBoundingBox();const rest=mesh.geometry.boundingBox.clone().applyMatrix4(mesh.matrix),radius=Math.max(12,Math.min(24,Math.max(Math.abs(rest.min.x),Math.abs(rest.max.x),Math.abs(rest.min.z),Math.abs(rest.max.z))));
  object.collisionMins=[-radius,0,-radius];object.collisionMaxs=[radius,Math.max(16,rest.max.y),radius];
  host.initialize();world.collider.modelTransforms=host.modelTransforms;world.syncModelStates();world.syncActors(0);
  const player=scenario==='far'?[...level.spawn.position]:object.position.map((v,i)=>v+(i===2?120:0));
  object.recoverySafePosition=p=>{
    const mins=object.collisionMins,maxs=object.collisionMaxs;
    if(world.collider.contents(p,mins,maxs,world.physicalModels)&0x60000)return false;
    const overlaps=(q,lo,hi)=>p.every((v,i)=>v+maxs[i]+2>q[i]+lo[i]&&v+mins[i]-2<q[i]+hi[i]);
    if(overlaps(player,[-11,0,-11],[11,56,11]))return false;
    return !game.objects.some(other=>other!==object&&other.kind==='enemy'&&other.enabled&&other.visible&&other.health>0&&overlaps(other.position,other.collisionMins||[-12,0,-12],other.collisionMaxs||[12,45,12]));
  };
  world.actorFloorLighting=createActorFloorLighting(level.collision,read(base+level.mesh.lightmap.actorFloorFile),fs.readFileSync(path.join(repo,base+level.preserved.lightmaps)),world.collider);
  world.actorWorldLighting=new ActorWorldLighting(level.entities);world.actorLightVisibility=new ActorLightVisibility(world,read(`data/visibility/${id}.json`),fs.readFileSync(path.join(repo,`data/visibility/${id}.bin`)));
  const sample=()=>{
    world.syncActors(0);world.scene.updateMatrixWorld(true);world.actorLightVisibility.beginFrame();world.actorFloorLighting.beginFrame();
    const bounds=state.bounds.clone().applyMatrix4(mesh.matrixWorld),root=mesh.getWorldPosition(new THREE.Vector3()).toArray(),floorBounds=[...bounds.min.toArray(),...bounds.max.toArray()];
    const base=world.actorFloorLighting.sample(root),recovered=world.actorFloorLighting.sample(root,[],null,floorBounds);
    const sun=world.actorWorldLighting.sample(root,bounds.max.y-bounds.min.y,(a,b,e)=>world.actorLightVisibility.visible(a,b,e));
    const normals=mesh.geometry.getAttribute('normal'),normalMatrix=new THREE.Matrix3().getNormalMatrix(mesh.matrixWorld);let black=0;
    for(let i=0;i<normals.count;i++){const n=new THREE.Vector3().fromBufferAttribute(normals,i).applyMatrix3(normalMatrix).normalize();const fill=sun?Math.max(0,n.dot(new THREE.Vector3(...sun.normal)))*Math.max(...sun.color)/255:0;if(fill+Math.max(...(base||[0,0,0]))<1e-8)black++;}
    return {time:game.time,position:[...object.position],visible:actorVisible(object,game.time),enabled:object.enabled,animation:object.animationState,grounded:object.grounded||false,velocityY:object.velocityY||0,recoveries:object.movementRecovery?.recoveries||0,baseline:base,recovered,surface:world.actorFloorLighting.locate(root,null,floorBounds)?.point||null,sun:sun&&{name:sun.entity['%name%'],color:sun.color,normal:sun.normal},zeroLitNormalVertices:black,normalVertices:normals.count};
  };
  const initial=sample(),snapshots=[initial];let firstClear=null;
  const trace=(a,b,mins,maxs,o)=>world.collider.trace(a,b,mins,maxs,world.physicalModels,{mask:'blocksPlayer',ignoreId:o?.id});
  const visible=(a,b)=>world.collider.trace(a,b,[0,0,0],[0,0,0],world.physicalModels,'blocksLOS').fraction>.98;
  for(let frame=1;frame<=300;frame++){
    game.time=frame/60;game.navigation.beginFrame?.(game.time);game.updateEnemy(object,1/60,player,visible,trace);world.syncActors(1/60);
    if(firstClear===null&&world.actorFloorLighting.sample(object.position)!==null)firstClear=frame/60;
    if([1,12,30,60,180,300].includes(frame))snapshots.push(sample());
  }
  report.records.push({level:id,id:object.id,enemyType:object.enemyType,scenario,initialScriptFreeze:host.enemiesFrozen||false,cutscene:host.cutscene||false,player,firstClear,snapshots});world.dispose();
}
fs.writeFileSync(path.join(out,'enemy-lighting-review.json'),JSON.stringify(report,null,2)+'\n');
console.log(JSON.stringify(report.records.map(r=>({level:r.level,id:r.id,scenario:r.scenario,firstClear:r.firstClear,initial:r.snapshots[0],final:r.snapshots.at(-1)})),null,2));

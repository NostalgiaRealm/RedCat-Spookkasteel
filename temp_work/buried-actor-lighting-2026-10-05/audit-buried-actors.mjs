#!/usr/bin/env node
// Offline audit. Writes only beside this file; imports production setup/lighting code.
import fs from 'node:fs';
import path from 'node:path';
import crypto from 'node:crypto';
import {fileURLToPath} from 'node:url';
import * as THREE from 'three';
import {CastleWorld,actorVisible,triggerOnlyModels} from '../../src/world.js';
import {Gameplay} from '../../src/gameplay.js';
import {ScriptHost} from '../../src/script-host.js';
import {BspCollider} from '../../src/collision.js';
import {placeSpider} from '../../src/enemy-ambush.js';
import {attachedActorVisible} from '../../src/actor-placement.js';
import {createActorFloorLighting,traceActorFloorBsp,inverseModelTransform} from '../../src/actor-floor-lighting.js';
const out=path.dirname(fileURLToPath(import.meta.url)),repo=path.resolve(out,'../..');
const read=p=>JSON.parse(fs.readFileSync(path.join(repo,p))),stem=p=>p?.replace(/^.*[\\/]/,'').replace(/\.act$/i,'').toLowerCase();
const v3=p=>String(p||'0 0 0').trim().split(/\s+/).map(Number);
const hash=p=>crypto.createHash('sha256').update(fs.readFileSync(path.join(repo,p))).digest('hex');
const compactSurface=s=>s&&({model:s.model,index:s.index,point:s.point,luxel:s.luxel,base:s.base,recoveredTextureShift:s.recoveredTextureShift,probePosition:s.probePosition||null});
function probeList(bounds){const [x0,y0,z0,x1,y1,z1]=bounds,x=(x0+x1)/2,y=y0+(y1-y0)*.25,z=(z0+z1)/2;return [[x,y,z],[x0,y,z],[x1,y,z],[x,y,z0],[x,y,z1]];}
function resolvedTrace(level,collider,position){
  const end=[position[0],position[1]-30000,position[2]];
  let hit=traceActorFloorBsp(level.collision,position,end),model=0;
  if(!hit)for(model=1;model<level.collision.models.length;model++){
    if(collider.disabledModels.has(model))continue;
    const inverse=inverseModelTransform(collider.modelTransforms.get(model)),a=inverse?inverse(position):position,b=inverse?inverse(end):end;
    const box=collider.modelBounds[model];if(box&&box[0].some((v,i)=>v>Math.max(a[i],b[i])||box[1][i]<Math.min(a[i],b[i])))continue;
    hit=traceActorFloorBsp(level.collision,a,b,level.collision.models[model].root);if(hit)break;
  }
  return hit?{...hit,model}:null;
}
const report={format:'buried-actor-floor-lighting-audit-v1',generated:new Date().toISOString(),scope:'All entity-backed actor meshes, authored origin and fresh initialized state, all five imported levels. Setup bounds and asset transforms use CastleWorld.instantiateActor; initialized transforms use syncActors(0). Temporary projectiles/debris and auxiliary Dungeon Max machine meshes are excluded.',method:'For each pose: native baseline locate/sample; require the first world/brush trace to start solid (no crossed node), baseline null, and explicit existing five-point recovery in transformed cached setup bounds to return a valid sample. No dynamic lights. Legitimate zero-valued lightmaps remain valid.',sourceHashes:Object.fromEntries(['src/actor-floor-lighting.js','src/world.js','src/actor-placement.js','src/gameplay.js'].map(p=>[p,hash(p)])),levels:[],records:[]};
const manifest=read('assets/actors/manifest.json').actors;
for(let i=0;i<5;i++){
  const id=`lvl0${i}a`,base=`data/levels/${id}/`,level=read(base+'level.json'),metadata=read(base+level.mesh.lightmap.actorFloorFile);
  const game=new Gameplay(level,{deferInit:true}),host=new ScriptHost(game,read(`data/davi/${id}.json`),{motions:read(`data/motions/${id}.json`)});
  const world=new CastleWorld({},{});world.level=level;world.gameplay=game;world.collider=new BspCollider(level.collision);
  const names=new Map(level.entities.filter(e=>e.classname==='%Model%').map(e=>[e['%name%'],Number(e.Model)])),triggers=triggerOnlyModels(level.entities,names);
  world.physicalModels=level.collision.models.map((_,j)=>j).filter(j=>!triggers.has(j));
  const templates=new Map(),records=new Map(),missing=[];
  for(const object of game.objects){
    const name=stem(object.actorFile);if(!name)continue;
    const entry=manifest[name];if(!entry){missing.push({id:object.id,name});continue;}
    let template=templates.get(name);
    if(!template){const data=read('assets/actors/'+entry.file),geometry=world.track(new THREE.BufferGeometry());geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));geometry.setAttribute('normal',new THREE.Float32BufferAttribute(data.normals,3));geometry.setIndex(data.indices);template={data,geometry,materials:[]};templates.set(name,template);}
    const entity=object.entity,actor=world.instantiateActor(template,{entity,scale:Number(entity.Scale)>0?Number(entity.Scale):undefined,rotation:['X','Y','Z'].map(k=>Number(entity['Rotate'+k]||0))});
    actor.position.fromArray(v3(entity.Origin));world.scene.add(actor);world.actorInstances.set(object.id,actor);
    const lighting=template.data.settings?.lighting||{};
    const record={level:id,id:object.id,daviName:entity.DaviName||null,classname:entity.classname,kind:object.kind,enemyType:object.enemyType||null,asset:name+'.act',modelName:entity.Model||null,modelIndex:object.modelIndex??null,controllers:(game.modelObjects.get(object.modelIndex)||[]).filter(o=>['controller','button','door'].includes(o.kind)).map(o=>({id:o.id,daviName:o.entity.DaviName,enabled:o.enabled,visible:o.visible,initialPosition:o.entity.InitialPosition})),isInitiallyEnabled:entity.IsInitiallyEnabled??null,active:entity.Active??null,settings:{scale:actor.userData.mesh.scale.x,initialRotationDegrees:template.data.settings?.initialRotationDegrees||[-90,0,0],rotationDegreesPerSecond:template.data.settings?.rotationDegreesPerSecond,lighting,useAmbient:lighting.useAmbient!==false,ownUseAmbient:Object.hasOwn(lighting,'useAmbient')},entity,poses:{}};
    records.set(object.id,record);
  }
  const sampleStage=(stage)=>{
    world.scene.updateMatrixWorld(true);const sampler=createActorFloorLighting(level.collision,metadata,fs.readFileSync(path.join(repo,base+level.preserved.lightmaps)),world.collider);
    for(const object of game.objects){const actor=world.actorInstances.get(object.id);if(!actor)continue;
      const mesh=actor.userData.mesh,state=mesh.userData.actorLighting,box=state.bounds.clone().applyMatrix4(mesh.matrixWorld),bounds=[...box.min.toArray(),...box.max.toArray()],position=mesh.getWorldPosition(new THREE.Vector3()).toArray();
      const baseline=sampler.sample(position),hit=resolvedTrace(level,world.collider,position),startsSolid=Boolean(hit&&hit.node===undefined),recovered=startsSolid&&baseline===null?sampler.sample(position,[],null,bounds):null;
      const record=records.get(object.id);record.poses[stage]={position,bounds,rotation:actor.quaternion.toArray(),enabled:object.enabled,visible:actorVisible(object,game.time)&&attachedActorVisible(object,game),health:object.health,ambush:object.ambush?JSON.parse(JSON.stringify(object.ambush)):null,boss:object.boss?{phase:object.boss.phase,hidden:object.boss.hidden,home:[...object.boss.home]}:null,baseline,trace:hit,startsSolid,candidate:startsSolid&&baseline===null&&recovered!==null,recovered,probeCount:null,surface:null};
      if(startsSolid&&baseline===null){const pose=record.poses[stage];pose.probes=probeList(bounds).map(point=>({point,sample:sampler.sample(point),surface:compactSurface(sampler.locate(point))}));pose.probeCount=pose.probes.findIndex(p=>p.sample!==null)+1||5;pose.surface=compactSurface(sampler.locate(position,null,bounds));}
    }
  };
  // Authored stage has original roots and rotations, and untransformed brush models.
  sampleStage('authored');
  // Reproduce actor collision hull setup needed by spider initializer.
  for(const object of game.objects){const actor=world.actorInstances.get(object.id);if(!actor||object.kind!=='enemy')continue;const mesh=actor.userData.mesh;mesh.updateMatrix();mesh.geometry.computeBoundingBox();const box=mesh.geometry.boundingBox.clone().applyMatrix4(mesh.matrix),radius=Math.max(12,Math.min(24,Math.max(Math.abs(box.min.x),Math.abs(box.max.x),Math.abs(box.min.z),Math.abs(box.max.z))));object.collisionMins=[-radius,0,-radius];object.collisionMaxs=[radius,Math.max(16,box.max.y),radius];if(object.enemyType==='spider')placeSpider(game,object,(a,b,mins,maxs)=>world.collider.trace(a,b,mins,maxs,world.physicalModels,null));}
  host.initialize();world.collider.modelTransforms=host.modelTransforms;world.syncModelStates();world.syncActors(0);sampleStage('initialized');
  const rows=[...records.values()];report.records.push(...rows);report.levels.push({id,totalActorInstances:rows.length,missing,scriptErrors:host.errors,authoredCandidates:rows.filter(r=>r.poses.authored.candidate).length,initializedCandidates:rows.filter(r=>r.poses.initialized.candidate).length,initializedVisibleCandidates:rows.filter(r=>r.poses.initialized.candidate&&r.poses.initialized.visible).length});world.dispose();
}
report.assets=Object.values(report.records.reduce((all,r)=>{const v=all[r.asset]??={asset:r.asset,total:0,authoredCandidates:[],initializedCandidates:[],initializedVisibleCandidates:[],ambientEnabled:r.settings.useAmbient};v.total++;for(const stage of ['authored','initialized'])if(r.poses[stage].candidate)v[stage+'Candidates'].push(`${r.level}/${r.id}`);if(r.poses.initialized.candidate&&r.poses.initialized.visible)v.initializedVisibleCandidates.push(`${r.level}/${r.id}`);return all;},{})).filter(r=>r.authoredCandidates.length||r.initializedCandidates.length).sort((a,b)=>b.initializedCandidates.length-a.initializedCandidates.length||a.asset.localeCompare(b.asset));
fs.writeFileSync(path.join(out,'audit.json'),JSON.stringify(report,null,2)+'\n');
const candidates=report.records.filter(r=>r.asset!=='tree.act'&&r.kind==='actor'&&r.settings.useAmbient&&r.poses.initialized.candidate);
const exclusions={
  gameplayActorCandidates:report.records.filter(r=>r.kind==='enemy'&&r.poses.initialized.candidate),
  ambientDisabledCandidates:report.records.filter(r=>!r.settings.useAmbient&&r.poses.initialized.candidate),
  resolvedByInitialization:report.records.filter(r=>r.poses.authored.candidate&&!r.poses.initialized.candidate),
  unrecoverableSolidOrigins:report.records.filter(r=>r.poses.initialized.startsSolid&&!r.poses.initialized.candidate),
  disabledGraveOrWitchSpawns:report.records.filter(r=>['zombie','witch'].includes(r.enemyType)&&!r.poses.initialized.visible),
  cinematicDoubles:report.records.filter(r=>r.kind==='actor'&&['redcat.act','maxd.act','witch.act'].includes(r.asset)),
};
fs.writeFileSync(path.join(out,'non-tree-decoration-candidates.json'),JSON.stringify({scope:report.scope,count:candidates.length,records:candidates},null,2)+'\n');
fs.writeFileSync(path.join(out,'excluded-actors.json'),JSON.stringify(exclusions,null,2)+'\n');
const lines=['# Buried actor floor-lighting audit','',report.scope,'',report.method,'','| Asset | Total | Authored candidates | Initialized candidates | Initially visible candidates | Ambient enabled |','| --- | ---: | ---: | ---: | ---: | --- |',...report.assets.map(a=>`| ${a.asset} | ${a.total} | ${a.authoredCandidates.length} | ${a.initializedCandidates.length} | ${a.initializedVisibleCandidates.length} | ${a.ambientEnabled} |`),'','Full entities, controller attachments, exact poses, five probe results, and asset settings are retained in `audit.json`.','', 'Run from any directory with `node '+path.join(out,'audit-buried-actors.mjs')+'`.'];
fs.writeFileSync(path.join(out,'audit.md'),lines.join('\n')+'\n');console.log(JSON.stringify({levels:report.levels,assets:report.assets.map(a=>({asset:a.asset,total:a.total,authored:a.authoredCandidates.length,initialized:a.initializedCandidates.length,visible:a.initializedVisibleCandidates.length,ambient:a.ambientEnabled}))},null,2));

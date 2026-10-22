import fs from 'node:fs';
import * as THREE from 'three';
import {ActorAnimator} from '../../src/animation.js';
const vec=s=>String(s||'0 0 0').split(/\s+/).map(Number);
const report={};
for(let n=0;n<5;n++){
 const id='lvl0'+n+'a',level=JSON.parse(fs.readFileSync(`data/levels/${id}/level.json`));
 const flames=level.entities.filter(e=>e.classname==='EffectSpoutEntity'&&/flame/i.test(e.BitmapFileName));
 const lights=level.entities.filter(e=>e.classname==='DynamicLightEntity');
 const coronas=level.entities.filter(e=>e.classname==='EffectCoronaEntity');
 const fixtures=level.entities.filter(e=>/^(htorch|torch|trchstl)\.act$/i.test(e.ActorFileName||''));
 report[id]={total:fixtures.length,flames:flames.length,lights:lights.length,fixtures:[]};
 for(const e of fixtures){
  const stem=e.ActorFileName.replace('.act',''),data=JSON.parse(fs.readFileSync(`assets/actors/${stem}.json`));
  const mesh=new THREE.Object3D(),root=new THREE.Object3D();mesh.rotation.set(...data.settings.initialRotationDegrees.map(v=>v*Math.PI/180));
  mesh.scale.setScalar(Number(e.Scale)>0?Number(e.Scale):data.settings.scale);root.rotation.set(...['X','Y','Z'].map(a=>Number(e['Rotate'+a]||0)*Math.PI/180),'ZYX');root.position.fromArray(vec(e.Origin));root.add(mesh);root.updateMatrixWorld(true);
  let tip;
  if(stem==='htorch') {const geo=new THREE.BufferGeometry();geo.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));const anim=new ActorAnimator(data,geo);anim.play('anim');const bone=anim.transforms[3];tip=[bone[9],bone[10],bone[11]];}
  else {const highest=data.bounds.max[2],points=[];for(let i=0;i<data.positions.length;i+=3)if(data.positions[i+2]>highest-.05)points.push(data.positions.slice(i,i+3));const unique=[...new Map(points.map(p=>[p.join(','),p])).values()];tip=[0,1,2].map(i=>unique.reduce((a,p)=>a+p[i],0)/unique.length);}
  const world=mesh.localToWorld(new THREE.Vector3(...tip)).toArray();
  const nearest=arr=>arr.map(f=>({id:f['%name%'],name:f.DaviName,distance:Math.hypot(...vec(f.Origin||f.origin).map((p,i)=>p-world[i])),origin:vec(f.Origin||f.origin),entity:f})).sort((a,b)=>a.distance-b.distance).slice(0,2);
  report[id].fixtures.push({id:e['%name%'],name:e.DaviName,actor:e.ActorFileName,origin:vec(e.Origin),tip:world,scale:mesh.scale.x,rotation:e.RotateY,flames:nearest(flames),lights:nearest(lights),coronas:nearest(coronas)});
 }
}
fs.writeFileSync('current_work/torch-flames-2026-10-05/inventory.json',JSON.stringify(report,null,2));
for(const [id,r]of Object.entries(report)){
 const types={};for(const f of r.fixtures){const g=types[f.actor]??={count:0,flameWithin16:0,flameWithin32:0,flameWithin64:0,missing:[]};g.count++;for(const lim of[16,32,64])if(f.flames[0]?.distance<lim)g['flameWithin'+lim]++;if((f.flames[0]?.distance??Infinity)>=32)g.missing.push([f.id,f.name,f.flames[0]?.distance]);}
 console.log(id,JSON.stringify(types));
}

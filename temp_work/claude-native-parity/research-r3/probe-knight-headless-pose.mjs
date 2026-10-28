// Scratch probe: sample knight BONE01 without geometry/WebGL and compare
// with the renderer's THREE mesh.localToWorld path. Read-only.
import fs from 'node:fs';
import path from 'node:path';
import * as THREE from 'three';
import {ActorAnimator} from '../../../source/animation.js';
const root=path.resolve(path.dirname(decodeURIComponent(new URL(import.meta.url).pathname)),'../../..');
const data=JSON.parse(fs.readFileSync(path.join(root,'assets/actors/knight.json'),'utf8'));
const lean={bones:data.bones,animations:data.animations,settings:data.settings};
const a=new ActorAnimator(lean,null);a.deferGeometry=true;a.play('shoot1',false,true);
const idx=lean.bones.findIndex(b=>b.name.toUpperCase()==='BONE01');
const s=data.settings.scale,rx=data.settings.initialRotationDegrees[0]*Math.PI/180;
function headless(b,pos,yaw){ // world = T(pos) Ry(yaw) Rx(rx) S(s) * t
  let x=b[9]*s,y=b[10]*s,z=b[11]*s;
  const c=Math.cos(rx),sn=Math.sin(rx);[y,z]=[y*c-z*sn,y*sn+z*c];
  const cy=Math.cos(yaw),sy=Math.sin(yaw);[x,z]=[x*cy+z*sy,-x*sy+z*cy];
  return [x+pos[0],y+pos[1],z+pos[2]];
}
const group=new THREE.Group(),mesh=new THREE.Object3D();mesh.rotation.set(rx,0,0);mesh.scale.setScalar(s);group.add(mesh);
const pos=[100,20,-50],yaw=0.7;group.position.fromArray(pos);group.rotation.y=yaw;group.updateMatrixWorld(true);
let maxErr=0;
for(let t=0;t<=2.6;t+=0.2){a.time=t;a.sampledClip=null;a.update(0);const b=a.transforms[idx];
  const h=headless(b,pos,yaw),w=mesh.localToWorld(new THREE.Vector3(b[9],b[10],b[11])).toArray();
  maxErr=Math.max(maxErr,...h.map((v,i)=>Math.abs(v-w[i])));
  console.log(t.toFixed(1),h.map(v=>v.toFixed(2)).join(' '));}
console.log('max |headless - three| =',maxErr,' geometry flushed:',a.geometryPending===true?'no':'?');

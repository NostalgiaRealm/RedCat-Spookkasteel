// Extends retained redcat pose/sample_rebuild.mjs, with all nonplayer actors.
import fs from 'node:fs';import path from 'node:path';import {fileURLToPath} from 'node:url';
import * as THREE from 'three';import {ActorAnimator} from '../../../src/animation.js';
const here=path.dirname(fileURLToPath(import.meta.url)),root=path.resolve(here,'../../..');
const inventory=JSON.parse(fs.readFileSync(path.join(here,'assets-report.json')));
const output=fs.openSync(path.join(here,'rebuild-samples.jsonl'),'w');let samples=0;
for(const row of inventory.actors.filter(a=>a.motionCount&&a.actor!=='redcat')){
 const data=JSON.parse(fs.readFileSync(path.join(root,'assets/actors',row.actor+'.json')));
 const geometry=new THREE.BufferGeometry();geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));geometry.setAttribute('normal',new THREE.Float32BufferAttribute(data.normals,3));const animator=new ActorAnimator(data,geometry);
 for(const clip of data.animations){animator.play(clip.name,false,true);for(let i=0;i<=128;i++){const time=clip.duration*i/128;animator.time=time;animator.update(0);fs.writeSync(output,JSON.stringify({actor:row.actor,name:clip.name,time,transforms:animator.transforms.map(t=>[...t])})+'\n');samples++;}}
 geometry.dispose();
}
fs.closeSync(output);console.log(`${samples} nonplayer pose samples saved.`);

import fs from 'node:fs';import path from 'node:path';import {fileURLToPath} from 'node:url';
import * as THREE from 'three';import {ActorAnimator} from '../../../src/animation.js';
import {PlayerController} from '../../../src/collision.js';import {playerMotion} from '../../../src/player-animation.js';
const here=path.dirname(fileURLToPath(import.meta.url)),root=path.resolve(here,'../../..');
const data=JSON.parse(fs.readFileSync(path.join(root,'assets/actors/redcat.json')));
const geometry=new THREE.BufferGeometry();geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));geometry.setAttribute('normal',new THREE.Float32BufferAttribute(data.normals,3));const animator=new ActorAnimator(data,geometry);
const samples=[];
for(const clip of data.animations){animator.play(clip.name,false,true);for(let i=0;i<=128;i++){const time=clip.duration*i/128;animator.time=time;animator.update(0);samples.push({name:clip.name,time,transforms:animator.transforms.map(t=>[...t])});}}
fs.writeFileSync(path.join(here,'rebuild-samples.json'),JSON.stringify(samples));
// Reproduce the actual save payload: PlayerController physics is serialized,
// but world.redcat.userData.motionState is not in adventureSnapshot().
function restoreCase({kind,velocity,age,gap}){
 const player=new PlayerController({},[0,100,0]);player.grounded=false;player.velocityY=velocity;player.jumpKind=kind;player.jumpAge=age;player.jumpSerial=1;
 const motionState={airborne:true,jumping:true,falling:false,age,groundDistance:gap,jumpSerial:1};
 const before=playerMotion({...motionState},player,{},0,gap);
 const payload=JSON.parse(JSON.stringify(player.snapshotMotion()));const restored=new PlayerController({},[0,100,0]);restored.restoreMotion(payload);
 const after=playerMotion({},restored,{},0,gap);
 return {kind,velocity,age,gap,before,after,payload};
}
const restoreCases=[restoreCase({kind:'normal',velocity:80,age:.3,gap:40}),restoreCase({kind:'normal',velocity:-80,age:.5,gap:40}),restoreCase({kind:'super',velocity:-80,age:.7,gap:120})];
fs.writeFileSync(path.join(here,'restore-report.json'),JSON.stringify(restoreCases,null,2));console.log(JSON.stringify(restoreCases,null,2));console.log(`${samples.length} pose samples saved.`);

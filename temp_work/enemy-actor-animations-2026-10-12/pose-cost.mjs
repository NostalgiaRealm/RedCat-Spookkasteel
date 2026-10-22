import fs from 'node:fs';
import {performance} from 'node:perf_hooks';
import * as THREE from 'three';
import {ActorAnimator,ActorStateAnimator} from '../../src/animation.js';
import {ActorAnimator as OldAnimator,ActorStateAnimator as OldStates} from './before/src/animation.js';
const names=['zombie','knight','spiderg','plant','gargoyle','batg','ghostg','frog'];
const fixtures=names.map(name=>JSON.parse(fs.readFileSync(`assets/actors/${name}.json`)));
function batch(A,S,transitions){
 const actors=fixtures.flatMap((data,i)=>Array.from({length:4},()=>{
  const geometry=new THREE.BufferGeometry();geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));geometry.setAttribute('normal',new THREE.Float32BufferAttribute(data.normals,3));
  const animator=new A(data,geometry),states=new S(animator),object={animationState:'idle',animationSerial:0,animationRate:1,enemyType:names[i],enabled:true};return {animator,states,object};
 }));
 let total=0,max=0;
 for(let frame=0;frame<900;frame++){
  if(transitions&&frame%60===0)for(const f of actors){f.object.animationState=frame%120===0?'walk':'idle';f.object.animationSerial++;}
  const t=performance.now();for(const f of actors)f.states.update(f.object,1/120,false,frame/120);const d=performance.now()-t;
  if(frame>=300){total+=d;max=Math.max(max,d);}
 }
 for(const a of actors)a.animator.geometry.dispose();return {meanMs:total/600,maxMs:max};
}
const report={description:'CPU pose-only synthetic 32-actor comparison, 600 measured frames after 300 warmup; not a device FPS guarantee',before:[],after:[]};
for(let i=0;i<5;i++){report.before.push(batch(OldAnimator,OldStates,true));report.after.push(batch(ActorAnimator,ActorStateAnimator,true));}
fs.writeFileSync('temp_work/enemy-actor-animations-2026-10-12/pose-cost.json',JSON.stringify(report,null,2)+'\n');
console.log(JSON.stringify(report));

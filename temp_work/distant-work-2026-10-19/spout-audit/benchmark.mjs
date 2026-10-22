import {writeFileSync} from 'node:fs';
import {performance} from 'node:perf_hooks';
import * as THREE from 'three';
import {WorldEffects,BillboardBatch} from '../../../src/world-effects.js';
import {NativeSpoutEffect} from '../../../src/spout-effects.js';
import {WorldEffects as BeforeWorld} from '../before/src/world-effects.js';
import {NativeSpoutEffect as BeforeSpout} from '../before/src/spout-effects.js';
const entity={BitmapFileName:'smoke.bmp',BitmapAlphaFileName:'smoke_a.bmp',DelaySecondsMin:.04,DelaySecondsMax:.08,
  LifeSecondsMin:.5,LifeSecondsMax:2,SpeedMin:2,SpeedMax:8,AngleMin:0,AngleMax:20,Gravity:.5,StartRadius:1.5,Scale:1,
  AlphaPercentageStart:100,AlphaPercentageEnd:25,SizePercentageStart:25,SizePercentageEnd:100};
function measure(World,Spout,visible,enabled){
  const owner={scene:new THREE.Scene(),track:x=>x},batch=new BillboardBatch(owner,null),camera=new THREE.PerspectiveCamera(65,1.5,.1,500);
  camera.updateMatrixWorld();batch.frustum=new THREE.Frustum().setFromProjectionMatrix(new THREE.Matrix4().multiplyMatrices(camera.projectionMatrix,camera.matrixWorldInverse));
  const fx={batches:new Map([['smoke.bmp|smoke_a.bmp',batch]]),torches:{direction:()=>null},endpoint:(_name,fallback)=>fallback};
  const states=Array.from({length:77},(_,i)=>({object:{id:`spout${i}`,entity},spout:new Spout(entity,{seed:i+1}),active:enabled,age:0}));
  const origin=visible?[0,0,-50]:[1000,0,-50],update=World.prototype.updateSpout;
  const run=n=>{const start=performance.now();for(let i=0;i<n;i++){batch.count=0;for(const state of states)update.call(fx,state,origin,1/240);}return performance.now()-start;};
  run(3000);const ms=run(7000);batch.geometry.dispose();batch.mesh.material.dispose();return ms;
}
const report=[];
for(const [visible,enabled]of [[true,true],[false,true],[false,false]]) {
  const trials=[];for(let i=0;i<7;i++){let before,current;if(i%2){current=measure(WorldEffects,NativeSpoutEffect,visible,enabled);before=measure(BeforeWorld,BeforeSpout,visible,enabled);}else{before=measure(BeforeWorld,BeforeSpout,visible,enabled);current=measure(WorldEffects,NativeSpoutEffect,visible,enabled);}trials.push({before,current});}
  const median=key=>trials.map(t=>t[key]).sort((a,b)=>a-b)[3],before=median('before'),current=median('current');report.push({visible,enabled,before,current,changePercent:(current/before-1)*100,trials});
}
writeFileSync(new URL('./benchmark.json',import.meta.url),JSON.stringify(report,null,2)+'\n');console.log(JSON.stringify(report,null,2));

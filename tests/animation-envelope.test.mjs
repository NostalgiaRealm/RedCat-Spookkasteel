import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync,readdirSync} from 'node:fs';
import {BufferGeometry,Float32BufferAttribute} from 'three';
import {ActorAnimator} from '../src/animation.js';

function make(data){
  const geometry=new BufferGeometry();geometry.setAttribute('position',new Float32BufferAttribute(data.positions,3));
  const animator=new ActorAnimator(data,geometry);animator.deferGeometry=true;animator.transitionDuration=.25;
  return {animator,geometry};
}
function enclosed(animator,geometry,label){
  const pending=animator.posePending,version=geometry.attributes.position.version;
  const radius=animator.conservativeAnimationRadius();assert.ok(Number.isFinite(radius),label);
  assert.equal(animator.posePending,pending,'envelope lookup never samples bones');assert.equal(geometry.attributes.position.version,version);
  animator.flushGeometry();const values=geometry.attributes.position.array;
  for(let i=0;i<values.length;i+=3)assert.ok(Math.hypot(values[i],values[i+1],values[i+2])<=radius,`${label} vertex ${i/3}`);
}

test('cached mathematical animation envelopes enclose every native clip and transitions without sampling bones',()=>{
  let clips=0;
  for(const file of readdirSync(new URL('../assets/actors/',import.meta.url)).filter(name=>name.endsWith('.json'))){
    const data=JSON.parse(readFileSync(new URL('../assets/actors/'+file,import.meta.url)));if(!data.animations?.length)continue;
    const {animator,geometry}=make(data);
    try{
      for(const clip of data.animations){
        animator.play(clip.name,false,true);clips++;
        for(const fraction of [0,.071,.19,.37,.51,.73,.89,1]){
          animator.time=clip.duration*fraction;animator.update(0,.04);enclosed(animator,geometry,`${file}/${clip.name}/${fraction}`);
        }
      }
    }finally{geometry.dispose();}
  }
  assert.ok(clips>=172);
});

test('the envelope includes Hermite overshoot, hierarchy shear, unbound vertices and normalized quaternion keys',()=>{
  const attachment=[2,.7,0,0,1.3,.8,.2,0,.9,10,-20,30];
  const data={bones:[{name:'root',parent:-1,attachment},{name:'child',parent:0,attachment}],
    positions:[0,0,0,50,-20,10,900,0,0],localPositions:[0,0,0,50,-20,10,900,0,0],joints:[0,1,-1],
    animations:[{name:'a',duration:2,tracks:[{bone:'root',translation:{times:[0,1,2],values:[0,0,0,150,-75,20,0,0,0],interpolation:1},
      rotation:{times:[0,2],values:[4,2,0,1,0,4,1,2],interpolation:1}},
      {bone:'child',translation:{times:[0,1,2],values:[50,20,0,-60,45,20,70,-20,5],interpolation:1}}]},
      {name:'b',duration:1,tracks:[{bone:'root',translation:{times:[0,1],values:[-300,0,40,10,-20,0],interpolation:0}}]}]};
  const {animator,geometry}=make(data);
  try{
    for(const clip of data.animations){animator.play(clip.name,false,true);for(let i=0;i<=300;i++){animator.time=clip.duration*i/300;animator.update(0,.001);enclosed(animator,geometry,clip.name);}}
    geometry.morphAttributes.position=[geometry.attributes.position.clone()];assert.equal(animator.conservativeAnimationRadius(),Infinity);
  }finally{geometry.dispose();}
});

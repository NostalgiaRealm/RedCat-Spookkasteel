import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync,readdirSync} from 'node:fs';
import {BufferGeometry,Float32BufferAttribute} from 'three';
import {ActorAnimator} from '../source/animation.js';

function geometry(data) {
  const g=new BufferGeometry();
  g.setAttribute('position',new Float32BufferAttribute(data.positions,3));
  g.setAttribute('normal',new Float32BufferAttribute(data.normals,3));
  return g;
}
function checkBounds(g,label) {
  const box=g.boundingBox.clone(),sphere=g.boundingSphere.clone();
  g.computeBoundingBox();g.computeBoundingSphere();
  assert.deepEqual(box,g.boundingBox,`${label}: exact box`);
  assert.deepEqual(sphere,g.boundingSphere,`${label}: exact sphere`);
}

test('every imported actor clip keeps exact Three.js bounds at start, interior and final poses',()=>{
  let clips=0;
  for(const file of readdirSync(new URL('../assets/actors/',import.meta.url)).filter(name=>name.endsWith('.json'))) {
    const data=JSON.parse(readFileSync(new URL('../assets/actors/'+file,import.meta.url)));
    if(!data.animations?.length)continue;
    const g=geometry(data),a=new ActorAnimator(data,g);
    for(const clip of data.animations) {
      a.play(clip.name,false,true);
      for(const fraction of [0,.23,.67,1]) {
        a.time=clip.duration*fraction;a.update(0);
        checkBounds(g,`${file}/${clip.name}/${fraction}`);
      }
      clips++;
    }
    // Transitions can leave the range of either standalone clip's bounds.
    if(data.animations.length>1) {
      a.transitionDuration=.25;a.play(data.animations[0].name);a.update(.17);
      a.play(data.animations[1].name);
      for(let frame=0;frame<6;frame++){a.update(.05);checkBounds(g,`${file}/blend/${frame}`);}
    }
    g.dispose();
  }
  assert.ok(clips>=172,'covers the current imported animation library');
});

test('morph positions retain Three.js bounds and empty actors retain an empty box and zero-radius sphere',()=>{
  const data=JSON.parse(readFileSync(new URL('../assets/actors/redcat.json',import.meta.url))),g=geometry(data);
  g.morphAttributes.position=[new Float32BufferAttribute(data.positions.map(x=>x+200),3)];
  const a=new ActorAnimator(data,g);a.play('walkfw');a.update(.2);checkBounds(g,'morph');
  const empty={bones:[],positions:[],normals:[],localPositions:[],localNormals:[],joints:[],normalJoints:[],animations:[{name:'empty',duration:1,tracks:[]}]};
  const eg=geometry(empty),ea=new ActorAnimator(empty,eg);ea.play('empty');checkBounds(eg,'empty');
  assert.ok(eg.boundingBox.isEmpty());assert.equal(eg.boundingSphere.radius,0);
});

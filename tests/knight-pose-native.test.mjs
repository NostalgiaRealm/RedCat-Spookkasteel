// The knight's sword tip without a rendered knight (knight-pose-native.js):
// the skeleton alone, posed on the gameplay clock, must give the renderer's
// result; Gameplay then strikes with it instead of the frontal fallback.
import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {Gameplay} from '../source/gameplay.js';
import {ActorAnimator,ActorStateAnimator} from '../source/animation.js';
import {KnightPose,boneScalePoint,knightSegmentFromBone,seekAttackPose} from '../source/knight-pose-native.js';
import {knightStrikeSegment} from '../source/enemy-perception-native.js';

const data=JSON.parse(readFileSync(new URL('../assets/actors/knight.json',import.meta.url)));
const pose={bones:data.bones,animations:data.animations,settings:data.settings};
const level={id:'lvl00a',spawn:{position:[5000,0,0],orientation:0},entities:[{classname:'StandingEnemy','%name%':'knight',Type:'2',Origin:'100 20 -50',StartOrientation:'6'}]};

test('the headless knight pose matches the rendered mesh, including the [1,1,1] scale offset',()=>{
  const game=new Gameplay(level),object=game.objects[0];
  object.yaw=.7;object.animationState='attack';object.animationSerial=1;
  const headless=new KnightPose(pose);
  // The renderer's path: a posed animator under the actor group and mesh.
  const animator=new ActorAnimator(data,null);animator.deferGeometry=true;
  const states=new ActorStateAnimator(animator,object.stats),group=new THREE.Group(),mesh=new THREE.Object3D();
  mesh.rotation.set(THREE.MathUtils.degToRad(data.settings.initialRotationDegrees[0]),0,0);mesh.scale.setScalar(data.settings.scale);group.add(mesh);
  group.position.fromArray(object.position);group.rotation.y=object.yaw;group.updateMatrixWorld(true);
  const bone=animator.data.bones.findIndex(b=>b.name.toUpperCase()==='BONE01');
  let largest=0;
  for(const remaining of [1,.8,.5,.3,.1]) {
    object.animationUntil=game.time+remaining;
    seekAttackPose(states,object,game.time);
    const rendered=knightSegmentFromBone(mesh.localToWorld(new THREE.Vector3(...boneScalePoint(animator.transforms[bone]))).toArray(),object);
    const sampled=headless.segment(object,game.time);
    for(let i=0;i<2;i++)for(let k=0;k<3;k++)largest=Math.max(largest,Math.abs(sampled[i][k]-rendered[i][k]));
  }
  assert.ok(largest<1e-9,`largest difference ${largest}`);
});

test('Gameplay strikes with the posed sword when no knight is rendered',()=>{
  const plain=new Gameplay(level).objects[0];
  const posed=new Gameplay(level,{knightPose:pose}).objects[0];
  for(const object of [plain,posed]){object.yaw=0;object.animationState='attack';object.animationUntil=.4;}
  const frontal=knightStrikeSegment(plain),sword=knightStrikeSegment(posed);
  assert.equal(typeof posed.knightStrikeSegment,'function');
  assert.ok(sword.flat().every(Number.isFinite));
  assert.notDeepEqual(sword[0],frontal[0],'the swung sword, not the frontal stand-in');
  assert.deepEqual(sword[1],frontal[1],'both trace back to the body centre');
});

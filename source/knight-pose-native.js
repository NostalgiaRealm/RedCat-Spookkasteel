// Knight sword tip (CRcKnight slot 49, 0x40e660 "BONE01"; read at 0x4050e0 via
// 0x40e670). The original poses the Genesis skeleton on the CPU whether or
// not the knight is drawn, and transforms the actor's scale vector by the
// bone matrix, the GetGunPosition pattern (docs/enemy-projectile-origins-native.md).
// KnightPose samples the same skeleton without geometry, on the gameplay
// clock, for callers that have no rendered knight.
import {ActorAnimator,ActorStateAnimator} from './animation.js';

const n=(value,fallback=0)=>Number.isFinite(Number(value))?Number(value):fallback;

/** Mesh-local point of a bone with the [1,1,1] scale-vector offset. */
export function boneScalePoint(bone) {
  return [bone[9]+bone[0]+bone[1]+bone[2],bone[10]+bone[3]+bone[4]+bone[5],bone[11]+bone[6]+bone[7]+bone[8]];
}

/** Strike segment from the world-space bone point: tip = bone + 0.3 (bone - centre), traced to the centre. */
export function knightSegmentFromBone(point,object) {
  const mins=object.collisionMins||[-18,0,-18],maxs=object.collisionMaxs||[18,50,18];
  const centre=object.position.map((v,i)=>v+(mins[i]+maxs[i])/2);
  return [point.map((v,i)=>v+.3*(v-centre[i])),centre];
}

/** Seek a state animator to the gameplay attack clock, as the renderer does before a release. */
export function seekAttackPose(states,object,time) {
  const animator=states.animator;
  states.update(object,0,false,time);
  if(object.animationState==='attack'&&Number.isFinite(object.animationUntil)&&animator.clip) {
    animator.time=Math.max(0,animator.clip.duration-(object.animationUntil-time)*animator.timeScale);
    animator.update(0);
  }
}

export class KnightPose {
  /** data: the knight actor's bones, animations and settings (assets/actors/knight.json). */
  constructor(data) {
    this.data=data;this.bone=data.bones.findIndex(bone=>bone.name.toUpperCase()==='BONE01');
    this.scale=n(data.settings?.scale,1);this.rx=n(data.settings?.initialRotationDegrees?.[0])*Math.PI/180;
    this.poses=new Map();
  }
  segment(object,time) {
    if(this.bone<0)return null;
    let states=this.poses.get(object.id);
    if(!states) {
      const animator=new ActorAnimator(this.data,null);animator.deferGeometry=true;
      states=new ActorStateAnimator(animator,object.stats);this.poses.set(object.id,states);
    }
    seekAttackPose(states,object,time);
    const bone=states.animator.transforms[this.bone];if(!bone)return null;
    // World = T(position) Ry(yaw) Rx(initial rotation) S(scale), as the actor group and mesh.
    let [x,y,z]=boneScalePoint(bone).map(v=>v*this.scale);
    const c=Math.cos(this.rx),s=Math.sin(this.rx);[y,z]=[y*c-z*s,y*s+z*c];
    const yaw=n(object.yaw),cy=Math.cos(yaw),sy=Math.sin(yaw);[x,z]=[x*cy+z*sy,-x*sy+z*cy];
    const p=object.position;
    return knightSegmentFromBone([x+p[0],y+p[1],z+p[2]],object);
  }
}

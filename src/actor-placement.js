import {Euler,Quaternion} from 'three';

const radians=Math.PI/180;
const orientations=new WeakMap(),zero=[0,0,0],spin=new Quaternion(),angles=new Euler(0,0,0,'ZYX');
// Native clock-face angles turn clockwise: 0=north (-Z), 3=east (+X).
// The Genesis helper at 0x5b17e0 returns (3-angle)*PI/6; character
// construction adds PI/2. Imported characters have +Z as their front.
export const nativePlayerYaw=orientation=>-Number(orientation||0)*Math.PI/6;
export const clockFaceActorYaw=orientation=>Math.PI+nativePlayerYaw(orientation);

// The owning model turns around its BSP pivot after the actor's authored
// world-axis turns. Keep both separate from the imported Z-up mesh basis.
export function actorOrientation(object,settings,modelPose,out=new Quaternion()) {
  const entity=object.entity||{},age=object.actorAge||0;
  const speed=settings.rotationDegreesPerSecond||zero,rotation=object.rotation||zero;
  const x=entity.RotateX||0,y=entity.RotateY||0,z=entity.RotateZ||0;
  let old=orientations.get(object);
  // CActor::RotateX/Y/Z premultiply each world-axis rotation in sequence.
  // Three's ZYX order is Rz*Ry*Rx, unlike its default local-axis XYZ.
  if(!old||old.x!==x||old.y!==y||old.z!==z||old.rx!==rotation[0]||old.ry!==rotation[1]||old.rz!==rotation[2]||old.scripted!==!!object.rotation) {
    const q=new Quaternion().setFromEuler(angles.set(Number(x)*radians,Number(y)*radians,Number(z)*radians,'ZYX'));
    if(object.rotation)q.premultiply(spin.setFromEuler(angles.set(...rotation,'ZYX')));
    old={x,y,z,rx:rotation[0],ry:rotation[1],rz:rotation[2],scripted:!!object.rotation,quaternion:q};orientations.set(object,old);
  }
  out.copy(old.quaternion);
  out.premultiply(spin.setFromEuler(angles.set(speed[0]*radians*age,speed[1]*radians*age,speed[2]*radians*age,'ZYX')));
  if(modelPose)out.premultiply(spin.fromArray(modelPose.rotation));
  return out;
}

export function attachedActorVisible(object,game) {
  if(object.modelIndex===undefined)return true;
  // The cave introduction withdraws its separate Max double 73 units below
  // the pedestal. Its tall mesh still peeks through the floor when the combat
  // assembly vanishes. Retire the double at that authored handoff, including
  // restored motion endpoints; disabling other model actors remains a pause.
  if(game.level.id==='lvl03a'&&object.entity.DaviName?.toLowerCase()==='max_actor') {
    const controllers=game.modelObjects.get(object.modelIndex)||[];
    if(controllers.some(o=>o.entity.DaviName?.toLowerCase()==='max_model'&&game.scripts?.players.get(o.id)?.finished))return false;
  }
  // Disable pauses the owning controller. Hide removes both its brush and
  // the actor mounted on it, as used by the castle's rolling-ball switch.
  return (game.modelObjects.get(object.modelIndex)||[])
    .filter(o=>['controller','door','button'].includes(o.kind))
    .every(o=>o.visible!==false&&o.health>0);
}

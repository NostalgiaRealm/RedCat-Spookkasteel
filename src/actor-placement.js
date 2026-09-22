import {Euler,Quaternion} from 'three';

const radians=Math.PI/180;
// Native clock-face angles turn clockwise: 0=north (-Z), 3=east (+X).
// The Genesis helper at 0x5b17e0 returns (3-angle)*PI/6; character
// construction adds PI/2. Imported characters have +Z as their front.
export const nativePlayerYaw=orientation=>-Number(orientation||0)*Math.PI/6;
export const clockFaceActorYaw=orientation=>Math.PI+nativePlayerYaw(orientation);

// The owning model turns around its BSP pivot after the actor's authored
// world-axis turns. Keep both separate from the imported Z-up mesh basis.
export function actorOrientation(object,settings,modelPose) {
  const entity=object.entity||{},age=object.actorAge||0;
  const authored=['X','Y','Z'].map(axis=>Number(entity['Rotate'+axis]||0)*radians);
  // CActor::RotateX/Y/Z premultiply each world-axis rotation in sequence.
  // Three's ZYX order is Rz*Ry*Rx, unlike its default local-axis XYZ.
  const q=new Quaternion().setFromEuler(new Euler(...authored,'ZYX'));
  if(object.rotation)q.premultiply(new Quaternion().setFromEuler(new Euler(...object.rotation,'ZYX')));
  const speed=settings.rotationDegreesPerSecond||[0,0,0];
  q.premultiply(new Quaternion().setFromEuler(new Euler(...speed.map(v=>v*radians*age),'ZYX')));
  if(modelPose)q.premultiply(new Quaternion(...modelPose.rotation));
  return q;
}

export function attachedActorVisible(object,game) {
  if(object.modelIndex===undefined)return true;
  // Disable pauses the owning controller. Hide removes both its brush and
  // the actor mounted on it, as used by the castle's rolling-ball switch.
  return (game.modelObjects.get(object.modelIndex)||[])
    .filter(o=>['controller','door','button'].includes(o.kind))
    .every(o=>o.visible!==false&&o.health>0);
}

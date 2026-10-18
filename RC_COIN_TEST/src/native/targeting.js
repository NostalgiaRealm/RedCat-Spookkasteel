import { sweepActor } from './player-projectiles.js';
import { transformMotionPoint } from './motions.js';
// RCTargetList 0x42c280/0x42cb60: nearest visible actor, half of the
// caller's PI cone, Player.DetectionRange, refreshed every 500 ms.
// The separate model-button fallback (0x42cf40) uses nine times that range.
export function targetableEnemy(object) {
  return !!object&&!['unplaced','dormant'].includes(object.ambush?.phase)&&object.kind==='enemy'&&object.enabled!==false&&object.visible!==false&&object.health>0&&!object.boss?.hidden;
}
export function targetableObject(object) {
  if(!object||object.enabled===false||object.visible===false||object.collected||object.health<=0||object.targetAvailable===false)return false;
  if(object.kind==='enemy')return targetableEnemy(object);
  const e=object.entity||{};
  if(object.kind==='button')return Number(e.ShootToSwitch)>0&&!(e.MaxSwitchTimes!==undefined&&Number(e.MaxSwitchTimes)>=0&&(object.switchCount||0)>=Number(e.MaxSwitchTimes));
  // AdamAnyActor.Targetable is an authored opt-in. Many lamps/torches can
  // receive damage, but their ActorDestroyable INI flag does not add them
  // to the original target list. In the shipped levels only crates opt in.
  if(object.kind==='actor')return Number(e.Targetable)>0&&object.actorSettings?.canBeShot===true;
  return false;
}
export function targetBounds(object) {
  if(object.kind!=='enemy'&&object.targetBounds)return object.targetBounds;
  const mins=object.collisionMins||[-18,0,-18],maxs=object.collisionMaxs||[18,56,18];
  return {min:object.position.map((v,i)=>v+mins[i]),max:object.position.map((v,i)=>v+maxs[i])};
}
export function transformedTargetBounds(model,pose) {
  if(!model)return null;
  const corners=Array.from({length:8},(_,bits)=>[0,1,2].map(i=>bits&(1<<i)?model.max[i]:model.min[i]));
  const points=pose?corners.map(p=>transformMotionPoint(p,pose.origin,pose)):corners;
  return {min:[0,1,2].map(i=>Math.min(...points.map(p=>p[i]))),max:[0,1,2].map(i=>Math.max(...points.map(p=>p[i])))};
}
export function targetAimPoint(object) {
  const {min,max}=targetBounds(object);
  return min.map((v,i)=>v+(max[i]-v)*(object.kind==='enemy'&&i===1?.8:.5));
}
export function targetDirection(origin,target) {
  const delta=targetAimPoint(target).map((v,i)=>v-origin[i]),length=Math.hypot(...delta)||1;
  return delta.map(v=>v/length);
}
export class EnemyTargeting {
  constructor(){this.target=null;this.locked=false;this.nextRefresh=0;}
  clear(){this.target=null;this.locked=false;this.nextRefresh=0;}
  update({time,objects,position,yaw,range=480,attack=false,enabled=true,lineOfSight=()=>true}) {
    if(!enabled){this.clear();return null;}
    const eye=[position[0],position[1]+45,position[2]];
    const eligible=object=>{
      if(!targetableObject(object))return false;
      const aim=targetAimPoint(object),anchor=object.kind==='enemy'?object.position:aim,dx=anchor[0]-position[0],dz=anchor[2]-position[2];
      if(Math.hypot(dx,anchor[1]-position[1],dz)>range*(object.kind==='button'?9:1))return false;
      if(-Math.sin(yaw)*dx-Math.cos(yaw)*dz< -1e-6)return false;
      return lineOfSight(eye,targetAimPoint(object),object);
    };
    if(this.target&&!eligible(this.target)){this.target=null;this.nextRefresh=0;}
    if(time>=this.nextRefresh){
      // The original list searches actors first (enemies and opted-in crates),
      // then shootable model buttons. Keep a valid active firing lock stable.
      if(!(attack&&this.locked&&this.target))this.target=objects.filter(eligible).sort((a,b)=>
        Number(a.kind==='button')-Number(b.kind==='button')||
        (a.kind==='enemy'?a.position:targetAimPoint(a)).reduce((s,v,i)=>s+(v-position[i])**2,0)-(b.kind==='enemy'?b.position:targetAimPoint(b)).reduce((s,v,i)=>s+(v-position[i])**2,0))[0]||null;
      this.nextRefresh=time+.5;
    }
    this.locked=!!this.target&&attack;
    return this.target;
  }
}

// RcTargetEffect: 25..50 width at 25 units/s, 3.5 rad/s rotation;
// RGB channels alternate between 20 and 255 at 700 units/s.
export function targetMarkerPose(target,camera,time) {
  const bounds=targetBounds(target),center=bounds.min.map((v,i)=>(v+bounds.max[i])*.5);
  const hull={position:center,collisionMins:bounds.min.map((v,i)=>v-center[i]),collisionMaxs:bounds.max.map((v,i)=>v-center[i])};
  const delta=center.map((v,i)=>v-camera[i]),distance=Math.hypot(...delta)||1;
  const fraction=sweepActor(camera,center,hull)??1;
  const position=camera.map((v,i)=>v+delta[i]*Math.max(0,fraction-10/distance));
  const phase=((time*700/235)%6+6)%6,whole=Math.floor(phase),rgb=[20,255,20];
  for(let i=0;i<whole;i++)rgb[i%3]+=i%2===0?235:-235;
  rgb[whole%3]+=(whole%2===0?235:-235)*(phase-whole);
  return {position,width:25+25*(1-Math.abs((time%2)-1)),rotation:-time*3.5,color:rgb.map(v=>v/255)};
}

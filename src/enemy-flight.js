// Flight uses the authored waypoint network when a straight pursuit is
// obstructed. A point visibility ray alone is not clearance for a bat's body.
import {sweepActor} from './player-projectiles.js';
const distance=(a,b)=>Math.hypot(...a.map((v,i)=>v-b[i]));

export function batOverlapsPlayer(object,player,position=object.position) {
  const mins=object.collisionMins||[-10,5,-10],maxs=object.collisionMaxs||[10,40,10];
  return position.every((v,i)=>v+maxs[i]>player[i]+(i===1?0:-11)+1e-6&&v+mins[i]<player[i]+(i===1?56:11)-1e-6);
}

// Enemy world traces omit RedCat. Clip flight against his actual body too,
// and recover overlaps when he moves into a bat or loads an older save.
export function clipBatPlayerContact(object,before,player,trace) {
  if(object.enemyType!=='bat')return false;
  const mins=object.collisionMins||[-10,5,-10],maxs=object.collisionMaxs||[10,40,10];
  const lo=player.map((v,i)=>v+(i===1?0:-11)-maxs[i]),hi=player.map((v,i)=>v+(i===1?56:11)-mins[i]);
  if(batOverlapsPlayer(object,player,before)) {
    if(!batOverlapsPlayer(object,player))return true;
    const position=[...object.position],candidates=[];
    for(const axis of [0,2,1])for(const side of [lo[axis]-.1,hi[axis]+.1]){
      const candidate=[...position];candidate[axis]=side;candidates.push(candidate);
    }
    candidates.sort((a,b)=>distance(a,position)-distance(b,position));
    for(const candidate of candidates){
      const hit=trace?.(position,candidate,mins,maxs);
      if(!hit||(!hit.startSolid&&hit.fraction>.999)){object.position=hit?.end||candidate;break;}
    }
    return true;
  }
  const fraction=sweepActor(before,object.position,{position:player,collisionMins:lo.map((v,i)=>v-player[i]),collisionMaxs:hi.map((v,i)=>v-player[i])});
  if(fraction===null)return false;
  const length=distance(before,object.position),safe=Math.max(0,fraction-(length>0?0.1/length:0));
  object.position=before.map((v,i)=>v+(object.position[i]-v)*safe);
  return true;
}

export function batOrbitTarget(object,player) {
  const state=object.batContact,dx=object.position[0]-player[0],dz=object.position[2]-player[2],r=Math.hypot(dx,dz);
  const nx=r>.001?dx/r:Math.sin(object.yaw||0),nz=r>.001?dz/r:Math.cos(object.yaw||0);
  const desired=Math.max(70,Math.max(...(object.collisionMaxs||[10,40,10]).map(Math.abs))+35);
  const radial=Math.max(-30,Math.min(45,desired-r)),side=state?.direction||1;
  return [object.position[0]+nx*radial+nz*side*45,object.position[1],object.position[2]+nz*radial-nx*side*45];
}
export function batFlightTarget(game,object,target,trace) {
  if(object.enemyType!=='bat'||!trace)return target;
  const state=object.flightDetour,point=state&&game.navigation.find(state.target);
  if(point&&state.until>game.time&&distance(object.position,point.position)>5)return point.position;
  object.flightDetour=null;
  const mins=object.collisionMins||[-10,5,-10],maxs=object.collisionMaxs||[10,40,10];
  if(trace(object.position,target,mins,maxs).fraction>.98)return target;
  const start=game.navigation.find(object.patrol?.start);if(!start)return target;
  const occupied=game.objects.filter(o=>o!==object&&o.enemyType==='bat'&&o.enabled&&o.health>0);
  const candidates=game.navigation.points.filter(p=>p.subsystem===start.subsystem&&distance(p.position,object.position)>10&&distance(p.position,object.position)<450&&
    trace(object.position,p.position,mins,maxs).fraction>.98);
  candidates.sort((a,b)=>cost(a)-cost(b));
  function cost(p){return distance(p.position,target)+.35*distance(object.position,p.position)+occupied.reduce((sum,o)=>sum+(distance(o.position,p.position)<40||o.flightDetour?.target===p.id?150:0),0);}
  const chosen=candidates[0];if(!chosen)return target;
  object.flightDetour={target:chosen.id,until:game.time+3};return chosen.position;
}

export function batSeparationTarget(game,object) {
  if(object.enemyType!=='bat')return null;
  const push=[0,0,0];let overlap=false;
  for(const other of game.objects) {
    if(other===object||other.enemyType!=='bat'||!other.enabled||other.health<=0)continue;
    const delta=object.position.map((v,i)=>v-other.position[i]),length=Math.hypot(...delta);
    const radius=Math.max(16,(object.collisionMaxs?.[0]||10)+(other.collisionMaxs?.[0]||10)+6);
    if(length>=radius)continue;
    overlap=true;
    // A deterministic opposite direction also separates coincident spawns.
    if(length<.001){delta[0]=object.id<other.id?1:-1;delta[2]=.35;}
    const norm=Math.hypot(...delta)||1;
    for(let i=0;i<3;i++)push[i]+=delta[i]/norm*(radius-length+4);
  }
  return overlap?object.position.map((v,i)=>v+push[i]):null;
}

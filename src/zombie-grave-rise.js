const distanceXZ=(a,b)=>Math.hypot(a[0]-b[0],a[2]-b[2]);

// CRcZombie follows the same XYZ waypoint cursor as other cursor actors.
// Its eight grave entrances have an explicit upward first edge, unlike the
// flat plank entrances or already-active mausoleum zombies. Native cursor
// 0x59c049–0x59c0a4 advances along that edge at Speed, without gravity/steps.
export function zombieGraveEdge(game,object) {
  if(object.enemyType!=='zombie'||object.entity.IsInitiallyEnabled!=='0'||
    !Number(object.entity.UnlinkStartPoint)||!object.patrol||object.patrol.leftStart)return null;
  const start=game.navigation.find(object.patrol.start);
  if(start?.explicit.length!==1)return null;
  const end=game.navigation.find(start.explicit[0]);
  if(!end||end.subsystem!==start.subsystem||end.position[1]<=start.position[1])return null;
  if(object.patrol.current&&object.patrol.current!==start.id||
    object.patrol.target&&![start.id,end.id].includes(object.patrol.target))return null;
  // Do not replay an entrance for an older save already chased out of the
  // grave. Allow the small original Origin/StartPoint offsets and hull repair.
  const dx=end.position[0]-start.position[0],dz=end.position[2]-start.position[2],length2=dx*dx+dz*dz;
  const t=length2?((object.position[0]-start.position[0])*dx+(object.position[2]-start.position[2])*dz)/length2:0;
  const nearest=[start.position[0]+dx*Math.max(0,Math.min(1,t)),0,start.position[2]+dz*Math.max(0,Math.min(1,t))];
  if(t>1.001||distanceXZ(object.position,nearest)>32||object.position[1]<start.position[1]-16||object.position[1]>end.position[1]+.1)return null;
  return {start,end};
}

/** Own just the authored grave ascent; patrol fields already preserve it in saves. */
export function updateZombieGraveRise(game,object,dt) {
  if(!object.enabled||object.health<=0)return false;
  const edge=zombieGraveEdge(game,object);if(!edge)return false;
  const {start,end}=edge,patrol=object.patrol;
  object.velocityY=0;object.grounded=false;object.pendingAttack=null;
  object.pursuit=null;game.navigation.pursuitJobs.delete(object);game.navigation.finishSearch(object);
  if(object.movementRecovery){object.movementRecovery=null;object.lastMovementRecovery=0;}
  patrol.current=start.id;patrol.target=end.id;patrol.relocating=false;patrol.reacquiring=false;
  object.waypointActive=true;game.navigation.syncReservation(object);
  // A hit can hold the actor's pose, but must not pull it down into its grave.
  if(object.animationState==='hurt'&&game.time<object.animationUntil)return true;
  const delta=end.position.map((v,i)=>v-object.position[i]),remaining=Math.hypot(...delta);
  const step=Math.min(remaining,Math.max(0,Number(object.stats.Speed)||0)*Math.max(0,dt));
  if(step>0){
    const desired=Math.atan2(delta[0],delta[2]),current=object.yaw??desired;
    const difference=Math.atan2(Math.sin(desired-current),Math.cos(desired-current));
    const turn=(Number.isFinite(Number(object.stats.RotationPerSec))?Number(object.stats.RotationPerSec):Math.PI*3)*dt;
    object.yaw=current+Math.max(-turn,Math.min(turn,difference));
    // Continue from the actual saved position: no rewind/snap to StartPoint.
    object.position=object.position.map((v,i)=>v+delta[i]/remaining*step);
    game.enemyAnimation(object,'walk');
  }
  if(remaining-step<1e-7){
    object.position=[...end.position];object.grounded=true;
    patrol.previous=start.id;patrol.current=end.id;patrol.target=null;patrol.leftStart=true;
    game.navigation.syncReservation(object);
  }
  return true;
}

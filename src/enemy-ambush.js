import {moveEnemy} from './enemies.js';
// Spider ceiling/floor setup: RcShootSpider::Initialize (0x413a90),
// RcSpiderMoveToStart (0x409440 / 0x409a60). Skeletons hold the first
// frame of their original start motion until the room/perception wakes them.
const n=(value,fallback=0)=>Number.isFinite(Number(value))?Number(value):fallback;
const point=v=>String(v||'0 0 0').trim().split(/\s+/).map(Number);
const valid=v=>Array.isArray(v)&&v.length===3&&v.every(Number.isFinite);
export const enemyDormant=object=>['unplaced','dormant'].includes(object.ambush?.phase);

export function initializeEnemyAmbush(object) {
  if(!['spider','skeleton'].includes(object.enemyType))return;
  object.ambush={version:1,type:object.enemyType,phase:object.enemyType==='spider'?'unplaced':'dormant',elapsed:0};
  if(object.enemyType==='skeleton')object.animationState='dormant';
}

export function placeSpider(game,object,trace) {
  const state=object.ambush;
  if(state?.type!=='spider'||!trace)return;
  const origin=point(object.entity.Origin),start=game.navigation?.find(object.entity.StartPoint)?.position;
  // Older saves classified roof-embedded spiders as ground enemies. Retry
  // untouched actors still at that spawn, without rewinding fought patrols.
  const roofSpawn=start&&start[1]<origin[1]-64;
  const legacy=state.phase==='awake'&&!state.lower&&roofSpawn&&!object.alerted&&object.health===object.maxHealth&&
    !object.patrol?.leftStart&&!(object.attackTimer>0)&&Math.hypot(...object.position.map((v,i)=>v-origin[i]))<1;
  if(state.phase!=='unplaced'&&!legacy)return;
  let lower=[...origin];
  const mins=object.collisionMins||[-12,0,-12],maxs=object.collisionMaxs||[12,24,12];
  // Editor origins can sit several units inside the floor. Find the walkable
  // surface first, then trace the body upwards as the original initializer did.
  const locate=()=>{
    const floor=trace([lower[0],lower[1]+64,lower[2]],[lower[0],lower[1]-256,lower[2]],[0,0,0],[0,0,0]);
    if(floor.fraction<1&&!floor.startSolid&&floor.normal?.[1]>.65)lower[1]=floor.end[1]+.05;
    return trace(lower,[lower[0],Math.max(lower[1]+2048,n(game.level.bounds?.max?.[1])+100),lower[2]],mins,maxs);
  };
  let ceiling=locate();
  if(ceiling.startSolid&&roofSpawn){
    // The native moving-enemy constructor seeds its actor with StartPoint's
    // waypoint ID (0x42761c–0x42774d). Use that full position when the editor
    // Origin is inside the roof; its X/Z determine the actual hanging alcove.
    lower=[...start];ceiling=locate();
  }
  if(ceiling.fraction>=1||ceiling.startSolid||ceiling.end[1]-lower[1]<16) {
    // Open outdoor areas have no ceiling to string a web from.
    state.phase='awake';object.position=lower;return;
  }
  state.lower=lower;state.upper=[...ceiling.end];state.anchor=[lower[0],ceiling.end[1]+maxs[1],lower[2]];
  object.position=[...state.upper];object.velocityY=0;state.phase='dormant';object.animationState='idle';
}

/** Returns true while the ambush owns movement/animation this frame. */
export function updateEnemyAmbush(game,object,dt,playerPosition,lineOfSight,trace) {
  const state=object.ambush;if(!state)return false;
  if(state.phase==='awake')return updateSpiderReturn(game,object,dt,playerPosition,lineOfSight,trace);
  placeSpider(game,object,trace);
  if(state.phase==='unplaced'){state.phase='awake';return false;}
  if(state.phase==='awake')return false;
  if(state.phase==='dormant') {
    if(!object.alerted) {
      if(state.type==='spider') {
        // Native hanging state uses a full-circle view and horizontal range.
        // Both sensing and sight still require a clear ray from the current
        // ceiling position (not the landing point). Its eye is .8 body heights;
        // test RedCat's feet, then his head, as 0x417fe0 / 0x413c90 do.
        const origin=object.position,distance=Math.hypot(origin[0]-playerPosition[0],origin[2]-playerPosition[2]);
        if(!(distance<n(object.stats.SenseRange)||distance<n(object.stats.VisualRange,250)))return true;
        const height=(object.collisionMaxs?.[1]??24)-(object.collisionMins?.[1]??0);
        const eye=[origin[0],origin[1]+height*.8,origin[2]];
        if(!lineOfSight(eye,playerPosition)&&!lineOfSight(eye,[playerPosition[0],playerPosition[1]+56,playerPosition[2]]))return true;
      } else {
        // Dormant bones do not patrol just because their room was enabled.
        const origin=object.position,distance=Math.hypot(...origin.map((v,i)=>v-playerPosition[i]));
        if(distance>n(object.stats.VisualRange,250)||!lineOfSight([origin[0],origin[1]+25,origin[2]],[playerPosition[0],playerPosition[1]+28,playerPosition[2]]))return true;
      }
    }
    state.elapsed=0;object.alerted=true;object.lastSeenAt=game.time;object.lastSeenPosition=[...playerPosition];
    game.enemyAction(object,'alert');
    if(state.type==='skeleton'){
      state.phase='waking';state.duration=game.enemyDuration(object,'start');
      game.enemyAnimation(object,'start',state.duration);
    }else {state.phase='descending';game.enemyAnimation(object,'idle');}
  }
  if(state.phase==='waking') {
    state.elapsed+=dt;
    if(state.elapsed>=state.duration){state.phase='awake';game.enemyAnimation(object,'idle');}
    return true;
  }
  if(state.phase==='descending') {
    state.elapsed+=dt;
    // Original FallSpeed is a constant stringing speed, not gravity.
    object.position[1]=Math.max(state.lower[1],object.position[1]-n(object.stats.FallSpeed,130)*dt);
    if(object.position[1]<=state.lower[1]+1e-6){state.phase='awake';object.grounded=true;object.velocityY=0;}
    return true;
  }
  if(['returning','ascending'].includes(state.phase))return updateSpiderReturn(game,object,dt,playerPosition,lineOfSight,trace);
  return false;
}

export function restoreEnemyAmbush(object,saved) {
  if(!object.ambush)return;
  if(saved?.version===1&&saved.type===object.enemyType&&['unplaced','dormant','descending','returning','ascending','waking','awake'].includes(saved.phase)) {
    const state={version:1,type:saved.type,phase:saved.phase,elapsed:Math.max(0,n(saved.elapsed))};
    for(const key of ['lower','upper','anchor'])if(valid(saved[key]))state[key]=[...saved[key]];
    if(Number.isFinite(saved.duration))state.duration=Math.max(0,saved.duration);
    if(state.type==='spider'&&['dormant','descending','returning','ascending'].includes(state.phase)&&!['lower','upper','anchor'].every(key=>valid(state[key])))state.phase='unplaced';
    object.ambush=state;
  } else {
    // Do not rewind enemies already fought or moved in a pre-ambush save.
    const moved=Math.hypot(...object.position.map((v,i)=>v-point(object.entity.Origin)[i]))>10;
    if(object.health<=0||object.alerted||object.health<object.maxHealth||moved||object.attackTimer>0)object.ambush.phase='awake';
  }
  if(object.ambush.phase==='dormant'&&object.enemyType==='skeleton')object.animationState='dormant';
}


function updateSpiderReturn(game,object,dt,player,lineOfSight,trace) {
  const state=object.ambush;
  if(state.type!=='spider'||!valid(state.lower)||!valid(state.upper))return false;
  if(state.phase==='awake') {
    // SpiderAttack's generic attack child finishes on loss of its target,
    // then both spider variants enter MoveToStart (0x408f12 / 0x409122).
    const horizontal=Math.hypot(object.position[0]-player[0],object.position[2]-player[2]);
    const eye=[object.position[0],object.position[1]+25,object.position[2]];
    const visible=horizontal<Math.max(n(object.stats.VisualRange,250),n(object.stats.SenseRange))&&
      (lineOfSight(eye,player)||lineOfSight(eye,[player[0],player[1]+56,player[2]]));
    if(visible||game.time-n(object.lastSeenAt,game.time)<=n(object.stats.TimeToRememberVisual,2)||game.time<object.animationUntil)return false;
    state.phase='returning';state.elapsed=0;object.pendingAttack=null;object.alerted=false;object.pursuit=null;
  }
  if(state.phase==='returning') {
    const remaining=Math.hypot(object.position[0]-state.lower[0],object.position[2]-state.lower[2]);
    if(remaining>.1) {
      const target=game.navigation?.pursuitTarget(object,state.lower,lineOfSight,trace,game.time)||state.lower;
      const dx=target[0]-object.position[0],dz=target[2]-object.position[2],length=Math.hypot(dx,dz);
      const step=Math.min(length,n(object.stats.Speed,50)*dt);
      if(length){object.yaw=Math.atan2(dx,dz);moveEnemy(object,[dx/length*step,0,dz/length*step],dt,trace);}
      game.enemyAnimation(object,'walk');return true;
    }
    state.phase='ascending';object.velocityY=0;object.pursuit=null;game.enemyAnimation(object,'idle');
  }
  if(state.phase==='ascending') {
    // 0x40950d–0x409553: the same FallSpeed is added for the return ascent.
    object.position[1]=Math.min(state.upper[1],object.position[1]+n(object.stats.FallSpeed,130)*dt);
    object.velocityY=0;object.grounded=false;
    if(object.position[1]>=state.upper[1]){state.phase='dormant';object.alerted=false;state.elapsed=0;}
    return true;
  }
  return false;
}

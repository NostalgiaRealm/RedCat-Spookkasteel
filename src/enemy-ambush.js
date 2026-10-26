import {moveEnemy} from './enemies.js';
// Spider ceiling/floor setup: RcShootSpider::Initialize (0x413a90),
// RcSpiderMoveToStart (0x409440 / 0x409a60). Skeletons settle to start frame
// zero and replay it forward on wake; CRcStonedAlert is shared by knights and
// gargoyles, but only knights supply its optional start motion.
const n=(value,fallback=0)=>Number.isFinite(Number(value))?Number(value):fallback;
const point=v=>String(v||'0 0 0').trim().split(/\s+/).map(Number);
const valid=v=>Array.isArray(v)&&v.length===3&&v.every(Number.isFinite);
const skeletonSees=(object,player,lineOfSight)=>{
  const p=object.position;
  return Math.hypot(...p.map((v,i)=>v-player[i]))<=n(object.stats.VisualRange,250)&&
    lineOfSight([p[0],p[1]+25,p[2]],[player[0],player[1]+28,player[2]]);
};
export const enemyDormant=object=>['unplaced','dormant'].includes(object.ambush?.phase);

export function initializeEnemyAmbush(object) {
  if(!['spider','skeleton','knight','gargoyle'].includes(object.enemyType))return;
  object.ambush={version:1,type:object.enemyType,phase:object.enemyType==='spider'?'unplaced':'dormant',elapsed:0};
  if(object.enemyType!=='spider')object.animationState='dormant';
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
  // Stone alert depends on the normal authored view/sense/memory checks.
  if(['knight','gargoyle'].includes(state.type))return false;
  if(state.type==='spider'){
    // Selected hits replace the complete nested spider movement child.
    // Keep hanging/return movement from overwriting the new hurt motion.
    if(object.animationState==='hurt'&&game.time<object.animationUntil)return true;
    if(state.resumeAlert){
      delete state.resumeAlert;state.elapsed=0;
      const nearUpper=valid(state.upper)&&valid(state.lower)&&
        Math.abs(object.position[1]-state.upper[1])<Math.abs(object.position[1]-state.lower[1]);
      // Fresh alert wrappers 0x408d80/0x408f90 descend if nearer the upper
      // anchor; floor/tie enters combat. Never resume the old ascent/return.
      state.phase=nearUpper?'returning':'awake';
      if(nearUpper)state.returnForDescent=true;else delete state.returnForDescent;
      object.alerted=true;object.lastSeenAt=game.time;object.lastSeenPosition=[...playerPosition];
      game.enemyAnimation(object,'idle');
    }
  }
  if(state.type==='skeleton'&&state.phase!=='awake'&&object.animationState==='hurt'&&game.time<object.animationUntil)return true;
  if(state.type==='skeleton'&&state.phase==='awake'&&!object.alerted&&
    game.time-n(object.lastSeenAt,game.time)>n(object.stats.TimeToRememberVisual,2)&&
    (!['attack','hurt','start','charge'].includes(object.animationState)||game.time>=n(object.animationUntil))&&!object.pendingAttack&&!object.nativeShooter) {
    // RcSkeletonIdleState::Initialize restarts start backwards at -1. The
    // initial spawn is already the completed pile; returning enemies collapse.
    state.phase='retracting';state.elapsed=0;state.duration=game.enemyDuration(object,'start');
    game.enemyAnimation(object,'retract',state.duration,-1);
    return true;
  }
  if(state.phase==='retracting') {
    if(object.alerted||skeletonSees(object,playerPosition,lineOfSight)) {
      object.alerted=true;object.lastSeenAt=game.time;object.lastSeenPosition=[...playerPosition];
      state.phase='waking';state.elapsed=0;
      state.duration=game.enemyAnimation(object,'start',game.enemyDuration(object,'start'));
      return true;
    }
    state.elapsed+=dt;
    if(state.elapsed>=state.duration){state.phase='dormant';game.enemyAnimation(object,'dormant');}
    return true;
  }
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
        if(!skeletonSees(object,playerPosition,lineOfSight))return true;
      }
    }
    state.elapsed=0;object.alerted=true;object.lastSeenAt=game.time;object.lastSeenPosition=[...playerPosition];
    game.enemyAction(object,'alert');
    if(state.type==='skeleton'){
      state.phase='waking';state.duration=game.enemyAnimation(object,'start',game.enemyDuration(object,'start'));
      return true;
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
  if(saved?.version===1&&saved.type===object.enemyType&&['unplaced','dormant','descending','returning','ascending','waking','awake','retracting'].includes(saved.phase)) {
    const state={version:1,type:saved.type,phase:saved.phase,elapsed:Math.max(0,n(saved.elapsed))};
    for(const key of ['lower','upper','anchor'])if(valid(saved[key]))state[key]=[...saved[key]];
    if(Number.isFinite(saved.duration))state.duration=Math.max(0,saved.duration);
    if(['knight','gargoyle','spider'].includes(state.type)&&saved.resumeAlert===true)state.resumeAlert=true;
    if(state.type==='spider'&&state.phase==='returning'&&saved.returnForDescent===true)state.returnForDescent=true;
    if(state.type==='spider'&&['dormant','descending','returning','ascending'].includes(state.phase)&&!['lower','upper','anchor'].every(key=>valid(state[key])))state.phase='unplaced';
    object.ambush=state;
  } else {
    // Do not rewind enemies already fought or moved in a pre-ambush save.
    const moved=Math.hypot(...object.position.map((v,i)=>v-point(object.entity.Origin)[i]))>10;
    if(object.health<=0||object.alerted||object.health<object.maxHealth||moved||object.attackTimer>0)object.ambush.phase='awake';
  }
  if(object.enemyType==='skeleton'&&object.animationState==='hurt'){
    // Older snapshots retained the replaced inactive/wake child during hit.
    // Native post-hit alert observes the completed hit and enters combat;
    // it does not replay start after hurt (0x407bc0 / 0x408880).
    object.ambush.phase='awake';object.ambush.elapsed=0;
    delete object.ambush.duration;
  }
  if(object.ambush.phase==='dormant'&&object.enemyType==='skeleton'&&!['hurt','death'].includes(object.animationState))object.animationState='dormant';
}

/** Native CRcStonedAlert: optional wake, looping alert, retract on memory loss. */
export function updateStoneAlert(game,object,dt) {
  const state=object.ambush;
  if(!state||!['knight','gargoyle'].includes(state.type))return false;
  // An old active save or a script-selected combat motion must not be reset
  // to the initial statue. The hit reaction may interrupt wake as in native.
  if(state.phase==='dormant'&&['attack','hurt'].includes(object.animationState))state.phase='awake';
  if(['hurt','death'].includes(object.animationState)&&game.time<object.animationUntil)return true;
  if(state.resumeAlert){
    delete state.resumeAlert;state.elapsed=0;
    if(state.type==='knight'){
      state.phase='waking';state.duration=game.enemyDuration(object,'start')/1.7;
      game.enemyAnimation(object,'start',state.duration,1.7);return true;
    }
    state.phase='awake';game.enemyAnimation(object,'idle');
  }
  if(state.phase==='dormant') {
    if(!object.alerted)return true;
    if(state.type==='knight') {
      state.phase='waking';state.elapsed=0;state.duration=game.enemyDuration(object,'start')/1.7;
      game.enemyAnimation(object,'start',state.duration,1.7);return true;
    }
    // Gargoyle's actor has no start motion. 0x404ca7 takes the idle fallback.
    state.phase='awake';object.animationState='dormant';game.enemyAnimation(object,'idle');
  }
  if(state.phase==='waking') {
    state.elapsed+=dt;
    if(game.time<object.animationUntil)return true;
    state.phase='awake';game.enemyAnimation(object,'idle');
  }
  if(state.phase==='retracting') {
    if(object.alerted) {
      state.phase='waking';state.elapsed=0;state.duration=game.enemyDuration(object,'start')/1.7;
      game.enemyAnimation(object,'start',state.duration,1.7);return true;
    }
    state.elapsed+=dt;
    if(game.time<object.animationUntil)return true;
    state.phase='dormant';game.enemyAnimation(object,'dormant');return true;
  }
  if(state.phase==='awake'&&!object.alerted) {
    // A standing shooter completes its already-entered salvo child before
    // returning to stone alert, including a shot committed behind cover.
    if(state.type==='gargoyle'&&(object.nativeStandingShooter||object.pendingAttack||object.salvoRemaining>0||
      object.animationState==='attack'&&game.time<object.animationUntil))return false;
    object.pendingAttack=null;object.salvoRemaining=0;object.attackTimer=0;
    if(state.type==='knight') {
      state.phase='retracting';state.elapsed=0;state.duration=game.enemyDuration(object,'start')/1.7;
      game.enemyAnimation(object,'retract',state.duration,-1.7);
    }else {state.phase='dormant';object.animationLoop=false;}
    return true;
  }
  return false;
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
    if(visible||game.time-n(object.lastSeenAt,game.time)<=n(object.stats.TimeToRememberVisual,2)||game.time<object.animationUntil||object.nativeShooter)return false;
    state.phase='returning';state.elapsed=0;object.pendingAttack=null;object.alerted=false;object.pursuit=null;
  }
  if(state.phase==='returning') {
    const remaining=Math.hypot(object.position[0]-state.lower[0],object.position[2]-state.lower[2]);
    if(remaining>.1) {
      const target=game.navigation?.pursuitTarget(object,state.lower,lineOfSight,trace,game.time,{destinationId:object.entity.StartPoint})||state.lower;
      const dx=target[0]-object.position[0],dz=target[2]-object.position[2],length=Math.hypot(dx,dz);
      const step=Math.min(length,n(object.stats.Speed,50)*dt);
      if(length){object.yaw=Math.atan2(dx,dz);moveEnemy(object,[dx/length*step,0,dz/length*step],dt,trace);}
      game.enemyAnimation(object,'walk');return true;
    }
    object.velocityY=0;object.pursuit=null;game.enemyAnimation(object,'idle');
    if(state.returnForDescent){
      delete state.returnForDescent;state.phase='descending';return true;
    }
    state.phase='ascending';
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

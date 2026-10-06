// Flight uses the authored waypoint network when a straight pursuit is
// obstructed. A point visibility ray alone is not clearance for a bat's body.
import {usesTouchPursuit} from './enemy-combat-native.js';
import {sweepActor} from './player-projectiles.js';
const distance=(a,b)=>Math.hypot(...a.map((v,i)=>v-b[i]));
// Pending body-clearance work is not save data. Weak keys also let abandoned
// levels/enemies be collected without retaining their waypoint lists.
const flightSearches=new WeakMap();

export function cancelBatFlightSearch(game,object) {
  flightSearches.delete(object);game.navigation.finishSearch(object);
}

export function batOverlapsPlayer(object,player,position=object.position) {
  const mins=object.collisionMins||[-10,5,-10],maxs=object.collisionMaxs||[10,40,10];
  return position.every((v,i)=>v+maxs[i]>player[i]+(i===1?0:-11)+1e-6&&v+mins[i]<player[i]+(i===1?56:11)-1e-6);
}

// Enemy world traces omit RedCat. Clip flight against his actual body too,
// and recover overlaps when he moves into a bat or loads an older save.
export function clipBatPlayerContact(object,before,player,trace) {
  if(object.enemyType!=='bat'&&!usesTouchPursuit(object))return false;
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

export function batFlightTarget(game,object,target,trace) {
  if(object.enemyType!=='bat'||!trace)return target;
  const state=object.flightDetour,point=state&&game.navigation.find(state.target);
  if(point&&state.until>game.time&&distance(object.position,point.position)>5)return point.position;
  const mins=object.collisionMins||[-10,5,-10],maxs=object.collisionMaxs||[10,40,10];
  const clear=(a,b)=>{const hit=trace(a,b,mins,maxs);return !hit.startSolid&&hit.fraction>.98;};
  if(clear(object.position,target)){object.flightDetour=null;cancelBatFlightSearch(game,object);return target;}
  // A failed search used to sweep every nearby waypoint again every frame.
  // Movement/door changes still get the immediate probe above, but cannot
  // bypass the half-second negative cache or the shared 16/48 search budget.
  if(!point&&state?.until>game.time)return target;
  object.flightDetour=null;
  const start=game.navigation.find(object.patrol?.start);if(!start)return target;
  let job=flightSearches.get(object);
  if(job&&(job.navigation!==game.navigation||game.time-job.requestedAt>.25||game.time-job.startedAt>4||
    distance(job.goal,target)>96||distance(job.position,object.position)>48||job.recoveries!==(object.movementRecovery?.recoveries||0)))job=null;
  if(!job){
    const occupied=game.objects.filter(o=>o!==object&&o.enemyType==='bat'&&o.enabled&&o.health>0);
    const candidates=[];
    for(const point of game.navigation.points){
      const d=distance(point.position,object.position);
      if(point.subsystem!==start.subsystem||d<=10||d>=450)continue;
      const cost=distance(point.position,target)+.35*d+occupied.reduce((sum,o)=>sum+(distance(o.position,point.position)<40||o.flightDetour?.target===point.id?150:0),0);
      candidates.push({point,cost});
    }
    // Test in score order: the first clear point is the same optimum as
    // sweeping the entire list then sorting, usually with only one sweep.
    candidates.sort((a,b)=>a.cost-b.cost);
    job={navigation:game.navigation,candidates,index:0,goal:[...target],position:[...object.position],startedAt:game.time,recoveries:object.movementRecovery?.recoveries||0};
    flightSearches.set(object,job);
  }
  job.requestedAt=game.time;
  while(job.index<job.candidates.length&&game.navigation.takeSearchCredit(object,game.time)){
    const chosen=job.candidates[job.index++].point;
    if(!clear(job.position,chosen.position))continue;
    object.flightDetour={target:chosen.id,until:game.time+3};cancelBatFlightSearch(game,object);return chosen.position;
  }
  if(job.index===job.candidates.length){object.flightDetour={target:null,until:game.time+.5};cancelBatFlightSearch(game,object);}
  return target;
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

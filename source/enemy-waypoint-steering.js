import {enemyRandom} from './enemy-navigation.js';
import {chooseTouchPursuit} from './enemy-combat-native.js';

const distance=(a,b)=>Math.hypot(a[0]-b[0],a[1]-b[1],a[2]-b[2]);
const bearing=(target,point)=>Math.atan2(-(point[2]-target[2]),point[0]-target[0]);
// Native selectors 0x5997e0 (closer) and 0x599c80 (CW/CCW). Only the
// current node's <=8 neighbors participate; neither is a whole-map search.
export function selectTouchWaypoint(navigation,object,player,state,isBusy=()=>false) {
  const current=navigation.find(object.patrol?.current)||navigation.find(object.patrol?.start);
  if(!current)return null;
  const currentDistance=distance(current.position,player),angle=bearing(player,current.position);
  const minimum=Number(object.stats?.MinPlayerDistance)||0;
  const closer=[];let best=null,bestDistance=99999.8984375;
  let checked=0;
  for(const id of navigation.links.get(current.id)||[]){
    if(checked++===8)break;
    const candidate=navigation.find(id);
    if(!candidate||isBusy(id)||Number(object.entity.UnlinkStartPoint)&&object.patrol.leftStart&&id===object.patrol.start)continue;
    const d=distance(candidate.position,player);
    if(d<minimum)continue;
    if(state.mode==='closer'){if(d<currentDistance)closer.push(candidate);continue;}
    const delta=bearing(player,candidate.position)-angle;
    const clockwise=(delta>=-Math.PI&&delta<0)||(delta>=Math.PI&&delta<2*Math.PI);
    if(clockwise!==(state.direction<0))continue;
    // Touch enemies pass desired radius=0. Strict comparison preserves the
    // authored first neighbor on a tie, including across the +/-pi seam.
    if(d<bestDistance){best=candidate;bestDistance=d;}
  }
  return state.mode==='closer'?(closer.length?closer[Math.floor(enemyRandom(object)*32768)%closer.length]:null):best;
}

export function touchWaypointTarget(game,object,dt,player,lineOfSight) {
  const nav=game.navigation;
  if(!object.patrol||!nav.find(object.patrol.start))return undefined;
  nav.build(lineOfSight);
  let state=object.batContact;
  if(!state||state.version!==2)state=object.batContact=chooseTouchPursuit(object);
  const patrol=object.patrol;object.waypointActive=true;
  nav.syncReservations(game.objects,game.time,player);nav.syncReservation(object);
  if(state.wait>0){
    state.wait=Math.max(0,state.wait-dt);
    if(state.wait===0)object.batContact=null;
    return null;
  }
  let point=nav.find(patrol.target);
  const arrived=point&&(object.flying?distance(object.position,point.position):Math.hypot(object.position[0]-point.position[0],object.position[2]-point.position[2]))<.1;
  if(arrived){
    patrol.previous=patrol.current;patrol.current=point.id;patrol.target=null;
    patrol.reacquiring=false;
    if(point.id!==patrol.start)patrol.leftStart=true;
    nav.syncReservation(object);point=null;
  }
  // Recovery/older saves can put the body off its saved node. Reacquire it
  // through the bounded obstacle navigator rather than label an arbitrary
  // cross-wall segment as an authored edge. Normal edge travel never searches.
  const current=nav.find(patrol.current)||nav.find(patrol.start);
  if(!point&&current&&(object.flying?distance(object.position,current.position):Math.hypot(object.position[0]-current.position[0],object.position[2]-current.position[2]))>=.1){
    point=current;patrol.reacquiring=true;
  }
  if(point&&!patrol.current)patrol.reacquiring=true;
  if(!point)point=selectTouchWaypoint(nav,object,player,state,id=>nav.waypointBusy(id,object));
  if(point){patrol.target=point.id;patrol.relocating=false;nav.syncReservation(object);}
  // Native 0x596b00 selects first, then tests completion. At expiry the
  // just-selected edge survives into the next mode, but is not advanced yet.
  // 0x597170 starts its clock on first update and expires strictly after 2s.
  const remaining=state.remaining-(state.started?dt:0);state.started=true;
  if(state.mode==='circle'){
    state.remaining=Math.max(0,remaining);
    if(remaining<-1e-8){object.batContact=null;return null;}
  }
  if(!point){state.wait=1;return null;}
  return point;
}

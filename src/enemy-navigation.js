import { clockFaceActorYaw } from './actor-placement.js';
// The original levels mix explicit GrobberPathPoint links with automatically
// connected points. Keep this graph independent of rendering and platform APIs.
const number=(value,fallback=0)=>Number.isFinite(Number(value))?Number(value):fallback;
const point=value=>String(value||'0 0 0').trim().split(/\s+/).map(Number);
const distance=(a,b)=>Math.hypot(...a.map((v,i)=>v-b[i]));
const difference=(a,b)=>a.map((v,i)=>v-b[i]);
const dot=(a,b)=>a.reduce((sum,v,i)=>sum+v*b[i],0);
const pointSegmentDistance=(p,a,b)=>{
  const ab=difference(b,a),length2=dot(ab,ab);
  const t=length2?Math.max(0,Math.min(1,dot(difference(p,a),ab)/length2)):0;
  return distance(p,a.map((v,i)=>v+ab[i]*t));
};
const sideXZ=(a,b,p)=>(b[0]-a[0])*(p[2]-a[2])-(b[2]-a[2])*(p[0]-a[0]);
const crossesXZ=(a,b,c,d)=>sideXZ(a,b,c)*sideXZ(a,b,d)<0&&sideXZ(c,d,a)*sideXZ(c,d,b)<0;

export function enemyRandom(object) {
  // Per-enemy state makes patrol choices and shot spread survive a save/load.
  let state=object.aiRandomState>>>0;
  if(!state){state=2166136261;for(const c of object.id)state=Math.imul(state^c.charCodeAt(0),16777619)>>>0;}
  state^=state<<13;state^=state>>>17;state^=state<<5;
  object.aiRandomState=state>>>0;return object.aiRandomState/4294967296;
}

export class EnemyNavigation {
  constructor(level,settings={}) {
    this.settings={MaxConnectionDistance:300,MaxWayPointHeight:50,DistanceToWalls:15,MaxDegreesBetweenLinks:30,MinPointToLineDistance:30,...settings};
    this.points=level.entities.filter(e=>e.classname==='GrobberPathPoint').map(e=>({
      id:e['%name%'],name:e.DaviName,position:point(e.Origin),subsystem:number(e.SubSystemId),
      explicit:[1,2,3,4].map(i=>e['WayPoint'+i]).filter(Boolean),entity:e
    }));
    this.names=new Map();for(const p of this.points)for(const name of [p.id,p.name])if(name)this.names.set(name.toLowerCase(),p);
    this.links=new Map();this.ready=false;
  }

  find(id){return this.names.get(String(id||'').toLowerCase());}

  initialize(object) {
    const start=this.find(object.entity.StartPoint);
    object.patrol=start?{start:start.id,current:null,target:start.id,previous:null,leftStart:false,relocating:false}:null;
    object.yaw=clockFaceActorYaw(number(object.entity.StartOrientation));
  }

  automaticLinkObstructed(a,b) {
    // Native 0x5980d0 compares normalized 3D link directions at both ends.
    // Explicit authored edges bypass this automatic graph-pruning phase.
    const degrees=number(this.settings.MaxDegreesBetweenLinks,30),cosine=Math.cos(degrees*Math.PI/180);
    if(degrees>0)for(const [from,to] of [[a,b],[b,a]]){
      const direction=difference(to.position,from.position),length=Math.hypot(...direction);
      for(const id of this.links.get(from.id)||[]){
        const linked=this.find(id),other=difference(linked.position,from.position),otherLength=Math.hypot(...other);
        if(length&&otherLength&&dot(direction,other)/(length*otherLength)>cosine)return true;
      }
    }
    // 0x59eeb0 checks all other points, using a 3D segment distance rather
    // than only the distance to the infinite line or horizontal projection.
    const clearance=number(this.settings.MinPointToLineDistance,30);
    if(clearance>0&&this.points.some(p=>p!==a&&p!==b&&pointSegmentDistance(p.position,a.position,b.position)<clearance))return true;
    // 0x59ebb0 / 0x59eb10 use strict opposite-side tests in XZ. The native
    // directed-edge iteration checks a crossing if either existing endpoint
    // is within the configured height of either proposed endpoint.
    const height=number(this.settings.MaxWayPointHeight,50),seen=new Set();
    for(const p of this.points)for(const id of this.links.get(p.id)||[]){
      const q=this.find(id),key=[p.id,q.id].sort().join('\0');
      if(seen.has(key))continue;seen.add(key);
      if(p===a||p===b||q===a||q===b)continue;
      if(![p,q].some(end=>[a,b].some(candidate=>Math.abs(end.position[1]-candidate.position[1])<=height)))continue;
      if(crossesXZ(a.position,b.position,p.position,q.position))return true;
    }
    return false;
  }

  build(lineOfSight=()=>true) {
    if(this.ready)return;this.ready=true;
    for(const p of this.points)this.links.set(p.id,new Set());
    const connect=(a,b)=>{if(a&&b&&a!==b&&a.subsystem===b.subsystem){this.links.get(a.id).add(b.id);this.links.get(b.id).add(a.id);}};
    // Explicit links can rise out of a grave or through a scripted doorway and
    // must not be discarded by the automatic-link height/distance restrictions.
    for(const p of this.points)for(const name of p.explicit)connect(p,this.find(name));
    const maxDistance=number(this.settings.MaxConnectionDistance,300),height=number(this.settings.MaxWayPointHeight,50);
    for(const p of this.points) {
      const candidates=this.points.filter(q=>q!==p&&q.subsystem===p.subsystem&&Math.abs(q.position[1]-p.position[1])<=height&&distance(q.position,p.position)<=maxDistance)
        .sort((a,b)=>distance(p.position,a.position)-distance(p.position,b.position));
      for(const q of candidates) {
        if(this.links.get(p.id).size>=8)break;
        if(this.links.get(q.id).size>=8||this.links.get(p.id).has(q.id))continue;
        if(this.automaticLinkObstructed(p,q))continue;
        const a=p.position.map((v,i)=>v+(i===1?12:0)),b=q.position.map((v,i)=>v+(i===1?12:0));
        if(!lineOfSight(a,b))continue;
        // Parallel offset rays retain the native wall-clearance restriction.
        const dx=b[0]-a[0],dz=b[2]-a[2],length=Math.hypot(dx,dz)||1,w=number(this.settings.DistanceToWalls,15);
        const offset=[dz/length*w,0,-dx/length*w];
        if(![-1,1].every(sign=>lineOfSight(a.map((v,i)=>v+offset[i]*sign),b.map((v,i)=>v+offset[i]*sign))))continue;
        connect(p,q);
      }
    }
  }

  choose(object,{relocate=false,player=null,canTravel=null}={}) {
    const state=object.patrol;if(!state)return null;
    const current=this.find(state.current)||this.find(state.start);if(!current)return null;
    let candidates=[...(this.links.get(current.id)||[])].map(id=>this.find(id)).filter(Boolean);
    if(canTravel)candidates=candidates.filter(canTravel);
    if(number(object.entity.UnlinkStartPoint)&&state.leftStart)candidates=candidates.filter(p=>p.id!==state.start);
    const onward=candidates.filter(p=>p.id!==state.previous);if(onward.length)candidates=onward;
    if(relocate&&player) {
      const allowed=candidates.filter(p=>distance(p.position,player)>=number(object.stats.MinPlayerDistance));
      if(allowed.length)candidates=allowed;
    }
    if(!candidates.length)return null;
    const target=candidates[Math.floor(enemyRandom(object)*candidates.length)];
    state.target=target.id;state.relocating=relocate;return target;
  }

  target(object,lineOfSight,{relocate=false,player=null}={}) {
    this.build(lineOfSight);const state=object.patrol;if(!state)return null;
    let target=this.find(state.target);
    const atTarget=target&&(object.flying?distance(object.position,target.position):Math.hypot(object.position[0]-target.position[0],object.position[2]-target.position[2]))<5;
    if(atTarget){
      const finishedRelocation=state.relocating;
      state.previous=state.current;state.current=target.id;state.target=null;
      if(target.id!==state.start)state.leftStart=true;
      state.relocating=false;
      if(finishedRelocation)return null;
      target=null;
    }
    return target||this.choose(object,{relocate,player});
  }
}

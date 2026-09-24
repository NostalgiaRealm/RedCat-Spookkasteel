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
    // Search iterators are transient: completed routes alone belong in saves.
    this.pursuitJobs=new Map();this.searchFrame=null;this.searchCredits=new Map();this.searchUnassigned=0;this.searchTraces=0;this.searchCursor=0;
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

  *routeChecks(start,goal,excluded) {
    // Native 0x59c630 floods from the destination with integer hop labels.
    // Once the start is labelled, all lower-hop labels needed by the route
    // already exist; flooding the remainder cannot improve that route.
    if(!start||!goal||start.subsystem!==goal.subsystem)return null;
    const hops=new Map([[goal.id,0]]),queue=[goal];
    search: for(let i=0;i<queue.length&&!hops.has(start.id);i++)for(const id of this.links.get(queue[i].id)||[]) {
      const next=this.find(id);
      if(hops.has(id)||excluded.has(id)||!(yield [next,queue[i]]))continue;
      hops.set(id,hops.get(queue[i].id)+1);queue.push(next);
      if(id===start.id)break search;
    }
    if(!hops.has(start.id))return null;
    const route=[];let current=start;
    while(current!==goal) {
      let next=null;
      for(const id of this.links.get(current.id)||[]) {
        const p=this.find(id);
        if(hops.get(id)===hops.get(current.id)-1&&(yield [current,p])){next=p;break;}
      }
      if(!next)return null;
      route.push(next.id);current=next;
    }
    return route;
  }

  route(start,goal,{excluded=new Set(),canTravel=()=>true}={}) {
    const search=this.routeChecks(start,goal,excluded);let step=search.next();
    while(!step.done)step=search.next(canTravel(...step.value));
    return step.value;
  }

  *pursuitChecks(object,position,goal) {
    const start=this.find(object.patrol.current)||this.find(object.patrol.start);
    if(!start)return [];
    const excluded=new Set(number(object.entity.UnlinkStartPoint)&&object.patrol.leftStart?[object.patrol.start]:[]);
    const points=this.points.filter(p=>p.subsystem===start.subsystem&&!excluded.has(p.id));
    const nearest=target=>points.map(p=>({p,d:(p.position[0]-target[0])**2+(p.position[1]-target[1])**2+(p.position[2]-target[2])**2}))
      .sort((a,b)=>a.d-b.d).map(entry=>entry.p);
    // Previously every one of 370 points was swept before keeping just four
    // origins/eight terminals. Stop as soon as those nearest candidates exist.
    const candidates=nearest(position),origins=[];let candidateIndex=0;
    const edgeClearance=new Map();let ends=0;
    for(const end of nearest(goal)) {
      if(!(yield [end.position,goal]))continue;
      for(let index=0;index<4;index++) {
        // Discover further origins only if the nearer one has no route to
        // this terminal. This preserves candidate order without sweeping the
        // rest of the level just to fill four slots before trying any route.
        while(index>=origins.length&&candidateIndex<candidates.length) {
          const p=candidates[candidateIndex++];
          if(yield [position,p.position])origins.push(p);
        }
        const origin=origins[index];if(!origin)break;
        const search=this.routeChecks(origin,end,excluded);let step=search.next();
        while(!step.done) {
          const [a,b]=step.value,key=[a.id,b.id].sort().join('\0');
          if(!edgeClearance.has(key))edgeClearance.set(key,(yield [a.position,b.position])&&(yield [b.position,a.position]));
          step=search.next(edgeClearance.get(key));
        }
        if(!step.value)continue;
        if(Math.hypot(position[0]-origin.position[0],position[2]-origin.position[2])>=.1)step.value.unshift(origin.id);
        return step.value;
      }
      if(!origins.length||++ends===8)break;
    }
    return [];
  }

  pursuitTarget(object,goal,lineOfSight,trace,now) {
    if(!trace||!object.patrol)return goal;
    const mins=object.collisionMins||[-12,0,-12],maxs=object.collisionMaxs||[12,45,12];
    // RedCat jumping must not aim a grounded enemy's horizontal sweep upward.
    const clear=(a,b)=>{const hit=trace(a,[b[0],a[1],b[2]],mins,maxs);return !hit.startSolid&&hit.fraction>.999;};
    if(clear(object.position,goal)){object.pursuit=null;this.pursuitJobs.delete(object);return goal;}
    this.build(lineOfSight);
    const nextTarget=()=>{
      const route=object.pursuit?.route;
      while(route?.length&&Math.hypot(object.position[0]-this.find(route[0]).position[0],object.position[2]-this.find(route[0]).position[2])<.1)route.shift();
      const next=this.find(route?.[0]);
      return next&&clear(object.position,next.position)?next.position:goal;
    };
    // A blocked next edge or a moving target must not bypass the retry timer.
    // Local collision still runs every frame; direct pursuit resumes at once
    // when its sweep clears (including when a door opens).
    if(object.pursuit?.until>now)return nextTarget();
    let job=this.pursuitJobs.get(object);
    // A paused/abandoned pursuit or a substantially changed endpoint must
    // not install an old route. Keep short searches stable while RedCat moves.
    if(job&&(now-job.lastRequestedAt>.25||now-job.startedAt>4||distance(job.goal,goal)>96||distance(job.position,object.position)>48)) {
      this.pursuitJobs.delete(object);job=null;
    }
    if(!job) {
      const position=[...object.position],search=this.pursuitChecks(object,position,[...goal]);
      job={search,step:search.next(),goal:[...goal],position,startedAt:now,lastRequestedAt:now};this.pursuitJobs.set(object,job);
    }
    job.lastRequestedAt=now;
    if(this.searchFrame!==now) {
      this.searchFrame=now;this.searchTraces=0;this.searchCredits.clear();this.searchUnassigned=48;
      for(const [enemy,pending] of this.pursuitJobs)if(now-pending.lastRequestedAt>.25||enemy.enabled===false||enemy.health<=0)this.pursuitJobs.delete(enemy);
      const waiting=[...this.pursuitJobs.keys()];
      // Reserve each waiting enemy's share; fixed object iteration order must
      // not let the first three searches take all the collision checks.
      for(let round=0;round<16&&this.searchUnassigned>0;round++)for(let i=0;i<waiting.length&&this.searchUnassigned>0;i++) {
        const enemy=waiting[(i+this.searchCursor)%waiting.length];
        this.searchCredits.set(enemy,(this.searchCredits.get(enemy)||0)+1);this.searchUnassigned--;
      }
      this.searchCursor=waiting.length?(this.searchCursor+1)%waiting.length:0;
    }
    if(!this.searchCredits.has(object)) {
      const credit=Math.min(16,this.searchUnassigned);this.searchCredits.set(object,credit);this.searchUnassigned-=credit;
    }
    // The old route/direct goal still uses the normal collision controller
    // while pending work continues next frame. No enemy update is skipped.
    let credit=this.searchCredits.get(object);
    while(!job.step.done&&credit>0) {
      credit--;this.searchTraces++;
      job.step=job.search.next(clear(...job.step.value));
    }
    this.searchCredits.set(object,credit);
    if(job.step.done) {
      object.pursuit={goal:job.goal,route:job.step.value,until:now+.5};
      this.pursuitJobs.delete(object);
    }
    return nextTarget();
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
    // Native cursor 0x59c049–0x59c08a reaches the exact waypoint before
    // selecting another edge. A five-unit shortcut cuts grounded hulls into
    // corners, notably the graveyard frogs' point265 -> point124 turn.
    // Allow only the BSP sweep's .05-unit separation margin at the endpoint.
    const atTarget=target&&(object.flying?distance(object.position,target.position)<5:Math.hypot(object.position[0]-target.position[0],object.position[2]-target.position[2])<.1);
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

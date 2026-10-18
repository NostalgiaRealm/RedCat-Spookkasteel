const clamp=(x,a=0,b=1)=>Math.max(a,Math.min(b,x));
const number=(entity,key,fallback)=>Number.isFinite(Number(entity[key]))&&entity[key]!==''?Number(entity[key]):fallback;

// CAdamEffectCorona 0x57aa6d–0x57ab3a changes its RADIUS, not alpha.
// The fade rate uses RadiusMax even when distance requests a smaller radius.
export function nativeCoronaRadius(current,entity,distance,visible,dt) {
  const min=number(entity,'RadiusMin',1),max=number(entity,'RadiusMax',10);
  const near=number(entity,'RadiusDistanceMin',100),far=number(entity,'RadiusDistanceMax',1000);
  const target=visible?min+(max-min)*clamp((distance-near)/Math.max(.001,far-near)):0;
  const fade=number(entity,'FadeTime',.2);
  if(fade<=0)return target;
  const step=Math.max(0,dt)*max/fade;
  return visible?Math.min(target,Math.max(0,current)+step):Math.max(0,current-step);
}

// The native beacon writes a shared offset once for each assembled ray
// (0x46bc67–0x46bcde). After +.03 it scrolls down; there is no lower reversal.
// Convert that frame-dependent native routine to a deterministic 60 Hz clock.
// Closed-form summation avoids replaying a long save's elapsed time.
export function saveBeaconUv(age,rayIndex) {
  const tick=Math.max(0,Math.floor(Math.max(0,age)*60+1e-8));
  let calls=rayIndex+1;
  for(let i=1;i<=7;i++)calls+=Math.max(0,tick-i*36);
  const offset=calls<=3?calls*.01:.06-calls*.01;
  return {uvStart:.97+offset,uvEnd:.03+offset};
}

// World/model-only visibility queries are budgeted rather than issuing a
// fresh BSP trace for every torch each frame. Oldest first prevents starvation.
export class CoronaVisibilityCache {
  constructor({budget=8,interval=.1}={}){this.budget=budget;this.interval=interval;this.time=0;this.entries=new Map();}
  update(dt,candidates,trace) {
    if(!(dt>0))return;
    this.time+=dt;
    const due=[];
    for(const candidate of candidates) {
      let record=this.entries.get(candidate.id);
      if(!record){record={visible:false,checked:-Infinity};this.entries.set(candidate.id,record);}
      if(!candidate.enabled||!candidate.inFront){record.visible=false;continue;}
      if(this.time-record.checked+1e-9>=this.interval)due.push({candidate,record});
    }
    due.sort((a,b)=>a.record.checked-b.record.checked);
    for(let i=0;i<Math.min(this.budget,due.length);i++) {
      const {candidate,record}=due[i];record.visible=!!trace(candidate);record.checked=this.time;
    }
  }
  visible(id){return this.entries.get(id)?.visible===true;}
}

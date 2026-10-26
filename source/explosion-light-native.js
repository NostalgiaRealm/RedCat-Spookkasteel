// RcExplosion light cell 0x58dbdd..0x58dd4a; CAdamLight Tick 0x4e2590;
// step-interpolator 0x568e00/0x569480/0x5690f0. New light actors appended
// during a cell Tick enter the native reverse actor walk on its NEXT Tick.
const PATTERN='pszzzspmea';
const NORMAL=Object.freeze([1,192/255,0]);
const GREEN=Object.freeze([34/255,218/255,40/255]);
const milliseconds=tick=>Math.floor(tick*1000/60+1e-7);
const sample=phase=>Math.fround((PATTERN.charCodeAt(Math.floor(phase/100))-97)*Math.fround(.04));
const lights=new WeakMap();
const LAST_TICK=62;
export const NATIVE_LIGHT_RETAIN_SECONDS=LAST_TICK/60;
const createState=birth=>({version:1,birth,tick:0,phaseMs:0,lifeEndMs:null,sample:1,active:true});

// Kept independent of display refresh. This is the original light/interpolator
// ordering, including sample-before-advance and a lazily armed inclusive timer.
export function tickNativeLight(state,nowMs,dtMs) {
  state.sample=sample(state.phaseMs);
  state.phaseMs=(state.phaseMs+dtMs)%1000;
  if(state.lifeEndMs===null)state.lifeEndMs=nowMs+1000;
  else if(nowMs>state.lifeEndMs)state.active=false;
}

export function advanceNativeLight(state,time) {
  if(!Number.isFinite(time)||time<state.birth)return state;
  const target=Math.min(LAST_TICK,Math.floor((time-state.birth)*60+1e-7));
  while(state.tick<target&&state.active){
    const prior=milliseconds(state.tick),now=milliseconds(++state.tick);
    tickNativeLight(state,now,now-prior);
  }
  return state;
}

export function restoreNativeLightState(saved,birth,time) {
  const tick=saved?.tick;
  const valid=saved?.version===1&&saved.birth===birth&&Number.isInteger(tick)&&tick>=0&&tick<=LAST_TICK&&
    tick<=Math.floor((time-birth)*60+1e-7)&&saved.phaseMs===milliseconds(tick)%1000&&
    saved.lifeEndMs===(tick?1016:null)&&saved.sample===(tick?sample(milliseconds(tick-1)%1000):1)&&
    saved.active===(tick<LAST_TICK);
  // Copy only scalar clock fields; no renderer, callbacks or resource handles.
  return valid?{version:1,birth,tick,phaseMs:saved.phaseMs,lifeEndMs:saved.lifeEndMs,sample:saved.sample,active:saved.active}:
    advanceNativeLight(createState(birth),time);
}

export function snapshotNativeLight(record,time) {
  if(time<record.birth)return null;
  const state=lights.get(record)?.state||restoreNativeLightState(record.lightState,record.birth,time);
  // A save can run between presentation updates. Advance a scalar copy to
  // the save clock, so a restored/offscreen cohort does not retain stale light
  // time while an equivalent never-rendered cohort reconstructs further ahead.
  return advanceNativeLight({...state},time);
}

export function nativePatternLight(record,time,maximum,color) {
  if(!Number.isFinite(time)||time<record.birth||!(maximum>0))return null;
  let entry=lights.get(record);
  if(!entry){
    entry={state:restoreNativeLightState(record.lightState,record.birth,time),
      light:{position:record.position,color,radius:maximum,intensity:1}};
    lights.set(record,entry);
  }
  advanceNativeLight(entry.state,time);
  if(!entry.state.active)return null;
  entry.light.radius=Math.fround(maximum*entry.state.sample);
  return entry.light;
}

export function nativeExplosionLight(blast,time) {
  if(blast.smokeOnly||!(blast.diameter>0))return null;
  // Flash diameter = percentage*.01*20*32; radius maximum is the native
  // percentage*.01*800, stored to float32 then truncated to an integer.
  const maximum=Math.trunc(Math.fround(blast.diameter*1.25));
  return nativePatternLight(blast,time,maximum,blast.green?GREEN:NORMAL);
}

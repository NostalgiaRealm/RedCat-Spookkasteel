// RcExplosion 0x58d710 -> SparkGeneratorCell 0x4b58f0 ->
// SparkGeneratorPath 0x4b6220 -> Spark 0x4e48a0/0x4e4bc0.
// This dormant variant has no collision traces. Keep its RNG and fixed visual
// clock independent of AI, ordinary explosions and display refresh rate.
export const ELECTRIC_PATH_TEXTURES=Object.freeze([1,4,5,7,8,9].map(n=>{
  const id=String(n).padStart(2,'0');return `spark_${id}.bmp|spark_a_${id}.bmp`;
}));
export const ELECTRIC_SPARK_TEXTURE='spark.bmp|spark_a.bmp';
export const ELECTRIC_TRAIL_TEXTURE='grobber_trail3.bmp|';
export const ELECTRIC_SPARK_UVS=Object.freeze([[1,1],[1,0],[0,0],[0,1]]);
const STEP=1/60,MAX_STEPS=6,MAX_TICKS=150,MAX_SPARKS=512,MAX_TRAIL=80;
const milliseconds=tick=>Math.floor(tick*1000/60+1e-7);
const vector=a=>Array.isArray(a)&&a.length===3&&a.every(Number.isFinite);
const normalize=a=>{const length=Math.hypot(...a);return length?a.map(x=>x/length):[0,0,0];};
const random=s=>{s.rng=(Math.imul(s.rng,214013)+2531011)>>>0;return(s.rng>>>16)&32767;};
const fraction=s=>random(s)%10000*.0001;
const direction=s=>normalize([fraction(s)*2-1,fraction(s)*2-1,fraction(s)*2-1]);

export function createElectricExplosion(blast,{effectsQuality=3}={}) {
  if(effectsQuality!==3||!blast?.electric||!vector(blast.position)||!Number.isFinite(blast.birth))return null;
  let rng=2166136261;
  for(const c of String(blast.id)+':electric')rng=Math.imul(rng^c.charCodeAt(0),16777619);
  const state={version:1,id:String(blast.id),birth:blast.birth,position:[...blast.position],rng:rng>>>0,
    tick:-1,cellStarted:null,cellElapsed:0,spawned:0,nextId:0,paths:[],sparks:[],sounds:[],quietUntil:-1,active:true};
  // 0x58da7c..0x58dbcc: one velocity belongs to the cell and is copied
  // into all three paths, rather than randomized separately per path.
  const x=(30+fraction(state)*10)*(random(state)%2?-1:1);
  state.velocity=[x*.5,(350+fraction(state)*100)*.5,(fraction(state)*80-40)*.5];
  return state;
}

function createPath(state,now) {
  // Preserve ctor draws, including the values overwritten by the first burst.
  const scale=.25+fraction(state)*.3;
  const sizeStart=80+fraction(state)*10,sizeEnd=50+fraction(state)*20;
  const alphaStart=80+fraction(state)*10,alphaEnd=40+fraction(state)*20;
  return {id:state.nextId++,bornTick:state.tick,position:[...state.position],referenceVelocity:[...state.velocity],
    velocity:[0,0,0],nextVelocity:[5,50,5],lifeEnd:null,interval:-1,intervalEnd:null,
    baseScale:null,spriteScale:scale,sizeStart,sizeEnd,alphaStart,alphaEnd,rgba:[255,255,255,255],
    texture:ELECTRIC_PATH_TEXTURES[0],trail:[],trailHalfWidth:.64,trailColor:[250,250,200],trailLife:.3,now};
}

export function stepElectricSpark(spark,dt) {
  // 0x4e4bc0: translate first; gravity follows. Tail begins moving on the
  // tick AFTER the head has reached the 1.92-unit separation threshold.
  const scaled=dt*Math.fround(.7),gravity=1.5*50*scaled;
  for(let i=0;i<3;i++)spark.head[i]+=spark.velocity[i]*scaled;
  spark.velocity[1]-=gravity;
  if(spark.tailMoving) {
    for(let i=0;i<3;i++)spark.tail[i]+=spark.tailVelocity[i]*scaled;
    spark.tailVelocity[1]-=gravity;
  } else if(Math.hypot(...spark.head.map((v,i)=>v-spark.tail[i]))>=Math.fround(1.92))spark.tailMoving=true;
}

export function electricSparkQuad(spark,out=Array.from({length:4},()=>[0,0,0])) {
  // 0x4e4ee2..0x4e5139: a tapered world-oriented quad, not a billboard.
  const d=normalize(spark.head.map((v,i)=>v-spark.tail[i]));
  let axis=[0,d[1]<0?-1:1,0];
  if(d.every((v,i)=>Math.abs(v-axis[i])<=Math.fround(.1)))axis=[0,0,d[2]<0?-1:1];
  const side=normalize([d[1]*axis[2]-d[2]*axis[1],d[2]*axis[0]-d[0]*axis[2],d[0]*axis[1]-d[1]*axis[0]]);
  for(let i=0;i<3;i++) {
    out[0][i]=spark.tail[i]+side[i]*.16;out[1][i]=spark.tail[i]-side[i]*.16;
    out[2][i]=spark.head[i]-side[i]*.32;out[3][i]=spark.head[i]+side[i]*.32;
  }
  return out;
}

function burst(state,path,now) {
  // 0x4b6380 resamples the loop bound on every iteration: not a uniform
  // single draw of a count in [10,20]. Even its last failed check consumes RNG.
  for(let i=0;i<random(state)%11+10;i++) {
    const velocity=direction(state).map(v=>v*60);
    random(state); // Spark ctor's 3500ms lifetime draw is overridden below.
    const life=Math.trunc(300+(random(state)%10000)*Math.fround(.02));
    state.sparks.push({id:state.nextId++,bornTick:state.tick,life,lifeEnd:null,
      head:[...path.position],tail:[...path.position],velocity,tailVelocity:[...velocity],tailMoving:false,
      rgba:[250,240,180,255],texture:ELECTRIC_SPARK_TEXTURE});
  }
  const crackle=random(state)%20;
  const time=state.birth+now/1000;
  if(crackle<6&&time>state.quietUntil)state.sounds.push({time,position:[...path.position],sound:`spark${crackle+1}.wav`,volume:1});
  path.sizeStart=100;path.spriteScale=.3+fraction(state)*.2;
  path.sizeEnd=fraction(state)*10;path.alphaStart=60+fraction(state)*20;path.alphaEnd=fraction(state)*20;
  const length=Math.hypot(...path.referenceVelocity),d=direction(state);
  const sign=d.reduce((dot,v,i)=>dot+v*path.referenceVelocity[i],0)<0?-1:1;
  path.nextVelocity=d.map(v=>v*length*sign);
  path.texture=ELECTRIC_PATH_TEXTURES[random(state)%6];
  // float .1/.13 and the native integer-ms timer setter (0x4b76b9).
  path.interval=Math.trunc(Math.fround(.1)*1000+(Math.fround(.13)-Math.fround(.1))*(random(state)%10000)*Math.fround(.1));
  path.intervalEnd=null;
  // 0x5871a0 fixes the current endpoint at a turn, then adds a new head.
  if(path.trail.length>1) {
    const point=path.trail.at(-1);point.position=[...path.position];point.time=now/1000;
    path.trail.push({position:[...path.position],time:now/1000,opacity:1});
  }
}

function stepPath(state,path,now,dt) {
  path.referenceVelocity[1]-=dt*9.8*32;
  if(path.interval<0)burst(state,path,now);
  else if(path.intervalEnd===null)path.intervalEnd=now+path.interval;
  else if(now>path.intervalEnd)burst(state,path,now);
  if(path.lifeEnd===null)path.lifeEnd=now+1000;
  const remaining=Math.max(0,(path.lifeEnd-now)/1000);
  if(path.baseScale===null)path.baseScale=path.spriteScale;
  path.spriteScale=path.baseScale*(path.sizeStart*remaining+path.sizeEnd*(1-remaining))*.01;
  path.rgba[3]=255*(path.alphaStart*remaining+path.alphaEnd*(1-remaining))*.01;
  for(let i=0;i<3;i++)path.position[i]+=path.velocity[i]*dt;
  for(let i=0;i<3;i++)path.velocity[i]=path.nextVelocity[i];
  const trail=path.trail,point=trail.at(-1),prior=trail.at(-2);
  if(point){for(let i=0;i<3;i++)point.position[i]=path.position[i];point.time=now/1000;}
  if(!point||!prior||Math.hypot(...path.position.map((v,i)=>v-prior.position[i]))>16)
    trail.push({position:[...path.position],time:now/1000,opacity:1});
  // Keep one fully faded endpoint to interpolate a crossing segment. Native
  // draw skips segments only after both endpoint alphas are below its cutoff.
  while(trail.length>2&&now/1000-trail[1].time>.3)trail.shift();
  for(const p of trail)p.opacity=Math.max(0,1-(now/1000-p.time)/.3)*path.rgba[3]/255;
  if(trail.length>MAX_TRAIL)trail.splice(0,trail.length-MAX_TRAIL);
  path.now=state.birth+now/1000;
  return now<=path.lifeEnd;
}

function tick(state) {
  state.tick++;
  const now=milliseconds(state.tick),previous=milliseconds(state.tick-1),dt=(now-previous)/1000;
  // 0x4f5170 walks the active list from its tail through node+4 (previous).
  // New paths/sparks append at the tail and therefore start next tick.
  let count=0;
  for(const spark of state.sparks) {
    if(spark.lifeEnd===null)spark.lifeEnd=now+spark.life;
    if(now>spark.lifeEnd)continue;
    stepElectricSpark(spark,dt);
    const t=(spark.lifeEnd-now)/spark.life;
    for(let i=0;i<4;i++)spark.rgba[i]=[250,240,180,255][i]*t+[244,213,102,60][i]*(1-t);
    state.sparks[count++]=spark;
  }
  state.sparks.length=count;
  // Newer paths consume their burst RNG first, as in the native reverse walk.
  for(let i=state.paths.length-1;i>=0;i--)
    if(!stepPath(state,state.paths[i],now,dt))state.paths.splice(i,1);
  if(state.cellStarted===null){state.cellStarted=now;state.paths.push(createPath(state,now));state.spawned++;}
  else if(now<=state.cellStarted+699) {
    state.cellElapsed+=now-previous;
    if(state.cellElapsed>=300){state.cellElapsed-=300;state.paths.push(createPath(state,now));state.spawned++;}
  }
  // Three finite paths, <=20 sparks per burst; cap is a corrupt-save guard.
  if(state.sparks.length>MAX_SPARKS)state.sparks.splice(0,state.sparks.length-MAX_SPARKS);
  state.active=now<=state.cellStarted+699||state.paths.length>0||state.sparks.length>0;
}

export function stepElectricExplosion(state,time,{maxSteps=MAX_STEPS,silent=false}={}) {
  state.sounds.length=0;
  if(!Number.isFinite(time)||time<state.birth)return state;
  // Never replay a delayed crackle after restoration, streaming or a stall.
  state.quietUntil=Math.max(state.quietUntil,silent?time:time-.1);
  const target=Math.min(MAX_TICKS,Math.floor((time-state.birth)*60+1e-7));
  const limit=Math.max(0,Math.min(MAX_TICKS+1,Math.floor(maxSteps)));
  for(let i=0;i<limit&&state.tick<target&&state.active;i++)tick(state);
  return state;
}

export function snapshotElectricExplosion(state) {
  if(!state)return null;
  return structuredClone({...state,sounds:[]});
}

export function restoreElectricExplosion(snapshot,blast,time,options) {
  const fresh=createElectricExplosion(blast,options);
  if(!fresh)return null;
  const integer=(n,lo,hi)=>Number.isSafeInteger(n)&&n>=lo&&n<=hi;
  const scalar=(n,lo,hi)=>Number.isFinite(n)&&n>=lo&&n<=hi;
  const rgba=p=>Array.isArray(p)&&p.length===4&&p.every(v=>scalar(v,0,255));
  const now=milliseconds(snapshot?.tick??-1);
  const timer=(n,extra)=>n===null||integer(n,0,now+extra);
  const finiteTree=(value,depth=0)=>depth>12?false:
    typeof value==='number'?Number.isFinite(value):Array.isArray(value)?value.length<=MAX_SPARKS&&value.every(v=>finiteTree(v,depth+1)):
    value&&typeof value==='object'?Object.keys(value).length<40&&Object.values(value).every(v=>finiteTree(v,depth+1)):
    value===null||typeof value==='boolean'||typeof value==='string'&&value.length<160;
  const valid=snapshot?.version===1&&snapshot.id===fresh.id&&snapshot.birth===fresh.birth&&
    Number.isInteger(snapshot.tick)&&snapshot.tick>=-1&&snapshot.tick<=MAX_TICKS&&Number.isInteger(snapshot.rng)&&
    snapshot.rng>=0&&snapshot.rng<=0xffffffff&&vector(snapshot.position)&&vector(snapshot.velocity)&&
    snapshot.position.every((v,i)=>v===fresh.position[i])&&typeof snapshot.active==='boolean'&&
    (snapshot.cellStarted===null||snapshot.cellStarted===0)&&integer(snapshot.cellElapsed,0,299)&&
    integer(snapshot.spawned,0,3)&&integer(snapshot.nextId,0,2000)&&Number.isFinite(snapshot.quietUntil)&&
    Array.isArray(snapshot.paths)&&snapshot.paths.length<=3&&Array.isArray(snapshot.sparks)&&snapshot.sparks.length<=MAX_SPARKS&&
    snapshot.paths.every(p=>p&&integer(p.id,0,snapshot.nextId-1)&&integer(p.bornTick,0,snapshot.tick)&&
      vector(p.position)&&vector(p.velocity)&&vector(p.referenceVelocity)&&vector(p.nextVelocity)&&
      timer(p.lifeEnd,1000)&&timer(p.intervalEnd,129)&&(p.interval===-1||integer(p.interval,100,129))&&
      (p.baseScale===null||scalar(p.baseScale,.299,.501))&&scalar(p.spriteScale,0,1)&&
      scalar(p.sizeStart,0,100)&&scalar(p.sizeEnd,0,100)&&scalar(p.alphaStart,0,100)&&scalar(p.alphaEnd,0,100)&&
      p.trailHalfWidth===.64&&p.trailLife===.3&&vector(p.trailColor)&&Number.isFinite(p.now)&&
      Array.isArray(p.trail)&&p.trail.length<=MAX_TRAIL&&p.trail.every(x=>x&&vector(x.position)&&scalar(x.time,0,Math.max(0,now/1000))&&scalar(x.opacity,0,1))&&
      rgba(p.rgba)&&ELECTRIC_PATH_TEXTURES.includes(p.texture))&&
    snapshot.sparks.every(p=>p&&integer(p.id,0,snapshot.nextId-1)&&integer(p.bornTick,0,snapshot.tick)&&
      vector(p.head)&&vector(p.tail)&&vector(p.velocity)&&vector(p.tailVelocity)&&typeof p.tailMoving==='boolean'&&
      integer(p.life,300,499)&&timer(p.lifeEnd,499)&&rgba(p.rgba)&&p.texture===ELECTRIC_SPARK_TEXTURE)&&finiteTree(snapshot);
  const state=valid?structuredClone(snapshot):fresh;
  state.sounds=[];state.quietUntil=time;
  // Legacy effect descriptions have no dynamic snapshot. Their entire visual
  // lifetime is <2.5s, giving a strict one-time reconstruction bound of151 ticks.
  if(!valid)stepElectricExplosion(state,time,{maxSteps:MAX_TICKS+1,silent:true});
  return state;
}

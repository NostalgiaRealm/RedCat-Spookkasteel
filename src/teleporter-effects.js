// Recovered CRTeleporterFx constants: RcHcGame.dat 0x471bd0, 0x475030,
// 0x475720 and 0x472660. Trajectories and particle density are a portable
// reconstruction, not the recovered native integrator (see docs/world-effects-native.md).
// Analytic paths let a saved sequence resume independently of rendering rate.
export const TELEPORT_EFFECT_SECONDS=7;
const clamp=(x,a=0,b=1)=>Math.max(a,Math.min(b,x));
const mix=(a,b,t)=>a+(b-a)*t;
const cycle=t=>((t%1)+1)%1;

export function showTeleporter(object) {
  // Native Show ignores disabled teleporters and an already running effect.
  if(!object.enabled||Number.isFinite(object.teleportEffectAge)&&object.teleportEffectAge<TELEPORT_EFFECT_SECONDS)return false;
  object.teleportEffectAge=0;object.teleportEffectSerial=(object.teleportEffectSerial||0)+1;return true;
}

export function teleporterGeometry({origin,floorY,ceilingY,waypoints=[],age=0,showAge=null}) {
  const sparks=[],rays=[],discs=[];
  const active=Number.isFinite(showAge)&&showAge>=0&&showAge<TELEPORT_EFFECT_SECONDS;
  // The executable reads WP0..WP3 even when NumberOfWayPoints is zero.
  // At rest, four streams emerge from these authored pad corners.
  const anchors=waypoints.slice(0,4),phase=cycle(age/6),height=(phase<.5?phase*2:2-phase*2)*75;
  const colors=[[20,255,20],[20,20,255],[255,20,20]].map(c=>c.map(v=>v/255));
  for(let i=0;i<Math.min(250,anchors.length*32);i++) {
    const anchor=anchors[i%anchors.length],birth=Math.floor((age-i*.024)/3.25)*3.25+i*.024,t=age-birth;
    if(t<0||t>3)continue;
    const angle=t*5.5+i*2.399963,radius=mix(30,3,t/3),targetY=floorY+(i%2?75-height:height);
    const position=[mix(anchor[0],origin[0],clamp(t)) + Math.cos(angle)*radius*clamp(t),mix(anchor[1],targetY,clamp(t)),mix(anchor[2],origin[2],clamp(t))+Math.sin(angle)*radius*clamp(t)];
    sparks.push({position,size:9,color:colors[i%3],opacity:clamp((3-t)/.7)});
  }
  if(active) {
    // Five energy strands spiral from the traced ceiling onto the pad. Native
    // phase spacing is 2*pi/5, angular speed -7.5, initial/final radii 100/10.
    const flight=6.3,t=clamp(showAge/flight),headY=Math.max(floorY,ceilingY-showAge*200),radius=mix(100,10,t);
    for(let i=0;i<5;i++) {
      const angle=i*Math.PI*2/5-showAge*7.5;
      const end=[origin[0]+Math.cos(angle)*radius,headY,origin[2]+Math.sin(angle)*radius];
      rays.push({start:[end[0],floorY,end[2]],end,width:8,color:[1,1,1],opacity:clamp((TELEPORT_EFFECT_SECONDS-showAge)/.7)});
      sparks.push({position:end,size:16,color:[1,1,.1],opacity:1});
    }
    if(headY===floorY)discs.push({texture:'blast',position:[origin[0],floorY+1,origin[2]],radius:mix(90,25,t),opacity:100/255});
    if(showAge>=flight)discs.push({texture:'fleuri',position:[origin[0],floorY+1.1,origin[2]],radius:80+80*(showAge-flight)/.7,opacity:clamp((TELEPORT_EFFECT_SECONDS-showAge)/.7)});
  }
  return {sparks,rays,discs,light:active?{position:[origin[0],floorY+35,origin[2]],color:[1,1,25/255],radius:110}:null,active};
}

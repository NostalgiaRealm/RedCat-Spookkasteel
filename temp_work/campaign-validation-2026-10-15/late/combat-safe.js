// Ordinary held attack and movement keys; read-only sight/health observation.
window.__fightVisible=async(range=460,frames=1200)=>{
 const g=__redcat.gameplay,begin=g.state.kills,observed=[];
 for(let i=0;i<frames&&g.state.health>0;i++){
  const w=__redcat.world,p=w.player.position,eye=[p[0],p[1]+45,p[2]];
  const foes=g.objects.filter(o=>o.kind==='enemy'&&o.enabled&&o.visible&&o.health>0&&!['unplaced','dormant','buried'].includes(o.ambush?.phase)&&!o.boss?.hidden&&Math.hypot(...o.position.map((v,j)=>v-p[j]))<range).filter(o=>{let b=o.position.map((v,j)=>v+(j===1?(o.collisionMaxs?.[1]||56)*.8:0)),h=w.collider.trace(eye,b,[0,0,0],[0,0,0],w.physicalModels,'blocksLOS');return h.fraction>=1||h.actorId===o.id;}).sort((a,b)=>Math.hypot(...a.position.map((v,j)=>v-p[j]))-Math.hypot(...b.position.map((v,j)=>v-p[j])));
  if(!foes.length)break;
  const o=foes[0],dx=o.position[0]-p[0],dz=o.position[2]-p[2],d=Math.hypot(dx,dz),desired=Math.atan2(-dx,-dz),delta=Math.atan2(Math.sin(desired-w.yaw),Math.cos(desired-w.yaw));
  w.look(-delta/.002/w.settings.sensitivity,0);
  const safe=(side)=>{const q=[p[0]+Math.cos(w.yaw)*side*38,p[1]+10,p[2]-Math.sin(w.yaw)*side*38],h=w.collider.trace(q,[q[0],p[1]-45,q[2]],w.player.mins,w.player.maxs,w.player.modelIndices,'blocksPlayer');return !h.startSolid&&h.fraction<1&&h.end[1]>=p[1]-15&&!g.objects.some(o=>o.kind==='trigger'&&o.enabled&&Number(o.entity.DamagePerSecond)>0&&g.contains(o,h.end));};let side=Math.floor(i/120)%2?-1:1;if(!safe(side))side=safe(-side)?-side:0;let keys=['ControlLeft'];if(side)keys.push(side>0?'KeyD':'KeyA');__press(keys);__stepFrame(1/60);
  if(i%60===0)observed.push({i,id:o.id,health:o.health,p:p.slice(),playerHealth:g.state.health,target:w.targeting.target?.id});
  if(i%10===0)await new Promise(r=>setTimeout(r,0));
 }
 __press([]);for(let i=0;i<80;i++)__stepFrame(1/60);
 return{kills:g.state.kills-begin,observed,status:__status()};
};

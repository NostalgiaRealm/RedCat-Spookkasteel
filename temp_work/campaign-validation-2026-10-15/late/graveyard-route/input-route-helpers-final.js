// Test input and read-only observation helpers. Never changes gameplay state.
window.__held=new Set();window.__campaignLog=[];
window.__status=()=>{let a=__redcat,g=a.gameplay;return {level:a.world.id,mode:a.mode,p:[...a.world.player.position],yaw:a.world.yaw,state:{...g.state},noClip:a.world.player.noClip,scene:g.scripts.cutscene,error:g.scripts.errors,vm:g.scripts.vm.lastError,completed:g.completed}};

window.__press=(codes)=>{let next=new Set(codes);for(let key of __held)if(!next.has(key))window.dispatchEvent(new KeyboardEvent('keyup',{code:key,bubbles:true}));for(let key of next)if(!__held.has(key))window.dispatchEvent(new KeyboardEvent('keydown',{code:key,bubbles:true}));__held=next;};

window.__moveTo=async(target,{limit=1200,jump=false,attack=false,tolerance=16}={})=>{let last=[],stuck=0;for(let i=0;i<limit;i++){let a=__redcat,w=a.world,g=a.gameplay,p=w.player.position;if(w.player.noClip)throw Error('No-clip must stay disabled');if(a.mode!=='playing'||g.state.health<=0||g.scripts.cutscene)break;let dx=target[0]-p[0],dz=target[1]-p[2],d=Math.hypot(dx,dz);if(d<tolerance)break;if(g.scripts.cutscene){__press(['KeyE']);}else{let desired=Math.atan2(-dx,-dz),delta=Math.atan2(Math.sin(desired-w.yaw),Math.cos(desired-w.yaw));w.look(-delta/.002/w.settings.sensitivity,0);let keys=['KeyW'];if(jump&&i%36<2)keys.push('Space');if(attack)keys.push('ControlLeft');__press(keys);}__stepFrame(1/60);if(i%10===0)await new Promise(r=>setTimeout(r,0));if(i%60===0){if(last.length&&Math.hypot(p[0]-last[0],p[2]-last[2])<1)stuck++;else stuck=0;last=[p[0],p[2]];if(stuck>=3&&!g.scripts.cutscene)break;}}__press([]);let result={target,...__status()};__campaignLog.push(result);return result;};

window.__moveToSuper=async(target,{limit=1200,jump=false,attack=false,tolerance=16}={})=>{let last=[],stuck=0;for(let i=0;i<limit;i++){let a=__redcat,w=a.world,g=a.gameplay,p=w.player.position;if(w.player.noClip)throw Error('No-clip must stay disabled');if(a.mode!=='playing'||g.state.health<=0||g.scripts.cutscene)break;let dx=target[0]-p[0],dz=target[1]-p[2],d=Math.hypot(dx,dz);if(d<tolerance)break;if(g.scripts.cutscene){__press(['KeyE']);}else{let desired=Math.atan2(-dx,-dz),delta=Math.atan2(Math.sin(desired-w.yaw),Math.cos(desired-w.yaw));w.look(-delta/.002/w.settings.sensitivity,0);let keys=['KeyW'];if(jump&&(i%72<2||(i%72>=20&&i%72<22)))keys.push('Space');if(attack)keys.push('ControlLeft');__press(keys);}__stepFrame(1/60);if(i%10===0)await new Promise(r=>setTimeout(r,0));if(i%60===0){if(last.length&&Math.hypot(p[0]-last[0],p[2]-last[2])<1)stuck++;else stuck=0;last=[p[0],p[2]];if(stuck>=3&&!g.scripts.cutscene)break;}}__press([]);let result={target,...__status()};__campaignLog.push(result);return result;};

window.__routeHeight=(target,{step=24,maxNodes=60000,stepHeight=16,maxDrop=48,targetY=undefined}={})=>{
 const w=__redcat.world,start=w.player.position.slice(),c=w.collider;
 const goal=[Math.round((target[0]-start[0])/step),Math.round((target[1]-start[2])/step)];
 const heap=[],nodes=new Map(),key=(x,z,y)=>x+','+z+','+Math.round(y/8);
 const push=n=>{heap.push(n);let i=heap.length-1;while(i){let p=(i-1)>>1;if(heap[p].f<=n.f)break;heap[i]=heap[p];i=p;}heap[i]=n;};
 const pop=()=>{let result=heap[0],last=heap.pop();if(heap.length){let i=0;while(i*2+1<heap.length){let child=i*2+1;if(child+1<heap.length&&heap[child+1].f<heap[child].f)child++;if(heap[child].f>=last.f)break;heap[i]=heap[child];i=child;}heap[i]=last;}return result;};
 const initial={x:0,z:0,y:start[1]+.1,g:0,f:0,p:null};push(initial);nodes.set(key(0,0,initial.y),initial);let searched=0;
 while(heap.length&&searched++<maxNodes){const n=pop();if(n.closed)continue;n.closed=true;
  if(n.x===goal[0]&&n.z===goal[1]&&(targetY===undefined||Math.abs(n.y-targetY)<20)){let path=[];for(let q=n;q;q=q.p)path.push([start[0]+q.x*step,q.y,start[2]+q.z*step]);return {path:path.reverse(),searched};}
  for(const [dx,dz] of [[1,0],[-1,0],[0,1],[0,-1],[1,1],[1,-1],[-1,1],[-1,-1]]){
   let x=n.x+dx,z=n.z+dz,a=[start[0]+n.x*step,n.y,start[2]+n.z*step],b=[start[0]+x*step,n.y,start[2]+z*step];
   let hit=c.trace(a,b,w.player.mins,w.player.maxs,w.player.modelIndices,'blocksPlayer');
   if(hit.fraction<.999){let u=[a[0],a[1]+stepHeight,a[2]];if(c.trace(a,u,w.player.mins,w.player.maxs,w.player.modelIndices,'blocksPlayer').fraction<.999)continue;a=u;b[1]=u[1];hit=c.trace(a,b,w.player.mins,w.player.maxs,w.player.modelIndices,'blocksPlayer');if(hit.fraction<.999)continue;}
   let floor=c.trace(b,[b[0],n.y-maxDrop,b[2]],w.player.mins,w.player.maxs,w.player.modelIndices,'blocksPlayer');
   if(floor.startSolid||floor.fraction===1||floor.normal[1]<.65)continue;
   const y=floor.end[1]+.1;if(c.contents([b[0],y,b[2]],w.player.mins,w.player.maxs,w.player.modelIndices)&0x60000)continue;if(__redcat.gameplay.objects.some(o=>o.kind==='trigger'&&o.enabled&&Number(o.entity.DamagePerSecond)>0&&__redcat.gameplay.contains(o,[b[0],y,b[2]])))continue;const k=key(x,z,y),old=nodes.get(k);if(old?.closed)continue;
   let g=n.g+Math.hypot(dx,dz)+Math.abs(y-n.y)/step*.25;if(old&&old.g<=g)continue;
   const node={x,z,y,g,f:g+Math.hypot(goal[0]-x,goal[1]-z),p:n};nodes.set(k,node);push(node);
  }
 }
 return {path:null,searched};
};

window.__walkHeight=async(target,options={})=>{
 let result=__routeHeight(target,options);if(!result.path)return result;
 let results=[];
 // Retain each change of direction/height. Avoid flattening stair routes.
 const path=result.path,chosen=[];
 for(let i=1;i<path.length;i++){let p=path[i],a=path[i-1],b=path[i+1];if(!b||Math.abs(p[1]-a[1])>2||Math.abs(b[1]-p[1])>2||(p[0]-a[0])!==(b[0]-p[0])||(p[2]-a[2])!==(b[2]-p[2]))chosen.push(p);}
 for(const p of chosen){let moved=await __moveTo([p[0],p[2]],{limit:500,tolerance:8,attack:true,...options});results.push(moved);if(Math.hypot(moved.p[0]-p[0],moved.p[2]-p[2])>60)break;}
 return {searched:result.searched,waypoints:chosen,results};
};

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

window.__fightStill=async(range=460,frames=1200)=>{
 const g=__redcat.gameplay,begin=g.state.kills,observed=[];
 for(let i=0;i<frames&&g.state.health>0;i++){
  const w=__redcat.world,p=w.player.position,eye=[p[0],p[1]+45,p[2]];
  const foes=g.objects.filter(o=>o.kind==='enemy'&&o.enabled&&o.visible&&o.health>0&&!['unplaced','dormant','buried'].includes(o.ambush?.phase)&&!o.boss?.hidden&&Math.hypot(...o.position.map((v,j)=>v-p[j]))<range).filter(o=>{let b=o.position.map((v,j)=>v+(j===1?(o.collisionMaxs?.[1]||56)*.8:0)),h=w.collider.trace(eye,b,[0,0,0],[0,0,0],w.physicalModels,'blocksLOS');return h.fraction>=1||h.actorId===o.id;}).sort((a,b)=>Math.hypot(...a.position.map((v,j)=>v-p[j]))-Math.hypot(...b.position.map((v,j)=>v-p[j])));
  if(!foes.length)break;
  const o=foes[0],dx=o.position[0]-p[0],dz=o.position[2]-p[2],d=Math.hypot(dx,dz),desired=Math.atan2(-dx,-dz),delta=Math.atan2(Math.sin(desired-w.yaw),Math.cos(desired-w.yaw));
  w.look(-delta/.002/w.settings.sensitivity,0);
  const safe=(side)=>{const q=[p[0]+Math.cos(w.yaw)*side*38,p[1]+10,p[2]-Math.sin(w.yaw)*side*38],h=w.collider.trace(q,[q[0],p[1]-45,q[2]],w.player.mins,w.player.maxs,w.player.modelIndices,'blocksPlayer');return !h.startSolid&&h.fraction<1&&h.end[1]>=p[1]-15&&!g.objects.some(o=>o.kind==='trigger'&&o.enabled&&Number(o.entity.DamagePerSecond)>0&&g.contains(o,h.end));};let side=Math.floor(i/120)%2?-1:1;if(!safe(side))side=safe(-side)?-side:0;let keys=['ControlLeft'];if(false&&side)keys.push(side>0?'KeyD':'KeyA');__press(keys);__stepFrame(1/60);
  if(i%60===0)observed.push({i,id:o.id,health:o.health,p:p.slice(),playerHealth:g.state.health,target:w.targeting.target?.id});
  if(i%10===0)await new Promise(r=>setTimeout(r,0));
 }
 __press([]);for(let i=0;i<80;i++)__stepFrame(1/60);
 return{kills:g.state.kills-begin,observed,status:__status()};
};

window.__moveOnRaft=async(model,z,frames=600)=>{
 const w=__redcat.world,g=__redcat.gameplay,b=w.level.collision.models[model],trail=[];
 for(let i=0;i<frames&&g.state.health>0;i++){
  let t=g.scripts.modelTransforms.get(model)?.translation||[0,0,0],target=[(b.min[0]+b.max[0])/2+t[0],z],p=w.player.position,dx=target[0]-p[0],dz=target[1]-p[2];
  if(Math.hypot(dx,dz)<8&&w.player.grounded)break;
  const desired=Math.atan2(-dx,-dz),delta=Math.atan2(Math.sin(desired-w.yaw),Math.cos(desired-w.yaw));w.look(-delta/.002/w.settings.sensitivity,0);
  __press(['KeyW']);__stepFrame(1/60);if(i%30===0)trail.push({p:p.slice(),target,h:g.state.health,contacts:[...w.player.contacts]});if(i%10===0)await new Promise(r=>setTimeout(r,0));
 }
 __press([]);return{status:__status(),trail};
};

window.__tapButton=async(name)=>{
 const g=__redcat.gameplay,b=g.find(name)[0],p=b.position;
 await __moveTo([p[0]+130,p[2]],{attack:false,limit:300,tolerance:5});
 __press([]);for(let i=0;i<90;i++){__stepFrame(1/60);if(i%10===0)await new Promise(r=>setTimeout(r,0));}
 const initial=b.switchCount;
 for(let i=0;i<180&&b.switchCount===initial&&g.state.health>0;i++){
  const w=__redcat.world,a=w.player.position,desired=Math.atan2(p[0]-a[0],p[2]-a[2])+Math.PI;
  const delta=Math.atan2(Math.sin(desired-w.yaw),Math.cos(desired-w.yaw));w.look(-delta/.002/w.settings.sensitivity,0);
  __press(['KeyW']);__stepFrame(1/60);if(i%10===0)await new Promise(r=>setTimeout(r,0));
 }
 __press([]);await __moveTo([p[0]+130,p[2]],{attack:false,limit:300,tolerance:5});
 return {initial,count:b.switchCount,status:__status()};
};

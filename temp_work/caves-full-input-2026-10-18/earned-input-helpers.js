// Normal-input Caves replay helpers. Loading defines helpers only; it does not
// advance frames, press keys, load saves, or alter game state.
// Requires the existing controlled-frame campaign driver (__stepFrame).
if (typeof globalThis.__stepFrame !== 'function') throw Error('Controlled-frame driver required');
if (globalThis.__cavesHeld?.size) throw Error('Release previous Caves inputs before reinstalling');
globalThis.__cavesHeld=new Set(); globalThis.__cavesLog=[];
globalThis.__cavesStatus=()=>{let a=__redcat,g=a.gameplay;return {level:a.world.id,mode:a.mode,p:[...a.world.player.position],yaw:a.world.yaw,state:{...g.state},noClip:a.world.player.noClip,scene:g.scripts.cutscene,error:g.scripts.errors,vm:g.scripts.vm.lastError,completed:g.completed}};
globalThis.__cavesPress=(codes)=>{let next=new Set(codes);for(let key of __cavesHeld)if(!next.has(key))window.dispatchEvent(new KeyboardEvent('keyup',{code:key,bubbles:true}));for(let key of next)if(!__cavesHeld.has(key))window.dispatchEvent(new KeyboardEvent('keydown',{code:key,bubbles:true}));__cavesHeld=next;};
globalThis.__cavesWait=async(n=60)=>{__cavesPress([]);for(let i=0;i<n;i++){__stepFrame(1/60);if(i%10===0)await new Promise(r=>setTimeout(r,0));}return __cavesStatus()};
globalThis.__cavesLookAt=(x,z)=>{let w=__redcat.world,p=w.player.position,d=Math.atan2(-(x-p[0]),-(z-p[2])),a=Math.atan2(Math.sin(d-w.yaw),Math.cos(d-w.yaw));w.look(-a/.002/w.settings.sensitivity,0)};
globalThis.__cavesMoveTo=async(target,{limit=1200,jump=false,attack=false,tolerance=8}={})=>{let last=[],stuck=0;for(let i=0;i<limit;i++){let a=__redcat,w=a.world,g=a.gameplay,p=w.player.position;if(w.player.noClip)throw Error('No clip');if(a.mode!=='playing'||g.state.health<=0||g.scripts.cutscene)break;let dx=target[0]-p[0],dz=target[1]-p[2];if(Math.hypot(dx,dz)<tolerance)break;let desired=Math.atan2(-dx,-dz),delta=Math.atan2(Math.sin(desired-w.yaw),Math.cos(desired-w.yaw));w.look(-delta/.002/w.settings.sensitivity,0);delta=Math.atan2(Math.sin(desired-w.yaw),Math.cos(desired-w.yaw));let keys=Math.abs(delta)>.12?[delta>0?'ArrowLeft':'ArrowRight']:['KeyW'];if(jump&&i%36<2)keys.push('Space');if(attack)keys.push('ControlLeft');__cavesPress(keys);__stepFrame(1/60);if(i%10===0)await new Promise(r=>setTimeout(r,0));if(i%60===0){if(last.length&&Math.hypot(p[0]-last[0],p[2]-last[2])<1&&Math.abs(delta)<.12)stuck++;else stuck=0;last=[p[0],p[2]];if(stuck>=3)break;}}__cavesPress([]);let result={target,...__cavesStatus()};__cavesLog.push(result);return result;};
globalThis.__cavesRouteHeight=(target,{step=24,maxNodes=60000,stepHeight=16,maxDrop=48,targetY=undefined,minY=-Infinity}={})=>{
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
   const y=floor.end[1]+.1;if(y<minY)continue;if(c.contents([b[0],y,b[2]],w.player.mins,w.player.maxs,w.player.modelIndices)&0x60000)continue;if(__redcat.gameplay.objects.some(o=>o.kind==='trigger'&&o.enabled&&Number(o.entity.DamagePerSecond)>0&&__redcat.gameplay.contains(o,[b[0],y,b[2]])))continue;const k=key(x,z,y),old=nodes.get(k);if(old?.closed)continue;
   let g=n.g+Math.hypot(dx,dz)+Math.abs(y-n.y)/step*.25;if(old&&old.g<=g)continue;
   const node={x,z,y,g,f:g+Math.hypot(goal[0]-x,goal[1]-z),p:n};nodes.set(k,node);push(node);
  }
 }
 return {path:null,searched};
};
globalThis.__cavesWalkHeight=async(target,options={})=>{
 let result=__cavesRouteHeight(target,options);if(!result.path)return result;
 let results=[];
 // Retain each change of direction/height. Avoid flattening stair routes.
 const path=result.path,chosen=[];
 for(let i=1;i<path.length;i++){let p=path[i],a=path[i-1],b=path[i+1];if(!b||Math.abs(p[1]-a[1])>2||Math.abs(b[1]-p[1])>2||(p[0]-a[0])!==(b[0]-p[0])||(p[2]-a[2])!==(b[2]-p[2]))chosen.push(p);}
 for(const p of chosen){let moved=await __cavesMoveTo([p[0],p[2]],{limit:500,tolerance:8,attack:false,...options});results.push(moved);if(Math.hypot(moved.p[0]-p[0],moved.p[2]-p[2])>60)break;}
 return {searched:result.searched,waypoints:chosen,results};
};
globalThis.__cavesHop=async(target,{walk=true,double=false,limit=100}={})=>{let g=__redcat.gameplay,w=__redcat.world,start=w.player.position.slice(),trail=[];__cavesLookAt(target[0],target[1]);let begun=false;for(let i=0;i<limit&&g.state.health>0;i++){let keys=[];keys.push(i<30?'KeyW':'KeyS');if(walk)keys.push('ShiftLeft');if(i<2||(double&&i>=20&&i<22))keys.push('Space');__cavesPress(keys);__stepFrame(1/60);if(!w.player.grounded)begun=true;if(i%10===0)trail.push({i,p:w.player.position.slice(),ground:w.player.grounded});if(i%10===0)await new Promise(r=>setTimeout(r,0));if(begun&&w.player.grounded)break;}__cavesPress([]);let r={start,target,trail,...__cavesStatus()};__cavesLog.push(r);return r};
globalThis.__cavesTop=i=>{let w=__redcat.world,g=__redcat.gameplay,o=g.find('earth_platform'+String(i).padStart(2,'0'))[0];return w.level.collision.models[o.modelIndex].max[1]+g.scripts.modelTransforms.get(o.modelIndex).translation[1]};
globalThis.__cavesWaitPair=async(i,j)=>{for(let n=0;n<300;n++){if(__cavesTop(i)>=40&&__cavesTop(j)<=40)return{n,a:__cavesTop(i),b:__cavesTop(j)};await __cavesWait(1)}return null};
globalThis.__cavesFightEvade=async(name,n=1200)=>{let g=__redcat.gameplay,w=__redcat.world,o=g.find(name)[0],log=[];__cavesPress([]);__stepFrame(1/60);for(let i=0;i<n&&o.health>0&&g.state.health>0;i++){let t=g.objectPosition(o);__cavesLookAt(t[0],t[2]);let p=w.player.position,side=Math.floor(i/12)%2?1:-1,safe=s=>{let q=[p[0]+Math.cos(w.yaw)*s*20,p[1]+8,p[2]-Math.sin(w.yaw)*s*20],h=w.collider.trace(q,[q[0],p[1]-8,q[2]],[0,0,0],[0,0,0],w.player.modelIndices);return !h.startSolid&&h.fraction<1&&h.end[1]>=p[1]-2};if(!safe(side))side=safe(-side)?-side:0;__cavesPress(['ControlLeft',...(side?[side>0?'KeyD':'KeyA']:[])]);__stepFrame(1/60);if(i%60===0)log.push({i,h:o.health,hp:g.state.health,p:w.player.position.slice(),target:w.targeting.target?.id});if(i%10===0)await new Promise(r=>setTimeout(r,0));}__cavesPress([]);return{log,h:o.health,s:__cavesStatus()}};
globalThis.__cavesFightWide=async(name,n=1200)=>{let g=__redcat.gameplay,w=__redcat.world,o=g.find(name)[0],log=[];__cavesPress([]);__stepFrame(1/60);for(let i=0;i<n&&o.health>0&&g.state.health>0;i++){let t=g.objectPosition(o);__cavesLookAt(t[0],t[2]);let p=w.player.position,side=Math.floor(i/36)%2?1:-1,safe=s=>{let q=[p[0]+Math.cos(w.yaw)*s*20,p[1]+8,p[2]-Math.sin(w.yaw)*s*20],h=w.collider.trace(q,[q[0],p[1]-8,q[2]],[0,0,0],[0,0,0],w.player.modelIndices);return !h.startSolid&&h.fraction<1&&h.end[1]>=p[1]-2};if(!safe(side))side=safe(-side)?-side:0;__cavesPress(['ControlLeft',...(side?[side>0?'KeyD':'KeyA']:[])]);__stepFrame(1/60);if(i%60===0)log.push({i,h:o.health,hp:g.state.health,p:w.player.position.slice(),target:w.targeting.target?.id});if(i%10===0)await new Promise(r=>setTimeout(r,0));}__cavesPress([]);return{log,h:o.health,s:__cavesStatus()}};


// Caves timing adapter: same ordinary inputs as the retained real-time stages.
__cavesLookAt=(x,z)=>{const w=__redcat.world,p=w.player.position,d=Math.atan2(-(x-p[0]),-(z-p[2])),a=Math.atan2(Math.sin(d-w.yaw),Math.cos(d-w.yaw));w.look(-a/.002/w.settings.sensitivity,(.16-w.pitch)/.002/w.settings.sensitivity);};
__cavesStep=async(keys,n)=>{__cavesPress(keys);for(let i=0;i<n;i++){if(__redcat.mode!=='playing'||__redcat.gameplay.state.health<=0)break;__stepFrame(1/60);if(i%10===0)await new Promise(r=>setTimeout(r,0));}__cavesPress([]);return __cavesStatus();};
__cavesFace=async target=>{for(let i=0;i<200;i++){__cavesLookAt(...target);const w=__redcat.world,p=w.player.position,d=Math.atan2(-(target[0]-p[0]),-(target[1]-p[2])),a=Math.atan2(Math.sin(d-w.yaw),Math.cos(d-w.yaw));if(Math.abs(a)<.03){__cavesPress([]);return;}await __cavesStep([a>0?'ArrowLeft':'ArrowRight'],1);}throw Error('Camera did not turn');};
__cavesJump=async(target,{walk=false,double=false}={})=>{await __cavesFace(target);let n=double?64:31,log=[];for(let i=0;i<n;i++){let keys=['KeyW'];if(walk)keys.push('ShiftLeft');if(i<6||(double&&i>=19&&i<24))keys.push('Space');__cavesPress(keys);__stepFrame(1/60);if(i%10===0){log.push({i,p:[...__redcat.world.player.position]});await new Promise(r=>setTimeout(r,0));}}__cavesPress([]);await __cavesWait(10);return{log,s:__cavesStatus()};};
__cavesWaitFor=async(predicate,max=1500)=>{for(let i=0;i<max;i++){if(predicate())return i;await __cavesStep([],1);if(__redcat.gameplay.state.health<=0)throw Error('Died waiting');}throw Error('Observed condition timed out');};
__cavesFightTarget=async(name,frames=900,{period=36}={})=>{
  const g=__redcat.gameplay,w=__redcat.world,o=g.find(name)[0],log=[];
  for(let i=0;i<frames&&o.health>0&&g.state.health>0;i++){
    if(__redcat.mode!=='playing'||g.scripts.cutscene)break;
    const t=g.objectPosition(o);__cavesLookAt(t[0],t[2]);
    const p=w.player.position,d=Math.atan2(-(t[0]-p[0]),-(t[2]-p[2])),a=Math.atan2(Math.sin(d-w.yaw),Math.cos(d-w.yaw));
    let side=Math.floor(i/period)%2?1:-1;
    const safe=s=>{const q=[p[0]+Math.cos(w.yaw)*s*24,p[1]+8,p[2]-Math.sin(w.yaw)*s*24],h=w.collider.trace(q,[q[0],p[1]-16,q[2]],w.player.mins,w.player.maxs,w.player.modelIndices,'blocksPlayer');return !h.startSolid&&h.fraction<1&&h.end[1]>=p[1]-3&&!g.objects.some(r=>r.kind==='trigger'&&r.enabled&&Number(r.entity.DamagePerSecond)>0&&g.contains(r,h.end));};
    if(!safe(side))side=safe(-side)?-side:0;
    __cavesPress(['ControlLeft',...(Math.abs(a)>.12?[a>0?'ArrowLeft':'ArrowRight']:side?[side>0?'KeyD':'KeyA']:[])]);__stepFrame(1/60);
    if(i%60===0)log.push({i,h:o.health,hp:g.state.health,p:[...p],target:w.targeting.target?.id});
    if(i%10===0)await new Promise(r=>setTimeout(r,0));
  }
  __cavesPress([]);return{log,h:o.health,s:__cavesStatus()};
};
// Re-plan each short segment when a narrow rim must remain above a minimum floor.
__cavesWalkAdaptive=async(target,options={})=>{let log=[];for(let i=0;i<300;i++){let s=__cavesStatus();if(s.state.health<=0||s.mode!=='playing'||Math.hypot(s.p[0]-target[0],s.p[2]-target[1])<10)break;if(options.minY!==undefined&&s.p[1]<options.minY-4)break;let r=__cavesRouteHeight(target,{step:12,...options});if(!r.path?.length){log.push({noRoute:true,s});break;}let q=r.path[Math.min(1,r.path.length-1)];let m=await __cavesMoveTo([q[0],q[2]],{limit:18,tolerance:4});if(i%10===0)log.push(m);if(Math.hypot(m.p[0]-s.p[0],m.p[2]-s.p[2])<.1){log.push({stuck:true,s:m});break;}}return{log,s:__cavesStatus()};};
__cavesWalkRim=async(target,options={})=>{let plan=__cavesRouteHeight(target,{step:12,maxDrop:16,minY:-18,maxNodes:15000,...options}),log=[];if(!plan.path)return{noRoute:true};const press=__cavesPress;__cavesPress=keys=>press(keys.includes('KeyW')?[...keys,'ShiftLeft']:keys);try{for(let i=1;i<plan.path.length;i++){let q=plan.path[i],r=await __cavesMoveTo([q[0],q[2]],{tolerance:2.5,limit:90});if(i%15===0)log.push(r);if(r.state.health<=0||r.p[1]<(options.minY??-18)-4||Math.hypot(r.p[0]-q[0],r.p[2]-q[2])>8){log.push({failed:true,i,q,r});break;}}}finally{__cavesPress=press;press([]);}return{n:plan.path.length,log,s:__cavesStatus()};};

// Normal-input Earth replay helpers. Loading defines helpers only; it does not
// advance frames, press keys, load saves, or alter game state.
// Requires the existing controlled-frame campaign driver (__stepFrame).
if (typeof globalThis.__stepFrame !== 'function') throw Error('Controlled-frame driver required');
if (globalThis.__earthHeld?.size) throw Error('Release previous Earth inputs before reinstalling');
globalThis.__earthHeld=new Set(); globalThis.__earthLog=[];
globalThis.__earthStatus=()=>{let a=__redcat,g=a.gameplay;return {level:a.world.id,mode:a.mode,p:[...a.world.player.position],yaw:a.world.yaw,state:{...g.state},noClip:a.world.player.noClip,scene:g.scripts.cutscene,error:g.scripts.errors,vm:g.scripts.vm.lastError,completed:g.completed}};
globalThis.__earthPress=(codes)=>{let next=new Set(codes);for(let key of __earthHeld)if(!next.has(key))window.dispatchEvent(new KeyboardEvent('keyup',{code:key,bubbles:true}));for(let key of next)if(!__earthHeld.has(key))window.dispatchEvent(new KeyboardEvent('keydown',{code:key,bubbles:true}));__earthHeld=next;};
globalThis.__earthWait=async(n=60)=>{__earthPress([]);for(let i=0;i<n;i++){__stepFrame(1/60);if(i%10===0)await new Promise(r=>setTimeout(r,0));}return __earthStatus()};
globalThis.__earthLookAt=(x,z)=>{let w=__redcat.world,p=w.player.position,d=Math.atan2(-(x-p[0]),-(z-p[2])),a=Math.atan2(Math.sin(d-w.yaw),Math.cos(d-w.yaw));w.look(-a/.002/w.settings.sensitivity,0)};
globalThis.__earthMoveTo=async(target,{limit=1200,jump=false,attack=false,tolerance=8}={})=>{let last=[],stuck=0;for(let i=0;i<limit;i++){let a=__redcat,w=a.world,g=a.gameplay,p=w.player.position;if(w.player.noClip)throw Error('No clip');if(a.mode!=='playing'||g.state.health<=0||g.scripts.cutscene)break;let dx=target[0]-p[0],dz=target[1]-p[2];if(Math.hypot(dx,dz)<tolerance)break;let desired=Math.atan2(-dx,-dz),delta=Math.atan2(Math.sin(desired-w.yaw),Math.cos(desired-w.yaw));w.look(-delta/.002/w.settings.sensitivity,0);delta=Math.atan2(Math.sin(desired-w.yaw),Math.cos(desired-w.yaw));let keys=Math.abs(delta)>.12?[delta>0?'ArrowLeft':'ArrowRight']:['KeyW'];if(jump&&i%36<2)keys.push('Space');if(attack)keys.push('ControlLeft');__earthPress(keys);__stepFrame(1/60);if(i%10===0)await new Promise(r=>setTimeout(r,0));if(i%60===0){if(last.length&&Math.hypot(p[0]-last[0],p[2]-last[2])<1&&Math.abs(delta)<.12)stuck++;else stuck=0;last=[p[0],p[2]];if(stuck>=3)break;}}__earthPress([]);let result={target,...__earthStatus()};__earthLog.push(result);return result;};
globalThis.__earthRouteHeight=(target,{step=24,maxNodes=60000,stepHeight=16,maxDrop=48,targetY=undefined}={})=>{
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
globalThis.__earthWalkHeight=async(target,options={})=>{
 let result=__earthRouteHeight(target,options);if(!result.path)return result;
 let results=[];
 // Retain each change of direction/height. Avoid flattening stair routes.
 const path=result.path,chosen=[];
 for(let i=1;i<path.length;i++){let p=path[i],a=path[i-1],b=path[i+1];if(!b||Math.abs(p[1]-a[1])>2||Math.abs(b[1]-p[1])>2||(p[0]-a[0])!==(b[0]-p[0])||(p[2]-a[2])!==(b[2]-p[2]))chosen.push(p);}
 for(const p of chosen){let moved=await __earthMoveTo([p[0],p[2]],{limit:500,tolerance:8,attack:false,...options});results.push(moved);if(Math.hypot(moved.p[0]-p[0],moved.p[2]-p[2])>60)break;}
 return {searched:result.searched,waypoints:chosen,results};
};
globalThis.__earthHop=async(target,{walk=true,double=false,limit=100}={})=>{let g=__redcat.gameplay,w=__redcat.world,start=w.player.position.slice(),trail=[];__earthLookAt(target[0],target[1]);let begun=false;for(let i=0;i<limit&&g.state.health>0;i++){let keys=[];keys.push(i<30?'KeyW':'KeyS');if(walk)keys.push('ShiftLeft');if(i<2||(double&&i>=20&&i<22))keys.push('Space');__earthPress(keys);__stepFrame(1/60);if(!w.player.grounded)begun=true;if(i%10===0)trail.push({i,p:w.player.position.slice(),ground:w.player.grounded});if(i%10===0)await new Promise(r=>setTimeout(r,0));if(begun&&w.player.grounded)break;}__earthPress([]);let r={start,target,trail,...__earthStatus()};__earthLog.push(r);return r};
globalThis.__earthTop=i=>{let w=__redcat.world,g=__redcat.gameplay,o=g.find('earth_platform'+String(i).padStart(2,'0'))[0];return w.level.collision.models[o.modelIndex].max[1]+g.scripts.modelTransforms.get(o.modelIndex).translation[1]};
globalThis.__earthWaitPair=async(i,j)=>{for(let n=0;n<300;n++){if(__earthTop(i)>=40&&__earthTop(j)<=40)return{n,a:__earthTop(i),b:__earthTop(j)};await __earthWait(1)}return null};
globalThis.__earthFightEvade=async(name,n=1200)=>{let g=__redcat.gameplay,w=__redcat.world,o=g.find(name)[0],log=[];__earthPress([]);__stepFrame(1/60);for(let i=0;i<n&&o.health>0&&g.state.health>0;i++){let t=g.objectPosition(o);__earthLookAt(t[0],t[2]);let p=w.player.position,side=Math.floor(i/12)%2?1:-1,safe=s=>{let q=[p[0]+Math.cos(w.yaw)*s*20,p[1]+8,p[2]-Math.sin(w.yaw)*s*20],h=w.collider.trace(q,[q[0],p[1]-8,q[2]],[0,0,0],[0,0,0],w.player.modelIndices);return !h.startSolid&&h.fraction<1&&h.end[1]>=p[1]-2};if(!safe(side))side=safe(-side)?-side:0;__earthPress(['ControlLeft',...(side?[side>0?'KeyD':'KeyA']:[])]);__stepFrame(1/60);if(i%60===0)log.push({i,h:o.health,hp:g.state.health,p:w.player.position.slice(),target:w.targeting.target?.id});if(i%10===0)await new Promise(r=>setTimeout(r,0));}__earthPress([]);return{log,h:o.health,s:__earthStatus()}};
globalThis.__earthFightWide=async(name,n=1200)=>{let g=__redcat.gameplay,w=__redcat.world,o=g.find(name)[0],log=[];__earthPress([]);__stepFrame(1/60);for(let i=0;i<n&&o.health>0&&g.state.health>0;i++){let t=g.objectPosition(o);__earthLookAt(t[0],t[2]);let p=w.player.position,side=Math.floor(i/36)%2?1:-1,safe=s=>{let q=[p[0]+Math.cos(w.yaw)*s*20,p[1]+8,p[2]-Math.sin(w.yaw)*s*20],h=w.collider.trace(q,[q[0],p[1]-8,q[2]],[0,0,0],[0,0,0],w.player.modelIndices);return !h.startSolid&&h.fraction<1&&h.end[1]>=p[1]-2};if(!safe(side))side=safe(-side)?-side:0;__earthPress(['ControlLeft',...(side?[side>0?'KeyD':'KeyA']:[])]);__stepFrame(1/60);if(i%60===0)log.push({i,h:o.health,hp:g.state.health,p:w.player.position.slice(),target:w.targeting.target?.id});if(i%10===0)await new Promise(r=>setTimeout(r,0));}__earthPress([]);return{log,h:o.health,s:__earthStatus()}};

// Checked wrappers stop at a failed route/hop instead of blindly continuing.
globalThis.__earthCheck=()=>{
  const s=__earthStatus();
  if(s.level!=='lvl03a'||s.mode!=='playing'||s.noClip||s.scene||s.state.health<=0)
    throw Error('Earth input stopped: '+JSON.stringify(s));
  return s;
};
globalThis.__earthGo=async(target,{allow=8,...options}={})=>{
  __earthCheck();const r=await __earthMoveTo(target,{limit:400,tolerance:3,attack:false,...options});
  __earthCheck();if(Math.hypot(r.p[0]-target[0],r.p[2]-target[1])>allow)
    throw Error('Walking waypoint blocked: '+JSON.stringify(r));
  return r;
};
globalThis.__earthFloor=async(target,options={})=>{
  __earthCheck();const r=await __earthWalkHeight(target,{step:16,stepHeight:18,maxDrop:24,tolerance:4,attack:false,...options});
  const s=__earthCheck();if(!r.results||Math.hypot(s.p[0]-target[0],s.p[2]-target[1])>24)
    throw Error('Floor route incomplete: '+JSON.stringify({target,s,r}));
  return s;
};
globalThis.__earthFace=async target=>{
  for(let i=0;i<180;i++){
    __earthCheck();__earthLookAt(...target);
    const w=__redcat.world,p=w.player.position,d=Math.atan2(-(target[0]-p[0]),-(target[1]-p[2])),a=Math.atan2(Math.sin(d-w.yaw),Math.cos(d-w.yaw));
    if(Math.abs(a)<.035){__earthPress([]);return;}
    __earthPress([a>0?'ArrowLeft':'ArrowRight']);__stepFrame(1/60);
    if(i%10===0)await new Promise(r=>setTimeout(r,0));
  }
  __earthPress([]);throw Error('Camera did not turn toward Earth waypoint');
};
globalThis.__earthHopChecked=async(target,options={})=>{
  __earthCheck();await __earthFace(target);
  const r=await __earthHop(target,options);__earthCheck();
  if(!__redcat.world.player.grounded||Math.hypot(r.p[0]-target[0],r.p[2]-target[1])>52)
    throw Error('Earth hop needs inspection: '+JSON.stringify(r));
  return r;
};
globalThis.__earthPair=async(i,j)=>{
  __earthCheck();const r=await __earthWaitPair(i,j);__earthCheck();
  if(!r)throw Error('Pillar phase did not arrive: '+i+' to '+j);return r;
};
globalThis.__earthHigh=async(i,height=62)=>{
  for(let n=0;n<300;n++){
    __earthCheck();if(__earthTop(i)>=height)return __earthTop(i);await __earthWait(1);
  }
  throw Error('Pillar did not reach static floor: '+i);
};
globalThis.__earthUse=async(target,wait=45)=>{
  await __earthFace(target);__earthPress(['KeyE']);__stepFrame(1/60);__stepFrame(1/60);__earthPress([]);
  await __earthWait(wait);return __earthStatus();
};
globalThis.__earthAimPitch=()=>{
  const w=__redcat.world;w.look(0,(.16-w.pitch)/.002/w.settings.sensitivity);
};
globalThis.__earthRamp=async(target=[-1264,-1100],limit=100)=>{
  const log=[];
  for(let i=0;i<limit;i++){
    const s=__earthCheck();if(Math.hypot(s.p[0]-target[0],s.p[2]-target[1])<12)return{log,s};
    const r=__earthRouteHeight(target,{step:16,stepHeight:18,maxDrop:16,maxNodes:7000});
    if(!r.path){await __earthWait(10);if(i%10===0)log.push({i,noPath:true,s});continue;}
    let at=1;while(at<Math.min(4,r.path.length-1)){
      const a=r.path[at-1],b=r.path[at],c=r.path[at+1];
      if((b[0]-a[0])!==(c[0]-b[0])||(b[2]-a[2])!==(c[2]-b[2]))break;at++;
    }
    const t=r.path[at];await __earthMoveTo([t[0],t[2]],{limit:80,tolerance:3,attack:false});
    if(i%10===0)log.push({i,s:__earthStatus()});
  }
  throw Error('Rolling-ramp route needs inspection: '+JSON.stringify({log,s:__earthStatus()}));
};

// These are the successful pillar routes from the isolated normal-input run.
// They stop at stable corners/center; callers handle enemies, pickups and button
// contacts separately, inspect health, and wait out button camera overviews.
globalThis.__earthPillars={
  entry:async()=>{
    await __earthGo([-1664,-1280]);await __earthHopChecked([-1664,-1184]);
    await __earthPair(4,5);await __earthHopChecked([-1688,-1104]);
    await __earthPair(5,6);await __earthHopChecked([-1768,-1080]);
    await __earthHigh(6);await __earthHopChecked([-1888,-1064]);return __earthGo([-1888,-1064]);
  },
  neOut:async()=>{
    await __earthGo([-1860,-1034]);await __earthHopChecked([-1860,-951]);
    await __earthPair(9,8);await __earthHopChecked([-1828,-878]);
    await __earthPair(8,7);await __earthHopChecked([-1756,-842]);
    await __earthHigh(7);return __earthHopChecked([-1664,-800]);
  },
  neBack:async()=>{
    await __earthGo([-1668,-810]);await __earthHopChecked([-1756,-842]);
    await __earthPair(7,8);await __earthHopChecked([-1828,-878]);
    await __earthPair(8,9);await __earthHopChecked([-1860,-951]);
    await __earthHigh(9);await __earthHopChecked([-1888,-1064]);return __earthGo([-1888,-1064]);
  },
  swOut:async()=>{
    await __earthGo([-1910,-1032]);await __earthHopChecked([-1989,-1032]);
    await __earthPair(12,11);await __earthHopChecked([-2066,-1010]);
    await __earthPair(11,10);await __earthHopChecked([-2106,-936]);
    await __earthHigh(10);return __earthHopChecked([-2188,-840],{walk:false});
  },
  swBack:async()=>{
    await __earthGo([-2168,-864]);await __earthHopChecked([-2106,-936]);
    await __earthPair(10,11);await __earthHopChecked([-2066,-1010]);
    await __earthPair(11,12);await __earthHopChecked([-1989,-1032]);
    await __earthHigh(12);await __earthHopChecked([-1888,-1064]);return __earthGo([-1888,-1064]);
  },
  nwOut:async()=>{
    await __earthGo([-1912,-1084]);await __earthHopChecked([-1912,-1168]);
    await __earthPair(3,2);await __earthHopChecked([-1941,-1242]);
    await __earthPair(2,1);await __earthHopChecked([-2016,-1272]);
    await __earthHigh(1);return __earthHopChecked([-2150,-1360],{walk:false});
  },
  nwBack:async()=>{
    await __earthGo([-2150,-1360]);await __earthHopChecked([-2016,-1272],{walk:false});
    await __earthPair(1,2);await __earthHopChecked([-1941,-1242]);
    await __earthPair(2,3);await __earthHopChecked([-1912,-1168]);
    await __earthHigh(3);await __earthHopChecked([-1912,-1084]);return __earthGo([-1888,-1064]);
  },
  exit:async()=>{
    await __earthGo([-1848,-1068]);await __earthHopChecked([-1768,-1080]);
    await __earthPair(6,5);await __earthHopChecked([-1688,-1104]);
    await __earthPair(5,4);await __earthHopChecked([-1664,-1184]);
    await __earthHigh(4);return __earthHopChecked([-1664,-1280]);
  }
};
globalThis.__earthChecks=()=>{
  const g=__redcat.gameplay;
  return{status:__earthStatus(),checkpoint:g.checkpoint,
    switches:['draai_button01','draai_button02','draai_button03','rots_altaar_but01','rots_altaar_but02','rots_altaar_but03','beam_rots_altaar','unlock_max'].map(n=>{
      const o=g.find(n)[0];return{name:n,on:o?.switchedOn,count:o?.triggerCount,enabled:o?.enabled};
    })};
};

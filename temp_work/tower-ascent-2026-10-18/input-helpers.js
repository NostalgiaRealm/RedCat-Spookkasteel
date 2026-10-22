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
window.__wait=async(n=60)=>{__press([]);for(let i=0;i<n;i++){__stepFrame(1/60);if(i%10===0)await new Promise(r=>setTimeout(r,0));}return __status()};
window.__skip=async(n=600)=>{for(let i=0;i<n&&__redcat.gameplay.scripts.cutscene;i++){__press(i%12<2?['KeyE']:[]);__stepFrame(1/60);if(i%10===0)await new Promise(r=>setTimeout(r,0));}__press([]);return __status()};
window.__lookAt=(x,z)=>{let w=__redcat.world,p=w.player.position,d=Math.atan2(-(x-p[0]),-(z-p[2])),a=Math.atan2(Math.sin(d-w.yaw),Math.cos(d-w.yaw));w.look(-a/.002/w.settings.sensitivity,0)};
window.__fightCharge=async(name,n=900)=>{let g=__redcat.gameplay,o=g.find(name)[0],log=[];for(let i=0;i<n&&o.health>0&&g.state.health>0;i++){if(g.scripts.cutscene){__press(i%12<2?['KeyE']:[])}else{let t=g.objectPosition(o);__lookAt(t[0],t[2]);__press(i%150<120?['ControlLeft']:[])}__stepFrame(1/60);if(i%150===0)log.push({i,h:o.health,p:__redcat.world.player.position.slice(),hp:g.state.health});if(i%10===0)await new Promise(r=>setTimeout(r,0));}__press([]);return{log,h:o.health,s:__status()}};
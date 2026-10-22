// Test driver only. Read-only route planning against the collision map;
// movement is supplied through ordinary keyboard/camera controls.
window.__route=(target,{step=32,maxNodes=60000}={})=>{
 const w=__redcat.world,start=w.player.position.slice(),c=w.collider;
 const goal=[Math.round((target[0]-start[0])/step),Math.round((target[1]-start[2])/step)];
 const heap=[],nodes=new Map(),key=(x,z)=>x+','+z;
 const push=n=>{heap.push(n);let i=heap.length-1;while(i){let p=(i-1)>>1;if(heap[p].f<=n.f)break;heap[i]=heap[p];i=p;}heap[i]=n;};
 const pop=()=>{let result=heap[0],last=heap.pop();if(heap.length){let i=0;while(i*2+1<heap.length){let child=i*2+1;if(child+1<heap.length&&heap[child+1].f<heap[child].f)child++;if(heap[child].f>=last.f)break;heap[i]=heap[child];i=child;}heap[i]=last;}return result;};
 const position=(x,z)=>[start[0]+x*step,start[1]+.5,start[2]+z*step];
 const initial={x:0,z:0,g:0,f:0,p:null};push(initial);nodes.set(key(0,0),initial);let searched=0;
 while(heap.length&&searched++<maxNodes){const n=pop();if(n.closed)continue;n.closed=true;
  if(n.x===goal[0]&&n.z===goal[1]){let path=[];for(let q=n;q;q=q.p)path.push([start[0]+q.x*step,start[2]+q.z*step]);return {path:path.reverse(),searched};}
  for(const [dx,dz] of [[1,0],[-1,0],[0,1],[0,-1],[1,1],[1,-1],[-1,1],[-1,-1]]){
   let x=n.x+dx,z=n.z+dz,k=key(x,z),old=nodes.get(k);if(old?.closed)continue;let a=position(n.x,n.z),b=position(x,z);
   if(c.trace(a,b,w.player.mins,w.player.maxs,[0],'blocksPlayer').fraction<.999)continue;
   let g=n.g+Math.hypot(dx,dz);if(old&&old.g<=g)continue;
   const node={x,z,g,f:g+Math.hypot(goal[0]-x,goal[1]-z),p:n};nodes.set(k,node);push(node);
  }
 }
 return {path:null,searched};
};
window.__walkRoute=async(target,options={})=>{
 const result=__route(target,options);if(!result.path)return result;
 let path=result.path,chosen=[];const w=__redcat.world;
 for(let i=0;i<path.length;){let end=i+1;for(let j=i+2;j<path.length;j++){
   const a=[path[i][0],w.player.position[1]+.5,path[i][1]],b=[path[j][0],a[1],path[j][1]];
   if(w.collider.trace(a,b,w.player.mins,w.player.maxs,[0],'blocksPlayer').fraction<.999)break;end=j;
  }chosen.push(path[Math.min(end,path.length-1)]);i=end;if(i>=path.length-1)break;
 }
 window.__plannedRoute=chosen;return {searched:result.searched,waypoints:chosen};
};

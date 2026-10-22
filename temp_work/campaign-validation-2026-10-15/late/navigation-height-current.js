// Read-only source test planner. It never changes player/object/game state.
window.__routeHeight=(target,{step=24,maxNodes=60000,stepHeight=16,maxDrop=48}={})=>{
 const w=__redcat.world,start=w.player.position.slice(),c=w.collider;
 const goal=[Math.round((target[0]-start[0])/step),Math.round((target[1]-start[2])/step)];
 const heap=[],nodes=new Map(),key=(x,z,y)=>x+','+z+','+Math.round(y/8);
 const push=n=>{heap.push(n);let i=heap.length-1;while(i){let p=(i-1)>>1;if(heap[p].f<=n.f)break;heap[i]=heap[p];i=p;}heap[i]=n;};
 const pop=()=>{let result=heap[0],last=heap.pop();if(heap.length){let i=0;while(i*2+1<heap.length){let child=i*2+1;if(child+1<heap.length&&heap[child+1].f<heap[child].f)child++;if(heap[child].f>=last.f)break;heap[i]=heap[child];i=child;}heap[i]=last;}return result;};
 const initial={x:0,z:0,y:start[1]+.1,g:0,f:0,p:null};push(initial);nodes.set(key(0,0,initial.y),initial);let searched=0;
 while(heap.length&&searched++<maxNodes){const n=pop();if(n.closed)continue;n.closed=true;
  if(n.x===goal[0]&&n.z===goal[1]){let path=[];for(let q=n;q;q=q.p)path.push([start[0]+q.x*step,q.y,start[2]+q.z*step]);return {path:path.reverse(),searched};}
  for(const [dx,dz] of [[1,0],[-1,0],[0,1],[0,-1],[1,1],[1,-1],[-1,1],[-1,-1]]){
   let x=n.x+dx,z=n.z+dz,a=[start[0]+n.x*step,n.y,start[2]+n.z*step],b=[start[0]+x*step,n.y,start[2]+z*step];
   let hit=c.trace(a,b,w.player.mins,w.player.maxs,w.player.modelIndices,'blocksPlayer');
   if(hit.fraction<.999){let u=[a[0],a[1]+stepHeight,a[2]];if(c.trace(a,u,w.player.mins,w.player.maxs,w.player.modelIndices,'blocksPlayer').fraction<.999)continue;a=u;b[1]=u[1];hit=c.trace(a,b,w.player.mins,w.player.maxs,w.player.modelIndices,'blocksPlayer');if(hit.fraction<.999)continue;}
   let floor=c.trace(b,[b[0],n.y-maxDrop,b[2]],w.player.mins,w.player.maxs,w.player.modelIndices,'blocksPlayer');
   if(floor.startSolid||floor.fraction===1||floor.normal[1]<.65)continue;
   const y=floor.end[1]+.1,k=key(x,z,y),old=nodes.get(k);if(old?.closed)continue;
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

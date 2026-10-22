// Continuous box/triangle SAT for original actor props. The INI determines
// which queries an actor blocks; mesh contact is a portable reconstruction.
const dot=(a,b)=>a[0]*b[0]+a[1]*b[1]+a[2]*b[2];
const sub=(a,b)=>a.map((v,i)=>v-b[i]);
const cross=(a,b)=>[a[1]*b[2]-a[2]*b[1],a[2]*b[0]-a[0]*b[2],a[0]*b[1]-a[1]*b[0]];
const axes=[[1,0,0],[0,1,0],[0,0,1]];

export function triangleCollider(vertices) {
  const edges=vertices.map((p,i)=>sub(vertices[(i+1)%3],p));
  const normal=cross(edges[0],edges[1]);if(Math.hypot(...normal)<1e-8)return null;
  const separating=[...axes,normal,...edges.flatMap(edge=>axes.map(axis=>cross(edge,axis)))];
  const projections=[];
  for(const axis of separating) {
    const length=Math.hypot(...axis);if(length<1e-8)continue;
    const n=axis.map(v=>v/length);
    if(projections.some(p=>Math.abs(dot(p.normal,n))>1-1e-7))continue;
    const values=vertices.map(p=>dot(n,p));projections.push({normal:n,min:Math.min(...values),max:Math.max(...values)});
  }
  return {min:axes.map((_,i)=>Math.min(...vertices.map(p=>p[i]))),max:axes.map((_,i)=>Math.max(...vertices.map(p=>p[i]))),projections};
}

export function traceActors(actors,start,end,mins,maxs,result,mask='blocksPlayer') {
  const ignoreId=typeof mask==='object'?mask.ignoreId:undefined;
  const ignoreSupportModelIndex=typeof mask==='object'?mask.ignoreSupportModelIndex:undefined;
  mask=typeof mask==='object'?mask.mask:mask;
  const delta=sub(end,start),center=start.map((v,i)=>v+(mins[i]+maxs[i])/2),extent=mins.map((v,i)=>(maxs[i]-v)/2);
  const sweepMin=start.map((v,i)=>Math.min(v,end[i])+mins[i]),sweepMax=start.map((v,i)=>Math.max(v,end[i])+maxs[i]);
  const overlaps=item=>item.min.every((v,i)=>v<=sweepMax[i]+1e-7&&item.max[i]>=sweepMin[i]-1e-7);
  for(const actor of actors) {
    if(!actor[mask]||(ignoreId!==undefined&&actor.id===ignoreId)||(ignoreSupportModelIndex!==undefined&&actor.supportModelIndex===ignoreSupportModelIndex)||actor.active&&!actor.active()||!overlaps(actor))continue;
    for(const triangle of actor.triangles) {
      if(!overlaps(triangle))continue;
      let enter=-Infinity,leave=Infinity,normal=null,outside=false,miss=false;
      for(const p of triangle.projections) {
        const radius=extent.reduce((sum,v,i)=>sum+v*Math.abs(p.normal[i]),0);
        const initial=dot(center,p.normal),speed=dot(delta,p.normal),low=p.min-radius,high=p.max+radius;
        if(initial<low-1e-7||initial>high+1e-7)outside=true;
        if(Math.abs(speed)<1e-10){if(initial<low-1e-7||initial>high+1e-7){miss=true;break;}continue;}
        let near=(low-initial)/speed,far=(high-initial)/speed;
        if(near>far)[near,far]=[far,near];
        if(near>enter){enter=near;normal=p.normal.map(v=>v===0?0:speed>0?-v:v);}
        leave=Math.min(leave,far);
        if(enter>leave+1e-8){miss=true;break;}
      }
      if(miss||leave<0||enter>1+1e-7)continue;
      if((outside||enter>=-1e-7)&&enter<result.fraction+1e-7&&normal) {
        const closingSpeed=Math.abs(dot(delta,normal));
        result.fraction=Math.max(0,Math.min(result.fraction,enter-.05/Math.max(closingSpeed,1e-10)));
        result.normal=normal;result.actorId=actor.id;result.modelIndex=null;
      }else if(!outside) {
        // Let an already touching/overlapping player move away from a surface.
        if(leave<1||enter>=leave-1e-8)continue;
        if(enter< -1e-7&&leave>1e-7){result.startSolid=true;result.fraction=0;result.actorId=actor.id;result.modelIndex=null;}
      }
    }
  }
  return result;
}

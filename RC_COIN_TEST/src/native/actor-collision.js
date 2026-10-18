// Continuous box/triangle SAT for original actor props. The INI determines
// which queries an actor blocks; mesh contact is a portable reconstruction.
const dot=(a,b)=>a[0]*b[0]+a[1]*b[1]+a[2]*b[2];
const sub=(a,b)=>a.map((v,i)=>v-b[i]);
function appendProjection(projections,a,b,c,x,y,z) {
  const length=Math.hypot(x,y,z);if(length<1e-8)return;
  x/=length;y/=length;z/=length;
  for(let i=0;i<projections.length;i++) {
    const n=projections[i].normal;
    if(Math.abs(n[0]*x+n[1]*y+n[2]*z)>1-1e-7)return;
  }
  const pa=x*a[0]+y*a[1]+z*a[2],pb=x*b[0]+y*b[1]+z*b[2],pc=x*c[0]+y*c[1]+z*c[2];
  projections.push({normal:[x,y,z],min:Math.min(pa,pb,pc),max:Math.max(pa,pb,pc)});
}

function appendEdgeProjections(projections,a,b,c,x,y,z) {
  // Preserve edge x X/Y/Z axis order, including signed zero components.
  appendProjection(projections,a,b,c,y*0-z*0,z-x*0,x*0-y);
  appendProjection(projections,a,b,c,y*0-z,z*0-x*0,x-y*0);
  appendProjection(projections,a,b,c,y-z*0,z*0-x,x*0-y*0);
}

export function triangleCollider(vertices) {
  const a=vertices[0],b=vertices[1],c=vertices[2];
  const x0=b[0]-a[0],y0=b[1]-a[1],z0=b[2]-a[2],x1=c[0]-b[0],y1=c[1]-b[1],z1=c[2]-b[2];
  const nx=y0*z1-z0*y1,ny=z0*x1-x0*z1,nz=x0*y1-y0*x1;
  if(Math.hypot(nx,ny,nz)<1e-8)return null;
  const min=[Math.min(a[0],b[0],c[0]),Math.min(a[1],b[1],c[1]),Math.min(a[2],b[2],c[2])];
  const max=[Math.max(a[0],b[0],c[0]),Math.max(a[1],b[1],c[1]),Math.max(a[2],b[2],c[2])];
  // Animated props rebuild these surfaces each frame. Construct only the
  // retained SAT axes rather than allocating edges, cross products and
  // projected-vertex arrays for every triangle. Axis order and contact
  // thresholds remain identical to the original sweep implementation.
  const projections=[{normal:[1,0,0],min:min[0],max:max[0]},
    {normal:[0,1,0],min:min[1],max:max[1]},{normal:[0,0,1],min:min[2],max:max[2]}];
  appendProjection(projections,a,b,c,nx,ny,nz);
  appendEdgeProjections(projections,a,b,c,x0,y0,z0);
  appendEdgeProjections(projections,a,b,c,x1,y1,z1);
  appendEdgeProjections(projections,a,b,c,a[0]-c[0],a[1]-c[1],a[2]-c[2]);
  return {min,max,projections};
}

export function traceActors(actors,start,end,mins,maxs,result,mask='blocksPlayer') {
  const ignoreId=typeof mask==='object'?mask.ignoreId:undefined;
  const ignoreSupportModelIndex=typeof mask==='object'?mask.ignoreSupportModelIndex:undefined;
  mask=typeof mask==='object'?mask.mask:mask;
  const delta=sub(end,start),center=start.map((v,i)=>v+(mins[i]+maxs[i])/2),extent=mins.map((v,i)=>(maxs[i]-v)/2);
  const sweepMin=start.map((v,i)=>Math.min(v,end[i])+mins[i]),sweepMax=start.map((v,i)=>Math.max(v,end[i])+maxs[i]);
  const overlaps=item=>item.min[0]<=sweepMax[0]+1e-7&&item.max[0]>=sweepMin[0]-1e-7&&
    item.min[1]<=sweepMax[1]+1e-7&&item.max[1]>=sweepMin[1]-1e-7&&
    item.min[2]<=sweepMax[2]+1e-7&&item.max[2]>=sweepMin[2]-1e-7;
  for(const actor of actors) {
    // State predicates can inspect scripted visibility and attachment state.
    // Distant actors cannot intersect this sweep, so reject their bounds first.
    if(!actor[mask]||(ignoreId!==undefined&&actor.id===ignoreId)||(ignoreSupportModelIndex!==undefined&&actor.supportModelIndex===ignoreSupportModelIndex)||!overlaps(actor)||actor.active&&!actor.active())continue;
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

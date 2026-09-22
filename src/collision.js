// Genesis3D BSP convex leaf sweeps. All values remain in the original Y-up units.
import { traceActors } from './actor-collision.js';
const dot = (n, p) => n[0]*p[0]+n[1]*p[1]+n[2]*p[2];
const lerp = (a,b,t) => a.map((v,i)=>v+(b[i]-v)*t);
const boxFaces=(min,max)=>{
  const p=Array.from({length:8},(_,mask)=>min.map((v,i)=>mask&(1<<i)?max[i]:v));
  return [[0,4,6,2],[1,3,7,5],[0,1,5,4],[2,6,7,3],[0,2,3,1],[4,5,7,6]].map(face=>face.map(i=>p[i]));
};
function clipFaces(faces,plane,sign) {
  const result=[],cap=[];
  for(const face of faces) {
    const out=[];
    for(let i=0;i<face.length;i++) {
      const a=face[i],b=face[(i+1)%face.length],da=(dot(plane,a)-plane[3])*sign,db=(dot(plane,b)-plane[3])*sign;
      if(da>=-1e-7)out.push(a);
      if((da>1e-7&&db< -1e-7)||(da< -1e-7&&db>1e-7)) {
        const point=lerp(a,b,da/(da-db));out.push(point);
        if(!cap.some(q=>Math.hypot(...q.map((v,j)=>v-point[j]))<1e-6))cap.push(point);
      }
    }
    if(out.length>=3)result.push(out);
  }
  if(cap.length>=3) {
    const center=[0,1,2].map(i=>cap.reduce((sum,p)=>sum+p[i],0)/cap.length);
    const u=cap[0].map((v,i)=>v-center[i]),n=plane;
    const v=[n[1]*u[2]-n[2]*u[1],n[2]*u[0]-n[0]*u[2],n[0]*u[1]-n[1]*u[0]];
    cap.sort((a,b)=>Math.atan2(dot(v,a.map((x,i)=>x-center[i])),dot(u,a.map((x,i)=>x-center[i])))-Math.atan2(dot(v,b.map((x,i)=>x-center[i])),dot(u,b.map((x,i)=>x-center[i]))));
    result.push(cap);
  }
  return result;
}
// Motions use an explicit pivot. Collision remains a world-axis-aligned player
// box; rotating that box into model space would change its shape and clearance.
const makeTransform = value => {
  if (!value) return null;
  const origin=value.origin ?? [0,0,0], translation=value.translation ?? [0,0,0];
  const rotation=value.rotation ?? [0,0,0,1];
  if(origin.length!==3 || translation.length!==3 || rotation.length!==4 ||
    ![...origin,...translation,...rotation].every(Number.isFinite)) throw new TypeError('Invalid BSP model transform');
  const length=Math.hypot(...rotation);
  if(length<1e-12) throw new RangeError('BSP model rotation must be a nonzero quaternion');
  const [x,y,z,w]=rotation.map(v=>v/length);
  const rotate = p => {
    const tx=2*(y*p[2]-z*p[1]), ty=2*(z*p[0]-x*p[2]), tz=2*(x*p[1]-y*p[0]);
    return [p[0]+w*tx+y*tz-z*ty,p[1]+w*ty+z*tx-x*tz,p[2]+w*tz+x*ty-y*tx];
  };
  const pivot=rotate(origin), offset=origin.map((v,i)=>v-pivot[i]+translation[i]);
  const point = p => rotate(p).map((v,i)=>v+offset[i]);
  const plane = p => { const n=rotate(p); return [...n,p[3]+dot(n,offset)]; };
  const bounds = (min,max) => {
    const low=[Infinity,Infinity,Infinity], high=[-Infinity,-Infinity,-Infinity];
    for(let mask=0;mask<8;mask++) {
      const corner=point(min.map((v,i)=>mask&(1<<i)?max[i]:v));
      for(let i=0;i<3;i++) { low[i]=Math.min(low[i],corner[i]); high[i]=Math.max(high[i],corner[i]); }
    }
    return [low,high];
  };
  return {plane,bounds};
};
export class BspCollider {
  constructor(data) { this.data = data; this.disabledModels = new Set(); this.modelTransforms = new Map(); this.actors=[]; }
  /** Contents of the actual intersected BSP cells, including non-solid liquid
   * leaves without collision sides. Clipping the query hull along the tree
   * avoids treating a concave moat's enclosing bounds as one damaging box. */
  contents(position,mins=[0,0,0],maxs=[0,0,0],modelIndices=[0]) {
    const {models,nodes,planes,leaves}=this.data;
    const low=position.map((v,i)=>v+mins[i]),high=position.map((v,i)=>v+maxs[i]);
    const isPoint=mins.every((v,i)=>v===maxs[i]);let contents=0;
    for(const index of modelIndices) {
      const model=models[index];if(!model||this.disabledModels.has(index))continue;
      const transform=index===0?null:makeTransform(this.modelTransforms.get(index));
      const [boundsMin,boundsMax]=transform&&model.min&&model.max?transform.bounds(model.min,model.max):[model.min,model.max];
      if(boundsMin&&boundsMax&&boundsMin.some((v,i)=>v>high[i]||boundsMax[i]<low[i]))continue;
      const visit=(id,faces)=>{
        if(id<0){contents|=leaves[-id-1]?.contents||0;return;}
        const node=nodes[id];if(!node)return;
        const plane=transform?transform.plane(planes[node[2]]):planes[node[2]];
        if(isPoint){visit(node[dot(plane,low)>=plane[3]?0:1],null);return;}
        const distances=faces.flat().map(p=>dot(plane,p)-plane[3]);
        const minimum=Math.min(...distances),maximum=Math.max(...distances);
        if(maximum>=-1e-7){const front=minimum>=-1e-7?faces:clipFaces(faces,plane,1);if(front.length)visit(node[0],front);}
        if(minimum< -1e-7){const back=maximum<=1e-7?faces:clipFaces(faces,plane,-1);if(back.length)visit(node[1],back);}
      };
      visit(model.root,isPoint?null:boxFaces(low,high));
    }
    return contents;
  }
  trace(start, end, mins = [0,0,0], maxs = [0,0,0], modelIndices = [0], actorMask='blocksPlayer') {
    const { planes, nodes, leaves, leafSides, models } = this.data;
    const result = { fraction:1, end:[...end], normal:[0,1,0], startSolid:false, modelIndex:null };
    const boxMin = start.map((v,i)=>Math.min(v,end[i])+mins[i]);
    const boxMax = start.map((v,i)=>Math.max(v,end[i])+maxs[i]);
    const center = boxMin.map((v,i)=>(v+boxMax[i])*0.5), extent = boxMin.map((v,i)=>(boxMax[i]-v)*0.5);
    for(const modelIndex of modelIndices) {
      if(!models[modelIndex] || this.disabledModels.has(modelIndex)) continue;
      // Model zero is the stationary world, even if a caller supplies a transform.
      const transform=modelIndex===0?null:makeTransform(this.modelTransforms.get(modelIndex));
      const visited = new Set(), transformedPlanes = new Map();
      const plane = index => {
        if(!transform) return planes[index];
        if(!transformedPlanes.has(index)) transformedPlanes.set(index,transform.plane(planes[index]));
        return transformedPlanes.get(index);
      };
      const checkLeaf = index => {
        if (visited.has(index)) return; visited.add(index);
        const leaf=leaves[index];
        if (!leaf || !(leaf.contents & 67) || !leaf.numSides) return;
        if(leaf.min && leaf.max) {
          const [min,max]=transform?transform.bounds(leaf.min,leaf.max):[leaf.min,leaf.max];
          if(min.some((v,i)=>v>boxMax[i] || max[i]<boxMin[i])) return;
        }
        let enter=-Infinity, leave=1, normal=[0,1,0], outside=false, endOutside=false, nearest=-Infinity, exitNormal=null;
        for(let j=0;j<leaf.numSides;j++) {
          const side=leafSides[leaf.firstSide+j], p=plane(side[0]), sign=side[1] ? -1 : 1;
          const n=[p[0]*sign,p[1]*sign,p[2]*sign];
          const d=p[3]*sign-n.reduce((sum,v,i)=>sum+v*(v>0?mins[i]:maxs[i]),0);
          const ds=dot(n,start)-d, de=dot(n,end)-d;
          if(ds>nearest){nearest=ds;exitNormal=n;}
          if(ds>0) outside=true; if(de>0) endOutside=true;
          if(ds>0 && de>=ds) return;
          if(ds<=0 && de<=0) continue;
          if(ds>de) { const t=(ds-0.05)/(ds-de); if(t>enter) { enter=t; normal=n; } }
          else leave=Math.min(leave,(ds+0.05)/(ds-de));
        }
        if(!outside) {
          result.startSolid=true;
          // Moving brushes need the shortest outward displacement from each
          // intersected convex leaf, not the default floor normal of a trace
          // whose starting hull is already inside the newly moved solid.
          (result.penetrations??=[]).push({normal:exitNormal,distance:Math.max(0,-nearest)+.08,modelIndex});
          if(!endOutside) { result.fraction=0; result.modelIndex=modelIndex; }
          else if(result.fraction===1) result.modelIndex=modelIndex;
          return;
        }
        if(enter<leave && enter>-Infinity && enter<result.fraction) {
          result.fraction=Math.max(0,enter); result.normal=normal; result.modelIndex=modelIndex;
        }
      };
      const visit = id => {
        if(id<0) { checkLeaf(-id-1); return; }
        const node=nodes[id]; if(!node) return;
        const p=plane(node[2]), d=dot(p,center)-p[3];
        const r=Math.abs(p[0])*extent[0]+Math.abs(p[1])*extent[1]+Math.abs(p[2])*extent[2];
        if(d+r>=0) visit(node[0]); if(d-r<=0) visit(node[1]);
      };
      visit(models[modelIndex].root);
    }
    if(actorMask)traceActors(this.actors,start,end,mins,maxs,result,actorMask);
    result.end=lerp(start,end,result.fraction); return result;
  }
  slide(position, delta, mins, maxs, modelIndices) {
    let pos=[...position], remaining=[...delta]; const hits=[],models=new Set();
    for(let i=0;i<4;i++) {
      if(Math.hypot(...remaining)<0.001) break;
      const hit=this.trace(pos,pos.map((v,j)=>v+remaining[j]),mins,maxs,modelIndices);
      pos=hit.end;
      if(hit.fraction===1) break;
      hits.push(hit.normal);if(hit.modelIndex!==null)models.add(hit.modelIndex); remaining=remaining.map(v=>v*(1-hit.fraction));
      const into=dot(remaining,hit.normal);
      if(into<0) remaining=remaining.map((v,j)=>v-hit.normal[j]*into);
      if(hit.startSolid && hit.fraction===0) break;
    }
    return {position:pos,hits,models:[...models]};
  }
}
export class PlayerController {
  constructor(collider, position, modelIndices=[0]) {
    this.collider=collider; this.position=[...position]; this.velocityY=0;
    this.launchVelocityXZ=[0,0];
    this.grounded=false; this.modelIndices=modelIndices; this.mins=[-11,0,-11]; this.maxs=[11,56,11];
    this.lastSafe=[...position];this.noClip=false;this.environmentVelocity=[0,0,0];
  }
  resetVelocity(){this.velocityY=0;this.launchVelocityXZ=[0,0];}
  update(dt, input, yaw, pitch=0) {
    dt=Math.min(dt,0.05);
    if(this.noClip) {
      const forward=input.forward||0,right=input.right||0,vertical=Number(!!input.jump)-Number(!!input.descend);
      const direction=[-Math.sin(yaw)*Math.cos(pitch)*forward+Math.cos(yaw)*right,
        -Math.sin(pitch)*forward+vertical,-Math.cos(yaw)*Math.cos(pitch)*forward-Math.sin(yaw)*right];
      const length=Math.max(1,Math.hypot(...direction)),speed=240;
      this.position=this.position.map((v,i)=>v+direction[i]/length*speed*dt);
      this.resetVelocity();this.grounded=false;this.contacts=new Set();
      return this.position;
    }
    const speed=input.walk ? 96:156.8;
    const length=Math.max(1,Math.hypot(input.forward,input.right));
    const forward=input.forward/length, right=input.right/length;
    const wind=this.environmentVelocity||[0,0,0];
    // Native 0x4d7aed refreshes the whole airborne launch vector every tick
    // inside a positive-Y stream, even when already rising or falling.
    // The external vector below is a separate, volume-bound contribution.
    if(wind[1]>0){this.velocityY=wind[1];this.launchVelocityXZ=[wind[0],wind[2]];this.grounded=false;}
    const dx=((-Math.sin(yaw)*forward+Math.cos(yaw)*right)*speed+wind[0]+this.launchVelocityXZ[0])*dt;
    const dz=((-Math.cos(yaw)*forward-Math.sin(yaw)*right)*speed+wind[2]+this.launchVelocityXZ[1])*dt;
    const before=[...this.position];
    let move=this.collider.slide(before,[dx,0,dz],this.mins,this.maxs,this.modelIndices);
    if(this.grounded && move.hits.length && (dx || dz)) {
      const up=this.collider.trace(before,[before[0],before[1]+16,before[2]],this.mins,this.maxs,this.modelIndices);
      if(up.fraction===1) {
        const step=this.collider.slide(up.end,[dx,0,dz],this.mins,this.maxs,this.modelIndices);
        const down=this.collider.trace(step.position,[step.position[0],step.position[1]-18,step.position[2]],this.mins,this.maxs,this.modelIndices);
        const progress=p=>(p[0]-before[0])**2+(p[2]-before[2])**2;
        if(down.fraction<1 && down.normal[1]>0.65 && progress(down.end)>progress(move.position)+0.01) move.position=down.end;
      }
    }
    this.contacts=new Set(move.models);
    this.position=move.position;
    if(input.jump && this.grounded) { this.velocityY=Math.sqrt(2*800*41.6); this.launchVelocityXZ=[0,0]; this.grounded=false; }
    // Native airborne motion applies half the gravity step before computing
    // displacement and the other half afterward (0x4d82c1–0x4d8334).
    const verticalSpeed=this.velocityY+wind[1]-400*dt;
    this.velocityY-=800*dt;
    const fall=this.collider.trace(this.position,[this.position[0],this.position[1]+verticalSpeed*dt,this.position[2]],this.mins,this.maxs,this.modelIndices);
    this.position=fall.end; this.grounded=false;
    if(fall.fraction<1) { if(fall.modelIndex!==null)this.contacts.add(fall.modelIndex);this.grounded=fall.normal[1]>0.65 && verticalSpeed<=0; this.velocityY=0; }
    if(this.grounded) {this.launchVelocityXZ=[0,0];this.lastSafe=[...this.position];}
    return this.position;
  }
}

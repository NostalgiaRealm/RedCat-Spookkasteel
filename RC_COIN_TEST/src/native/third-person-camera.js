// Collision changes the viewing position, never the player's aim angles.
// Keep room around the rendered actor, whose ears/arms exceed its movement hull.
export const CAMERA_BODY={radius:28,bottom:-8,top:80};
const distance=(a,b)=>Math.hypot(...a.map((v,i)=>v-b[i]));
const mix=(a,b,t)=>a.map((v,i)=>v+(b[i]-v)*t);
const clamp=(v,min,max)=>Math.max(min,Math.min(max,v));
export function cameraInsidePlayer(position,playerPosition) {
  const [x,y,z]=position.map((v,i)=>v-playerPosition[i]);
  return Math.abs(x)<CAMERA_BODY.radius&&Math.abs(z)<CAMERA_BODY.radius&&y>CAMERA_BODY.bottom&&y<CAMERA_BODY.top;
}

/** trace sweeps a small camera hull through the world's current collision pose. */
export function resolveThirdPersonCamera({anchor,desired,previous,playerPosition,dt,snap=false,trace}) {
  const delta=desired.map((v,i)=>v-anchor[i]),length=Math.hypot(...delta);
  const horizontal=Math.hypot(delta[0],delta[2]);
  const back=horizontal>1e-6?[delta[0]/horizontal,0,delta[2]/horizontal]:[0,0,1];
  const baseAngle=Math.atan2(delta[1],horizontal);
  // Stay just behind the vertical pole so lookAt retains the player's heading.
  // An exactly vertical view has no horizontal direction and can flip around.
  const overheadAngle=Math.max(baseAngle,Math.PI/2-Math.PI/180);
  const minimum=Math.min(80,length),comfortable=position=>distance(anchor,position)>=minimum-.1;
  const clear=position=>!cameraInsidePlayer(position,playerPosition);
  const sample=position=>{
    const hit=trace(anchor,position);
    return {position:hit.end,valid:!hit.startSolid&&clear(hit.end)};
  };
  let chosen=sample(desired);
  // Start lifting before the rear view reaches the model. A pitched-up boom
  // can retain its distance even with RedCat's back almost against a wall.
  if(!chosen.valid||!comfortable(chosen.position)) {
    let best=chosen.valid?chosen:null;
    for(let step=1;step<=8;step++) {
      const angle=baseAngle+(overheadAngle-baseAngle)*step/8;
      const candidate=sample(anchor.map((v,i)=>v+(i===1?Math.sin(angle):back[i]*Math.cos(angle))*length));
      if(!candidate.valid)continue;
      if(!best||distance(anchor,candidate.position)>distance(anchor,best.position))best=candidate;
      if(comfortable(candidate.position)){best=candidate;break;}
    }
    // Low ceilings can prevent an overhead view. Prefer a clear side/front
    // view to squeezing back inside the actor or passing through the ceiling.
    if(!best||!comfortable(best.position)) {
      const directions=[[back[2],0,-back[0]],[-back[2],0,back[0]],[-back[0],0,-back[2]]];
      for(const side of directions) {
        const candidate=sample(anchor.map((v,i)=>v+(i===1?Math.max(0,delta[1]):side[i]*horizontal)));
        if(!candidate.valid)continue;
        if(!best||distance(anchor,candidate.position)>distance(anchor,best.position))best=candidate;
        if(comfortable(candidate.position)){best=candidate;break;}
      }
    }
    chosen=best||chosen;
  }
  // Recheck the interpolated point: the old camera can be on the other side
  // of a wall, and a chord between two safe views can pass through RedCat.
  let position=chosen.position;
  if(!snap&&chosen.valid&&previous?.every(Number.isFinite)) {
    const smoothed=sample(mix(previous,position,1-Math.exp(-12*Math.max(0,dt))));
    if(smoothed.valid)position=smoothed.position;
  }
  const offset=position.map((v,i)=>v-anchor[i]);
  const angle=Math.atan2(offset[1],Math.hypot(offset[0],offset[2]));
  const lift=clamp((angle-baseAngle)/Math.max(.01,Math.PI/2-baseAngle),0,1);
  // Only a space with no safe external viewpoint needs this last resort.
  // It is restored on the next camera update as soon as there is room again.
  return {position,lift,hidePlayer:!chosen.valid};
}

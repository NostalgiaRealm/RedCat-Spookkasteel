import { transformMotionPoint } from './motions.js';

const distance=(a,b)=>Math.hypot(...a.map((v,i)=>v-b[i]));
const movedPoint=(point,previous,next)=>{
  const inverse={translation:[0,0,0],rotation:previous.rotation.map((v,i)=>i<3?-v:v)};
  const local=transformMotionPoint(point.map((v,i)=>v-previous.translation[i]),previous.origin,inverse);
  return transformMotionPoint(local,next.origin,next);
};

/** Advance an original solid brush while keeping the player's world-axis hull
 * outside it. Like Genesis3D's TestModelMove, a world-blocked push rejects the
 * brush move. Sampling the original path catches both translation and the arc
 * of a hinged door; it does not invent new endpoints or move the player through
 * the static world. The caller commits its timeline only after this succeeds. */
export function moveSolidPlayer(collider,player,modelIndex,previous,next,{sample=null,from=0,to=0}={}) {
  if(player.noClip||modelIndex===0||!player.modelIndices.includes(modelIndex)||collider.disabledModels.has(modelIndex))return true;
  const model=collider.data.models[modelIndex];if(!model)return true;
  const oldStored=collider.modelTransforms.get(modelIndex),original=[...player.position];
  const others=player.modelIndices.filter(index=>index!==modelIndex);
  const bounds=model.min&&model.max?Array.from({length:8},(_,mask)=>model.min.map((v,i)=>mask&(1<<i)?model.max[i]:v)):[previous.origin];
  if(model.min&&model.max) {
    const radius=Math.max(...bounds.map(point=>distance(point,previous.origin)))+Math.hypot(...player.maxs.map((v,i)=>(v-player.mins[i])/2))+2;
    const center=original.map((v,i)=>v+(player.mins[i]+player.maxs[i])/2),a=previous.origin.map((v,i)=>v+previous.translation[i]),b=next.origin.map((v,i)=>v+next.translation[i]);
    const delta=b.map((v,i)=>v-a[i]),lengthSquared=delta.reduce((sum,v)=>sum+v*v,0);
    const t=lengthSquared?Math.max(0,Math.min(1,delta.reduce((sum,v,i)=>sum+v*(center[i]-a[i]),0)/lengthSquared)):0;
    if(distance(center,a.map((v,i)=>v+delta[i]*t))>radius)return true;
  }
  const travel=Math.max(...bounds.map(point=>distance(transformMotionPoint(point,previous.origin,previous),transformMotionPoint(point,next.origin,next))));
  const stride=Math.max(.05,Math.min(2,...player.maxs.map((v,i)=>(v-player.mins[i])/4)));
  const steps=Math.max(1,Math.ceil(travel/stride),Math.ceil(Math.abs(to-from)/.02));
  // Malformed/extreme paths must not bypass collision by hitting a step cap.
  if(steps>4096)return false;
  const restore=()=>{if(oldStored)collider.modelTransforms.set(modelIndex,oldStored);else collider.modelTransforms.delete(modelIndex);return false;};
  const interpolate=t=>{
    if(sample)return sample(from+(to-from)*t);
    // Runtime always supplies the authored sampler. This fallback is useful for
    // direct translations and editor/test callers with only two poses.
    let q=next.rotation;if(q.reduce((sum,v,i)=>sum+v*previous.rotation[i],0)<0)q=q.map(v=>-v);
    const r=previous.rotation.map((v,i)=>v+(q[i]-v)*t),length=Math.hypot(...r);
    return {origin:previous.origin,translation:previous.translation.map((v,i)=>v+(next.translation[i]-v)*t),rotation:r.map(v=>v/length)};
  };
  let position=original,pose=previous;
  collider.modelTransforms.set(modelIndex,previous);
  for(let step=1;step<=steps;step++) {
    const destination=step===steps?next:interpolate(step/steps);
    const support=player.grounded?collider.trace(position,position.map((v,i)=>i===1?v-2:v),player.mins,player.maxs,[modelIndex],false):null;
    if(support?.fraction<1&&support.normal[1]>.65&&!support.startSolid) {
      const carried=movedPoint(position,pose,destination);
      // Mounted props travel with this floor. Testing their previous world
      // positions would stop a passenger against the floor's own furniture.
      // Only the carry trace excludes them; ordinary movement, brush pushes
      // and unrelated actor props retain their normal collision rules.
      const hit=collider.trace(position,carried,player.mins,player.maxs,others,{mask:'blocksPlayer',ignoreSupportModelIndex:modelIndex});
      if(hit.startSolid||hit.fraction<1)return restore();
      position=carried;
    }
    collider.modelTransforms.set(modelIndex,destination);
    let clear=false;
    for(let iteration=0;iteration<12;iteration++) {
      const overlap=collider.trace(position,position,player.mins,player.maxs,[modelIndex],false);
      if(!overlap.startSolid){clear=true;break;}
      const exits=(overlap.penetrations||[]).sort((a,b)=>a.distance-b.distance);
      const exit=exits[0];if(!exit?.normal)return restore();
      const pushed=position.map((v,i)=>v+exit.normal[i]*exit.distance);
      const hit=collider.trace(position,pushed,player.mins,player.maxs,others);
      if(hit.startSolid||hit.fraction<1)return restore();
      position=pushed;
    }
    if(!clear)return restore();
    pose=destination;
  }
  player.position=position;
  if(distance(original,position)>.001)player.contacts?.add?.(modelIndex);
  return true;
}

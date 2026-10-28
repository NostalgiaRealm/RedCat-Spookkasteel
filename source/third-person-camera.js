// Requested port addition on top of the native camera (native-camera.js):
// when RedCat backs up against a wall, the native pull-in can leave the
// camera inside his model. Raise it along an arc over RedCat instead, so the
// view never passes through his body. Under a low ceiling that blocks the arc,
// fall back to a clear side or front view; with no external view at all, hide
// his model for that frame.
// Keep room around the rendered actor, whose ears/arms exceed its movement hull.
export const CAMERA_BODY={radius:28,bottom:-8,top:80};
// The lifted boom keeps at least this much distance from the chest anchor.
const COMFORTABLE_DISTANCE=80;
// The arc is scanned coarsely, then the lowest suitable angle is refined, so
// the lift changes continuously instead of in steps. Six halvings place it
// within 1/1024 of the arc (about 0.1 unit).
const SCAN_STEPS=16,REFINE_STEPS=6;
// Easing per second of the lift used to turn the view toward RedCat: rise
// quickly, settle back more gently.
const RISE_RATE=10,FALL_RATE=4;
// While lifted, and while blending back to the native view, the camera
// position itself eases at this rate (as release 1.0.4 did), so changes in how
// the wall clips the arc never jump. Each eased step is collision-checked.
const POSITION_RATE=12,RETURN_RATE=6,SETTLED=.25;
// A reused lift (see CameraWallLift.reuse) is rescanned at least this often.
const RESCAN_SECONDS=.5;
const distance=(a,b)=>Math.hypot(...a.map((v,i)=>v-b[i]));
const clamp=(v,min,max)=>Math.max(min,Math.min(max,v));
export function cameraInsidePlayer(position,playerPosition) {
  const [x,y,z]=position.map((v,i)=>v-playerPosition[i]);
  return Math.abs(x)<CAMERA_BODY.radius&&Math.abs(z)<CAMERA_BODY.radius&&y>CAMERA_BODY.bottom&&y<CAMERA_BODY.top;
}

function arc({anchor,desired,playerPosition,trace}) {
  const delta=desired.map((v,i)=>v-anchor[i]),boom=Math.hypot(...delta);
  const horizontal=Math.hypot(delta[0],delta[2]);
  const back=horizontal>1e-6?[delta[0]/horizontal,0,delta[2]/horizontal]:[0,0,1];
  const baseAngle=Math.atan2(delta[1],horizontal);
  // Stay just behind the vertical pole so the view keeps RedCat's heading.
  const overheadAngle=Math.max(baseAngle,Math.PI/2-Math.PI/180);
  const minimum=Math.min(COMFORTABLE_DISTANCE,boom);
  // The arc runs at the comfortable radius: the camera rises only as far as
  // the wall requires and comes down again as RedCat gains room.
  const sample=lift=>{
    const angle=baseAngle+(overheadAngle-baseAngle)*lift;
    const hit=trace(anchor,anchor.map((v,i)=>v+(i===1?Math.sin(angle):back[i]*Math.cos(angle))*minimum));
    const valid=!hit.startSolid&&!cameraInsidePlayer(hit.end,playerPosition);
    return {position:hit.end,valid,comfortable:valid&&distance(anchor,hit.end)>=minimum-.1};
  };
  return {delta,back,horizontal,minimum,sample};
}

const comfortable=s=>s.comfortable,valid=s=>s.valid;

/**
 * Lowest lift in (0, 1] whose arc sample is comfortable, or else the lowest
 * that is at least valid, refined between scan steps; null if none. One scan
 * serves both tests. Returns {lift, low, test, sample}: `low` is the highest
 * lift known to fail the test, and `sample` the arc sample at `lift`.
 */
function lowestLift(sample) {
  let previous=0,firstValid=null;
  for(let step=1;step<=SCAN_STEPS;step++) {
    const lift=step/SCAN_STEPS,s=sample(lift);
    if(s.comfortable)return refine(sample,comfortable,previous,lift,s);
    if(s.valid&&!firstValid)firstValid={low:step===1?0:(step-1)/SCAN_STEPS,lift,s};
    previous=lift;
  }
  return firstValid&&refine(sample,valid,firstValid.low,firstValid.lift,firstValid.s);
}
function refine(sample,test,low,high,highSample) {
  for(let i=0;i<REFINE_STEPS;i++){const middle=(low+high)/2,s=sample(middle);if(test(s)){high=middle;highSample=s;}else low=middle;}
  return {lift:high,low,test,sample:highSample};
}
const sameVector=(a,b)=>!!a&&!!b&&a[0]===b[0]&&a[1]===b[1]&&a[2]===b[2];

/**
 * Stateful wall lift. anchor: RedCat's chest; desired: the unobstructed native
 * camera position; position: the native result after collision; trace sweeps
 * a small camera hull through the world. Returns the position; `lift` (0 for
 * the native view, 1 for directly overhead); `focus`, how far the caller
 * should turn the view toward RedCat; and `hidePlayer` when no external
 * viewpoint exists.
 */
export class CameraWallLift {
  constructor(){this.reset();}
  reset(){this.lift=0;this.last=null;this.blending=false;this.found=null;this.foundAge=0;}
  /** Direct mouse/touch look turns the eased position with RedCat (see native-camera.js). */
  lookTurn(deltaYaw,eye) {
    if(!this.last||!Number.isFinite(deltaYaw)||!deltaYaw)return;
    const c=Math.cos(deltaYaw),s=Math.sin(deltaYaw),x=this.last[0]-eye[0],z=this.last[2]-eye[2];
    this.last=[eye[0]+x*c+z*s,this.last[1],eye[2]+z*c-x*s];
  }
  update(dt,options) {
    const result=this.target(dt,options),{anchor,playerPosition,trace,snap=false}=options;
    const active=result.position!==this.nativePosition||result.lift>0||result.focus>0||result.hidePlayer;
    if(!snap&&this.last&&(active||this.blending)&&!result.hidePlayer) {
      // Returning to the native view eases more gently than avoiding the wall.
      const rate=result.position===this.nativePosition?RETURN_RATE:POSITION_RATE;
      const k=1-Math.exp(-rate*Math.max(0,dt));
      const eased=this.last.map((v,i)=>v+(result.position[i]-v)*k);
      // Keep the eased step, clipped against the world, as long as it stays outside RedCat.
      const sight=trace(anchor,eased);
      if(!sight.startSolid&&!cameraInsidePlayer(sight.end,playerPosition))result.position=sight.end;
    }
    this.blending=active||(!!this.last&&distance(result.position,this.nativePosition)>SETTLED);
    if(!active&&!this.blending)result.position=this.nativePosition;
    this.last=[...result.position];
    return result;
  }
  target(dt,{anchor,desired,position,playerPosition,trace,snap=false}) {
    this.nativePosition=position;
    const {sample,back,horizontal,delta,minimum}=arc({anchor,desired,playerPosition,trace});
    const nativeClear=!cameraInsidePlayer(position,playerPosition)&&distance(anchor,position)>=minimum-.1;
    // Target: the lowest comfortable lift (0 when the native view is fine), or
    // else the lowest that keeps the camera outside the model. The position
    // aims at that unclipped arc point; update() eases the position, and the
    // eased lift only turns the view toward RedCat.
    let found=null;this.foundAge+=Math.max(0,dt);
    if(!nativeClear) {
      found=this.reuse({anchor,desired,position,playerPosition},sample);
      if(!found){found=lowestLift(sample)??{lift:null};this.foundAge=0;}
    }
    this.found=found&&{...found,anchor,desired,position,playerPosition};
    const target=nativeClear?0:found.lift;
    if(target===null)return this.fallback({anchor,position,playerPosition,trace,back,horizontal,delta,minimum});
    const rate=target>this.lift?RISE_RATE:FALL_RATE;
    let lift=snap?target:this.lift+(target-this.lift)*(1-Math.exp(-rate*Math.max(0,dt)));
    if(lift<1e-4)lift=0;
    this.lift=lift=clamp(lift,0,1);
    // With the native view clear again, aim for the native position; the
    // position easing in update() carries the camera back down smoothly.
    if(nativeClear)return {position,lift,focus:lift,hidePlayer:false};
    return {position:found.sample.position,lift,focus:lift,hidePlayer:false};
  }
  /**
   * While RedCat and the native camera stay put (standing against a wall),
   * keep last frame's lift when its arc sample still passes and the one just
   * below still fails: two traces instead of a full scan. A blocked arc is
   * kept as is. Moving geometry that changes either sample triggers a new
   * scan, and any reuse is rescanned after RESCAN_SECONDS.
   */
  reuse({anchor,desired,position,playerPosition},sample) {
    const found=this.found;
    if(!found||this.foundAge>=RESCAN_SECONDS||!sameVector(found.anchor,anchor)||!sameVector(found.desired,desired)||
      !sameVector(found.position,position)||!sameVector(found.playerPosition,playerPosition))return null;
    if(found.lift===null)return found;
    const s=sample(found.lift);
    if(!found.test(s)||found.low>0&&found.test(sample(found.low)))return null;
    if(found.test===valid&&s.comfortable)return null;
    return {...found,sample:s};
  }
  /** Low ceiling blocks the whole arc: a clear side or front view, else hide the model. */
  fallback({anchor,position,playerPosition,trace,back,horizontal,delta,minimum}) {
    this.lift=0;
    let side=null;
    for(const direction of [[back[2],0,-back[0]],[-back[2],0,back[0]],[-back[0],0,-back[2]]]) {
      const hit=trace(anchor,anchor.map((v,i)=>v+(i===1?Math.max(0,delta[1]):direction[i]*horizontal)));
      if(hit.startSolid||cameraInsidePlayer(hit.end,playerPosition))continue;
      if(!side||distance(anchor,hit.end)>distance(anchor,side))side=hit.end;
      if(distance(anchor,hit.end)>=minimum-.1){side=hit.end;break;}
    }
    if(side&&(cameraInsidePlayer(position,playerPosition)||distance(anchor,side)>distance(anchor,position)))
      return {position:side,lift:0,focus:1,hidePlayer:false};
    if(!cameraInsidePlayer(position,playerPosition))return {position,lift:0,focus:0,hidePlayer:false};
    // No external viewpoint at all: keep the native position and hide RedCat's
    // model for this frame instead of rendering the view from inside it.
    return {position,lift:0,focus:0,hidePlayer:true};
  }
}

/** Single-frame form (no easing), for callers without camera state. */
export function liftCameraOverPlayer(options) {
  return new CameraWallLift().update(0,{...options,snap:true});
}

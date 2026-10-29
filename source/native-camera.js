// Native third-person camera and camera-relative steering, reconstructed from
// RcHcGame.dat (e30781fc…). The camera controller is CRcDop (ctor 0x457e00,
// per-frame entry 0x4594a0); follow modes 5/6 are 0x4598e0, lock-on mode 9 is
// 0x459e50, the position chase 0x45a470, line-of-sight search 0x45aa40 and
// hull collision 0x45ae30. Steering is CRCPlayer 0x434430 / 0x434f20.
// See docs/native-camera.md for the recovered behaviour and the port's extras.
import {cameraFinalApproachSpeed} from './script-camera.js';

// Game.ini [RcCamera] TurnSpeed and TurnRatio (0x457e00): the camera yaw and
// pitch turn at TurnSpeed per second, scaled by TurnRatio while input is held.
export const CAMERA_TURN_SPEED=2;
export const CAMERA_TURN_RATIO=.75;
// While the line-of-sight search holds an alternate position, yaw turns to
// face RedCat at this rate.
export const CAMERA_ALT_TURN_SPEED=4;
// Preset table copied from rdata 0x64d3a8: [height xH above the feet,
// distance xH behind, pitch degrees (negative looks down)]. The row index is
// the Weapon1/2/3 distance setting (0x458e40), reset to 0 on each sublevel.
export const CAMERA_PRESETS=Object.freeze([
  {moving:[1.25,2.5,-6],backpedal:[1.6,2.7,-27],idle:[1.5,1.7,-15]},
  {moving:[1.25,3.5,-7],backpedal:[1.6,2.7,-27],idle:[1.5,2.7,-15]},
  {moving:[1.75,3.25,-12],backpedal:[2.1,2.45,-32],idle:[2,2.5,-18]},
].map(Object.freeze));
// Lock-on camera (0x459e50): 1.2xH up and 1.5xH behind RedCat's heading.
export const LOCK_ON_CAMERA=Object.freeze({height:1.2,distance:1.5});
// Steering rates (0x64c428 / 0x64c424) and the snap window (0x64c580).
export const STEER_MOVE_RATE=6.1;
export const STEER_TURN_RATE=2.4;
export const STEER_SNAP=Math.PI/8;
const CHASE_SNAP=5,CHASE_MIN_SPEED=150,CHASE_TABLE_START=50;
const MOVED=.01,HULL=8,NUDGE=.01;
const SEARCH_STEPS_DEGREES=[10,8,6];

const wrap=angle=>Math.atan2(Math.sin(angle),Math.cos(angle));
const add=(a,b)=>a.map((v,i)=>v+b[i]);
const sub=(a,b)=>a.map((v,i)=>v-b[i]);
const length=v=>Math.hypot(...v);
/** Port yaw convention: forward is (-sin yaw, 0, -cos yaw). */
export const yawToward=(from,to)=>Math.atan2(-(to[0]-from[0]),-(to[2]-from[2]));

/** 0x458900: turn by min(1, dt*rate) of the shortest difference; tiny gaps snap. */
export function turnAngle(current,target,rate,dt) {
  const diff=wrap(target-current);
  if(Math.abs(diff)<.001)return wrap(target);
  return wrap(current+Math.min(1,Math.max(0,dt)*rate)*diff);
}

/** Steering heading slerp (0x43478c): snaps inside pi/8, otherwise min(1, dt*rate). */
function steerHeading(current,target,rate,dt) {
  const diff=wrap(target-current);
  return Math.abs(diff)<STEER_SNAP?wrap(target):wrap(current+Math.min(1,Math.max(0,dt)*rate)*diff);
}

const sign=value=>value>1e-3?1:value<-1e-3?-1:0;

/**
 * Native camera-relative steering (0x434f20). `forward` > 0 is forward,
 * `steer` > 0 turns right (TurnLeft/Right and analog sticks), `strafe` > 0
 * sidesteps right (MoveLeft/Right). Only the sign of each input matters, as in
 * the original. `cameraYaw` is the previous frame's camera yaw. With
 * `lockYaw` (lock-on), input turns RedCat toward the target and the raw input
 * moves him in his own frame. Shipped Game.ini sets ControlMode=1, so a
 * sideways input alone turns RedCat in place. `firing`: Fire is held and
 * RedCat has a skill; 0x437770 then zeroes the move vector at the end, so he
 * still turns but stands still to shoot.
 */
export function nativeSteer(controls,{firing=false,...options}) {
  const result=steerInput(controls,options);
  return firing?{...result,move:{forward:0,right:0}}:result;
}
// Touch stick, a deliberate departure: the original's controls are digital,
// so nativeSteer keeps only the sign of each input and any deflection runs at
// full speed. The touch stick instead steers toward its own direction relative
// to the camera, continuously rather than in 45 degree steps, and its
// deflection sets the speed. Pulling back (within 45 degrees of straight down)
// backs RedCat up as the original's back input does. A light deflection also
// turns more gently (at least 35% of the original rate). Lopen scales the speed by
// the original's walk/run ratio in every direction (WalkOtherSpeed exceeds
// RunOtherSpeed in Game.ini, so the walk table would back up faster).
export const TOUCH_WALK_SCALE=96/156.8,TOUCH_MIN_TURN=.35;
export function touchSteer([x,y],{heading,cameraYaw,dt,lockYaw=null,firing=false,walk=false}) {
  const magnitude=Math.min(1,Math.hypot(x,y));
  if(!(magnitude>0))return {heading,move:{forward:0,right:0,walk:false},hasInput:false,backpedal:false};
  const speed=magnitude*(walk?TOUCH_WALK_SCALE:1),stop=firing?0:1,rate=STEER_MOVE_RATE*Math.max(TOUCH_MIN_TURN,magnitude);
  // With a locked target the stick moves RedCat in his own frame while he faces it.
  if(lockYaw!==null)return {heading:steerHeading(heading,lockYaw,rate,dt),
    move:{forward:y/magnitude*speed*stop,right:x/magnitude*speed*stop,walk:false},hasInput:true,backpedal:y<0};
  const angle=Math.atan2(x,y),backpedal=Math.abs(angle)>=3*Math.PI/4;
  const target=backpedal?cameraYaw+Math.sign(angle)*(Math.PI-Math.abs(angle)):cameraYaw-angle;
  return {heading:steerHeading(heading,target,rate,dt),
    move:{forward:(backpedal?-speed:speed)*stop,right:0,walk:false},hasInput:true,backpedal};
}
function steerInput({forward=0,steer=0,strafe=0}={},{heading,cameraYaw,dt,lockYaw=null}) {
  const z=-sign(forward),x=sign(steer),sx=sign(strafe);
  if(!z&&!x&&!sx)return {heading,move:{forward:0,right:0},hasInput:false,backpedal:false};
  // A held strafe key freezes the heading and drops any forward component.
  if(sx)return {heading,move:{forward:0,right:sx},hasInput:true,backpedal:false};
  if(lockYaw!==null)return {heading:steerHeading(heading,lockYaw,z?STEER_MOVE_RATE:STEER_TURN_RATE,dt),
    move:{forward:-z,right:x},hasInput:true,backpedal:z===1};
  // Camera frame angles: F = cameraYaw, L = cameraYaw + pi/2, R = cameraYaw - pi/2.
  let target,move,rate=STEER_MOVE_RATE;
  if(z===-1){target=cameraYaw-x*Math.PI/4;move={forward:1,right:0};}
  else if(z===1){target=cameraYaw+x*Math.PI/4;move={forward:-1,right:0};}
  else {target=cameraYaw-x*Math.PI/2;move={forward:0,right:0};rate=STEER_TURN_RATE;}
  return {heading:steerHeading(heading,target,rate,dt),move,hasInput:true,backpedal:z===1};
}

/** 0x45a470: follow the player's displacement, then close the error at a distance-dependent speed. */
export function chaseCamera(previous,desired,playerDelta,dt) {
  const predicted=add(previous,playerDelta),error=sub(desired,predicted),distance=length(error);
  if(distance<CHASE_SNAP)return [...desired];
  const speed=distance<=CHASE_TABLE_START?CHASE_MIN_SPEED:cameraFinalApproachSpeed(distance);
  return predicted.map((v,i)=>v+error[i]/distance*speed*Math.max(0,dt));
}

const blocked=hit=>!!hit&&(hit.startSolid||hit.fraction<1);
const nudged=hit=>hit.end.map((v,i)=>v+(hit.normal?.[i]||0)*NUDGE);

/**
 * Native follow camera (modes 5, 6 and 9). Every mode change is a hard cut;
 * otherwise yaw and pitch turn at frame-dependent rates and the position is
 * chased. Port extra: look input (mouse, touch drag, right stick) acts
 * directly, without the native smoothing. `lookTurn` turns the view together
 * with RedCat, and the look pitch tilts and swings the camera at once. The
 * native smoothing and chase run on the base position underneath.
 */
export class NativeFollowCamera {
  constructor(){this.reset();}
  reset() {
    this.cut=true;this.yaw=0;this.pitch=0;this.position=null;this.lastEye=null;this.lastFeet=null;
    this.moving=false;this.idleAfterMove=false;this.pulledIn=false;this.altLock=false;this.altPosition=null;
    this.basePosition=null;this.presetIndex=0;
  }
  /**
   * Port extra: a look turn rotates the camera with RedCat's heading at once.
   * The stored chase positions rotate around him too, so nothing smooths it.
   */
  lookTurn(deltaYaw,eye) {
    if(!Number.isFinite(deltaYaw)||!deltaYaw)return;
    this.yaw=wrap(this.yaw+deltaYaw);
    const c=Math.cos(deltaYaw),s=Math.sin(deltaYaw);
    const rotate=point=>{if(!point)return point;const x=point[0]-eye[0],z=point[2]-eye[2];return [eye[0]+x*c+z*s,point[1],eye[2]+z*c-x*s];};
    this.position=rotate(this.position);this.basePosition=rotate(this.basePosition);this.altPosition=rotate(this.altPosition);
  }
  /**
   * @param {object} o
   * feet/eye: RedCat's feet and box origin; height: box height H; heading: RedCat yaw;
   * hasInput/backpedal: from nativeSteer; steering: control enabled (not frozen);
   * aiming: RedCat stands to shoot (animation state 0xf), which selects the idle row;
   * offset: CamOffset [h,d,pitch] for mode 6; lockTarget: aim point for mode 9;
   * orbitPitch: port orbit pitch in radians (positive looks down);
   * ray/sweep: zero-width and +-8 box traces returning {fraction,end,normal,startSolid};
   * direct: no-clip flight, follow the heading without collision.
   */
  update(dt,o) {
    const {feet,eye,height:H,heading,hasInput=false,backpedal=false,steering=true,aiming=false,offset=null,lockTarget=null,
      orbitPitch=0,ray,sweep,direct=false}=o;
    const cut=this.cut||!this.position;this.cut=false;
    const moved=!!this.lastFeet&&Math.max(...feet.map((v,i)=>Math.abs(v-this.lastFeet[i])))>MOVED;
    this.lastFeet=[...feet];
    const eyeDelta=this.lastEye?sub(eye,this.lastEye):[0,0,0];
    const turnRate=hasInput?CAMERA_TURN_SPEED*CAMERA_TURN_RATIO:CAMERA_TURN_SPEED;
    // Yaw follows RedCat's heading (look turns were already applied directly).
    const previousYaw=this.yaw;
    if(cut||direct)this.yaw=wrap(heading);
    else this.yaw=turnAngle(this.yaw,heading,turnRate,dt);
    let row,lock=!!lockTarget;
    if(lock)row=[LOCK_ON_CAMERA.height,LOCK_ON_CAMERA.distance,null];
    else if(offset)row=offset;
    // 0x4598e0 takes the idle row while the player's state +0x340 is 0xf, the
    // shooting stance that holding Fire with a skill enters (0x4328e6).
    else if((hasInput||moved)&&steering&&!aiming) {
      this.moving=true;this.idleAfterMove=false;this.pulledIn=false;
      row=CAMERA_PRESETS[this.presetIndex][backpedal?'backpedal':'moving'];
    } else {this.idleAfterMove=this.moving;this.moving=false;row=CAMERA_PRESETS[this.presetIndex].idle;}
    const [h,d,presetPitch]=row,orbit=lock?0:orbitPitch;
    // Native base position (native distance and height). The look pitch then
    // swings it around RedCat's chest directly, without smoothing.
    const back=[Math.sin(this.yaw),0,Math.cos(this.yaw)],pivot=[feet[0],feet[1]+.75*H,feet[2]];
    const swing=(point,angle)=>{
      const v=sub(point,pivot),along=v[0]*back[0]+v[2]*back[2],c=Math.cos(angle),s=Math.sin(angle);
      const alongNew=along*c-v[1]*s,up=v[1]*c+along*s;
      return [pivot[0]+v[0]+back[0]*(alongNew-along),pivot[1]+up,pivot[2]+v[2]+back[2]*(alongNew-along)];
    };
    let base=[feet[0]+back[0]*d*H,feet[1]+h*H,feet[2]+back[2]*d*H];
    const desired=swing(base,orbit),clear=point=>!blocked(ray(eye,point));
    if(!direct&&!lock)base=swing(this.lineOfSight(desired,eye,heading,clear),-orbit);
    if(!cut&&!direct)base=chaseCamera(this.basePosition||this.position,base,eyeDelta,dt);
    let position=swing(base,orbit);
    // Pitch: the preset (or toward the lock target) is smoothed natively; the
    // look pitch is added directly on top.
    let pitchTarget;
    if(lock){const delta=sub(lockTarget,position),distance=length(delta)||1;pitchTarget=Math.asin(Math.max(-1,Math.min(1,delta[1]/distance)));}
    else pitchTarget=presetPitch*Math.PI/180;
    if(this.altLock&&!cut&&!direct)this.yaw=turnAngle(previousYaw,yawToward(position,eye),CAMERA_ALT_TURN_SPEED,dt);
    this.pitch=cut||direct?pitchTarget:turnAngle(this.pitch,pitchTarget,turnRate,dt);
    if(!direct)position=this.collide(position,eye,eyeDelta,sweep,ray);
    this.position=[...position];this.basePosition=swing(position,-orbit);this.lastEye=[...eye];
    return {position,desired,yaw:this.yaw,pitch:this.pitch-orbit};
  }
  /** 0x45aa40: only while idle, keep a clear sight line from RedCat to the camera. */
  lineOfSight(position,eye,heading,clear) {
    if(this.moving){this.altLock=false;return position;}
    if(this.altLock){if(clear(this.altPosition))return [...this.altPosition];this.altLock=false;}
    if(clear(position))return position;
    if(this.idleAfterMove&&this.pulledIn&&this.position&&clear(this.position)) {
      this.altLock=true;this.altPosition=[...this.position];return [...this.position];
    }
    const radius=Math.hypot(eye[0]-position[0],eye[2]-position[2]);
    for(const step of SEARCH_STEPS_DEGREES)for(let i=1;i*step<90;i++)for(const side of [1,-1]) {
      const angle=heading+side*i*step*Math.PI/180;
      const candidate=[eye[0]+Math.sin(angle)*radius,position[1],eye[2]+Math.cos(angle)*radius];
      if(clear(candidate)){this.altLock=true;this.altPosition=candidate;return [...candidate];}
    }
    return position;
  }
  /** 0x45ae30: pull the camera in front of walls instantly; no easing back out. */
  collide(position,eye,eyeDelta,sweep,ray) {
    if(this.position) {
      const travel=sweep(this.position,position);
      if(blocked(travel)) {
        const fromPlayer=sweep(eye,position);
        if(blocked(fromPlayer)){position=nudged(fromPlayer);this.pulledIn=true;}
      }
    }
    if(this.altLock){if(this.pulledIn)this.altPosition=[...position];return position;}
    const stationary=eyeDelta.every(v=>v===0);
    if(!this.moving||stationary) {
      const sight=ray(eye,position);
      if(blocked(sight))position=nudged(sight);
    }
    return position;
  }
}
export const CAMERA_HULL_HALF_SIZE=HULL;

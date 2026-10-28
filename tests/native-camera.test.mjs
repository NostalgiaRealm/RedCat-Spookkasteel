import test from 'node:test';
import assert from 'node:assert/strict';
import {NativeFollowCamera,nativeSteer,chaseCamera,turnAngle,CAMERA_PRESETS,STEER_MOVE_RATE,STEER_TURN_RATE} from '../source/native-camera.js';

const H=57.92,near=(a,b,e=1e-9,m)=>assert.ok(Math.abs(a-b)<=e,m||`${a} != ${b}`);
const clear=(a,b)=>({fraction:1,end:[...b],startSolid:false,normal:[0,1,0]});
const frame=(o={})=>({feet:[0,0,0],eye:[0,54.08,0],height:H,heading:0,ray:clear,sweep:clear,...o});

test('the preset table is the original rdata 0x64d3a8 values',()=>{
  assert.deepEqual(CAMERA_PRESETS[0],{moving:[1.25,2.5,-6],backpedal:[1.6,2.7,-27],idle:[1.5,1.7,-15]});
  assert.deepEqual(CAMERA_PRESETS[2].idle,[2,2.5,-18]);
});

test('steering turns RedCat toward camera-relative targets with the native rates and snap',()=>{
  const q=Math.PI/4,case_=(input,expected,move,rate)=>{
    // A small step from far away shows the target direction and rate.
    const far=nativeSteer(input,{heading:Math.PI,cameraYaw:0,dt:.01});
    assert.deepEqual(far.move,move,JSON.stringify(input));
    if(expected===null){assert.equal(far.heading,Math.PI);return;}
    const diff=Math.atan2(Math.sin(expected-Math.PI),Math.cos(expected-Math.PI));
    near(far.heading,Math.atan2(Math.sin(Math.PI+diff*.01*rate),Math.cos(Math.PI+diff*.01*rate)),1e-9,JSON.stringify(input));
  };
  case_({forward:1},0,{forward:1,right:0},STEER_MOVE_RATE);
  case_({forward:1,steer:1},-q,{forward:1,right:0},STEER_MOVE_RATE);
  case_({forward:1,steer:-1},q,{forward:1,right:0},STEER_MOVE_RATE);
  // ControlMode 1: a sideways input alone turns in place at 2.4.
  case_({steer:1},-2*q,{forward:0,right:0},STEER_TURN_RATE);
  // Backpedal keeps facing away from the camera and walks backward.
  case_({forward:-1},0,{forward:-1,right:0},STEER_MOVE_RATE);
  case_({forward:-1,steer:1},q,{forward:-1,right:0},STEER_MOVE_RATE);
  // A strafe key sidesteps and freezes the heading.
  case_({forward:1,strafe:1},null,{forward:0,right:1},0);
  // Within pi/8 the heading snaps to the target.
  assert.equal(nativeSteer({forward:1},{heading:.3,cameraYaw:0,dt:.01}).heading,0);
  assert.deepEqual(nativeSteer({},{heading:1,cameraYaw:0,dt:.1}),{heading:1,move:{forward:0,right:0},hasInput:false,backpedal:false});
});

test('lock-on steering turns toward the target only with input and keeps the raw move',()=>{
  const s=nativeSteer({forward:1,steer:1},{heading:0,cameraYaw:2,dt:.01,lockYaw:1});
  near(s.heading,.01*STEER_MOVE_RATE);assert.deepEqual(s.move,{forward:1,right:1});
  assert.equal(nativeSteer({},{heading:0,cameraYaw:0,dt:.1,lockYaw:1}).heading,0);
});

test('angle smoothing is the native per-frame fraction min(1, dt*rate)',()=>{
  near(turnAngle(0,1,2,.1),.2);assert.equal(turnAngle(0,1,2,1),1);near(turnAngle(0,.0005,2,.01),.0005,1e-15,"tiny gaps snap to the target");
});

test('the position chase follows RedCat and closes the error at 150..470 units/s',()=>{
  assert.deepEqual(chaseCamera([0,0,0],[3,0,0],[0,0,0],.1),[3,0,0],'snaps inside five units');
  near(chaseCamera([0,0,0],[40,0,0],[0,0,0],.1)[0],15);
  near(chaseCamera([0,0,0],[100,0,0],[0,0,0],.1)[0],47);
  near(chaseCamera([0,0,0],[100,0,0],[10,0,0],.1)[0],10+47,1e-9,'player displacement is added first');
});

test('the idle follow camera sits at the preset and the first frame after a cut is exact',()=>{
  const camera=new NativeFollowCamera(),view=camera.update(1/60,frame());
  near(view.position[1],1.5*H,1e-9);near(view.position[2],1.7*H,1e-9);near(view.pitch,-15*Math.PI/180);
  const moving=camera.update(1/60,frame({hasInput:true}));
  near(moving.pitch,-15*Math.PI/180+(-6+15)*Math.PI/180*Math.min(1,1.5/60),1e-9,'moving row at TurnSpeed x TurnRatio');
  camera.cut=true;const back=camera.update(1/60,frame({hasInput:true,backpedal:true}));
  near(back.pitch,-27*Math.PI/180);near(back.position[2],2.7*H,1e-9);
});

test('keyboard heading changes are followed with the native lag',()=>{
  const camera=new NativeFollowCamera();camera.update(1/60,frame());
  near(camera.update(.1,frame({heading:1})).yaw,.2);
  near(camera.update(.1,frame({heading:1,hasInput:true})).yaw,.2+.8*.15,1e-9);
});

test('look turns and look pitch move the camera at once, without the native smoothing',()=>{
  const camera=new NativeFollowCamera(),eye=[0,54.08,0];camera.update(1/60,frame());
  const before=camera.update(1/60,frame());
  // Mouse turns RedCat and the camera together: the next frame shows the full turn.
  camera.lookTurn(.5,eye);const turned=camera.update(1/60,frame({heading:.5}));
  near(turned.yaw,.5,1e-12);
  near(Math.atan2(turned.position[0],turned.position[2]),.5,1e-9,'the camera position swings with the turn');
  near(Math.hypot(turned.position[0],turned.position[2]),Math.hypot(before.position[0],before.position[2]),1e-9,'native distance kept');
  // Look pitch tilts the view and swings the camera up at once.
  const tilted=camera.update(1/60,frame({heading:.5,orbitPitch:.3}));
  near(tilted.pitch,turned.pitch-.3,1e-12);assert.ok(tilted.position[1]>turned.position[1]+20);
});

test('while idle a blocked view searches around RedCat for a clear sight line',()=>{
  const camera=new NativeFollowCamera();
  // A pillar directly behind RedCat blocks the straight sight line.
  const ray=(a,b)=>Math.abs(b[0])<20&&b[2]>40?{fraction:.5,end:[b[0],b[1],60],startSolid:false,normal:[0,0,-1]}:clear(a,b);
  const view=camera.update(1/60,frame({ray}));
  assert.equal(camera.altLock,true);assert.ok(Math.abs(view.position[0])>=20);
  near(Math.hypot(view.position[0],view.position[2]),1.7*H,1e-6,'same radius around RedCat');
});

test('hull collision pulls the camera in front of a wall instantly',()=>{
  const camera=new NativeFollowCamera();camera.update(1/60,frame());
  const wall=(a,b)=>b[2]>40?{fraction:.5,end:[b[0],b[1],40],startSolid:false,normal:[0,0,-1]}:clear(a,b);
  const view=camera.update(1/60,frame({hasInput:true,sweep:wall,ray:wall,feet:[0,0,-1],eye:[0,54.08,-1]}));
  near(view.position[2],40-.01,1e-9);assert.equal(camera.pulledIn,true);
});

test('lock-on places the camera 1.2xH up and 1.5xH behind and pitches toward the target',()=>{
  const camera=new NativeFollowCamera(),view=camera.update(1/60,frame({lockTarget:[0,1.2*H,-200]}));
  near(view.position[1],1.2*H,1e-9);near(view.position[2],1.5*H,1e-9);near(view.pitch,0,1e-9);
});

test('no-clip flight follows the heading directly without collision',()=>{
  const camera=new NativeFollowCamera();camera.update(1/60,frame());
  const blocked=(a,b)=>({fraction:0,end:[...a],startSolid:true,normal:[0,1,0]});
  const view=camera.update(1/60,frame({heading:2,direct:true,ray:blocked,sweep:blocked}));
  assert.equal(view.yaw,2);near(view.position[1],1.5*H,1e-9);
});

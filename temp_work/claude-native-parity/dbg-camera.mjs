// Quick behavioural check of source/native-camera.js in open space.
import {NativeFollowCamera,nativeSteer} from '../../source/native-camera.js';
const clear=(a,b)=>({fraction:1,end:[...b],startSolid:false});
const cam=new NativeFollowCamera();let heading=0,feet=[0,0,0];
const step=(input,dt=1/60)=>{
  const s=nativeSteer(input,{heading,cameraYaw:cam.yaw,dt});heading=s.heading;
  const speed=s.move.forward>0?156.8:144;feet=[feet[0]-Math.sin(heading)*s.move.forward*speed*dt,0,feet[2]-Math.cos(heading)*s.move.forward*speed*dt];
  return cam.update(dt,{feet,eye:[feet[0],54.08,feet[2]],height:57.92,heading,hasInput:s.hasInput,backpedal:s.backpedal,ray:clear,sweep:clear});
};
let v=step({});console.log('cut idle',v.position.map(n=>+n.toFixed(2)),+v.pitch.toFixed(3));
for(let i=0;i<60;i++)v=step({forward:1,steer:1});console.log('fwd+right 1s heading',+heading.toFixed(2),'camYaw',+v.yaw.toFixed(2));
for(let i=0;i<120;i++)v=step({});console.log('idle 2s camYaw',+v.yaw.toFixed(3),'heading',+heading.toFixed(3),'dist',+Math.hypot(v.position[0]-feet[0],v.position[2]-feet[2]).toFixed(1));
cam.orbit(1);for(let i=0;i<60;i++)v=step({});console.log('orbit held idle yaw',+v.yaw.toFixed(3));
for(let i=0;i<60;i++)v=step({forward:1});console.log('after moving: heading',+heading.toFixed(3),'cam',+v.yaw.toFixed(3));
for(let i=0;i<30;i++)v=step({forward:-1});console.log('backpedal pitch(deg)',+(v.pitch*180/Math.PI).toFixed(1));

import test from 'node:test';import assert from 'node:assert/strict';
import {PlayerCameraControl,canTogglePlayerCamera} from '../source/camera-control.js';
import {NativeFollowCamera} from '../source/native-camera.js';
const fixture=(camera='third')=>({yaw:0,pitch:.16,settings:{sensitivity:1,camera},player:{noClip:false,position:[0,0,0]},followCamera:new NativeFollowCamera(),
  targeting:{locked:false},gameplay:{scripts:{camera:null,cutscene:false}}});
test('third-person look turns RedCat and the follow camera together at once',()=>{
 const world=fixture(),control=new PlayerCameraControl();
 control.look(world,100,50);
 assert.equal(world.yaw,-.2,'RedCat turns with the mouse');assert.ok(Math.abs(world.followCamera.yaw+.2)<1e-12);
 assert.equal(world.steeredYaw,world.yaw,'a look turn is not an external cut');assert.ok(Math.abs(world.pitch-.26)<1e-12);
 // The authored offset region (CameraMode 1) is still a follow camera.
 world.gameplay.scripts.camera={mode:1,offset:[1.5,1.5,-20]};control.look(world,-100,0);
 assert.ok(Math.abs(world.yaw)<1e-12);assert.ok(Math.abs(world.followCamera.yaw)<1e-12);
});
test('first person and no-clip flight turn RedCat directly without the follow camera',()=>{
 const first=fixture('first'),control=new PlayerCameraControl();control.look(first,100,50);
 assert.equal(first.yaw,-.2);assert.equal(first.followCamera.yaw,0,'first person does not drive the follow camera');
 const flying=fixture();flying.player.noClip=true;control.look(flying,100,0);assert.equal(flying.yaw,-.2);
 // A first-person player inside an authored offset region sees the follow camera.
 const region=fixture('first');region.gameplay.scripts.camera={mode:1,offset:[1.5,1.5,-20]};control.look(region,100,0);
 assert.equal(region.yaw,-.2);assert.ok(Math.abs(region.followCamera.yaw+.2)<1e-12);
});
test('fixed and route overviews ignore look input until the timer or script releases the camera',()=>{
 const world=fixture(),control=new PlayerCameraControl(),host=world.gameplay.scripts;
 for(const mode of [2,3,4])for(const duration of [0,5,8]){
   const camera={mode,duration,start:0};host.camera=camera;
   for(let i=0;i<120;i++)control.look(world,100,50);
   assert.equal(host.camera,camera);assert.equal(world.yaw,0);assert.equal(world.followCamera.yaw,0);assert.equal(world.pitch,.16);
 }
 host.camera=null;control.look(world,0,50);
 assert.ok(Math.abs(world.pitch-.26)<1e-12,'no hidden pitch accumulates during an overview');
});
test('dialogue and target locks still retain camera ownership',()=>{
 const world=fixture(),control=new PlayerCameraControl(),host=world.gameplay.scripts;
 host.cutscene=true;control.look(world,100,100);assert.equal(world.followCamera.yaw,0);assert.equal(world.pitch,.16);
 host.cutscene=false;world.targeting.locked=true;control.look(world,100,100);assert.equal(world.followCamera.yaw,0);assert.equal(world.pitch,.16);
});
test('camera shortcut changes only a player-owned view, never a hidden overview preference',()=>{
 const world=fixture(),host=world.gameplay.scripts;
 assert.equal(canTogglePlayerCamera(world),true);
 for(const mode of [0,1]){host.camera={mode};assert.equal(canTogglePlayerCamera(world),true);}
 for(const mode of [2,3,4]){host.camera={mode};assert.equal(canTogglePlayerCamera(world),false);}
 host.camera=null;host.cutscene=true;assert.equal(canTogglePlayerCamera(world),false);
 host.cutscene=false;assert.equal(canTogglePlayerCamera(world),true);
});

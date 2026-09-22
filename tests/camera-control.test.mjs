import test from 'node:test';import assert from 'node:assert/strict';
import {PlayerCameraControl} from '../src/camera-control.js';
const fixture=()=>({yaw:0,pitch:.16,settings:{sensitivity:1},targeting:{locked:false},gameplay:{scripts:{camera:null,cutscene:false}}});
test('authored regional offset initializes viewing pitch, then accepts mouse pitch and restores free view',()=>{
 const world=fixture(),control=new PlayerCameraControl(),host=world.gameplay.scripts;
 host.camera={mode:1,offset:[1.5,1.5,-20]};control.sync(world);
 assert.equal(world.pitch,20*Math.PI/180);control.look(world,100,50);
 assert.equal(world.yaw,-.2);assert.equal(world.pitch,20*Math.PI/180+.1);
 assert.equal(host.camera.manualPitch,world.pitch);
 host.camera=null;control.sync(world);assert.equal(world.pitch,.16);
});
test('fixed and route overviews ignore mouse input until the timer or script releases the camera',()=>{
 const world=fixture(),control=new PlayerCameraControl(),host=world.gameplay.scripts;
 for(const mode of [2,3,4])for(const duration of [0,5,8]){
   const camera={mode,duration,start:0};host.camera=camera;
   for(let i=0;i<120;i++)control.look(world,100,50);
   assert.equal(host.camera,camera);assert.equal(world.yaw,0);assert.equal(world.pitch,.16);
 }
 host.camera=null;control.sync(world);control.look(world,100,50);
 assert.equal(world.yaw,-.2);assert.equal(world.pitch,.26,'no hidden pitch accumulates during an overview');
});
test('dialogue and target locks still retain camera ownership',()=>{
 const world=fixture(),control=new PlayerCameraControl(),host=world.gameplay.scripts;
 host.cutscene=true;control.look(world,100,100);assert.equal(world.yaw,0);assert.equal(world.pitch,.16);
 host.cutscene=false;world.targeting.locked=true;control.look(world,100,100);assert.equal(world.yaw,0);assert.equal(world.pitch,.16);
});
test('old offset-camera saves recover hidden pitch and new saves preserve deliberate camera adjustment',()=>{
 const world=fixture(),control=new PlayerCameraControl(),host=world.gameplay.scripts;
 world.pitch=-1.2;host.camera={mode:1,offset:[1.5,1.5,-20]};control.restore(world);
 assert.equal(world.pitch,20*Math.PI/180);control.look(world,0,-75);
 const saved=structuredClone(host.camera),manual=world.pitch;
 const restored=fixture();restored.gameplay.scripts.camera=saved;
 new PlayerCameraControl().restore(restored);assert.equal(restored.pitch,manual);
 host.camera=null;control.sync(world);assert.equal(world.pitch,.16);
});

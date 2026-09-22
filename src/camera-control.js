// Scripted preview cameras must not silently change the independent weapon
// pitch. Offset-camera input uses one shared pitch for viewing and aiming.
const clamp=value=>Math.max(-1.2,Math.min(1.2,Number.isFinite(value)?value:.16));
export class PlayerCameraControl {
  constructor(){this.active=null;}
  restore(world) {
    const camera=world.gameplay?.scripts?.camera;
    // Older offset-camera saves recorded a pitch the renderer ignored. Do
    // not restore that hidden angle when leaving the region either.
    if(camera?.mode===1&&!Number.isFinite(camera.returnPitch))camera.returnPitch=.16;
    this.active=null;this.sync(world);
  }
  sync(world) {
    const camera=world.gameplay?.scripts?.camera||null;
    if(camera!==this.active){
      if(this.active?.mode===1)world.pitch=clamp(this.active.returnPitch);
      this.active=camera;
      if(camera?.mode===1){
        camera.returnPitch=Number.isFinite(camera.returnPitch)?camera.returnPitch:clamp(world.pitch);
        world.pitch=clamp(Number.isFinite(camera.manualPitch)?camera.manualPitch:-(camera.offset?.[2]||0)*Math.PI/180);
      }
    }
    if(camera?.mode===1)camera.manualPitch=clamp(world.pitch);
    return camera;
  }
  look(world,dx,dy) {
    const host=world.gameplay?.scripts,camera=this.sync(world);
    // Fixed and route views belong to the authored camera timer/script. Ignore
    // look completely so it neither cancels the overview nor accumulates an
    // invisible aiming pitch for when the player camera returns.
    if(host?.cutscene||world.targeting?.locked||(camera&&camera.mode!==1))return;
    if(!dx&&!dy)return;
    world.yaw-=dx*.002*world.settings.sensitivity;
    world.pitch=clamp(world.pitch+dy*.002*world.settings.sensitivity);
    if(this.active?.mode===1)this.active.manualPitch=world.pitch;
  }
}

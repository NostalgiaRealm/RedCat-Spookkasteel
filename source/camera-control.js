// Look input (mouse, touch drag, controller right stick). The original game has
// no mouse-look; the port keeps it as a modern extra. Horizontal look turns
// RedCat and the camera together at once, and vertical look tilts the shared
// view/aim pitch, without the native smoothing (native-camera.js). Keyboard
// steering and the native follow camera are unaffected.
import {PLAYER_EYE_HEIGHT} from './player-hull.js';
const clamp=value=>Math.max(-1.2,Math.min(1.2,Number.isFinite(value)?value:.16));
// A mode shortcut has no visible effect while an authored overview owns the
// view. Ignore it then instead of silently selecting first person for expiry.
export function canTogglePlayerCamera(world) {
  const host=world?.gameplay?.scripts;
  return !host?.cutscene&&(!host?.camera||host.camera.mode===0||host.camera.mode===1);
}

export class PlayerCameraControl {
  look(world,dx,dy) {
    const host=world.gameplay?.scripts,camera=host?.camera;
    // Fixed and route views belong to the authored camera timer/script, and
    // dialogue or a target lock own the view: ignore look entirely then.
    if(host?.cutscene||world.targeting?.locked||(camera&&camera.mode!==0&&camera.mode!==1))return;
    if(!dx&&!dy)return;
    const scale=.002*world.settings.sensitivity;
    world.pitch=clamp(world.pitch+dy*scale);
    world.yaw-=dx*scale;
    const firstPerson=world.settings.camera==='first'&&camera?.mode!==1;
    if(!firstPerson&&!world.player?.noClip&&world.followCamera) {
      // Turn the follow camera with RedCat in the same frame; this is not an
      // external heading change, so it must not cut the camera either.
      const feet=world.player?.position||[0,0,0];
      const eye=[feet[0],feet[1]+PLAYER_EYE_HEIGHT,feet[2]];
      world.followCamera.lookTurn(-dx*scale,eye);world.wallLift?.lookTurn(-dx*scale,eye);
      world.steeredYaw=world.yaw;
    }
  }
}

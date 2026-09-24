import { GAMEPLAY_SETTINGS } from './gameplay-settings.js';

const settings=GAMEPLAY_SETTINGS.game.Player;
export const PLAYER_MOVEMENT=Object.freeze({
  runForward:settings.RunForwardSpeed*32,runOther:settings.RunOtherSpeed*32,
  walkForward:settings.WalkForwardSpeed*32,walkOther:settings.WalkOtherSpeed*32,
  airForward:settings.AirForwardSpeed*32,airOther:settings.AirOtherSpeed*32,
  groundFactor:1.4,boostFrameFactor:.4,stepHeight:settings.StepHeight*32
});

// Adam::DoMove normalizes input before applying directional speeds, then
// rotates it into world space. Acceleration/StrafeSpeed/WalkBackwardSpeed
// are loaded by the executable but are not consumed by this movement path.
export function playerInputVelocity(input,yaw,grounded) {
  const forward=Number.isFinite(input.forward)?input.forward:0,right=Number.isFinite(input.right)?input.right:0;
  const length=Math.max(1,Math.hypot(forward,right));
  const mode=!grounded?'air':input.walk?'walk':'run';
  const z=forward/length*PLAYER_MOVEMENT[mode+(forward>0?'Forward':'Other')];
  const x=right/length*PLAYER_MOVEMENT[mode+'Other'];
  return [-Math.sin(yaw)*z+Math.cos(yaw)*x,0,-Math.cos(yaw)*z-Math.sin(yaw)*x];
}

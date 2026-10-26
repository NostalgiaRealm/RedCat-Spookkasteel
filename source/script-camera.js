// RcHcGame.dat (e30781fc…), 0x45a470 / table 0x64d460. The native
// distance lookup truncates (distance - 50) and clamps its result to 150–470.
// Only entries 9..27 survive that clamp; preserve their original float values.
const finalApproachSpeeds=[
  163.78399658203125,182.0819854736328,200.17999267578125,
  218.07798767089844,235.77598571777344,253.27398681640625,
  270.5719909667969,287.66998291015625,304.5679931640625,
  321.2659912109375,337.76397705078125,354.0619812011719,
  370.1600036621094,386.0579833984375,401.7559814453125,
  417.2539978027344,432.552001953125,447.6499938964844,
  462.5480041503906,
];

export function cameraFinalApproachSpeed(distance) {
  if(distance<59)return 150;
  if(distance>=78)return 470;
  return finalApproachSpeeds[Math.trunc(distance)-59];
}

function finalApproachDistance(distance,elapsed) {
  // Integrate each constant-speed distance band exactly. Sampling from elapsed
  // time is independent of render frame rate and needs no extra save state.
  while(distance>5) {
    const band=Math.min(78,Math.max(58,Math.ceil(distance)-1));
    const boundary=band===58?5:band;
    const speed=cameraFinalApproachSpeed(band);
    const duration=(distance-boundary)/speed;
    if(elapsed<duration)return distance-elapsed*speed;
    elapsed-=duration;distance=boundary;
  }
  // The native helper retains the target position inside its five-unit deadzone.
  return 0;
}

/** Visit authored waypoints at 150 units/s, with the native distance-dependent
 * final approach. The camera's lifetime is handled separately by ScriptHost. */
export function sampleCameraRoute(points,elapsed,speed=150) {
  if(!points.length)return null;
  if(!(elapsed>0))return [...points[0]];
  let remaining=elapsed;
  for(let i=1;i<points.length;i++) {
    const start=points[i-1],end=points[i],length=Math.hypot(...end.map((v,j)=>v-start[j]));
    if(!length)continue;
    if(i===points.length-1) {
      const distance=finalApproachDistance(length,remaining);
      return end.map((v,j)=>v+(start[j]-v)*distance/length);
    }
    const duration=length/speed;
    if(remaining<duration)return start.map((v,j)=>v+(end[j]-v)*remaining/duration);
    remaining-=duration;
  }
  return [...points.at(-1)];
}

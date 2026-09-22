/** Visit authored camera waypoints in order at a fixed world-unit speed.
 * The camera's lifetime is handled separately by ScriptHost. */
export function sampleCameraRoute(points,elapsed,speed=150) {
  if(!points.length)return null;
  let distance=Math.max(0,elapsed)*speed;
  for(let i=1;i<points.length;i++) {
    const start=points[i-1],end=points[i],length=Math.hypot(...end.map((v,j)=>v-start[j]));
    if(length>0&&distance<length)return start.map((v,j)=>v+(end[j]-v)*distance/length);
    distance-=length;
  }
  return [...points.at(-1)];
}

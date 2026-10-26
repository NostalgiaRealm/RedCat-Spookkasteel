const vector=value=>Array.isArray(value)&&value.length===3&&value.every(Number.isFinite);

// CAdamShockwaveCell::Render 0x4b4cc0 and its floor fold 0x4b5260.
// Both projectile impacts and green explosions use this upright plane.
export function nativeShockwave(origin,camera,radius,opacity,trace) {
  if(!vector(origin)||!vector(camera)||!(radius>0)||!Number.isFinite(radius))return null;
  const dx = origin[0] - camera[0], dz = origin[2] - camera[2], horizontal = Math.hypot(dx, dz);
  // Looking straight down makes the native cross product degenerate. Keep a
  // stable upright plane for that camera singularity instead of NaN vertices.
  const direction = horizontal > 1e-8 ? [dx / horizontal, 0, dz / horizontal] : [0, 0, 1];
  const right = [direction[2] * radius, 0, -direction[0] * radius];
  const point = (centre, side, vertical = 0) => centre.map((value, axis) => value + right[axis] * side + (axis === 1 ? vertical : 0));
  const quads = [{points: [point(origin,-1,radius),point(origin,1,radius),point(origin,1,-radius),point(origin,-1,-radius)], uvs: [[0,0],[1,0],[1,1],[0,1]]}];
  const down = [origin[0], origin[1] - radius, origin[2]], hit = trace?.(origin, down);
  if (hit && hit.fraction < 1 && vector(hit.end)) {
    const distance = Math.hypot(...hit.end.map((value,axis) => value - origin[axis]));
    if (distance < radius) {
      const folded = 1 - distance / radius, depth = folded * radius * .85;
      const rear = hit.end.map((value,axis) => value - direction[axis] * depth);
      quads.push({points:[point(hit.end,-1),point(hit.end,1),point(rear,.85),point(rear,-.85)],
        uvs:[[0,1-folded*.5],[1,1-folded*.5],[1,1],[0,1]]});
    }
  }
  return {quads, radius, opacity};
}

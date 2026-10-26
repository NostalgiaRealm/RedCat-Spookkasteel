// Save only integrator state, never pooled meshes/materials or a replay log.
// This is a portable save extension; the recovered fragment physics stays in
// debris-native.js and future contacts still use the restored world's collider.
const vectors=['position','velocity','rotation','angularVelocity'];
const scalars=['age','life','contacts','settledYaw','opacity'];
const physics=['Gravity','MustFade','TestCollision','MustRotate','RotationSpeed','Elasticity','Friction','AirFriction'];
const vector=(value,size=3)=>Array.isArray(value)&&value.length===size&&value.every(Number.isFinite);

export function restorePropDebrisState(saved,effect,time) {
  if(saved?.version!==1||!Number.isFinite(saved.at)||saved.at<effect.birth||saved.at>time||
    !Array.isArray(saved.particles)||saved.particles.length>256)return undefined;
  const actors=new Set((effect.settings?.debris?.types||[]).map(type=>String(type.actor||'').toLowerCase().replace(/\.act$/,'')));
  const particles=[];
  for(const p of saved.particles) {
    if(!p||!actors.has(p.actor)||!vectors.every(key=>vector(p[key]))||!vector(p.orientation,4)||
      Math.abs(Math.hypot(...p.orientation)-1)>1e-5||!scalars.every(key=>Number.isFinite(p[key]))||
      p.age<0||p.life<0||p.life>120||p.age>=p.life||!Number.isSafeInteger(p.contacts)||p.contacts<0||
      p.opacity<0||p.opacity>1||typeof p.settled!=='boolean'||
      !(p.fadeStartedAt===null||Number.isFinite(p.fadeStartedAt)&&p.fadeStartedAt>=0&&p.fadeStartedAt<=p.age)||
      !vector(p.bounds?.min)||!vector(p.bounds?.max)||p.bounds.min.some((v,i)=>v>p.bounds.max[i])||
      !p.conf||physics.some(key=>p.conf[key]!==undefined&&!Number.isFinite(p.conf[key])))return undefined;
    particles.push({actor:p.actor,...Object.fromEntries(vectors.map(key=>[key,[...p[key]]])),orientation:[...p.orientation],
      ...Object.fromEntries(scalars.map(key=>[key,p[key]])),settled:p.settled,fadeStartedAt:p.fadeStartedAt,
      bounds:{min:[...p.bounds.min],max:[...p.bounds.max]},conf:Object.fromEntries(physics.filter(key=>p.conf[key]!==undefined).map(key=>[key,p.conf[key]]))});
  }
  return {version:1,at:saved.at,particles};
}

export function snapshotPropDebrisState(particles,effect,time) {
  return restorePropDebrisState({version:1,at:time,particles:particles.filter(p=>p.age<p.life)},effect,time);
}

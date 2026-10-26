import {createNativeDebris} from './debris-native.js';

export const KNIGHT_PARTS=['knhd','knbrst','knhip','knllg','knrlg','knlrm','knrrm','knlns','knax'];
const vectors=['position','velocity','rotation','angularVelocity'];
const scalars=['age','life','contacts','settledYaw','opacity'];
const physics=['Gravity','MustFade','TestCollision','MustRotate','RotationSpeed','Elasticity','Friction','AirFriction'];
const vector=(value,size=3)=>Array.isArray(value)&&value.length===size&&value.every(Number.isFinite);

export function restoreKnightDebrisState(saved) {
  if(saved?.version!==1||!Number.isFinite(saved.age)||saved.age<0||!Number.isFinite(saved.life)||saved.life<0||saved.life>120||
    saved.age>saved.life||!Array.isArray(saved.particles)||saved.particles.length>64)return undefined;
  const particles=[];
  for(const p of saved.particles) {
    if(!p||!KNIGHT_PARTS.includes(p.actor)||!vectors.every(key=>vector(p[key]))||!vector(p.orientation,4)||
      Math.abs(Math.hypot(...p.orientation)-1)>1e-5||!scalars.every(key=>Number.isFinite(p[key]))||
      p.age<0||p.life<0||p.life>120||p.age>p.life||!Number.isSafeInteger(p.contacts)||p.contacts<0||
      p.opacity<0||p.opacity>1||typeof p.settled!=='boolean'||
      !(p.fadeStartedAt===null||Number.isFinite(p.fadeStartedAt)&&p.fadeStartedAt>=0&&p.fadeStartedAt<=p.age)||
      !vector(p.bounds?.min)||!vector(p.bounds?.max)||p.bounds.min.some((v,i)=>v>p.bounds.max[i])||
      !p.conf||physics.some(key=>p.conf[key]!==undefined&&!Number.isFinite(p.conf[key])))return undefined;
    particles.push({actor:p.actor,...Object.fromEntries(vectors.map(key=>[key,[...p[key]]])),orientation:[...p.orientation],
      ...Object.fromEntries(scalars.map(key=>[key,p[key]])),settled:p.settled,fadeStartedAt:p.fadeStartedAt,
      bounds:{min:[...p.bounds.min],max:[...p.bounds.max]},conf:Object.fromEntries(physics.filter(key=>p.conf[key]!==undefined).map(key=>[key,p.conf[key]]))});
  }
  return {version:1,age:saved.age,life:saved.life,particles};
}

export function snapshotKnightDebrisState(debris) {
  if(!debris)return undefined;
  return restoreKnightDebrisState({version:1,age:debris.age,life:debris.life,particles:debris.parts.map(part=>part.particle)});
}

export function knightDebrisLifetime(templates) {
  // Settling can replace remaining life with a two-second fade (the axe
  // enables it). Bound restored simulations before constructing any meshes.
  return Math.max(0,...templates.map(template=>{
    const conf=template?.data?.settings?.debris||{};
    return Math.max(Number(conf.MinLifeTimeSeconds)||3,Number(conf.MaxLifeTimeSeconds)||4)+(conf.MustFade?2:0);
  }));
}

export function createKnightDebrisParticles(object,scale,settings,templates) {
  const byName=new Map(KNIGHT_PARTS.map((name,index)=>[name,templates[index]?.data?.settings]));
  // RcKnight's 0x40e490 bounds are [-10,0,-10]..[10,50,10] times
  // scale. RcEnemyParticleDeath 0x403da0 passes their centre AND the
  // same local bounds to AddActorParticle, whose null direction selects
  // the recovered steep upward launch rather than a surface hemisphere.
  const bounds={min:[-10*scale,0,-10*scale],max:[10*scale,50*scale,10*scale]};
  const position=object.position.map((v,i)=>v+(bounds.min[i]+bounds.max[i])/2);
  return createNativeDebris({id:`${object.id}:armour:${object.deathStartedAt??object.animationSerial}`,position,bounds,settings},name=>byName.get(name));
}

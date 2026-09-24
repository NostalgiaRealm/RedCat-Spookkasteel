const number=(value,fallback)=>Number.isFinite(Number(value))?Number(value):fallback;
const mix=(a,b,t)=>a+(b-a)*t;
const dot=(a,b)=>a.reduce((sum,v,i)=>sum+v*b[i],0);

export function rotateNativeDebris(orientation,angles) {
  let q=[...orientation];
  // 0x49ccf0/0x49cd90/0x49ce30 -> 0x5b31f0/0x5b32c0:
  // pre-multiply X, then Y, then Z rotations around the world axes.
  for(let axis=0;axis<3;axis++) {
    const [x,y,z,w]=q,c=Math.cos(angles[axis]/2),s=Math.sin(angles[axis]/2);
    q=axis===0?[c*x+s*w,c*y-s*z,c*z+s*y,c*w-s*x]:axis===1?[c*x+s*z,c*y+s*w,c*z-s*x,c*w-s*y]:[c*x-s*y,c*y+s*x,c*z+s*w,c*w-s*z];
  }
  const length=Math.hypot(...q);return q.map(v=>v/length);
}

// AddActorParticle (0x4a7360) uses the MSVC rand stream. Seed locally so an
// explosion is reproducible without coupling its visuals to unrelated AI.
export function nativeEffectRandom(seed) {
  let state=2166136261;
  for(const c of String(seed))state=Math.imul(state^c.charCodeAt(0),16777619);
  return()=>{state=(Math.imul(state,214013)+2531011)>>>0;return(state>>>16)&32767;};
}

export function debrisCollisionBounds(conf) {
  // ActorParticle 0x5705ba..0x57080e: INI centimetres -> Genesis units.
  const x=Math.max(0,number(conf.SizeX,15))*.16,z=Math.max(0,number(conf.SizeZ,15))*.16;
  return {min:[-x,-Math.max(0,number(conf.FloorOffset,5))*.32,-z],max:[x,Math.max(0,number(conf.SizeY,15))*.32,z]};
}

export function createNativeDebris(effect,settingsForActor=()=>null) {
  const source=effect.settings.debris||{},rand=nativeEffectRandom(effect.id),fraction=()=>rand()%10000*.0001,particles=[];
  for(const type of source.types||[]) {
    const actor=String(type.actor||'').toLowerCase().replace(/\.act$/,''),conf=settingsForActor(actor)?.debris||source;
    const min=Math.max(0,Math.floor(Math.min(number(type.MinNr,0),number(type.MaxNr,0)))),max=Math.max(min,Math.floor(Math.max(number(type.MinNr,0),number(type.MaxNr,0))));
    const count=min===max?min:min+rand()%(max-min+1);
    for(let i=0;i<count;i++) {
      const position=[...effect.position],bounds=effect.bounds;
      // Native draws Y, X, Z independently across the destroyed actor's box.
      for(const axis of [1,0,2])position[axis]+=mix(number(bounds?.min?.[axis],0),number(bounds?.max?.[axis],0),fraction());
      const direction=[fraction()*60-30,fraction()*20+50,fraction()*60-30];
      const speed=mix(number(type.MinVelocity,0),number(type.MaxVelocity,0),fraction()),length=Math.hypot(...direction);
      const life=Math.trunc(mix(number(conf.MinLifeTimeSeconds,3),number(conf.MaxLifeTimeSeconds,4),fraction())*1000)/1000;
      const angularVelocity=conf.MustRotate?[0,1,2].map(()=>((rand()%2)?-1:1)*(2.5132741928100586+fraction()*.62831852119416)*3):[0,0,0];
      const rotation=conf.MustRotate?[0,1,2].map(()=>fraction()*Math.PI*2-Math.PI):[0,0,0];
      particles.push({actor,position,velocity:direction.map(v=>v/length*speed),age:0,life,rotation,orientation:rotateNativeDebris([0,0,0,1],rotation),angularVelocity,
        contacts:0,settled:false,fadeStartedAt:null,settledYaw:fraction()*Math.PI*2-Math.PI,opacity:1,bounds:debrisCollisionBounds(conf),conf});
    }
  }
  return particles;
}

export function reflectDebrisVelocity(velocity,normal,elasticity,friction) {
  // 0x5b1570 normalizes, clips the reflected unit components below .01,
  // then restores the incoming speed multiplied by ParticleFriction.
  const speed=Math.hypot(...velocity);
  if(!speed)return [0,0,0];
  const unit=velocity.map(v=>v/speed),normalSpeed=dot(unit,normal);
  return unit.map((v,i)=>{const reflected=v-elasticity*normalSpeed*normal[i];return Math.abs(reflected)<.01?0:reflected*speed*friction;});
}

export function stepNativeDebris(particle,dt,trace) {
  if(!(dt>0))return particle.age<particle.life;
  particle.age+=dt;
  if(particle.age>=particle.life)return false;
  const {conf}=particle;
  if(!particle.settled) {
    // 0x56fd00 runs before ballistic integration. Rotation slows together
    // with translation, and each collision damps the random spin axes.
    const spin=Math.hypot(...particle.velocity)*.005*number(conf.RotationSpeed,100)*.01*dt;
    if(conf.MustRotate) {
      const angles=particle.angularVelocity.map(v=>v*spin);
      particle.orientation=rotateNativeDebris(particle.orientation,angles);
      particle.rotation=particle.rotation.map((v,i)=>v+angles[i]);
    }
    particle.velocity[1]-=number(conf.Gravity,9.8)*32*dt;
    const air=number(conf.AirFriction,1);
    if(air>=0&&air<1)particle.velocity=particle.velocity.map(v=>v*Math.max(0,1-(1-air)*dt));
    let remaining=dt;
    // Native collision retry limit: ten contacts (0x570bf6). Keep this
    // bounded even for fragments born touching a grave, door or floor.
    for(let bounce=0;bounce<10&&remaining>1e-6;bounce++) {
      const target=particle.position.map((v,i)=>v+particle.velocity[i]*remaining);
      const hit=conf.TestCollision&&trace?trace(particle.position,target,particle.bounds.min,particle.bounds.max):{fraction:1,end:target};
      let normal=hit.normal;
      if(hit.startSolid&&hit.fraction===0) {
        const penetration=hit.penetrations?.filter(p=>p.normal&&Number.isFinite(p.distance)).sort((a,b)=>a.distance-b.distance)[0];
        // The portable collider reports embedded starts separately. Move
        // to its nearest separating plane without launching through walls.
        if(penetration&&penetration.distance<=8){particle.position=particle.position.map((v,i)=>v+penetration.normal[i]*penetration.distance);normal=penetration.normal;}
        else break;
      } else particle.position=[...hit.end];
      if(hit.fraction>=1)break;
      particle.contacts++;
      if(!normal)break;
      if(dot(particle.velocity,normal)<0)particle.velocity=reflectDebrisVelocity(particle.velocity,normal,number(conf.Elasticity,1.6),number(conf.Friction,.8));
      particle.angularVelocity=particle.angularVelocity.map(v=>v*number(conf.Friction,.8));
      remaining*=1-Math.max(0,hit.fraction);
      // BSP skin differs slightly from Genesis. Outward separation avoids
      // repeatedly counting the same grazing plane in the retry loop.
      if(!hit.startSolid)particle.position=particle.position.map((v,i)=>v+normal[i]*.01);
    }
    if(particle.contacts>10&&Math.hypot(...particle.velocity)<100) {
      particle.settled=true;particle.velocity=[0,0,0];
      if(conf.MustRotate){particle.rotation=[0,particle.settledYaw,0];particle.orientation=rotateNativeDebris([0,0,0,1],particle.rotation);}
      // 0x570f57: settling, not age, starts the two-second fade/lifetime.
      if(conf.MustFade){particle.fadeStartedAt=particle.age;particle.life=particle.age+2;}
    }
  }
  particle.opacity=particle.fadeStartedAt===null?1:Math.max(0,1-(particle.age-particle.fadeStartedAt)/2);
  return true;
}

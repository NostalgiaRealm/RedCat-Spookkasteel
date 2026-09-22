import * as THREE from 'three';

const mix=(a,b,t)=>a+(b-a)*t;
const number=(value,fallback=0)=>Number.isFinite(Number(value))?Number(value):fallback;
function random(seed){let state=2166136261;for(const c of seed)state=Math.imul(state^c.charCodeAt(0),16777619);return()=>{state=(Math.imul(state,1664525)+1013904223)>>>0;return state/4294967296;};}

export function explosionFrame(age) {
  return age>=0&&age<.8?(age>=.699?8:Math.min(6,Math.floor(age*10))+1):null;
}

export function debrisParticles(effect) {
  const conf=effect.settings.debris||{},rnd=random(effect.id),particles=[];
  for(const type of conf.types||[]){
    const count=Math.floor(mix(number(type.MinNr),number(type.MaxNr)+1,rnd()));
    for(let i=0;i<count;i++){
      const angle=rnd()*Math.PI*2,y=.25+rnd()*.75,radius=Math.sqrt(1-y*y),speed=mix(number(type.MinVelocity),number(type.MaxVelocity),rnd());
      particles.push({actor:type.actor.toLowerCase().replace(/\.act$/,''),position:[...effect.position],velocity:[Math.sin(angle)*radius*speed,y*speed,Math.cos(angle)*radius*speed],
        age:0,life:mix(number(conf.MinLifeTimeSeconds,3),number(conf.MaxLifeTimeSeconds,4),rnd()),rotation:[rnd()*6.28,rnd()*6.28,rnd()*6.28],conf});
    }
  }
  return particles;
}

// RcHcGame 0x58dd70: Explosie01..08 at 0/100/.../600/699 ms,
// with SizePercentage * .01 * 20 and this sequence of sprite scales.
const EXPLOSION_SCALE=[.5,.6,.8,.9,.95,.9,.8,.7];

/** Uses the actor's original fragment meshes, sprites and INI properties.
 * Fragment ballistic integration uses the portable collider. */
export class DestructibleEffects {
  static async create(world,game) {
    const effect=new DestructibleEffects(world,game),names=new Set();
    for(const object of game.objects)if(object.kind==='actor')for(const type of object.actorSettings?.debris?.types||[])names.add(type.actor.toLowerCase().replace(/\.act$/,''));
    await Promise.all([...names].map(async name=>{const actor=await world.makeActor(name);if(actor)effect.prototypes.set(name,actor);}));
    return effect;
  }
  constructor(world,game){this.world=world;this.game=game;this.seen=new Set();this.particles=[];this.prototypes=new Map();}
  update(dt,batches) {
    const {world,game}=this;
    for(const effect of game.explosions||[]) {
      const age=game.time-effect.birth,conf=effect.settings.explosion||{};
      if(!this.seen.has(effect.id)) {
        this.seen.add(effect.id);
        for(const particle of debrisParticles(effect)) {
          const prototype=this.prototypes.get(particle.actor);if(!prototype)continue;
          const original=prototype.userData.mesh,materials=(Array.isArray(original.material)?original.material:[original.material]).map(m=>{const copy=m.clone();copy.transparent=true;return copy;});
          const root=new THREE.Group(),mesh=new THREE.Mesh(original.geometry,materials);mesh.position.copy(original.position);mesh.rotation.copy(original.rotation);mesh.scale.copy(original.scale);root.add(mesh);
          root.position.fromArray(particle.position);world.scene.add(root);particle.mesh=root;particle.materials=materials;this.particles.push(particle);
        }
      }
      const frame=explosionFrame(age),count=Math.min(16,Math.max(0,number(conf.NrExplosions,1))),diameter=32*20*Math.max(0,number(conf.SizePercentage,25))/100;
      if(frame&&diameter>0&&!conf.SmokeOnly)for(let i=0;i<count;i++) {
        const key=`explosie${String(frame).padStart(2,'0')}.bmp|explosie${String(frame).padStart(2,'0')}_a.bmp`,size=diameter*EXPLOSION_SCALE[frame-1];
        const offset=count===1?[0,0,0]:[Math.sin(i*2.4)*diameter*.2,i*diameter*.05,Math.cos(i*2.4)*diameter*.2];
        batches.get(key)?.add(effect.position.map((v,k)=>v+offset[k]),size,size,conf.Green?[.5,1,.5]:[1,1,1],1);
      }
      if(age<1.6&&diameter>0)batches.get('smoke_05.bmp|smoke_green_a.bmp')?.add([effect.position[0],effect.position[1]+age*16,effect.position[2]],diameter*(.5+age),diameter*(.5+age),[.7,.65,.6],Math.max(0,.45*(1-age/1.6)));
    }
    const active=[];
    for(const particle of this.particles) {
      particle.age+=dt;
      if(particle.age>=particle.life){particle.mesh.removeFromParent();particle.materials.forEach(m=>m.dispose());continue;}
      const {conf}=particle;
      particle.velocity[1]-=number(conf.Gravity,9.8)*32*dt;
      const target=particle.position.map((v,i)=>v+particle.velocity[i]*dt);
      const hit=conf.TestCollision?world.collider.trace(particle.position,target,[-2,-2,-2],[2,2,2],world.physicalModels,false):{fraction:1,end:target};
      particle.position=hit.end;
      if(hit.fraction<1&&!hit.startSolid){const speed=particle.velocity.reduce((sum,v,i)=>sum+v*hit.normal[i],0);particle.velocity=particle.velocity.map((v,i)=>(v-number(conf.Elasticity,1.6)*speed*hit.normal[i])*number(conf.Friction,.8));}
      if(conf.MustRotate)particle.rotation=particle.rotation.map((v,i)=>v+(i===1?-1:1)*number(conf.RotationSpeed,100)*Math.PI/180*dt);
      particle.mesh.position.fromArray(particle.position);particle.mesh.rotation.fromArray(particle.rotation);
      if(conf.MustFade)for(const material of particle.materials)material.opacity=Math.min(1,Math.max(0,(particle.life-particle.age)/.75));
      active.push(particle);
    }
    this.particles=active;
  }
  dispose(){for(const particle of this.particles){particle.mesh.removeFromParent();particle.materials.forEach(m=>m.dispose());}this.particles=[];this.seen.clear();this.prototypes.clear();}
}

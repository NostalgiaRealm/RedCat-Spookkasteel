// RcEnemyDeathState starts a 5000 ms alpha fade after the death motion
// (0x403b92). CRcSmokeEffect uses fifteen strail billboards (0x46db52),
// RGB 211/63/255, a seven-second life and a 20 -> 60 radius (0x46e230).
import {createParticleClock,advanceParticleClock,particleMilliseconds} from './particle-clock-native.js';

export const ENEMY_FADE_SECONDS=5;
export const DEATH_SMOKE_TEXTURE='strail.bmp|strail_a.bmp';
export const DEATH_SMOKE_COLOR=[211/255,63/255,1];
export const DEATH_SMOKE_SECONDS=7;
const clamp=value=>Math.max(0,Math.min(1,value));

export function enemyDeathOpacity(object,time) {
  if(object.kind!=='enemy'||object.health>0||object.animationState!=='death')return 1;
  const start=object.animationUntil,end=object.corpseUntil;
  if(!Number.isFinite(start)||!Number.isFinite(end))return 1;
  // Retain old saves' existing retirement deadline rather than resurrecting
  // a corpse by retroactively adding the new five-second fade.
  return end<=start?0:clamp((end-time)/(end-start));
}

export function applyEnemyDeathOpacity(actor,opacity,track=material=>material) {
  let records=actor.userData.enemyDeathMaterials;
  if(!records&&opacity>=1)return;
  if(!records) {
    records=[];
    actor.traverse(mesh=>{
      if(!mesh.isMesh)return;
      const originals=mesh.material,list=Array.isArray(originals)?originals:[originals];
      const materials=list.map(original=>{
        const material=track(original.clone());
        material.transparent=true;material.depthWrite=false;
        // Multiplying opacity must not turn the old cutout threshold into a
        // second abrupt disappearance part way through the fade.
        material.alphaTest=Math.min(original.alphaTest,.003);
        return material;
      });
      records.push({mesh,originals,list,materials});
    });
    actor.userData.enemyDeathMaterials=records;
  }
  for(const {mesh,originals,list,materials} of records) {
    if(opacity>=1){mesh.material=originals;continue;}
    materials.forEach((material,i)=>{material.opacity=list[i].opacity*opacity;});
    mesh.material=Array.isArray(originals)?materials:materials[0];
  }
}

// 0x46e8b0 reads raw bind attachments, stepping through every second bone;
// these are deliberately not the actor's current animated world-space joints.
export function initializeDeathSmoke(origin,bones=[]) {
  let boneIndex=0;
  return Array.from({length:15},(_,index)=>{
    if(boneIndex>=bones.length-1)boneIndex=0;
    const vector=bones[boneIndex]?.attachment.slice(9,12)||[0,0,0],length=Math.hypot(...vector);
    const direction=vector.map(v=>length?v/length:0);boneIndex+=2;
    return {position:origin.map((v,i)=>v+direction[i]*20),velocity:direction.map(v=>v*index*.5)};
  });
}

// CRcSmokeEffect shares CParticle's independently armed lifetime/delay/fade
// timers. Its fifteen particles start together. Cache their common 60Hz clock,
// size and velocity-before-position acceleration once, not per dead actor or
// redraw. Saved anchors/velocities plus age are sufficient for exact reuse.
const SMOKE_STEP=1/60;
const smokeFrames=(()=>{
  const clock=createParticleClock(7,1,6.2,{start:50}),frames=[];
  let rise=0,upSpeed=0,travel=0;
  for(let tick=0;tick<430;tick++) {
    const now=particleMilliseconds(tick*SMOKE_STEP);
    if(tick) {
      if(!advanceParticleClock(clock,now))break;
      const dt=Math.fround((now-particleMilliseconds((tick-1)*SMOKE_STEP))*Math.fround(.001));
      upSpeed=Math.fround(upSpeed+Math.fround(Math.fround(.05)*Math.fround(32*dt)));
      rise=Math.fround(rise+Math.fround(upSpeed*dt));travel+=dt;
    }
    const remaining=clock.lifeEnd===null?1:Math.fround((clock.lifeEnd-now)/clock.life);
    frames.push({travel,rise,size:2*Math.fround(20*remaining+60*(1-remaining)),opacity:clock.opacity});
  }
  return frames;
})();
const smokeFrame=age=>Number.isFinite(age)&&age>=0?smokeFrames[Math.floor(age/SMOKE_STEP+1e-9)]:null;

// Native mode-1 acceleration is (0,.05,0)*32 (0x47e301), with velocity
// updated before position. Sampling a fixed shared table preserves this order
// without historical replay, per-particle timers or render-rate-dependent work.
export function deathSmokeParticle(index,age,anchor,velocity=[0,0,0]) {
  const frame=smokeFrame(age);if(!frame)return null;
  return {position:anchor.map((v,i)=>v+velocity[i]*frame.travel+(i===1?frame.rise:0)),
    size:frame.size,opacity:frame.opacity,color:DEATH_SMOKE_COLOR};
}

export class EnemyDeathEffects {
  constructor(world,gameplay){this.world=world;this.gameplay=gameplay;this.states=new Map();}
  update(batches) {
    const game=this.gameplay,batch=batches.get(DEATH_SMOKE_TEXTURE),active=new Set();
    if(!batch)return;
    for(const object of game.objects) {
      if(object.kind!=='enemy'||object.health>0||object.animationState!=='death'||object.enemyType==='witch'||!Number.isFinite(object.deathStartedAt))continue;
      const age=game.time-object.deathStartedAt;
      if(!smokeFrame(age))continue;
      const actor=this.world.actorInstances.get(object.id);if(!actor)continue;
      active.add(object.id);
      const serial=object.animationSerial||0;
      let state=this.states.get(object.id);
      if(!state||state.serial!==serial||state.anchors!==object.deathSmokeAnchors||state.velocities!==object.deathSmokeVelocities||age<state.age-1e-6) {
        const particles=initializeDeathSmoke(object.position,actor.userData.template?.data.bones);
        const anchors=object.deathSmokeAnchors||particles.map(p=>p.position),velocities=object.deathSmokeVelocities||particles.map(p=>p.velocity);
        object.deathSmokeAnchors=anchors;object.deathSmokeVelocities=velocities;
        state={serial,anchors,velocities,age};this.states.set(object.id,state);
      }
      state.age=age;
      for(let i=0;i<15;i++) {
        const p=deathSmokeParticle(i,age,state.anchors[i],state.velocities[i]);
        if(p)batch.add(p.position,p.size,p.size,p.color,p.opacity,0,null,2);
      }
    }
    for(const id of this.states.keys())if(!active.has(id))this.states.delete(id);
  }
}

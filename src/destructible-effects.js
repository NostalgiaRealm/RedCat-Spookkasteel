import * as THREE from 'three';
import {createNativeDebris,stepNativeDebris} from './debris-native.js';
import {nativeBlastsForEffect,nativeSmokeState} from './explosion-native.js';
import {DebrisRenderPool} from './debris-render-pool.js';
import {restorePropDebrisState,snapshotPropDebrisState} from './prop-debris-state.js';
import {explosionFlashTexture,greenExplosionWave,GREEN_EXPLOSION_WAVE_TEXTURE} from './explosion-variants.js';
import {ElectricExplosionEffects} from './electric-explosion-effects.js';
import {projectileImpactSprite,projectileImpactWave,IMPACT_WAVE_TEXTURE} from './projectile-impacts.js';

export function explosionFrame(age) {
  return age>=0&&age<.8?(age>=.699?8:Math.min(6,Math.floor(age*10))+1):null;
}

export const debrisParticles=createNativeDebris;

// RcHcGame 0x58dd70: Explosie01..08 at 0/100/.../600/699 ms,
// with SizePercentage * .01 * 20 and this sequence of sprite scales.
const EXPLOSION_SCALE=[.5,.6,.8,.9,.95,.9,.8,.7];
const WHITE=[1,1,1];

function appendWave(buffer,wave,count) {
  for(const quad of wave.quads) {
    if(count>=buffer.capacity)break;
    for(let vertex=0;vertex<4;vertex++) {
      const index=count*4+vertex;
      buffer.positions.setXYZ(index,...quad.points[vertex]);
      buffer.uvs.setXY(index,quad.uvs[vertex][0],1-quad.uvs[vertex][1]);
      buffer.colors.setXYZW(index,1,1,1,wave.opacity);
    }
    count++;
  }
  return count;
}
function flushWave(buffer,count) {
  if(!buffer)return;
  buffer.mesh.visible=count>0;buffer.mesh.geometry.setDrawRange(0,count*6);
  buffer.positions.needsUpdate=buffer.uvs.needsUpdate=buffer.colors.needsUpdate=true;
}

/** Uses the actor's original fragment meshes, sprites and INI properties.
 * Fragment ballistic integration uses the portable collider. */
export class DestructibleEffects {
  static async create(world,game) {
    const effect=new DestructibleEffects(world,game),names=new Set();
    for(const object of game.objects)if(object.kind==='actor')for(const type of object.actorSettings?.debris?.types||[])names.add(type.actor.toLowerCase().replace(/\.act$/,''));
    await Promise.all([...names].map(async name=>{const actor=await world.makeActor(name,{deferTextures:true});if(actor)effect.prototypes.set(name,actor);}));
    effect.sources=game.objects.filter(object=>object.kind==='actor'&&object.actorSettings?.debris?.types?.length);
    // Keep every artwork's shader warm, then reserve the larger cohorts only
    // near the player. This covers stacked props without retaining a full
    // level's maximum possible fragment count.
    effect.renderPool.prewarm([...effect.prototypes.values()].map(prototype=>({prototype,count:1})));
    return effect;
  }
  constructor(world,game){this.world=world;this.game=game;this.seen=new Set();this.present=new Set();this.particles=[];this.blasts=[];this.prototypes=new Map();this.renderPool=new DebrisRenderPool(world);this.sources=[];this.nextReserve=-Infinity;this.reserveRequests=[];this.reservePending=false;this.debrisCohorts=new Map();}
  prepareNearby(position=this.world.player?.position,creationBudget=8,force=false) {
    if(!position)return;
    if(force||this.game.time>=this.nextReserve) {
      this.nextReserve=this.game.time+.25;
      const counts=new Map();
      for(const object of this.sources) {
        if(object.enabled===false||object.visible===false||object.health<=0)continue;
        const origin=this.game.objectPosition(object);
        if(origin.reduce((sum,value,i)=>sum+(value-position[i])**2,0)>512**2)continue;
        if(this.world.geometryStream?.rooms?.active&&!this.world.geometryStream.rooms.sphereAllowed(origin,32))continue;
        for(const type of object.actorSettings.debris.types) {
          const name=String(type.actor||'').toLowerCase().replace(/\.act$/,''),prototype=this.prototypes.get(name);
          if(prototype)counts.set(prototype,(counts.get(prototype)||0)+Math.max(Number(type.MinNr)||0,Number(type.MaxNr)||0));
        }
      }
      this.reserveRequests=[...counts].map(([prototype,count])=>({prototype,count}));this.reservePending=true;
      for(const prototype of counts.keys())this.world.actorTextures?.requestRoot(prototype);
    }
    if(this.reservePending){const result=this.renderPool.reserve(this.reserveRequests,128,creationBudget);this.reservePending=result.remaining>0&&result.created>0;}
  }
  update(dt,batches,beamBatches) {
    const {world,game}=this;
    if(dt>0)this.prepareNearby();
    let waveCount=0,greenWaveCount=0;
    for(const effect of game.projectileImpacts||[]) {
      const sprite=projectileImpactSprite(effect,game.time);
      if(sprite)batches.get(sprite.texture)?.add(sprite.position,sprite.size,sprite.size,WHITE,sprite.opacity);
      const wave=projectileImpactWave(effect,game.time,world.camera?.position.toArray(),
        (start,end)=>world.collider.trace(start,end,[0,0,0],[0,0,0],world.physicalModels,null));
      if(wave) {
        const map=batches.get(IMPACT_WAVE_TEXTURE)?.mesh.material.uniforms.map.value;
        if(map&&!this.impactWaves)this.createImpactWaves(map);
        if(this.impactWaves)waveCount=appendWave(this.impactWaves,wave,waveCount);
      }
    }
    flushWave(this.impactWaves,waveCount);
    this.present.clear();
    for(const effect of game.explosions||[]) {
      this.present.add(effect.id);
      if(!this.seen.has(effect.id)) {
        this.seen.add(effect.id);
        if(!this.electric&&effect.settings?.explosion?.Electric&&(world.settings?.effectsQuality??3)===3)
          this.electric=new ElectricExplosionEffects(world,game);
        this.blasts.push(...nativeBlastsForEffect(effect));
        const saved=restorePropDebrisState(effect.debrisState,effect,game.time),cohort={effect,particles:[],at:game.time};
        cohort.snapshot=()=>snapshotPropDebrisState(cohort.particles,effect,cohort.at);
        effect.debrisSnapshot=cohort.snapshot;this.debrisCohorts.set(effect.id,cohort);
        const particles=saved?.particles??debrisParticles(effect,name=>this.prototypes.get(name)?.userData.template?.data.settings);
        for(const particle of particles) {
          const prototype=this.prototypes.get(particle.actor);if(!prototype)continue;
          // New saves resume actual bounces/poses. Only legacy records replay
          // their bounded age; they never recorded the historical contacts.
          const elapsed=Math.min(6,Math.max(0,game.time-(saved?.at??effect.birth))),age=particle.age+elapsed;
          let alive=true;
          while(alive&&particle.age<age-1e-8)alive=stepNativeDebris(particle,Math.min(.05,age-particle.age),
            (start,end,min,max)=>world.collider.trace(start,end,min,max,world.physicalModels,false));
          if(!alive)continue;
          if(saved||age>0)particle.restoredAt=game.time;
          const entry=this.renderPool.acquire(prototype,{scale:effect.scale}),{root,materials}=entry;
          particle.materialOpacity=entry.materialOpacity;
          root.position.fromArray(particle.position);world.scene.add(root);particle.mesh=root;particle.materials=materials;particle.renderEntry=entry;this.particles.push(particle);
          cohort.particles.push(particle);
        }
      }
    }
    this.electric?.update(dt,batches,beamBatches);
    // Gameplay removes consumed explosion events after six seconds. Keep
    // no permanent ID history while finite smoke cohorts finish separately.
    for(const id of this.seen)if(!this.present.has(id)){
      this.seen.delete(id);const cohort=this.debrisCohorts.get(id);
      if(cohort&&cohort.effect.debrisSnapshot===cohort.snapshot)delete cohort.effect.debrisSnapshot;
      this.debrisCohorts.delete(id);
    }
    for(let i=this.blasts.length-1;i>=0;i--) {
      const blast=this.blasts[i];
      if(game.time>=blast.expires){this.blasts.splice(i,1);continue;}
      const frame=explosionFrame(game.time-blast.birth);
      if(frame&&!blast.smokeOnly) {
        const key=explosionFlashTexture(blast,frame),size=blast.diameter*EXPLOSION_SCALE[frame-1];
        batches.get(key)?.add(blast.position,size,size,WHITE,1);
      }
      if(blast.green&&!blast.smokeOnly) {
        const wave=greenExplosionWave(blast,game.time,world.camera?.position.toArray(),
          (start,end)=>world.collider.trace(start,end,[0,0,0],[0,0,0],world.physicalModels,null));
        if(wave) {
          const map=batches.get(GREEN_EXPLOSION_WAVE_TEXTURE)?.mesh.material.uniforms.map.value;
          if(map&&!this.greenWaves)this.greenWaves=this.createWaves(map,64);
          if(this.greenWaves)greenWaveCount=appendWave(this.greenWaves,wave,greenWaveCount);
        }
      }
      const smokeBatch=batches.get(`${blast.green?'smoke_green':'smoke_05'}.bmp|smoke_green_a.bmp`);
      if(smokeBatch)for(const particle of blast.smoke){const state=nativeSmokeState(particle,game.time);if(state)smokeBatch.add(state.position,state.size,state.size,WHITE,state.opacity);}
    }
    flushWave(this.greenWaves,greenWaveCount);
    const active=[];
    for(const particle of this.particles) {
      const step=particle.restoredAt===game.time?0:dt;delete particle.restoredAt;
      if(!stepNativeDebris(particle,step,(start,end,min,max)=>world.collider.trace(start,end,min,max,world.physicalModels,false))) {
        this.renderPool.release(particle.renderEntry,game.time);continue;
      }
      particle.mesh.position.fromArray(particle.position);particle.mesh.quaternion.fromArray(particle.orientation);
      for(let i=0;i<particle.materials.length;i++)particle.materials[i].opacity=particle.materialOpacity[i]*particle.opacity;
      active.push(particle);
    }
    this.particles=active;
    // A script may save synchronously during Gameplay.update, before the
    // renderer advances particles. Retain their actual last integration time.
    if(dt>0)for(const cohort of this.debrisCohorts.values())cohort.at=game.time;
    this.renderPool.trim(game.time);
  }
  createImpactWaves(map) {
    if(!this.impactWaves)this.impactWaves=this.createWaves(map);
  }
  createWaves(map,capacity=256) {
    const geometry=this.world.track(new THREE.BufferGeometry()),indices=[];
    const positions=new THREE.BufferAttribute(new Float32Array(capacity*12),3).setUsage(THREE.DynamicDrawUsage);
    const uvs=new THREE.BufferAttribute(new Float32Array(capacity*8),2).setUsage(THREE.DynamicDrawUsage);
    const colors=new THREE.BufferAttribute(new Float32Array(capacity*16),4).setUsage(THREE.DynamicDrawUsage);
    for(let q=0;q<capacity;q++)for(const corner of [0,1,2,0,2,3])indices.push(q*4+corner);
    geometry.setAttribute('position',positions);geometry.setAttribute('uv',uvs);geometry.setAttribute('color',colors);geometry.setIndex(indices);geometry.setDrawRange(0,0);
    const material=this.world.track(new THREE.MeshBasicMaterial({map,vertexColors:true,transparent:true,depthWrite:false,side:THREE.DoubleSide}));
    const mesh=new THREE.Mesh(geometry,material);mesh.frustumCulled=false;mesh.renderOrder=2;this.world.scene.add(mesh);
    return {mesh,positions,uvs,colors,capacity};
  }
  prepareImpactWaves(batches) {
    const map=batches.get(IMPACT_WAVE_TEXTURE)?.mesh.material.uniforms.map.value;
    if(map)this.createImpactWaves(map);
    return this.impactWaves?.mesh;
  }
  dispose(){
    for(const cohort of this.debrisCohorts.values())if(cohort.effect.debrisSnapshot===cohort.snapshot)delete cohort.effect.debrisSnapshot;
    this.electric?.dispose();this.electric=null;
    this.debrisCohorts.clear();this.impactWaves?.mesh.removeFromParent();this.impactWaves=null;this.greenWaves?.mesh.removeFromParent();this.greenWaves=null;this.renderPool.dispose();this.particles=[];this.blasts=[];this.seen.clear();this.present.clear();this.prototypes.clear();
  }
}

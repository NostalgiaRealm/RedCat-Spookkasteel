import * as THREE from 'three';
import {createNativeDebris,stepNativeDebris} from './debris-native.js';
import {createNativeBlasts,nativeSmokeState} from './explosion-native.js';
import {createActorLighting,applyActorLighting} from './actor-lighting.js';
import {projectileImpactSprite,projectileImpactWave,IMPACT_WAVE_TEXTURE} from './projectile-impacts.js';

export function explosionFrame(age) {
  return age>=0&&age<.8?(age>=.699?8:Math.min(6,Math.floor(age*10))+1):null;
}

export const debrisParticles=createNativeDebris;

// RcHcGame 0x58dd70: Explosie01..08 at 0/100/.../600/699 ms,
// with SizePercentage * .01 * 20 and this sequence of sprite scales.
const EXPLOSION_SCALE=[.5,.6,.8,.9,.95,.9,.8,.7];
const WHITE=[1,1,1],GREEN=[.5,1,.5];

/** Uses the actor's original fragment meshes, sprites and INI properties.
 * Fragment ballistic integration uses the portable collider. */
export class DestructibleEffects {
  static async create(world,game) {
    const effect=new DestructibleEffects(world,game),names=new Set();
    for(const object of game.objects)if(object.kind==='actor')for(const type of object.actorSettings?.debris?.types||[])names.add(type.actor.toLowerCase().replace(/\.act$/,''));
    await Promise.all([...names].map(async name=>{const actor=await world.makeActor(name);if(actor)effect.prototypes.set(name,actor);}));
    return effect;
  }
  constructor(world,game){this.world=world;this.game=game;this.seen=new Set();this.present=new Set();this.particles=[];this.blasts=[];this.prototypes=new Map();}
  update(dt,batches) {
    const {world,game}=this;
    let waveCount=0;
    for(const effect of game.projectileImpacts||[]) {
      const sprite=projectileImpactSprite(effect,game.time);
      if(sprite)batches.get(sprite.texture)?.add(sprite.position,sprite.size,sprite.size,WHITE,sprite.opacity);
      const wave=projectileImpactWave(effect,game.time,world.camera?.position.toArray(),
        (start,end)=>world.collider.trace(start,end,[0,0,0],[0,0,0],world.physicalModels,null));
      if(wave) {
        const map=batches.get(IMPACT_WAVE_TEXTURE)?.mesh.material.uniforms.map.value;
        if(map&&!this.impactWaves)this.createImpactWaves(map);
        if(this.impactWaves)for(const quad of wave.quads) {
          if(waveCount>=256)break;
          for(let vertex=0;vertex<4;vertex++) {
            const index=waveCount*4+vertex;
            this.impactWaves.positions.setXYZ(index,...quad.points[vertex]);
            this.impactWaves.uvs.setXY(index,quad.uvs[vertex][0],1-quad.uvs[vertex][1]);
            this.impactWaves.colors.setXYZW(index,1,1,1,wave.opacity);
          }
          waveCount++;
        }
      }
    }
    if(this.impactWaves) {
      const wave=this.impactWaves;wave.mesh.visible=waveCount>0;wave.mesh.geometry.setDrawRange(0,waveCount*6);
      wave.positions.needsUpdate=wave.uvs.needsUpdate=wave.colors.needsUpdate=true;
    }
    this.present.clear();
    for(const effect of game.explosions||[]) {
      this.present.add(effect.id);
      if(!this.seen.has(effect.id)) {
        this.seen.add(effect.id);
        this.blasts.push(...createNativeBlasts(effect));
        for(const particle of debrisParticles(effect,name=>this.prototypes.get(name)?.userData.template?.data.settings)) {
          const prototype=this.prototypes.get(particle.actor);if(!prototype)continue;
          const original=prototype.userData.mesh,materials=(Array.isArray(original.material)?original.material:[original.material]).map(m=>{const copy=m.clone();copy.transparent=true;return copy;});
          const root=new THREE.Group(),mesh=new THREE.Mesh(original.geometry,materials);mesh.position.copy(original.position);mesh.rotation.copy(original.rotation);mesh.scale.copy(original.scale);root.add(mesh);
          mesh.userData.actorLighting=createActorLighting(prototype.userData.template?.data.settings||{});
          for(const material of materials)applyActorLighting(material,mesh.userData.actorLighting);
          if(effect.scale)mesh.scale.fromArray(effect.scale);
          particle.materialOpacity=materials.map(m=>m.opacity);
          root.position.fromArray(particle.position);world.scene.add(root);particle.mesh=root;particle.materials=materials;this.particles.push(particle);
        }
      }
    }
    // Gameplay removes consumed explosion events after six seconds. Keep
    // no permanent ID history while finite smoke cohorts finish separately.
    for(const id of this.seen)if(!this.present.has(id))this.seen.delete(id);
    for(let i=this.blasts.length-1;i>=0;i--) {
      const blast=this.blasts[i];
      if(game.time>=blast.expires){this.blasts.splice(i,1);continue;}
      const frame=explosionFrame(game.time-blast.birth);
      if(frame&&!blast.smokeOnly) {
        const key=`explosie${String(frame).padStart(2,'0')}.bmp|explosie${String(frame).padStart(2,'0')}_a.bmp`,size=blast.diameter*EXPLOSION_SCALE[frame-1];
        batches.get(key)?.add(blast.position,size,size,blast.green?GREEN:WHITE,1);
      }
      const smokeBatch=batches.get(`${blast.green?'smoke_green':'smoke_05'}.bmp|smoke_green_a.bmp`);
      if(smokeBatch)for(const particle of blast.smoke){const state=nativeSmokeState(particle,game.time);if(state)smokeBatch.add(state.position,state.size,state.size,WHITE,state.opacity);}
    }
    const active=[];
    for(const particle of this.particles) {
      if(!stepNativeDebris(particle,dt,(start,end,min,max)=>world.collider.trace(start,end,min,max,world.physicalModels,false))) {
        particle.mesh.removeFromParent();particle.materials.forEach(m=>m.dispose());continue;
      }
      particle.mesh.position.fromArray(particle.position);particle.mesh.quaternion.fromArray(particle.orientation);
      for(let i=0;i<particle.materials.length;i++)particle.materials[i].opacity=particle.materialOpacity[i]*particle.opacity;
      active.push(particle);
    }
    this.particles=active;
  }
  createImpactWaves(map) {
    const geometry=this.world.track(new THREE.BufferGeometry()),indices=[];
    const positions=new THREE.BufferAttribute(new Float32Array(256*12),3).setUsage(THREE.DynamicDrawUsage);
    const uvs=new THREE.BufferAttribute(new Float32Array(256*8),2).setUsage(THREE.DynamicDrawUsage);
    const colors=new THREE.BufferAttribute(new Float32Array(256*16),4).setUsage(THREE.DynamicDrawUsage);
    for(let q=0;q<256;q++)for(const corner of [0,1,2,0,2,3])indices.push(q*4+corner);
    geometry.setAttribute('position',positions);geometry.setAttribute('uv',uvs);geometry.setAttribute('color',colors);geometry.setIndex(indices);geometry.setDrawRange(0,0);
    const material=this.world.track(new THREE.MeshBasicMaterial({map,vertexColors:true,transparent:true,depthWrite:false,side:THREE.DoubleSide}));
    const mesh=new THREE.Mesh(geometry,material);mesh.frustumCulled=false;mesh.renderOrder=2;this.world.scene.add(mesh);
    this.impactWaves={mesh,positions,uvs,colors};
  }
  dispose(){this.impactWaves?.mesh.removeFromParent();this.impactWaves=null;for(const particle of this.particles){particle.mesh.removeFromParent();particle.materials.forEach(m=>m.dispose());}this.particles=[];this.blasts=[];this.seen.clear();this.present.clear();this.prototypes.clear();}
}

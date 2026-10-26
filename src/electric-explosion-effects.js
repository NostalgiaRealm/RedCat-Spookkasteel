import * as THREE from 'three';
import {nativeBlastsForEffect} from './explosion-native.js';
import {createElectricExplosion,stepElectricExplosion,restoreElectricExplosion,snapshotElectricExplosion,
  electricSparkQuad,ELECTRIC_SPARK_TEXTURE,ELECTRIC_SPARK_UVS} from './electric-explosion-native.js';

const corners=[0,1,2,0,2,3],uvs=corners.map(index=>ELECTRIC_SPARK_UVS[index]);

/** The optional native Electric flag owns three finite moving spark paths.
 * Construct only when requested. Native trail samples are retained for saves,
 * but its grobber_trail3.bmp is absent from both the original install and CD. */
export class ElectricExplosionEffects {
  constructor(world,game) {
    this.world=world;this.game=game;this.cohorts=new Map();this.present=new Set();
    this.quad=Array.from({length:4},()=>[0,0,0]);this.points=Array.from({length:6},()=>new THREE.Vector3());this.color=[1,1,1];
  }
  update(dt,batches,beamBatches) {
    const {game,world}=this;this.present.clear();
    for(const effect of game.explosions||[]) {
      if(!effect.settings?.explosion?.Electric)continue;
      this.present.add(effect.id);
      let cohort=this.cohorts.get(effect.id);
      if(!cohort) {
        const effectsQuality=world.settings?.effectsQuality??3;
        if(effectsQuality!==3)continue;
        const states=nativeBlastsForEffect(effect).map((blast,index)=>{
          const saved=effect.electricState?.[index];
          // Only brand-new effects may produce their first crackle. Loading or
          // discovering an older record reconstructs its finite history silently.
          return saved||game.time>blast.birth+1e-8?
            restoreElectricExplosion(saved,blast,game.time,{effectsQuality}):createElectricExplosion(blast,{effectsQuality});
        }).filter(Boolean);
        cohort={effect,states};cohort.snapshot=()=>states.map(snapshotElectricExplosion);
        effect.electricSnapshot=cohort.snapshot;this.cohorts.set(effect.id,cohort);
      }
      for(const state of cohort.states) {
        if(dt>0)stepElectricExplosion(state,game.time);
        if(dt>0)for(const sound of state.sounds)game.emit?.('electricExplosionSpark',sound);
        // A zero-time redraw must not replay the last tick's event queue.
        state.sounds.length=0;
        if(game.time<state.birth)continue;
        for(const path of state.paths) {
          const batch=batches.get(path.texture);if(!batch)continue;
          const image=batch.mesh?.material.uniforms.map.value.image;
          // These native textured points use bitmap pixels * scale. The six
          // imported spark frames are all32x32, with their own alpha masks.
          batch.add(path.position,(image?.width||32)*path.spriteScale,(image?.height||32)*path.spriteScale,
            [1,1,1],path.rgba[3]/255);
        }
        const beam=beamBatches?.get(ELECTRIC_SPARK_TEXTURE);if(!beam)continue;
        for(const spark of state.sparks) {
          electricSparkQuad(spark,this.quad);
          for(let i=0;i<6;i++)this.points[i].fromArray(this.quad[corners[i]]);
          for(let i=0;i<3;i++)this.color[i]=spark.rgba[i]/255;
          beam.addPoints(this.points,this.color,spark.rgba[3]/255,0,1,uvs);
        }
      }
    }
    for(const [id,cohort]of this.cohorts)if(!this.present.has(id)) {
      if(cohort.effect.electricSnapshot===cohort.snapshot)delete cohort.effect.electricSnapshot;
      this.cohorts.delete(id);
    }
  }
  dispose() {
    for(const cohort of this.cohorts.values())if(cohort.effect.electricSnapshot===cohort.snapshot)delete cohort.effect.electricSnapshot;
    this.cohorts.clear();this.present.clear();
  }
}

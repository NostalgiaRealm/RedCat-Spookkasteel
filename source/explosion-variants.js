import {nativeShockwave} from './shockwave-native.js';
import {ELECTRIC_PATH_TEXTURES,ELECTRIC_SPARK_TEXTURE} from './electric-explosion-native.js';

const frames=prefix=>Object.freeze(Array.from({length:8},(_,i)=>{
  const ordinal=String(i+1).padStart(2,'0');return `${prefix}${ordinal}.bmp|${prefix}${ordinal}_a.bmp`;
}));
export const NORMAL_EXPLOSION_TEXTURES=frames('explosie');
export const GREEN_EXPLOSION_TEXTURES=frames('expl_sup');
export const GREEN_EXPLOSION_WAVE_TEXTURE='ring.bmp|ring_a.bmp';
const greenTextures=new Set([...GREEN_EXPLOSION_TEXTURES,GREEN_EXPLOSION_WAVE_TEXTURE]);

// 0x4a81ad: Green selects visual type 2; 0x58e28f..0x58e561
// changes the artwork, retaining the normal frame clock and white tint.
export function explosionFlashTexture(blast,frame) {
  return (blast.green?GREEN_EXPLOSION_TEXTURES:NORMAL_EXPLOSION_TEXTURES)[frame-1];
}

// These dormant variants must not add uploads or shader batches to shipped
// levels, whose destructibles all have Green disabled. Saved explosions are
// restored before WorldEffects.create and also participate in this decision.
export function electricExplosionsEnabled(gameplay,effectsQuality=3) {
  return effectsQuality===3&&((gameplay.objects||[]).some(object=>!!object.actorSettings?.explosion?.Electric)||
    (gameplay.explosions||[]).some(effect=>!!effect.settings?.explosion?.Electric));
}
const electricTextures=new Set([...ELECTRIC_PATH_TEXTURES,ELECTRIC_SPARK_TEXTURE]);
export function explosionTextureFilter(gameplay,effectsQuality=3) {
  const green=(gameplay.objects||[]).some(object=>!!object.actorSettings?.explosion?.Green)||
    (gameplay.explosions||[]).some(effect=>!!effect.settings?.explosion?.Green);
  const electric=electricExplosionsEnabled(gameplay,effectsQuality);
  return key=>(green||!greenTextures.has(key))&&(electric||!electricTextures.has(key));
}

// 0x58d7e6/0x58d80f: the green variant adds a 600ms shockwave,
// with .1 -> 4 radius parameters, independent of the flash size.
export function greenExplosionWave(blast,time,camera,trace) {
  const age=time-blast.birth;
  if(!blast.green||blast.smokeOnly||age<0||age>.6)return null;
  const progress=age/.6,radius=50*Math.sqrt(.01*(1-progress)+16*progress);
  return nativeShockwave(blast.position,camera,radius,1-progress,trace);
}

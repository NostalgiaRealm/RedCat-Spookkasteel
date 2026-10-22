import {createNativeDebris} from './debris-native.js';

export const KNIGHT_PARTS=['knhd','knbrst','knhip','knllg','knrlg','knlrm','knrrm','knlns','knax'];

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

import {DEATH_SMOKE_TEXTURE,DEATH_SMOKE_COLOR} from './enemy-death-effects.js';
import {jesterTeleportFrame} from './jester-teleport-timing.js';

// Native finite particle clocks and integration are shared table samples.
export function jesterTeleportParticles(effect,floorY=effect.position[1]) {
  const frame=jesterTeleportFrame(effect.phase,effect.age),particles=[];
  for(let i=0;i<frame.length;i+=5) {
    particles.push({position:[effect.position[0]+frame[i],floorY+frame[i+1],effect.position[2]+frame[i+2]],
      size:frame[i+3],color:DEATH_SMOKE_COLOR,opacity:frame[i+4]});
  }
  return particles;
}

// The native shared projectile tick (0x44c760) calls effect factory +0x68.
// Bone, goo/poison, Jester, magic, magma and skull all resolve that factory to
// 0x44aef0 (null). Their animated projectile artwork is the complete flight
// effect; strail belongs to Jester's teleport and enemy death effects here.
// Mushroom's separate, explicitly created ribbon lives in ProjectileHazards.
// Gargoyle bypasses that factory with its own CRcBlastEffect (gargoyle-blast.js).
export class EnemyCombatEffects {
  constructor(world,gameplay){this.world=world;this.gameplay=gameplay;}
  update(batches) {
    const game=this.gameplay,batch=batches.get(DEATH_SMOKE_TEXTURE);if(!batch)return;
    for(const object of game.objects) {
      if(object.enemyType!=='maxj'||object.health<=0)continue;
      for(const effect of object.boss?.teleportEffects||[]) {
        const start=effect.position.map((v,i)=>v+(i===1?10:0)),end=start.map((v,i)=>v-(i===1?10000:0));
        const hit=this.world.collider?.trace(start,end,[0,0,0],[0,0,0],this.world.physicalModels);
        const floorY=hit&&hit.fraction<1?hit.end[1]:effect.position[1];
        // 0x477260 has the same camera-position basis/UVs as death smoke.
        for(const p of jesterTeleportParticles(effect,floorY))batch.add(p.position,p.size,p.size,p.color,p.opacity,0,null,2);
      }
    }
  }
}

import {DEATH_SMOKE_TEXTURE,DEATH_SMOKE_COLOR} from './enemy-death-effects.js';

// CRcJesterMax's 0x4777b0 effect uses 15 strail quads, a one-second
// particle life, 29/19 ms emission spacing and opposite radial motion.
export function jesterTeleportParticles(effect,floorY=effect.position[1]) {
  const arrival=effect.phase==='arrival',particles=[],spacing=arrival?.019:.029;
  for(let i=0;i<15;i++) {
    const age=effect.age-(i+1)*spacing;if(age<0||age>=1)continue;
    const radius=arrival?.1+29.9*age:50-49.9*age;
    const angle=i*Math.PI*2/15+(arrival?18.5:12.5)*age;
    const y=arrival?floorY+50*age:floorY+75*(1-age);
    const size=2*(arrival?5+35*age:40-35*age);
    particles.push({position:[effect.position[0]+Math.cos(angle)*radius,y,effect.position[2]+Math.sin(angle)*radius],
      size,color:DEATH_SMOKE_COLOR,opacity:(arrival?100-65*age:25+75*age)/100});
  }
  return particles;
}

// The native shared projectile tick (0x44c760) calls effect factory +0x68.
// Bone, goo/poison, Jester, magic, magma and skull all resolve that factory to
// 0x44aef0 (null). Their animated projectile artwork is the complete flight
// effect; strail belongs to Jester's teleport and enemy death effects here.
// Mushroom's separate, explicitly created ribbon lives in ProjectileHazards.
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
        for(const p of jesterTeleportParticles(effect,floorY))batch.add(p.position,p.size,p.size,p.color,p.opacity);
      }
    }
  }
}

import {createNativeBlasts} from './explosion-native.js';
import {damageDestructible} from './destructible-damage.js';

const number=(value,fallback=0)=>Number.isFinite(Number(value))?Number(value):fallback;
const vector=value=>Array.isArray(value)&&value.length===3&&value.every(Number.isFinite);
export const EXPLOSION_DAMAGE_SECONDS=.4;

// RcExplosion::Init (0x58d847) creates a 400 ms hurt cell, including
// SmokeOnly explosions. The actor factory scales DamagePercentage by
// .46875; the cell uses 400 HP/s at 100%, and an integer 700-unit radius.
export function createNativeExplosionDamage(effect) {
  const conf=effect.settings?.explosion||{};
  const radius=Math.trunc(Math.max(0,number(conf.SizePercentage))*.01*700);
  const rate=Math.max(0,number(conf.DamagePercentage))*1.875;
  if(!radius||!rate)return [];
  return createNativeBlasts(effect).map(blast=>({sourceId:effect.sourceId,birth:blast.birth,
    position:[...blast.position],radius,rate,activatedAt:null}));
}

export function explosionPointDamage(cell,point,seconds) {
  const distance=Math.hypot(...point.map((value,axis)=>value-cell.position[axis]));
  return Math.max(0,1-distance/cell.radius)*cell.rate*seconds;
}

function targetBounds(game,object) {
  const rendered=object.explosionBounds?.();
  if(rendered)return rendered;
  const position=game.objectPosition(object),relative=object.effectBounds?.(position);
  const min=relative?.min||object.collisionMins||[-12,0,-12];
  const max=relative?.max||object.collisionMaxs||[12,45,12];
  return {origin:[...position],min:min.map((value,axis)=>value+position[axis]),max:max.map((value,axis)=>value+position[axis])};
}

// 0x4afb84 measures shortest distance to the translated actor box. Its
// occlusion test accepts the centre OR any of eight fallback samples.
export function explosionBoxDamage(cell,bounds,seconds,lineOfSight) {
  const nearest=cell.position.map((value,axis)=>Math.max(bounds.min[axis],Math.min(bounds.max[axis],value)));
  const amount=explosionPointDamage(cell,nearest,seconds);
  if(!(amount>0))return 0;
  const centre=bounds.min.map((value,axis)=>(value+bounds.max[axis])*.5);
  if(lineOfSight(cell.position,centre))return amount;
  for(let corner=0;corner<8;corner++) {
    // The native fallback adds LOCAL box corners to the box CENTRE, even
    // for a box whose local centre is offset from the actor origin.
    const point=bounds.min.map((value,axis)=>centre[axis]+(corner&(1<<axis)?bounds.max[axis]:value)-(bounds.origin?.[axis]??centre[axis]));
    if(lineOfSight(cell.position,point))return amount;
  }
  return 0;
}

// CAdamAnimationCell::OnFrameCall (0x4ad9c0) arms its deadline on the
// first eligible frame, not its authored birth. The end comparison is
// inclusive (0x4adb14); Hurt::OnFrameCall consumes the whole frame delta.
// The tolerance only absorbs seconds-clock rounding at an exact boundary.
const atOrBefore=(time,end)=>time<=end+1e-9;
function activateCell(cell,time) {
  if(!atOrBefore(cell.birth,time))return false;
  if(!Number.isFinite(cell.activatedAt))cell.activatedAt=time;
  return atOrBefore(time,cell.activatedAt+EXPLOSION_DAMAGE_SECONDS);
}
function retainCells(cells,time) {
  return cells.filter(cell=>!Number.isFinite(cell.activatedAt)||atOrBefore(time,cell.activatedAt+EXPLOSION_DAMAGE_SECONDS));
}

// Dialogue still advances effect lifetimes while protecting its participants.
// In particular, a new blast must not arm afresh after a long cutscene.
export function advanceExplosionDamageClocks(game,dt) {
  if(!(dt>0))return;
  for(const cell of game.explosionDamage)activateCell(cell,game.time);
  game.explosionDamage=retainCells(game.explosionDamage,game.time);
}

export function advanceExplosionDamage(game,dt,playerPosition,lineOfSight=()=>true) {
  if(!(dt>0))return;
  // Native controller +0x210 is its eye-height movement origin. The port
  // stores feet, so translate using the original Game.ini EyeHeight.
  const playerPoint=playerPosition.map((value,axis)=>value+(axis===1?number(game.settings.game?.Player?.EyeHeight,1.69)*32:0));
  // Destruction during this loop may append another cell. Keep the existing
  // bounded next-frame chain processing instead of recursing through new blasts.
  const cells=game.explosionDamage;
  for(let i=0,count=cells.length;i<count;i++) {
    const cell=cells[i];
    if(!activateCell(cell,game.time))continue;
    const seconds=dt;
    const playerDamage=explosionPointDamage(cell,playerPoint,seconds);
    if(playerDamage>0&&lineOfSight(cell.position,playerPoint))game.damage(playerDamage,cell.sourceId,{continuous:true});
    // A synchronous death callback can respawn/load and replace the active
    // cells. Do not carry this old generation into the new player state.
    if(game.explosionDamage!==cells)return;
    for(const object of game.objects) {
      if(object.id===cell.sourceId||object.health<=0||object.enabled===false||object.visible===false||object.boss?.hidden)continue;
      if(object.kind!=='enemy'&&!(object.kind==='actor'&&object.actorSettings?.destroyable))continue;
      if(object.explosionActive&&!object.explosionActive())continue;
      if(object.explosionMayReach&&!object.explosionMayReach(cell))continue;
      const amount=explosionBoxDamage(cell,targetBounds(game,object),seconds,lineOfSight);
      if(!(amount>0))continue;
      // Native ReceiveDamage has no weapon enum or OnHitCommand dispatch.
      if(object.kind==='enemy')game.hurtEnemy(object,amount);
      else damageDestructible(game,object,amount);
      if(game.explosionDamage!==cells)return;
    }
  }
  game.explosionDamage=retainCells(cells,game.time);
}

export function restoreExplosionDamage(values,time) {
  return (Array.isArray(values)?values:[]).filter(cell=>cell&&typeof cell.sourceId==='string'&&vector(cell.position)&&
    Number.isFinite(cell.birth)&&
    (cell.activatedAt==null||Number.isFinite(cell.activatedAt)&&cell.activatedAt>=cell.birth-1e-9&&cell.activatedAt<=time+1e-9)&&
    Number.isFinite(cell.radius)&&cell.radius>0&&Number.isFinite(cell.rate)&&cell.rate>0)
    .slice(0,256).map(cell=>({sourceId:cell.sourceId,birth:cell.birth,position:[...cell.position],radius:cell.radius,rate:cell.rate,
      // Old snapshots had birth-based expiry. Do not give an already active
      // old blast a fresh 400 ms; preserve a future delayed blast as pending.
      activatedAt:cell.activatedAt===undefined?(cell.birth<time?cell.birth:null):cell.activatedAt}))
    .filter(cell=>cell.activatedAt===null||atOrBefore(time,cell.activatedAt+EXPLOSION_DAMAGE_SECONDS));
}

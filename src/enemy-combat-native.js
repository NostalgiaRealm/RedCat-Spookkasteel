import {enemyRandom} from './enemy-navigation.js';

// RcShootInfo::RcShootInfo (0x426800) samples once, while each attack state
// copies +0x2c (e.g. 0x401562–0x40156e). This is not a fresh roll per shot.
export function initializeEnemySalvo(object) {
  if(!object.ranged)return;
  const average=Math.max(1,Number(object.stats.AverageShotsPerSalvo)||2);
  const roll=Math.floor(enemyRandom(object)*32768)%10000;
  object.salvoSize=Math.max(1,Math.trunc(1+(average-1)*roll*.0001));
}
export function enemySalvoSize(object) {
  if(!Number.isInteger(object.salvoSize)||object.salvoSize<1)initializeEnemySalvo(object);
  return object.salvoSize||1;
}

// CRcGuardian inherits CRcTouchEnemy; the shared collision callback at
// 0x42def2–0x42df2a inflicts damage on body contact, at most once per second.
export function usesTouchPursuit(object) {
  return object.enemyType==='guardian'||object.enemyType==='bat'&&object.variant===1;
}

// CRcTouchBatAttack / shared CRcTouchEnemy: rand()%3 at 0x40ae9c.
// Mode zero is MoveCloser (no timer), the others circle for 2000 ms.
export function chooseTouchPursuit(object) {
  const mode=Math.floor(enemyRandom(object)*32768)%3;
  return {wait:1,remaining:mode===0?0:2,direction:mode===2?-1:1,mode:mode===0?'closer':'circle'};
}

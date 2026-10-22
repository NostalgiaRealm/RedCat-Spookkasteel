import {enemyRandom} from './enemy-navigation.js';

// The common enemy states use CRcEnemy::RandomMotionFactor (0x424950).
// Lifecycle-specific rates (such as stone wake/retraction) are supplied by
// their state owners; only the evidenced actions below take a generic sample.
const COMMON=new Set(['spider','bat','ghost','zombie','frog','skeleton','plant','gargoyle','knight','guardian','brutusm','brutusb']);
export function nativeEnemyIdleCycle(object) {
  // Stone alert's fallback idle is explicitly looping (0x404ca9).
  return COMMON.has(object.enemyType)&&!['knight','gargoyle'].includes(object.enemyType);
}
export function enemyMotionRate(object,action) {
  if(action==='attack'&&object.enemyType==='knight')return 1.8; // 0x4050c0
  if(action==='start'&&object.enemyType==='skeleton')return .8+(Math.floor(enemyRandom(object)*32768)%10000)*.00004; // 0x407b3f
  if(!COMMON.has(object.enemyType)||!['idle','walk','attack','hurt','death'].includes(action))return 1;
  const roll=Math.floor(enemyRandom(object)*32768)%10000;
  return action==='idle'&&object.enemyType==='plant' ? .9+roll*.00001 : .8+roll*.00004;
}

export function enemyIdleClip(object) {
  const count=object.enemyType==='plant'?4:object.enemyType==='gargoyle'?3:0;
  if(!count)return undefined;
  const choice=Math.floor(enemyRandom(object)*32768)%count;
  return object.enemyType==='plant'?`idle${choice}`:['idle0','idle1','static'][choice];
}

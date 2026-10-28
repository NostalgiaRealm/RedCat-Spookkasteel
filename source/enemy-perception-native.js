import {sweepPlayer} from './enemies.js';
import {PLAYER_CENTRE_HEIGHT,PLAYER_HEIGHT} from './player-hull.js';
// CRcEnemy sight, slot 30 (0x423800), shared by every ordinary enemy and the
// bosses. Range tests are 3-D (horizontal for the spider overrides 0x413c90 /
// 0x417fe0); within SenseRange no view cone applies. There is no height limit.
// Defaults when an INI omits the key: SenseRange 50, VisualRange 250, ViewAngle
// pi (loaders 0x4258a0 / 0x4261f0).
const n=(value,fallback=0)=>Number.isFinite(Number(value))?Number(value):fallback;
export const ENEMY_SENSE_RANGE_DEFAULT=50;
export const ENEMY_VISUAL_RANGE_DEFAULT=250;
// Enemies beyond this distance from RedCat skip their state machine
// (0x422fb0, +0xe4 = 1600^2 with the shipped settings).
export const ENEMY_THINK_RADIUS=1600;
// Families whose unaware Default state requests idle Sound(0) (0x4059d0).
export const UNAWARE_CHATTER=new Set(['frog','zombie','guardian','ghost','bat']);
// D10: the sight test repeats every 500 ms (int 500 at 0x68f7f0). Its check
// time starts at -1 on the original's never-reset process clock, so the first
// test runs on the enemy's first thinking update.
export const ENEMY_SIGHT_INTERVAL=.5;
export const newEnemySight=()=>({lastCheck:-Infinity,seen:false});
// The think-radius flag is recomputed every 14th update (+0xe0 > 13); both
// start at zero in the actor constructor (0x501cb0) and survive Enable.
export const ENEMY_THINK_INTERVAL=14;
export const newEnemyThink=()=>({count:0,inRadius:false});

/** Eye: own position plus 0.8 of the enemy's own box height (0x4229e0). */
export function enemySightEye(object) {
  const lo=object.collisionMins?.[1]??0,hi=object.collisionMaxs?.[1]??31.25;
  return [object.position[0],object.position[1]+.8*(hi-lo),object.position[2]];
}

export function enemySeesPlayer(object,player,distance3d,lineOfSight) {
  const horizontal=object.enemyType==='spider';
  const d=horizontal?Math.hypot(object.position[0]-player[0],object.position[2]-player[2]):distance3d;
  const sensed=d<=n(object.stats?.SenseRange,ENEMY_SENSE_RANGE_DEFAULT);
  if(!sensed) {
    if(d>n(object.stats?.VisualRange,ENEMY_VISUAL_RANGE_DEFAULT))return false;
    const heading=Math.atan2(player[0]-object.position[0],player[2]-object.position[2]);
    const yaw=object.yaw??heading,angle=Math.abs(Math.atan2(Math.sin(heading-yaw),Math.cos(heading-yaw)));
    if(!(angle<n(object.stats?.ViewAngle,Math.PI)/2))return false;
  }
  // First ray to the player's box centre (0x49bc80); if blocked, a second ray
  // to the centre raised by the full box height (0x423ad0-0x423af2).
  const eye=enemySightEye(object),centre=[player[0],player[1]+PLAYER_CENTRE_HEIGHT,player[2]];
  return !!lineOfSight(eye,centre)||!!lineOfSight(eye,[centre[0],centre[1]+PLAYER_HEIGHT,centre[2]]);
}

/**
 * Knight sword segment: tip = BONE01 + 0.3 * (BONE01 - body centre), traced
 * back to the body centre (0x4050e0 at 0x4051fd, CRcStandingToucher 0x42bd00).
 * The renderer supplies the posed bone; without artwork a frontal segment of
 * the authored attack reach stands in.
 */
export function knightStrikeSegment(object) {
  const posed=object.knightStrikeSegment?.();
  if(Array.isArray(posed)&&posed.length===2&&posed.every(p=>Array.isArray(p)&&p.length===3&&p.every(Number.isFinite)))return posed;
  const mins=object.collisionMins||[-18,0,-18],maxs=object.collisionMaxs||[18,50,18];
  const centre=object.position.map((v,i)=>v+(mins[i]+maxs[i])/2);
  const yaw=object.yaw??0,reach=n(object.stats?.AttackRange,100);
  return [[centre[0]+Math.sin(yaw)*reach,centre[1],centre[2]+Math.cos(yaw)*reach],centre];
}
export const KNIGHT_STRIKE_SEGMENT=knightStrikeSegment;

export function knightStrikeHits(object,player) {
  const [tip,centre]=knightStrikeSegment(object);
  return sweepPlayer(tip,centre,player,0)!==null;
}

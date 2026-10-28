import {enemyRandom} from './enemy-navigation.js';
import {enemySalvoSize} from './enemy-combat-native.js';

const number=(value,fallback=0)=>Number.isFinite(Number(value))?Number(value):fallback;
const clamp=value=>Math.max(0,Math.min(1,value));
const milliseconds=time=>Math.floor(time*1000+1e-7);
const PHASES=new Set(['approach','shoot','betweenWait','wait','retreat','charge']);
const nativeRoll=object=>Math.floor(enemyRandom(object)*32768)%10000;

// Movement wait 0x597900 starts on its first check, not when its parent
// installs it. Keep null as an unarmed saveable clock; no guessed +dt shim.
// Callers enter the wait and return before calling this on a later update.
export function nativeShooterWaitComplete(state,time,seconds) {
  if(state.waitUntil===null){
    state.waitUntil=(milliseconds(time)+Math.trunc(Math.max(0,seconds)*1000))/1000;
    return false;
  }
  return milliseconds(time)>Math.round(state.waitUntil*1000);
}

export function usesNativeShooter(object) {
  return ['frog','skeleton','brutusm','brutusb'].includes(object.enemyType)||
    ['spider','bat','ghost'].includes(object.enemyType)&&object.ranged===true;
}

/**
 * Every shipped moving shooter has an authored path, which selects the native
 * state machine. Without one (incomplete custom levels, old synthetic saves)
 * the port's separate fallback AI runs instead and keeps its own fields.
 */
export function nativeShooterActive(game,object) {
  return usesNativeShooter(object)&&!!object.patrol&&!!game.navigation.find(object.patrol.start);
}

export function restoreNativeShooterState(value) {
  if(!value||value.version!==1||!PHASES.has(value.phase)||!Number.isInteger(value.remaining)||value.remaining<0||value.remaining>1024||
    !(value.waitUntil===null||Number.isFinite(value.waitUntil)))return null;
  return {version:1,phase:value.phase,remaining:value.remaining,waitUntil:value.waitUntil,
    ...(value.phase==='retreat'&&value.retreatStarted===true?{retreatStarted:true}:{})};
}

// Ordinary CRcShooterAttack (0x406f50), its shoot child (0x407490), and
// CRcSkeletonAttack (0x407f50) and Bone Brutus (0x401160). Mushroom Brutus
// inherits the ordinary shooter parent; Max and Witch retain separate states.
// The caller releases pending shots and handles locked animations first.
export function updateNativeShooter(game,object,dt,{playerPosition,visible,distance,walk,moveIdle,lineOfSight}) {
  if(!nativeShooterActive(game,object))return false;
  const remembers=()=>visible||object.alerted===true;
  let state=object.nativeShooter;
  const brutus=['brutusm','brutusb'].includes(object.enemyType);
  if(!state) {
    // Both Brutus defaults are an endless stand-still wait (Mushroom
    // 0x406840, Bone 0x4010b0): an unaware Brutus waits where he is instead
    // of walking the arena's waypoints.
    if(!remembers()){if(brutus){game.enemyAnimation(object,'idle');moveIdle();return true;}return false;}
    state=object.nativeShooter={version:1,phase:object.enemyType==='skeleton'?'shoot':'approach',remaining:0,waitUntil:null};
    if(object.enemyType==='skeleton')return startSalvo();
  }
  const range=number(object.stats.AttackRange,100),minimum=number(object.stats.MinPlayerDistance),bone=object.enemyType==='brutusb';
  function idle() {game.enemyAnimation(object,'idle');moveIdle();return true;}
  function finish() {
    object.nativeShooter=null;object.salvoRemaining=0;
    // Mushroom Brutus returns to his idle wait (0x406f70 -> slot 9).
    if(object.enemyType==='brutusm'){game.enemyAnimation(object,'idle');moveIdle();return true;}
    return false;
  }
  function startShot() {
    moveIdle();
    const duration=game.enemyAnimation(object,'attack',game.enemyDuration(object,'attack'));
    object.pendingAttack={at:game.time+duration*clamp(number(object.stats.DrawMotionPart,.5))};
    state.phase='shoot';state.waitUntil=null;delete state.retreatStarted;state.remaining--;object.salvoRemaining=state.remaining;
    object.attackTimer=duration;
    return true;
  }
  function startSalvo() {state.remaining=enemySalvoSize(object);return startShot();}
  function startCharge() {
    // Bone Brutus switches ammunition on charge ENTRY (0x401217), then
    // chooses closer or another salvo only when the charge clip completes.
    state.phase='charge';state.waitUntil=null;state.remaining=0;
    object.boneChargePending=false;object.boneSkullPhase=!object.boneSkullPhase;
    object.salvoRemaining=0;object.attackTimer=0;
    const rate=.9+nativeRoll(object)*.00002;
    game.enemyAnimation(object,'charge',game.enemyDuration(object,'charge')/rate,rate);
    moveIdle();return true;
  }
  function wait(phase) {
    state.phase=phase;delete state.retreatStarted;
    // 0x402d20 initializes a newly installed child and returns; the timer
    // gets its first completion check separately. Preserve this handoff.
    state.waitUntil=null;
    object.attackTimer=0;return idle();
  }
  function skeletonChildFinished(previous) {
    if(!remembers())return finish();
    if(distance<minimum){state.phase='retreat';state.waitUntil=null;return null;}
    if(previous!=='wait')return wait('wait');
    return startSalvo();
  }
  // A transition may initialize one successor during the same update, but
  // starting a shot, a wait, or a physical step always returns immediately.
  for(let transition=0;transition<4;transition++) {
    if(state.phase==='shoot') {
      if(state.remaining>0)return wait('betweenWait');
      if(bone)return startCharge();
      if(object.enemyType==='skeleton') {
        const result=skeletonChildFinished('shoot');if(result!==null)return result;
      }else {
        // 0x406f70 chooses another closer move OR an after-salvo wait. This
        // choice has no memory check and does not add an unconditional wait.
        const roll=nativeRoll(object)*.0001;
        if(roll<=number(object.stats.ChanceToMoveAfterSalvo)){state.phase='approach';state.waitUntil=null;}
        else return wait('wait');
      }
      continue;
    }
    if(state.phase==='charge') {
      if(nativeRoll(object)*.0001<=number(object.stats.ChanceToMoveAfterSalvo)){state.phase='approach';state.waitUntil=null;}
      else return startSalvo();
      continue;
    }
    if(state.phase==='betweenWait'||state.phase==='wait') {
      const seconds=number(object.stats[state.phase==='betweenWait'?'WaitTimeBetweenShots':'WaitTimeAfterSalvo']);
      if(!nativeShooterWaitComplete(state,game.time,seconds))return idle();
      if(state.phase==='betweenWait')return startShot(); // The complete salvo is committed.
      if(object.enemyType==='skeleton') {
        const result=skeletonChildFinished('wait');if(result!==null)return result;
      }else if(remembers()&&distance<=range)return startSalvo();
      else {state.phase='approach';state.waitUntil=null;}
      continue;
    }
    const retreat=state.phase==='retreat';
    if(retreat&&state.retreatStarted){
      // 0x4087e0 refreshes the target memory on every backward-step update.
      // Its child ends on motion completion, not on movement range alone.
      object.alerted=true;object.lastSeenAt=game.time;object.lastSeenPosition=[...playerPosition];
      if(game.time>=object.animationUntil){
        if(distance<minimum){moveIdle();return true;} // Same-state setter does not replay walkbw.
        return wait('wait');
      }
    }
    const target=game.navigation[retreat?'retreatTarget':'approachTarget'](object,playerPosition,lineOfSight,{player:playerPosition});
    if(target===undefined){object.nativeShooter=null;return false;}
    // 0x596b00 selects/reserves first, then checks movement completion.
    // It can stop mid-edge; the cursor target remains for later resumption.
    if(target===null)return startSalvo();
    if(retreat){
      if(!state.retreatStarted){
        // 0x408790 supplies WalkMotionFactor to skeleton motion enum 3;
        // its actor wrapper applies that factor again. No random factor.
        const factor=number(object.stats.WalkMotionFactor,1)>0?number(object.stats.WalkMotionFactor,1):1;
        game.enemyAnimation(object,'walkback',game.enemyDuration(object,'walkback')/factor,factor);
        state.retreatStarted=true;object.alerted=true;object.lastSeenAt=game.time;object.lastSeenPosition=[...playerPosition];
      }
      // Completion is recomputed, not latched: a returning target can make
      // the cursor resume its edge before this one-shot finishes.
      if(distance>range){moveIdle();return true;}
    }else if(distance<range){
      if(remembers())return startSalvo();
      // Bone Brutus's attack state never completes (0x401160): out of memory
      // on arrival he simply keeps choosing closer moves.
      if(!bone)return finish();
    }
    walk(target.position,{authoredRoute:!object.patrol.reacquiring,destinationId:target.id,...(retreat?{backward:true}:{})});return true;
  }
  return idle();
}

import {enemySalvoSize} from './enemy-combat-native.js';
import {nativeShooterWaitComplete} from './enemy-shooter-native.js';

const number=(value,fallback=0)=>Number.isFinite(Number(value))?Number(value):fallback;
export const usesNativeStandingShooter=object=>['plant','gargoyle'].includes(object.enemyType);

export function restoreNativeStandingShooter(value) {
  if(!value||value.version!==1||!['shoot','wait'].includes(value.phase)||
    !Number.isInteger(value.remaining)||value.remaining<0||value.remaining>1024||
    !(value.waitUntil===null||Number.isFinite(value.waitUntil)))return null;
  return {version:1,phase:value.phase,remaining:value.remaining,waitUntil:value.waitUntil};
}

// CRcStandingShooterAttack (0x40a200): complete the shoot child, check target
// memory, then enter a separate idle/wait child. Its 0x404020 clock is armed
// on the first check and expires strictly after the integer-ms deadline.
// Called only after any locked shoot/hurt clip and pending release finish.
export function updateNativeStandingShooter(game,object,{visible,distance,moveIdle}) {
  if(!usesNativeStandingShooter(object))return false;
  let state=object.nativeStandingShooter;
  const remembers=()=>visible||object.alerted===true;
  const idle=()=>{game.enemyAnimation(object,'idle');moveIdle();return true;};
  const finish=()=>{object.nativeStandingShooter=null;object.salvoRemaining=0;object.attackTimer=0;return idle();};
  function startShot() {
    const duration=game.enemyAnimation(object,'attack',game.enemyDuration(object,'attack'));
    object.pendingAttack={at:game.time+duration*Math.max(0,Math.min(1,number(object.stats.DrawMotionPart,.5)))};
    state.phase='shoot';state.waitUntil=null;state.remaining--;object.salvoRemaining=state.remaining;
    object.attackTimer=duration;moveIdle();return true;
  }
  function startSalvo(){state.remaining=enemySalvoSize(object);return startShot();}
  if(!state){
    // The outer alert checks range before entering this attack parent. Once
    // entered, the parent checks memory, not range, between complete salvos.
    if(!visible||distance>number(object.stats.AttackRange,100)||distance<number(object.stats.MinPlayerDistance))return false;
    state=object.nativeStandingShooter={version:1,phase:'shoot',remaining:0,waitUntil:null};
    object.relocateAfterSalvo=false;
    return startSalvo();
  }
  if(state.phase==='shoot'){
    if(state.remaining>0)return startShot();
    if(!remembers())return finish();
    state.phase='wait';state.waitUntil=null;object.attackTimer=0;
    return idle();
  }
  if(!nativeShooterWaitComplete(state,game.time,number(object.stats.WaitTimeAfterSalvo)))return idle();
  return remembers()?startSalvo():finish();
}

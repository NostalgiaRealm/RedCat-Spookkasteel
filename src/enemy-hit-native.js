import {enemyRandom} from './enemy-navigation.js';
import {usesTouchPursuit} from './enemy-combat-native.js';

// CRcEnemy::ReceiveDamage 0x4232a0 requests a hit child on rand()%2==0;
// the other branch only plays sound 3. Stone receivers 0x40e400/0x40bfc0
// suppress health loss while their inactive child exists, but still react.
export function ordinaryEnemyHit(object,amount) {
  const roll=Math.floor(enemyRandom(object)*32768);
  // Bone Brutus overrides the receiver (0x419cc0): only one in three
  // rolls accepts damage AND requests hit. The other two only play sound 3.
  if(object.enemyType==='brutusb')return {damage:roll%3===0?amount:0,react:roll%3===0};
  const inactiveStone=['knight','gargoyle'].includes(object.enemyType)&&object.ambush?.phase==='dormant';
  return {damage:inactiveStone?0:amount,react:roll%2===0};
}

export function reactToEnemyHit(game,object,react) {
  if(!react){game.enemyAction(object,'hurt');return;}
  // Stationary root 0x403420 rejects repeated hit requests. Moving roots
  // allocate one, but setter 0x402a10 discards the same-state replacement.
  // Neither restarts the motion, deadline, or entry sound while already hurt.
  if(object.animationState==='hurt')return;
  object.pendingAttack=null;object.salvoRemaining=0;
  // Touch damage uses an actor-owned one-second timer (0x42ddd0), not the
  // replaced attack child. A hit cannot grant an extra immediate contact hit.
  if(!usesTouchPursuit(object))object.attackTimer=0;
  object.relocateAfterSalvo=false;object.boneChargePending=false;
  object.batContact=null;object.nativeShooter=null;
  if(object.patrol)object.patrol.relocating=false;
  if(object.ambush){
    object.alerted=true;
    if(['knight','gargoyle'].includes(object.enemyType)){
      // Destroying the inactive child immediately removes stone immunity.
      // Its post-hit alert is a fresh child, including the knight's wake.
      object.ambush.phase='awake';object.ambush.resumeAlert=true;
    }else if(object.enemyType==='spider'){
      object.ambush.resumeAlert=true;delete object.ambush.returnForDescent;
    }else if(object.enemyType==='skeleton'){
      // 0x402a10 replaces the root with hit/state 4 before 0x408880
      // queries its state. That initializer therefore plays hit directly;
      // the old dormant/wake/retract child must not wake again afterward.
      object.ambush.phase='awake';object.ambush.elapsed=0;
      delete object.ambush.duration;
    }
  }
  game.enemyAnimation(object,'hurt',game.enemyDuration(object,'hurt'));
}

export function playerMotionHintValue(value) {
  const hint=Number(value);
  if(!Number.isFinite(hint))return null;
  const integer=Math.trunc(hint);
  return integer>=0&&integer<16?integer:null;
}

// 0x436f40 stores 0..15, but only hint 12 is consumed (0x433445).
// It is an explicit repeated non-looping request, unlike automatic drop
// detection. Clearing the hint alone does not change the native motion state.
export function playerHintMotion(state,hint,selectionKey,blocked=false) {
  if(blocked){delete state.hintMotionKey;return null;}
  if(hint===12){state.hintMotionKey=selectionKey;return 'restart';}
  if(state.hintMotionKey===selectionKey)return 'continue';
  delete state.hintMotionKey;return null;
}

// The native state-6 jump selects the whole jump1 motion at 1.4x. The
// second half already brings the limbs back down. Its jump flag suppresses
// the separate long-drop motion until the player lands.
export function playerMotion(state,player,input,dt,groundDistance=0) {
  const wasAirborne=state.airborne===true,airborne=!player.grounded&&!player.noClip;
  const gap=Math.max(0,groundDistance),previousGap=state.groundDistance??0;
  // 0x4363a0 remembers positive probe distances, including across landings.
  if(gap>0)state.groundDistance=gap;
  if(!airborne){state.jumping=false;state.falling=false;state.age=0;}
  else {
    if(!wasAirborne||state.jumpSerial!==player.jumpSerial){state.age=0;state.jumping=player.jumpKind==='normal'||player.jumpKind==='super';state.falling=false;}
    // 0x4363a0 compares the downward floor probe with its previous value;
    // only a >80-unit increase starts fall1, not a negative Y velocity.
    if(!state.jumping&&!state.falling&&gap-previousGap>80){state.falling=true;state.age=0;}
    state.age=(state.age||0)+Math.max(0,dt);
  }
  state.airborne=airborne;
  state.jumpSerial=player.jumpSerial;
  if(state.jumping||state.falling)state.respawnIdle=false;
  if(state.jumping){const speed=player.jumpKind==='super'?1.3:1.4;return {name:player.jumpKind==='super'?'jump2':'jump1',speed,loop:true,time:state.age*speed};}
  if(state.falling)return {name:'fall1',speed:1.5,loop:false,time:state.age*1.5};
  // CRcPlayer 0x432c91 plays the longer backward clip at 2.2x; forward
  // locomotion remains 1x (0x432d1f), independently of the Wobble sound clock.
  const name=player.noClip?'idle':input.forward>0?'walkfw':input.forward<0?'walkbw':input.right>0?'strafer':input.right<0?'strafel':'idle';
  if(name!=='idle'||player.noClip)state.respawnIdle=false;
  // Native strafe branches 0x432f22/0x432fc2 use 2.4x. Respawn alone
  // enters idle at 1.7x; ordinary idle is still 1x (0x4331ed/0x432bf9).
  return {name,speed:name==='walkbw'?2.2:name==='strafel'||name==='strafer'?2.4:state.respawnIdle?1.7:1,loop:true};
}

// Preserve presentation clocks independently of physics. In particular a
// descending jump must not become a fresh fall when a save is loaded.
export function snapshotPlayerAnimation(actor) {
  const data=actor?.userData;
  if(!data?.animator)return null;
  return {motion:{...data.motionState},reactionPhase:data.reactionPhase||null,
    attackSerial:data.attackSerial??null,pose:data.animator.snapshot()};
}

export function restorePlayerAnimation(actor,saved,player) {
  if(!actor?.userData?.animator)return;
  const data=actor.userData,m=saved?.motion;
  if(m&&typeof m==='object'&&Number.isFinite(m.age)&&m.age>=0) {
    data.motionState={airborne:m.airborne===true,jumping:m.jumping===true,falling:m.falling===true,
      age:m.age,groundDistance:Number.isFinite(m.groundDistance)?Math.max(0,m.groundDistance):0,
      jumpSerial:Number.isSafeInteger(m.jumpSerial)?m.jumpSerial:player.jumpSerial,respawnIdle:m.respawnIdle===true};
    if(typeof m.hintMotionKey==='string'&&m.hintMotionKey.length<=64)data.motionState.hintMotionKey=m.hintMotionKey;
  } else if(!player.grounded&&!player.noClip&&player.jumpKind) {
    // Older saves only have the physics clock. Normal jump age is recoverable;
    // an old super-jump save cannot recover the exact boost restart time.
    data.motionState={airborne:true,jumping:true,falling:false,jumpSerial:player.jumpSerial,
      age:player.jumpKind==='normal'&&Number.isFinite(player.jumpAge)?player.jumpAge:0};
  } else data.motionState={};
  data.reactionPhase=['hit','death','respawn'].includes(saved?.reactionPhase)?saved.reactionPhase:null;
  data.attackSerial=Number.isSafeInteger(saved?.attackSerial)?saved.attackSerial:undefined;
  data.animator.restore(saved?.pose);
}

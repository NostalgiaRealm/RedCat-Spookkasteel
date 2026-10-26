// ModelController MoveTo/SetTo replace RepeatMode with target mode (3),
// RcHcGame.dat 0x4d2af0 / 0x4d23d0. Commands are consumed on an enabled
// controller tick; unlike ordinary once-only playback, finishing a target
// leaves the controller enabled and settled at its current position.
const boundedTarget=(player,value)=>Math.max(player.motion.startTime,Math.min(player.motion.endTime,Number(value)||0));

export function queueControllerTarget(object,player,kind,target) {
  player.stop();
  player.controllerTarget={kind,target:boundedTarget(player,target),pending:true};
  player.loop=false;player.finished=false;
  object.motionStarted=true;object.moving=false;
}

export function restoreControllerTarget(player,saved) {
  delete player.controllerTarget;
  if(!saved||!['move','set'].includes(saved.kind)||!Number.isFinite(saved.target))return;
  player.controllerTarget={kind:saved.kind,target:boundedTarget(player,saved.target),pending:saved.pending===true};
  if(typeof saved.eventMask==='string'&&saved.eventMask.length<=player.events.length&&/^[01]*$/.test(saved.eventMask))player.controllerTarget.eventMask=saved.eventMask;
}

export function updateControllerTarget(object,player,dt) {
  const command=player.controllerTarget;
  if(!command)return false;
  if(!object.enabled){player.stop();object.moving=false;return true;}
  if(command.pending){
    command.pending=false;
    const speed=Number(object.motionSpeed);
    player.play({from:player.time,to:command.target,speed:Number.isFinite(speed)?Math.abs(speed):1,loop:false});
    object.moving=true;
  }else if(!player.playing&&!player.finished)player.resume();
  if(!player.playing)return true;
  const from=player.time,generation=player.generation;
  let to=command.target,passed=true,low=from,high=to;
  if(command.kind==='move'){
    if(!Number.isFinite(dt)||dt<0)return true;
    const direction=player.to>=player.from?1:-1;
    const proposed=from+direction*dt*player.speed;
    passed=direction*(proposed-command.target)>0;
    to=passed?command.target:proposed;
    // 0x4d23d0 reverses the interval arguments only for backwards MoveTo.
    // SetTo passes (old,new), so a backwards SetTo has no labels.
    low=Math.min(from,to);high=Math.max(from,to);
  }
  // 0x4d1740 dispatches ascending labels before the final pose/collision.
  // Keep that order because the port's guard can carry RedCat as a side
  // effect. A replacement callback must cancel before that carry happens.
  for(let index=0;index<player.events.length;index++){
    const event=player.events[index];
    if(event.time<low-1e-5||event.time+1e-5>=high||command.eventMask?.[index]==='1')continue;
    // Immutable saved bits retain already-run labels across blocked or
    // disabled retries without using the timeline itself as a progress cursor.
    const mask=(command.eventMask||'').padEnd(index+1,'0');
    command.eventMask=mask.slice(0,index)+'1'+mask.slice(index+1);
    player.onEvent?.(event);
    if(player.generation!==generation||!player.playing)return true;
  }
  if(from!==to&&player.beforeAdvance?.(from,to,player)===false)return true;
  if(player.generation!==generation||!player.playing)return true;
  player.time=to;player.includeStart=false;
  if(passed){
    player.playing=false;player.finished=true;player.onComplete?.();
  }
  return true;
}

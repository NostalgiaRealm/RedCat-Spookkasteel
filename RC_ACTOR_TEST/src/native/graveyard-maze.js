// Deliberate departure from the original one-use hedge maze: an unfinished
// attempt must be replayable after death without restarting the whole level.
const RETRY_OBJECTS=[
  'heg1_mc','heg2_mc','heg3_mc','heg4_mc','heg5_mc',
  'heg1_trigger_mc','heg3_trigger1_mc','heg3_trigger2_mc','heg2_closetrigger_mc','heg5_trigger_mc',
  'mazedeur1_knop','heg7_mc','mazedoortrigger','mazedoorcam','mazedeur1_dm','mazedeur1_rood','mazedeur1_groen',
];
const find=(game,name)=>game.find(name)[0];
const initial=(entity,key,fallback)=>entity[key]===undefined?fallback:Number(entity[key])!==0;
const eligible=game=>game.level.id==='lvl02a'&&game.scripts&&!game.completed;

function completed(game) {
  const sequence=find(game,'mazedoortrigger'),motion=game.scripts.players.get(sequence?.id);
  // The button switches on before its one-second press finishes. Only its
  // AfterSwitchOn callback commits completion and starts the exit sequence.
  // Do not use motionStarted: older saves inferred it for untouched motions.
  return find(game,'mazedeur1_groen')?.enabled||find(game,'mazedeur1_dm')?.open||
    !!(motion&&(motion.playing||motion.finished||motion.time>motion.motion.startTime+1e-8));
}

function resetObject(game,object) {
  if(!object)return;
  const e=object.entity,host=game.scripts;
  object.enabled=initial(e,'IsInitiallyEnabled',initial(e,'Active',true));
  object.visible=true;object.open=initial(e,'IsInitiallyOpen',false);object.locked=initial(e,'IsInitiallyLocked',false);
  object.switchedOn=initial(e,'IsInitiallySwitchedOn',false);
  object.triggerCount=0;object.switchCount=0;object.inside=false;
  object.openFraction=object.open?1:0;object.closeAt=null;object.moving=false;object.motionStarted=false;
  delete object.motionSpeed;
  const player=host.players.get(object.id);
  if(player){
    const clip=player.motion,start=clip.startTime??0,end=clip.playbackEndTime??clip.endTime;
    // stop/seek invalidates any in-flight event dispatch. Never rewind by
    // playing backwards: that would replay commands and exit-cutscene work.
    player.stop();player.from=start;player.to=end;player.speed=1;player.loop=false;player.loopFrom=start;player.loopTo=end;
    player.seek(object.open||object.switchedOn?clip.endTime:Number(e.InitialPosition??start));
    host.applyMotion(object,player);
  }
  if(host.camera?.id===object.id)host.camera=null;
}

export function cancelPendingGraveyardMazeExit(game) {
  if(!eligible(game)||completed(game))return false;
  const button=find(game,'mazedeur1_knop');
  if(!button?.switchedOn&&!game.scripts.players.get(button?.id)?.playing)return false;
  // Model timelines advance during the death animation. Cancel the pending
  // press now so it cannot start a cutscene and suspend the death/respawn clock.
  resetObject(game,button);return true;
}

export function resetGraveyardMaze(game) {
  if(!eligible(game)||completed(game))return false;
  for(const name of RETRY_OBJECTS)resetObject(game,find(game,name));
  // heg6 is an independent repeating obstacle, and heg8/the exploding crate
  // own a secret. Keep those, enemies, pickups and other puzzle progress intact.
  return true;
}

export function repairGraveyardMazeSave(game) {
  if(!eligible(game))return false;
  if(game.state.health<=0)return cancelPendingGraveyardMazeExit(game);
  if(game.scripts.cutscene||completed(game))return false;
  const entrance=find(game,'heg1_trigger_mc'),closed=find(game,'heg2_closetrigger_mc'),door=find(game,'heg2_mc'),hedge=find(game,'heg1_mc');
  const doorMotion=game.scripts.players.get(door?.id),hedgeMotion=game.scripts.players.get(hedge?.id),position=game.playerPosition;
  // Repair the old stranded-entrance save, not viable saves partway through
  // the maze: the closing trigger has fired, both passages have settled shut,
  // and RedCat is back inside the exhausted entrance trigger's actual brush.
  if(!entrance||entrance.triggerCount<1||!closed||closed.triggerCount<1||!door||door.open||
    !doorMotion||doorMotion.playing||Math.abs(doorMotion.time-doorMotion.motion.startTime)>1e-8||
    !hedgeMotion||hedgeMotion.playing||hedgeMotion.time<hedgeMotion.motion.endTime-1e-8||
    !Array.isArray(position)||position.length!==3||!position.every(Number.isFinite)||!game.contains(entrance,position))return false;
  return resetGraveyardMaze(game);
}

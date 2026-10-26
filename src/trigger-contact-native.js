// CAdamTriggerModel::Tick 0x4d3680 uses four phases. Minimum counts are
// checked on each not-yet-entered occupied tick, not just on the first edge.
export function restoreTriggerPhase(object,saved) {
  if(Number.isInteger(saved)&&saved>=0&&saved<=3)object.triggerPhase=saved;
  else object.triggerPhase=object.inside&&object.triggerCount>=Number(object.entity.MinTriggerTimes||-1)?2:0;
}

export function updateTriggerContact(game,object,inside,dt) {
  const phase=object.triggerPhase??0;
  object.inside=inside;
  if(phase===0){
    if(inside)game.trigger(object,0,{contact:true});
  }else if(phase===1){
    // The first stay callback runs on the next tick, even if the player
    // already crossed the far boundary; the following tick handles leave.
    object.triggerPhase=2;
    damage(game,object,dt);
  }else if(phase===2){
    if(inside)damage(game,object,dt);
    else {object.triggerPhase=3;game.runEvent(object,'CommandOnLeave');}
  }else object.triggerPhase=0;
}

function damage(game,object,dt) {
  const rate=Number(object.entity.DamagePerSecond);
  if(rate>0)game.damage(rate*dt,object.id,{continuous:true});
}

// RcHcGame.dat: hit at 0x432ab7 (1.5x), death at 0x432b58
// (1.6x), re-spawn at 0x433278 (1x, then wait for clip completion).
// Durations are from the original imported redcat.act, in seconds.
export const PLAYER_REACTIONS=Object.freeze({
  hit:{motion:'hit',speed:1.5,duration:1.0666719675064087/1.5},
  death:{motion:'death',speed:1.6,duration:2.2666780948638916/1.6},
  respawn:{motion:'re-spawn',speed:1,duration:3.2666831016540527}
});

export function beginPlayerReaction(phase) {
  return PLAYER_REACTIONS[phase]?{phase,age:0}:null;
}

export function restorePlayerReaction(value,health,lives) {
  if(!value||!PLAYER_REACTIONS[value.phase]||!Number.isFinite(value.age))return null;
  if(value.phase==='death'?(health>0||lives<0):health<=0)return null;
  return {phase:value.phase,age:Math.max(0,Math.min(value.age,PLAYER_REACTIONS[value.phase].duration)),...(value.phase==='death'&&lives===0&&value.finished===true?{finished:true}:{})};
}

export function playerReactionMotion(reaction) {
  const spec=PLAYER_REACTIONS[reaction?.phase];
  return spec?{name:spec.motion,speed:spec.speed,loop:false,time:Math.min(reaction.age,spec.duration)*spec.speed}:null;
}

export function advancePlayerReaction(reaction,dt) {
  if(!reaction||reaction.finished)return null;
  reaction.age+=Math.max(0,dt);
  return reaction.age+1e-9>=PLAYER_REACTIONS[reaction.phase].duration?reaction.phase:null;
}

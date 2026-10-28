// RcHcGame.dat: hit at 0x432ab7 (1.5x), death at 0x432b58
// (1.6x), re-spawn at 0x433278 (1x, then wait for clip completion).
// Durations are from the original imported redcat.act, in seconds.
export const PLAYER_REACTIONS=Object.freeze({
  hit:{motion:'hit',speed:1.5,duration:1.0666719675064087/1.5},
  death:{motion:'death',speed:1.6,duration:2.2666780948638916/1.6},
  respawn:{motion:'re-spawn',speed:1,duration:3.2666831016540527}
});
// The death clip holds its final pose; the life is consumed and respawn
// begins only after two sequential 1000 ms timers (0x433cd1-0x433d06, run
// by the base frame 0x4da970 before slot 22 0x433fd0).
export const PLAYER_DEATH_SECONDS=2;
// 0x4dd650 sets the post-respawn protection byte; the base frame clears it
// after 5000 ms (0x4dab7f-0x4dabb7). All damage, liquids included, is refused.
export const PLAYER_RESPAWN_PROTECTION_SECONDS=5;
const phaseSeconds=phase=>phase==='death'?PLAYER_DEATH_SECONDS:PLAYER_REACTIONS[phase].duration;

export function beginPlayerReaction(phase) {
  return PLAYER_REACTIONS[phase]?{phase,age:0,...(phase==='death'?{lifeDeducted:false}:{})}:null;
}

export function restorePlayerReaction(value,health,lives) {
  if(!value||!PLAYER_REACTIONS[value.phase]||!Number.isFinite(value.age))return null;
  if(value.phase==='death'?(health>0||lives<0):health<=0)return null;
  // Saves before the native lives rule deducted the life at the fatal hit.
  const lifeDeducted=value.phase==='death'&&value.lifeDeducted!==false;
  return {phase:value.phase,age:Math.max(0,Math.min(value.age,phaseSeconds(value.phase))),
    ...(value.phase==='death'?{lifeDeducted}:{}),
    ...(value.phase==='death'&&value.finished===true&&(lives===0||!lifeDeducted)?{finished:true}:{})};
}

export function playerReactionMotion(reaction) {
  const spec=PLAYER_REACTIONS[reaction?.phase];
  return spec?{name:spec.motion,speed:spec.speed,loop:false,time:Math.min(reaction.age,spec.duration)*spec.speed}:null;
}

export function advancePlayerReaction(reaction,dt) {
  if(!reaction||reaction.finished)return null;
  reaction.age+=Math.max(0,dt);
  return reaction.age+1e-9>=phaseSeconds(reaction.phase)?reaction.phase:null;
}

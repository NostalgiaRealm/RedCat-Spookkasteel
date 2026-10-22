// Observational trace for the controlled-frame earned campaign. No game-state edits.
window.__cavesEvidence={events:[],inputs:[],samples:[]};
window.__cavesObserveGame=()=>{
  const g=__redcat.gameplay;if(!g||g.__cavesObserved)return;
  const original=g.onEvent;g.onEvent=e=>{__cavesEvidence.events.push({t:g.time,level:__redcat.world.id,event:{...e}});original(e);};
  g.__cavesObserved=true;
};
__cavesObserveGame();
for(const type of ['keydown','keyup','mousedown','mouseup','mousemove'])window.addEventListener(type,e=>{
  if(type==='mousemove'&&!e.movementX&&!e.movementY)return;
  __cavesEvidence.inputs.push({t:__redcat.gameplay?.time,type,code:e.code,button:e.button,dx:e.movementX,dy:e.movementY});
},true);
const observedStep=window.__stepFrame;let observedFrames=0;
window.__stepFrame=dt=>{
  observedStep(dt);__cavesObserveGame();
  if(++observedFrames%15===0&&__redcat.mode==='playing')__cavesEvidence.samples.push({t:__redcat.gameplay.time,level:__redcat.world.id,p:[...__redcat.world.player.position],state:{...__redcat.gameplay.state},scene:__redcat.gameplay.scripts.cutscene});
};

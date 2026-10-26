// CAdamButtonModel::Tick (004cb420): request, start, motion and completion
// each occupy their own controller check. Explicit requests use one latch;
// physical contact (004cb3a0) is accepted only in states 1 and 5.
export function buttonSettled(object) {
  const phase=object.buttonPhase??(object.switchedOn?5:1);
  return phase===1||phase===5;
}

export function setButtonPhase(object,phase) {
  object.buttonPhase=phase;
  // 004cb8d0 derives on/off from the FSM, not a second mutable flag. A
  // callback can Reset the button before Tick assigns its next phase.
  object.switchedOn=phase>=2&&phase<=5;
  object.moving=!buttonSettled(object);
}

export function restoreButtonPhase(object,player,saved) {
  if(Number.isInteger(saved)&&saved>=1&&saved<=8)setButtonPhase(object,saved);
  else {
    const paused=player&&!player.finished&&player.time>Math.min(player.from,player.to)&&player.time<Math.max(player.from,player.to);
    setButtonPhase(object,player?.playing||paused?(object.switchedOn?3:7):(object.switchedOn?5:1));
  }
}

export function updateButtonController(host,object,player,dt) {
  if(object.kind!=='button')return false;
  if(!object.enabled)return true;
  const phase=object.buttonPhase??(object.switchedOn?5:1);
  if(phase===1||phase===5){
    if(typeof object.pendingButtonSwitch==='boolean'){
      delete object.pendingButtonSwitch;
      const max=Number(object.entity.MaxSwitchTimes);
      if(!(max>0&&object.switchCount>=max)){
        object.switchCount++;
        setButtonPhase(object,phase===1?2:6);
      }
    }
  }else if(phase===2||phase===6){
    // Native sound precedes the authored Before callback; movement begins
    // only on the following controller check.
    host.game.beginButtonSwitch(object);
    setButtonPhase(object,phase===2?3:7);
  }else if(phase===3||phase===7){
    if(!player.playing&&!player.finished)player.resume();
    const direction=phase===3?1:-1;
    // Native ticks supply milliseconds, multiplied by float32 0.001 at
    // 0064a95c; compare the extended sum, then store a float32 motion time.
    const delta=dt*1000*Math.fround(.001),next=player.time+direction*delta*player.speed;
    const crosses=direction*(next-player.to)>0;
    const advance=crosses?delta:player.speed>0?Math.abs(Math.fround(next)-player.time)/player.speed:0;
    player.update(advance);
    // Native compares strictly beyond the endpoint. Landing exactly there
    // samples the endpoint but remains moving until the following check.
    if(player.finished&&!crosses&&object.buttonPhase===(phase===3?4:8)){
      setButtonPhase(object,phase);
      player.playing=true;player.finished=false;
    }
  }else if(phase===4){
    host.game.runEvent(object,'AfterSwitchOnCommand');
    setButtonPhase(object,5);
  }else if(phase===8){
    // The off endpoint exposes settled state before its callback; the on
    // endpoint exposes it after its callback (the original switch ordering).
    setButtonPhase(object,1);
    host.game.runEvent(object,'AfterSwitchOffCommand');
  }
  return true;
}

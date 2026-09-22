const HOLD_SECONDS=2;

export class CutsceneSkipHold {
  constructor(){this.elapsed=0;this.consumed=false;}
  reset(){this.elapsed=0;this.consumed=false;}
  update(dt,held,active) {
    if(!held){this.reset();return false;}
    if(!active){this.elapsed=0;return false;}
    if(this.consumed)return false;
    this.elapsed=Math.min(HOLD_SECONDS,this.elapsed+Math.max(0,dt));
    if(this.elapsed>=HOLD_SECONDS-1e-8){this.consumed=true;return true;}
    return false;
  }
  get progress(){return this.elapsed/HOLD_SECONDS;}
}

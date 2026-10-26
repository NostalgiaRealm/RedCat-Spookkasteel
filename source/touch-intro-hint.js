export const TOUCH_INTRO_HINT_KEY='redcat.touch-intro-hint.v1';
export const TOUCH_INTRO_HINT_TEXT='Stick links: bewegen · veeg rechts: kijken · Menu: pauzeren';
export const DESKTOP_INTRO_HINT_KEY='redcat.desktop-intro-hint.v1';
export const DESKTOP_INTRO_HINT_TEXT='Klik om rond te kijken · WASD om te bewegen · Esc voor het menu';
export const CONTROLLER_INTRO_HINT_TEXT='Linkerstick: bewegen · rechterstick: kijken · A / ×: springen · RT / R2: schieten · Start / Options: menu';

// The forest's opening script begins on its first update, after level loading.
// Wait for its camera/cutscene to run and return control before teaching input.
export class OpeningHint {
  constructor({seen=false,remember=()=>{},show=()=>{},text=DESKTOP_INTRO_HINT_TEXT}={}) {
    this.seen=seen;this.remember=remember;this.show=show;this.text=text;this.pending=false;this.openingSeen=false;
  }
  start({level,enabled,restored=false}) {
    this.pending=!this.seen&&level==='lvl00a'&&enabled&&!restored;
    this.openingSeen=false;
  }
  update({playing,enabled,cutscene,camera}) {
    if(!this.pending||!playing)return;
    const authoredCamera=!!camera&&camera.mode!==0&&camera.mode!==1;
    if(cutscene||authoredCamera){this.openingSeen=true;return;}
    if(!this.openingSeen||!enabled)return;
    this.pending=false;this.seen=true;this.remember();
    this.show(this.text,10000);
  }
}

export class TouchIntroHint extends OpeningHint {
  constructor(options={}){super({...options,text:TOUCH_INTRO_HINT_TEXT});}
  start(options){super.start({...options,enabled:options.touch});}
  update(options){super.update({...options,enabled:options.touch});}
}

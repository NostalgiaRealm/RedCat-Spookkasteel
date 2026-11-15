// Slider words (Zachter / Harder, Lager / Hoger), from ../RCSPOOK_NEW/source/slider-audio.js. Only
// the table of sliders was changed to the ones this port has.
export const SLIDER_VOICES = {
  // the original's two sliders: RcMn15 when the value went down, RcMn16 when it went up (0x55B98C, 0x55BAA0)
  music: {lower:'rcmn15.wav', higher:'rcmn16.wav'},
  effects: {lower:'rcmn15.wav', higher:'rcmn16.wav'},
  volume: {lower:'rcmn15.wav', higher:'rcmn16.wav'},
  'render-scale': {lower:'rcmn23.wav', higher:'rcmn22.wav'},
};

// Let each word finish. Rapid input keeps only the latest direction, rather
// than restarting a WAV at every mouse/touch/controller step or building a queue.
export class SliderAudio {
  constructor(audio) { this.audio=audio; this.values=new Map(); this.generation=0; this.current=null; this.pending=null; }
  reset(values) { this.cancel(); this.values=new Map(Object.entries(values).map(([id,value])=>[id,Number(value)])); }
  cancel() { this.generation++; this.current=null; this.pending=null; }
  input(id,value) {
    const previous=this.values.get(id);value=Number(value);
    if(!Number.isFinite(value)||!SLIDER_VOICES[id])return;
    this.values.set(id,value);
    if(!Number.isFinite(previous)||value===previous)return;
    const sound=SLIDER_VOICES[id][value>previous?'higher':'lower'];
    if(this.current){this.pending=sound===this.current?null:sound;return;}
    this.play(sound);
  }
  async play(sound) {
    const generation=this.generation;this.current=sound;
    const completed=await this.audio.say([sound]);
    if(generation!==this.generation)return;
    this.current=null;const pending=this.pending;this.pending=null;
    if(completed&&pending)this.play(pending);
  }
}

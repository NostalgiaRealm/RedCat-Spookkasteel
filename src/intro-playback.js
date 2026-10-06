// Browsers can reject audible autoplay. Retry silently, then enable sound
// only from the player's click/tap; stricter policies retain a play button.
export class IntroPlayback {
  constructor(video,button,{mutedAutoplay=false,onError=()=>{}}={}) {
    this.video=video;this.button=button;this.mutedAutoplay=mutedAutoplay;this.onError=onError;
    this.serial=0;this.active=false;this.suspended=false;
    button.onclick=()=>this.activate();
  }
  action(text=null) {
    this.button.hidden=!text;
    if(text)this.button.textContent=text;
  }
  start(source,volume) {
    const serial=++this.serial;this.active=true;this.suspended=false;this.action();
    this.video.controls=false;this.video.muted=false;this.video.volume=volume;
    this.video.src=source;
    return this.play(serial,this.mutedAutoplay);
  }
  async play(serial,retryMuted) {
    const current=()=>this.active&&serial===this.serial;
    try {
      await this.video.play();
      if(this.suspended){this.video.pause();return;}
      if(current())this.action(this.video.muted&&this.video.volume>0?'Geluid inschakelen':null);
    } catch(error) {
      // A skip, replay or ended movie may cancel an outstanding play promise.
      // Its result must not restart playback or alter a newer movie's controls.
      if(!current())return;
      if(error.name==='NotAllowedError') {
        if(retryMuted&&!this.video.muted) {
          this.video.muted=true;
          return this.play(serial,false);
        }
        this.action('Afspelen');
      } else if(error.name==='AbortError')this.action('Afspelen');
      else this.onError(error);
    }
  }
  activate() {
    if(!this.active)return;
    const serial=++this.serial;this.suspended=false;this.action();
    // Keep both operations in the trusted click handler for mobile browsers.
    // Never raise the user's chosen volume or rewind an already playing intro.
    this.video.muted=false;
    return this.play(serial,false);
  }
  suspend() {
    if(!this.active)return;
    this.suspended=true;++this.serial;this.video.pause();this.action('Verder kijken');
  }
  stop() {
    this.active=false;this.suspended=false;++this.serial;this.action();
    this.video.pause();this.video.removeAttribute('src');this.video.load();
    this.video.muted=false;this.video.controls=false;
  }
}

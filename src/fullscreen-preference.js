export function normalizeFullscreenPreference(value) {
  return value!==false;
}

// A browser needs a user gesture before it can apply the fullscreen default.
// This controller only handles that first entry; settings apply later choices.
export class FullscreenPreference {
  constructor(document,{enabled=true,shouldRequest=()=>true}={}) {
    this.document=document;this.target=document.defaultView;
    this.enabled=normalizeFullscreenPreference(enabled);this.shouldRequest=shouldRequest;
    this.pending=this.enabled&&this.supported&&!document.fullscreenElement;
    this.requesting=false;
    this.onGesture=event=>this.activate(event);
    this.onFullscreenChange=()=>{if(document.fullscreenElement)this.dispose();};
    if(this.pending) {
      // Bubble at window so media playback and pointer-lock handlers run first.
      // Fullscreen consumes transient activation; pointer lock must precede it.
      this.target.addEventListener('click',this.onGesture);
      this.target.addEventListener('keydown',this.onGesture);
      document.addEventListener('fullscreenchange',this.onFullscreenChange);
    }
  }
  get supported() {
    return !!this.target&&this.document.fullscreenEnabled===true&&typeof this.document.documentElement?.requestFullscreen==='function';
  }
  setEnabled(enabled) {
    this.enabled=normalizeFullscreenPreference(enabled);
    if(!this.enabled)this.dispose();
  }
  eligible(event) {
    if(!event.isTrusted||event.ctrlKey||event.altKey||event.metaKey)return false;
    if(event.type==='keydown') {
      const key=event.key||event.code;
      if(event.repeat||['Escape','Tab','Shift','Control','Alt','Meta','CapsLock','NumLock','PrintScreen'].includes(key)||/^F\d+$/.test(key))return false;
      // Enter/Space activate a focused button with a later click. Keep that
      // gesture available to the button's video/audio action before fullscreen.
      if(event.target?.closest?.('button,a[href],input,select,textarea,[contenteditable],[role="button"]'))return false;
    } else if(event.type!=='click'||event.button>0)return false;
    return this.target.navigator?.userActivation?.isActive!==false&&this.shouldRequest(event);
  }
  async activate(event) {
    if(!this.pending||!this.enabled||this.requesting||!this.supported)return;
    if(this.document.fullscreenElement){this.dispose();return;}
    if(!this.eligible(event))return;
    this.requesting=true;
    try {
      await this.document.documentElement.requestFullscreen();
      this.dispose();
    } catch {
      // A rejected initial request can retry on the next eligible gesture.
      // Never re-arm after a settings change or after entering/exiting fullscreen.
    } finally {
      this.requesting=false;
    }
  }
  dispose() {
    this.pending=false;
    this.target?.removeEventListener('click',this.onGesture);
    this.target?.removeEventListener('keydown',this.onGesture);
    this.document.removeEventListener('fullscreenchange',this.onFullscreenChange);
  }
}

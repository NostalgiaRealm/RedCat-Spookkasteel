import {bindingPressed} from './control-bindings.js';

// The original game-over screen, CRcGStateRESTART (vtable 0x64e4c4). The
// base constructor 0x51cee0 selects Ja (+0x7c = 1). The input handler 0x48ace0
// reads the movement vector's x: left selects Ja (1), right selects Nee (0);
// Fire or Jump confirms. It replaces the base handler, so Escape does nothing.
// The state has no fade (HasFade 0x53dc80 returns false; Retry.ini's fade
// times are never read). Input is read from the first frame, as held levels,
// and a confirm closes the screen right after that frame (IsDone 0x51d700).
// Ja reloads the chapter from its entry state (0x53563b, 0x439f40); Nee quits
// to the menu (0x52c270, 0x4c4440) after GS_GAME's 0 s fade-out.
// Layout: Settings/Retry.ini.
export const RETRY_YES=1,RETRY_NO=0;

/** Movement x < 0 selects Ja, x > 0 selects Nee, as 0x48ace0 does. */
export function retrySelection(selection,x) {
  return x<0?RETRY_YES:x>0?RETRY_NO:selection;
}

/**
 * Keyboard mapping for the retry screen: 'yes' or 'no' to select, 'confirm',
 * 'ignore' for Escape (the original handles no cancel), otherwise null.
 * Enter is a port addition beside the original Fire and Jump.
 */
export function retryKeyAction(code,bindings) {
  const pressed=action=>bindingPressed(new Set([code]),bindings,action);
  if(code==='Escape')return 'ignore';
  if(pressed('turnLeft')||pressed('left'))return 'yes';
  if(pressed('turnRight')||pressed('right'))return 'no';
  if(pressed('attack')||pressed('jump')||code==='Enter'||code==='NumpadEnter')return 'confirm';
  return null;
}

export class OriginalRetry {
  constructor(element,onChoose) {
    this.element=element;this.onChoose=onChoose;
    this.canvas=element.querySelector('canvas');this.lastDraw=null;
    this.canvas.addEventListener('contextlost',()=>this.invalidate());
    this.canvas.addEventListener('contextrestored',()=>this.invalidate());
    element.ownerDocument?.fonts?.addEventListener('loadingdone',()=>this.invalidate());
    // Port additions: click or tap a button to choose it; keyboard or
    // controller focus selects it. Pointer hover does not: in the original
    // any sideways mouse movement sets the choice (see input()).
    this.buttons=[...element.querySelectorAll('button[data-retry]')];
    for(const button of this.buttons) {
      const value=Number(button.dataset.retry);
      button.onclick=()=>{this.select(value);this.confirm();};
      button.onfocus=()=>this.select(value);
    }
    this.phase='hidden';this.selection=RETRY_YES;
    this.ready=this.load();
  }
  async load() {
    const response=await fetch('assets/retry/manifest.json');
    if(!response.ok)throw new Error('Het originele scherm "Opnieuw proberen?" ontbreekt. Voer tools/import_retry.py uit.');
    this.manifest=await response.json();
    [this.background,this.logo,this.button]=await Promise.all(['assets/debriefing/background.png','assets/debriefing/logo.png','assets/retry/button.png'].map(async src=>{const image=new Image();image.src=src;await image.decode();return image;}));
    const t=this.manifest.text;
    for(const button of this.buttons)button.setAttribute('aria-label',Number(button.dataset.retry)===RETRY_YES?t.YesText:t.NoText);
  }
  get visible(){return this.phase!=='hidden';}
  show() {
    this.selection=RETRY_YES;this.phase='shown';this.invalidate();
    this.element.hidden=false;
    const t=this.manifest.text;
    this.element.querySelector('[role="status"]').textContent=`${t.RetryTitle} ${t.RetryText}`;
    this.buttons.find(b=>Number(b.dataset.retry)===RETRY_YES).focus({preventScroll:true});
    this.render();
  }
  hide(){this.element.hidden=true;this.phase='hidden';this.invalidate();}
  select(value) {
    if(this.phase!=='shown')return;
    this.selection=value===RETRY_NO?RETRY_NO:RETRY_YES;this.render();
  }
  /** Fire/Jump: the choice is final and applies on the next frame. */
  confirm() {
    if(this.phase!=='shown')return false;
    this.phase='done';return true;
  }
  /**
   * Held input for this frame (0x48ace0): x < 0 selects Ja, x > 0 Nee (the
   * movement vector, or mouse x * 0.125 * sensitivity); Fire or Jump confirms.
   */
  input({x=0,confirm=false}={}) {
    if(this.phase!=='shown')return;
    const selection=retrySelection(this.selection,x);
    if(selection!==this.selection)this.select(selection);
    if(confirm)this.confirm();
  }
  /** Handle a key; returns true when the screen consumed it. */
  key(code,bindings) {
    const action=retryKeyAction(code,bindings);
    if(action==='yes'||action==='no')this.select(action==='yes'?RETRY_YES:RETRY_NO);
    else if(action==='confirm')this.confirm();
    return this.visible;
  }
  update() {
    if(!this.visible)return;
    if(this.phase==='done'){const selection=this.selection;this.hide();this.onChoose(selection===RETRY_YES);return;}
    this.render();
  }
  invalidate(){this.lastDraw=null;}
  render() {
    if(!this.visible||!this.background)return;
    const canvas=this.canvas,rect=canvas.getBoundingClientRect(),dpr=window.devicePixelRatio||1;
    const width=Math.max(1,Math.round(rect.width*dpr)),height=Math.max(1,Math.round(rect.height*dpr));
    if(canvas.width!==width||canvas.height!==height){canvas.width=width;canvas.height=height;this.invalidate();}
    const draw=[width,height,rect.width,rect.height,dpr,this.selection,this.manifest];
    if(this.lastDraw&&draw.every((value,index)=>Object.is(value,this.lastDraw[index])))return;
    this.invalidate();
    const {layout:l,text:t}=this.manifest,n=key=>Number(l[key]),c=canvas.getContext('2d');
    // As on the debriefing screen: authored positions spread over the window,
    // letters and sprites scale without stretching.
    const portrait=rect.height>rect.width;
    const scale=portrait?Math.min(rect.width/400,rect.height/520):Math.min(rect.width/640,rect.height/480);
    const px=x=>x*rect.width/640,py=y=>y*rect.height/480;
    c.setTransform(1,0,0,1,0,0);c.clearRect(0,0,width,height);
    c.setTransform(dpr,0,0,dpr,0,0);
    // The opaque LoadingBG hides the 3D scene (Retry.ini ImageBgnd).
    c.drawImage(this.background,n('ImageBgnd.BaseX'),n('ImageBgnd.BaseY'),n('ImageBgnd.BaseWidth'),n('ImageBgnd.BaseHeight'),0,0,rect.width,rect.height);
    c.drawImage(this.logo,n('ImageLogo.BaseX'),n('ImageLogo.BaseY'),n('ImageLogo.BaseWidth'),n('ImageLogo.BaseHeight'),px(n('ImageLogo.X')),py(n('ImageLogo.Y')),n('ImageLogo.Width')*scale,n('ImageLogo.Height')*scale);
    c.fillStyle='white';c.shadowColor='#001b4d';c.shadowBlur=2;
    const label=(text,x,y,size,align,baseline='top')=>{c.font=`${size*scale}px "Comic Sans MS", "Comic Neue", cursive`;c.textAlign=align;c.textBaseline=baseline;c.fillText(text,x,y);};
    label(t.RetryTitle,rect.width/2,py(n('Title.Y')),n('Title.Size'),'center');
    label(t.RetryText,rect.width/2,rect.height/2,n('Retry.Size'),'center','middle');
    // Keep both buttons on screen in narrow windows; the Nee button stays at the right edge.
    const buttonScale=Math.min(scale,rect.width/300),bw=n('ImageYesBtn.Width')*buttonScale,bh=n('ImageYesBtn.Height')*buttonScale;
    const top=Math.min(py(n('ImageYesBtn.Y')),rect.height-bh);
    const noX=Math.min(px(n('ImageNoBtn.X')),rect.width-bw),yesX=Math.min(px(n('ImageYesBtn.X')),noX-bw);
    for(const [prefix,value,x,text,textKey] of [['ImageYesBtn',RETRY_YES,yesX,t.YesText,'YesBtn'],['ImageNoBtn',RETRY_NO,noX,t.NoText,'NoBtn']]) {
      // 0x48aa60: the selected button samples the next 64-pixel row.
      const sy=n(prefix+'.BaseY')+(this.selection===value?n(prefix+'.BaseHeight'):0);
      c.shadowBlur=0;
      c.drawImage(this.button,n(prefix+'.BaseX'),sy,n(prefix+'.BaseWidth'),n(prefix+'.BaseHeight'),x,top,bw,bh);
      c.shadowBlur=2;
      label(text,x+(n(textKey+'.X')-n(prefix+'.X'))*buttonScale,top+(n(textKey+'.Y')-n(prefix+'.Y'))*buttonScale,n(textKey+'.Size')*buttonScale/scale,'left');
      const button=this.buttons.find(b=>Number(b.dataset.retry)===value);
      Object.assign(button.style,{left:`${x}px`,top:`${top}px`,width:`${bw}px`,height:`${bh}px`});
    }
    this.lastDraw=draw;
  }
}

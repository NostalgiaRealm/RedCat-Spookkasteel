const BUTTONS = [0,1,2,3,4,5,7,9,12,13,14,15];
const DIRECTIONS = ['up','down','left','right'];
const idleInput = () => ({forward:0,right:0,jump:false,descend:false,walk:false,attack:false,use:false});
const idleActions = () => ({confirm:false,cancel:false,pause:false,camera:false,up:false,down:false,left:false,right:false});
const idleFrame = () => ({input:idleInput(),look:{x:0,y:0},scroll:0,actions:idleActions(),active:false,disconnected:false});
const clamp = (value,min,max) => Math.max(min,Math.min(max,value));
const axis = value => Number.isFinite(value) ? clamp(value,-1,1) : 0;
const pressed = button => button?.pressed === true || (typeof button === 'number' ? button : button?.value) >= .5;

function stick(axes,index,deadzone) {
  const x=axis(axes?.[index]), y=axis(axes?.[index+1]), length=Math.hypot(x,y);
  if (length <= deadzone) return {x:0,y:0};
  const scale=(Math.min(1,length)-deadzone)/((1-deadzone)*length);
  return {x:x*scale,y:y*scale};
}

function newState() {
  return {previous:[],blockedButtons:new Set(),blockedMove:false,blockedLook:false,nav:{}};
}

/**
 * Poll standard-mapped controllers without owning any DOM events.
 * dt is in seconds; look is a normalized stick value, not a frame delta.
 * Any context except "gameplay" uses menu controls. Distinct menu context names
 * suppress held controls when switching panels. Connection getters describe
 * the last poll; a neutral connection does not select a controller.
 */
export class GamepadInput {
  constructor({getGamepads,deadzone=.18,navigationThreshold=.5,repeatDelay=.35,repeatInterval=.12}={}) {
    this._getGamepads=getGamepads ?? (() => globalThis.navigator?.getGamepads?.() ?? null);
    this.deadzone=Number.isFinite(deadzone) ? clamp(deadzone,0,.95) : .18;
    this.navigationThreshold=Number.isFinite(navigationThreshold) ? clamp(navigationThreshold,.1,1) : .5;
    this.repeatDelay=Number.isFinite(repeatDelay) ? Math.max(.05,repeatDelay) : .35;
    this.repeatInterval=Number.isFinite(repeatInterval) ? Math.max(.025,repeatInterval) : .12;
    this._states=new Map();
    this._pads=[];
    this._selectedKey=null;
    this._context=null;
    this._enabled=null;
    this._resetPending=false;
    this._available=false;
  }

  get connected() { return this._pads.length > 0; }
  get connectedCount() { return this._pads.length; }
  get id() { return this._displayPad()?.id ?? null; }
  get index() { return this._displayPad()?.index ?? null; }
  get status() {
    return {connected:this.connected,count:this.connectedCount,id:this.id,index:this.index,
      activeIndex:this._pads.find(pad => pad.key === this._selectedKey)?.index ?? null,available:this._available};
  }

  _displayPad() { return this._pads.find(pad => pad.key === this._selectedKey) ?? this._pads[0]; }

  /** The next poll blocks held buttons independently and each stick until neutral. */
  reset() {
    this._resetPending=true;
    for (const state of this._states.values()) state.nav={};
  }

  _readPads() {
    try {
      const gamepads=this._getGamepads();
      this._available=gamepads != null;
      return Array.from(gamepads ?? []).flatMap((pad,slot) => {
        if (!pad || pad.connected === false || pad.mapping !== 'standard') return [];
        const index=Number.isInteger(pad.index) && pad.index >= 0 ? pad.index : slot;
        const id=typeof pad.id === 'string' ? pad.id : 'Gamepad';
        return [{key:JSON.stringify([index,id]),index,id,buttons:BUTTONS.map(button => pressed(pad.buttons?.[button])),
          move:stick(pad.axes,0,this.deadzone),look:stick(pad.axes,2,this.deadzone)}];
      });
    } catch {
      // Unsupported APIs and browser Permissions Policy/SecurityError failures
      // have the same safe input behavior as an unavailable controller.
      this._available=false;
      return [];
    }
  }

  _navigation(state,buttons,move,dt) {
    const threshold=this.navigationThreshold;
    const up=buttons[12] || move.y <= -threshold, down=buttons[13] || move.y >= threshold;
    const left=buttons[14] || move.x <= -threshold, right=buttons[15] || move.x >= threshold;
    const held={up:up&&!down,down:down&&!up,left:left&&!right,right:right&&!left};
    const actions={};
    for (const direction of DIRECTIONS) {
      const previous=state.nav[direction];
      actions[direction]=false;
      if (!held[direction]) {
        delete state.nav[direction];
      } else if (previous === undefined) {
        actions[direction]=true;
        state.nav[direction]=this.repeatDelay;
      } else {
        const remaining=previous-dt;
        actions[direction]=remaining <= 1e-9;
        // Preserve normal repeat cadence, but never queue a burst after a stall.
        state.nav[direction]=remaining <= 1e-9 ? this.repeatInterval+(remaining%this.repeatInterval) : remaining;
      }
    }
    return actions;
  }

  poll(dt=0,{enabled=true,context='gameplay'}={}) {
    const frame=idleFrame();
    const pads=this._readPads();
    const keys=new Set(pads.map(pad => pad.key));
    const disconnected=this._selectedKey !== null && !keys.has(this._selectedKey);
    if (disconnected) this._selectedKey=null;
    this._pads=pads;
    for (const key of this._states.keys()) if (!keys.has(key)) this._states.delete(key);

    const suppress=this._resetPending || !enabled ||
      (this._context !== null && this._context !== context) ||
      (this._enabled !== null && this._enabled !== !!enabled);
    this._resetPending=false;
    this._context=context;
    this._enabled=!!enabled;
    const menu=context !== 'gameplay';
    const elapsed=Number.isFinite(dt) ? clamp(dt,0,.25) : 0;
    const samples=pads.map(pad => {
      const state=this._states.get(pad.key) ?? newState();
      this._states.set(pad.key,state);
      const rawButtons=[];
      BUTTONS.forEach((button,i) => { rawButtons[button]=pad.buttons[i]; });
      const moving=pad.move.x !== 0 || pad.move.y !== 0;
      const looking=pad.look.x !== 0 || pad.look.y !== 0;
      if (suppress) {
        for (const button of BUTTONS) if (rawButtons[button]) state.blockedButtons.add(button);
        state.blockedMove ||= moving;
        state.blockedLook ||= looking;
        state.nav={};
      }
      if (!moving) state.blockedMove=false;
      if (!looking) state.blockedLook=false;
      const buttons=[], edges=[];
      for (const button of BUTTONS) {
        if (!rawButtons[button]) state.blockedButtons.delete(button);
        buttons[button]=rawButtons[button] && !state.blockedButtons.has(button);
        edges[button]=buttons[button] && !state.previous[button];
      }
      state.previous=buttons;
      const move=state.blockedMove ? {x:0,y:0} : pad.move;
      const look=state.blockedLook ? {x:0,y:0} : pad.look;
      const active=BUTTONS.some(button => buttons[button]) || move.x !== 0 || move.y !== 0 || look.x !== 0 || look.y !== 0;
      const navigation=menu ? this._navigation(state,buttons,move,elapsed) : {};
      if (!menu) state.nav={};
      return {pad,buttons,edges,move,look,active,navigation};
    });

    // Let the host pause before another controller can take over a lost pad.
    frame.disconnected=disconnected;
    if (!enabled || disconnected) return frame;
    const selected=samples.find(sample => sample.pad.key === this._selectedKey);
    const sample=(selected?.active ? selected : samples.find(candidate => candidate.active)) ?? selected;
    if (!sample) return frame;
    if (sample.active) this._selectedKey=sample.pad.key;
    frame.active=sample.active;
    const {buttons,edges,move,look}=sample;
    frame.actions.pause=!!edges[9];
    if (menu) {
      frame.scroll=look.y;
      frame.actions.confirm=!!edges[0];
      frame.actions.cancel=!!edges[1];
      Object.assign(frame.actions,sample.navigation);
    } else {
      frame.input={forward:move.y === 0 ? 0 : -move.y,right:move.x,jump:!!buttons[0],descend:!!buttons[1],
        walk:!!buttons[4],attack:!!(buttons[7] || buttons[5]),use:!!buttons[2]};
      frame.look={...look};
      frame.actions.camera=!!edges[3];
    }
    return frame;
  }
}

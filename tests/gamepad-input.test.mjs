import test from 'node:test';
import assert from 'node:assert/strict';
import {GamepadInput} from '../src/gamepad-input.js';

const idle={forward:0,right:0,jump:false,descend:false,walk:false,attack:false,use:false};
function pad(index=0,id=`Controller ${index}`) {
  return {index,id,mapping:'standard',connected:true,axes:[0,0,0,0],
    buttons:Array.from({length:17},() => ({pressed:false,value:0}))};
}
function press(gamepad,index,value=1) {
  gamepad.buttons[index]={pressed:value >= .5,value};
}
function fixture(options={}) {
  const gamepad=pad();
  const pads=[gamepad];
  const input=new GamepadInput({getGamepads:() => pads,...options});
  return {gamepad,pads,input};
}
function near(actual,expected) { assert.ok(Math.abs(actual-expected)<1e-9,`${actual} != ${expected}`); }
function advance(input,seconds,options) {
  const results=[];
  for (let remaining=seconds; remaining>1e-9; remaining-=1/60) results.push(input.poll(Math.min(remaining,1/60),options));
  return results;
}

test('radial deadzone removes drift and scales analog movement and look to a circular limit', () => {
  const {gamepad,input}=fixture();
  gamepad.axes=[.08,-.1,-.1,.08];
  let frame=input.poll(1/60);
  assert.deepEqual(frame.input,idle);
  assert.deepEqual(frame.look,{x:0,y:0});
  assert.equal(frame.active,false);
  assert.equal(input.status.activeIndex,null);
  gamepad.axes=[.59,-.59,.59,0];
  frame=input.poll(1/60);
  const magnitude=(Math.hypot(.59,.59)-.18)/.82;
  near(Math.hypot(frame.input.forward,frame.input.right),magnitude);
  near(frame.input.forward,frame.input.right);
  near(frame.look.x,.5);
  gamepad.axes=[1,-1,-1,1];
  frame=input.poll(1/60);
  near(Math.hypot(frame.input.forward,frame.input.right),1);
  near(Math.hypot(frame.look.x,frame.look.y),1);
  assert.ok(frame.input.forward>0 && frame.input.right>0 && frame.look.x<0 && frame.look.y>0);
  const later=input.poll(.2);
  assert.deepEqual(later.look,frame.look,'look rate is independent of frame duration');
});

test('standard gameplay mapping preserves independent held actions and button edges', () => {
  const {gamepad,input}=fixture();
  for (const button of [0,1,2,3,4,7,9]) press(gamepad,button);
  let frame=input.poll(1/60);
  assert.deepEqual(frame.input,{...idle,jump:true,descend:true,walk:true,attack:true,use:true});
  assert.equal(frame.actions.camera,true);
  assert.equal(frame.actions.pause,true);
  assert.equal(frame.actions.confirm,false);
  assert.equal(frame.actions.cancel,false);
  frame=input.poll(1/60);
  assert.equal(frame.input.jump,true);
  assert.equal(frame.input.use,true,'use remains held for the existing cutscene skip timer');
  assert.equal(frame.actions.camera,false);
  assert.equal(frame.actions.pause,false);
  press(gamepad,7,0);
  press(gamepad,5);
  assert.equal(input.poll(1/60).input.attack,true,'right shoulder is an alternate fire binding');
  press(gamepad,5,0);
  assert.equal(input.poll(1/60).input.attack,false);
  press(gamepad,7,.49);
  assert.equal(input.poll(1/60).input.attack,false);
  press(gamepad,7,.5);
  assert.equal(input.poll(1/60).input.attack,true);
  press(gamepad,3,0); press(gamepad,9,0);
  input.poll(1/60);
  press(gamepad,3); press(gamepad,9);
  frame=input.poll(1/60);
  assert.equal(frame.actions.camera,true);
  assert.equal(frame.actions.pause,true);
});

test('first meaningful press is delivered while neutral connection only updates status', () => {
  const {gamepad,input}=fixture();
  let frame=input.poll(1/60,{context:'menu'});
  assert.equal(frame.active,false);
  assert.deepEqual(input.status,{connected:true,count:1,id:gamepad.id,index:0,activeIndex:null,available:true});
  press(gamepad,0);
  frame=input.poll(1/60,{context:'menu'});
  assert.equal(frame.actions.confirm,true);
  assert.equal(frame.active,true);
  assert.equal(input.status.activeIndex,0);
  const fresh=fixture();
  press(fresh.gamepad,0);
  assert.equal(fresh.input.poll(1/60,{context:'menu'}).actions.confirm,true,'no initial neutral frame is required');
});

test('menu confirm and cancel fire once, with no gameplay movement or camera output', () => {
  const {gamepad,input}=fixture();
  gamepad.axes=[1,-1,1,-1];
  for (const button of [0,1,2,3,4,7,9]) press(gamepad,button);
  let frame=input.poll(1/60,{context:'menu:pause'});
  assert.deepEqual(frame.input,idle);
  assert.deepEqual(frame.look,{x:0,y:0});
  assert.equal(frame.actions.confirm,true);
  assert.equal(frame.actions.cancel,true);
  assert.equal(frame.actions.pause,true);
  assert.equal(frame.actions.camera,false);
  for (const held of advance(input,1,{context:'menu:pause'})) {
    assert.equal(held.actions.confirm,false);
    assert.equal(held.actions.cancel,false);
    assert.equal(held.actions.pause,false);
  }
});

test('D-pad and left stick navigate with delayed repeat, immediate direction changes, and neutral release', () => {
  const {gamepad,input}=fixture();
  const menu={context:'menu:settings'};
  press(gamepad,13);
  assert.equal(input.poll(1/60,menu).actions.down,true);
  assert.equal(advance(input,.3,menu).some(frame => frame.actions.down),false);
  assert.equal(advance(input,.05,menu).filter(frame => frame.actions.down).length,1);
  assert.equal(advance(input,.24,menu).filter(frame => frame.actions.down).length,2);
  press(gamepad,13,0);
  gamepad.axes[0]=-1;
  let frame=input.poll(1/60,menu);
  assert.equal(frame.actions.down,false);
  assert.equal(frame.actions.left,true);
  gamepad.axes[0]=1;
  assert.equal(input.poll(1/60,menu).actions.right,true);
  gamepad.axes[0]=0;
  assert.equal(input.poll(1/60,menu).actions.right,false);
  gamepad.axes[0]=1;
  assert.equal(input.poll(1/60,menu).actions.right,true);
  press(gamepad,14);
  frame=input.poll(1/60,menu);
  assert.equal(frame.actions.left,false);
  assert.equal(frame.actions.right,false,'opposite inputs cancel');
});

test('navigation caps stalled frames without queuing repeat bursts', () => {
  const {gamepad,input}=fixture();
  const menu={context:'menu'};
  press(gamepad,12);
  assert.equal(input.poll(1/60,menu).actions.up,true);
  assert.equal(input.poll(30,menu).actions.up,false,'elapsed time caps at a quarter second');
  assert.equal(input.poll(.1,menu).actions.up,true);
  assert.equal(input.poll(0,menu).actions.up,false);
  assert.equal(input.poll(NaN,menu).actions.up,false);
  assert.equal(input.poll(-1,menu).actions.up,false);
});

test('menu transitions suppress held confirm, cancel, and sticks until independently released', () => {
  const {gamepad,input}=fixture();
  press(gamepad,0); press(gamepad,1);
  gamepad.axes=[1,0,0,-1];
  assert.equal(input.poll(1/60,{context:'menu:title'}).actions.confirm,true);
  let frame=input.poll(1/60,{context:'menu:settings'});
  assert.deepEqual(frame.input,idle);
  assert.equal(frame.actions.confirm,false);
  assert.equal(frame.actions.cancel,false);
  assert.equal(frame.actions.right,false);
  frame=input.poll(1/60,{context:'gameplay'});
  assert.deepEqual(frame.input,idle,'title confirmation must not become a gameplay jump');
  assert.deepEqual(frame.look,{x:0,y:0});
  press(gamepad,0,0);
  input.poll(1/60);
  press(gamepad,0);
  frame=input.poll(1/60);
  assert.equal(frame.input.jump,true,'one button is usable while the other stays held and blocked');
  assert.equal(frame.input.descend,false);
  assert.equal(frame.input.right,0);
  gamepad.axes[0]=0;
  input.poll(1/60);
  gamepad.axes[0]=1;
  frame=input.poll(1/60);
  assert.equal(frame.input.right,1);
  assert.deepEqual(frame.look,{x:0,y:0},'look must separately return to neutral');
});

test('reset and disable suppress held Start and actions until release without blocking other buttons', () => {
  const {gamepad,input}=fixture();
  press(gamepad,9); press(gamepad,0);
  assert.equal(input.poll(1/60).actions.pause,true);
  input.reset();
  let frame=input.poll(1/60);
  assert.equal(frame.actions.pause,false);
  assert.equal(frame.input.jump,false);
  press(gamepad,2);
  assert.equal(input.poll(1/60).input.use,true,'reset does not suppress newly pressed independent buttons');
  frame=input.poll(1/60,{enabled:false});
  assert.deepEqual(frame.input,idle);
  assert.equal(frame.active,false);
  frame=input.poll(1/60,{enabled:true});
  assert.deepEqual(frame.input,idle);
  press(gamepad,9,0);
  input.poll(1/60);
  press(gamepad,9);
  assert.equal(input.poll(1/60).actions.pause,true);
});

test('sparse multiple controllers select by meaningful input and only selected loss signals disconnect', () => {
  const first=pad(1), second=pad(4);
  const pads=[null,first,null,null,second];
  const input=new GamepadInput({getGamepads:() => pads});
  input.poll(1/60);
  assert.equal(input.connectedCount,2);
  assert.equal(input.status.activeIndex,null);
  pads[1]=null;
  assert.equal(input.poll(1/60).disconnected,false,'unused connection loss does not interrupt play');
  press(second,0);
  assert.equal(input.poll(1/60).input.jump,true);
  assert.equal(input.index,4);
  assert.equal(input.id,second.id);
  pads[1]=first;
  first.axes[1]=-1;
  assert.equal(input.poll(1/60).input.forward,0,'the active held pad retains ownership');
  pads[4]=null;
  let frame=input.poll(1/60);
  assert.equal(frame.disconnected,true);
  assert.deepEqual(frame.input,idle,'another controller cannot move on the disconnect frame');
  assert.equal(frame.actions.pause,false,'disconnect is a separate signal from a Start button edge');
  frame=input.poll(1/60);
  assert.equal(frame.disconnected,false);
  assert.equal(frame.input.forward,1);
  assert.equal(input.index,1);
});

test('an idle selected controller can yield to another controller without repeating its held action edges', () => {
  const first=pad(0), second=pad(2);
  const input=new GamepadInput({getGamepads:() => [first,null,second]});
  press(first,0);
  input.poll(1/60,{context:'menu'});
  press(second,0);
  assert.equal(input.poll(1/60,{context:'menu'}).actions.confirm,false);
  press(first,0,0);
  assert.equal(input.poll(1/60,{context:'menu'}).actions.confirm,false,'a previously held secondary pad cannot confirm on takeover');
  assert.equal(input.index,2);
  press(second,0,0);
  input.poll(1/60,{context:'menu'});
  press(second,0);
  assert.equal(input.poll(1/60,{context:'menu'}).actions.confirm,true);
});

test('disconnect, replacement, and reconnect clear suppression without creating permanent lockout', () => {
  const {gamepad,pads,input}=fixture();
  press(gamepad,9);
  input.poll(1/60);
  input.reset();
  assert.equal(input.poll(1/60).actions.pause,false);
  pads[0]=null;
  assert.equal(input.poll(1/60).disconnected,true);
  input.reset();
  assert.equal(input.poll(1/60).disconnected,false);
  pads[0]=gamepad;
  assert.equal(input.poll(1/60).actions.pause,true);
  const replacement=pad(0,'Replacement');
  press(replacement,0);
  pads[0]=replacement;
  assert.equal(input.poll(1/60).disconnected,true,'a different id at the same index is a lost controller');
  assert.equal(input.poll(1/60).input.jump,true);
});

test('nonstandard mappings, explicitly disconnected pads, and unbound buttons are ignored', () => {
  const {gamepad,pads,input}=fixture();
  gamepad.mapping='';
  press(gamepad,0);
  assert.deepEqual(input.poll(1/60).input,idle);
  assert.equal(input.connected,false);
  gamepad.mapping='standard';
  gamepad.connected=false;
  assert.equal(input.poll(1/60).active,false);
  gamepad.connected=true;
  press(gamepad,0,0);
  for (const button of [6,8,10,11,16]) press(gamepad,button);
  assert.equal(input.poll(1/60).active,false);
  assert.equal(input.status.activeIndex,null);
  pads.length=0;
  assert.equal(input.poll(1/60).disconnected,false);
  assert.equal(input.id,null);
  assert.equal(input.index,null);
});

test('unavailable or blocked API is safe, zeroes active input, and recovers on a later poll', () => {
  for (const getGamepads of [() => null,() => undefined,() => { throw new Error('SecurityError'); },false]) {
    const input=new GamepadInput({getGamepads});
    input.reset();
    const frame=input.poll(1/60);
    assert.deepEqual(frame.input,idle);
    assert.equal(frame.active,false);
    assert.equal(frame.disconnected,false);
    assert.equal(input.status.available,false);
  }
  let blocked=false;
  const gamepad=pad();
  gamepad.axes[1]=-1;
  const input=new GamepadInput({getGamepads:() => {
    if (blocked) throw new Error('SecurityError');
    return [gamepad];
  }});
  assert.equal(input.poll(1/60).input.forward,1);
  blocked=true;
  let frame=input.poll(1/60);
  assert.equal(frame.disconnected,true);
  assert.deepEqual(frame.input,idle);
  assert.equal(input.poll(1/60).disconnected,false);
  blocked=false;
  frame=input.poll(1/60);
  assert.equal(frame.input.forward,1);
  assert.equal(input.status.available,true);
});

test('missing values, nonfinite axes, and caller mutation do not contaminate later frames', () => {
  const {gamepad,input}=fixture();
  gamepad.axes=[NaN,Infinity,undefined,-Infinity];
  gamepad.buttons=[];
  assert.deepEqual(input.poll(1/60).input,idle);
  gamepad.axes=[0,-1,1,0];
  let frame=input.poll(1/60);
  frame.input.forward=99;
  frame.look.x=99;
  frame.actions.pause=true;
  const status=input.status;
  status.connected=false;
  frame=input.poll(1/60);
  assert.equal(frame.input.forward,1);
  assert.equal(frame.look.x,1);
  assert.equal(frame.actions.pause,false);
  assert.equal(input.connected,true);
});

test('right stick scrolls menus without changing the gameplay camera or movement',()=>{
  const {gamepad,input}=fixture();gamepad.axes[3]=.59;
  const frame=input.poll(1/60,{context:'menu:help'});
  near(frame.scroll,.5);assert.deepEqual(frame.look,{x:0,y:0});assert.deepEqual(frame.input,idle);
  input.reset();assert.equal(input.poll(1/60,{context:'menu:help'}).scroll,0);
  gamepad.axes[3]=0;input.poll(1/60,{context:'menu:help'});gamepad.axes[3]=-1;
  assert.equal(input.poll(1/60,{context:'menu:help'}).scroll,-1);
});

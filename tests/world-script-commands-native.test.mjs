import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';
import {targetableObject} from '../src/targeting.js';

const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
const fixture=(kind='controller')=>{
  const level={id:'lvl00a',spawn:{position:[0,0,0]},entities:[
    {classname:'%Model%','%name%':'platform',Model:'1'},
    {classname:kind==='button'?'ButtonModel':'ModelController','%name%':'mover',DaviName:'mover',Model:'platform',RepeatMode:'2',IsInitiallyEnabled:'1'},
  ]};
  const clip={model:1,origin:[0,0,0],startTime:0,endTime:2,playbackEndTime:3,duration:2,paths:[{translation:{times:[0,2],values:[0,0,0,0,100,0],interpolation:0}}],events:[{time:0,label:'start'},{time:1,label:'middle'},{time:2,label:'end'}]};
  const game=new Gameplay(level,{deferInit:true}),host=new ScriptHost(game,{version:27},{motions:{motions:[clip]}}),object=game.find('mover')[0],player=host.players.get(object.id);
  return {game,host,object,player,command:(verb,t)=>host.callMethod({id:object.id},verb,[t])};
};

test('MoveTo retains the current endpoint and overrides authored pingpong playback',()=>{
  const {host,object,player,command}=fixture();player.seek(2);player.finished=true;
  command('MoveTo',.5);assert.equal(player.time,2);host.update(.25);assert.equal(player.time,1.75);
  host.update(3);assert.equal(player.time,.5);assert.equal(player.playing,false);assert.equal(object.enabled,true);
  host.update(5);assert.equal(player.time,.5);
});

test('SetTo is a deferred enabled-controller operation, replaces a loop, and dispatches native forward labels',()=>{
  const {game,host,object,player,command}=fixture(),seen=[];player.onEvent=e=>seen.push(e.label);
  host.startMotion(object);game.command(object,'disable');command('SetTo',2);
  host.update(.1);assert.equal(player.time,0);assert.deepEqual(seen,[]);
  game.command(object,'enable');host.update(.1);
  assert.equal(player.time,2);assert.equal(player.loop,false);assert.equal(player.finished,true);
  assert.deepEqual(seen,['start','middle'],'native SetTo event range includes the start and excludes the target');
  host.update(10);assert.equal(player.time,2);assert.equal(object.enabled,true);
  command('SetTo',0);host.update(.1);assert.equal(player.time,0);assert.deepEqual(seen,['start','middle']);
});

test('pending target commands and completed target mode survive saves and enable toggles',()=>{
  const a=fixture();a.player.seek(1.5);a.game.command(a.object,'disable');a.command('MoveTo',.5);
  const b=fixture();b.object.enabled=false;b.host.restore(JSON.parse(JSON.stringify(a.host.snapshot())));
  b.host.update(1);assert.equal(b.player.time,1.5);b.game.command(b.object,'enable');b.host.update(.25);assert.equal(b.player.time,1.25);
  b.host.update(1);assert.equal(b.player.time,.5);b.game.command(b.object,'disable');b.game.command(b.object,'enable');b.host.update(1);assert.equal(b.player.time,.5);
  const c=fixture();c.host.restore(JSON.parse(JSON.stringify(b.host.snapshot())));c.host.update(1);assert.equal(c.player.time,.5);
});

test('SetTo retains motion collision guards and does not replay a label when blocked',()=>{
  const {host,player,command}=fixture(),seen=[];let blocked=true;
  player.onEvent=e=>seen.push(e.label);player.beforeAdvance=(_from,to)=>!(blocked&&to>1);
  command('SetTo',2);host.update(.1);assert.equal(player.time,0);assert.deepEqual(seen,['start','middle']);
  blocked=false;host.update(.1);assert.equal(player.time,2);assert.deepEqual(seen,['start','middle']);
});

test('a label may replace SetTo without a stale target overriding its new command',()=>{
  const {host,player,command}=fixture();let replaced=false;player.onEvent=e=>{if(e.label==='middle'&&!replaced){replaced=true;command('MoveTo',1);}};
  command('SetTo',2);host.update(.1);assert.equal(player.time,0);host.update(.25);assert.equal(player.time,.25);
});

test('controller Reset discards target mode; target commands clamp to authored motion rather than event tail',()=>{
  const {host,object,player,command}=fixture();command('SetTo',99);host.update(.1);assert.equal(player.time,2);
  command('Reset');assert.equal(player.controllerTarget,undefined);assert.equal(player.time,0);
  host.startMotion(object);host.update(2.5);assert.equal(player.time,1.5);assert.equal(player.loop,'pingpong');
});

test('explicit Trigger is an enabled-independent Enter/Leave pulse with positive use limits',()=>{
  const game=new Gameplay({id:'lvl00a',entities:[{classname:'Trigger','%name%':'pulse',IsInitiallyEnabled:'0',MinTriggerTimes:'2',MaxTriggerTimes:'2'}]},{deferInit:true});
  const object=game.objects[0],seen=[];game.runEvent=(_object,event)=>seen.push(event);
  game.trigger(object);assert.equal(object.triggerCount,0);
  game.command(object,'trigger');assert.equal(object.triggerCount,1);assert.deepEqual(seen,[]);
  game.command(object,'trigger');assert.equal(object.triggerCount,2);assert.deepEqual(seen,['CommandOnEnter','CommandOnLeave']);
  game.command(object,'trigger');assert.equal(object.triggerCount,2);assert.equal(object.inside,false);
});

test('zero limits mean unlimited for triggers, buttons and shootable-button selection',()=>{
  const game=new Gameplay({id:'lvl00a',entities:[{classname:'Trigger','%name%':'pulse',MaxTriggerTimes:'0'},{classname:'ButtonModel','%name%':'button',MaxSwitchTimes:'0',ShootToSwitch:'1'}]},{deferInit:true});
  const [trigger,button]=game.objects;
  for(let i=0;i<4;i++){game.command(trigger,'trigger');game.switchButton(button);}
  assert.equal(trigger.triggerCount,4);assert.equal(button.switchCount,4);assert.equal(targetableObject(button),true);
  button.entity.MaxSwitchTimes='4';assert.equal(targetableObject(button),false);
});

test('original Caves altar/button counters and four-pulse gate callbacks retain their authored thresholds',()=>{
  const game=new Gameplay(json('data/levels/lvl03a/level.json'),{deferInit:true});
  const host=new ScriptHost(game,json('data/davi/lvl03a.json'),{motions:json('data/motions/lvl03a.json')});host.initialize();
  const object=name=>game.find(name)[0],unlock=object('unlock_max');
  // Isolate the aggregate gate from the introduction that normally locks it.
  game.command(object('door_left_to_end'),'lock');game.command(object('door_right_to_end'),'lock');
  for(const group of [['rots_altaar_but01','rots_altaar_but02','rots_altaar_but03'],['wat_but03','wat_but04','wat_but05'],['air_but01','air_but02','air_but03'],['fire_but01','fire_but02','fire_but03']]){
    for(const name of group){game.switchButton(object(name),true);host.update(.01);host.update(.01);}
  }
  // Each third altar's authored beam MotionCommand contributes one unlock.
  // Trigger those real pulses to test the compiled aggregate gate separately
  // from the long cinematic and moving-room timelines.
  assert.equal(object('door_left_to_end').locked,true);
  for(let i=0;i<3;i++)game.command(unlock,'trigger');
  assert.equal(object('door_left_to_end').locked,true);
  game.command(unlock,'trigger');
  assert.equal(object('door_left_to_end').locked,false);assert.equal(object('door_right_to_end').locked,false);
  for(const name of ['rots_trigger03','wat_trigger03','air_trigger03','fire_trigger03'])assert.equal(object(name).triggerCount,3,name);
  assert.equal(host.vm.lastError,null);
});

test('rapid presses cannot cancel the Castle bookcase endpoint callback, including after a save',()=>{
  const level=json('data/levels/lvl01a/level.json'),program=json('data/davi/lvl01a.json'),motions=json('data/motions/lvl01a.json');
  const boot=save=>{const game=new Gameplay(level,{deferInit:true,save}),host=new ScriptHost(game,program,{motions});host.initialize(save?.scripts);return {game,host,button:game.find('knopdisc01')[0],disc:game.find('disc')[0]};};
  let scene=boot();scene.game.switchButton(scene.button,true);scene.host.update(.01);scene.host.update(.01);scene.host.update(.2);
  for(let i=0;i<4;i++)scene.game.switchButton(scene.button,false);
  assert.equal(scene.button.switchedOn,true);assert.equal(scene.button.switchCount,1);assert.equal(scene.disc.open,false);
  assert.equal(scene.button.pendingButtonSwitch,false);
  scene=boot(JSON.parse(JSON.stringify(scene.game.snapshot())));
  assert.equal(scene.button.pendingButtonSwitch,false);
  for(let i=0;i<25;i++)scene.host.update(.1);
  assert.equal(scene.disc.open,true,'AfterSwitchOn opens the original rotating bookcase');
  assert.equal(scene.button.switchedOn,false);assert.equal(scene.button.switchCount,2);
  assert.equal(scene.button.pendingButtonSwitch,undefined);assert.equal(scene.host.vm.lastError,null);
});

test('restoring an earlier snapshot into the same host clears a later target override',()=>{
  const {host,object,player,command}=fixture();host.startMotion(object);host.update(.25);
  const oldSave=JSON.parse(JSON.stringify(host.snapshot()));command('SetTo',1);host.update(.1);
  assert.ok(player.controllerTarget);host.restore(oldSave);assert.equal(player.controllerTarget,undefined);
  host.update(2);assert.equal(player.loop,'pingpong');assert.equal(player.time,1.75);
});

test('re-enabling completed once-only playback does not rewind or replay its last marker',()=>{
  const {game,host,object,player,command}=fixture(),seen=[];object.entity.RepeatMode='0';object.entity.InitialPosition='.5';player.onEvent=e=>seen.push(e.label);
  host.startMotion(object);host.update(4);assert.equal(object.enabled,false);assert.equal(player.time,3);
  const first=[...seen];game.command(object,'enable');host.update(.1);
  assert.equal(player.time,3);assert.equal(object.enabled,false);assert.deepEqual(seen,first);
  command('Reset');assert.equal(player.time,.5);
});

test('physical button contact waits during motion and can activate again at the next settled endpoint',()=>{
  const {game,host,object,player}=fixture();object.kind='button';object.entity.TouchToSwitch='1';object.entity.TriggerRadius='1';object.entity.MaxSwitchTimes='-1';
  game.update(.1,[0,0,0]);assert.equal(object.switchedOn,false);host.update(.1);assert.equal(object.switchedOn,true);host.update(.1);
  game.update(.1,[0,0,0]);assert.equal(object.pendingButtonSwitch,undefined);assert.equal(object.switchCount,1);
  host.update(3);assert.equal(player.playing,false);host.update(.1);game.update(.1,[0,0,0]);host.update(.1);
  assert.equal(object.switchedOn,false);assert.equal(object.switchCount,2);
});

test('physical trigger minimum counts, enter/stay/leave phases and maximum exhaustion match native',()=>{
  const game=new Gameplay({id:'lvl00a',entities:[{classname:'Trigger','%name%':'volume',MinTriggerTimes:'2',MaxTriggerTimes:'2',DamagePerSecond:'1'}]},{deferInit:true}),object=game.objects[0],seen=[];
  let inside=true;game.contains=()=>inside;game.runEvent=(_object,event)=>seen.push(event);
  const step=()=>game.update(.1,[0,0,0]);
  step();assert.equal(object.triggerCount,1);assert.deepEqual(seen,[]);assert.equal(game.state.health,10);
  step();assert.equal(object.triggerCount,2);assert.equal(object.triggerPhase,1);assert.deepEqual(seen,['CommandOnEnter']);assert.equal(game.state.health,10);
  step();assert.equal(object.triggerPhase,2);assert.equal(game.state.health,9.9);
  inside=false;step();assert.equal(object.triggerPhase,3);assert.deepEqual(seen,['CommandOnEnter','CommandOnLeave']);
  step();assert.equal(object.triggerPhase,0);inside=true;step();step();inside=false;step();
  assert.equal(game.state.health,9.9);assert.equal(object.triggerCount,2);assert.deepEqual(seen,['CommandOnEnter','CommandOnLeave']);
});

test('trigger occupancy phase saves preserve callbacks and old occupied saves migrate to stay',()=>{
  const level={id:'lvl00a',entities:[{classname:'Trigger','%name%':'volume',DamagePerSecond:'1'}]};
  let game=new Gameplay(level,{deferInit:true});game.contains=()=>true;game.update(.1,[0,0,0]);
  const save=JSON.parse(JSON.stringify(game.snapshot()));assert.equal(save.objects[0].triggerPhase,1);
  const seen=[];game=new Gameplay(level,{save,deferInit:true});game.runEvent=(_object,event)=>seen.push(event);game.contains=()=>true;game.update(.1,[0,0,0]);
  assert.equal(game.objects[0].triggerPhase,2);assert.deepEqual(seen,[]);assert.equal(game.state.health,9.9);
  delete save.objects[0].triggerPhase;game=new Gameplay(level,{save,deferInit:true});assert.equal(game.objects[0].triggerPhase,2);
});

test('disabled buttons retain one explicit request while ignoring direct contact requests',()=>{
  const {game,host,object}=fixture();object.kind='button';object.enabled=false;
  game.switchButton(object,true);assert.equal(object.pendingButtonSwitch,undefined);
  game.command(object,'switchon');assert.equal(object.pendingButtonSwitch,true);assert.equal(object.switchCount,0);
  game.command(object,'switchoff');assert.equal(object.pendingButtonSwitch,true,'same-current-state requests do not cancel the native latch');
  game.command(object,'enable');assert.equal(object.switchedOn,false);host.update(.1);assert.equal(object.switchedOn,true);assert.equal(object.switchCount,1);assert.equal(object.pendingButtonSwitch,undefined);
  game.command(object,'switchoff');game.command(object,'switchon');assert.equal(object.pendingButtonSwitch,false);
  host.update(.1);host.update(3);host.update(.1);host.update(.1);assert.equal(object.switchedOn,false);assert.equal(object.switchCount,2);
});


test('native button request, sound, motion and completion occupy separate checks in both directions',()=>{
  const {game,host,object,player}=fixture('button'),seen=[];
  game.onEvent=e=>{if(e.type==='button')seen.push(['sound',object.buttonPhase,e.on]);};
  game.runEvent=(_object,event)=>{if(event!=='MotionCommand')seen.push([event,object.buttonPhase]);};
  game.command(object,'switchon');assert.equal(object.switchedOn,false);assert.deepEqual(seen,[]);
  host.update(.25);assert.equal(object.buttonPhase,2);assert.equal(player.time,0);assert.deepEqual(seen,[]);
  host.update(.25);assert.equal(object.buttonPhase,3);assert.equal(player.time,0);
  assert.deepEqual(seen,[['sound',2,true],['SwitchOnCommand',2]]);
  host.update(2);assert.equal(player.time,2);assert.equal(object.buttonPhase,4,'native float32 millisecond scale slightly exceeds two seconds');assert.equal(seen.length,2);
  host.update(.25);assert.equal(object.buttonPhase,5);assert.deepEqual(seen.at(-1),['AfterSwitchOnCommand',4]);
  game.command(object,'switchoff');host.update(.25);assert.equal(object.buttonPhase,6);
  host.update(.25);assert.equal(object.buttonPhase,7);assert.deepEqual(seen.slice(-2),[['sound',6,false],['SwitchOffCommand',6]]);
  player.time=0;host.update(0);assert.equal(object.buttonPhase,7,'zero-delta exact endpoint remains in travel state');host.update(.25);assert.equal(object.buttonPhase,8);
  host.update(.25);assert.equal(object.buttonPhase,1);assert.deepEqual(seen.at(-1),['AfterSwitchOffCommand',1]);
});

test('button phase saves retain deferred sound/completion and old moving saves migrate without replay',()=>{
  const first=fixture('button');first.game.command(first.object,'switchon');first.host.update(.1);
  const clone=(source,legacy=false)=>{
    const target=fixture('button'),save=JSON.parse(JSON.stringify(source.game.snapshot())),seen=[];
    if(legacy){delete save.objects.find(o=>o.id===source.object.id).buttonPhase;delete save.scripts.motions.find(m=>m.id===source.object.id).buttonPhase;}
    target.game.restore(save);target.host.restore(save.scripts);
    target.game.onEvent=e=>{if(e.type==='button')seen.push('sound');};target.game.runEvent=(_o,e)=>seen.push(e);
    return {...target,seen};
  };
  const beforeSound=clone(first);assert.equal(beforeSound.object.buttonPhase,2);beforeSound.host.update(.1);
  assert.deepEqual(beforeSound.seen,['sound','SwitchOnCommand']);assert.equal(beforeSound.player.time,0);
  beforeSound.host.update(.25);
  const legacy=clone(beforeSound,true);assert.equal(legacy.object.buttonPhase,3);legacy.host.update(.25);
  assert.equal(legacy.player.time,.5);assert.deepEqual(legacy.seen,[]);
  legacy.host.update(3);assert.equal(legacy.object.buttonPhase,4);
  const atEndpoint=clone(legacy);assert.equal(atEndpoint.object.buttonPhase,4);atEndpoint.host.update(.1);
  assert.deepEqual(atEndpoint.seen,['AfterSwitchOnCommand']);assert.equal(atEndpoint.object.buttonPhase,5);
});

test('button endpoint collision refusal delays the completion callback and preserves queued requests',()=>{
  const {game,host,object,player}=fixture('button'),seen=[];let blocked=true;
  player.beforeAdvance=(_from,to)=>!(blocked&&to>1);
  game.runEvent=(_o,e)=>{if(e!=='MotionCommand')seen.push(e);};
  game.command(object,'switchon');host.update(.1);host.update(.1);host.update(3);
  assert.equal(player.time,1);assert.equal(object.buttonPhase,3);assert.deepEqual(seen,['SwitchOnCommand']);
  game.command(object,'switchoff');host.update(3);assert.equal(object.buttonPhase,3);assert.equal(object.pendingButtonSwitch,false);
  blocked=false;host.update(3);assert.equal(object.buttonPhase,4);assert.deepEqual(seen,['SwitchOnCommand']);
  host.update(.1);assert.equal(object.buttonPhase,5);assert.deepEqual(seen,['SwitchOnCommand','AfterSwitchOnCommand']);
  host.update(.1);assert.equal(object.buttonPhase,6);assert.equal(object.switchCount,2);
});


test('button Reset restores its authored endpoint, enabled state and clears pending work',()=>{
  const {game,host,object,player,command}=fixture('button');object.entity.IsInitiallySwitchedOn='1';object.entity.IsInitiallyEnabled='0';
  game.command(object,'switchon');host.update(.1);host.update(.1);game.command(object,'switchoff');host.update(.1);
  command('Reset');assert.equal(object.buttonPhase,5);assert.equal(object.switchedOn,true);assert.equal(player.time,2);
  assert.equal(object.enabled,false);assert.equal(object.switchCount,0);assert.equal(object.pendingButtonSwitch,undefined);assert.equal(player.playing,false);
  object.entity.IsInitiallySwitchedOn='0';object.entity.IsInitiallyEnabled='1';command('Reset');
  assert.equal(object.buttonPhase,1);assert.equal(player.time,0);assert.equal(object.enabled,true);
});

test('button reset callbacks retain the native phase-derived on/off state and endpoint callback',()=>{
  for(const initiallyOn of [false,true])for(const before of [false,true]){
    const {game,host,object,player,command}=fixture('button'),seen=[];
    object.entity.IsInitiallySwitchedOn=initiallyOn?'1':'0';command('Reset');
    const direction=initiallyOn?'Off':'On',resetEvent=`${before?'':'After'}Switch${direction}Command`;
    game.runEvent=(_object,event)=>{if(event==='MotionCommand')return;seen.push(event);if(event===resetEvent)command('Reset');};
    game.command(object,initiallyOn?'switchoff':'switchon');host.update(.1);host.update(.1);
    assert.equal(object.buttonPhase,initiallyOn?7:3);assert.equal(object.switchedOn,!initiallyOn);
    host.update(3);host.update(.1);
    assert.deepEqual(seen,[`Switch${direction}Command`,`AfterSwitch${direction}Command`]);
    // Off settles BEFORE AfterOff, so its callback's Reset is authoritative.
    // On settles AFTER AfterOn, overriding the Reset's logical phase only.
    const finalOn=initiallyOn?!before:true;
    assert.equal(object.switchedOn,finalOn);assert.equal(object.buttonPhase,finalOn?5:1);
    assert.equal(player.time,before?(initiallyOn?0:2):(initiallyOn?2:0));
  }
});

test('restored native button phases are authoritative over a stale duplicate on/off flag',()=>{
  for(const phase of [1,2,3,4,5,6,7,8]){
    const {host,object}=fixture('button'),save=JSON.parse(JSON.stringify(host.snapshot()));
    object.switchedOn=!(phase>=2&&phase<=5);save.motions[0].buttonPhase=phase;host.restore(save);
    assert.equal(object.buttonPhase,phase);assert.equal(object.switchedOn,phase>=2&&phase<=5);
    assert.equal(object.moving,phase!==1&&phase!==5);
  }
});

test('shots during button travel do not queue a reverse switch, while script commands do',()=>{
  const {game,host,object}=fixture('button');object.entity.ShootToSwitch='1';
  const shot={damage:1,type:'normal'};game.playerProjectileHit(object,shot);host.update(.1);host.update(.1);
  for(let i=0;i<3;i++)game.playerProjectileHit(object,shot);
  assert.equal(object.pendingButtonSwitch,undefined);assert.equal(object.switchCount,1);
  game.command(object,'switchoff');assert.equal(object.pendingButtonSwitch,false);
});


test('older paused mid-motion button saves migrate to travel and resume only when enabled',()=>{
  const first=fixture('button');first.game.command(first.object,'switchon');first.host.update(.1);first.host.update(.1);first.host.update(.25);
  first.game.command(first.object,'disable');first.player.stop();
  const save=JSON.parse(JSON.stringify(first.game.snapshot()));delete save.objects.find(o=>o.id===first.object.id).buttonPhase;delete save.scripts.motions.find(m=>m.id===first.object.id).buttonPhase;
  const next=fixture('button'),seen=[];next.game.restore(save);next.host.restore(save.scripts);
  next.game.runEvent=(_o,e)=>{if(e!=='MotionCommand')seen.push(e);};next.game.onEvent=e=>{if(e.type==='button')seen.push('sound');};
  assert.equal(next.object.buttonPhase,3);next.host.update(1);assert.equal(next.player.time,.25);assert.equal(next.player.playing,false);
  next.game.command(next.object,'enable');next.host.update(.25);assert.equal(next.player.time,.5);assert.deepEqual(seen,[]);
  next.host.update(3);next.host.update(.1);assert.deepEqual(seen,['AfterSwitchOnCommand']);assert.equal(next.object.buttonPhase,5);
});

test('skipping services queued and endpoint button callbacks before declaring there is no motion',()=>{
  for(const initialPhase of ['request','endpoint']){
    const {game,host,object,player}=fixture('button'),seen=[];game.command(object,'switchon');
    if(initialPhase==='endpoint'){host.update(.1);host.update(.1);host.update(3);assert.equal(object.buttonPhase,4);}
    assert.equal(player.playing,false);host.cutscene=true;
    game.runEvent=(_o,event)=>{if(event==='AfterSwitchOnCommand'){seen.push(event);host.finishCutscene(0);}};
    assert.equal(host.skipCutscene({maximumSeconds:5}),true);assert.equal(object.buttonPhase,5);assert.deepEqual(seen,['AfterSwitchOnCommand']);
  }
  const stopped=fixture('button');stopped.game.command(stopped.object,'switchon');stopped.game.command(stopped.object,'disable');stopped.host.cutscene=true;
  assert.equal(stopped.host.skipCutscene({maximumSeconds:5}),false);assert.equal(stopped.object.pendingButtonSwitch,true);assert.equal(stopped.host.time,0,'disabled work cannot advance or consume the skip budget');
});

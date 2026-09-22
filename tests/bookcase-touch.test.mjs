import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';

const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
const original=json('data/levels/lvl01a/level.json');
const level={...original,entities:original.entities.filter(e=>e.classname==='%Model%'||e.DaviName==='disc'||e.DaviName?.startsWith('knopdisc'))};
const program=json('data/davi/lvl01a.json'),motions=json('data/motions/lvl01a.json');
const away=[0,1000,0];
function boot(save=null){
  const events=[],game=new Gameplay(level,{deferInit:true,save,onEvent:e=>events.push(e)});
  const host=new ScriptHost(game,program,{motions});host.initialize(save?.scripts);
  const disc=game.find('disc')[0],motion=host.players.get(disc.id);
  const step=(seconds,position=away,options={})=>{for(let elapsed=0;elapsed<seconds-1e-8;){const dt=Math.min(.05,seconds-elapsed);host.update(dt);game.update(dt,position,options);elapsed+=dt;}};
  const until=predicate=>{for(let i=0;i<300&&!predicate();i++)step(.05);assert.ok(predicate(),'authored motion reaches expected state');};
  return {events,game,host,disc,motion,step,until};
}
function touch(app,name){
  const button=app.game.find(name)[0];
  app.step(.05,button.position,{touchedModels:[button.modelIndex],use:false});
  assert.equal(button.switchedOn,true);app.until(()=>app.disc.open);return button;
}

for(const name of ['knopdisc01','knopdisc02'])test(`${name} touch runs the full original flip before the stay-open delay, then resets and repeats`,()=>{
  const app=boot(),{game,disc,motion,step,until,events}=app;
  for(let cycle=0;cycle<2;cycle++){
    const button=touch(app,name);assert.equal(button.entity.TouchToSwitch,'1');assert.equal(button.entity.ShootToSwitch,'0');
    assert.equal(disc.closeAt,null);step(2.5);
    assert.equal(disc.open,true);assert.equal(disc.moving,true);assert.equal(disc.closeAt,null);
    assert.ok(motion.time>2&&motion.time<5,'opening survives the authored two-second lead-in');
    until(()=>!disc.moving);assert.equal(motion.time,5);
    const rotation=motion.sample().rotation,angle=2*Math.acos(Math.abs(rotation[3]))*180/Math.PI;
    assert.ok(angle>178&&angle<179,'preserve the original near-180 degree endpoint');
    assert.ok(disc.closeAt-game.time>1.9&&disc.closeAt-game.time<=2);
    step(1.8);assert.equal(disc.open,true);assert.equal(motion.time,5);
    until(()=>!disc.open);until(()=>!disc.moving);assert.equal(motion.time,0);assert.equal(disc.closeAt,null);
    assert.equal(button.switchedOn,false);assert.equal(button.switchCount,(cycle+1)*2);
  }
  assert.deepEqual(events.filter(e=>e.type==='door'&&e.id===disc.id).map(e=>e.open),[true,false,true,false]);
  assert.equal(app.host.vm.lastError,null);
});

test('the scripted bookcase ignores E and direct contact but still accepts its script open command',()=>{
  const app=boot(),{game,disc,step}=app;
  assert.equal(disc.entity.TouchToOpen,'0');assert.equal(disc.entity.TriggerRadius,'0');
  step(.05,disc.position,{use:true,touchedModels:[disc.modelIndex]});assert.equal(disc.open,false);
  step(.05,disc.position,{use:false,touchedModels:[disc.modelIndex]});assert.equal(disc.open,false);
  game.execute('disc.open');assert.equal(disc.open,true);assert.equal(disc.closeAt,null);
});

test('loading an old premature timer during paused opening waits for completion before scheduling closure',()=>{
  const app=boot();touch(app,'knopdisc01');app.step(3);app.motion.stop();
  const save=app.game.snapshot();save.objects.find(o=>o.id===app.disc.id).closeAt=save.time+.1;
  const restored=boot(save);assert.equal(restored.disc.closeAt,null);
  restored.step(4);assert.equal(restored.disc.open,true);assert.ok(restored.motion.time>2&&restored.motion.time<5);
  restored.motion.resume();restored.until(()=>!restored.disc.moving&&restored.motion.time===5);
  assert.ok(restored.disc.closeAt-restored.game.time>1.9);
  const openSave=restored.game.snapshot(),openRestored=boot(openSave);
  assert.equal(openRestored.disc.closeAt,restored.disc.closeAt,'fully open saves keep their remaining wait');
  openRestored.until(()=>!openRestored.disc.open);assert.equal(openRestored.host.vm.lastError,null);
});

test('doors without motion still schedule their wait, and AfterOpen closing is not overwritten',()=>{
  const game=new Gameplay({entities:[{classname:'DoorModel','%name%':'plain',Origin:'0 0 0',TouchToOpen:'1',TimeToStayOpen:'2'}]});
  const door=game.find('plain')[0];game.setDoor(door,true);assert.equal(door.closeAt,2);
  game.update(.1,away);game.time=2;game.update(.05,away);assert.equal(door.open,false);
  door.entity.DoorAfterOpenCommand='plain.close';game.setDoor(door,true);
  assert.equal(door.open,false);assert.equal(door.closeAt,null);
});

import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';

const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
const level=json('data/levels/lvl03a/level.json'),program=json('data/davi/lvl03a.json'),motions=json('data/motions/lvl03a.json');
const phases=[0,1,2,3,4,6,3,4];
const copy=value=>JSON.parse(JSON.stringify(value));
function boot(save=null){
  const game=new Gameplay(level,{deferInit:true,save}),host=new ScriptHost(game,program,{motions});
  host.initialize(save?.scripts);host.cutscene=false;host.enemiesFrozen=true;
  const stones=game.find('rolling_stones');
  for(const p of host.players.values())if(!stones.includes(p.object))p.stop();
  return {game,host,stones,players:stones.map(o=>host.players.get(o.id)),object:name=>game.find(name)[0]};
}
function legacy(save){for(const motion of save.scripts.motions)delete motion.started;return save;}
function assertRunning(app,expected){
  app.players.forEach((p,i)=>{
    assert.equal(p.playing,true);assert.equal(p.finished,false);assert.equal(p.loop,true);
    assert.equal(p.loopFrom,0);assert.equal(p.loopTo,7);assert.equal(app.stones[i].enabled,true);
    const delta=Math.abs(p.time-expected[i]);
    assert.ok(Math.min(delta,Math.abs(7-delta))<1e-8,`${p.object.entity.DaviName}: ${p.time} != ${expected[i]}`);
  });
}

test('save before first use preserves native rolling-stone repeat mode and staggered phases',()=>{
  for(const old of [false,true]){
    const original=boot(),save=copy(original.game.snapshot());if(old)legacy(save);
    const app=boot(save);
    assert.equal(app.stones.length,8);assert.ok(app.stones.every(o=>!o.enabled&&!o.motionStarted));
    app.game.setDoor(app.object('door_left_to_earthlab'),true);
    assertRunning(app,phases);
    for(let i=0;i<300;i++)app.host.update(.05);
    assertRunning(app,phases.map(t=>(t+15)%7));
    assert.equal(app.host.vm.lastError,null);
  }
});

test('legacy save made during the erroneous first lap repairs repeat without moving the rocks',()=>{
  const initial=boot(),save=legacy(copy(initial.game.snapshot()));
  save.scripts.poses=[];
  for(const stone of initial.stones){
    const m=save.scripts.motions.find(m=>m.id===stone.id);m.time+=.2;m.playing=true;
    save.objects.find(o=>o.id===stone.id).enabled=true;
  }
  const app=boot(save);assertRunning(app,phases.map(t=>t+.2));
  app.host.update(14);assertRunning(app,phases.map(t=>t+.2));
});

test('already-stalled legacy stones stay disabled until the original re-entry trigger enables them',()=>{
  const initial=boot(),save=legacy(copy(initial.game.snapshot()));
  save.scripts.poses=[];
  for(const stone of initial.stones){
    const m=save.scripts.motions.find(m=>m.id===stone.id);
    Object.assign(m,{time:7,from:0,to:7,loop:false,playing:false,finished:true});
  }
  // Saving again before re-entry must retain the repair and authored phase.
  const app=boot(copy(boot(save).game.snapshot()));app.host.update(10);
  assert.ok(app.stones.every(o=>!o.enabled));assert.ok(app.players.every(p=>!p.playing&&p.time===7));
  app.game.trigger(app.object('trigger_frame_sluis02'));
  app.host.update(15);assertRunning(app,phases.map(t=>(t+15)%7));
});

test('authored outside-section Disable retains phase across save/load and resumes on re-entry',()=>{
  const app=boot();app.game.setDoor(app.object('door_left_to_earthlab'),true);app.host.update(2.25);
  app.game.trigger(app.object('trigger_frame_sluis04'));
  const times=app.players.map(p=>p.time),restored=boot(copy(app.game.snapshot()));
  restored.host.update(20);
  assert.ok(restored.stones.every(o=>!o.enabled));assert.ok(restored.players.every(p=>!p.playing));
  assert.deepEqual(restored.players.map(p=>p.time),times);
  restored.game.trigger(restored.object('trigger_frame_sluis02'));
  restored.host.update(14);assertRunning(restored,times);
});

for(const hz of [20,60,120])test(`original narrow rolling-stone thresholds activate on crossing at ${hz} Hz`,()=>{
  const app=boot(legacy(copy(boot().game.snapshot()))),step=192/hz;
  app.game.setDoor(app.object('door_left_to_earthlab'),true);
  for(let z=-1620;z<=-1190;z+=step){app.game.update(1/hz,[-1264,80,z]);app.host.update(1/hz);}
  assert.equal(app.object('trigger_frame_sluis04').triggerCount,1);
  assert.equal(app.object('trigger_frame_sluis02').triggerCount,1);
  assert.ok(app.stones.every(o=>o.enabled));assert.ok(app.players.every(p=>p.playing&&p.loop));
  const times=app.players.map(p=>p.time);app.host.update(14);assertRunning(app,times);
});

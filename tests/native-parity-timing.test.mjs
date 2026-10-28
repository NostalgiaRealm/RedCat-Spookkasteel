// Frame-rate, pause and reload checks for the timing corrections in
// docs/claude-native-parity-review.md (items 1, 2, 11 and 14). Each timed
// event must land within one frame of its native time at 10-144 fps.
import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../source/gameplay.js';
import {ScriptHost} from '../source/script-host.js';
import {PLAYER_DEATH_SECONDS,PLAYER_RESPAWN_PROTECTION_SECONDS} from '../source/player-lifecycle.js';
import {enemyDeathOpacity} from '../source/enemy-death-effects.js';

const RATES=[10,30,60,144];
const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
const level=(entities=[])=>({id:'timing',spawn:{position:[0,0,0],orientation:0},entities});
const within=(actual,expected,dt,message)=>assert.ok(actual>=expected-1e-9&&actual<=expected+dt+1e-9,`${message}: ${actual} not within one frame of ${expected}`);

test('the death hold, life deduction and respawn protection keep native times at every frame rate',()=>{
  for(const fps of RATES) {
    const dt=1/fps,events=[],game=new Gameplay(level(),{onEvent:event=>events.push({...event,time:game.time})});
    game.damage(100);const died=game.time;
    // Pausing (zero-length frames) never advances the death hold.
    for(let i=0;i<50;i++)game.update(0,[0,0,0]);
    assert.equal(game.playerReaction.age,0,`${fps} fps: pause holds the death`);
    while(!events.some(e=>e.type==='respawn'))game.update(dt,[0,0,0]);
    const respawn=events.find(e=>e.type==='respawn');
    within(respawn.time-died,PLAYER_DEATH_SECONDS,dt,`${fps} fps respawn`);
    assert.equal(game.state.lives,2,`${fps} fps: one life deducted at respawn`);
    // Protection blocks damage until five seconds after the respawn.
    let firstHit=null;
    while(firstHit===null&&game.time<respawn.time+7){game.update(dt,[0,0,0]);const before=game.state.health;game.damage(1);if(game.state.health<before)firstHit=game.time;}
    within(firstHit-respawn.time,PLAYER_RESPAWN_PROTECTION_SECONDS,dt,`${fps} fps protection`);
    assert.equal(events.filter(e=>e.type==='respawn').length,1,`${fps} fps: a single respawn`);
  }
});

test('the hurt-voice throttle releases the same number of cues at every frame rate',()=>{
  const counts=RATES.map(fps=>{
    const dt=1/fps,events=[],game=new Gameplay(level(),{onEvent:event=>events.push(event)});
    game.state.health=game.state.maxHealth=1e6;
    // A hit every frame for four seconds: every hit counts, the voice is throttled.
    for(let t=0;t<4-1e-9;t+=dt){game.damage(1);game.update(dt,[0,0,0]);}
    return events.filter(e=>e.type==='damage'&&e.hurtSound!==false).length;
  });
  for(const count of counts)assert.ok(Math.abs(count-counts[0])<=1,`hurt cues per rate ${counts}`);
  assert.ok(counts[0]>=3&&counts[0]<=5,`about one cue per 1.0-1.5 s: ${counts}`);
});

test('a zombie defeat script and a ghost drop-dead finish on time at every frame rate',()=>{
  for(const fps of RATES) {
    const dt=1/fps,game=new Gameplay(level([
      {classname:'MovingEnemy','%name%':'zombie',Type:'4',Origin:'0 0 0',AfterDestroyCommand:'zombiedone=1'},
      {classname:'MovingEnemy','%name%':'ghost',Type:'3',SubType:'1',Origin:'500 100 0'},
    ]));
    const [zombie,ghost]=game.objects;zombie.animationDurations={death:1.6};ghost.animationDurations={death:1.5};
    ghost.position=[500,100,0];
    const floor=(a,b)=>({fraction:(a[1]-10)/(a[1]-b[1]),end:[b[0],10,b[2]],startSolid:false,normal:[0,1,0]});
    game.destroy(zombie);game.destroy(ghost);
    const start=game.time;let doneAt=null;
    for(let i=0;i<20;i++)game.update(0,[10000,0,0],{traceEnemy:floor});
    assert.equal(game.variables.has('zombiedone'),false,`${fps} fps: pause does not release the script`);
    while(game.time<start+5.5){
      game.update(dt,[10000,0,0],{traceEnemy:floor});
      if(doneAt===null&&game.variables.get('zombiedone')===1)doneAt=game.time;
      if(Math.abs(game.time-start-2.5)<dt/2+1e-9)assert.ok(Math.abs(ghost.position[1]-55)<=90*dt/5+1e-6,`${fps} fps: halfway down at 2.5 s (${ghost.position[1]})`);
    }
    within(doneAt-start,zombie.animationUntil-start,dt,`${fps} fps zombie script`);
    assert.equal(ghost.position[1],10,`${fps} fps: ghost on the floor`);assert.equal(enemyDeathOpacity(ghost,game.time),0);
  }
});

test('the StopCutScene fade holds control for its time at every frame rate, and pause does not shorten it',()=>{
  const program=json('data/davi/lvl00a.json'),motions=json('data/motions/lvl00a.json'),levelData=json('data/levels/lvl00a/level.json');
  for(const fps of RATES) {
    const dt=1/fps,game=new Gameplay(levelData,{deferInit:true});
    const host=new ScriptHost(game,program,{motions,dialogue:{}});host.initialize();
    for(let i=0;i<300;i++)host.update(.1);if(host.cutscene)host.skipCutscene();
    host.cutscene=true;host.finishCutscene(1);const ended=host.time;
    for(let i=0;i<30;i++)host.update(0);
    assert.equal(host.controlLocked,true,`${fps} fps: still held after a pause`);
    while(host.controlLocked&&host.time<ended+3)host.update(dt);
    within(host.time-ended,1,dt,`${fps} fps fade hold`);
  }
});

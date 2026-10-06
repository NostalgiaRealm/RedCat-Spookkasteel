import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {TouchIntroHint,TOUCH_INTRO_HINT_TEXT} from '../src/touch-intro-hint.js';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';

const idle={playing:true,touch:true,cutscene:false,camera:null};
function fixture(seen=false) {
  const shown=[];let remembered=0;
  const hint=new TouchIntroHint({seen,remember:()=>remembered++,show:(...args)=>shown.push(args)});
  return {hint,shown,get remembered(){return remembered;}};
}
test('first forest hint waits for both the authored camera and cutscene, then requests ten seconds once',()=>{
  const f=fixture();f.hint.start({level:'lvl00a',touch:true});
  f.hint.update(idle);assert.equal(f.shown.length,0,'the initial frame before the script starts is not an ending');
  f.hint.update({...idle,cutscene:true,camera:{mode:4}});
  f.hint.update({...idle,camera:{mode:4}});assert.equal(f.shown.length,0);
  f.hint.update({...idle,cutscene:true});assert.equal(f.shown.length,0);
  f.hint.update({...idle,playing:false});assert.equal(f.shown.length,0);
  f.hint.update(idle);
  assert.deepEqual(f.shown,[[TOUCH_INTRO_HINT_TEXT,10000]]);assert.equal(f.remembered,1);
  f.hint.update({...idle,cutscene:true});f.hint.update(idle);
  f.hint.start({level:'lvl00a',touch:true});f.hint.update({...idle,cutscene:true});f.hint.update(idle);
  assert.equal(f.shown.length,1,'later dialogue and restarting the adventure do not repeat the hint');
});
test('other levels, restored saves, keyboard starts and remembered hints do not teach touch again',()=>{
  for(const options of [{level:'lvl01a',touch:true},{level:'lvl00a',touch:true,restored:true},{level:'lvl00a',touch:false}]) {
    const f=fixture();f.hint.start(options);f.hint.update({...idle,cutscene:true});f.hint.update(idle);assert.equal(f.shown.length,0);
  }
  const f=fixture(true);f.hint.start({level:'lvl00a',touch:true});f.hint.update({...idle,cutscene:true});f.hint.update(idle);assert.equal(f.shown.length,0);
});
test('leaving the forest during its opening cancels the pending hint',()=>{
  const f=fixture();f.hint.start({level:'lvl00a',touch:true});f.hint.update({...idle,cutscene:true});
  f.hint.start({level:'lvl02a',touch:true});f.hint.update(idle);assert.equal(f.shown.length,0);
});
test('the original forest opening script delays the hint until its real camera sequence finishes',()=>{
  const read=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
  const game=new Gameplay(read('data/levels/lvl00a/level.json'),{deferInit:true});
  const host=new ScriptHost(game,read('data/davi/lvl00a.json'),{motions:read('data/motions/lvl00a.json')});
  let endedAt=0;game.onEvent=event=>{if(event.type==='cutscene'&&!event.active)endedAt=host.time;};
  const f=fixture();f.hint.start({level:'lvl00a',touch:true});host.initialize();
  f.hint.update({...idle,cutscene:host.cutscene,camera:host.camera});assert.equal(f.shown.length,0);
  let shownAt=0;
  for(let i=0;i<1200;i++) {
    host.update(1/60);f.hint.update({...idle,cutscene:host.cutscene,camera:host.camera});
    if(f.shown.length&&!shownAt)shownAt=host.time;
    if(host.cutscene)assert.equal(f.shown.length,0);
  }
  assert.ok(endedAt>0,'the original script completed its opening');assert.equal(shownAt,endedAt);
  assert.deepEqual(f.shown,[[TOUCH_INTRO_HINT_TEXT,10000]]);assert.equal(f.remembered,1);
});

test('desktop hint follows the same opening-only timing, lifetime and persisted opt-out',async()=>{
  const {OpeningHint,DESKTOP_INTRO_HINT_TEXT}=await import('../src/touch-intro-hint.js');
  const shown=[];let remembered=0;
  const hint=new OpeningHint({show:(...args)=>shown.push(args),remember:()=>remembered++});
  const ready={playing:true,enabled:true,cutscene:false,camera:null};
  hint.start({level:'lvl00a',enabled:true});hint.update(ready);assert.equal(shown.length,0);
  hint.update({...ready,cutscene:true,camera:{mode:4}});hint.update({...ready,camera:{mode:4}});assert.equal(shown.length,0);
  hint.update(ready);assert.deepEqual(shown,[[DESKTOP_INTRO_HINT_TEXT,10000]]);assert.equal(remembered,1);
  hint.start({level:'lvl00a',enabled:true});hint.update({...ready,cutscene:true});hint.update(ready);assert.equal(shown.length,1);
  for(const options of [{level:'lvl00a',enabled:true,restored:true},{level:'lvl01a',enabled:true},{level:'lvl00a',enabled:false}]){
    const fresh=new OpeningHint({show:()=>assert.fail('not a first fresh desktop forest opening')});
    fresh.start(options);fresh.update({...ready,cutscene:true});fresh.update(ready);
  }
  const persisted=new OpeningHint({seen:true,show:()=>assert.fail('already shown in this profile')});
  persisted.start({level:'lvl00a',enabled:true});persisted.update({...ready,cutscene:true});persisted.update(ready);
});

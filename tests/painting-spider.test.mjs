import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';
import {BspCollider} from '../src/collision.js';
import {placeSpider} from '../src/enemy-ambush.js';

const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
const level=json('data/levels/lvl02a/level.json'),motions=json('data/motions/lvl02a.json'),program=json('data/davi/lvl02a.json');
const names=['mspina','mspinb','mspinc'];
function boot(save=null) {
  const events=[],game=new Gameplay(level,{deferInit:true,save,onEvent:e=>events.push(e)});
  const host=new ScriptHost(game,program,{motions});host.initialize(save?.scripts);
  if(!save)for(const p of host.players.values())p.stop();
  const collider=new BspCollider(level.collision);collider.modelTransforms=host.modelTransforms;
  const models=()=>[...new Set(level.groups.map(g=>g.model))].filter(i=>i===0||game.modelState(i).solid);
  const trace=(a,b,mins,maxs)=>collider.trace(a,b,mins,maxs,models(),null);
  const spiders=names.map(name=>game.find(name)[0]);
  for(const spider of spiders)placeSpider(game,spider,trace);
  const step=dt=>{game.time+=dt;host.update(dt);};
  const until=predicate=>{for(let i=0;i<250&&!predicate();i++)step(.05);assert.ok(predicate());};
  return {game,host,events,trace,spiders,step,until};
}
function solve(app) {
  const {game,host,until}=app;
  for(const [index,count] of [3,1,0,3,2].entries())for(let i=0;i<count;i++){
    const button=game.find(`puzbut${index+1}_mc`)[0],piece=game.find(`puzstuk${index+1}_mc`)[0];
    game.switchButton(button);until(()=>!button.switchedOn);until(()=>!piece.enabled);
    until(()=>!host.players.get(button.id).playing);
  }
}

test('original painting solution wraps at path end, enables all three spiders, and breaks the entryway',()=>{
  const app=boot(),{game,host,spiders,until}=app;
  assert.ok(spiders.every(s=>!s.enabled&&s.ambush.phase==='dormant'));
  solve(app);
  assert.ok(spiders.every(s=>s.enabled&&s.ambush.phase==='dormant'));
  for(const i of [1,2,4,5]){
    const p=host.players.get(game.find(`puzstuk${i}_mc`)[0].id);
    assert.equal(p.loopTo,8);assert.ok(p.time<.02,'correct original callback follows the wrap');
  }
  assert.deepEqual(Object.values(host.vm.snapshot().globals).map(v=>v.value),[1,1,1,1,1]);
  until(()=>!game.find('mausodeur_mc')[0].visible);
  for(const name of ['mausodeur_dum1','mausodeur_dum2']){
    const cover=game.find(name)[0];assert.equal(cover.health,0);
    assert.ok(game.explosions.some(e=>e.sourceId===cover.id));
  }
  until(()=>!host.cutscene);assert.equal(host.vm.lastError,null);
});

test('the three roof-origin spiders wait for approach, descend at native FallSpeed, then land',()=>{
  const {game,trace,spiders}=boot();
  for(const spider of spiders){
    const state=spider.ambush,start=game.navigation.find(spider.entity.StartPoint).position;
    assert.equal(state.phase,'dormant');assert.equal(spider.position[0],start[0]);assert.equal(spider.position[2],start[2]);
    assert.ok(state.upper[1]-state.lower[1]>100);assert.ok(Math.abs(state.lower[1]+231)<.2);
    assert.equal(trace(spider.position,spider.position,[-12,0,-12],[12,24,12]).startSolid,false);
    game.command(spider,'enable');
    game.updateEnemy(spider,.1,[0,-230,-2120],()=>true,trace);assert.equal(state.phase,'dormant');
    game.updateEnemy(spider,.1,state.lower,()=>false,trace);assert.equal(state.phase,'dormant','a wall still occludes approach');
    const y=spider.position[1];game.updateEnemy(spider,.1,state.lower,()=>true,trace);
    assert.equal(state.phase,'descending');assert.ok(Math.abs(spider.position[1]-(y-spider.stats.FallSpeed*.1))<1e-6);
    for(let i=0;i<30&&state.phase!=='awake';i++)game.updateEnemy(spider,.1,state.lower,()=>true,trace);
    assert.equal(state.phase,'awake');assert.deepEqual(spider.position,state.lower);
  }
});

test('hanging spider perception uses its ceiling eye, horizontal range and two native sight rays',()=>{
  const {game,trace,spiders}=boot(),spider=spiders[0],rays=[];
  const state=spider.ambush;game.command(spider,'enable');
  const feet=[spider.position[0]+spider.stats.VisualRange-1,state.lower[1],spider.position[2]];
  assert.ok(Math.hypot(...spider.position.map((v,i)=>v-feet[i]))>spider.stats.VisualRange);
  const eye=[spider.position[0],spider.position[1]+24*.8,spider.position[2]];
  const blocked=(a,b)=>{rays.push([[...a],[...b]]);return false;};
  game.updateEnemy(spider,0,feet,blocked,trace);
  assert.equal(state.phase,'dormant');assert.deepEqual(rays,[[eye,feet],[eye,[feet[0],feet[1]+56,feet[2]]]]);
  rays.length=0;
  game.updateEnemy(spider,0,[feet[0]+1,feet[1],feet[2]],blocked,trace);
  assert.equal(rays.length,0,'outside horizontal range cannot see RedCat');
  game.updateEnemy(spider,0,feet,(a,b)=>b[1]===feet[1]+56,trace);
  assert.equal(state.phase,'descending','a visible head triggers descent even with feet hidden');
});

test('pre-fix solved saves recover skipped spider enables and roof placement without replaying the gate cutscene',()=>{
  const app=boot();solve(app);
  app.until(()=>!app.host.players.get(app.game.find('mausomodel_mc')[0].id).playing);
  const save=app.game.snapshot();
  for(const i of [2,4,5]){
    const p=save.scripts.motions.find(p=>p.id===app.game.find(`puzstuk${i}_mc`)[0].id);
    Object.assign(p,{time:8.01,to:8.01,loopTo:8.01,playing:false});
  }
  for(const spider of app.spiders){
    const o=save.objects.find(o=>o.id===spider.id);
    Object.assign(o,{enabled:false,position:spider.entity.Origin.split(' ').map(Number),ambush:{version:1,type:'spider',phase:'awake',elapsed:0}});
  }
  const restored=boot(save);
  assert.ok(restored.spiders.every(s=>s.enabled&&s.ambush.phase==='dormant'));
  assert.equal(restored.host.cutscene,false);
  assert.equal(restored.host.players.get(restored.game.find('mausomodel_mc')[0].id).playing,false);
  assert.equal(restored.game.find('mausodeur_mc')[0].visible,false);
  assert.equal(restored.events.some(e=>e.type==='scriptSound'&&e.sound==='expl6.wav'),false);
  assert.equal(restored.host.vm.lastError,null);
  const piece=restored.game.find('puzstuk2_mc')[0],player=restored.host.players.get(piece.id);
  assert.ok(player.time<.02,'old correct picture resumes at the equivalent native first marker');
  restored.game.switchButton(restored.game.find('puzbut2_mc')[0]);
  restored.until(()=>piece.enabled);restored.until(()=>!piece.enabled);
  assert.ok(player.time>2&&player.time<2.02,'next press advances directly to the next picture');
  assert.equal(Object.values(restored.host.vm.snapshot().globals)[1].value,0);
});

test('saving retains descent progress and does not rewind a fought or roaming roof-origin spider',()=>{
  const app=boot(),spider=app.spiders[0];app.game.command(spider,'enable');
  app.game.updateEnemy(spider,.2,spider.ambush.lower,()=>true,app.trace);
  const saved=app.game.snapshot(),restored=boot(saved).spiders[0];
  assert.deepEqual(restored.ambush,spider.ambush);assert.deepEqual(restored.position,spider.position);
  const s=saved.objects.find(o=>o.id===spider.id);s.ambush={version:1,type:'spider',phase:'awake',elapsed:0};
  s.position=spider.entity.Origin.split(' ').map(Number);s.health=spider.maxHealth-1;
  assert.equal(boot(saved).spiders[0].ambush.phase,'awake','damaged enemy is not rewound');
  s.health=spider.maxHealth;s.position[0]+=50;
  assert.equal(boot(saved).spiders[0].ambush.phase,'awake','enemy that left its spawn is not rewound');
});

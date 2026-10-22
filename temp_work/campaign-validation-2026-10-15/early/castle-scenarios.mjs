import fs from 'node:fs';
import assert from 'node:assert/strict';
import {Gameplay} from '../../../src/gameplay.js';
import {ScriptHost} from '../../../src/script-host.js';
const json=p=>JSON.parse(fs.readFileSync(p));
const level=json('data/levels/lvl01a/level.json'),program=json('data/davi/lvl01a.json'),motions=json('data/motions/lvl01a.json');
function boot(save){const events=[],game=new Gameplay(level,{deferInit:true,save,onEvent:e=>events.push(e)}),host=new ScriptHost(game,program,{motions});host.initialize(save?.scripts);return {game,host,events};}
function step(app,t){for(let elapsed=0;elapsed<t-1e-9;elapsed+=.025){app.host.update(.025);app.game.update(.025,[0,10000,0]);}}
function state(app){return [...app.host.modelTransforms].map(([i,p])=>[i,p]);}
function restored(app){return boot(JSON.parse(JSON.stringify(app.game.snapshot())));}
const report={kind:'Authored control callback and save-continuation scenarios, not movement/reachability or full playthrough',buttons:[],gates:[],bossExit:{}};
for(const entity of level.entities.filter(e=>e.classname==='ButtonModel')){
 const app=boot(),button=app.game.find(entity.DaviName)[0];
 app.game.switchButton(button,true);step(app,.375);
 const loaded=restored(app);assert.deepEqual(state(loaded),state(app),entity.DaviName+' immediate saved pose');
 step(app,8);step(loaded,8);
 assert.deepEqual(state(loaded),state(app),entity.DaviName+' continued saved pose');
 assert.equal(app.host.vm.lastError,null);assert.equal(loaded.host.vm.lastError,null);
 const called=app.host.vm.trace.filter(e=>e.kind==='method').map(e=>[e.object,e.name]);
 const operations=called.filter(([o,n])=>['Open','Close','Enable','Disable'].includes(n));
 assert.ok(operations.length>0,entity.DaviName+' commands ran');
 report.buttons.push({name:entity.DaviName,position:entity.Origin,shoot:entity.ShootToSwitch==='1',touch:entity.TouchToSwitch==='1',switchCount:button.switchCount,operations});
}
for(const count of [19,20]){
 const app=boot();for(const potion of app.game.objects.filter(o=>o.subtype==='potion').slice(0,count))app.game.pickup(potion);
 app.game.trigger(app.game.find('choice_tr')[0]);step(app,35);
 const openable=['doorendboss01','doorendboss02'].map(n=>app.game.find(n)[0].enabled);
 assert.deepEqual(openable,[count===20,count===20]);assert.equal(Boolean(app.game.state.skill&2),count===20);
 const loaded=restored(app);assert.deepEqual(['doorendboss01','doorendboss02'].map(n=>loaded.game.find(n)[0].enabled),openable);
 report.gates.push({potions:count,doorsEnabled:openable,skill:app.game.state.skill});
}
const app=boot(),boss=app.game.find('Max')[0];app.game.destroy(boss);step(app,45);
assert.equal(app.game.find('doorendlvl01')[0].open,true);assert.equal(app.game.find('doorendlvl02')[0].open,true);
const mirror=app.game.find('MirrorEndBossLvl01')[0];app.game.pickup(mirror);step(app,30);
assert.equal(app.game.completed,true);const complete=app.events.find(e=>e.type==='levelComplete');assert.equal(complete.target,'lvl02a');
const loaded=restored(app);assert.equal(loaded.game.completed,true);assert.equal(loaded.game.find('Max')[0].health,0);assert.equal(loaded.game.find('MirrorEndBossLvl01')[0].collected,true);
report.bossExit={scriptErrors:app.host.vm.lastError,completed:app.game.completed,target:complete.target,savedCompletion:loaded.game.completed};
fs.writeFileSync('temp_work/campaign-validation-2026-10-15/early/castle-scenarios.json',JSON.stringify(report,null,2));console.log(JSON.stringify({buttons:report.buttons.length,gates:report.gates,bossExit:report.bossExit}));

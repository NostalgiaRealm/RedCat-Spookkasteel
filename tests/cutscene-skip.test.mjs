import test from 'node:test';import assert from 'node:assert/strict';import{readFileSync}from'node:fs';
import {CutsceneSkipHold} from '../src/cutscene-skip.js';
import {Gameplay} from '../src/gameplay.js';import{ScriptHost}from'../src/script-host.js';
const json=path=>JSON.parse(readFileSync(new URL(path,import.meta.url)));
function boot(index){const id=`lvl0${index}a`,events=[],game=new Gameplay(json(`../data/levels/${id}/level.json`),{deferInit:true,onEvent:e=>events.push(e)}),host=new ScriptHost(game,json(`../data/davi/${id}.json`),{motions:json(`../data/motions/${id}.json`),dialogue:json('../data/dialogue/nl.json')});host.initialize();return{game,host,events};}
test('skip requires continuous two second E hold and latches until release',()=>{
 const hold=new CutsceneSkipHold();assert.equal(hold.update(1,true,true),false);assert.equal(hold.progress,.5);
 assert.equal(hold.update(.99,true,true),false);assert.equal(hold.update(.01,true,true),true);assert.equal(hold.progress,1);
 assert.equal(hold.update(20,true,true),false);hold.update(0,false,true);assert.equal(hold.progress,0);
 hold.update(1.5,true,true);hold.reset();assert.equal(hold.update(1,true,true),false);
 hold.update(0,true,false);assert.equal(hold.progress,0);
});
test('skipping original forest introduction executes its completion callbacks',()=>{
 const{game,host,events}=boot(0);for(let i=0;i<20&&!host.cutscene;i++)host.update(.05);
 assert.equal(host.cutscene,true);assert.equal(host.skipCutscene(),true);assert.equal(host.cutscene,false);assert.equal(host.vm.lastError,null);
 assert.ok(events.some(e=>e.type==='cutscene'&&!e.active));
 assert.equal(host.skippingCutscene,false);
 const after=events.length;assert.equal(host.skipCutscene(),false);assert.equal(events.length,after);
});
test('skipping fairy skill dialogue preserves potion branch and granted skill',()=>{
 const{game,host}=boot(0);for(let i=0;i<20&&!host.cutscene;i++)host.update(.05);host.skipCutscene();
 game.state.potions=10;game.trigger(game.find('csmc06_tr')[0]);for(let i=0;i<20&&!host.cutscene;i++)host.update(.05);
 assert.equal(host.cutscene,true);assert.equal(host.skipCutscene(),true);assert.equal(game.state.skill&1,1);assert.equal(host.vm.lastError,null);
});
test('witch laughter keeps its voice with an intentionally blank original subtitle',()=>{
 const{host,events}=boot(4);host.say('GRintro3');const event=events.at(-1);assert.equal(event.type,'dialogue');assert.equal(event.text,'');assert.ok(event.voice);
 host.say('unknown-resource-key');assert.equal(events.at(-1).text,'');
});
test('skipping cave boss introduction preserves stand-in withdrawal and subsequent arena door activation',()=>{
 const{game,host}=boot(3);
 for(let i=0;i<20&&!host.cutscene;i++)host.update(.05);host.skipCutscene();
 // The puzzle opens the arena door before RedCat can reach this trigger.
 game.setDoor(game.find('door_left_endbattle')[0],true);
 game.trigger(game.find('trigger_cuts05')[0]);
 for(let i=0;i<20&&!host.cutscene;i++)host.update(.05);
 assert.equal(host.cutscene,true);assert.equal(host.skipCutscene(),true);
 // Automatic door timing is gameplay time; closing it still runs its native enable command.
 game.setDoor(game.find('door_left_endbattle')[0],false);
 assert.equal(game.find('Max')[0].enabled,true);assert.equal(host.enemiesFrozen,false);assert.equal(host.vm.lastError,null);
 const standIn=game.find('max_actor')[0];assert.equal(game.objectPosition(standIn)[1],-37);
});

import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {levelSummary,awardLevelSummary,restoreLevelSummary} from '../src/debriefing.js';
const original=id=>JSON.parse(readFileSync(new URL(`../data/levels/${id}/level.json`,import.meta.url)));
test('original Dutch debriefing text, icon crops, timing and per-level totals are retained',()=>{
  const m=JSON.parse(readFileSync(new URL('../assets/debriefing/manifest.json',import.meta.url)));
  assert.deepEqual(['Debrief','Potion','Money','Enemy','Secret'].map(k=>m.text[k+'TXT']),['Overzicht','Magische flesjes','Geldzakjes','Vijanden','Geheimen']);
  assert.equal(Number(m.layout.ScoreMultiplier),15);assert.equal(Number(m.layout.StartDelay),1);
  assert.deepEqual([m.layout['ImagePotion.BaseX'],m.layout['ImagePotion.BaseY']],['0','210']);
  const totals=[[15,19,4,0],[30,30,40,5],[40,64,59,4],[50,64,42,4],[0,27,11,0]];
  for(let i=0;i<5;i++)assert.deepEqual(levelSummary(new Gameplay(original(`lvl0${i}a`),{deferInit:true})).rows.map(r=>r.total),totals[i]);
});
test('counts level objects, not cumulative inventory, money value or cheated supplies; bonus is awarded once',()=>{
  const g=new Gameplay(original('lvl01a'),{deferInit:true});
  g.state.potions=100;g.state.coins=900;g.state.kills=100;g.state.secrets=20;g.state.score=9000;
  g.objects.find(o=>o.subtype==='potion').collected=true;
  g.objects.find(o=>o.subtype==='coin').collected=true;
  g.objects.find(o=>o.kind==='enemy').health=0;
  g.objects.find(o=>Number(o.entity.IsSecret)===1).secretFound=true;
  g.completed=true;
  const result=awardLevelSummary(g);
  assert.deepEqual(result.rows.map(r=>r.found),[1,1,1,1]);assert.equal(result.bonus,60);assert.equal(g.state.score,9060);
  assert.deepEqual(awardLevelSummary(g),result);assert.equal(g.state.score,9060);
  const resumed=new Gameplay(g.level,{save:JSON.parse(JSON.stringify(g.snapshot()))});
  assert.deepEqual(awardLevelSummary(resumed),result);assert.equal(resumed.state.score,9060);
});
test('corrupt debriefing saves are rejected and final bonus obeys original maximum score',()=>{
  const g=new Gameplay(original('lvl00a'),{deferInit:true});g.state.score=999998;g.objects.find(o=>o.subtype==='potion').collected=true;
  const summary=levelSummary(g);assert.equal(summary.newScore,999999);
  for(const value of [null,{...summary,level:'lvl03a'},{...summary,bonus:-1},{...summary,rows:[...summary.rows,{kind:'Potion'}]}])assert.equal(restoreLevelSummary(value,g.level.id),null);
});
test('completion remains final while pickup/dialogue audio drains, even after lethal damage',()=>{
  const g=new Gameplay(original('lvl00a'),{deferInit:true,onEvent:e=>{if(e.type==='death')g.respawn();}});
  g.state.health=1;g.complete();awardLevelSummary(g);
  g.damage(999,'fall');g.damage(100,'water',{continuous:true});
  assert.equal(g.completed,true);assert.equal(g.state.health,1);assert.equal(g.state.lives,3);
});

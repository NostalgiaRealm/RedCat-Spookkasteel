import test from 'node:test';
import assert from 'node:assert/strict';
import {readHighscores,recordHighscore} from '../source/menu-highscores.js';
const save=(score,level='lvl01a')=>({version:1,level,position:[0,0,0],yaw:0,pitch:0,game:{version:1,level,state:{health:5,score}}});
test('original ten names and scores survive an empty or malformed store',()=>{
  const expected=readHighscores(null);
  assert.equal(expected.entries.length,10);assert.deepEqual(expected.entries[0],{id:'original:0',name:'Teun',score:100,level:null});
  assert.deepEqual(readHighscores({version:1,entries:[{name:'Bad',score:NaN}]}),expected);
});
test('opening highscores repeatedly retains one best result per player and its chapter',()=>{
  const player={id:'legacy',name:'Rick'},original=save(900);
  let table=recordHighscore(null,player,original);
  table=recordHighscore(table,player,original);
  table=recordHighscore(table,player,save(20));
  assert.equal(table.entries.filter(entry=>entry.id==='player:legacy').length,1);
  assert.equal(table.entries[0].score,900);assert.equal(table.entries[0].level,'lvl01a');
  assert.equal(original.game.state.score,900);
});
test('ties insert ahead of older scores, keep player identities separate and cap ten rows',()=>{
  let table=recordHighscore(null,{id:'one',name:'One'},save(100));
  table=recordHighscore(table,{id:'two',name:'Two'},save(100,'lvl04a'));
  assert.deepEqual(table.entries.slice(0,3).map(entry=>entry.name),['Two','One','Teun']);
  assert.equal(table.entries.length,10);
  assert.deepEqual(recordHighscore(table,{id:'one',name:'One'},save(-1)),table);
});

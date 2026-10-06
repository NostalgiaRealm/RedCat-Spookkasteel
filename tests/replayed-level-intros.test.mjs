import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';
import {LEVEL_IDS,readCampaignProgress,completeCampaignLevel,recordPlayedCampaignLevel,isCampaignLevelReplay} from '../src/campaign-progress.js';

const json=p=>JSON.parse(readFileSync(new URL('../'+p,import.meta.url)));
const levels=LEVEL_IDS.map(id=>json(`data/levels/${id}/level.json`)),programs=LEVEL_IDS.map(id=>json(`data/davi/${id}.json`));
const motions=LEVEL_IDS.map(id=>json(`data/motions/${id}.json`));
const checkpoint=(level,replayLevel)=>({version:1,level,position:[0,0,0],yaw:0,pitch:0,
  game:{version:1,level,state:{health:10},scripts:{version:1,...(replayLevel===undefined?{}:{replayLevel})}}});
function session(index,replayLevel=false,save=null){
  const events=[],game=new Gameplay(levels[index],{deferInit:true,onEvent:e=>events.push(e)});
  if(save)assert.ok(game.restore(save));
  const host=new ScriptHost(game,programs[index],{motions:motions[index],replayLevel});host.initialize(save?.scripts);
  assert.equal(host.vm.lastError,null);return {game,host,events};
}
const enabled=(game,name)=>game.find(name).map(o=>o.enabled);

test('unlocking a successor or cheating all levels open does not mark them played',()=>{
  const fresh=readCampaignProgress(null),next=completeCampaignLevel(fresh,'lvl00a');
  assert.equal(isCampaignLevelReplay(next,0),true);assert.equal(isCampaignLevelReplay(next,1),false);
  const cheat={...fresh,highestUnlocked:4};for(let i=0;i<5;i++)assert.equal(isCampaignLevelReplay(cheat,i),false);
  const played=recordPlayedCampaignLevel(cheat,'lvl02a');assert.equal(isCampaignLevelReplay(played,2),true);
  assert.equal(isCampaignLevelReplay(played,3),false);assert.equal(cheat.playedLevels,undefined);
});

test('legacy history uses only a valid saved chapter, never guessed unlocks or malformed records',()=>{
  const migrated=readCampaignProgress({version:1,highestUnlocked:4},checkpoint('lvl02a'));
  assert.deepEqual(migrated.playedLevels,['lvl02a']);
  const bad={...checkpoint('lvl03a'),position:[NaN,0,0]};assert.equal(readCampaignProgress(null,bad).playedLevels,undefined);
  assert.deepEqual(readCampaignProgress({version:1,highestUnlocked:4,playedLevels:['bad','lvl04a','lvl04a','lvl00a',null]}).playedLevels,['lvl00a','lvl04a']);
  assert.equal(isCampaignLevelReplay(migrated,2,{save:checkpoint('lvl02a')}),false,'legacy checkpoint keeps ordinary script behavior');
});

test('saved first-play and replay sessions override history, while new adventures reset only played history',()=>{
  const campaign={version:1,highestUnlocked:4,playedLevels:[...LEVEL_IDS],earnedSkills:15};
  assert.equal(isCampaignLevelReplay(campaign,0,{save:checkpoint('lvl00a',false)}),false);
  assert.equal(isCampaignLevelReplay({version:1,highestUnlocked:0},0,{save:checkpoint('lvl00a',true)}),true);
  assert.equal(isCampaignLevelReplay(campaign,0,{newAdventure:true}),false);
  const reset=recordPlayedCampaignLevel(campaign,'lvl00a',{newAdventure:true});
  assert.deepEqual(reset.playedLevels,['lvl00a']);assert.equal(reset.highestUnlocked,4);assert.equal(reset.earnedSkills,15,'skill reset remains owned by new-adventure flow');
  assert.equal(isCampaignLevelReplay(reset,1),false);assert.deepEqual(campaign.playedLevels,LEVEL_IDS);
});

test('native replay initialization disables only the eight Forest and two Graveyard tutorial triggers',()=>{
  const expected=[['csmc01_tr','csmc02_tr','csmc03_tr','csmc04_tr','csmc05_tr','csmc07_tr','csmc08_tr','csmc09_tr'],[],['csmc02_tr','csmc03_tr'],[],[]];
  for(let i=0;i<5;i++){
    const first=session(i),replay=session(i,true);
    const changed=replay.game.objects.filter((o,j)=>o.enabled!==first.game.objects[j].enabled).map(o=>o.entity.DaviName);
    assert.deepEqual(changed.sort(),[...expected[i]].sort(),LEVEL_IDS[i]);
    for(const name of expected[i]){assert.deepEqual(enabled(first.game,name),[true]);assert.deepEqual(enabled(replay.game,name),[false]);}
    assert.equal(replay.host.callNative('GetGameType'),1);assert.equal(first.host.callNative('GetGameType'),0);
  }
});

test('replay retains every skill encounter, boss sequence and the Cave exit controller',()=>{
  for(const [i,names]of [[0,['csmc06_tr','csmc10_tr']],[1,['choice_tr']],[2,['csmc05_tr']],[3,['trigger_cuts04','trigger_cuts05','trigger_cuts06']],[4,['trigger_cuts01','trigger_cuts02']]]){
    const {game}=session(i,true);for(const name of names){assert.ok(game.find(name).length,name);assert.deepEqual(enabled(game,name),[true],name);}
  }
});

test('save restoration preserves replay policy and existing triggers instead of applying initialization again',()=>{
  for(const replay of [false,true]){
    const source=session(0,replay);source.game.find('csmc02_tr')[0].enabled=!replay;
    const save=source.game.snapshot(),restored=session(0,!replay,save);
    assert.equal(restored.host.replayLevel,replay);assert.equal(restored.host.snapshot().replayLevel,replay);
    assert.deepEqual(enabled(restored.game,'csmc02_tr'),[!replay]);
  }
  const save=session(0).game.snapshot();delete save.scripts.replayLevel;
  const legacy=session(0,true,save);assert.equal(legacy.host.replayLevel,false);assert.deepEqual(enabled(legacy.game,'csmc02_tr'),[true]);
});

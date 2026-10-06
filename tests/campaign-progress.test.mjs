import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {LEVEL_IDS,CHAPTER_ART_SIZE,validAdventureSave,readCampaignProgress,canStartCampaignLevel,completeCampaignLevel,chapterArtwork} from '../src/campaign-progress.js';
const save=(level,completed=false)=>({version:1,level,position:[0,10,20],yaw:0,pitch:.16,game:{version:1,level,completed,state:{health:10,mirror:5,potions:100,score:9000}}});

test('fresh adventures expose only the forest and unlock one successor on earned completion',()=>{
  let progress=readCampaignProgress(null);
  assert.deepEqual(LEVEL_IDS.map((_,i)=>canStartCampaignLevel(progress,i)),[true,false,false,false,false]);
  for(const invalid of [-1,5,Infinity,NaN,1.5,'0',null])assert.equal(canStartCampaignLevel(progress,invalid),false);
  assert.deepEqual(completeCampaignLevel(progress,'lvl03a'),progress,'a locked chapter cannot grant unlocks');
  for(let i=0;i<5;i++){
    const previous=structuredClone(progress),next=completeCampaignLevel(progress,LEVEL_IDS[i]);
    assert.deepEqual(progress,previous,'caller owns persistence; helpers do not mutate state');
    assert.equal(next.highestUnlocked,Math.min(4,i+1));progress=next;
  }
  assert.equal(completeCampaignLevel(progress,'not-a-level').highestUnlocked,4);
});

test('valid legacy checkpoints preserve reached chapters and completion without trusting inventory cheats',()=>{
  const ordinary=save('lvl02a');assert.equal(validAdventureSave(ordinary),true);
  assert.equal(readCampaignProgress(null,ordinary).highestUnlocked,2);
  assert.equal(readCampaignProgress(null,save('lvl02a',true)).highestUnlocked,3);
  assert.equal(readCampaignProgress(null,save('lvl04a',true)).highestUnlocked,4);
  assert.equal(readCampaignProgress(null,save('lvl00a')).highestUnlocked,0,'maximum cheated supplies do not unlock anything');
  const incomplete=save('lvl00a');incomplete.game.completed=1;
  assert.equal(readCampaignProgress(null,incomplete).highestUnlocked,0,'only an actual completion flag advances');
  const originalSnapshot=save('lvl03a');originalSnapshot.game=new Gameplay({id:'lvl03a',entities:[]}).snapshot();
  assert.equal(validAdventureSave(originalSnapshot),true,'real v1 gameplay snapshots remain compatible');
  assert.equal(readCampaignProgress(null,originalSnapshot).highestUnlocked,3);
});

test('earned progress survives earlier replays, save overwrites, difficulty changes and malformed records',()=>{
  const earned={version:1,highestUnlocked:4};
  for(const checkpoint of [save('lvl00a'),save('lvl01a',true),{...save('lvl00a'),difficulty:'Hard'},null])assert.deepEqual(readCampaignProgress(earned,checkpoint),{...earned,...(checkpoint?{playedLevels:[checkpoint.level]}:{})});
  assert.deepEqual(completeCampaignLevel(earned,'lvl00a'),{...earned,playedLevels:['lvl00a']});
  for(const invalid of [null,{},[],{version:2,highestUnlocked:4},{version:1,highestUnlocked:999},{version:1,highestUnlocked:-1},{version:1,highestUnlocked:'4'}])assert.equal(readCampaignProgress(invalid).highestUnlocked,0);
  for(const invalid of [{...save('lvl04a'),version:2},{...save('lvl04a'),position:[0,0,NaN]},{...save('lvl04a'),yaw:'0'},{...save('lvl04a'),level:'../../bad'},{...save('lvl04a'),game:[]}]){
    assert.equal(validAdventureSave(invalid),false);assert.equal(readCampaignProgress(null,invalid).highestUnlocked,0);
  }
  for(const game of [{},{...save('lvl04a').game,version:2},{...save('lvl04a').game,level:'lvl00a'},
    ...[undefined,null,[],{},'health:10',{health:'10'},{health:NaN},{health:Infinity}].map(state=>({...save('lvl04a').game,state}))]){
    const invalid={...save('lvl04a'),game};
    assert.equal(validAdventureSave(invalid),false);assert.equal(readCampaignProgress(null,invalid).highestUnlocked,0,'malformed nested snapshots cannot unlock chapters');
  }
});

test('chapter states use original resources with their recorded uncropped dimensions',()=>{
  assert.deepEqual(CHAPTER_ART_SIZE,{width:150,height:171});
  for(let i=0;i<5;i++)for(const [options,state] of [[{unlocked:true},0],[{unlocked:true,hovered:true},1],[{unlocked:true,selected:true},2],[{unlocked:true,pressed:true},2],[{},3],[{hovered:true},4],[{selected:true},3]]){
    const path=chapterArtwork(i,options);assert.equal(path,`assets/menu/040${i}000${state}.png`);
    const bytes=readFileSync(new URL('../'+path,import.meta.url));assert.equal(bytes.readUInt32BE(16),state===4?130:150);assert.equal(bytes.readUInt32BE(20),state===4?162:171);
  }
  for(const invalid of [-1,5,'1',NaN])assert.equal(chapterArtwork(invalid,{unlocked:true}),null);
});

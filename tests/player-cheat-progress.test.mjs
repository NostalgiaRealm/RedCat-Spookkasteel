import test from 'node:test';
import assert from 'node:assert/strict';
import {Gameplay} from '../src/gameplay.js';
import {CastleWorld} from '../src/world.js';
import {PlayerController} from '../src/collision.js';
import {ScriptHost} from '../src/script-host.js';
import {setNoClip} from '../src/cheats.js';
import {readCampaignProgress,earnCampaignSkill,campaignSkills,completeCampaignLevel} from '../src/campaign-progress.js';

const level={id:'lvl00a',entities:[],spawn:{position:[0,0,0]},bounds:{min:[-100,-100,-100],max:[100,100,100]}};
async function setup(save=null){
  const events=[],world=new CastleWorld({},{});
  world.collider={trace:()=>({fraction:1,startSolid:false})};world.physicalModels=[0];
  world.player=new PlayerController(world.collider,[0,0,0]);
  const game=new Gameplay(level,{save,onEvent:e=>events.push(e)});
  // Actual attachment installs the live immunity hook; no assets are needed.
  await world.attachGameplay(game);world.level=level;
  return {world,game,events};
}
test('no-clip ignores normal, continuous and lethal scripted damage, and immediately restores normal damage on exit',async()=>{
  const {world,game,events}=await setup(),health=game.state.health,lives=game.state.lives;
  setNoClip(world,true);
  game.damage(2,'enemy');game.damage(.25,'water',{continuous:true});game.damage(100,'fall');
  const host=new ScriptHost(game,{version:27});host.callNative('KillPlayer',[]);
  assert.equal(game.state.health,health);assert.equal(game.state.lives,lives);
  assert.deepEqual(events,[]);assert.equal(game.hitCooldown,0);
  assert.equal(setNoClip(world,false).enabled,false);
  game.damage(2,'enemy');assert.equal(game.state.health,health-2);
  assert.equal(events.filter(e=>e.type==='damage').length,1);
});
test('restored no-clip and blocked no-clip exits retain immunity',async()=>{
  const {world,game}=await setup();
  world.player.noClip=true;world.collider.trace=()=>({fraction:0,startSolid:true});
  assert.equal(setNoClip(world,false).blocked,true);
  game.damage(999);assert.equal(game.state.health,10);
  const restored=await setup(game.snapshot());restored.world.player.noClip=true;
  restored.game.damage(999,null,{continuous:true});assert.equal(restored.game.state.health,10);
});
test('earned abilities persist independently of a chapter save, replay, completion and level unlock cheats',()=>{
  let progress=readCampaignProgress(null);
  progress=earnCampaignSkill(progress,3);progress=earnCampaignSkill(progress,2);
  assert.equal(campaignSkills(progress),12);
  progress=completeCampaignLevel(progress,'lvl00a');
  progress=readCampaignProgress(JSON.parse(JSON.stringify({...progress,highestUnlocked:4})));
  assert.equal(campaignSkills(progress),12);
  for(const id of ['lvl00a','lvl02a','lvl03a','lvl04a']){
    const game=new Gameplay({...level,id});game.state.skill|=campaignSkills(progress);
    assert.equal(game.state.skill&12,12);
  }
  for(const invalid of [-1,5,NaN,'3',null])assert.deepEqual(earnCampaignSkill(progress,invalid),progress);
  for(const invalid of [-1,32,Infinity,'12'])assert.equal(campaignSkills({version:1,earnedSkills:invalid}),0);
});
test('valid older checkpoints migrate learned abilities without trusting malformed saves or inventory cheats',()=>{
  const game=new Gameplay(level);game.state.skill=13;
  const save={version:1,level:level.id,position:[0,0,0],yaw:0,pitch:0,game:game.snapshot()};
  assert.equal(campaignSkills(readCampaignProgress(null,save)),13);
  assert.equal(campaignSkills(readCampaignProgress(null,{...save,position:[NaN,0,0]})),0);
  game.state.skill=0;game.state.potions=100;game.state.mirror=5;game.state.score=9000;save.game=game.snapshot();
  assert.equal(campaignSkills(readCampaignProgress(null,save)),0);
  assert.equal(campaignSkills(readCampaignProgress({version:1,highestUnlocked:4,earnedSkills:12},save)),12);
});

import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {beamTouchesPlayer,beamEndpoints} from '../src/beam-contacts.js';

const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
const caves=json('data/levels/lvl03a/level.json');
function fixture(overrides={}) {
  const level={id:'beam-fixture',entities:[{classname:'EffectBeamEntity','%name%':'beam',Origin:'-80 25 0',BeamEndPoint:'end',DamagePerSecond:'100',TriggerDelay:'1',CommandOnEnter:'activated = 1',...overrides},{classname:'EffectEndPoint','%name%':'end',Origin:'80 25 0'}]};
  const game=new Gameplay(level,{deferInit:true});game.state.health=game.state.maxHealth=100;
  return {game,beam:game.find('beam')[0],level};
}

test('beam intersection clips the actual segment and the complete swept player hull',()=>{
  assert.equal(beamTouchesPlayer([-80,25,0],[80,25,0],[0,0,-30],[0,0,30]),true);
  assert.equal(beamTouchesPlayer([0,20,0],[100,20,100],[0,0,100],[0,0,100]),false);
  assert.equal(beamTouchesPlayer([-80,25,0],[80,25,0],[0,30,0],[0,30,0]),false);
  assert.equal(beamTouchesPlayer([-80,80,0],[80,80,0],[0,0,0],[0,0,0]),false);
});

test('beam contact applies native dt times DPS, delays the callback and next trace, and survives saving',()=>{
  const {game,beam,level}=fixture();game.hitCooldown=5;game.state.health=game.state.maxHealth=20;
  game.update(.025,[0,0,0]);assert.equal(game.state.health,17.5);assert.equal(beam.beamContactDelay,1);assert.equal(game.variables.has('activated'),false);
  for(let i=0;i<10;i++)game.update(.025,[0,0,0]);assert.equal(game.state.health,17.5);
  const save=JSON.parse(JSON.stringify(game.snapshot())),restored=new Gameplay(level,{save,deferInit:true});
  for(let i=0;i<30;i++)restored.update(.025,[0,0,0]);
  assert.equal(restored.variables.get('activated'),1);assert.equal(restored.state.health,17.5);
  restored.update(.025,[0,0,0]);assert.equal(restored.state.health,15);
});

test('disabled, hidden and once-only beams reject further contacts; type 3 does not arm a command delay',()=>{
  const {game,beam}=fixture({TriggerOnce:'1'});beam.enabled=false;game.update(.025,[0,0,0]);assert.equal(game.state.health,100);
  beam.enabled=true;beam.visible=false;game.update(.025,[0,0,0]);assert.equal(game.state.health,100);
  beam.visible=true;game.update(.025,[0,0,0]);for(let i=0;i<80;i++)game.update(.025,[0,0,0]);assert.equal(game.state.health,97.5);
  const special=fixture({Type:'3'});special.game.update(.025,[0,0,0]);special.game.update(.025,[0,0,0]);
  assert.equal(special.game.state.health,95);assert.equal(special.beam.beamContactDelay,undefined);assert.equal(special.game.variables.has('activated'),false);
});

test('beam endpoints follow brush motions and optional nearest-wall clipping',()=>{
  const {game,beam}=fixture({StickToNearestWall:'1'});beam.modelIndex=3;
  game.scripts={modelTransforms:new Map([[3,{origin:[0,0,0],translation:[0,10,0],rotation:[0,0,0,1]}]])};
  assert.deepEqual(beamEndpoints(game,beam,(a,b)=>({end:[0,b[1],b[2]]})),{start:[-80,35,0],end:[0,25,0]});
});

test('all four original Cave boss gate beams damage RedCat until the original group is disabled',()=>{
  const game=new Gameplay(caves,{deferInit:true});for(const object of game.objects)if(object.entity.classname!=='EffectBeamEntity')object.enabled=false;
  game.state.health=game.state.maxHealth=100;game.hitCooldown=5;
  const beams=game.find('endboss_beams');assert.equal(beams.length,4);
  const {start,end}=beamEndpoints(game,beams[0]),center=start.map((v,i)=>(v+end[i])/2);center[1]=0;
  game.update(.025,center);assert.equal(game.state.health,90);
  for(const beam of beams)game.command(beam,'disable');for(let i=0;i<80;i++)game.update(.025,center);
  assert.equal(game.state.health,90);
});

test('lethal beam contact stops before later beams can damage the respawned player',()=>{
  const {game,beam}=fixture();game.objects.push({...beam,id:'second'});game.state.health=1;
  game.onEvent=event=>{if(event.type==='death')game.respawn();};const lives=game.state.lives;
  game.update(.025,[0,0,0]);assert.equal(game.state.lives,lives-1);assert.equal(game.state.health,game.state.maxHealth);
});

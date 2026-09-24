import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';
import {CastleWorld,triggerOnlyModels} from '../src/world.js';
import {BspCollider} from '../src/collision.js';

const json=p=>JSON.parse(readFileSync(new URL('../'+p,import.meta.url)));
const level=json('data/levels/lvl03a/level.json');
function boot(save) {
  const game=new Gameplay(level,{deferInit:true});if(save)game.restore(save);
  const host=new ScriptHost(game,json('data/davi/lvl03a.json'),{motions:json('data/motions/lvl03a.json')});host.initialize(save?.scripts);
  if(!save)for(const motion of host.players.values())motion.stop();
  const names=new Map(level.entities.filter(e=>e.classname==='%Model%').map(e=>[e['%name%'],Number(e.Model)]));
  const triggers=triggerOnlyModels(level.entities,names),collider=new BspCollider(level.collision);
  const world=Object.create(CastleWorld.prototype);
  Object.assign(world,{gameplay:game,collider,physicalModels:[...level.collision.models.keys()].filter(i=>!triggers.has(i)),modelMeshes:new Map()});
  world.syncModels();
  return {game,host,world,collider};
}
const cross=(app,reverse=false)=>{
  const ends=[[-1850,100,-1800],[-1690,100,-1800]];if(reverse)ends.reverse();
  return app.collider.trace(...ends,[-11,0,-11],[11,56,11],[110,122]);
};
const press=(app,name)=>{
  const button=app.game.find(name)[0];app.game.switchButton(button);assert.equal(button.switchedOn,true);
  for(let elapsed=0;elapsed<12;elapsed+=.025)app.host.update(.025);
  app.world.syncModels();
};

test('native cave doorway retains its invisible lock until all three rotating buttons are pressed',()=>{
  const app=boot(),lock=app.game.find('draai_opening01')[0];
  assert.equal(lock.modelIndex,122);assert.equal(level.collision.models[122].numFaces,0);
  assert.equal(level.groups.some(g=>g.model===122),false);
  assert.equal(app.collider.disabledModels.has(122),false);assert.ok(cross(app).fraction<1);
  for(const name of ['draai_button01','draai_button02']){
    press(app,name);assert.equal(lock.visible,true);assert.ok(cross(app).fraction<1);
  }
  press(app,'draai_button03');
  assert.equal(app.game.find('draai_opening02')[0].triggerCount,3);
  assert.equal(lock.visible,false);assert.equal(app.collider.disabledModels.has(122),true);
  assert.equal(cross(app).fraction,1);assert.equal(cross(app,true).fraction,1);
  assert.equal(app.host.vm.lastError,null);
});

test('saved three-button doorway restores both moving wood and hidden collision before the first frame',()=>{
  const app=boot();for(const name of ['draai_button01','draai_button02','draai_button03'])press(app,name);
  const saved=app.game.snapshot(),restored=boot(saved);
  assert.deepEqual(restored.host.modelTransforms.get(110),app.host.modelTransforms.get(110));
  assert.equal(restored.game.find('draai_opening01')[0].visible,false);
  assert.equal(restored.collider.disabledModels.has(122),true);
  assert.equal(cross(restored).fraction,1);assert.equal(cross(restored,true).fraction,1);
  assert.equal(restored.game.find('draai_button03')[0].switchedOn,true);
  assert.equal(restored.host.vm.lastError,null);
});

test('collision-only brushes also reappear when explicitly shown',()=>{
  const app=boot(),lock=app.game.find('draai_opening01')[0];
  app.game.command(lock,'hide');app.world.syncModels();assert.equal(app.collider.disabledModels.has(122),true);
  app.game.command(lock,'show');app.world.syncModels();assert.equal(app.collider.disabledModels.has(122),false);
});

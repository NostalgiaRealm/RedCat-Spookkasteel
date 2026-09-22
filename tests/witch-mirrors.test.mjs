import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Box3,BufferGeometry,Float32BufferAttribute,MeshBasicMaterial,Vector3} from 'three';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';
import {actorVisible,CastleWorld} from '../src/world.js';
import {actorOrientation} from '../src/actor-placement.js';
const json=p=>JSON.parse(readFileSync(new URL('../'+p,import.meta.url)));
const level=json('data/levels/lvl04a/level.json');
function boot(save){
  const game=new Gameplay(level,{deferInit:true,save});
  const host=new ScriptHost(game,json('data/davi/lvl04a.json'),{motions:json('data/motions/lvl04a.json')});
  host.initialize(save?.scripts);return {game,host,o:name=>game.find(name)[0]};
}
test('the combat Witch stays hidden before the original intro handoff, including old saves',()=>{
  const {game,host,o}=boot(),witch=o('The_Witch');
  assert.equal(witch.entity.IsInitiallyEnabled,'0');assert.equal(actorVisible(witch,0),false);
  const restored=boot(game.snapshot());assert.equal(actorVisible(restored.o('The_Witch'),0),false);
  game.command(o('door_witch01'),'open');game.command(o('trigger_witchmodel'),'enable');
  for(let i=0;i<360;i++)host.update(.1);
  assert.equal(host.cutscene,true);assert.equal(witch.enabled,false);assert.equal(actorVisible(witch,0),false);
  assert.equal(actorVisible(o('witch_model'),0),true);
  for(let i=0;i<10;i++)host.update(.1);
  assert.equal(witch.enabled,true);assert.equal(actorVisible(witch,0),true);
  const active=boot(game.snapshot());assert.equal(actorVisible(active.o('The_Witch'),0),true);
  for(const type of ['brutusm','gargoyle'])assert.equal(actorVisible({kind:'enemy',enemyType:type,health:10,enabled:false},0),true);
  assert.equal(host.vm.lastError,null);
});
test('five tower mirrors retain native upright basis, two-part 112-unit exchange and fifth-piece gate across saves',()=>{
  const {game,host,o}=boot(),world=new CastleWorld({},{}),manifest=json('assets/actors/manifest.json').actors;
  try {
    for(let i=1;i<=5;i++){
      const suffix=String(i).padStart(2,'0'),mirror=o('mirror'+suffix),standard=o('standaard'+suffix);
      for(const object of [mirror,standard]){
        const stem=object.actorFile.replace(/\.act$/i,''),data=json('assets/actors/'+stem+'.json');
        assert.deepEqual(data.settings.initialRotationDegrees,[-90,0,0]);assert.deepEqual(manifest[stem].settings,data.settings);
        const geometry=world.track(new BufferGeometry());geometry.setAttribute('position',new Float32BufferAttribute(data.positions,3));
        const actor=world.instantiateActor({data,geometry,materials:[world.track(new MeshBasicMaterial())]},{scale:1});
        actor.position.fromArray(game.objectPosition(object));actor.quaternion.copy(actorOrientation(object,data.settings));actor.updateMatrixWorld(true);
        const up=new Vector3(0,0,1).transformDirection(actor.userData.mesh.matrixWorld);assert.ok(Math.abs(up.y-1)<1e-8);
        const size=new Box3().setFromObject(actor).getSize(new Vector3());assert.ok(size.y>34,'native actor stands upright');
      }
      const ctl=o('move_standaard'+suffix+'a'),clip=host.players.get(ctl.id).motion;
      assert.equal(clip.endTime,.01,'retain original fast exchange, do not invent slow animation');
      assert.equal(game.objectPosition(mirror)[1],2304);
      if(i===5){game.trigger(o('trigger_sokkel05'));host.update(.1);assert.equal(game.objectPosition(mirror)[1],2304);game.pickup(o('laatste'));}
      game.trigger(o('trigger_sokkel'+suffix));host.update(.01);
      assert.equal(game.objectPosition(mirror)[1],2416);assert.equal(game.objectPosition(standard)[1],2304);
    }
    const loaded=boot(game.snapshot());
    for(let i=1;i<=5;i++)assert.equal(loaded.game.objectPosition(loaded.o('mirror'+String(i).padStart(2,'0')))[1],2416);
    assert.equal(game.completed,false,'last piece is used locally');assert.equal(host.vm.lastError,null);
  }finally{world.dispose();}
});

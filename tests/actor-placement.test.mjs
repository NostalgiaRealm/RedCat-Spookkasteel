import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {BufferGeometry,Float32BufferAttribute,Group,Mesh,MeshBasicMaterial,Vector3} from 'three';
import {actorOrientation,attachedActorVisible} from '../src/actor-placement.js';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';
import {CastleWorld} from '../src/world.js';
import {BspCollider} from '../src/collision.js';

const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
const near=(actual,expected)=>actual.forEach((value,index)=>assert.ok(Math.abs(value-expected[index])<1e-7,`${actual} != ${expected}`));
const direction=(q,vector)=>new Vector3(...vector).applyQuaternion(q).toArray();
const fixture={id:'lvl00a',spawn:{position:[0,0,0]},entities:[
  {classname:'%Model%','%name%':'support',Model:'1'},
  {classname:'ModelController','%name%':'controller',Model:'support',Origin:'10 20 30',IsInitiallyEnabled:'1'},
  {classname:'AdamAnyActor','%name%':'actor',ActorFileName:'cannball_rol.act',Model:'support',Origin:'14 20 30',RotateX:'0',RotateY:'0',RotateZ:'0'},
  {classname:'ItemPotion','%name%':'potion',Model:'support',Origin:'14 20 30'},
]};
function boot(save=null) {
  const game=new Gameplay(fixture,{deferInit:true,save});
  const host=new ScriptHost(game,{version:27},{motions:{motions:[{model:1,origin:[10,20,30],startTime:0,endTime:1,paths:[],events:[]}]}});
  if(save?.scripts)host.restore(save.scripts);
  return {game,host,actor:game.find('actor')[0],controller:game.find('controller')[0],potion:game.find('potion')[0]};
}

test('actor orientation applies native world-axis script and spin rotations before the brush rotation',()=>{
  const object={entity:{RotateZ:'90'},rotation:[Math.PI/2,0,0],actorAge:1};
  const q=actorOrientation(object,{rotationDegreesPerSecond:[0,90,0]}, {rotation:[0,Math.SQRT1_2,0,Math.SQRT1_2]});
  // Native RotateX/Y/Z premultiply: X becomes Y after the entity Z turn,
  // Z after the script X turn, X after spin, then -Z after the brush turn.
  near(direction(q,[1,0,0]),[0,0,-1]);
  assert.ok(Math.abs(q.length()-1)<1e-10);
  // The imported mesh basis is applied on the child mesh, not a second time
  // on the world group when an actor has no entity rotation or spin.
  near(direction(actorOrientation({entity:{}},{initialRotationDegrees:[-90,0,0]}),[0,1,0]),[0,1,0]);
});

test('original castle balls and cave rocks spin one revolution per second in opposite authored directions',()=>{
  for(const [stem,z] of [['cannball_rol',-1],['rol_rots',1]]) {
    const settings=json(`assets/actors/${stem}.json`).settings;
    assert.deepEqual(settings.rotationDegreesPerSecond,[z*360,0,0]);
    near(direction(actorOrientation({entity:{},actorAge:.25},settings),[0,1,0]),[0,0,z]);
    near(direction(actorOrientation({entity:{},actorAge:1.25},settings),[0,1,0]),[0,0,z]);
  }
});

test('attached actor and pickup anchors rotate about the model pivot without accumulating displacement',()=>{
  const {game,host,actor,potion}=boot();
  host.modelTransforms.set(1,{origin:[10,20,30],translation:[2,3,4],rotation:[0,Math.SQRT1_2,0,Math.SQRT1_2]});
  for(const object of [actor,potion]) {
    for(let i=0;i<10;i++)near(game.objectPosition(object),[12,23,30]);
    assert.deepEqual(object.position,[14,20,30]);
  }
  host.modelTransforms.get(1).translation=[20,0,0];
  near(game.objectPosition(actor),[30,20,26]);
  actor.modelIndex=undefined;assert.deepEqual(game.objectPosition(actor),[14,20,30]);
});

test('controller Disable pauses the support without hiding its actor, whereas Hide removes both',()=>{
  const {game,actor,controller,potion}=boot();
  assert.equal(attachedActorVisible(actor,game),true);
  game.command(controller,'disable');
  assert.equal(attachedActorVisible(actor,game),true);assert.equal(game.modelState(1).solid,true);
  game.command(controller,'hide');
  assert.equal(attachedActorVisible(actor,game),false);assert.equal(game.modelState(1).visible,false);assert.equal(game.modelState(1).solid,false);
  game.command(controller,'show');
  // Attached visuals and collected items do not own the moving support.
  actor.visible=false;actor.health=0;potion.collected=true;
  assert.equal(game.modelState(1).visible,true);assert.equal(game.modelState(1).solid,true);
  controller.health=0;assert.equal(attachedActorVisible(actor,game),false);
});

test('saving preserves local actor age, script rotation and its unmodified anchor while restoring the brush pose',()=>{
  const scene=boot();scene.actor.actorAge=12.25;scene.actor.rotation=[.1,.2,.3];
  scene.host.modelTransforms.set(1,{origin:[10,20,30],translation:[2,3,4],rotation:[0,Math.SQRT1_2,0,Math.SQRT1_2]});
  const pose=actorOrientation(scene.actor,{rotationDegreesPerSecond:[-360,0,0]},scene.host.modelTransforms.get(1));
  const snapshot=scene.game.snapshot(),savedActor=snapshot.objects.find(object=>object.id===scene.actor.id);
  scene.actor.rotation[0]=99;assert.equal(savedActor.rotation[0],.1,'Snapshot must copy script rotation');
  const restored=boot(JSON.parse(JSON.stringify(snapshot)));
  assert.equal(restored.actor.actorAge,12.25);assert.deepEqual(restored.actor.rotation,[.1,.2,.3]);
  assert.deepEqual(restored.actor.position,[14,20,30]);near(restored.game.objectPosition(restored.actor),[12,23,30]);
  near(direction(actorOrientation(restored.actor,{rotationDegreesPerSecond:[-360,0,0]},restored.host.modelTransforms.get(1)),[1,0,0]),direction(pose,[1,0,0]));
});

test('an off-camera actor advances its authored animation clock and resumes the current pose when approached',()=>{
  const {game,actor}=boot(),world=new CastleWorld({},{}),instance=new Group(),sampled=[];
  actor.position=[3000,0,0];
  instance.userData.template={data:{settings:{rotationDegreesPerSecond:[360,0,0]}}};
  instance.userData.animator={timeScale:.25,time:0,update(){sampled.push(this.time);}};
  world.gameplay=game;world.actorInstances.set(actor.id,instance);world.scene.add(instance);
  try {
    world.syncActors(1);assert.equal(actor.actorAge,1);assert.equal(instance.userData.animator.time,.25);assert.deepEqual(sampled,[]);
    world.camera.position.set(3000,0,0);world.syncActors(0);assert.deepEqual(sampled,[.25]);
    actor.enabled=false;world.syncActors(1);assert.equal(actor.actorAge,1);
    actor.enabled=true;world.syncActors(.5);assert.equal(actor.actorAge,1.5);assert.equal(sampled.at(-1),.375);
  } finally {world.dispose();}
});

test('moving a model-attached prop refreshes its existing collision surface and Hide disables it',()=>{
  const {game,host,actor,controller}=boot(),world=new CastleWorld({},{}),instance=new Group();
  const geometry=world.track(new BufferGeometry());
  geometry.setAttribute('position',new Float32BufferAttribute([0,0,-10,0,10,-10,0,10,10,0,0,-10,0,10,10,0,0,10],3));
  const mesh=new Mesh(geometry,world.track(new MeshBasicMaterial()));instance.add(mesh);
  instance.userData={mesh,template:{data:{settings:{blocksPlayer:true}}}};
  world.gameplay=game;world.collider=new BspCollider({planes:[],nodes:[],leaves:[],leafSides:[],models:[]});
  world.actorInstances.set(actor.id,instance);world.scene.add(instance);
  try {
    instance.position.fromArray(actor.position);const record=world.registerActorCollision(actor,instance);
    assert.equal(record.supportModelIndex,actor.modelIndex);
    const ray=(x1,x2)=>world.collider.trace([x1,22,30],[x2,22,30]);
    assert.equal(ray(0,30).actorId,actor.id);
    host.modelTransforms.get(1).translation=[100,0,0];world.syncActors(.1);
    assert.equal(world.collider.actors.length,1);assert.equal(instance.userData.collisionRecord,record);
    assert.equal(ray(0,30).fraction,1);assert.equal(ray(100,130).actorId,actor.id);
    game.command(controller,'hide');assert.equal(ray(100,130).fraction,1);
  } finally {world.dispose();}
});

test('the frame queries attached prop collision at the newly advanced support pose without advancing its animation twice',()=>{
  const {game,host,actor}=boot(),world=new CastleWorld({},{}),instance=new Group(),queries=[],samples=[];
  const geometry=world.track(new BufferGeometry());
  geometry.setAttribute('position',new Float32BufferAttribute([0,0,-10,0,10,-10,0,10,10,0,0,-10,0,10,10,0,0,10],3));
  const mesh=new Mesh(geometry,world.track(new MeshBasicMaterial()));instance.add(mesh);
  instance.userData={mesh,template:{data:{settings:{blocksPlayer:true,canBeShot:true}}},animator:{timeScale:1,time:0,update(){samples.push(this.time);}}};
  world.gameplay=game;world.level={...fixture,bounds:{min:[-1000,-1000,-1000],max:[1000,1000,1000]}};
  world.collider=new BspCollider({planes:[],nodes:[],leaves:[],leafSides:[],models:[]});world.physicalModels=[];
  world.actorInstances.set(actor.id,instance);world.scene.add(instance);
  instance.position.fromArray(actor.position);world.registerActorCollision(actor,instance);
  const check=mask=>queries.push({old:world.collider.trace([0,22,30],[30,22,30],[0,0,0],[0,0,0],[],mask).fraction,
    next:world.collider.trace([100,22,30],[130,22,30],[0,0,0],[0,0,0],[],mask).actorId});
  world.player={position:[500,0,0],mins:[-11,0,-11],maxs:[11,56,11],noClip:false,grounded:false,update:()=>check('blocksPlayer')};
  host.update=()=>{host.modelTransforms.get(1).translation=[100,0,0];};
  game.update=()=>check('canBeShot');world.syncPlayer=()=>{};world.updateCamera=()=>{};
  try {
    world.update(.1,{forward:0,right:0});
    assert.deepEqual(queries,[{old:1,next:actor.id},{old:1,next:actor.id}]);
    assert.equal(actor.actorAge,.1);assert.deepEqual(samples,[.1]);assert.equal(world.collider.actors.length,1);
  } finally {world.dispose();}
});

test('all original decorative actors resolve their assets, explicit motions and moving-model attachments',()=>{
  const manifest=json('assets/actors/manifest.json').actors;
  let actors=0,attachments=0,motions=0;
  for(let i=0;i<5;i++) {
    const level=json(`data/levels/lvl0${i}a/level.json`),models=new Map(level.entities.filter(e=>e.classname==='%Model%').map(e=>[e['%name%'].toLowerCase(),Number(e.Model)]));
    for(const entity of level.entities.filter(e=>e.classname==='AdamAnyActor')) {
      actors++;
      const name=entity.ActorFileName.replace(/^.*[\\/]/,'').replace(/\.act$/i,'').toLowerCase(),asset=manifest[name];
      assert.ok(asset,`${level.id} ${entity['%name%']}: missing actor ${name}`);
      assert.ok(asset.vertices>0&&asset.triangles>0,`${name}: empty geometry`);
      if(entity.MotionName) {
        motions++;assert.ok(asset.animations.some(name=>name.toLowerCase()===entity.MotionName.toLowerCase()),`${entity['%name%']}: missing ${entity.MotionName}`);
      }
      if(entity.Model) {
        attachments++;assert.ok(models.has(entity.Model.toLowerCase()),`${entity['%name%']}: missing support ${entity.Model}`);
        const index=models.get(entity.Model.toLowerCase());assert.ok(level.collision.models[index],`${entity.Model}: no BSP brush`);
      }
    }
  }
  assert.deepEqual({actors,attachments,motions},{actors:710,attachments:29,motions:56});
});

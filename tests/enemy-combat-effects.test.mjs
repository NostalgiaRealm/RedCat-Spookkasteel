import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync,existsSync} from 'node:fs';
import {Group,PerspectiveCamera} from 'three';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';
import {CastleWorld,actorVisible} from '../src/world.js';
import {attachedActorVisible} from '../src/actor-placement.js';
import {updateBoss} from '../src/boss-ai.js';
import {enemyDeathOpacity,DEATH_SMOKE_TEXTURE} from '../src/enemy-death-effects.js';
import {jesterTeleportParticles,EnemyCombatEffects} from '../src/enemy-combat-effects.js';

const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
function scene(id,save=null) {
  const game=new Gameplay(json(`data/levels/${id}/level.json`),{deferInit:true,save}),host=new ScriptHost(game,json(`data/davi/${id}.json`),{motions:json(`data/motions/${id}.json`)});
  host.initialize(save?.scripts);return {game,host};
}
function advance(host,seconds){for(let t=0;t<seconds;t+=.05)host.update(.05);}

test('defeated boss retires during frozen fairy dialogue while RedCat returns to animated idle',()=>{
  const {game,host}=scene('lvl03a'),boss=game.find('Max')[0];
  boss.enabled=true;boss.animationDurations={death:1};game.destroy(boss);
  host.cutscene=true;host.enemiesFrozen=true;game.state.skill=7;
  game.pendingPlayerAttack={at:game.time+.2};game.playerAttackUntil=game.time+1;game.playerCharge={age:1};
  const calls=[],a=new Group();a.userData.stateAnimator={update:(...args)=>calls.push(args)};
  const idle=[],redcat=new Group();redcat.userData.animator={play:(...args)=>idle.push(['play',...args]),update:dt=>idle.push(['update',dt])};
  const world=Object.assign(Object.create(CastleWorld.prototype),{gameplay:game,actorInstances:new Map([[boss.id,a]]),bossMachines:new Map(),camera:new PerspectiveCamera(),track:v=>v,settings:{camera:'third'},redcat,player:{position:[0,0,0],grounded:false,velocityY:120},yaw:0});
  game.update(.1,[0,0,0]);world.syncActors(.1);world.syncPlayer(.1,{jump:true,attack:true});
  assert.equal(calls.at(-1)[2],false);assert.deepEqual(idle,[['play','idle',true],['update',.1]]);
  assert.equal(game.pendingPlayerAttack,null);assert.equal(game.playerCharge,null);assert.equal(game.playerAttackUntil,0);
  const death=boss.deathStartedAt;for(let t=0;t<8;t+=.1)game.update(.1,[0,0,0]);
  assert.equal(boss.deathStartedAt,death);assert.equal(enemyDeathOpacity(boss,game.time),0);assert.equal(actorVisible(boss,game.time),false);
});

test('cave intro double retires after withdrawal and remains retired after turret defeat and loading',()=>{
  const {game,host}=scene('lvl03a');advance(host,60);
  const double=game.find('max_actor')[0];assert.equal(attachedActorVisible(double,game),true);
  game.trigger(game.find('trigger_cuts05')[0]);advance(host,15.5);assert.equal(attachedActorVisible(double,game),true);
  advance(host,2);assert.deepEqual(game.objectPosition(double),[2,-37,-2143]);assert.equal(attachedActorVisible(double,game),false);
  game.destroy(game.find('Max')[0]);assert.equal(attachedActorVisible(double,game),false);
  const restored=scene('lvl03a',game.snapshot());assert.equal(attachedActorVisible(restored.game.find('max_actor')[0],restored.game),false);
});

test('Jester departure and arrival retain native particle counts, directions and saved phase age',()=>{
  const source=json('data/levels/lvl01a/level.json'),entity=source.entities.find(e=>e.classname==='StandingEnemy'&&e.Type==='4');
  const events=[],game=new Gameplay({...source,entities:[{...entity,IsInitiallyEnabled:'1'}]},{deferInit:true,onEvent:e=>events.push(e)}),boss=game.objects[0];
  const context={visible:true,distance:100,playerPosition:boss.position.map((v,i)=>v+(i===2?100:0)),face:()=>{},lineOfSight:()=>true};
  updateBoss(game,boss,.05,context);assert.equal(boss.boss.teleportEffects[0].phase,'departure');
  for(let t=0;t<4&&!boss.boss.teleportEffects.some(e=>e.phase==='arrival');t+=.05)updateBoss(game,boss,.05,context);
  assert.deepEqual(events.filter(e=>e.type==='bossTeleportEffect').map(e=>e.phase),['departure','arrival']);
  const saved=game.snapshot();game.restore(saved);assert.deepEqual(boss.boss.teleportEffects,saved.objects[0].boss.teleportEffects);
  const before=structuredClone(boss.boss.teleportEffects);game.scripts={enemiesFrozen:true};updateBoss(game,boss,.1,context);assert.deepEqual(boss.boss.teleportEffects,before);
  const depart=jesterTeleportParticles({phase:'departure',age:.5,position:[0,0,0]}),arrive=jesterTeleportParticles({phase:'arrival',age:.5,position:[0,0,0]});
  assert.equal(depart.length,15);assert.equal(arrive.length,15);
  assert.ok(depart[0].position[1]<depart[14].position[1],'staggered particles descend');
  assert.ok(arrive[0].position[1]>arrive[14].position[1]);
  assert.equal(jesterTeleportParticles({phase:'departure',age:1.5,position:[0,0,0]}).length,0);
});

test('native non-ribbon projectiles do not emit invented smoke trails or impact tails',()=>{
  const kinds=['bone','enemyShot','goo','poison','jesterBall','magicBall','magma','skull'];
  const game={objects:[],projectiles:kinds.map(kind=>({id:kind,kind,age:0,position:[0,10,0]})),time:0};
  const effects=new EnemyCombatEffects({},game),draws=[],batches=new Map([[DEATH_SMOKE_TEXTURE,{add:(...p)=>draws.push(p)}]]);
  effects.update(batches);
  for(let frame=1;frame<=20;frame++) {
    game.time=frame*.05;
    for(const projectile of game.projectiles){projectile.age=game.time;projectile.position=[game.time*200,10,0];}
    effects.update(batches);
  }
  game.projectiles=[];game.time=1.2;effects.update(batches);
  assert.deepEqual(draws,[],'native null effect factories create no independent flight or impact particles');
  game.objects=[{enemyType:'maxj',health:1,boss:{teleportEffects:[{phase:'departure',age:.5,position:[0,0,0]}]}}];
  effects.update(batches);
  assert.equal(draws.length,15,'Jester teleport particles remain a separate native effect');
});

test('all enemy projectile kinds have the original imported frame sequences and INI sprite sizes',()=>{
  const manifest=json('assets/projectiles/manifest.json');
  for(const [kind,count] of Object.entries({bone:4,goo:6,poison:6,jesterBall:4,magma:4,magicBall:6,skull:4,mushRoom:4,enemyShot:4})) {
    assert.equal(manifest[kind].frames.length,count,kind);
    for(const file of manifest[kind].frames)assert.ok(existsSync(new URL('../assets/projectiles/'+file,import.meta.url)),file);
  }
  assert.equal(manifest.jesterBall.width,32*.4);assert.equal(manifest.poison.width,manifest.goo.width/4);
  const source=json('data/levels/lvl01a/level.json'),entity=source.entities.find(e=>e.classname==='StandingEnemy'&&e.Type==='4');
  for(const [difficulty,scale] of [['Easy',.3],['Normal',.4],['Hard',.4]]) {
    const game=new Gameplay({...source,entities:[entity]},{deferInit:true,difficulty});game.enemyProjectile(game.objects[0],[0,0,0]);
    assert.equal(game.projectiles[0].spriteScale,scale);
  }
});

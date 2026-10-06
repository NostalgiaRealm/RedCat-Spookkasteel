import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {EnemyNavigation} from '../src/enemy-navigation.js';
import {ScriptHost} from '../src/script-host.js';
import {actorVisible} from '../src/world.js';
import {batOverlapsPlayer,clipBatPlayerContact} from '../src/enemy-flight.js';
const json=p=>JSON.parse(readFileSync(new URL('../'+p,import.meta.url)));
const clear=(a,b)=>({fraction:1,end:[...b],normal:[0,0,0],startSolid:false});
const fixture=()=>{const game=new Gameplay(json('data/levels/lvl01a/level.json'),{deferInit:true}),bat=game.find('Bat01')[0];bat.position=[80,0,0];bat.entity={...bat.entity,StartPoint:'a'};game.navigation=new EnemyNavigation({entities:[{classname:'GrobberPathPoint','%name%':'a',Origin:'80 0 0',WayPoint1:'b'},{classname:'GrobberPathPoint','%name%':'b',Origin:'-80 0 0'}]},{MaxConnectionDistance:0});game.navigation.initialize(bat);bat.yaw=-Math.PI/2;bat.enabled=true;bat.collisionMins=[-7.19,5.3,-8.44];bat.collisionMaxs=[8.56,36.28,7.47];for(const o of game.objects)if(o!==bat)o.enabled=false;return{game,bat};};

test('bat hull sweeps stop at RedCat and a moving player overlap recovers without crossing a wall',()=>{
  const {bat}=fixture(),player=[0,0,0],before=[80,0,0];bat.position=[-80,0,0];
  assert.equal(clipBatPlayerContact(bat,before,player,clear),true);assert.equal(batOverlapsPlayer(bat,player),false);assert.ok(bat.position[0]>18);
  bat.position=[0,0,0];
  const wall=(a,b)=>b[0]>0?{fraction:0,end:[...a],normal:[-1,0,0],startSolid:false}:clear(a,b);
  assert.equal(clipBatPlayerContact(bat,[...bat.position],player,wall),true);assert.equal(batOverlapsPlayer(bat,player),false);assert.ok(bat.position[0]<=0);
});

test('stationary RedCat gets separated bat contacts at the independent native damage cooldown',()=>{
  const {game,bat}=fixture(),hits=[],positions=[];game.onEvent=e=>{if(e.type==='enemyAttack')hits.push(game.time);};
  for(let i=0;i<240;i++){game.time+=.05;game.hitCooldown=Math.max(0,game.hitCooldown-.05);game.updateEnemy(bat,.05,[0,0,0],()=>true,clear);positions.push([...bat.position]);assert.equal(batOverlapsPlayer(bat,[0,0,0]),false);}
  assert.ok(hits.length>=2&&hits.length<=12,JSON.stringify(hits));for(let i=1;i<hits.length;i++)assert.ok(hits[i]-hits[i-1]>=1-1e-6);
  assert.ok(positions.some(p=>Math.abs(p[0])<20));assert.equal(game.projectiles.length,0);
});

test('walking into green and shooting bats never leaves RedCat embedded in their bodies',()=>{
  for(const variant of [1,2]){
    const {game,bat}=fixture();bat.variant=variant;bat.position=[0,0,0];bat.ranged=variant===2;
    for(let i=0;i<100;i++){
      // Model movement into a nearby bat, including the exact overlapping
      // state stored by old saves. Geometry recovery must not need E/shooting.
      const player=i===0?[0,0,0]:[bat.position[0]+Math.sin(i)*5,0,bat.position[2]+Math.cos(i)*5];
      game.time+=.05;game.updateEnemy(bat,.05,player,()=>true,clear);assert.equal(batOverlapsPlayer(bat,player),false);
    }
  }
});

test('bat waypoint movement preserves remaining time through saves and script freezes',()=>{
  const {game,bat}=fixture();bat.position=[0,0,0];game.update(.05,[0,0,0],{traceEnemy:clear});
  assert.ok(bat.batContact);const state={...bat.batContact};
  game.scripts={cutscene:true};game.update(.1,[0,0,0],{traceEnemy:clear});assert.deepEqual(bat.batContact,state);game.scripts=null;
  const restored=fixture().game;restored.restore(game.snapshot());const copy=restored.find('Bat01')[0];assert.deepEqual(copy.batContact,state);
});

test('Witch defeat retires the combat body before its authored ending double arrives, including old saves',()=>{
  const game=new Gameplay(json('data/levels/lvl04a/level.json'),{deferInit:true}),host=new ScriptHost(game,json('data/davi/lvl04a.json'),{motions:json('data/motions/lvl04a.json'),dialogue:json('data/dialogue/nl.json')});
  host.initialize();for(let i=0;i<100;i++)host.update(.1);
  const door=game.find('door_witch01')[0];game.command(door,'unlock');game.command(door,'open');
  game.command(game.find('trigger_witchmodel')[0],'enable');for(let i=0;i<450;i++)host.update(.1);
  const witch=game.find('The_Witch')[0];witch.health=3;game.hurtEnemy(witch,1);
  assert.equal(actorVisible(witch,game.time),false);assert.equal(game.find('beam_sequence02')[0].enabled,true);
  for(let i=0;i<100;i++){host.update(.1);game.update(.1,game.playerPosition);assert.equal(actorVisible(witch,game.time),false);}
  const double=game.find('witch_model02')[0];assert.ok(game.objectPosition(double)[1]<2600);assert.equal(actorVisible(double,game.time),true);
  for(const name of ['witch_model03','witch_model04'])assert.equal(actorVisible(game.find(name)[0],game.time),false);
  const old={...witch,visible:true,corpseUntil:game.time+100,animationState:'death'};assert.equal(actorVisible(old,game.time),false);
  const restored=new Gameplay(game.level,{deferInit:true,save:game.snapshot()});assert.equal(actorVisible(restored.find('The_Witch')[0],game.time),false);assert.equal(host.vm.lastError,null);
});

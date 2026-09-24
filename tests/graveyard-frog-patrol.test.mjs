import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {BspCollider} from '../src/collision.js';
import {moveEnemy} from '../src/enemies.js';
import {triggerOnlyModels} from '../src/world.js';
const level=JSON.parse(readFileSync(new URL('../data/levels/lvl02a/level.json',import.meta.url)));
const far=[5000,1000,5000];
function fixture(save) {
 const game=new Gameplay(level,{deferInit:true,save}),collider=new BspCollider(level.collision);
 const names=new Map(level.entities.filter(e=>e.classname==='%Model%').map(e=>[e['%name%'],Number(e.Model)])),triggers=triggerOnlyModels(level.entities,names);
 const models=[...level.collision.models.keys()].filter(i=>!triggers.has(i));
 for(const i of models)if(i&&!game.modelState(i).solid)collider.disabledModels.add(i);
 game.navigation.build((a,b)=>collider.trace(a,b,[0,0,0],[0,0,0],[0]).fraction>.98);
 const frogs=game.objects.filter(o=>o.enemyType==='frog');
 for(const frog of frogs){frog.collisionMins=[-24,0,-24];frog.collisionMaxs=[24,27,24];}
 const trace=(a,b,mins,maxs)=>collider.trace(a,b,mins,maxs,models);
 const step=()=>{game.time+=.025;for(const frog of frogs)game.updateEnemy(frog,.025,far,()=>false,trace);};
 return {game,collider,frogs,trace,step};
}
test('grounded patrol reaches the actual waypoint before turning at the graveyard corner',()=>{
 const {game,frogs,trace}=fixture(),frog=frogs[1];
 frog.position=[2712,528.05,-396];frog.patrol.target='GrobberPathPoint265';frog.patrol.current='GrobberPathPoint266';
 const next=game.navigation.target(frog,()=>false);
 assert.equal(next.id,'GrobberPathPoint265');
 const destination=game.navigation.find('GrobberPathPoint124').position.map((v,i)=>v+(i===1?.05:0));
 assert.ok(trace(frog.position,destination,frog.collisionMins,frog.collisionMaxs).fraction<1,'premature turn hits stone');
 assert.equal(trace([2716,528.05,-396],destination,frog.collisionMins,frog.collisionMaxs).fraction,1,'authored edge is body-clear');
});
test('all three original graveyard frogs continue far-player patrols beyond the former corner stall',()=>{
 const {frogs,step}=fixture(),moved=new Map(frogs.map(f=>[f.id,0])),stalls=new Map(frogs.map(f=>[f.id,0]));
 for(let frame=0;frame<4000;frame++){
   const before=frogs.map(f=>[...f.position]);step();
   for(let i=0;i<frogs.length;i++){
     const f=frogs[i],d=Math.hypot(f.position[0]-before[i][0],f.position[2]-before[i][2]);moved.set(f.id,moved.get(f.id)+d);
     stalls.set(f.id,d<.01?stalls.get(f.id)+1:0);assert.ok(stalls.get(f.id)<40,`${f.id} stalled at ${f.position} toward ${f.patrol.target}`);
     assert.notEqual(f.alerted,true);assert.notEqual(f.animationState,'attack');
   }
 }
 for(const f of frogs){assert.ok(moved.get(f.id)>7000,`${f.id}: ${moved.get(f.id)}`);assert.equal(f.patrol.leftStart,true);}
});
test('a previously stuck frog resumes the same authored route after save/load with the player far away',()=>{
 const initial=fixture(),frog=initial.frogs[2];frog.position=[2672.05,528.05,-291.9690936605];frog.grounded=true;
 Object.assign(frog.patrol,{current:'GrobberPathPoint265',target:'GrobberPathPoint124',previous:'GrobberPathPoint266',leftStart:true});
 frog.animationState='idle';const saved=initial.game.snapshot(),restored=fixture(saved),loaded=restored.frogs[2],visited=new Set();
 for(let frame=0;frame<240;frame++){restored.step();visited.add(loaded.patrol.current);}
 assert.ok(visited.has('GrobberPathPoint124'));assert.ok(Math.hypot(loaded.position[0]-frog.position[0],loaded.position[2]-frog.position[2])>100);
 assert.notEqual(loaded.alerted,true);assert.equal(restored.game.projectiles.length,0);
});
test('grounded tangent movement stays on the near side of a solid wall',()=>{
 const {frogs,trace}=fixture(),f=frogs[2];f.position=[2672.05,528.05,-291.969];f.grounded=true;
 for(let i=0;i<60;i++)moveEnemy(f,[-2,0,0],.025,trace);
 assert.ok(Math.abs(f.position[0]-2672.05)<.001);
 const start=[...f.position];moveEnemy(f,[-2,0,2],.025,trace);assert.ok(f.position[2]>start[2]);assert.ok(f.position[0]>=2672.05-1e-5);
});

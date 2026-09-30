import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync,existsSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {CastleWorld} from '../src/world.js';
import {createGargoyleBlast,advanceGargoyleBlasts,restoreGargoyleBlasts,gargoyleBlastQuads,GARGOYLE_BLAST_TEXTURE} from '../src/gargoyle-blast.js';
import {PerspectiveCamera,Scene} from 'three';
const json=p=>JSON.parse(readFileSync(new URL('../'+p,import.meta.url)));
const tower=json('data/levels/lvl04a/level.json'),entity=tower.entities.find(e=>e.classname==='StandingEnemy'&&e.Type==='3');
const level={...tower,entities:[{...entity,Origin:'0 0 0',StartOrientation:'6',IsInitiallyEnabled:'1'}]};
const create=(difficulty='Normal',save)=>new Gameplay(level,{difficulty,save,deferInit:true});
const tick=(game,seconds)=>{for(let t=0;t<seconds-1e-8;t+=.01)game.updateProjectiles(.01,[10000,0,0]);};
const close=(a,b,tol=1e-7)=>assert.ok(Math.abs(a-b)<tol,`${a} != ${b}`);

test('Gargoyle imports its original full resolution kaboom artwork and alpha',()=>{
 const entry=json('assets/effects/manifest.json').textures[GARGOYLE_BLAST_TEXTURE];
 assert.deepEqual([entry.width,entry.height],[128,128]);assert.ok(existsSync(new URL('../assets/effects/'+entry.file,import.meta.url)));
});

test('native mouth shot keeps damage physics, hides only its pellet and starts a separate blast',()=>{
 const game=create(),gargoyle=game.objects[0];gargoyle.projectileOrigins=()=>[[12,45,20]];
 game.enemyProjectile(gargoyle,[0,0,200]);const shot=game.projectiles[0];
 assert.equal(shot.kind,'enemyShot');assert.equal(shot.visualEffect,'gargoyleBlast');assert.equal(shot.damage,2);close(Math.hypot(...shot.velocity),400);
 assert.deepEqual(game.gargoyleBlasts[0].origin,[12,45,20]);
 const w=Object.assign(Object.create(CastleWorld.prototype),{gameplay:game,camera:new PerspectiveCamera(),scene:new Scene(),track:v=>v});
 w.syncProjectiles();assert.equal(w.projectileMeshes.size,0);
 game.enemyProjectile(gargoyle,[0,0,200]);assert.equal(game.gargoyleBlasts.length,1,'active blast cannot be restarted');
 game.projectiles=[];gargoyle.enemyType='spider';game.enemyProjectile(gargoyle,[0,0,200]);
 assert.equal(game.projectiles[0].visualEffect,undefined);w.syncProjectiles();assert.equal(w.projectileMeshes.size,1,'ordinary spider ammunition remains visible');
});

test('native blast timer, emission pool and tapered red/yellow geometry match the recovered constants',()=>{
 let effects=[createGargoyleBlast('gar',[0,0,0],[0,0,400],[0,0,200],7)];
 effects=advanceGargoyleBlasts(effects,.01);effects=advanceGargoyleBlasts(effects,.05);assert.equal(effects[0].particles.length,0);
 effects=advanceGargoyleBlasts(effects,.01);assert.equal(effects[0].particles.length,1);close(effects[0].head[2],36);
 for(let i=0;i<50;i++)effects=advanceGargoyleBlasts(effects,.01);
 const e=effects[0],before=structuredClone(e),quads=gargoyleBlastQuads(e,[200,100,400]);assert.ok(quads.length>=7&&quads.length<=15);
 const q=quads[0],width=Math.hypot(...q.points[1].map((v,i)=>v-q.points[0][i]));
 close(width,2*(10+10*e.particles[0].age/3));
 close(Math.hypot(...q.points[4].map((v,i)=>v-q.points[2][i])),width*.25);
 assert.deepEqual(q.colors[0],[1,25/255,25/255]);assert.deepEqual(q.colors[2],[1,251/255,50/255]);
 close(q.opacity,1-(e.particles[0].age-.1)/3);
 assert.ok(Math.hypot(...q.points[2].map((v,i)=>v-q.points[0][i]))>250,'visible long flame, not the 25.6-unit pellet');
 assert.deepEqual(e,before,'rendering must not advance simulation');
 for(let i=0;i<1000&&effects.length;i++)effects=advanceGargoyleBlasts(effects,.001);
 assert.equal(effects.length,0,'entire effect retires after one second');
 let fast=[createGargoyleBlast('fast',[0,0,0],[0,0,400],[0,0,200])];
 for(let i=0;i<999;i++)fast=advanceGargoyleBlasts(fast,.001);assert.equal(fast[0].particles.length,15);
 let slow=[createGargoyleBlast('slow',[0,0,0],[0,0,400],[0,0,200])];
 slow=advanceGargoyleBlasts(slow,.1);slow=advanceGargoyleBlasts(slow,.4);assert.equal(slow[0].particles.length,1,'one emission per tick');
});

test('blast survives projectile collision, freezes, and restores its exact particles and timers',()=>{
 const game=create();game.enemyProjectile(game.objects[0],[0,0,200]);tick(game,.45);
 game.updateProjectiles(.01,[10000,0,0],(a,b)=>({fraction:0,end:a}));assert.equal(game.projectiles.length,0);assert.equal(game.gargoyleBlasts.length,1);
 const before=structuredClone(game.gargoyleBlasts);game.scripts={enemiesFrozen:true};game.updateProjectiles(3,[0,0,0]);assert.deepEqual(game.gargoyleBlasts,before);game.scripts=null;
 const save=JSON.parse(JSON.stringify(game.snapshot())),restored=create('Normal',save);assert.deepEqual(restored.gargoyleBlasts,game.gargoyleBlasts);
 tick(restored,.2);tick(game,.2);assert.deepEqual(restored.gargoyleBlasts,game.gargoyleBlasts);
 tick(game,.5);assert.equal(game.gargoyleBlasts.length,0);
 assert.deepEqual(restoreGargoyleBlasts([{...before[0],particles:[{position:[0,NaN,0]}]},null]),[]);
 const old={...save};delete old.gargoyleBlasts;assert.deepEqual(create('Normal',old).gargoyleBlasts,[]);
});

test('hidden Gargoyle projectile still damages RedCat and stops at a wall',()=>{
 for(const blocked of [false,true]){
  const game=create(),o=game.objects[0];o.stats={...o.stats,BulletDeviation:0};o.projectileOrigins=()=>[[0,28,0]];
  game.enemyProjectile(o,[0,0,100]);const hp=game.state.health;
  for(let i=0;i<40;i++)game.updateProjectiles(.01,[0,0,100],blocked?(a,b)=>({fraction:0,end:a}):undefined);
  assert.equal(game.state.health,hp-(blocked?0:2));assert.equal(game.projectiles.length,0);
 }
});

test('Gargoyle fires consecutive shoot motions within each native salvo then waits two seconds',()=>{
 const duration=json('assets/actors/gargoyle.json').animations.find(a=>a.name.toLowerCase()==='shoot1')?.duration;
 assert.ok(duration>2.59&&duration<2.61);
 for(const [difficulty,size]of [['Easy',1],['Normal',2],['Hard',3]]){
  const game=create(difficulty),o=game.objects[0],shots=[];o.salvoSize=size;o.animationDurations={attack:duration};
  game.onEvent=e=>{if(e.type==='enemyProjectile')shots.push(game.time);};
  for(let t=0;t<20;t+=.01){game.time+=.01;game.updateEnemy(o,.01,[0,0,200],()=>true,null);}
  assert.ok(shots.length>size);
  close(shots[0],.01+duration*.67,.011);
  for(let i=1;i<shots.length;i++)close(shots[i]-shots[i-1],duration+(i%size===0?2:0),.025);
  assert.equal(o.relocateAfterSalvo,false,'stationary Gargoyle does not invent a patrol relocation');
  const saved=create(difficulty,JSON.parse(JSON.stringify(game.snapshot())));assert.equal(saved.objects[0].salvoRemaining,o.salvoRemaining);assert.equal(saved.objects[0].salvoSize,size);
 }
});

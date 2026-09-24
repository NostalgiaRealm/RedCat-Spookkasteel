import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import * as THREE from 'three';
import {DestructibleEffects} from '../src/destructible-effects.js';
import {createProjectileImpact, projectileImpactSprite, projectileImpactWave, IMPACT_WAVE_TEXTURE, impactLight, restoreProjectileImpacts, retainProjectileImpacts} from '../src/projectile-impacts.js';

const level = {id:'lvl00a', entities:[], spawn:{position:[0,0,0]}};
const pellet = kind => ({id:'pellet', kind, owner:'player', position:[10,20,30], velocity:[300,400,0], age:0, life:2, gravity:0, radius:.032, damage:1});

test('only the three live player factories emit impacts, five units behind contact along flight velocity', () => {
  for (const kind of ['shot','powerShot','superShot']) {
    assert.deepEqual(createProjectileImpact(pellet(kind),2), {id:'pellet',kind,birth:2,position:[7,16,30]});
  }
  for (const kind of ['bone','enemyShot','goo','poison','jesterBall','magicBall','magma','mushRoom','skull','constructor']) {
    assert.equal(createProjectileImpact(pellet(kind),2), null, kind);
  }
  assert.equal(createProjectileImpact({...pellet('shot'),owner:'enemy'},2), null);
  assert.deepEqual(createProjectileImpact({...pellet('shot'),velocity:[0,0,0]},2).position,[10,20,30]);
});

test('native impact artwork and scale use 100ms cells and the 699ms final cell', () => {
  const manifest = JSON.parse(readFileSync(new URL('../assets/effects/manifest.json',import.meta.url)));
  for (const [kind,suffix,size] of [['shot','_yel',64],['powerShot','_red',44.8],['superShot','',96]]) {
    const effect=createProjectileImpact(pellet(kind),0);
    for (const [age,frame] of [[0,1],[.099,1],[.1,2],[.199,2],[.2,3],[.5,6],[.599,6],[.6,7],[.698,7],[.699,8]]) {
      const sprite=projectileImpactSprite(effect,age),ordinal=String(frame).padStart(2,'0');
      assert.equal(sprite.texture,`expl_gen${ordinal}${suffix}.bmp|expl_gen_a_${ordinal}.bmp`);
      assert.ok(Math.abs(sprite.size-size*(frame<7?1:.00025))<1e-8);
      const entry=manifest.textures[sprite.texture];assert.equal(entry.width,64);assert.equal(entry.height,64);
      assert.equal(sprite.opacity,1);
    }
    assert.equal(projectileImpactSprite(effect,-.01),null);
    assert.equal(projectileImpactSprite(effect,.7),null,'multieffect retires after its final one-shot cell');
  }
});

test('independent native light follows pszzzspmea for one second after impact', () => {
  for (const [kind,radius,color] of [['shot',180,[255,192,0]],['powerShot',126,[80,245,220]],['superShot',270,[34,218,40]]]) {
    const effect=createProjectileImpact(pellet(kind),0);
    for (const [age,letter] of [[0,'p'],[.15,'s'],[.3,'z'],[.51,'s'],[.75,'m'],[.85,'e'],[.95,'a']]) {
      const light=impactLight(effect,age);
      assert.ok(Math.abs(light.radius-radius*(letter.charCodeAt(0)-97)/25)<1e-8);
      assert.deepEqual(light.color,color.map(v=>v/255));
    }
    assert.equal(impactLight(effect,1),null);
  }
});

test('actual wall and enemy contacts each create one effect, but expiry and misses do not', () => {
  const game=new Gameplay(level);
  game.projectiles=[pellet('shot')];
  game.updateProjectiles(.1,[1000,0,1000],(a,b)=>({fraction:.5,end:a.map((v,i)=>v+(b[i]-v)*.5)}));
  assert.equal(game.projectiles.length,0);assert.equal(game.projectileImpacts.length,1);
  assert.deepEqual(game.projectileImpacts[0].position,[22,36,30]);
  game.projectiles=[{...pellet('shot'),life:.01}];game.updateProjectiles(.1,[1000,0,1000]);
  assert.equal(game.projectiles.length,0);assert.equal(game.projectileImpacts.length,1);
  const target={id:'target',kind:'enemy',enabled:true,visible:true,health:5,position:[10,0,30],collisionMins:[-10,0,-10],collisionMaxs:[10,56,10],stats:{},entity:{}};
  game.objects.push(target);game.projectiles=[{...pellet('powerShot'),id:'actor-pellet',position:[-50,25,30],velocity:[500,0,0]}];
  game.updateProjectiles(.2,[1000,0,1000]);
  assert.equal(target.health,4);assert.equal(game.projectiles.length,0);assert.equal(game.projectileImpacts.length,2);
  game.updateProjectiles(.2,[1000,0,1000]);assert.equal(target.health,4,'no invented repeated or splash damage');
});

test('impact state survives gameplay saves, rejects malformed entries and retires without an ID history', () => {
  const game=new Gameplay(level);game.time=10;game.projectileImpacts=[createProjectileImpact(pellet('superShot'),9.5)];
  const restored=new Gameplay(level,{save:JSON.parse(JSON.stringify(game.snapshot()))});
  assert.deepEqual(restored.projectileImpacts,game.projectileImpacts);
  assert.deepEqual(projectileImpactSprite(restored.projectileImpacts[0],restored.time),projectileImpactSprite(game.projectileImpacts[0],game.time));
  assert.deepEqual(restoreProjectileImpacts([null,{...game.projectileImpacts[0],kind:'__proto__'},{...game.projectileImpacts[0],position:[NaN,0,0]},{...game.projectileImpacts[0],birth:11}],10),[]);
  assert.deepEqual(restoreProjectileImpacts(undefined,10),[],'older saves need no migration');
  restored.time=10.5;restored.updateProjectiles(0,[0,0,0]);assert.equal(restored.projectileImpacts.length,0);
  assert.equal(retainProjectileImpacts(Array.from({length:1000},(_,i)=>({...game.projectileImpacts[0],id:String(i)})),10).length,128);
});

test('impact renderer submits the original sprite without allocating destruction debris', () => {
  const game={time:.15,projectileImpacts:[createProjectileImpact(pellet('shot'),0)],explosions:[]};
  const submitted=[],batches=new Map([['expl_gen02_yel.bmp|expl_gen_a_02.bmp',{add:(...args)=>submitted.push(args)}]]);
  const renderer=new DestructibleEffects({},game);renderer.update(0,batches);
  assert.deepEqual(submitted,[[[7,16,30],64,64,[1,1,1],1]]);
  assert.equal(renderer.particles.length,0);assert.equal(renderer.blasts.length,0);
  game.time=.75;renderer.update(0,batches);assert.equal(submitted.length,1);
});

test('charged hit Electricwave is an upright camera-facing quad with native delayed squared-radius growth', () => {
  const effect={...createProjectileImpact(pellet('superShot'),0),position:[0,10,0]};
  assert.equal(projectileImpactWave(effect,.399,[0,40,-100]),null);
  const wave=projectileImpactWave(effect,.4,[0,40,-100]);
  assert.equal(wave.radius,5);assert.equal(wave.opacity,1);
  assert.deepEqual(wave.quads[0].points,[[-5,15,0],[5,15,0],[5,5,0],[-5,5,0]]);
  const later=projectileImpactWave(effect,.55,[0,40,-100]);
  assert.ok(Math.abs(later.radius-50*Math.sqrt(.0175))<1e-8);assert.ok(Math.abs(later.opacity-.75)<1e-8);
  const rotated=projectileImpactWave(effect,.4,[-100,40,0]);
  assert.deepEqual(rotated.quads[0].points,[[0,15,5],[0,15,-5],[0,5,-5],[0,5,5]]);
  assert.equal(projectileImpactWave(effect,.7,[0,0,-100]),null);
  assert.equal(projectileImpactWave({...effect,kind:'powerShot'},.5,[0,0,-100]),null);
  assert.ok(projectileImpactWave(effect,.4,[0,40,0]).quads[0].points.flat().every(Number.isFinite));
});

test('charged wave touching the floor retains its upright quad and folds the bottom onto the surface', () => {
  const effect={...createProjectileImpact(pellet('superShot'),0),position:[0,2,0]},traces=[];
  const wave=projectileImpactWave(effect,.4,[0,40,-100],(a,b)=>{traces.push([a,b]);return {fraction:.4,end:[0,0,0]};});
  assert.deepEqual(traces,[[[0,2,0],[0,-3,0]]]);assert.equal(wave.quads.length,2);
  assert.deepEqual(wave.quads[1].uvs,[[0,.7],[1,.7],[1,1],[0,1]]);
  assert.deepEqual(wave.quads[1].points,[[-5,0,0],[5,0,0],[4.25,0,-2.55],[-4.25,0,-2.55]]);
  assert.equal(projectileImpactWave(effect,.4,[0,40,-100],()=>({fraction:1,end:[0,-3,0]})).quads.length,1);
});

test('charged wave renders original alpha artwork in one bounded reusable mesh and clears after retirement', () => {
  const game={time:.4,projectileImpacts:[{...createProjectileImpact(pellet('superShot'),0),position:[0,2,0]}],explosions:[]};
  const world={camera:{position:new THREE.Vector3(0,40,-100)},scene:new THREE.Scene(),track:value=>value,physicalModels:[0],collider:{trace:()=>({fraction:.4,end:[0,0,0]})}};
  const map=new THREE.Texture(),batches=new Map([[IMPACT_WAVE_TEXTURE,{mesh:{material:{uniforms:{map:{value:map}}}}}]]);
  const renderer=new DestructibleEffects(world,game);renderer.update(0,batches);
  const mesh=renderer.impactWaves.mesh;
  assert.equal(mesh.material.map,map);assert.equal(mesh.geometry.drawRange.count,12);assert.equal(mesh.visible,true);
  assert.equal(mesh.geometry.getAttribute('uv').getY(0),1,'native top V=0 maps to PNG top');
  renderer.update(0,batches);assert.equal(renderer.impactWaves.mesh,mesh);assert.equal(world.scene.children.length,1);
  game.time=.7;renderer.update(0,batches);assert.equal(mesh.visible,false);assert.equal(mesh.geometry.drawRange.count,0);
  renderer.dispose();assert.equal(world.scene.children.length,0);
});

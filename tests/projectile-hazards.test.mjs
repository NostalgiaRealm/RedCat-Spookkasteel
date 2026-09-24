import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {GAMEPLAY_SETTINGS} from '../src/gameplay-settings.js';
import {ProjectileHazards, mushroomTrailDefinition, trailOpacity} from '../src/projectile-hazards.js';

const mushroom = {id: 'enemy-projectile-1', sourceId: 'brutus', kind: 'mushRoom'};
const make = () => new ProjectileHazards(GAMEPLAY_SETTINGS, 'Normal');
const trace = (hazards, projectile, start, end, options) => {
  if (!hazards.trails.has(String(projectile.id || ''))) hazards.trace(projectile, start, start);
  hazards.trace(projectile, start, end, options);
};

test('mushroom hazard uses original difficulty properties and ribbon artwork', () => {
  for (const difficulty of ['Easy', 'Normal', 'Hard']) {
    const definition = mushroomTrailDefinition(GAMEPLAY_SETTINGS, difficulty);
    assert.equal(definition.damage, 0);
    assert.equal(definition.life, 1.5);
    assert.equal(definition.width, 6.4);
    assert.deepEqual(definition.color, [255, 255, 127]);
    assert.equal(definition.opacity, .8);
  }
  const manifest = JSON.parse(readFileSync(new URL('../assets/hazards/manifest.json', import.meta.url)));
  assert.equal(manifest.mushroomTrail.width, 6.4);
  assert.equal(manifest.sources['strail.bmp'].length, 64);
  assert.equal(manifest.sources['strail_a.bmp'].length, 64);
  assert.ok(readFileSync(new URL('../assets/hazards/' + manifest.mushroomTrail.texture, import.meta.url)).length > 100);
});

test('native sampler updates a live endpoint and commits once per tick, not every ten units', () => {
  const hazards = make();
  trace(hazards, {...mushroom, kind: 'bone'}, [0, 25, 0], [100, 25, 0]);
  trace(hazards, mushroom, [0, 25, 0], [0, 25, 0]);
  assert.equal(hazards.segments.length, 0);
  hazards.advance(.1); trace(hazards, mushroom, [0, 25, 0], [23, 26, 0], {dt: .1});
  assert.equal(hazards.segments.length, 1);
  assert.deepEqual(hazards.segments[0].from, [0, 25, 0]);
  assert.deepEqual(hazards.segments[0].to, [23, 26, 0]);
  assert.equal(hazards.trails.get(mushroom.id).points.length, 3);
  hazards.advance(.02); trace(hazards, mushroom, [23, 26, 0], [24, 26, 0], {dt: .02});
  const live = hazards.segments.at(-1).id;
  hazards.advance(.02); trace(hazards, mushroom, [24, 26, 0], [25, 26, 0], {dt: .02});
  assert.equal(hazards.segments.at(-1).id, live);
  assert.equal(hazards.trails.get(mushroom.id).points.length, 3);
  assert.deepEqual(hazards.segments.at(-1).to, [25, 26, 0]);
});

test('native distance and millisecond gates are strict and either gate commits', () => {
  const hazards = make();
  trace(hazards, mushroom, [0, 25, 0], [9.6, 25, 0]);
  assert.equal(hazards.trails.get(mushroom.id).points.length, 2);
  hazards.advance(.1); trace(hazards, mushroom, [9.6, 25, 0], [9.6, 25, 0]);
  assert.equal(hazards.trails.get(mushroom.id).points.length, 2);
  hazards.advance(.001); trace(hazards, mushroom, [9.6, 25, 0], [9.6, 25, 0]);
  assert.equal(hazards.trails.get(mushroom.id).points.length, 3);
  trace(hazards, mushroom, [9.6, 25, 0], [19.21, 25, 0]);
  assert.equal(hazards.trails.get(mushroom.id).points.length, 4);
});

test('30, 60 and 144 fps follow native endpoint-gated sampling rather than invented fixed cadence', () => {
  for (const fps of [30, 60, 144]) {
    const hazards = make(), expected = [0]; let anchor = 0, stamp = 0;
    for (let frame = 1; frame <= fps; frame++) {
      const now = Math.floor(frame / fps * 1000 + 1e-6), position = frame / fps * 100;
      hazards.advance(1 / fps);
      trace(hazards, mushroom, [(frame - 1) / fps * 100, 25, 0], [position, 25, 0], {dt: 1 / fps});
      // This fixture primes the launch point on the first update's integer tick.
      if (frame === 1) stamp = now;
      if (now - stamp > 100 || position - anchor > 9.6) { expected.push(position); anchor = position; stamp = now; }
    }
    const points = hazards.trails.get(mushroom.id).points;
    assert.equal(points.length, expected.length + 1, `${fps} fps`);
    for (let index = 0; index < expected.length; index++) assert.ok(Math.abs(points[index].position[0] - expected[index]) < 1e-8);
    assert.equal(points.at(-1).position[0], 100);
  }
});

test('native ribbons remain harmless even when crossed or overlapped', () => {
  const hazards = make();
  trace(hazards, mushroom, [-50, 25, 0], [50, 25, 0]);
  trace(hazards, {...mushroom, id: 'enemy-projectile-2'}, [-50, 25, 0], [50, 25, 0]);
  let calls = 0;
  hazards.advance(.01, {playerPosition: [0, 0, 0], previousPlayerPosition: [0, 0, -50], damage: () => calls++});
  assert.ok(hazards.segments.length > 0);
  assert.equal(calls, 0, 'TrailDamage has no consumer in the original executable');
});

test('native opacity fades per committed quad, culls at five alpha units and freezes without damage', () => {
  const hazards = make(); trace(hazards, mushroom, [-20, 25, 0], [20, 25, 0]);
  let damageCalls = 0;
  const damage = () => damageCalls++;
  hazards.advance(.75);
  assert.equal(trailOpacity(hazards.segments[0]), .4);
  const frozen = hazards.snapshot();
  hazards.advance(5, {frozen: true, playerPosition: [0, 0, 0], damage});
  assert.deepEqual(hazards.snapshot(), frozen); assert.equal(damageCalls, 0);
  hazards.advance(.71, {playerPosition: [0, 0, 0], damage});
  assert.equal(damageCalls, 0);
  hazards.advance(.004, {playerPosition: [0, 0, 0], damage});
  assert.equal(hazards.segments.length, 0); assert.equal(damageCalls, 0);
});

test('impact or expiry destroys only the corresponding native ribbon', () => {
  const hazards = make(), other = {...mushroom, id: 'other'};
  trace(hazards, mushroom, [0, 25, 0], [20, 25, 0]);
  trace(hazards, other, [0, 35, 0], [20, 35, 0]);
  hazards.retainProjectiles([other]);
  assert.equal(hazards.trails.size, 1);
  assert.ok(hazards.segments.every(segment => segment.projectileId === 'other'));
  hazards.retainProjectiles([]);
  assert.equal(hazards.segments.length, 0); assert.equal(hazards.trails.size, 0);
});

test('save/load preserves the active sampler and validates difficulty properties', () => {
  const hazards = make(); trace(hazards, mushroom, [0, 25, 0], [50, 25, 0]);
  hazards.advance(.04); trace(hazards, mushroom, [50, 25, 0], [51, 25, 0]);
  const saved = JSON.parse(JSON.stringify(hazards.snapshot()));
  saved.trails[0].damage = 999;
  const restored = make(); restored.restore(saved);
  assert.deepEqual(restored.snapshot(), hazards.snapshot());
  assert.equal(restored.segments[0].damage, 0);
  for (const current of [hazards, restored]) {current.advance(.07); trace(current, mushroom, [51, 25, 0], [52, 25, 0]);}
  assert.deepEqual(restored.snapshot(), hazards.snapshot());
  assert.equal(new Set(restored.segments.map(item => item.id)).size, restored.segments.length);
  restored.restore({version: 2, trails: [{projectileId: 'bad', points: [{id: 'bad', position: [NaN, 0, 0], time: 0}]}]});
  assert.equal(restored.segments.length, 0);
});

test('old segment saves migrate once to trusted native ribbon properties', () => {
  const restored = make();
  restored.restore({version: 1, nextId: 4, segments: [{id: 'old', from: [0, 25, 0], to: [20, 25, 0],
    age: .25, damage: 999, opacity: .01, projectileId: mushroom.id, sourceId: 'brutus'}]});
  assert.equal(restored.segments[0].damage, 0); assert.equal(restored.segments[0].opacity, .8);
  assert.equal(restored.segments[0].age, .25); assert.equal(restored.snapshot().version, 2);
  restored.clear(); assert.equal(restored.segments.length, 0); assert.equal(restored.trails.size, 0);
});

test('hazard growth stays bounded across excessive projectile input', () => {
  const hazards = make();
  for (let index = 0; index < 30; index++) trace(hazards, mushroom, [0, 25, 0], [10000, 25, 0]);
  assert.ok(hazards.segments.length <= 2048);
});

test('the first native update seeds duplicate current endpoints and emits no artificial launch segment', () => {
  const hazards = make(); hazards.advance(.025);
  hazards.trace(mushroom, [0, 25, 0], [10, 25, 0], {dt: .025});
  assert.equal(hazards.segments.length, 0);
  assert.deepEqual(hazards.trails.get(mushroom.id).points.map(point => point.position), [[10,25,0],[10,25,0]]);
  hazards.advance(.025); hazards.trace(mushroom, [10,25,0], [20,25,0], {dt: .025});
  assert.equal(hazards.segments.length, 1); assert.deepEqual(hazards.segments[0].from, [10,25,0]);
});

const level = {id: 'trail-fixture', entities: [], collision: {models: []}};
const flyingMushroom = () => ({...mushroom, position: [0,100,0], velocity: [200,0,0],
  radius: 2, life: 5, damage: 1, gravity: 0, age: 0});

test('gameplay impact and lifetime expiry retire the native ribbon immediately', () => {
  for (const reason of ['impact', 'expiry']) {
    const game = new Gameplay(level), projectile = flyingMushroom();
    game.projectiles = [projectile];
    for (let index=0; index<3; index++) {game.hazards.advance(.05);game.updateProjectiles(.05,[1000,0,1000]);}
    assert.ok(game.hazards.segments.length > 0);
    if(reason==='expiry')projectile.life=projectile.age+.025;
    game.hazards.advance(.05);
    game.updateProjectiles(.05,[1000,0,1000],reason==='impact'?(start,end)=>({fraction:.5,end:start.map((v,i)=>(v+end[i])/2)}):null);
    assert.equal(game.projectiles.length,0);assert.equal(game.hazards.segments.length,0);assert.equal(game.hazards.trails.size,0);
  }
});

test('gameplay restore keeps owned ribbons and discards orphan or invalid projectile trails', () => {
  const game = new Gameplay(level);game.projectiles=[flyingMushroom()];
  for(let index=0;index<3;index++){game.hazards.advance(.05);game.updateProjectiles(.05,[1000,0,1000]);}
  const save=JSON.parse(JSON.stringify(game.snapshot()));
  const restored=new Gameplay(level,{save});
  assert.deepEqual(restored.hazards.snapshot(),game.hazards.snapshot());
  for(const projectiles of [[],[{...save.projectiles[0],life:0}]]){
    const orphan=new Gameplay(level,{save:{...save,projectiles}});
    assert.equal(orphan.hazards.segments.length,0);assert.equal(orphan.hazards.trails.size,0);
  }
});

test('fatal projectile hits retire all owned ribbons before the death screen freezes gameplay', () => {
  const game=new Gameplay(level);game.projectiles=[flyingMushroom()];
  for(let index=0;index<3;index++){game.hazards.advance(.05);game.updateProjectiles(.05,[1000,0,1000]);}
  assert.ok(game.hazards.segments.length>0);
  game.state.health=1;
  game.projectiles.push({id:'lethal-bone',kind:'bone',sourceId:'brutus',position:[-40,28,0],velocity:[1000,0,0],radius:2,life:5,damage:1,gravity:0,age:0});
  game.updateProjectiles(.1,[0,0,0]);
  assert.equal(game.state.health,0);assert.equal(game.projectiles.length,0);
  assert.equal(game.hazards.segments.length,0);assert.equal(game.hazards.trails.size,0);
  game.update(.1,[0,0,0]);
  assert.equal(game.hazards.segments.length,0,'the death pause must not retain a frozen, ownerless ribbon');
});

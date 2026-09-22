import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {GAMEPLAY_SETTINGS} from '../src/gameplay-settings.js';
import {ProjectileHazards, mushroomTrailDefinition, trailOpacity, trailTouchesPlayer} from '../src/projectile-hazards.js';

const mushroom = {id: 'enemy-projectile-1', sourceId: 'brutus', kind: 'mushRoom'};
const make = () => new ProjectileHazards(GAMEPLAY_SETTINGS, 'Normal');
const segment = (from, to) => ({from, to, width: 6.4});

test('mushroom hazard uses original difficulty properties and ribbon artwork', () => {
  for (const difficulty of ['Easy', 'Normal', 'Hard']) {
    const definition = mushroomTrailDefinition(GAMEPLAY_SETTINGS, difficulty);
    assert.equal(definition.damage, 5);
    assert.equal(definition.life, 1.5);
    assert.equal(definition.width, 6.4);
    assert.deepEqual(definition.color, [255, 255, 127]);
    assert.equal(definition.opacity, 127 / 255);
  }
  const manifest = JSON.parse(readFileSync(new URL('../assets/hazards/manifest.json', import.meta.url)));
  assert.equal(manifest.mushroomTrail.width, 6.4);
  assert.equal(manifest.sources['mshtrail.bmp'].length, 64);
  assert.equal(manifest.sources['mshtraila.bmp'].length, 64);
  assert.ok(readFileSync(new URL('../assets/hazards/' + manifest.mushroomTrail.texture, import.meta.url)).length > 100);
});

test('only mushrooms deposit a continuous trail ending at the resolved collision point', () => {
  const hazards = make();
  hazards.trace({...mushroom, kind: 'bone'}, [0, 25, 0], [100, 25, 0]);
  hazards.trace(mushroom, [0, 25, 0], [0, 25, 0]);
  assert.equal(hazards.segments.length, 0);
  hazards.trace(mushroom, [0, 25, 0], [23, 26, 0], {dt: .1});
  assert.equal(hazards.segments.length, 3);
  assert.deepEqual(hazards.segments[0].from, [0, 25, 0]);
  assert.deepEqual(hazards.segments.at(-1).to, [23, 26, 0]);
  for (let index = 1; index < hazards.segments.length; index++) assert.deepEqual(hazards.segments[index - 1].to, hazards.segments[index].from);
  assert.equal(hazards.segments.at(-1).age, 0);
  assert.ok(hazards.segments[0].age > hazards.segments[1].age);
});

test('trails damage at flight height, not through floors or above a jumping player', () => {
  assert.equal(trailTouchesPlayer(segment([-40, 25, 0], [40, 25, 0]), [0, 0, 0]), true);
  assert.equal(trailTouchesPlayer(segment([-40, 70, 0], [40, 70, 0]), [0, 0, 0]), false);
  assert.equal(trailTouchesPlayer(segment([-40, 0, 0], [40, 0, 0]), [0, 10, 0]), false);
  assert.equal(trailTouchesPlayer(segment([-40, 25, 0], [40, 25, 0]), [0, 0, 30]), false);
});

test('swept player contact catches crossings and rejects diagonal enclosing-box false positives', () => {
  const ribbon = segment([-40, 25, 0], [40, 25, 0]);
  assert.equal(trailTouchesPlayer(ribbon, [0, 0, 50], [0, 0, -50]), true);
  assert.equal(trailTouchesPlayer(ribbon, [90, 0, 50], [90, 0, -50]), false);
  // Both diagonal paths have overlapping bounds but run parallel 70 units apart.
  assert.equal(trailTouchesPlayer(segment([0, 25, 0], [100, 25, 100]), [100, 0, 0], [200, 0, 100]), false);
});

test('overlapping joints cause one damage request and use the shared player invulnerability gate', () => {
  const hazards = make();
  hazards.trace(mushroom, [-50, 25, 0], [50, 25, 0]);
  hazards.trace({...mushroom, id: 'enemy-projectile-2'}, [-50, 25, 0], [50, 25, 0]);
  let calls = 0, health = 10, cooldown = 0;
  const damage = (amount, source) => {calls++; assert.equal(amount, 5); assert.equal(source, 'brutus'); if (!cooldown) {health -= amount; cooldown = .65;}};
  hazards.advance(.01, {playerPosition: [0, 0, 0], damage});
  assert.equal(calls, 1); assert.equal(health, 5);
  hazards.advance(.01, {playerPosition: [0, 0, 0], damage});
  assert.equal(calls, 2); assert.equal(health, 5);
});

test('a removed mushroom leaves a fading trail; freeze pauses age and damage, clear removes it', () => {
  const hazards = make(); hazards.trace(mushroom, [-20, 25, 0], [20, 25, 0]);
  let damageCalls = 0;
  const damage = () => damageCalls++;
  hazards.advance(.75);
  assert.equal(trailOpacity(hazards.segments[0]), 127 / 510);
  const frozen = hazards.snapshot();
  hazards.advance(5, {frozen: true, playerPosition: [0, 0, 0], damage});
  assert.deepEqual(hazards.snapshot(), frozen); assert.equal(damageCalls, 0);
  hazards.advance(.74, {playerPosition: [0, 0, 0], damage});
  assert.equal(damageCalls, 1);
  hazards.advance(.02, {playerPosition: [0, 0, 0], damage});
  assert.equal(hazards.segments.length, 0); assert.equal(damageCalls, 1);
  hazards.trace(mushroom, [0, 25, 0], [10, 25, 0]); hazards.clear();
  assert.equal(hazards.segments.length, 0);
});

test('save/load preserves age, contact geometry and unique IDs without trusting injected damage', () => {
  const hazards = make(); hazards.trace(mushroom, [0, 25, 0], [50, 25, 0]); hazards.advance(.42);
  const saved = JSON.parse(JSON.stringify(hazards.snapshot()));
  saved.segments[0].damage = 999;
  const restored = make(); restored.restore(saved);
  assert.deepEqual(restored.snapshot(), hazards.snapshot());
  restored.segments[0].from[0] = -10;
  assert.equal(saved.segments[0].from[0], 0);
  restored.trace(mushroom, [50, 25, 0], [60, 25, 0]);
  assert.equal(new Set(restored.segments.map(item => item.id)).size, restored.segments.length);
  restored.restore({version: 1, segments: [{id: 'bad', from: [NaN, 0, 0], to: [1, 0, 0], age: 0}]});
  assert.equal(restored.segments.length, 0);
});

test('hazard growth stays bounded across excessive projectile input', () => {
  const hazards = make();
  for (let index = 0; index < 30; index++) hazards.trace(mushroom, [0, 25, 0], [10000, 25, 0]);
  assert.ok(hazards.segments.length <= 2048);
});

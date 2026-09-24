import test from 'node:test';
import assert from 'node:assert/strict';
import {RecoverySaves, IndexedDBRecoveryStorage} from '../src/recovery-saves.js';

const copy = value => structuredClone(value);
function adventure(number, level = 'lvl00a') {
  return {version: 1, level, position: [number, 10, 20], lastSafe: [number, 10, 20], yaw: .5, pitch: -.1,
    savedAt: new Date(1700000000000 + number * 60000).toISOString(), game: {version: 1, level,
      state: {health: 10, money: number, skill: 3}, scripts: {flags: {doorOpen: number > 2}, running: [{pc: number}]},
      enemies: [{id: 'knight', health: 4}], projectiles: [{age: .2, position: [1, 2, 3]}]}};
}
function memory(initial = null) {
  return {value: copy(initial), writes: 0, fail: false,
    async read() { return copy(this.value); },
    async write(value) { if (this.fail) throw new Error('Quota exceeded'); this.value = copy(value); this.writes++; }};
}
async function history(storage = memory()) { const saves = new RecoverySaves({storage}); await saves.ready; return saves; }

test('recovery retains one immutable complete save per active minute and offers 2, 5 and 10 minutes', async () => {
  const storage = memory(), saves = await history(storage);
  assert.equal(saves.needsCapture, true);
  assert.deepEqual(saves.choices().map(choice => choice.save), [null, null, null]);
  const original = adventure(0);
  const initial = saves.capture(original);
  original.game.scripts.running[0].pc = 900;
  assert.equal(await initial, true);
  for (let minute = 1; minute <= 10; minute++) {
    saves.advance(20);
    assert.equal(await saves.capture(adventure(500)), false, 'frequent manual saves cannot replace history');
    saves.advance(40);
    assert.equal(saves.needsCapture, true);
    assert.equal(await saves.capture(adventure(minute)), true);
  }
  assert.equal(storage.writes, 11);
  assert.equal(storage.value.checkpoints.length, 11);
  const choices = saves.choices();
  assert.deepEqual(choices.map(choice => [choice.minutes, choice.ageSeconds, choice.save.game.state.money]), [[2, 120, 8], [5, 300, 5], [10, 600, 0]]);
  assert.deepEqual(choices[2].save.game.scripts.running, [{pc: 0}]);
  choices[0].save.game.scripts.flags.doorOpen = false;
  assert.equal(saves.choices()[0].save.game.scripts.flags.doorOpen, true, 'menu consumers cannot mutate stored snapshots');
  saves.advance(60);
  await saves.capture(adventure(11));
  assert.equal(storage.value.checkpoints.length, 11);
  assert.equal(storage.value.checkpoints[0].save.game.state.money, 1, 'older-than-ten-minute history is discarded');
});

test('minute buckets preserve the ten-minute slot despite frame jitter', async () => {
  const storage = memory(), saves = await history(storage);
  await saves.capture(adventure(0));
  for (let minute = 1; minute <= 14; minute++) {
    saves.advance(60.017);
    await saves.capture(adventure(minute));
  }
  assert.equal(storage.value.checkpoints.length, 11);
  assert.deepEqual(saves.choices().map(choice => choice.ageSeconds), [120, 300, 600]);
  assert.deepEqual(saves.choices().map(choice => choice.save.game.state.money), [12, 9, 4]);
  assert.ok(storage.value.clock > 840, 'actual active elapsed time also survives restart');
});

test('offline time, level changes and recovery loads do not reset the active-play history', async () => {
  const storage = memory(), first = await history(storage);
  await first.capture(adventure(0));
  for (let minute = 1; minute <= 5; minute++) { first.advance(60); await first.capture(adventure(minute, minute < 3 ? 'lvl00a' : 'lvl01a')); }
  const second = await history(storage);
  assert.equal(second.clock, 300);
  assert.equal(second.needsCapture, false);
  assert.equal(second.choices()[1].save.level, 'lvl00a');
  const recovered = second.choices()[0].save;
  assert.equal(await second.capture(recovered), false, 'loading an old snapshot does not overwrite the newest history sample');
  second.advance(60);
  recovered.game.state.money = 6;
  assert.equal(await second.capture(recovered), true);
  assert.equal(storage.value.checkpoints.at(-1).at, 360);
  assert.equal(second.choices()[1].save.game.state.money, 1);
  assert.equal(second.choices()[2].save, null, 'a not-yet-earned ten-minute slot cannot load the newest save');
});

test('queued writes retain call-time snapshots and successful new adventures alone clear history', async () => {
  const storage = memory(), saves = await history(storage);
  await saves.capture(adventure(0));
  saves.advance(60);
  const second = saves.capture(adventure(1));
  assert.equal(saves.needsCapture, false, 'pending writes suppress per-frame duplicate captures');
  saves.advance(60);
  const third = saves.capture(adventure(2));
  const reset = saves.capture(adventure(100), {reset: true});
  saves.advance(60);
  const afterReset = saves.capture(adventure(101));
  assert.deepEqual(await Promise.all([second, third, reset, afterReset]), [true, true, true, true]);
  await saves.flush();
  assert.deepEqual(storage.value.checkpoints.map(entry => [entry.at, entry.save.game.state.money]), [[120, 100], [180, 101]]);
  assert.deepEqual(saves.choices().map(choice => choice.save), [null, null, null]);
});

test('failed writes and failed resets preserve history with a five-active-second retry', async () => {
  const storage = memory(), errors = [], saves = new RecoverySaves({storage, onError: error => errors.push(error.message)});
  await saves.ready;
  for (let minute = 0; minute <= 2; minute++) { if (minute) saves.advance(60); await saves.capture(adventure(minute)); }
  const committed = copy(storage.value);
  saves.advance(60);
  storage.fail = true;
  assert.equal(await saves.capture(adventure(3)), false);
  assert.deepEqual(storage.value, committed);
  assert.equal(saves.choices()[0].save.game.state.money, 0);
  assert.equal(saves.needsCapture, false);
  saves.advance(4);
  assert.equal(saves.needsCapture, false);
  saves.advance(1);
  assert.equal(saves.needsCapture, true);
  assert.equal(await saves.capture(adventure(100), {reset: true}), false);
  assert.deepEqual(storage.value, committed, 'failed new-adventure write cannot destroy old checkpoints');
  storage.fail = false;
  saves.advance(5);
  assert.equal(await saves.capture(adventure(3)), true);
  assert.equal(storage.value.checkpoints.length, 1, 'a failed reset is retried before any new adventure snapshot joins history');
  assert.equal(storage.value.checkpoints[0].save.game.state.money, 3);
  assert.equal(errors.length, 2);
});

test('invalid and dead snapshots never become recovery choices; unavailable storage degrades safely', async () => {
  const storage = memory(), saves = await history(storage);
  const dead = adventure(0); dead.game.state.health = 0;
  assert.equal(await saves.capture(dead), false);
  const malformed = adventure(0); malformed.position[0] = Infinity;
  assert.equal(await saves.capture(malformed), false);
  assert.equal(storage.writes, 0);
  saves.advance(NaN); saves.advance(-1); saves.advance(Infinity);
  assert.equal(saves.clock, 0);
  const errors = [];
  const unavailable = new RecoverySaves({storage: new IndexedDBRecoveryStorage({indexedDB: null}), onError: error => errors.push(error)});
  assert.equal(await unavailable.ready, false);
  assert.equal(await unavailable.capture(adventure(0)), false);
  assert.equal(unavailable.needsCapture, false);
  assert.deepEqual(unavailable.choices().map(choice => choice.save), [null, null, null]);
  assert.equal(errors.length, 1);
});

test('loading validates and bounds persisted history before exposing any snapshot', async () => {
  const checkpoints = Array.from({length: 30}, (_, number) => ({at: number * 60, save: adventure(number)}));
  checkpoints[27].save.game.state.health = 0;
  checkpoints[28].at = Infinity;
  const saves = await history(memory({clock: 1740, anchor: 0, checkpoints}));
  assert.ok(saves.state.checkpoints.length <= 11);
  assert.ok(saves.state.checkpoints.every(entry => Number.isFinite(entry.at) && entry.save.game.state.health > 0));
  assert.equal(saves.choices()[0].save, null, 'a missing minute does not masquerade as a different recovery age');
  const errors = [], invalid = new RecoverySaves({storage: memory({clock: NaN, anchor: 0, checkpoints: []}), onError: error => errors.push(error)});
  assert.equal(await invalid.ready, false);
  assert.equal(errors.length, 1);
  assert.equal(await invalid.capture(adventure(1)), false, 'ordinary saves cannot overwrite an unreadable history');
  assert.equal(await invalid.capture(adventure(0), {reset: true}), true, 'explicit new-adventure reset can replace a damaged readable record');
  assert.equal(invalid.needsCapture, false);
});

test('missed capture buckets do not fabricate saves or mislabel recovery ages', async () => {
  const saves = await history();
  await saves.capture(adventure(0));
  saves.advance(600);
  await saves.capture(adventure(10));
  const choices = saves.choices();
  assert.equal(choices[0].save, null);
  assert.equal(choices[1].save, null);
  assert.equal(choices[2].save.game.state.money, 0);
  assert.equal(saves.state.checkpoints.length, 2);
});

test('captures and clock advances queued before storage opens retain their order', async () => {
  const storage = memory({clock: 300, anchor: 0, checkpoints: [{at: 300, save: adventure(5)}]});
  let open;
  storage.read = () => new Promise(resolve => { open = resolve; });
  const saves = new RecoverySaves({storage});
  saves.advance(60);
  const first = saves.capture(adventure(6));
  saves.advance(60);
  const second = saves.capture(adventure(7));
  open(copy(storage.value));
  assert.deepEqual(await Promise.all([first, second]), [true, true]);
  assert.deepEqual(storage.value.checkpoints.map(entry => entry.at), [300, 360, 420]);
  assert.equal(saves.choices()[0].save.game.state.money, 5);
});

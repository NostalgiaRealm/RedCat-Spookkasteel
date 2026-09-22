import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { DaviVM, DaviRuntimeError, daviBinary, daviUnary } from '../src/davi-vm.js';

const programs = Array.from({ length: 5 }, (_, i) => JSON.parse(readFileSync(new URL(`../data/davi/lvl0${i}a.json`, import.meta.url))));
function harness(level, overrides = {}) {
  const program = typeof level === 'number' ? programs[level] : level;
  const tokens = new Map(), calls = [];
  const definitions = new Map([...program.functions, ...program.classes.flatMap(c => c.members)].map(f => [f.name, f]));
  const defaultResult = definition => definition.type.code === 3 ? '' : definition.type.code === 4 ? null : 0;
  const host = {
    resolveObject(name) { if (!tokens.has(name)) tokens.set(name, { daviName: name }); return tokens.get(name); },
    callMethod(object, name, args) {
      calls.push([object.daviName, name, args]);
      return name in overrides ? overrides[name](object, args) : defaultResult(definitions.get(name));
    },
    callNative(name, args) { calls.push([name, args]); return name in overrides ? overrides[name](args) : defaultResult(definitions.get(name)); },
  };
  const vm = new DaviVM(program, host); vm.initialize(); calls.length = 0;
  return { vm, calls, host, defaultResult };
}

test('original forest introduction takes only the matching event branch and forwards typed arguments', () => {
  const { vm, calls } = harness(0);
  vm.call('CSL000_MotionCommand', ['startcutscene', 0]);
  vm.call('CSL000_MotionCommand', ['startcamera', .5]);
  vm.call('CSL000_MotionCommand', ['rcgen44', 1]);
  vm.call('CSL000_MotionCommand', ['unknown marker', 2]);
  vm.call('CSL000_MotionCommand', ['stopcutscene', 3]);
  assert.deepEqual(calls, [
    ['StartCutScene', [.001]], ['camera1', 'Enable', []], ['CutSceneSay', ['rcgen44']], ['StopCutScene', [1.5]],
  ]);
});

test('original door reset functions select the original enabled door controllers', () => {
  const { vm, calls } = harness(0);
  vm.call('DeurReset1');
  assert.equal(calls.length, 12);
  assert.deepEqual(calls[0], ['deur1_mc', 'Open', []]);
  assert.deepEqual(calls[1], ['deur2_mc', 'Close', []]);
  calls.length = 0; vm.call('DeurReset2');
  assert.equal(calls.length, 12);
  assert.deepEqual(calls[0], ['deur1_mc', 'Close', []]);
  assert.equal(calls.filter(x => x[1] === 'Open').length, 2);
});

test('original graveyard puzzle requires all five pillar flags and persists them across callbacks', () => {
  const { vm, calls } = harness(2);
  for (const label of ['paal1a', 'paal2a', 'paal3b', 'paal4a', 'paal5a']) vm.call('Puzzel', [label, 0]);
  assert.equal(calls.some(c => c[0] === 'mausomodel_mc'), false);
  calls.length = 0;
  vm.call('Puzzel', ['paal3e', 0]);
  assert.deepEqual(calls, [['puzstuk3_mc', 'Disable', []], ['mausomodel_mc', 'Enable', []]]);
  assert.deepEqual(Object.values(vm.snapshot().globals).map(v => v.value), [1, 1, 1, 1, 1]);
  const restored = harness(2); restored.vm.restore(JSON.parse(JSON.stringify(vm.snapshot())));
  restored.vm.call('Puzzel', ['paal1b', 0]);
  assert.equal(restored.calls.some(c => c[0] === 'mausomodel_mc'), false);
  assert.equal(restored.vm.snapshot().globals['37:0'].value, 0);
});

test('original tower gates fifth mirror until last mirror pickup, then advances its persistent counter', () => {
  const { vm, calls } = harness(4);
  for (let i = 1; i <= 4; i++) vm.call(`MirrorTrigger${i}`);
  assert.equal(vm.snapshot().globals['37:1'].value, 4);
  calls.length = 0; vm.call('MirrorTrigger5');
  assert.deepEqual(calls, []);
  assert.equal(vm.hasHandler('laatste', 'PickupCommand'), true);
  assert.equal(vm.dispatch('laatste', 'PickupCommand'), 1);
  vm.call('MirrorTrigger5');
  assert.equal(vm.snapshot().globals['37:1'].value, 5);
  assert.ok(calls.some(c => c[0] === 'move_standaard05' && c[1] === 'Enable'));
  assert.deepEqual(calls.at(-1), ['trigger_sokkel05', 'Disable', []]);
});

test('original witch death starts both beam timelines and their cutscene freezes enemies', () => {
  const { vm, calls, host } = harness(4);
  assert.equal(vm.dispatch(host.resolveObject('The_Witch'), 'AfterDestroyCommand'), 1);
  assert.deepEqual(calls.splice(0), [['beam_sequence01', 'Enable', []], ['beam_sequence02', 'Enable', []]]);
  vm.call('beams01_MotionCommand', ['StartCutScene', 0]);
  vm.call('beams01_MotionCommand', ['show_witch04', 1]);
  vm.call('beams01_MotionCommand', ['StopCutScene', 2]);
  assert.deepEqual(calls, [
    ['StartCutScene', [1]], ['FreezeEnemies', []], ['muziek', 'MultiplyVolume', [.1]],
    ['witch_model03', 'Hide', []], ['witch_model04', 'Show', []], ['beams', 'Disable', []],
    ['StopCutScene', [1]], ['UnFreezeEnemies', []], ['muziek', 'MultiplyVolume', [2]],
  ]);
  assert.equal(vm.dispatch('irrelevant object', 'AfterDestroyCommand'), 0);
});

test('all five original programs execute every function, handler and literal motion-event branch', () => {
  let handlers = 0, labels = 0;
  for (let level = 0; level < 5; level++) {
    const { vm, defaultResult } = harness(level, { GetGameType: () => 1, RcHasAllPotions: () => 1, PlayerHasKeyItem: () => 1 });
    for (const fn of programs[level].functions.filter(f => f.kind === 'function')) {
      vm.call(fn.name, fn.parameters.map(defaultResult));
      if (fn.parameters[0]?.type.code === 3) {
        const values = new Set(fn.instructions.flatMap(i => [i.a, i.b, i.source, i.rhs]).filter(e => e?.tag === 0 && e.type === 3).map(e => e.value));
        for (const value of values) {
          const args = fn.parameters.map(defaultResult); args[0] = value; vm.call(fn.name, args); labels++;
        }
      }
    }
    for (const cls of programs[level].classes) for (const event of cls.members) for (const handler of event.handlers ?? []) {
      const args = handler.parameters.filter(p => p.name !== '@self').map(defaultResult);
      vm.dispatch(handler.owner.name, event.name, args); handlers++;
    }
    assert.equal(vm.lastError, null);
  }
  assert.equal(handlers, 444);
  assert.ok(labels > 300);
});

const type = code => ({ code });
const literal = (code, value) => ({ tag: 0, type: code, value });
const register = index => ({ tag: 5, index });
function synthetic(instructions) {
  return { version: 27, source: 'fixture', sha256: 'fixture', classes: [], globals: [], constants: [], objects: [], functions: [
    { id: '3b:0', tag: 59, index: 0, kind: 'function', name: '@init', type: type(0), parameters: [], instructions: [] },
    { id: '3b:1', tag: 59, index: 1, kind: 'function', name: 'run', type: type(2), parameters: [], instructions },
  ] };
}

test('native operand order, temporary return register, cast and conditional jumps', () => {
  const { vm } = harness(synthetic([
    { opcode: 4, destination: register(0), source: literal(2, 3), rhs: literal(2, 10), operator: 3 },
    { opcode: 1, a: register(0), whenTruthy: 1, target: 3 },
    { opcode: 3, destination: register(0), source: literal(2, -1) },
    { opcode: 5, destination: register(0), source: register(0), operator: 0 },
    { opcode: 0, target: -2 },
  ]));
  assert.equal(vm.call('run'), -7);
  assert.deepEqual(daviBinary(4, { type: 2, value: -7 }, { type: 2, value: 3 }), { type: 2, value: -2 });
  assert.deepEqual(daviBinary(14, { type: 2, value: -7 }, { type: 2, value: 3 }), { type: 2, value: -1 });
  assert.deepEqual(daviUnary(5, { type: 1, value: -2.9 }), { type: 2, value: -2 });
});

test('invalid instructions, stack underflow, missing native implementations and runaway jumps fail explicitly', () => {
  const bad = harness(synthetic([{ opcode: 99 }]));
  assert.throws(() => bad.vm.call('run'), /Unknown instruction opcode/);
  assert.equal(bad.vm.lastError.functionName, 'run');
  assert.equal(bad.vm.lastError.instruction, 0);
  const underflow = harness(synthetic([{ opcode: 3, destination: register(0), source: { tag: 1, type: 2 } }]));
  assert.throws(() => underflow.vm.call('run'), /stack underflow/);
  const runaway = harness(synthetic([{ opcode: 0, target: 0 }])); runaway.vm.options.maxSteps = 20;
  assert.throws(() => runaway.vm.call('run'), /instruction budget/);
  assert.equal(runaway.vm.frames.length, 0);
  const native = harness(0, { StartCutScene: () => { throw new Error('Unimplemented StartCutScene'); } });
  assert.throws(() => native.vm.call('CSL000_MotionCommand', ['startcutscene', 0]), /Unimplemented StartCutScene/);
  assert.ok(native.vm.lastError);
  assert.throws(() => native.vm.restore({ version: 1, script: 'wrong' }), DaviRuntimeError);
});

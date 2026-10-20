import test from 'node:test';
import assert from 'node:assert/strict';
import {
  DEFAULT_CONTROL_BINDINGS, normalizeControlBindings, validateControlBindings,
  assignControlBinding, readKeyboardInput, bindingPressed, controlBindingLabel,
} from '../src/control-bindings.js';

test('default keyboard actions preserve WASD strafing and arrow turning', () => {
  assert.deepEqual(readKeyboardInput(new Set(['KeyW', 'KeyD', 'ArrowLeft'])), {
    forward: 1, right: 1, turn: 1, jump: false, walk: false, descend: false, attack: false, use: false,
  });
  const arrows = readKeyboardInput(new Set(['ArrowUp', 'ArrowRight']));
  assert.equal(arrows.forward, 1);
  assert.equal(arrows.turn, -1);
  assert.equal(arrows.right, 0);
  const opposites = readKeyboardInput(new Set(['KeyW', 'ArrowDown', 'KeyA', 'KeyD', 'ArrowLeft', 'ArrowRight']));
  assert.equal(opposites.forward, 0);
  assert.equal(opposites.right, 0);
  assert.equal(opposites.turn, 0);
});

test('both physical modifier sides retain walk, descend and attack', () => {
  for (const side of ['Left', 'Right']) {
    const input = readKeyboardInput(new Set([`Shift${side}`, `Control${side}`, 'Space', 'KeyE']));
    assert.equal(input.walk, true);
    assert.equal(input.descend, true);
    assert.equal(input.attack, true);
    assert.equal(input.jump, true);
    assert.equal(input.use, true);
  }
});

test('remapping removes old keyboard aliases without changing unrelated actions', () => {
  const original = normalizeControlBindings();
  const result = assignControlBinding(original, 'forward', 'KeyZ');
  assert.equal(result.ok, true);
  assert.equal(readKeyboardInput(new Set(['KeyZ']), result.bindings).forward, 1);
  assert.equal(readKeyboardInput(new Set(['KeyW', 'ArrowUp']), result.bindings).forward, 0);
  assert.equal(readKeyboardInput(new Set(['Space']), result.bindings).jump, true);
  assert.deepEqual(original, DEFAULT_CONTROL_BINDINGS, 'caller and defaults are never mutated');
  const reload = normalizeControlBindings(JSON.parse(JSON.stringify(result.bindings)));
  assert.deepEqual(reload, result.bindings);
});

test('duplicate and reserved keys are rejected before any bindings change', () => {
  const original = normalizeControlBindings();
  for (const key of ['KeyE', 'ControlRight', 'ArrowDown']) {
    const result = assignControlBinding(original, 'jump', key);
    assert.equal(result.ok, false);
    assert.equal(result.error.code, 'duplicate');
  }
  for (const key of ['Escape', 'KeyP', 'F5', 'F9']) {
    assert.equal(assignControlBinding(original, 'jump', key).error.code, 'reserved');
  }
  for (const key of ['', 'Unidentified', 'MouseLeft', null, '<script>']) {
    assert.equal(assignControlBinding(original, 'jump', key).error.code, 'invalid');
  }
  assert.equal(assignControlBinding(original, '__proto__', 'KeyZ').ok, false);
  assert.deepEqual(original, DEFAULT_CONTROL_BINDINGS);
});

test('malformed stored bindings fall back safely as a complete conflict-free set', () => {
  for (const value of [null, [], {jump: []}, {attack: 'KeyZ'}, {jump: ['KeyW']}, {jump: ['ControlLeft', 'ControlRight']}]) {
    const normalized = normalizeControlBindings(value);
    assert.deepEqual(normalized, DEFAULT_CONTROL_BINDINGS);
    assert.equal(validateControlBindings(normalized), null);
  }
  assert.deepEqual(normalizeControlBindings({jump: ['KeyZ']}).jump, ['KeyZ']);
});

test('modifier aliases are canonicalized and camera/use can be tested independently', () => {
  const result = assignControlBinding(DEFAULT_CONTROL_BINDINGS, 'jump', 'AltRight');
  assert.equal(result.ok, true);
  assert.deepEqual(result.bindings.jump, ['Alt']);
  assert.equal(bindingPressed(new Set(['AltLeft']), result.bindings, 'jump'), true);
  assert.equal(bindingPressed(new Set(['KeyV']), result.bindings, 'camera'), true);
  assert.equal(bindingPressed(new Set(['KeyE']), result.bindings, 'use'), true);
  assert.equal(controlBindingLabel(DEFAULT_CONTROL_BINDINGS, 'forward'), 'W / Pijl omhoog');
  assert.equal(controlBindingLabel(DEFAULT_CONTROL_BINDINGS, 'attack'), 'Ctrl');
});

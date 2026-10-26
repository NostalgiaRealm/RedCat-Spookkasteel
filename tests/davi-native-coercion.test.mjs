import test from 'node:test';
import assert from 'node:assert/strict';
import { daviUnary, daviBinary } from '../source/davi-vm.js';

// Expected results were executed from the original e30781fc machine code in
// temp_work/native-behavior-followup-2026-10-26/vm/native_vm_probe.py.
test('double strings use native six-digit %lg notation and exponent width', () => {
  for (const [value, expected] of [
    [0, '0'], [-0, '0'], [1, '1'], [123456, '123456'], [1234567, '1.23457e+006'],
    [.0001, '0.0001'], [.00001, '1e-005'], [.00009999999, '0.0001'],
    [999999.5, '1e+006'], [1.234565, '1.23456'], [-1.234565, '-1.23456'],
    [1.234575, '1.23458'], [-1.234575, '-1.23458'],
    [1.2345749999999998, '1.23457'], [1.2345750000000002, '1.23458'],
    [1e100, '1e+100'], [1e-100, '1e-100'], [Number.MAX_VALUE, '1.79769e+308'],
    [Number.MIN_VALUE, '4.94066e-324'],
    [Infinity, '1.#INF'], [-Infinity, '-1.#INF'], [NaN, '1.#QNAN'],
  ]) assert.deepEqual(daviUnary(4, { type: 1, value }), { type: 3, value: expected }, String(value));
});

test('integer strings retain native wrapping and C-locale whitespace', () => {
  for (const [value, expected] of [
    ['123', 123], ['-42', -42], ['2147483648', -2147483648],
    ['999999999999999999999999999999', 1073741823], ['\u00a0123', 0],
    ['\t 12tail', 12], ['12\0' + '34', 12],
  ]) assert.deepEqual(daviUnary(6, { type: 3, value }), { type: 2, value: expected }, value);
});

test('native decimal parsing accepts D exponents and preserves signed zero with C whitespace', () => {
  for (const [value, expected] of [
    ['1.25',1.25],['\u00a01.25',0],['Infinity',0],['-Infinity',0],['NaN',0],['1.#INF',1],
    ['1e2',100],['1d2',100],['0x1.4p2',0],['-0',-0],['-0.0',-0],['\t-1.2tail',-1.2],
    ['1e999',Infinity],['-1e999',-Infinity],['1e-999',0],['1,2',1],
  ]) assert.deepEqual(daviUnary(7,{type:3,value}),{type:1,value:expected},value);
});

test('string comparisons use native unsigned byte order and full stored length', () => {
  for (const [a, b, sign] of [['€', 'é', -1], ['abc\0z', 'abc\0x', 1], ['A', 'a', -1], ['', 'x', -1], ['abc', 'ab', 1], ['x', 'x', 0]]) {
    const expect = [sign >= 0, sign <= 0, sign > 0, sign < 0, sign === 0, sign !== 0];
    for (let i = 0; i < expect.length; i++) assert.deepEqual(daviBinary(i + 5, { type: 3, value: a }, { type: 3, value: b }), { type: 2, value: Number(expect[i]) });
  }
});

test('double remainder uses the original signed 32-bit quotient', () => {
  for (const [a, b, expected] of [[1e10, 3, 12884901889], [-12.25, 5.125, -2], [12.25, 5.125, 2]]) {
    assert.deepEqual(daviBinary(14, { type: 1, value: a }, { type: 1, value: b }), { type: 1, value: expected });
  }
});

test('double-to-int keeps the low word of native x87 conversion', () => {
  for (const [value, expected] of [[1.5, 1], [-1.5, -1], [2 ** 31, -2147483648], [2 ** 53, 0], [2 ** 63 - 1024, -1024], [2 ** 63, 0], [1e20, 0], [1e30, 0], [Infinity, 0], [NaN, 0]]) {
    assert.deepEqual(daviUnary(5, { type: 1, value }), { type: 2, value: expected }, String(value));
  }
});

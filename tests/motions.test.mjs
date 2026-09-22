import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {MotionPlayer, samplePath, transformMotionPoint} from '../src/motions.js';

const near = (actual, expected, epsilon = 1e-6) => assert.ok(Math.abs(actual - expected) < epsilon, `${actual} != ${expected}`);
const nearVector = (actual, expected) => actual.forEach((v, i) => near(v, expected[i]));
const fixture = () => ({startTime: 0, endTime: 2, duration: 2,
  paths: [{name: 'FixedPath', translation: {times: [0, 2], values: [0, 0, 0, 4, 8, 12], interpolation: 1, loop: false}}],
  events: [{time: 0, label: 'start'}, {time: .5, label: 'door'}, {time: 1, label: 'camera'}, {time: 2, label: 'end'}]});

test('Hermite brush translation matches Genesis end slopes and time-weighted interior slopes', () => {
  const channel = {times: [0, 1, 3], values: [0, 0, 0, 3, 0, 0, 9, 0, 0], interpolation: 1, loop: false};
  nearVector(samplePath({translation: channel}, .5).translation, [1.5, 0, 0]);
  nearVector(samplePath({translation: channel}, 2).translation, [6, 0, 0]);
  channel.values = [0, 0, 0, 3, 0, 0, 3, 0, 0];
  near(samplePath({translation: channel}, .5).translation[0], 1.75);
});

test('zero-derivative easing, channel looping and missing channels retain their meanings', () => {
  const path = {translation: {times: [1, 3], values: [0, 0, 0, 10, 0, 0], interpolation: 2, loop: true}};
  near(samplePath(path, 1.5).translation[0], 1.5625);
  near(samplePath(path, 3.5).translation[0], 1.5625);
  near(samplePath(path, -.5).translation[0], 1.5625);
  nearVector(samplePath(path, 1).rotation, [0, 0, 0, 1]);
});

test('quaternion SLERP rotates a brush around its pivot in original Y-up coordinates', () => {
  const path = {rotation: {times: [0, 2], values: [0, 0, 0, 1, 0, 1, 0, 0], interpolation: 1, loop: false}};
  const pose = samplePath(path, 1);
  nearVector(pose.rotation, [0, Math.SQRT1_2, 0, Math.SQRT1_2]);
  pose.translation = [0, 5, 0];
  nearVector(transformMotionPoint([11, 20, 30], [10, 20, 30], pose), [10, 25, 29]);
  nearVector(transformMotionPoint([10, 20, 30], [10, 20, 30], pose), [10, 25, 30]);
});

test('SQUAD retains unit rotations and exact keyframes', () => {
  const path = {rotation: {times: [0, 1, 2], values: [0, 0, 0, 1, 0, Math.SQRT1_2, 0, Math.SQRT1_2, 0, 1, 0, 0], interpolation: 2, loop: false}};
  nearVector(samplePath(path, 1).rotation, [0, Math.SQRT1_2, 0, Math.SQRT1_2]);
  near(Math.hypot(...samplePath(path, .7).rotation), 1);
});

test('all crossed original event labels dispatch once before completion even on a long frame', () => {
  const seen = [];
  const player = new MotionPlayer(fixture(), {onEvent: (event, p) => {seen.push(event.label); near(p.time, event.time);}, onComplete: () => seen.push('complete')});
  player.play();
  player.update(.5);
  player.update(.5);
  player.update(4);
  player.update(4);
  assert.deepEqual(seen, ['start', 'door', 'camera', 'end', 'complete']);
  assert.equal(player.playing, false);
  assert.equal(player.finished, true);
  nearVector(player.sample().translation, [4, 8, 12]);
});

test('partial reverse playback and silent seeking use authored seconds', () => {
  const seen = [];
  const player = new MotionPlayer(fixture(), {onEvent: e => seen.push(e.label)});
  player.play({from: 1.5, to: .5, speed: 2});
  player.update(.5);
  assert.deepEqual(seen, ['camera', 'door']);
  near(player.time, .5);
  player.seek(1.8);
  assert.deepEqual(seen, ['camera', 'door']);
  near(player.time, 1.8);
  player.play({speed: -1});
  player.update(2);
  assert.deepEqual(seen.slice(2), ['end', 'camera', 'door', 'start']);
});

test('looping preserves all events across multiple cycles and exact boundaries', () => {
  const seen = [];
  const player = new MotionPlayer(fixture(), {onEvent: e => seen.push(e.label)});
  player.play({loop: true});
  player.update(4.5);
  assert.deepEqual(seen, ['start', 'door', 'camera', 'end', 'start', 'door', 'camera', 'end', 'start', 'door']);
  near(player.time, .5);
  player.update(1.5);
  assert.deepEqual(seen.slice(-3), ['camera', 'end', 'start']);
  const count = seen.length;
  player.update(0);
  assert.equal(seen.length, count);
});

test('callbacks can stop or replace a motion without stale later events or completion', () => {
  const seen = [];
  const player = new MotionPlayer(fixture(), {onEvent: (e, p) => {seen.push(e.label); if(e.label === 'door') p.stop();}, onComplete: () => assert.fail('stopped clip completed')});
  player.play();
  player.update(5);
  assert.deepEqual(seen, ['start', 'door']);
  near(player.time, .5);
  player.onEvent = (e, p) => {if(e.label === 'door') p.play({from: 1.5, to: 2});};
  player.play();
  player.update(5);
  near(player.time, 1.5);
  assert.equal(player.playing, true);
});

test('ping-pong repeat reflects leftover frame time, keeps endpoint events single and resumes direction', () => {
  const seen = [];
  const player = new MotionPlayer(fixture(), {onEvent: e => seen.push(e.label)});
  player.play({loop: 'pingpong'});
  player.update(2.5);
  near(player.time, 1.5);
  assert.deepEqual(seen, ['start', 'door', 'camera', 'end']);
  player.stop();
  player.update(10);
  near(player.time, 1.5);
  player.resume();
  player.update(2.5);
  near(player.time, 1);
  assert.deepEqual(seen, ['start', 'door', 'camera', 'end', 'camera', 'door', 'start', 'door', 'camera']);
});

test('InitialPosition can be midway through a complete repeating path', () => {
  const player = new MotionPlayer(fixture());
  player.play({from: 1, to: 2, loop: true, loopFrom: 0, loopTo: 2});
  player.update(2);
  near(player.time, 1);
  player.play({from: 1, to: 2, loop: 'pingpong', loopFrom: 0, loopTo: 2});
  player.update(2);
  near(player.time, 1);
  player.update(1.5);
  near(player.time, .5);
});

test('graveyard final event after the path endpoint is delivered before wrap regardless of frame step', () => {
  const data = JSON.parse(readFileSync(new URL('../data/motions/lvl02a.json', import.meta.url)));
  const clip = data.motions.find(m => m.model === 141);
  assert.equal(clip.pathEndTime, 8);
  assert.equal(clip.playbackEndTime, 8.01);
  for (const dt of [.005, 1 / 60, .1]) {
    const seen = [], player = new MotionPlayer(clip, {onEvent: e => seen.push(e.label)});
    player.play();
    while (player.playing) player.update(dt);
    assert.equal(seen.at(-1), 'paal1e');
    assert.equal(seen.length, 5);
    nearVector(player.sample().translation, samplePath(clip.paths[0], 8).translation);
  }
});

test('zero-length loop completes once and non-finite frame time cannot hang playback', () => {
  let completed = 0;
  const player = new MotionPlayer(fixture(), {onComplete: () => completed++});
  player.play({from: 1, to: 1, loop: true});
  player.update(100);
  player.update(100);
  assert.equal(completed, 1);
  player.play();
  player.update(Infinity);
  near(player.time, 0);
});

test('all five imported worlds sample every path and replay all 806 original event labels', () => {
  let motions = 0, events = 0;
  for (let i = 0; i < 5; i++) {
    const data = JSON.parse(readFileSync(new URL(`../data/motions/lvl0${i}a.json`, import.meta.url)));
    for (const motion of data.motions) {
      motions++;
      const seen = [], player = new MotionPlayer(motion, {onEvent: e => seen.push(e)});
      player.play();
      player.update(motion.duration + 1);
      assert.deepEqual(seen, motion.events, `${data.level}: model ${motion.model}`);
      events += seen.length;
      for (const path of motion.paths) {
        for (const time of [motion.startTime, (motion.startTime + motion.endTime) / 2, motion.endTime]) {
          const sample = samplePath(path, time);
          assert.ok([...sample.translation, ...sample.rotation].every(Number.isFinite));
          near(Math.hypot(...sample.rotation), 1);
        }
      }
    }
  }
  assert.equal(motions, 437);
  assert.equal(events, 806);
});

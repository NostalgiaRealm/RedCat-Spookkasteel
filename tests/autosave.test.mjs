import test from 'node:test';
import assert from 'node:assert/strict';
import {AutosaveClock} from '../src/autosave.js';

test('autosave waits one minute of active wall time, including slow frames',()=>{
  const clock=new AutosaveClock();let writes=0;const save=()=>{writes++;return true;};
  clock.update(59,save);assert.equal(writes,0);
  clock.update(1,save);assert.equal(writes,1);
  clock.update(60,save);assert.equal(writes,2);
  clock.update(600,save);assert.equal(writes,3,'one write after a long frame');
  assert.equal(clock.remaining,60);
});

test('successful manual/checkpoint saves and level loads restart the minute',()=>{
  const clock=new AutosaveClock();let writes=0;const save=()=>{writes++;return true;};
  clock.update(45,save);clock.reset();
  // Paused/menu time does not call update.
  clock.update(59,save);assert.equal(writes,0);
  clock.update(1,save);assert.equal(writes,1);
});

test('failed storage writes retry without marking a minute successfully saved',()=>{
  const clock=new AutosaveClock();let writes=0;const fail=()=>{writes++;return false;};
  assert.equal(clock.update(60,fail),false);assert.equal(writes,1);
  clock.update(4,fail);assert.equal(writes,1);
  assert.equal(clock.update(1,()=>{writes++;return true;}),true);
  assert.equal(writes,2);assert.equal(clock.remaining,60);
  clock.update(NaN,fail);clock.update(-10,fail);assert.equal(clock.remaining,60);
});

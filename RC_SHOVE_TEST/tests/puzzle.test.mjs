import {test} from 'node:test';
import assert from 'node:assert/strict';
import {readFile} from 'node:fs/promises';
import {NativePuzzle,movePlayer,stepVertical,overlaps,playerBox,boxAt} from '../src/simulation.js';

const data=JSON.parse(await readFile(new URL('../assets/native-crate-puzzle.json',import.meta.url)));
const collision=JSON.parse(await readFile(new URL('../assets/native-crate-collision-boxes.json',import.meta.url)));
const near=(a,b)=>assert.ok(Math.abs(a-b)<1e-6,`${a} != ${b}`);

test('button must reach its authored endpoint before the three crate paths begin',()=>{
  const puzzle=new NativePuzzle(data.models),button=data.models[3];
  puzzle.update(20);assert.equal(puzzle.time,0);
  assert.equal(puzzle.trigger(),true);assert.equal(puzzle.trigger(),false);
  puzzle.update(.5);near(puzzle.offset(button)[2],3.0000305);
  for(const model of data.models.slice(0,3))assert.deepEqual(puzzle.offset(model),[0,0,0]);
  puzzle.update(.5);for(const model of data.models.slice(0,3))assert.deepEqual(puzzle.offset(model),[0,0,0]);
  puzzle.update(.5);
  near(puzzle.offset(data.models[0])[2],91*.5/1.7);
  near(puzzle.offset(data.models[1])[2],116*.5/2.5);
  near(puzzle.offset(data.models[2])[2],93*.5);
});
test('native paths keep their endpoints and reset completely',()=>{
  const puzzle=new NativePuzzle(data.models);puzzle.trigger();puzzle.update(3.5);
  assert.equal(puzzle.completed,true);
  assert.deepEqual(data.models.slice(0,3).map(m=>puzzle.offset(m)[2]),[91,116,93]);
  puzzle.update(100);assert.deepEqual(data.models.slice(0,3).map(m=>puzzle.offset(m)[2]),[91,116,93]);
  puzzle.reset();assert.equal(puzzle.active,false);assert.equal(puzzle.completed,false);
  for(const model of data.models)assert.deepEqual(puzzle.offset(model),[0,0,0]);
});
test('walking into a solid crate does not move it or pass through it',()=>{
  const body={center:[0,32,0],half:[32,32,32]},original=structuredClone(body);
  const p={x:0,y:0,z:-100,vy:0,grounded:true};
  movePlayer(p,0,300,[body]);assert.ok(p.z<=-45);assert.deepEqual(body,original);
  assert.equal(overlaps(playerBox(p),boxAt(body)),false);
  movePlayer(p,100,0,[body]);assert.ok(p.x>90);
});
test('original compound stacks preserve 38 solid leaves instead of filling their gaps',()=>{
  assert.equal(collision.models.reduce((n,m)=>n+m.solidLeafBoxes.length,0),38);
  assert.deepEqual(collision.models.map(m=>m.solidLeafBoxes.length),[12,15,10,1]);
  for(const model of collision.models)for(const b of model.solidLeafBoxes){
    assert.ok(b.localMin.every((v,i)=>v<b.localMax[i]));
    for(let i=0;i<3;i++){near(b.localMin[i]+model.origin[i],b.min[i]);near(b.localMax[i]+model.origin[i],b.max[i]);}
  }
});
test('lab movement remains inside its floor and lands on a solid surface',()=>{
  const p={x:0,y:80,z:0,vy:-10,grounded:false};
  const body={center:[0,20,0],half:[32,20,32]};
  for(let i=0;i<100;i++)stepVertical(p,1/120,[body],false);
  near(p.y,40);assert.equal(p.grounded,true);
  movePlayer(p,1000,0,[]);assert.ok(p.x<=427);
});
test('explicit power-move moves all crate leaves together; release stops pushing',()=>{
  const model={pushable:true,pushOffset:[0,0,0]};
  const bodies=[{center:[-16,32,0],half:[16,32,32],model},{center:[16,32,0],half:[16,32,32],model}];
  const p={x:0,y:0,z:-60};
  assert.equal(movePlayer(p,0,40,bodies),false);assert.deepEqual(model.pushOffset,[0,0,0]);
  assert.equal(movePlayer(p,0,40,bodies,true),true);
  near(bodies[0].center[2],model.pushOffset[2]);near(bodies[1].center[2],model.pushOffset[2]);
  const offset=model.pushOffset[2];movePlayer(p,0,40,bodies);near(model.pushOffset[2],offset);
});
test('power-move stops the entire compound crate before a fixed wall',()=>{
  const model={pushable:true,pushOffset:[0,0,0]};
  const bodies=[{center:[-16,32,0],half:[16,32,32],model},{center:[16,32,0],half:[16,32,32],model},
    {center:[0,32,100],half:[100,32,10]}];
  const p={x:0,y:0,z:-46};movePlayer(p,0,300,bodies,true);
  assert.ok(model.pushOffset[2]>50&&model.pushOffset[2]<=58);
  for(const body of bodies.slice(0,2))assert.equal(overlaps(boxAt(body),boxAt(bodies[2])),false);
});
test('experimental input cannot push the verified native puzzle models',()=>{
  const model={pushable:false,pushOffset:[0,0,0]},body={center:[0,32,0],half:[32,32,32],model};
  const p={x:0,y:0,z:-60};assert.equal(movePlayer(p,0,200,[body],true),false);
  assert.deepEqual(model.pushOffset,[0,0,0]);assert.ok(p.z<=-45);
});

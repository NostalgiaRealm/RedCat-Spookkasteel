import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {BspCollider,PlayerController} from '../src/collision.js';
import {MotionPlayer} from '../src/motions.js';
import {moveSolidPlayer} from '../src/moving-solids.js';
import {triangleCollider} from '../src/actor-collision.js';

const pose=(translation=[0,0,0],angle=0)=>({origin:[0,0,0],translation,rotation:[0,Math.sin(angle/2),0,Math.cos(angle/2)]});
function boxes(...bounds) {
  const data={planes:[],nodes:[],leaves:[{contents:0,numSides:0}],leafSides:[],models:[{root:-1}]};
  for(const [min,max] of bounds) {
    const firstSide=data.leafSides.length;
    for(let axis=0;axis<3;axis++)for(const sign of [1,-1]) {
      const normal=[0,0,0];normal[axis]=sign;
      data.leafSides.push([data.planes.length,0]);data.planes.push([...normal,sign*(sign>0?max[axis]:min[axis])]);
    }
    data.leaves.push({contents:1,firstSide,numSides:6,min,max});data.models.push({root:-data.leaves.length,min,max});
  }
  return new BspCollider(data);
}
function player(collider,position) {const p=new PlayerController(collider,position,collider.data.models.map((_,i)=>i));p.mins=[-1,0,-1];p.maxs=[1,4,1];return p;}
function clear(c,p){assert.equal(c.trace(p.position,p.position,p.mins,p.maxs,p.modelIndices).startSolid,false);}

test('a translating brush sweeps a stationary player instead of trapping or passing through the hull',()=>{
  const c=boxes([[-.2,0,-8],[.2,10,8]]),p=player(c,[20,1,0]);c.modelTransforms.set(1,pose());
  assert.equal(moveSolidPlayer(c,p,1,pose(),pose([50,0,0])),true);
  assert.ok(p.position[0]>51.2);clear(c,p);
  const walk=c.slide(p.position,[5,0,0],p.mins,p.maxs,p.modelIndices);assert.ok(walk.position[0]>p.position[0]+4.99);
});

test('a hinged door sweeps its arc and leaves RedCat free to move beside it',()=>{
  const c=boxes([[0,0,-2],[70,80,2]]),p=player(c,[50,1,-25]);c.modelTransforms.set(1,pose());
  assert.equal(moveSolidPlayer(c,p,1,pose(),pose([0,0,0],Math.PI/2)),true);
  assert.ok(Math.hypot(p.position[0]-50,p.position[2]+25)>10);clear(c,p);
});

test('a wall-blocked door rejects its movement and cannot crush the player or teleport through a wall',()=>{
  const c=boxes([[-2,0,-8],[2,10,8]],[[28,0,-50],[30,50,50]]),p=player(c,[20,1,0]);c.modelTransforms.set(1,pose());
  assert.equal(moveSolidPlayer(c,p,1,pose(),pose([40,0,0])),false);
  assert.deepEqual(p.position,[20,1,0]);assert.deepEqual(c.modelTransforms.get(1),pose());clear(c,p);
});

test('the same brush transaction carries moving floors and refuses a ceiling crush',()=>{
  const c=boxes([[-20,-4,-20],[20,0,20]], [[-50,12,-50],[50,15,50]]),p=player(c,[0,.05,0]);p.grounded=true;c.modelTransforms.set(1,pose());
  assert.equal(moveSolidPlayer(c,p,1,pose(),pose([5,4,0])),true);
  assert.ok(Math.abs(p.position[0]-5)<1e-8);assert.ok(Math.abs(p.position[1]-4.05)<1e-8);clear(c,p);
  const before=[...p.position];
  assert.equal(moveSolidPlayer(c,p,1,pose([5,4,0]),pose([5,15,0])),false);
  assert.deepEqual(p.position,before);clear(c,p);
});

test('carrying ignores the floor own mounted prop at its previous pose while unrelated props still block',()=>{
  const c=boxes([[-20,-4,-20],[20,0,20]]),p=player(c,[5,.05,0]);p.grounded=true;c.modelTransforms.set(1,pose());
  const wall=(id,x,supportModelIndex)=>({id,supportModelIndex,blocksPlayer:true,min:[x,0,-5],max:[x,10,5],triangles:[
    triangleCollider([[x,0,-5],[x,10,-5],[x,10,5]]),triangleCollider([[x,0,-5],[x,10,5],[x,0,5]])]});
  c.actors.push(wall('mounted',0,1));
  // Walking into the mounted prop is still blocked, as is a normal side-push
  // query. Exclusion belongs only to the floor carrying its passenger.
  assert.equal(c.trace(p.position,[-5,.05,0],p.mins,p.maxs,[0]).actorId,'mounted');
  assert.equal(moveSolidPlayer(c,p,1,pose(),pose([-10,0,0])),true);
  assert.deepEqual(p.position,[-5,.05,0]);
  p.position=[5,.05,0];c.modelTransforms.set(1,pose());
  c.actors.push(wall('stationary',-2));
  assert.equal(moveSolidPlayer(c,p,1,pose(),pose([-10,0,0])),false);
  assert.deepEqual(p.position,[5,.05,0]);assert.deepEqual(c.modelTransforms.get(1),pose());
  c.actors[1].supportModelIndex=2;
  assert.equal(moveSolidPlayer(c,p,1,pose(),pose([-10,0,0])),false,'a prop on another support must also block');
});

test('no-clip and disabled trigger brushes never push or stall the player',()=>{
  const c=boxes([[-2,0,-8],[2,10,8]]),p=player(c,[20,1,0]);p.noClip=true;
  assert.equal(moveSolidPlayer(c,p,1,pose(),pose([40,0,0])),true);assert.deepEqual(p.position,[20,1,0]);
  p.noClip=false;c.disabledModels.add(1);assert.equal(moveSolidPlayer(c,p,1,pose(),pose([40,0,0])),true);assert.deepEqual(p.position,[20,1,0]);
});

test('rejected motion segments wait before emitting their event or completion and resume without repeats',()=>{
  const events=[],clip={startTime:0,endTime:1,paths:[],events:[{time:0,label:'start'},{time:.5,label:'middle'},{time:1,label:'end'}]};let allowed=.4,complete=0;
  const p=new MotionPlayer(clip,{beforeAdvance:(from,to)=>to<=allowed,onEvent:e=>events.push(e.label),onComplete:()=>complete++});p.play();p.update(1);
  assert.equal(p.time,0);assert.deepEqual(events,['start']);assert.equal(complete,0);assert.equal(p.playing,true);
  allowed=.75;p.update(1);assert.equal(p.time,.5);assert.deepEqual(events,['start','middle']);assert.equal(complete,0);
  allowed=1;p.update(1);assert.deepEqual(events,['start','middle','end']);assert.equal(complete,1);assert.equal(p.finished,true);
});

test('a motion event teleport supersedes the displacement already accepted before that event',()=>{
  const c=boxes([[-.2,0,-8],[.2,10,8]]),p=player(c,[20,1,0]);
  const clip={startTime:0,endTime:1,paths:[{translation:{times:[0,1],values:[0,0,0,40,0,0],interpolation:0}}],events:[{time:1,label:'teleport'}]};
  const motion=new MotionPlayer(clip,{beforeAdvance:(from,to,m)=>{
    const sample=t=>({...m.sample(t),origin:[0,0,0]});return moveSolidPlayer(c,p,1,sample(from),sample(to),{sample,from,to});
  },onEvent:()=>{p.position=[100,1,0];}});motion.play();motion.update(1);assert.deepEqual(p.position,[100,1,0]);
});

const json=name=>JSON.parse(readFileSync(new URL('../'+name,import.meta.url)));
test('the original tower witch door does not strand the player inside its opening leaf',()=>{
  const level=json('data/levels/lvl04a/level.json'),motion=json('data/motions/lvl04a.json').motions.find(m=>m.name==='door_witch01');
  const c=new BspCollider(level.collision),p=new PlayerController(c,[-40,2368.05,659],[0,2,3]);
  const m=new MotionPlayer(motion),sample=t=>({...m.sample(t),origin:motion.origin});c.modelTransforms.set(2,sample(0));
  clear(c,p);
  let accepted=0;
  for(let frame=1;frame<=60;frame++) {
    const a=(frame-1)/60,b=frame/60;
    if(moveSolidPlayer(c,p,2,sample(a),sample(b),{sample,from:a,to:b}))accepted++;
    clear(c,p);
  }
  assert.equal(accepted,60);assert.ok(Math.hypot(p.position[0]+40,p.position[2]-659)>10);
});

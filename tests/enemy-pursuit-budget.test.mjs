import test from 'node:test';
import assert from 'node:assert/strict';
import {EnemyNavigation} from '../src/enemy-navigation.js';

const point=(id,x,z,links=[])=>({classname:'GrobberPathPoint','%name%':id,Origin:`${x} 0 ${z}`,...Object.fromEntries(links.map((name,i)=>[`WayPoint${i+1}`,name]))});
const makeEnemy=(nav,id='enemy')=>{const o={id,entity:{StartPoint:'a'},position:[0,0,0]};nav.initialize(o);return o;};
const hit=(b,blocked=false)=>({end:b,fraction:blocked?0:1,startSolid:false});
const blockedMap=()=>new EnemyNavigation({entities:[point('a',0,0),...Array.from({length:369},(_,i)=>point(`far${i}`,1000+i*100,0))]},{MaxConnectionDistance:0});

test('nearby detour does not sweep hundreds of distant waypoint candidates',()=>{
 const nav=blockedMap();nav.points.splice(1,0,...new EnemyNavigation({entities:[point('b',0,100,['c']),point('c',100,100,['d']),point('d',100,0)]}).points);
 nav.points[0].explicit=['b'];for(const p of nav.points)nav.names.set(p.id.toLowerCase(),p);
 const o=makeEnemy(nav);let calls=0;
 const trace=(a,b)=>{calls++;return hit(b,(a[0]<50)!==(b[0]<50)&&Math.min(a[2],b[2])<90);};
 let target;for(let frame=0;frame<5&&!o.pursuit;frame++)target=nav.pursuitTarget(o,[100,0,0],()=>true,trace,frame/60);
 assert.deepEqual(target,[0,0,100]);assert.ok(calls<40,`nearest valid candidates only: ${calls} traces`);
});

test('failed large search is spread over frames, then cached even as the player moves',()=>{
 const nav=blockedMap(),o=makeEnemy(nav);let calls=0;
 const trace=(a,b)=>{calls++;return hit(b,true);};
 let frame=0;
 for(;frame<40&&!o.pursuit;frame++){
  calls=0;nav.pursuitTarget(o,[100+Math.sin(frame)*5,0,0],()=>true,trace,frame/60);
  assert.ok(calls<=17,`one enemy cannot monopolize the frame: ${calls}`);
 }
 assert.ok(frame>1&&frame<40);assert.deepEqual(o.pursuit.route,[]);
 const cached=o.pursuit;
 for(let i=0;i<10;i++){
  calls=0;nav.pursuitTarget(o,[900+i*100,0,0],()=>true,trace,(frame+i)/60);
  assert.equal(o.pursuit,cached);assert.equal(calls,1,'moving goal does not bypass retry deadline');
 }
 const goal=[100,0,0];assert.equal(nav.pursuitTarget(o,goal,()=>true,(a,b)=>hit(b),(frame+10)/60),goal);
 assert.equal(o.pursuit,null,'newly clear direct route resumes immediately');
});

test('simultaneously alerted enemies share a bounded search budget and each completes',()=>{
 const nav=blockedMap(),enemies=Array.from({length:6},(_,i)=>makeEnemy(nav,`zombie${i}`)),completed=new Set();let calls=0;
 const trace=(a,b)=>{calls++;return hit(b,true);};
 for(let frame=0;frame<180&&completed.size<enemies.length;frame++){
  calls=0;
  for(const o of enemies){
   const before=calls;nav.pursuitTarget(o,[100,0,0],()=>true,trace,frame/60);if(o.pursuit)completed.add(o.id);
   if(frame===1)assert.ok(calls-before>1,'every waiting enemy advances on the second frame');
  }
  assert.ok(calls<=48+enemies.length,`shared trace budget exceeded: ${calls}`);
 }
 assert.equal(completed.size,enemies.length,'later enemies are not starved by earlier enemies');
});

test('blocked cached edge waits for the retry deadline and normal local collision',()=>{
 const nav=blockedMap(),o=makeEnemy(nav),route={goal:[100,0,0],route:['far0'],until:1};o.pursuit=route;let calls=0;
 for(let frame=1;frame<30;frame++){
  calls=0;nav.pursuitTarget(o,[100,0,0],()=>true,(a,b)=>{calls++;return hit(b,true);},frame/60);
  assert.equal(calls,2);assert.equal(o.pursuit,route,'blocked edge must not restart a search every frame');
 }
});

test('completed route save shape remains plain data; in-progress searches are transient',()=>{
 const nav=blockedMap(),o=makeEnemy(nav);
 nav.pursuitTarget(o,[100,0,0],()=>true,(a,b)=>hit(b,true),0);
 assert.equal(o.pursuit,undefined);assert.doesNotThrow(()=>structuredClone(o));
 const saved={goal:[100,0,0],route:['far0'],until:1};o.pursuit=structuredClone(saved);
 const restored=makeEnemy(blockedMap());restored.pursuit=structuredClone(o.pursuit);
 const newNav=blockedMap();
 assert.deepEqual(newNav.pursuitTarget(restored,[100,0,0],()=>true,(a,b)=>hit(b,b[0]===100),.1),[1000,0,0]);
 assert.deepEqual(restored.pursuit,saved);
});

test('pending routes restart after pursuit stops or either endpoint moves substantially',()=>{
 const nav=blockedMap(),o=makeEnemy(nav),trace=(a,b)=>hit(b,true);
 nav.pursuitTarget(o,[100,0,0],()=>true,trace,0);const first=nav.pursuitJobs.get(o);
 nav.pursuitTarget(o,[300,0,0],()=>true,trace,.02);const second=nav.pursuitJobs.get(o);
 assert.notEqual(second,first);assert.deepEqual(second.goal,[300,0,0]);
 o.position=[60,0,0];nav.pursuitTarget(o,[300,0,0],()=>true,trace,.04);const third=nav.pursuitJobs.get(o);
 assert.notEqual(third,second);assert.deepEqual(third.position,[60,0,0]);
 nav.pursuitTarget(o,[300,0,0],()=>true,trace,1);assert.notEqual(nav.pursuitJobs.get(o),third);
});

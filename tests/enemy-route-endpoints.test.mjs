import test from 'node:test';
import assert from 'node:assert/strict';
import {EnemyNavigation} from '../source/enemy-navigation.js';

const waypoint=(id,x)=>({classname:'GrobberPathPoint','%name%':id,Origin:`${x} 0 0`});
const blockedMap=()=>new EnemyNavigation({entities:[waypoint('a',0),...Array.from({length:369},(_,i)=>waypoint(`far${i}`,1000+i*100))]},{MaxConnectionDistance:0});
const enemy=(nav,id)=>{const object={id,entity:{StartPoint:'a'},position:[0,0,0]};nav.initialize(object);return object;};
const consume=(nav,object,now)=>{let count=0;while(nav.takeSearchCredit(object,now))count++;return count;};

test('ground pursuit and flight detours share the same bounded fair collision allowance',()=>{
 const nav=blockedMap(),ground=Array.from({length:3},(_,i)=>enemy(nav,`ground${i}`)),flight=Array.from({length:3},(_,i)=>({id:`flight${i}`}));
 for(let frame=0;frame<8;frame++){
  const now=frame/60,counts=[];let traces=0;
  for(const object of ground){
   let calls=0;nav.pursuitTarget(object,[100,0,0],()=>true,()=>{calls++;return {fraction:0,startSolid:false};},now);
   counts.push(calls-1);traces+=calls-1;
  }
  for(const object of flight){const calls=consume(nav,object,now);counts.push(calls);traces+=calls;}
  assert.equal(traces,48);assert.equal(nav.searchTraces,48);
  assert.ok(counts.every(count=>count<=16));
  if(frame>0)assert.ok(counts.every(count=>count>0),'all waiting ground and flight enemies make progress');
 }
 for(const object of [...ground,...flight])assert.doesNotThrow(()=>structuredClone(object));
 assert.equal(nav.pursuitJobs.size,ground.length,'flight iterators remain owned by their caller');
});

test('finishing a search cannot reset an enemy allowance within the same update',()=>{
 const nav=blockedMap(),object={id:'flight'};
 assert.equal(consume(nav,object,1),16);nav.finishSearch(object);
 assert.equal(nav.searchRequests.has(object),false);
 assert.equal(consume(nav,object,1),0,'starting another search must not gain another 16 checks');
 assert.equal(consume(nav,object,2),16);
});

test('inactive and finished searches stop reserving the next update allowance',()=>{
 const nav=blockedMap(),active=[{id:'one'},{id:'two'},{id:'three'}],ended={id:'ended'},stale={id:'stale'},disabled={id:'disabled'},dead={id:'dead'};
 for(const object of [...active,ended,stale,disabled,dead])consume(nav,object,0);
 nav.finishSearch(ended);disabled.enabled=false;dead.health=0;
 // Refresh the active waiters while the others lapse.
 for(const object of active)consume(nav,object,.2);
 const counts=active.map(object=>consume(nav,object,.3));
 assert.deepEqual(counts,[16,16,16]);
 assert.equal(nav.searchRequests.size,3);
});

test('explicit spider return destination cannot be replaced by a nearer arbitrary waypoint',()=>{
 const wp=(id,x,z,links=[])=>({classname:'GrobberPathPoint','%name%':id,Origin:`${x} 0 ${z}`,...Object.fromEntries(links.map((v,i)=>[`WayPoint${i+1}`,v]))});
 const nav=new EnemyNavigation({entities:[wp('a',0,0,['decoy','bend']),wp('decoy',100,0),wp('bend',0,100,['home']),wp('home',100,100)]},{MaxConnectionDistance:0});nav.build();
 const o=enemy(nav,'spider');
 const route=destination=>{const search=nav.pursuitChecks(o,[0,0,0],[100,0,0],destination);let result=search.next();while(!result.done)result=search.next(true);return result.value;};
 assert.deepEqual(route(null),['decoy']);assert.deepEqual(route('home'),['bend','home']);
});

test('switching to an explicit return endpoint retires a cached chase route without resetting search credits',()=>{
 const nav=blockedMap(),o=enemy(nav,'spider');o.pursuit={goal:[100,0,0],route:['far0'],until:2};
 consume(nav,o,1);
 nav.pursuitTarget(o,[100,0,0],()=>true,()=>({fraction:0,startSolid:false}),1,{destinationId:'a'});
 assert.equal(o.pursuit,null);assert.equal(nav.pursuitJobs.get(o).destination,'a');assert.equal(nav.searchTraces,16);
 assert.doesNotThrow(()=>structuredClone(o));
});

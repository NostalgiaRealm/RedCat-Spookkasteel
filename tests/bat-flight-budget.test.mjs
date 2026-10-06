import test from 'node:test';
import assert from 'node:assert/strict';
import {EnemyNavigation} from '../src/enemy-navigation.js';
import {batFlightTarget} from '../src/enemy-flight.js';

const waypoint=(id,position,subsystem=0)=>({classname:'GrobberPathPoint','%name%':id,Origin:position.join(' '),SubSystemId:String(subsystem)});
const largeMap=()=>new EnemyNavigation({entities:[waypoint('a',[0,0,0]),...Array.from({length:369},(_,i)=>waypoint(`detour${i}`,[20+i*.5,20,50]))]},{MaxConnectionDistance:0});
const enemy=(nav,id,enemyType='bat')=>{const object={id,enemyType,entity:{StartPoint:'a'},position:[0,0,0],enabled:true,health:10};nav.initialize(object);return object;};
const hit=(end,blocked=false)=>({end:[...end],fraction:blocked?0:1,startSolid:false});
const gameFor=(navigation,objects)=>({navigation,objects,time:0});
const goal=[600,0,0];

// All candidates are within the flight detour radius, so the test exercises
// deferred body sweeps rather than being satisfied by distance rejection.
test('large blocked bat searches span updates and keep their negative cache as the goal moves',()=>{
 const nav=largeMap(),bat=enemy(nav,'bat'),game=gameFor(nav,[bat]);let calls=0,frame=0;
 const trace=(a,b)=>{calls++;return hit(b,true);};
 for(;frame<40&&!bat.flightDetour;frame++){
  game.time=frame/60;calls=0;batFlightTarget(game,bat,goal,trace);
  assert.ok(calls<=17,`at most one direct probe and 16 search sweeps: ${calls}`);
 }
 assert.ok(frame>1&&frame<40,'the blocked search must eventually finish');
 assert.equal(bat.flightDetour.target,null);
 assert.equal(nav.searchRequests.has(bat),false,'completed failure releases future reservations');
 const cached=bat.flightDetour;
 for(let i=0;i<10;i++){
  game.time=(frame+i)/60;calls=0;const movingGoal=[900+i*100,0,0];
  assert.equal(batFlightTarget(game,bat,movingGoal,trace),movingGoal);
  assert.equal(bat.flightDetour,cached);assert.equal(calls,1,'movement cannot bypass the failed-search deadline');
 }
 game.time=cached.until+.001;calls=0;batFlightTarget(game,bat,goal,trace);
 assert.equal(calls,17,'an elapsed deadline permits the next bounded search');
});

test('actual bat detours and grounded pursuit share 48 sweeps fairly and all finish',()=>{
 const nav=largeMap(),ground=Array.from({length:3},(_,i)=>enemy(nav,`ground${i}`,'zombie'));
 const bats=Array.from({length:3},(_,i)=>enemy(nav,`bat${i}`)),game=gameFor(nav,[...ground,...bats]),completed=new Set();
 for(let frame=0;frame<100&&completed.size<6;frame++){
  game.time=frame/60;let calls=0;
  for(const object of game.objects){
   const before=calls,trace=(a,b)=>{calls++;return hit(b,true);};
   if(object.enemyType==='bat')batFlightTarget(game,object,goal,trace);
   else nav.pursuitTarget(object,goal,()=>true,trace,game.time);
   const used=calls-before;
   assert.ok(used<=17,`${object.id} exceeded its own 16 search sweeps`);
   if(frame===1)assert.ok(used>1,`${object.id} was starved by earlier callers`);
   if(object.flightDetour||object.pursuit)completed.add(object.id);
  }
  assert.ok(calls<=48+game.objects.length,`ground and flight exceeded the shared budget: ${calls}`);
 }
 assert.equal(completed.size,6,'both kinds of search must finish despite fixed update order');
});

test('a newly clear direct flight resumes immediately during pending work or a cached failure',()=>{
 for(const pending of [true,false]){
  const nav=largeMap(),bat=enemy(nav,`bat-${pending}`),game=gameFor(nav,[bat]);
  if(pending){
   batFlightTarget(game,bat,goal,(a,b)=>hit(b,true));
   assert.equal(nav.searchRequests.has(bat),true);assert.equal(bat.flightDetour,null);
  }else bat.flightDetour={target:null,until:100};
  game.time=.01;let calls=0;
  assert.equal(batFlightTarget(game,bat,goal,(a,b)=>{calls++;return hit(b);}),goal);
  assert.equal(calls,1);assert.equal(bat.flightDetour,null);
  assert.equal(nav.searchRequests.has(bat),false,'direct recovery cancels pending reservations');
 }
});

test('score ordered clearance finds the exhaustive optimum without sweeping every candidate',()=>{
 const target=[300,0,0],entities=[waypoint('a',[0,0,0]),
  ...Array.from({length:80},(_,i)=>waypoint(`decoy${i}`,[0,0,150+i])),
  waypoint('crowded',[250,0,0]),waypoint('other-subsystem',[299,0,0],1),
  waypoint('blocked-best',[200,0,0]),waypoint('best',[150,50,0])];
 const nav=new EnemyNavigation({entities},{MaxConnectionDistance:0}),bat=enemy(nav,'bat');
 const neighbour=enemy(nav,'neighbour');neighbour.position=[250,0,0];
 const disabled=enemy(nav,'disabled');disabled.position=[150,50,0];disabled.enabled=false;
 const dead=enemy(nav,'dead');dead.position=[150,50,0];dead.health=0;
 const game=gameFor(nav,[bat,neighbour,disabled,dead]),length=(a,b)=>Math.hypot(...a.map((v,i)=>v-b[i]));
 const blocked=position=>position[0]===target[0]||position[0]===200;
 // Reference the former exhaustive behavior: clear every candidate first,
 // then rank all passing positions, including the active-bat crowd penalty.
 let exhaustiveSweeps=0;
 const exhaustive=nav.points.filter(p=>p.subsystem===0&&length(p.position,bat.position)>10&&length(p.position,bat.position)<450)
  .filter(p=>{exhaustiveSweeps++;return !blocked(p.position);})
  .map(p=>({p,cost:length(p.position,target)+.35*length(p.position,bat.position)+(length(p.position,neighbour.position)<40?150:0)}))
  .sort((a,b)=>a.cost-b.cost)[0].p;
 const checked=[];
 const chosen=batFlightTarget(game,bat,target,(a,b)=>{checked.push([...b]);return hit(b,blocked(b));});
 assert.equal(exhaustive.id,'best');assert.deepEqual(chosen,exhaustive.position);
 assert.equal(bat.flightDetour.target,exhaustive.id);
 assert.equal(checked.length,3,'only the direct target, blocked best score and first clear optimum need sweeps');
 assert.ok(checked.length<exhaustiveSweeps/10);
 assert.equal(nav.searchRequests.has(bat),false);
});

test('unfinished flight searches are transient and restored detours retain plain save data',()=>{
 const nav=largeMap(),bat=enemy(nav,'bat'),game=gameFor(nav,[bat]),firstChecks=[];
 batFlightTarget(game,bat,goal,(a,b)=>{firstChecks.push([...b]);return hit(b,true);});
 const saved=structuredClone(bat);
 assert.equal(saved.flightDetour,null);
 assert.deepEqual(Object.keys(saved).sort(),['enabled','enemyType','entity','flightDetour','health','id','patrol','position','yaw']);
 assert.deepEqual(JSON.parse(JSON.stringify(bat)),saved,'the enemy contains no generator, candidate list or navigation reference');
 const restored=structuredClone(saved),restoredNav=largeMap(),restoredGame=gameFor(restoredNav,[restored]),restoredChecks=[];
 batFlightTarget(restoredGame,restored,goal,(a,b)=>{restoredChecks.push([...b]);return hit(b,true);});
 assert.deepEqual(restoredChecks,firstChecks,'a restored enemy starts fresh rather than inheriting hidden progress');
 game.time=.02;
 const selected=batFlightTarget(game,bat,goal,(a,b)=>hit(b,b[0]===goal[0]));
 const completed=structuredClone(bat);
 assert.deepEqual(Object.keys(completed.flightDetour).sort(),['target','until']);
 const loadedNav=largeMap(),loadedGame=gameFor(loadedNav,[completed]);loadedGame.time=.03;
 assert.deepEqual(batFlightTarget(loadedGame,completed,goal,()=>{throw new Error('saved active detour should continue');}),selected);
});

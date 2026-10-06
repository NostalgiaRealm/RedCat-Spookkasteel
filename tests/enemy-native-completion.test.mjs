import test from 'node:test';
import assert from 'node:assert/strict';
import {Gameplay} from '../src/gameplay.js';
import {EnemyNavigation} from '../src/enemy-navigation.js';
import {enemySalvoSize,chooseTouchPursuit} from '../src/enemy-combat-native.js';
import {updateEnemyAmbush} from '../src/enemy-ambush.js';
const wp=(id,x,z,links=[])=>({classname:'GrobberPathPoint','%name%':id,Origin:`${x} 0 ${z}`,SubSystemId:'0',...Object.fromEntries(links.map((p,i)=>[`WayPoint${i+1}`,p]))});
const level=entities=>({id:'lvl00a',spawn:{position:[5000,0,0],orientation:0},entities});
const enemy=(Type,extra={})=>({classname:'MovingEnemy','%name%':'test',Type:String(Type),StartPoint:'',StartOrientation:'6',Origin:'0 0 0',...extra});
const tick=(g,t,p,options={})=>{for(let elapsed=0;elapsed<t-1e-8;elapsed+=.01)g.update(Math.min(.01,t-elapsed),p,options);};
const clearTrace=(a,b)=>({end:[...b],fraction:1,startSolid:false,normal:[0,1,0]});

test('salvo property varies between enemies but remains fixed through salvos and saves',()=>{
 const sizes=new Set();
 for(let i=0;i<80;i++){
  const l=level([enemy(7,{'%name%':`brutus${i}`})]),g=new Gameplay(l),o=g.objects[0],size=enemySalvoSize(o);
  sizes.add(size);assert.ok(size>=1&&size<3);
  const rng=o.aiRandomState;assert.equal(enemySalvoSize(o),size);assert.equal(o.aiRandomState,rng);
  const restored=new Gameplay(l,{save:g.snapshot()});assert.equal(enemySalvoSize(restored.objects[0]),size);assert.equal(restored.objects[0].aiRandomState,rng);
 }
 assert.deepEqual([...sizes].sort(),[1,2]);
});

test('native route uses minimum hops instead of shortest metric distance and respects blockers',()=>{
 const nav=new EnemyNavigation(level([wp('a',0,0,['long','b']),wp('long',0,300,['end']),wp('b',10,0,['c']),wp('c',20,0,['end']),wp('end',30,0)]),{MaxConnectionDistance:0});nav.build();
 assert.deepEqual(nav.route(nav.find('a'),nav.find('end')),['long','end']);
 assert.deepEqual(nav.route(nav.find('a'),nav.find('end'),{excluded:new Set(['long'])}),['b','c','end']);
 assert.equal(nav.route(nav.find('a'),nav.find('end'),{excluded:new Set(['long','b'])}),null);
});

test('pursuit routes around a wall on authored points and resumes directly when clear',()=>{
 const nav=new EnemyNavigation(level([wp('a',0,0,['b']),wp('b',0,100,['c']),wp('c',100,100,['d']),wp('d',100,0)]),{MaxConnectionDistance:0});
 const o={id:'test',entity:{StartPoint:'a'},stats:{},position:[0,0,0]};nav.initialize(o);
 const trace=(a,b)=>{const blocked=(a[0]<50)!==(b[0]<50)&&Math.min(a[2],b[2])<90;return {...clearTrace(a,b),fraction:blocked?.3:1};};
 assert.deepEqual(nav.pursuitTarget(o,[100,0,0],()=>true,trace,0),[0,0,100]);
 o.position=[0,0,100];assert.deepEqual(nav.pursuitTarget(o,[100,0,0],()=>true,trace,.1),[100,0,100]);
 o.position=[100,0,100];assert.deepEqual(nav.pursuitTarget(o,[100,0,0],()=>true,trace,.2),[100,0,0]);assert.equal(o.pursuit,null);
});

test('touch enemy chooses MoveCloser as well as both timed circling directions',()=>{
 const modes=new Set();for(let i=0;i<120;i++){
  const result=chooseTouchPursuit({id:`bat${i}`});modes.add(`${result.mode}:${result.mode==='circle'?result.direction:0}`);
  assert.equal(result.wait,0);assert.equal(result.remaining,result.mode==='closer'?0:2);
 }
 assert.deepEqual([...modes].sort(),['circle:-1','circle:1','closer:0']);
});

test('guardian approaches instead of causing distant melee damage, then attacks on contact',()=>{
 const g=new Gameplay(level([enemy(10)])),o=g.objects[0];
 o.collisionMins=[-12,0,-12];o.collisionMaxs=[12,45,12];
 tick(g,.5,[0,0,140]);assert.equal(g.state.health,10);assert.ok(o.position[2]>0);assert.equal(o.pendingAttack,null);
 tick(g,2,[0,0,140]);assert.ok(g.state.health<10);assert.ok(o.position[2]<=117.01);assert.ok(o.attackTimer>0);
 const restored=new Gameplay(g.level,{save:g.snapshot()});assert.equal(restored.objects[0].attackTimer,o.attackTimer);
});

test('knight can hit during the end of its active strike window, only once',()=>{
 const g=new Gameplay(level([enemy(2,{classname:'StandingEnemy'})])),o=g.objects[0];o.animationDurations={attack:1};
 g.update(.01,[0,0,60]);assert.equal(o.pendingAttack.until,.71);
 tick(g,.65,[0,0,120]);assert.equal(g.state.health,10);assert.ok(o.pendingAttack);
 g.update(.02,[0,0,60]);assert.equal(g.state.health,7);assert.equal(o.pendingAttack,null);
 g.hitCooldown=0;g.update(.01,[0,0,60]);assert.equal(g.state.health,7);
});

test('spider returns to its own hanging anchor after losing the target and restores mid ascent',()=>{
 const g=new Gameplay(level([enemy(1)])),o=g.objects[0];
 o.ambush={version:1,type:'spider',phase:'awake',elapsed:0,lower:[0,0,0],upper:[0,100,0],anchor:[0,124,0]};
 o.position=[30,0,0];o.lastSeenAt=0;o.alerted=true;g.time=3;
 const step=()=>{g.time+=.1;return updateEnemyAmbush(g,o,.1,[5000,0,0],()=>false,null);};
 for(let i=0;i<7;i++)step();assert.equal(o.ambush.phase,'ascending');assert.ok(o.position[1]>0);
 const restored=new Gameplay(g.level,{save:g.snapshot()});assert.deepEqual(restored.objects[0].ambush,o.ambush);
 for(let i=0;i<10;i++)step();assert.equal(o.ambush.phase,'dormant');assert.deepEqual(o.position,[0,100,0]);
});

test('failed pursuit search is cached instead of flooding blocked BSP routes every frame',()=>{
 const nav=new EnemyNavigation(level([wp('a',0,0),wp('b',100,0)]),{MaxConnectionDistance:0});
 const o={id:'blocked',entity:{StartPoint:'a'},stats:{},position:[0,0,0]};nav.initialize(o);let calls=0;
 const trace=(a,b)=>{calls++;return {...clearTrace(a,b),fraction:.1};};
 nav.pursuitTarget(o,[100,0,0],()=>true,trace,0);const searched=calls;assert.ok(searched>1);
 for(let i=1;i<30;i++)nav.pursuitTarget(o,[100,0,0],()=>true,trace,i/60);
 assert.equal(calls,searched+29,'cached failure performs only the direct-obstacle probe');
 nav.pursuitTarget(o,[100,0,0],()=>true,trace,.6);assert.ok(calls>searched+30,'elapsed retry checks for a newly opened route');
});

test('knight strike-window end survives save and shifts with a script freeze',()=>{
 const g=new Gameplay(level([enemy(2,{classname:'StandingEnemy'})])),o=g.objects[0];o.animationDurations={attack:1};
 g.update(.01,[0,0,60]);const initial={...o.pendingAttack};
 g.scripts={cutscene:true};g.update(.1,[0,0,60]);
 assert.ok(Math.abs(o.pendingAttack.until-initial.until-.1)<1e-8);
 g.scripts=null;const restored=new Gameplay(g.level,{save:g.snapshot()});assert.deepEqual(restored.objects[0].pendingAttack,o.pendingAttack);
});

test('authored patrol steps never launch pursuit searches; actual chasing still can route',()=>{
 const g=new Gameplay(level([wp('a',0,0,['b']),wp('b',100,0),enemy(4,{StartPoint:'a'})])),o=g.objects.find(o=>o.kind==='enemy');
 let searches=0;const original=g.navigation.pursuitTarget.bind(g.navigation);
 g.navigation.pursuitTarget=(...args)=>{searches++;return original(...args);};
 tick(g,.5,[5000,0,0],{traceEnemy:clearTrace});
 assert.equal(searches,0,'a known graph edge is already a route');assert.ok(o.position[0]>0);
 o.alerted=true;o.lastSeenAt=g.time;o.lastSeenPosition=[350,0,0];
 g.update(.02,[5000,0,0],{traceEnemy:clearTrace,lineOfSight:()=>false});
 assert.equal(searches,1,'remembered player position still uses pursuit navigation');
});

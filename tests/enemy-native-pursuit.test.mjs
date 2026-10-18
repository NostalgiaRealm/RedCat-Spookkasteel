import test from 'node:test';
import assert from 'node:assert/strict';
import {EnemyNavigation} from '../src/enemy-navigation.js';

const waypoint=(id,position,links=[])=>({classname:'GrobberPathPoint','%name%':id,Origin:position.join(' '),...Object.fromEntries(links.map((name,i)=>[`WayPoint${i+1}`,name]))});
const fixture=()=>new EnemyNavigation({entities:[
  waypoint('a',[0,0,0],['near','other','far','equal']),waypoint('near',[80,0,0]),
  waypoint('other',[30,0,60]),waypoint('far',[-20,0,0]),waypoint('equal',[100,0,100]),
  waypoint('unlinked-best',[100,0,0])
]},{MaxConnectionDistance:0});
const enemy=(nav,id='enemy',extra={})=>{const object={id,entity:{StartPoint:'a'},position:[0,0,0],stats:{},...extra};nav.initialize(object);return object;};

test('native shooter approach randomly selects strictly closer neighbors, never arbitrary endpoints',()=>{
  const nav=fixture(),chosen=new Set();let searches=0;
  nav.pursuitChecks=()=>{searches++;assert.fail('an authored approach edge must not launch endpoint search');};
  for(let i=0;i<100;i++) {
    const object=enemy(nav,'shooter'+i),point=nav.approachTarget(object,[100,0,0],()=>true);
    assert.ok(['near','other'].includes(point.id));chosen.add(point.id);
    object.enabled=false;
  }
  assert.deepEqual([...chosen].sort(),['near','other']);assert.equal(searches,0);assert.equal(nav.searchTraces,0);
});

test('native closer comparison uses full 3D distance, strict inequality, and current player clearance',()=>{
  const nav=new EnemyNavigation({entities:[waypoint('a',[0,0,0],['high','equal','valid']),waypoint('high',[100,101,0]),waypoint('equal',[100,100,0]),waypoint('valid',[50,0,0])]}, {MaxConnectionDistance:0});
  const object=enemy(nav);object.stats.MinPlayerDistance=20;
  // The ranking target can differ from the current player position; the
  // native 0x599e10 clearance gate obtains RedCat independently.
  assert.equal(nav.approachTarget(object,[100,0,0],()=>true,{player:[50,0,0]}),null);
  assert.equal(object.patrol.target,null);
  assert.equal(nav.approachTarget(object,[100,0,0],()=>true,{player:[70,0,0]}).id,'valid','exact minimum distance is allowed');
});

test('busy and unlinked-start nodes are not replaced with a forbidden or arbitrary destination',()=>{
  const nav=fixture(),object=enemy(nav),blocker=enemy(nav,'blocker');
  blocker.patrol.current='near';blocker.patrol.target='near';nav.syncReservations([object,blocker],0,[100,0,0]);
  assert.equal(nav.approachTarget(object,[100,0,0],()=>true).id,'other');
  object.position=[80,0,0];object.patrol.current='near';object.patrol.target=null;object.patrol.leftStart=true;object.entity.UnlinkStartPoint='1';
  assert.equal(nav.approachTarget(object,[-100,0,0],()=>true),null,'the start node cannot be re-entered after unlink');
  object.entity.UnlinkStartPoint='0';assert.equal(nav.approachTarget(object,[-100,0,0],()=>true).id,'a');
});

test('changing the target actor position retains an unfinished native cursor edge',()=>{
  const nav=fixture(),object=enemy(nav);object.patrol.current='a';object.patrol.target='near';object.position=[40,0,0];
  assert.equal(nav.approachTarget(object,[-100,0,0],()=>true).id,'near','mode changes do not reverse mid-edge');
  assert.deepEqual(object.position,[40,0,0]);
  object.position=[80,0,0];
  assert.equal(nav.approachTarget(object,[-100,0,0],()=>true).id,'a');
  assert.equal(object.patrol.current,'near');assert.equal(object.patrol.previous,'a');
});

test('off-node bodies safely reacquire their cursor before selecting another native edge',()=>{
  const nav=fixture(),object=enemy(nav);object.patrol.current='a';object.patrol.target=null;object.position=[30,0,20];
  assert.equal(nav.approachTarget(object,[100,0,0],()=>true).id,'a');assert.equal(object.patrol.reacquiring,true);
  assert.deepEqual(object.position,[30,0,20],'reacquisition must not teleport a displaced body');
  object.position=[0,0,0];assert.ok(['near','other'].includes(nav.approachTarget(object,[100,0,0],()=>true).id));
  assert.equal(object.patrol.reacquiring,false);
});

test('native graph approach retires old arbitrary jobs without refunding current search credits',()=>{
  const nav=fixture(),object=enemy(nav);object.pursuit={goal:[100,0,0],route:['far'],until:10};
  nav.pursuitJobs.set(object,{lastRequestedAt:0});
  let spent=0;while(nav.takeSearchCredit(object,0))spent++;
  assert.equal(spent,16);nav.approachTarget(object,[100,0,0],()=>true);
  assert.equal(object.pursuit,null);assert.equal(nav.pursuitJobs.has(object),false);assert.equal(nav.searchRequests.has(object),false);
  assert.equal(nav.takeSearchCredit(object,0),false);assert.equal(nav.searchTraces,16);
});

test('native no-neighbor and absent-path results are distinct for the gameplay state caller',()=>{
  const nav=fixture(),object=enemy(nav);
  assert.equal(nav.approachTarget(object,[0,0,0],()=>true),null,'no closer node reports native no-destination');
  object.patrol=null;assert.equal(nav.approachTarget(object,[0,0,0],()=>true),undefined,'missing port path can retain its separate fallback');
});

test('native MoveFurther chooses the strictly farthest valid adjacent slot without consuming RNG',()=>{
  const nav=new EnemyNavigation({entities:[
    waypoint('a',[10,0,0],['near','first-far','equal-far','closer']),waypoint('near',[20,0,0]),
    waypoint('first-far',[0,0,40]),waypoint('equal-far',[40,0,0]),waypoint('closer',[1,0,0]),
    waypoint('unlinked-best',[1000,0,0])
  ]},{MaxConnectionDistance:0});
  const object=enemy(nav);object.position=[10,0,0];object.aiRandomState=12345;
  const selected=nav.retreatTarget(object,[0,0,0],()=>true);
  assert.equal(selected.id,'first-far');assert.equal(object.aiRandomState,12345);
  assert.equal(nav.searchTraces,0,'native retreat does not run arbitrary endpoint search');
});

test('native retreat retains committed edges then reevaluates current-player gates at the next node',()=>{
  const nav=new EnemyNavigation({entities:[waypoint('a',[10,0,0],['b']),waypoint('b',[30,0,0],['c']),waypoint('c',[60,0,0])]}, {MaxConnectionDistance:0});
  const object=enemy(nav);object.position=[20,0,0];object.patrol.current='a';object.patrol.target='b';object.stats.MinPlayerDistance=20;
  assert.equal(nav.retreatTarget(object,[100,0,0],()=>true,{player:[60,0,0]}).id,'b','target reversal preserves an unfinished cursor edge');
  object.position=[30,0,0];
  assert.equal(nav.retreatTarget(object,[0,0,0],()=>true,{player:[60,0,0]}),null,'the farther destination is blocked by actual-player clearance');
  assert.equal(nav.retreatTarget(object,[0,0,0],()=>true,{player:[80,0,0]}).id,'c');
});

test('native retreat rejects equal-distance neighbors and allows bounded off-node reacquisition',()=>{
  const nav=new EnemyNavigation({entities:[waypoint('a',[10,0,0],['equal']),waypoint('equal',[0,0,10])]}, {MaxConnectionDistance:0});
  const object=enemy(nav);object.position=[10,0,0];
  assert.equal(nav.retreatTarget(object,[0,0,0],()=>true),null);
  object.position=[15,0,5];
  assert.equal(nav.retreatTarget(object,[0,0,0],()=>true).id,'a');assert.equal(object.patrol.reacquiring,true);
  assert.deepEqual(object.position,[15,0,5]);
});

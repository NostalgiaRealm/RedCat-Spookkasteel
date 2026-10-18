import test from 'node:test';
import assert from 'node:assert/strict';
import {Gameplay} from '../src/gameplay.js';
import {EnemyNavigation} from '../src/enemy-navigation.js';

const waypoint=(id,x,links=[])=>({classname:'GrobberPathPoint','%name%':id,Origin:`${x} 0 0`,...Object.fromEntries(links.map((value,index)=>[`WayPoint${index+1}`,value]))});
const points=[waypoint('a',0,['b']),waypoint('b',100),waypoint('c',200,['b'])];
const actor=(nav,id,type,start='a')=>{
  const object={id,enemyType:type,entity:{StartPoint:start},stats:{},position:[...nav.find(start).position],enabled:true,health:100,alerted:true,waypointActive:false};
  nav.initialize(object);return object;
};

test('ordinary moving cursors retain current and destination claims through shoot, wait, and selected hurt',()=>{
  for(const type of ['spider','bat','ghost','zombie','frog','skeleton','guardian']){
    const nav=new EnemyNavigation({entities:points},{MaxConnectionDistance:0});
    const object=actor(nav,type,type);object.patrol.current='a';object.patrol.target='b';
    for(const phase of ['shoot','betweenWait','wait','retreat','hurt']){
      object.animationState=phase==='hurt'?'hurt':phase==='shoot'?'attack':'idle';
      object.nativeShooter=phase==='hurt'?null:{version:1,phase,remaining:0,waitUntil:null};
      object.batContact=null;object.waypointActive=false;
      nav.syncReservations([object],phase,[1000,0,0]);
      assert.equal(nav.waypointBusy('b'),true,`${type} ${phase} retains its cursor destination`);
      assert.equal(nav.waypointBusy('b',object),false);
    }
    object.patrol.target=null;nav.syncReservation(object);assert.equal(nav.waypointBusy('a'),true);
    assert.equal(nav.waypointBusy('b'),false,'changing the cursor releases its old destination');
    object.health=0;assert.equal(nav.waypointBusy('a'),false,'the existing dead-actor portability rule stays intact');
    object.health=100;object.enabled=false;assert.equal(nav.waypointBusy('a'),false);
  }
});

test('boss and unknown direct-pursuit policies keep their existing reservation gate',()=>{
  for(const type of ['brutusm','brutusb','witch','maxd','maxj','unknown']){
    const nav=new EnemyNavigation({entities:points}),object=actor(nav,type,type);
    object.patrol.target='b';nav.syncReservations([object],0,[1000,0,0]);assert.equal(nav.waypointBusy('b'),false,type);
    object.patrol.relocating=true;nav.syncReservation(object);assert.equal(nav.waypointBusy('b'),true);
    object.patrol.relocating=false;object.waypointActive=true;nav.syncReservation(object);assert.equal(nav.waypointBusy('b'),true);
    object.waypointActive=false;nav.syncReservation(object);assert.equal(nav.waypointBusy('b'),false);
  }
});

function gameplay() {
  const level={id:'cursor-reservations',entities:[...points,
    {classname:'MovingEnemy','%name%':'challenger',Type:'5',Origin:'0 0 0',StartPoint:'a',StartOrientation:'3'},
    {classname:'MovingEnemy','%name%':'skeleton',Type:'6',Origin:'100 0 0',StartPoint:'b',StartOrientation:'6'}]};
  const game=new Gameplay(level),skeleton=game.objects.find(value=>value.id==='skeleton'),challenger=game.objects.find(value=>value.id==='challenger');
  skeleton.ambush.phase='awake';skeleton.animationState='idle';skeleton.alerted=true;skeleton.health=100;
  for(const object of [challenger,skeleton]){
    object.stats={...object.stats,AttackRange:30,MinPlayerDistance:0,SenseRange:1000,VisualRange:1000};object.animationDurations={attack:1,hurt:1};
  }
  return {game,skeleton,challenger};
}

test('initial skeleton shoot reserves its authored cursor before an earlier enemy chooses a destination',()=>{
  const {game,skeleton,challenger}=gameplay();
  assert.equal(skeleton.nativeShooter,undefined);assert.equal(skeleton.waypointActive,undefined);
  game.update(.01,[100,0,50]);
  assert.equal(skeleton.nativeShooter.phase,'shoot');assert.equal(skeleton.patrol.target,'b');
  assert.equal(game.navigation.waypointBusy('b',challenger),true);
  assert.equal(challenger.patrol.target,null,'earlier object update cannot claim the skeleton cursor');
});

test('actual selected hit clears the skeleton attack child without relinquishing its cursor claim',()=>{
  const {game,skeleton,challenger}=gameplay();game.update(.01,[100,0,50]);
  skeleton.aiRandomState=1;game.hurtEnemy(skeleton,1);
  assert.equal(skeleton.animationState,'hurt');assert.equal(skeleton.nativeShooter,null);assert.equal(skeleton.pendingAttack,null);
  game.navigation.syncReservation(skeleton);
  assert.equal(game.navigation.waypointBusy('b',challenger),true);
  assert.equal(game.navigation.choose(challenger),null);
});

test('fresh and same-game restore rebuild cursor claims immediately before any update or explicit synchronization',()=>{
  for(const phase of ['shoot','wait','hurt'])for(const fresh of [true,false]){
    const {game,skeleton}=gameplay();game.update(.01,[100,0,50]);
    if(phase==='wait')Object.assign(skeleton,{animationState:'idle',pendingAttack:null,nativeShooter:{version:1,phase:'wait',remaining:0,waitUntil:game.time+1}});
    if(phase==='hurt'){skeleton.aiRandomState=1;game.hurtEnemy(skeleton,1);}
    const saved=JSON.parse(JSON.stringify(game.snapshot()));
    let restored;
    if(fresh)restored=new Gameplay(game.level,{save:saved});
    else{
      // Install a different same-frame claim before restoring, so retaining
      // the old index cannot accidentally satisfy the immediate checks.
      skeleton.patrol.target='c';game.navigation.syncReservation(skeleton);
      assert.equal(game.navigation.waypointBusy('b'),false);assert.equal(game.navigation.waypointBusy('c'),true);
      assert.equal(game.restore(saved),true);restored=game;
    }
    const blocker=restored.objects.find(value=>value.id==='skeleton'),challenger=restored.objects.find(value=>value.id==='challenger');
    assert.equal(blocker.waypointActive,false);assert.equal(blocker.alerted,true);assert.equal(blocker.patrol.target,'b');
    assert.equal(restored.navigation.waypointBusy('b',challenger),true,`${fresh?'fresh':'same-game'} ${phase}`);
    assert.equal(restored.navigation.waypointBusy('c'),false,'a pre-restore claim cannot survive the rebuild');
    restored.navigation.build();
    assert.equal(restored.navigation.choose(challenger),null,'selection order after loading cannot steal an inactive child cursor');
  }
});

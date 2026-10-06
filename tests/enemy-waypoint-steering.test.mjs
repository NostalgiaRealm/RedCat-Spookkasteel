import test from 'node:test';
import assert from 'node:assert/strict';
import {EnemyNavigation} from '../src/enemy-navigation.js';
import {Gameplay} from '../src/gameplay.js';
import {GAMEPLAY_SETTINGS} from '../src/gameplay-settings.js';
import {selectTouchWaypoint,touchWaypointTarget} from '../src/enemy-waypoint-steering.js';

const wp=(id,position,links=[])=>({classname:'GrobberPathPoint','%name%':id,Origin:position.join(' '),SubSystemId:'0',...Object.fromEntries(links.map((p,i)=>['WayPoint'+(i+1),p]))});
const mode=(name='closer',direction=-1)=>({version:2,started:false,wait:0,remaining:name==='circle'?2:0,mode:name,direction});
const clear=(a,b)=>({fraction:1,end:[...b],normal:[0,1,0],startSolid:false});
const ring=[wp('a',[100,0,0],['b','d']),wp('b',[0,0,80],['c']),wp('c',[-100,0,0],['d']),wp('d',[0,0,-80])];
const fixture=(points=ring,type=2)=>{
  const level={id:'lvl01a',spawn:{position:[0,0,0]},entities:[...points,{classname:'MovingEnemy','%name%':'touch',Type:String(type),SubType:'1',StartPoint:points[0]['%name%'],Origin:points[0].Origin}]};
  const settings={...GAMEPLAY_SETTINGS,game:{...GAMEPLAY_SETTINGS.game,WayPointSystem:{MaxConnectionDistance:0}}};
  const game=new Gameplay(level,{settings}),object=game.find('touch')[0];object.batContact=mode();object.yaw=-Math.PI/2;
  return {game,object};
};
const selector=(points,position)=>{
  const nav=new EnemyNavigation({entities:points},{MaxConnectionDistance:0});nav.build();
  return {nav,object:{id:'touch',entity:{},stats:{},position,patrol:{start:points[0]['%name%'],current:points[0]['%name%']}}};
};

test('native clockwise/anticlockwise select nearest linked point on the proper angular side',()=>{
  const {nav,object}=selector([wp('a',[100,0,0],['cwFar','ccw','cwNear','tie']),wp('cwFar',[0,0,90]),wp('ccw',[0,0,-40]),wp('cwNear',[0,0,50]),wp('tie',[0,0,50])]);
  assert.equal(selectTouchWaypoint(nav,object,[0,0,0],mode('circle',-1)).id,'cwNear');
  assert.equal(selectTouchWaypoint(nav,object,[0,0,0],mode('circle',1)).id,'ccw');
  assert.equal(selectTouchWaypoint(nav,object,[0,0,0],mode('circle',-1),id=>id==='cwNear').id,'tie');
  object.stats.MinPlayerDistance=60;
  assert.equal(selectTouchWaypoint(nav,object,[0,0,0],mode('circle',-1)).id,'cwFar');
});

test('native bearing wraps across +/-pi and closer samples every strictly closer neighbor in 3D',()=>{
  const seam=selector([wp('a',[-100,0,1],['b']),wp('b',[-50,0,-1])]);
  assert.equal(selectTouchWaypoint(seam.nav,seam.object,[0,0,0],mode('circle',-1)).id,'b');
  assert.equal(selectTouchWaypoint(seam.nav,seam.object,[0,0,0],mode('circle',1)),null);
  const {nav,object}=selector([wp('a',[100,0,0],['near','far','above','equal']),wp('near',[10,0,0]),wp('far',[90,0,0]),wp('above',[0,101,0]),wp('equal',[0,100,0])]);
  const found=new Set();for(let i=0;i<100;i++)found.add(selectTouchWaypoint(nav,object,[0,0,0],mode()).id);
  assert.deepEqual([...found].sort(),['far','near']);
});

test('touch selection uses only eight neighbors and reserves destinations until death/disable',()=>{
  const {game,object}=fixture();game.navigation.build();
  const blocker={id:'other',enabled:true,health:1,position:[0,0,80],patrol:{start:'b',current:'b',target:null},batContact:mode()};game.objects.push(blocker);
  assert.equal(touchWaypointTarget(game,object,.1,[0,0,0],()=>true).id,'d');
  object.position=[100,0,0];object.patrol.target=null;object.patrol.current='a';object.batContact=mode();
  blocker.health=0;game.time+=.1;
  const seen=new Set();for(let i=0;i<30;i++){object.patrol.target=null;seen.add(touchWaypointTarget(game,object,.01,[0,0,0],()=>true).id);}
  assert.ok(seen.has('b'),'dead actor releases reservation');
  const ids=Array.from({length:9},(_,i)=>'n'+i);
  for(let i=0;i<ids.length;i++){const p={id:ids[i],position:[0,0,90-i]};game.navigation.names.set(p.id,p);}
  game.navigation.links.set('a',new Set(ids));let checked=0;
  selectTouchWaypoint(game.navigation,object,[0,0,0],mode('circle',-1),()=>{checked++;return false;});assert.equal(checked,8);
});

test('circle starts clock on first update, keeps edge at equality, selects before expiration',()=>{
  const {game,object}=fixture();object.batContact=mode('circle',-1);
  assert.equal(touchWaypointTarget(game,object,.1,[0,0,0],()=>true).id,'b');assert.equal(object.batContact.remaining,2);
  object.position=[50,0,40];game.time+=2;
  assert.equal(touchWaypointTarget(game,object,2,[0,0,0],()=>true).id,'b');assert.equal(object.batContact.remaining,0);
  object.position=[0,0,80];game.time+=.01;
  assert.equal(touchWaypointTarget(game,object,.01,[0,0,0],()=>true),null);
  assert.equal(object.batContact,null);assert.equal(object.patrol.target,'c','expired old direction chooses its next edge before stopping');
  game.time+=.01;assert.equal(touchWaypointTarget(game,object,.01,[0,0,0],()=>true).id,'c','new random mode cannot turn mid-edge');
});

test('no closer neighbor waits one second without searching distant points',()=>{
  const {game,object}=fixture([wp('a',[10,0,0],['b']),wp('b',[100,0,0])]);
  assert.equal(touchWaypointTarget(game,object,.01,[0,0,0],()=>true),null);assert.equal(object.batContact.wait,1);
  for(let i=0;i<9;i++){game.time+=.1;assert.equal(touchWaypointTarget(game,object,.1,[0,0,0],()=>true),null);}
  assert.ok(object.batContact.wait>0);game.time+=.11;touchWaypointTarget(game,object,.11,[0,0,0],()=>true);assert.equal(object.batContact,null);
  assert.equal(game.navigation.searchTraces,0);
});

test('detection starts waypoint pursuit immediately and contact never replaces its selected edge',()=>{
  for(const type of [2,10]){
    const {game,object}=fixture([wp('a',[100,0,0],['b']),wp('b',[-100,0,0])],type);object.batContact=mode('circle',-1);
    object.collisionMins=[-8,0,-8];object.collisionMaxs=[8,30,8];
    game.update(.05,[0,0,0]);assert.ok(object.position[0]<100,'first attack update is not a post-contact wait');
    const patrol=object.patrol.target;
    for(let i=0;i<30&&game.state.health===10;i++)game.update(.05,[0,0,0]);
    assert.ok(game.state.health<10);assert.equal(object.patrol.target,patrol);assert.equal(object.batContact.wait,0);
    assert.equal(game.projectiles.length,0);
  }
});

test('movement state and destination survive a save, freeze, and older orbit saves migrate safely',()=>{
  const {game,object}=fixture();object.batContact=mode('circle',-1);game.update(.1,[0,0,0],{traceEnemy:clear});
  const movement={...object.batContact},position=[...object.position],target=object.patrol.target;
  game.scripts={cutscene:true};game.update(.1,[0,0,0],{traceEnemy:clear});assert.deepEqual(object.batContact,movement);assert.deepEqual(object.position,position);game.scripts=null;
  const saved=JSON.parse(JSON.stringify(game.snapshot())),copy=new Gameplay(game.level,{settings:game.settings,save:saved}),bat=copy.find('touch')[0];
  assert.deepEqual(bat.batContact,movement);assert.equal(bat.patrol.target,target);
  game.update(.1,[0,0,0],{traceEnemy:clear});copy.update(.1,[0,0,0],{traceEnemy:clear});assert.deepEqual(bat.position,object.position);assert.deepEqual(bat.batContact,object.batContact);
  delete saved.objects.find(o=>o.id==='touch').batContact.version;
  const migrated=new Gameplay(game.level,{settings:game.settings,save:saved});assert.equal(migrated.find('touch')[0].batContact,null);migrated.update(.1,[0,0,0],{traceEnemy:clear});assert.equal(migrated.find('touch')[0].patrol.target,target);
});

test('authored flying patrol and touch steps never invoke whole-network detour searches',()=>{
  const {game,object}=fixture();let searches=0;game.navigation.takeSearchCredit=()=>{searches++;return true;};
  for(let i=0;i<10;i++)game.update(.02,[10000,0,0],{traceEnemy:clear});
  assert.equal(searches,0);assert.ok(Math.abs(object.position[2])>0);
  for(let i=0;i<10;i++)game.update(.02,[0,0,0],{traceEnemy:clear});assert.equal(searches,0);
});

test('a displaced saved cursor reacquires its node before choosing a new authored edge',()=>{
  const {game,object}=fixture();object.patrol.current='a';object.patrol.target=null;object.position=[150,0,40];
  assert.equal(touchWaypointTarget(game,object,.1,[0,0,0],()=>true).id,'a');assert.equal(object.patrol.reacquiring,true);
  object.position=[100,0,0];game.time+=.1;
  assert.notEqual(touchWaypointTarget(game,object,.1,[0,0,0],()=>true).id,'a');assert.equal(object.patrol.reacquiring,false);
  const copy=new Gameplay(game.level,{settings:game.settings,save:game.snapshot()}).find('touch')[0];assert.equal(copy.patrol.reacquiring,false);
});

test('flying patrol reaches a waypoint before turning instead of cutting the corner five units early',()=>{
  const {game,object}=fixture();game.navigation.build();object.position=[98,0,0];
  assert.equal(game.navigation.target(object,()=>true).id,'a');assert.equal(object.patrol.current,null);
  object.position=[100,0,0];assert.notEqual(game.navigation.target(object,()=>true).id,'a');assert.equal(object.patrol.current,'a');
});

test('legacy orbit saves with a non-null stale destination use bounded reacquisition',()=>{
  const {game,object}=fixture();object.patrol.current='a';object.patrol.target='b';object.position=[150,0,40];object.alerted=true;
  object.batContact={wait:0,remaining:1,direction:1,mode:'circle'};
  const restored=new Gameplay(game.level,{settings:game.settings,save:game.snapshot()}),copy=restored.find('touch')[0];
  assert.equal(copy.patrol.target,'b');assert.equal(copy.patrol.reacquiring,true);assert.equal(copy.batContact,null);
  const blocked=(a,b)=>({fraction:0,end:[...a],normal:[0,0,1],startSolid:false});
  restored.update(.01,[0,0,0],{traceEnemy:blocked,lineOfSight:()=>true});
  assert.ok(restored.navigation.searchTraces>0);assert.ok(restored.navigation.searchTraces<=16);assert.equal(copy.waypointActive,false);
});

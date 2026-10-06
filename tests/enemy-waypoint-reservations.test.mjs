import test from 'node:test';
import assert from 'node:assert/strict';
import {EnemyNavigation} from '../src/enemy-navigation.js';

const waypoint=(id,position,links=[])=>({classname:'GrobberPathPoint','%name%':id,Origin:position.join(' '),...Object.fromEntries(links.map((name,i)=>[`WayPoint${i+1}`,name]))});
const graph=()=>{const nav=new EnemyNavigation({entities:[waypoint('a',[0,0,0],['b']),waypoint('b',[100,0,0]),waypoint('c',[0,0,100],['b'])]},{MaxConnectionDistance:0});nav.build();return nav;};
const actor=(nav,id,start='a')=>{const object={id,entity:{StartPoint:start},stats:{},enabled:true,health:10,alerted:false,position:[...nav.find(start).position]};nav.initialize(object);return object;};
const atCurrent=(object,id)=>{object.patrol.current=id;object.patrol.target=null;};

test('current and destination claims update immediately and ignore their owner or retired actors',()=>{
 const nav=graph(),object=actor(nav,'patrol');atCurrent(object,'a');
 nav.syncReservations([object],0,[1000,0,0]);
 assert.equal(nav.waypointBusy('a'),true);assert.equal(nav.waypointBusy('a',object),false);
 object.patrol.target='b';nav.syncReservation(object);
 assert.equal(nav.waypointBusy('a'),false);assert.equal(nav.waypointBusy('b'),true);
 object.patrol.target='c';nav.syncReservation(object);
 assert.equal(nav.waypointBusy('b'),false);assert.equal(nav.waypointBusy('c'),true);
 object.health=0;assert.equal(nav.waypointBusy('c'),false,'death releases the gate before the next frame rebuild');
 object.health=10;object.enabled=false;assert.equal(nav.waypointBusy('c'),false);
 nav.syncReservation(object);object.enabled=true;assert.equal(nav.waypointBusy('c'),false,'removed claims do not reappear without synchronization');
});

test('direct pursuit releases stale patrol claims while active waypoint modes reserve them',()=>{
 const nav=graph(),object=actor(nav,'enemy');object.patrol.target='b';object.alerted=true;
 nav.syncReservations([object],0,[0,0,0]);assert.equal(nav.waypointBusy('b'),false);
 for(const activate of [o=>o.batContact={version:2},o=>o.patrol.relocating=true,o=>o.waypointActive=true,o=>o.alerted=false]){
  object.batContact=null;object.patrol.relocating=false;object.waypointActive=false;object.alerted=true;
  activate(object);nav.syncReservation(object);assert.equal(nav.waypointBusy('b'),true);
 }
 object.alerted=true;object.waypointActive=false;nav.syncReservation(object);
 assert.equal(nav.waypointBusy('b'),false);
});

test('reservation rebuild runs once per update and explicit invalidation supports loading at the same time',()=>{
 const nav=graph(),object=actor(nav,'enemy');let scans=0;
 const objects={*[Symbol.iterator](){scans++;yield object;}};
 nav.syncReservations(objects,1,[0,0,0]);nav.syncReservations(objects,1,[0,0,0]);assert.equal(scans,1);
 object.patrol.target='c';nav.syncReservation(object);assert.equal(nav.waypointBusy('c'),true);assert.equal(scans,1);
 object.patrol.target='b';nav.reservationFrame=null;nav.syncReservations(objects,1,[0,0,0]);
 assert.equal(scans,2);assert.equal(nav.waypointBusy('c'),false);assert.equal(nav.waypointBusy('b'),true);
 nav.syncReservations([],2,[0,0,0]);assert.equal(nav.waypointBusy('b'),false);
});

test('ordinary patrol observes touch reservations and claims its selected edge before later actors choose',()=>{
 const nav=graph(),touch=actor(nav,'touch','b'),first=actor(nav,'first'),second=actor(nav,'second','c');
 atCurrent(touch,'b');touch.alerted=true;touch.batContact={version:2};atCurrent(first,'a');atCurrent(second,'c');
 nav.syncReservations([touch,first,second],0,[1000,0,0]);
 assert.equal(nav.choose(first),null,'the touching cursor already occupies the only destination');
 touch.health=0;
 assert.equal(nav.choose(first).id,'b');assert.equal(nav.waypointBusy('a'),false);
 assert.equal(nav.choose(second),null,'the earlier ordinary selector reserved the same-frame destination');
 assert.equal(nav.waypointBusy('b',first),false);
});

test('minimum player distance applies to ordinary and relocation choices without forbidden fallback',()=>{
 const nav=new EnemyNavigation({entities:[waypoint('a',[0,0,0],['near','boundary']),waypoint('near',[20,0,0]),waypoint('boundary',[0,100,0])]},{MaxConnectionDistance:0});nav.build();
 const object=actor(nav,'enemy');object.stats.MinPlayerDistance=100;atCurrent(object,'a');
 nav.syncReservations([object],0,[0,0,0]);
 assert.equal(nav.choose(object).id,'boundary','the minimum uses 3D distance and permits exact equality');
 atCurrent(object,'a');object.stats.MinPlayerDistance=101;
 assert.equal(nav.choose(object),null);
 assert.equal(nav.choose(object,{relocate:true,player:[0,0,0]}),null,'relocation cannot fall back to a point inside the minimum');
});

test('generic random selection includes the previous neighbor and works without frame synchronization',()=>{
 const selected=new Set();
 for(let i=0;i<80;i++){
  const nav=graph(),object=actor(nav,`enemy${i}`,'b');atCurrent(object,'b');object.patrol.previous='a';
  selected.add(nav.choose(object).id);
 }
 assert.deepEqual([...selected].sort(),['a','c']);
});

test('arrival preserves the current-point claim after relocation and immediately reserves a subsequent patrol edge',()=>{
 const nav=graph(),object=actor(nav,'enemy');object.patrol.target='b';object.patrol.relocating=true;object.position=[100,0,0];
 nav.syncReservations([object],0,[1000,0,0]);
 assert.equal(nav.target(object,()=>true),null,'relocation finishes on arrival');
 assert.equal(object.patrol.current,'b');assert.equal(object.patrol.target,null);assert.equal(nav.waypointBusy('b'),true);
 const next=nav.target(object,()=>true);
 assert.ok(next);assert.equal(nav.waypointBusy('b'),false);assert.equal(nav.waypointBusy(next.id),true);
});

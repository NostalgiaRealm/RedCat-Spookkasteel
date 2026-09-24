import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import { Gameplay } from '../src/gameplay.js';
import { EnemyNavigation } from '../src/enemy-navigation.js';

const waypoint=(name,position,extra={})=>({classname:'GrobberPathPoint','%name%':name,Origin:position.join(' '),SubSystemId:'0',...extra});
const enemy=(extra={})=>({classname:'MovingEnemy','%name%':'guard',DaviName:'guard',Origin:'0 0 0',Type:'10',StartPoint:'a',StartOrientation:'6',...extra});
const makeLevel=entities=>({id:'lvl01a',spawn:{position:[0,0,0],orientation:0},entities});
const advance=(game,seconds,player=[5000,0,5000],options={})=>{for(let t=0;t<seconds-1e-8;t+=.05)game.update(Math.min(.05,seconds-t),player,options);};

test('automatic waypoint links respect native distance, height, subsystem and walls',()=>{
  const nav=new EnemyNavigation(makeLevel([
    waypoint('a',[0,0,0]),waypoint('near',[100,0,0]),waypoint('far',[500,0,0]),
    waypoint('above',[0,60,0]),waypoint('bat',[0,40,0],{SubSystemId:'1'}),waypoint('blocked',[0,0,100])
  ]));
  nav.build((a,b)=>a[2]<50&&b[2]<50);
  assert.deepEqual([...nav.links.get('a')],['near']);
  assert.equal(nav.links.get('bat').size,0);assert.equal(nav.links.get('blocked').size,0);
});

test('explicit waypoint edges preserve authored climbs but never cross subsystems',()=>{
  const nav=new EnemyNavigation(makeLevel([
    waypoint('a',[0,0,0],{WayPoint1:'b',WayPoint2:'bat'}),waypoint('b',[0,118,0]),waypoint('bat',[0,0,20],{SubSystemId:'1'})
  ]));
  nav.build(()=>false);assert.deepEqual([...nav.links.get('a')],['b']);assert.deepEqual([...nav.links.get('b')],['a']);
});

test('automatic links reject narrow 3D angles at either endpoint while authored links survive',()=>{
  for(const reversed of [false,true])for(const degrees of [29,31]){
    const a=[0,0,0],b=[200,0,0],angle=degrees*Math.PI/180;
    const c=reversed?[200-100*Math.cos(angle),100*Math.sin(angle),0]:[100*Math.cos(angle),100*Math.sin(angle),0];
    const nav=new EnemyNavigation(makeLevel([
      waypoint('a',a,reversed?{}:{WayPoint1:'c'}),waypoint('b',b,reversed?{WayPoint1:'c'}:{}),waypoint('c',c)
    ]),{MaxConnectionDistance:0,MinPointToLineDistance:0});
    nav.build();
    assert.equal(nav.automaticLinkObstructed(nav.find('a'),nav.find('b')),degrees<30,`angle ${degrees} at ${reversed?'destination':'origin'}`);
    assert.ok(nav.links.get(reversed?'b':'a').has('c'));
  }
});

test('automatic links honor native 3D clearance to third points and finite segment endpoints',()=>{
  for(const [position,blocked] of [[[100,20,0],true],[[100,31,0],false],[[-100,0,0],false]]){
    const nav=new EnemyNavigation(makeLevel([
      waypoint('a',[0,0,0]),waypoint('b',[200,0,0]),waypoint('other',position,{SubSystemId:'1'})
    ]),{MaxDegreesBetweenLinks:0});
    nav.build();
    assert.equal(nav.links.get('a').has('b'),!blocked);
    assert.equal(nav.links.get('other').size,0,'proximity pruning does not link subsystems together');
  }
});

test('automatic links avoid strict crossings but permit bridges above the height threshold',()=>{
  for(const [height,blocked] of [[0,true],[51,false]]){
    const nav=new EnemyNavigation(makeLevel([
      waypoint('a',[0,0,-100]),waypoint('b',[0,0,100]),
      waypoint('c',[-100,height,0],{WayPoint1:'d'}),waypoint('d',[100,height,0])
    ]),{MaxConnectionDistance:0,MaxDegreesBetweenLinks:0,MinPointToLineDistance:0});
    nav.build();
    assert.equal(nav.automaticLinkObstructed(nav.find('a'),nav.find('b')),blocked);
    assert.ok(nav.links.get('c').has('d'));
    assert.equal(nav.automaticLinkObstructed(nav.find('a'),nav.find('c')),false,'sharing an endpoint is not a crossing');
  }
});

test('automatic collinear routes use the intermediate waypoint instead of skipping it',()=>{
  const nav=new EnemyNavigation(makeLevel([waypoint('a',[0,0,0]),waypoint('b',[100,0,0]),waypoint('c',[200,0,0])]));
  nav.build();
  assert.deepEqual([...nav.links.get('a')],['b']);
  assert.deepEqual([...nav.links.get('b')],['a','c']);
  assert.deepEqual([...nav.links.get('c')],['b']);
});

test('unaware moving enemies patrol original points, retain progress in saves, and freeze',()=>{
  const level=makeLevel([enemy(),waypoint('a',[0,0,0],{WayPoint1:'b'}),waypoint('b',[0,0,120],{WayPoint1:'c'}),waypoint('c',[120,0,120])]);
  const game=new Gameplay(level),guard=game.objects[0];
  advance(game,.8);assert.equal(guard.animationState,'walk');assert.ok(Math.hypot(guard.position[0],guard.position[2])>40);
  assert.equal(guard.alerted,false);const save=JSON.parse(JSON.stringify(game.snapshot())),restored=new Gameplay(level,{save});
  assert.deepEqual(restored.objects[0].patrol,guard.patrol);
  advance(game,.5);advance(restored,.5);assert.deepEqual(restored.objects[0].position,guard.position);
  restored.scripts={enemiesFrozen:true};const before=[...restored.objects[0].position];advance(restored,1);assert.deepEqual(restored.objects[0].position,before);
});

test('leaving an unlinked start does not send enemies back into their initial grave',()=>{
  const nav=new EnemyNavigation(makeLevel([waypoint('a',[0,-60,0],{WayPoint1:'b'}),waypoint('b',[0,0,0],{WayPoint1:'c'}),waypoint('c',[0,0,100])]),{MaxConnectionDistance:1});
  nav.build();const object={id:'zombie',entity:{StartPoint:'a',UnlinkStartPoint:'1'},position:[0,0,0],stats:{}};nav.initialize(object);
  object.patrol.current='b';object.patrol.target=null;object.patrol.leftStart=true;
  for(let i=0;i<10;i++)assert.equal(nav.choose(object).id,'c');
});

test('view cone and remembered position replace omnidirectional player tracking',()=>{
  const game=new Gameplay(makeLevel([enemy({StartPoint:'',Type:'1'})])),object=game.objects[0];
  game.update(.1,[0,0,-200]);assert.equal(object.alerted,false);assert.deepEqual(object.position,[0,0,0]);
  game.update(.1,[0,0,200]);assert.equal(object.alerted,true);assert.deepEqual(object.lastSeenPosition,[0,0,200]);
  const before=[...object.position];game.update(.1,[300,0,200],{lineOfSight:()=>false});
  assert.deepEqual(object.lastSeenPosition,[0,0,200]);assert.equal(object.position[0],before[0]);
  advance(game,3,[300,0,200],{lineOfSight:()=>false});assert.equal(object.alerted,false);
});

test('Brutus launches original mushrooms, then moves on arena points between salvos',()=>{
  const level=makeLevel([enemy({Type:'7',StartPoint:'a'}),waypoint('a',[0,0,0]),waypoint('b',[150,0,0]),waypoint('c',[0,0,-150])]);
  const game=new Gameplay(level),brutus=game.objects[0];brutus.stats={...brutus.stats,ChanceToMoveAfterSalvo:1,AverageShotsPerSalvo:1};brutus.salvoSize=1;
  brutus.animationDurations={attack:1};game.update(.05,[0,0,400]);advance(game,.55,[0,0,400]);
  assert.equal(game.projectiles.length,1);const projectile=game.projectiles[0];
  assert.equal(projectile.kind,'mushRoom');assert.equal(projectile.damage,2);assert.ok(Math.abs(Math.hypot(...projectile.velocity)-250)<1e-6);
  advance(game,1.1,[0,0,400]);assert.equal(brutus.animationState,'walk');assert.ok(Math.hypot(brutus.position[0],brutus.position[2])>20);
  assert.equal(brutus.patrol.relocating,true);
});

test('boss projectile classes and difficulty values come from original settings',()=>{
  for(const [type,standing,kind,damage,speed] of [[7,false,'mushRoom',2,250],[8,false,'bone',2,500],[5,true,'magma',1,400],[4,true,'jesterBall',4,600],[9,false,'magicBall',3,80]]) {
    const game=new Gameplay(makeLevel([enemy({Type:String(type),classname:standing?'StandingEnemy':'MovingEnemy'})]));
    game.enemyProjectile(game.objects[0],[0,0,100]);const p=game.projectiles[0];
    assert.equal(p.kind,kind);assert.equal(p.damage,damage);assert.ok(Math.abs(Math.hypot(...p.velocity)-speed)<1e-6);
    if(type===8){game.objects[0].boneSkullPhase=true;game.enemyProjectile(game.objects[0],[0,0,100]);assert.equal(game.projectiles[1].kind,'skull');}
  }
});

test('Bone Brutus charges between bone and skull salvos and restores the charge phase',()=>{
  const level=makeLevel([enemy({Type:'8',StartPoint:''})]),game=new Gameplay(level),brutus=game.objects[0];
  brutus.stats={...brutus.stats,AverageShotsPerSalvo:1,ChanceToMoveAfterSalvo:0};brutus.salvoSize=1;
  brutus.animationDurations={attack:1,charge:1.933343};
  advance(game,1.1,[0,0,300]);
  assert.equal(brutus.animationState,'charge');assert.equal(brutus.boneSkullPhase,true);
  assert.ok(brutus.animationRate>=.9&&brutus.animationRate<1.1);
  assert.equal(game.projectiles.length,1);assert.equal(game.projectiles[0].kind,'bone');
  const restored=new Gameplay(level,{save:JSON.parse(JSON.stringify(game.snapshot()))});
  const copy=restored.objects[0];copy.stats={...brutus.stats};copy.animationDurations={...brutus.animationDurations};
  assert.equal(copy.animationState,'charge');assert.equal(copy.animationRate,brutus.animationRate);
  assert.equal(copy.animationUntil,brutus.animationUntil);assert.equal(copy.boneSkullPhase,true);
  const remaining=brutus.animationUntil-game.time;
  advance(game,remaining+.65,[0,0,300]);advance(restored,remaining+.65,[0,0,300]);
  assert.equal(game.projectiles.at(-1).kind,'skull');
  assert.deepEqual(restored.projectiles,game.projectiles);
});

test('shot deviation is reproducible across saves without changing projectile speed',()=>{
  const level=makeLevel([enemy({Type:'7'})]),game=new Gameplay(level),object=game.objects[0];
  game.enemyProjectile(object,[0,0,400]);const first=game.projectiles[0].velocity;
  const saved=JSON.parse(JSON.stringify(game.snapshot())),restored=new Gameplay(level,{save:saved});
  game.enemyProjectile(object,[0,0,400]);restored.enemyProjectile(restored.objects[0],[0,0,400]);
  assert.deepEqual(restored.projectiles[1].velocity,game.projectiles[1].velocity);assert.notDeepEqual(first,game.projectiles[1].velocity);
});

test('forest arena and frog area remain separate automatic path networks',()=>{
  const level=JSON.parse(fs.readFileSync(new URL('../data/levels/lvl00a/level.json',import.meta.url)));
  const nav=new EnemyNavigation(level);nav.build();const reached=new Set(),queue=['GrobberPathPoint1'];
  while(queue.length){const id=queue.shift();if(reached.has(id))continue;reached.add(id);queue.push(...nav.links.get(id));}
  assert.equal(reached.size,15);assert.ok(!reached.has('GrobberPathPoint17'));
});

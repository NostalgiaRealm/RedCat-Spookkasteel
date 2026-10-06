import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {updateZombieGraveRise,zombieGraveEdge} from '../src/zombie-grave-rise.js';

const level=JSON.parse(readFileSync(new URL('../data/levels/lvl02a/level.json',import.meta.url)));
const boot=save=>new Gameplay(level,{deferInit:true,save});
const names=['frogzom1','frogzom2','frogzom3','frogzom4','zombie1','zombie2','zombie3','zombie4'];
const distance=(a,b)=>Math.hypot(...a.map((v,i)=>v-b[i]));
const near=(actual,expected,message)=>assert.ok(Math.abs(actual-expected)<1e-7,`${message}: ${actual} != ${expected}`);
const forbidden=()=>assert.fail('grave ascent must not run step/gravity sweeps or pursuit visibility searches');
const advance=(game,zombie,dt)=>{game.time+=dt;game.updateEnemy(zombie,dt,[3642,-64,1271],forbidden,forbidden);};

test('grave ascent is restricted to the eight authored upward entrance edges',()=>{
  const game=boot();
  assert.deepEqual(game.objects.filter(o=>zombieGraveEdge(game,o)).map(o=>o.entity.DaviName).sort(),names);
  const zombie=game.find('zombie1')[0],original=[...zombie.position];
  assert.equal(updateZombieGraveRise(game,zombie,.01),false,'not before the grave trigger');
  assert.deepEqual(zombie.position,original);
  game.command(zombie,'enable');
  zombie.health=0;assert.equal(updateZombieGraveRise(game,zombie,.01),false,'never revive a defeated zombie');
  zombie.health=5;zombie.patrol.leftStart=true;assert.equal(zombieGraveEdge(game,zombie),null);
  zombie.patrol.leftStart=false;
  zombie.position=[3700,-64,996];assert.equal(zombieGraveEdge(game,zombie),null,'old save past the exit');
  zombie.position=[3800,-90,1100];assert.equal(zombieGraveEdge(game,zombie),null,'old save off the entrance');
});

for(const [label,frames] of [['60 Hz',[1/60]],['120 Hz',[1/120]],['7 ms',[.007]],['uneven frames',[.007,.011,.008,.009]]]) {
  test(`all eight grave rises stay continuous at native Speed with ${label}`,()=>{
    const game=boot();
    for(const name of names){
      const zombie=game.find(name)[0],edge=zombieGraveEdge(game,zombie),start=[...zombie.position];
      game.command(zombie,'enable');
      assert.equal(Number(zombie.stats.Speed),50);
      zombie.velocityY=-100;zombie.grounded=true;
      zombie.movementRecovery={recoveries:3};
      game.navigation.pursuitJobs.set(zombie,{});game.navigation.searchRequests.set(zombie,{});
      let elapsed=0,count=0;
      while(!zombie.patrol.leftStart&&count<1000){
        const dt=frames[count%frames.length],before=[...zombie.position];
        advance(game,zombie,dt);elapsed+=dt;count++;
        assert.ok(zombie.position[1]>before[1],`${name}: no stalled or downward frames`);
        near(distance(before,zombie.position),Math.min(50*dt,distance(before,edge.end.position)),`${name}: distance per tick`);
        assert.equal(zombie.animationState,'walk');assert.equal(zombie.animationSerial,1,'walk animation never restarts');
        assert.equal(zombie.velocityY,0);assert.equal(zombie.movementRecovery,null);
        assert.equal(game.navigation.pursuitJobs.has(zombie),false);assert.equal(game.navigation.searchRequests.has(zombie),false);
      }
      assert.ok(count<1000,`${name}: reaches its exit`);
      assert.deepEqual(zombie.position,edge.end.position);
      assert.ok(elapsed>=distance(start,edge.end.position)/50-1e-8);
      assert.ok(elapsed-distance(start,edge.end.position)/50<Math.max(...frames)+1e-8);
      assert.equal(zombie.patrol.current,edge.end.id);assert.equal(zombie.patrol.target,null);
      assert.equal(zombie.patrol.previous,edge.start.id);assert.equal(zombie.grounded,true);
      assert.equal(updateZombieGraveRise(game,zombie,.01),false,'ordinary movement resumes after the entrance');
    }
  });
}

test('the captured older-save position continues smoothly, and saving midway preserves the path',()=>{
  const game=boot(),zombie=game.find('zombie1')[0];
  game.command(zombie,'enable');
  // Actual position/state from the reported hitching encounter, before this fix.
  zombie.position=[3819.8099999999977,-91.1082951498091,996];
  zombie.patrol.current='GrobberPathPoint5';zombie.patrol.target='GrobberPathPoint6';
  zombie.animationState='walk';zombie.animationSerial=167;zombie.velocityY=-5.52;
  const start=[...zombie.position];
  for(let i=0;i<30;i++)advance(game,zombie,.007);
  near(distance(start,zombie.position),50*.007*30,'no spawn snap when resuming an older save');
  const restored=boot(game.snapshot()),copy=restored.find('zombie1')[0];
  assert.deepEqual(copy.position,zombie.position);
  while(!zombie.patrol.leftStart){
    advance(game,zombie,.007);advance(restored,copy,.007);
    assert.deepEqual(copy.position,zombie.position);assert.deepEqual(copy.patrol,zombie.patrol);
    assert.equal(copy.animationSerial,167);
  }
});

test('hurt and authored cutscenes hold the rise without falling, and facing turns toward the exit',()=>{
  const game=boot(),zombie=game.find('zombie4')[0];game.command(zombie,'enable');
  const start=[...zombie.position],initialYaw=zombie.yaw;
  game.enemyAnimation(zombie,'hurt',.3);
  advance(game,zombie,.1);assert.deepEqual(zombie.position,start);assert.equal(zombie.velocityY,0);
  advance(game,zombie,.21);
  assert.ok(zombie.position[0]>start[0],'the fourth zombie exits to the east');
  assert.ok(Math.abs(zombie.yaw-initialYaw)<=Number(zombie.stats.RotationPerSec)*.21+1e-8);
  assert.notEqual(zombie.yaw,initialYaw,'turn toward the entrance path');
  const hold=[...zombie.position];
  game.scripts={cutscene:true};game.update(.1,[3642,-64,1271],{traceEnemy:forbidden,lineOfSight:forbidden});
  assert.deepEqual(zombie.position,hold,'existing cutscene freeze remains effective');
  game.scripts=null;advance(game,zombie,.01);assert.ok(zombie.position[1]>hold[1]);
});

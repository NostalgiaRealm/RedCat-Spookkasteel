import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {GAMEPLAY_SETTINGS} from '../src/gameplay-settings.js';
import {DIFFICULTIES,normalizeDifficulty} from '../src/difficulty.js';
import {playerShotDefinition} from '../src/player-projectiles.js';

const enemy=(classname,Type,SubType='1',name='enemy')=>({classname,Type,SubType,DaviName:name,'%name%':name,Origin:'0 0 0',IsInitiallyEnabled:'1'});
const level=entities=>({id:'difficulty-test',spawn:{position:[0,0,0],orientation:0},entities});
const fixture=(difficulty,entity=enemy('StandingEnemy','2'))=>new Gameplay(level([entity]),{difficulty,deferInit:true});

test('original Dutch labels, native IDs and invalid-setting fallback select the three native sections',()=>{
  assert.deepEqual(DIFFICULTIES.map(({id,value,label})=>[id,value,label]),[[0,'Easy','Makkelijk'],[1,'Normal','Normaal'],[2,'Hard','Moeilijk']]);
  for(const {id,value} of DIFFICULTIES){assert.equal(normalizeDifficulty(id),value);assert.equal(normalizeDifficulty(' '+value.toLowerCase()+' '),value);assert.equal(fixture(id).difficulty,value);}
  for(const invalid of [undefined,null,{},false,'impossible',3,-1,NaN]){assert.equal(normalizeDifficulty(invalid),'Normal');assert.equal(fixture(invalid).objects[0].maxHealth,5);}
});

test('difficulty changes real knight health and melee damage using the original per-enemy values',()=>{
  for(const [difficulty,health,damage,memory] of [['Easy',4,2,2],['Normal',5,3,3],['Hard',6,3,4]]) {
    const game=fixture(difficulty),knight=game.objects[0];knight.animationDurations={attack:1};
    assert.equal(knight.health,health);assert.equal(knight.maxHealth,health);assert.equal(knight.stats.TimeToRememberVisual,memory);
    for(let i=0;i<8;i++)game.update(.1,[0,0,60]);
    assert.equal(game.state.health,10-damage,`${difficulty} actual melee strike`);
    game.hurtEnemy(knight,1);assert.equal(knight.health,health-1);
  }
});

test('difficulty chooses native projectile damage, speed and real collision damage without scaling player pellets',()=>{
  for(const [difficulty,damage,speed] of [['Easy',1,350],['Normal',2,400],['Hard',3,400]]) {
    const game=fixture(difficulty,enemy('MovingEnemy','1','3')),spider=game.objects[0];
    game.enemyProjectile(spider,[0,0,100]);const projectile=game.projectiles[0];
    assert.equal(projectile.damage,damage);assert.ok(Math.abs(Math.hypot(...projectile.velocity)-speed)<1e-9);
    game.updateProjectiles(.4,[0,0,100]);assert.equal(game.state.health,10-damage);assert.equal(game.projectiles.length,0);
    const shot=playerShotDefinition(0,GAMEPLAY_SETTINGS,game.difficulty);assert.equal(shot.stats.Damage,1);assert.equal(shot.stats.InitialSpeed,300);assert.equal(shot.stats.RechargeTime,1);
  }
});

test('native movement and boss encounter parameters use the chosen section',()=>{
  for(const [difficulty,batSpeed,batHealth,maxHealth,salvo,rise] of [['Easy',120,3,10,1,1],['Normal',140,4,11,3,2],['Hard',150,5,12,4,1]]) {
    const bat=fixture(difficulty,enemy('MovingEnemy','2')).objects[0];assert.equal(bat.stats.Speed,batSpeed);assert.equal(bat.maxHealth,batHealth);
    const boss=fixture(difficulty,enemy('StandingEnemy','5')).objects[0];assert.equal(boss.maxHealth,maxHealth);assert.equal(boss.stats.AverageShotsPerSalvo,salvo);assert.equal(boss.stats.RiseTime,rise);assert.equal(boss.boss.phase,'idle');
  }
});

test('all imported level enemies receive populated difficulty-specific native tables',()=>{
  for(const id of ['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a']) {
    const source=JSON.parse(readFileSync(new URL(`../data/levels/${id}/level.json`,import.meta.url)));
    for(const {value:difficulty} of DIFFICULTIES) {
      const game=new Gameplay(source,{difficulty,deferInit:true});
      const enemies=game.objects.filter(o=>o.kind==='enemy');assert.ok(enemies.length>0);
      for(const object of enemies){assert.ok(Number.isFinite(object.stats.Health),`${id}/${object.id}/${difficulty}: native table`);assert.equal(object.maxHealth,object.stats.Health);}
    }
  }
});

test('saved difficulty restores health limits, projectile rules, boss progress and hazards independently of menu preference',()=>{
  const entities=[enemy('StandingEnemy','2','1','knight'),enemy('StandingEnemy','5','1','boss'),enemy('MovingEnemy','1','3','spider')],source=level(entities);
  const hard=new Gameplay(source,{difficulty:'Hard',deferInit:true});hard.objects[0].health=2;hard.objects[1].boss.phase='look';hard.objects[1].boss.elapsed=.75;hard.objects[1].boss.duration=2;
  hard.enemyProjectile(hard.objects[2],[0,0,100]);hard.projectiles[0].age=.5;
  const save=hard.snapshot();assert.equal(save.difficulty,'Hard');
  for(const restored of [new Gameplay(source,{difficulty:'Easy',save,deferInit:true}),new Gameplay(source,{difficulty:'Easy',deferInit:true})]) {
    assert.equal(restored.restore(save),true);assert.equal(restored.difficulty,'Hard');assert.equal(restored.objects[0].maxHealth,6);assert.equal(restored.objects[0].health,2);
    assert.equal(restored.objects[1].maxHealth,12);assert.equal(restored.objects[1].boss.phase,'look');assert.equal(restored.objects[1].boss.elapsed,.75);
    assert.equal(restored.objects[1].stats.AverageShotsPerSalvo,4);assert.deepEqual(restored.projectiles,save.projectiles);
    restored.enemyProjectile(restored.objects[2],[0,0,100]);assert.equal(restored.projectiles.at(-1).damage,3);
  }
  const custom=structuredClone(GAMEPLAY_SETTINGS);custom.projectileeasy.RcMushRoom.TrailDamage=2;custom.projectilehard.RcMushRoom.TrailDamage=8;
  const hazardHard=new Gameplay(source,{settings:custom,difficulty:'Hard'}),hazardSave=hazardHard.snapshot();
  const hazardEasy=new Gameplay(source,{settings:custom,difficulty:'Easy'});hazardEasy.restore(hazardSave);assert.equal(hazardEasy.hazards.definition.damage,0,'unused TrailDamage never enables ribbon damage');
});

test('legacy saves retain Normal difficulty and incompatible saves do not change a running encounter',()=>{
  const game=fixture('Normal'),save=game.snapshot();delete save.difficulty;save.objects[0].health=2;
  const restored=new Gameplay(game.level,{difficulty:'Hard',save,deferInit:true});assert.equal(restored.difficulty,'Normal');assert.equal(restored.objects[0].maxHealth,5);assert.equal(restored.objects[0].health,2);
  const hard=fixture('Hard');assert.equal(hard.restore({...save,level:'other-level',difficulty:'Easy'}),false);assert.equal(hard.difficulty,'Hard');assert.equal(hard.objects[0].maxHealth,6);
});

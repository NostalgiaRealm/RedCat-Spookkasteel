import test from 'node:test';
import assert from 'node:assert/strict';
import {Gameplay} from '../src/gameplay.js';
import {createRewardEffect,retainRewardEffects,restoreRewardEffects,rewardScoreQuad,pickupTrailQuads,pickupColor,PICKUP_TEXTURE,SCORE_VALUES,SCORE_TEXTURES} from '../src/reward-effects.js';

const entity=(classname,properties={})=>({classname,'%name%':'reward',Origin:'10 20 30',...properties});
const make=(entities=[],options={})=>new Gameplay({id:'reward-fixture',spawn:{position:[0,0,0]},entities},{deferInit:true,...options});
const near=(actual,expected)=>assert.ok(Math.abs(actual-expected)<1e-8,`${actual} ~= ${expected}`);
const centre=quad=>quad.points[0].map((value,axis)=>(value+quad.points[4][axis])/2);
const height=quad=>quad.points[2][1]-quad.points[0][1];

test('pickup pinwheel uses five original textured triangles with native orbit and tapered width',()=>{
  const effect=createRewardEffect('pickup',25,[10,20,30],2),start=pickupTrailQuads(effect,2),age=.4;
  assert.equal(start.length,5);assert.equal(start[0].texture,PICKUP_TEXTURE);
  assert.deepEqual(start[0].points,[[40,19.9,40],[40,19.9,20],[10,20,27.5],[10,20,27.5],[10,20,27.5],[10,20,27.5]]);
  assert.deepEqual(start[0].uvs,[[0,0],[1,0],[1,1],[1,1],[1,1],[1,1]]);
  const moving=pickupTrailQuads(effect,2+age);
  moving.forEach((trail,i)=>{
    const end=trail.points[0].map((v,k)=>(v+trail.points[1][k])/2),angle=i*2*Math.PI/5+12.5*age;
    near(end[0],10+18*Math.cos(angle));near(end[1],19.9);near(end[2],30-18*Math.sin(angle));
    near(Math.hypot(...trail.points[0].map((v,k)=>v-trail.points[1][k])),20);
    near(trail.opacity,1-.9*.3/1.1);
    assert.deepEqual(trail.points[3],trail.points[4]);assert.deepEqual(trail.points[4],trail.points[5],'no extra visible half-quad');
  });
  assert.deepEqual(pickupTrailQuads(effect,3),[]);assert.deepEqual(pickupTrailQuads(effect,1.99),[]);
  assert.deepEqual(pickupTrailQuads(createRewardEffect('enemy',25,[10,20,30],2),2.5),[],'enemies retain their purple death smoke');
});

test('pickup colours cycle one component at a time and re-sampling never advances a paused effect',()=>{
  const colours=[[20,255,20],[255,255,20],[255,20,20],[255,20,255],[20,20,255],[20,255,255],[20,255,20]];
  colours.forEach((expected,i)=>pickupColor(i*235/700).forEach((value,axis)=>near(value,expected[axis]/255)));
  const effect=createRewardEffect('pickup',50,[0,0,0],5),before=pickupTrailQuads(effect,5.23);
  assert.deepEqual(pickupTrailQuads(effect,5.23),before);
  assert.deepEqual(pickupTrailQuads(restoreRewardEffects([effect],5.23)[0],5.23),before);
});

test('every collectible emits the corresponding original score artwork exactly once',()=>{
  for(const [classname,type,score] of [
    ['ItemCoin',1,5],['ItemCoin',2,25],['ItemCoin',3,50],
    ['ItemHealth',1,5],['ItemHealth',2,15],['ItemHealth',3,25],
    ['ItemPotion',1,25],['ItemMirror',1,75],['ItemLife',1,75],
    ['ItemHart',1,75],['ItemHartContainer',1,75],
  ]){
    const events=[],game=make([entity(classname,{Type:String(type)})],{onEvent:event=>events.push(event)}),object=game.objects[0];
    game.state.health=1;game.time=4;
    game.pickup(object);
    assert.equal(game.state.score,score,`${classname} ${type}`);
    assert.equal(object.collected,true);
    assert.deepEqual(game.rewardEffects,[{kind:'pickup',score,position:[10,20,30],birth:4}]);
    const index=[5,15,25,50,75].indexOf(score);
    assert.equal(rewardScoreQuad(game.rewardEffects[0],4.5,[10,100,100]).texture,`score${index}.bmp|score${index}_a.bmp`);
    game.pickup(object);game.pickup(object);
    assert.equal(game.state.score,score,'repeated overlap cannot award the same item again');
    assert.equal(game.rewardEffects.length,1,'repeated overlap cannot restart its effect');
    assert.equal(events.filter(event=>event.type==='pickup').length,1);
  }
});

test('disabled pickups do not create reward effects',()=>{
  const events=[],game=make([entity('ItemHealth',{IsInitiallyEnabled:'0'}),entity('ItemCoin',{'%name%':'disabled',IsInitiallyEnabled:'0'})],{onEvent:event=>events.push(event)});
  for(const object of game.objects)game.pickup(object);
  assert.equal(game.state.score,0);assert.equal(game.rewardEffects.length,0);
  assert.ok(game.objects.every(object=>!object.collected));
  assert.equal(events.length,0);
});

test('enemy kills award their authored score once; wounds, scenery and the zero-score witch do not',()=>{
  for(const [classname,type,score] of [['MovingEnemy',1,15],['StandingEnemy',2,25],['MovingEnemy',4,50],['MovingEnemy',7,75],['MovingEnemy',9,0]]){
    const game=make([entity(classname,{Type:String(type)})]),object=game.objects[0];
    assert.equal(object.stats.PlayerScore,score,'test uses the imported native enemy settings');
    game.time=7;game.destroy(object);
    assert.equal(game.state.score,score);assert.equal(game.state.kills,1);
    assert.equal(game.rewardEffects.length,score?1:0);
    if(score){assert.equal(game.rewardEffects[0].kind,'enemy');assert.equal(game.rewardEffects[0].score,score);}
    game.destroy(object);game.hurtEnemy(object,100);
    assert.equal(game.state.score,score);assert.equal(game.state.kills,1);
    assert.equal(game.rewardEffects.length,score?1:0,'a corpse cannot replay the popup');
  }
  const game=make([entity('MovingEnemy',{Type:'5'}),entity('AdamAnyActor',{'%name%':'crate',ActorFileName:'crate.act',Targetable:'1'})]);
  game.hurtEnemy(game.objects[0],.5);
  assert.equal(game.rewardEffects.length,0,'nonlethal damage is not a kill reward');
  game.destroy(game.objects[1]);
  assert.equal(game.rewardEffects.length,0,'destroying scenery retains its own explosion, not an enemy reward');
  assert.equal(game.explosions.length,1);assert.equal(game.state.score,0);
});

test('pickup effects capture the current model transform without following later movement',()=>{
  const game=make([entity('%Model%',{'%name%':'platform',Model:'3'}),entity('ItemCoin',{Model:'platform'})]);
  const pose={origin:[0,0,0],translation:[100,50,200],rotation:[0,Math.SQRT1_2,0,Math.SQRT1_2]};
  game.scripts={modelTransforms:new Map([[3,pose]]),dispatch(){pose.translation[0]=999;}};
  const object=game.objects[0];game.pickup(object);
  game.rewardEffects[0].position.forEach((value,axis)=>near(value,[130,70,190][axis]));
  assert.deepEqual(object.position,[10,20,30],'the authored attachment anchor stays intact');
  object.position[1]=999;
  game.rewardEffects[0].position.forEach((value,axis)=>near(value,[130,70,190][axis]));
});

test('enemy score starts at the rendered bounds centre, with a collision-bounds fallback',()=>{
  const game=make([entity('MovingEnemy',{Type:'5'}),entity('MovingEnemy',{'%name%':'fallback',Type:'5'})]);
  const visualCentre=[45,75,-50],visual=game.objects[0],fallback=game.objects[1];
  visual.rewardPosition=()=>visualCentre;
  fallback.collisionMins=[-10,0,-8];fallback.collisionMaxs=[14,46,12];
  game.destroy(visual);game.destroy(fallback);
  assert.deepEqual(game.rewardEffects.map(effect=>effect.position),[[45,75,-50],[12,43,32]]);
  visualCentre[0]=999;visual.position[1]=999;
  assert.deepEqual(game.rewardEffects[0].position,[45,75,-50],'a dying actor cannot drag its already emitted score');
});

test('save/load preserves active effect age and cannot replay collected items or dead enemies',()=>{
  const entities=[entity('ItemCoin'),entity('MovingEnemy',{'%name%':'enemy',Type:'5'})],game=make(entities);
  game.time=10;game.pickup(game.objects[0]);game.destroy(game.objects[1]);game.time=10.4;
  const save=JSON.parse(JSON.stringify(game.snapshot())),resumed=make(entities,{save});
  assert.deepEqual(resumed.rewardEffects,game.rewardEffects);
  assert.equal(resumed.time,10.4);
  const camera=[100,200,300];
  for(let index=0;index<2;index++)assert.deepEqual(rewardScoreQuad(resumed.rewardEffects[index],resumed.time,camera),rewardScoreQuad(game.rewardEffects[index],game.time,camera));
  const state=structuredClone(resumed.state);resumed.pickup(resumed.objects[0]);resumed.destroy(resumed.objects[1]);
  assert.deepEqual(resumed.state,state);assert.equal(resumed.rewardEffects.length,2);
  save.rewardEffects[0].position[0]=999;
  assert.equal(resumed.rewardEffects[0].position[0],10,'restored effects do not alias the save input');
  game.rewardEffects[0].position[1]=999;
  assert.equal(resumed.rewardEffects[0].position[1],20);
});

test('cutscenes allow reward retirement while redraws at paused game time do not advance it',()=>{
  const game=make([entity('ItemCoin'),entity('MovingEnemy',{'%name%':'enemy',Type:'5'})]);
  game.pickup(game.objects[0]);game.destroy(game.objects[1]);
  const before=structuredClone(game.rewardEffects),camera=[0,50,200],quads=before.map(effect=>rewardScoreQuad(effect,0,camera));
  for(let frame=0;frame<120;frame++)assert.deepEqual(game.rewardEffects.map(effect=>rewardScoreQuad(effect,game.time,camera)),quads);
  assert.deepEqual(game.rewardEffects,before,'drawing cannot consume a reward or advance its timer');
  game.scripts={cutscene:true};
  for(let frame=0;frame<11;frame++)game.update(.1,[1000,0,1000]);
  assert.equal(game.rewardEffects.length,1);assert.equal(game.rewardEffects[0].kind,'enemy');
  for(let frame=0;frame<5;frame++)game.update(.1,[1000,0,1000]);
  assert.equal(game.rewardEffects.length,0,'the final enemy popup retires during dialogue as well');
});

test('effect restoration rejects malformed, future and expired records while preserving legacy saves',()=>{
  const active={kind:'pickup',score:25,position:[1,2,3],birth:9.5};
  const malformed=[null,{},'bad',42,{...active,kind:'scenery'},{...active,score:'25'},
    {...active,position:[1,2]},{...active,position:[1,NaN,3]},{...active,birth:Infinity},
    {...active,birth:11},{...active,birth:9},{...active,kind:'enemy',score:0},
    {...active,kind:'enemy',birth:8.5}];
  assert.deepEqual(restoreRewardEffects([...malformed,active],10),[active]);
  assert.deepEqual(restoreRewardEffects({effects:[active]},10),[]);
  const game=make([]),save=game.snapshot();delete save.rewardEffects;
  assert.deepEqual(make([],{save}).rewardEffects,[],'old save files remain valid without the new transient field');
  save.rewardEffects=[...malformed,active];save.time=10;
  assert.deepEqual(make([],{save}).rewardEffects,[active]);
});

test('burst pickup traffic stays bounded and keeps the newest 128 effects',()=>{
  const entities=Array.from({length:200},(_,i)=>entity('ItemCoin',{'%name%':`coin${i}`,Origin:`${i} 0 0`}));
  const game=make(entities);
  for(const object of game.objects)game.pickup(object);
  assert.equal(game.state.score,1000,'bounded visuals must never discard awarded gameplay points');
  assert.equal(game.rewardEffects.length,128);
  assert.equal(game.rewardEffects[0].position[0],72);assert.equal(game.rewardEffects.at(-1).position[0],199);
  const saved=Array.from({length:200},(_,i)=>createRewardEffect('pickup',5,[i,0,0],0));
  for(const effects of [retainRewardEffects(saved,.5),restoreRewardEffects(saved,.5)]){
    assert.equal(effects.length,128);assert.equal(effects[0].position[0],72);
  }
  assert.deepEqual(retainRewardEffects(game.rewardEffects,1),[]);
});

test('native score quads expand, rise and fade for one second on pickups or 1.5 seconds on enemies',()=>{
  assert.deepEqual(SCORE_VALUES,[5,15,25,50,75]);
  assert.deepEqual(SCORE_TEXTURES,[0,1,2,3,4].map(i=>`score${i}.bmp|score${i}_a.bmp`));
  for(const [kind,lifetime] of [['pickup',1],['enemy',1.5]]){
    const effect=createRewardEffect(kind,75,[10,20,30],2),camera=[10,100,130];
    const start=rewardScoreQuad(effect,2,camera),middle=rewardScoreQuad(effect,2+lifetime/2,camera),end=rewardScoreQuad(effect,2+lifetime-.001,camera);
    assert.deepEqual(centre(start),[10,27.5,30]);near(height(start),5);near(start.opacity,.9);
    assert.deepEqual(centre(middle),[10,61.25,30]);near(height(middle),23);near(middle.opacity,.45);
    assert.ok(height(end)>height(middle));assert.ok(centre(end)[1]>centre(middle)[1]);assert.ok(end.opacity<middle.opacity);
    assert.equal(rewardScoreQuad(effect,1.999,camera),null);
    assert.equal(rewardScoreQuad(effect,2+lifetime,camera),null,'no stale last frame after retirement');
  }
});

test('score artwork stays upright and finite under oblique or directly overhead cameras',()=>{
  const effect=createRewardEffect('pickup',25,[10,20,30],0);
  for(const camera of [[10,200,30],[10,20,30],[160,300,170],[10,-200,30]]){
    const quad=rewardScoreQuad(effect,.5,camera);
    assert.ok(quad.points.flat().every(Number.isFinite));
    for(const [bottom,top] of [[0,2],[1,4]]){
      near(quad.points[bottom][0],quad.points[top][0]);near(quad.points[bottom][2],quad.points[top][2]);
      near(quad.points[top][1]-quad.points[bottom][1],23);
    }
    assert.deepEqual(centre(quad),[10,61.25,30]);
  }
});

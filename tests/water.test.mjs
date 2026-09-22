import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {BspCollider,PlayerController} from '../src/collision.js';
import {Gameplay} from '../src/gameplay.js';
import {visibleLiquidGroup,surfaceAlphaTest,liquidDamageRate} from '../src/liquids.js';

const WATER=0x1000c,OOZE=0x2000c;
const playerMins=[-11,0,-11],playerMaxs=[11,56,11];
const level=name=>JSON.parse(readFileSync(new URL(`../data/levels/${name}/level.json`,import.meta.url)));
const liquidBox=(min=[-10,-10,-10],max=[10,10,10])=>{
  const planes=[[1,0,0,max[0]],[-1,0,0,-min[0]],[0,1,0,max[1]],[0,-1,0,-min[1]],[0,0,1,max[2]],[0,0,-1,-min[2]]];
  return {planes,nodes:planes.map((_,i)=>[-1,i===5?-2:i+1,i]),
    leaves:[{contents:0,numSides:0,firstSide:-1},{contents:WATER,numSides:0,firstSide:-1}],
    leafSides:[],models:[{root:0,min,max}]};
};
const close=(actual,expected)=>assert.ok(Math.abs(actual-expected)<1e-9,`${actual} differs from ${expected}`);
const contactLevel=(damage=1,count=1)=>{
  const collision=liquidBox();
  collision.models.unshift({...collision.models[0],root:-1});
  return {id:'lvl00a',spawn:{position:[30,0,0],orientation:0},collision,entities:[
    {classname:'%Model%','%name%':'water',Model:'1'},
    ...Array.from({length:count},(_,i)=>({classname:'Trigger','%name%':`water${i}`,DaviName:`water${i}`,Model:'water',Origin:'0 0 0',DamagePerSecond:String(damage),IsInitiallyEnabled:'1'}))
  ]};
};

test('non-solid liquid contents come from BSP cells with no collision sides',()=>{
  const collider=new BspCollider(liquidBox());
  assert.equal(collider.contents([0,0,0]),WATER);
  assert.equal(collider.contents([11,0,0]),0);
  assert.equal(collider.contents([11,0,0],[-2,-1,-1],[2,1,1]),WATER);
  assert.equal(collider.contents([13,0,0],[-2,-1,-1],[2,1,1]),0);
  assert.equal(collider.trace([20,0,0],[-20,0,0]).fraction,1,'water must not become a solid floor or wall');
});

test('hull contents clip each BSP branch instead of independently testing the original box',()=>{
  // A unit box crosses both diagonal planes separately, but cannot overlap the
  // wet wedge: x+z>=1.5 and x-z>=1.5 require x>=1.5. This catches the false
  // positives produced by testing every ancestor against the original AABB.
  const data={planes:[[1,0,1,1.5],[1,0,-1,1.5]],nodes:[[1,-1,0],[-2,-1,1]],
    leaves:[{contents:0,numSides:0},{contents:OOZE,numSides:0}],leafSides:[],
    models:[{root:0,min:[-10,-10,-10],max:[10,10,10]}]};
  const collider=new BspCollider(data);
  assert.equal(collider.contents([0,0,0],[-1,-1,-1],[1,1,1]),0);
  assert.equal(collider.contents([2,0,0],[-.1,-1,-.1],[.1,1,.1]),OOZE);
  assert.equal(collider.contents([1.4,0,0],[-.2,-1,-.2],[.2,1,.2]),OOZE);
});

test('a concave moat leaves the dry inner corner clear and combines intersected contents',()=>{
  const data=liquidBox();
  data.nodes[5][1]=6;
  data.planes.push([1,0,0,0],[0,0,1,0]);
  data.nodes.push([7,-2,6],[-1,-3,7]);
  data.leaves.push({contents:OOZE,numSides:0,firstSide:-1});
  const collider=new BspCollider(data);
  assert.equal(collider.contents([5,0,5],[-2,-2,-2],[2,2,2]),0);
  assert.equal(collider.contents([-5,0,5],[-2,-2,-2],[2,2,2]),WATER);
  assert.equal(collider.contents([5,0,-5],[-2,-2,-2],[2,2,2]),OOZE);
  assert.equal(collider.contents([0,0,-5],[-2,-2,-2],[2,2,2]),WATER|OOZE);
  assert.equal(collider.contents([20,0,-5],[-2,-2,-2],[2,2,2]),0);
});

test('liquid hulls follow translated and rotated models without filling the rotated bounding box',()=>{
  const data=liquidBox([-10,-2,-2],[10,2,2]);
  data.models.push({...data.models[0]});
  const collider=new BspCollider(data);
  collider.modelTransforms.set(1,{origin:[0,0,0],translation:[50,4,-20],rotation:[0,Math.sin(Math.PI/8),0,Math.cos(Math.PI/8)]});
  assert.equal(collider.contents([54,4,-24],[-.2,-.2,-.2],[.2,.2,.2],[1]),WATER);
  assert.equal(collider.contents([57,4,-13],[-.2,-.2,-.2],[.2,.2,.2],[1]),0);
  assert.equal(collider.contents([0,0,0],undefined,undefined,[1]),0);
  collider.modelTransforms.set(0,{translation:[1000,0,0]});
  assert.equal(collider.contents([0,0,0]),WATER,'model zero remains the stationary world');
  collider.disabledModels.add(1);
  assert.equal(collider.contents([54,4,-24],undefined,undefined,[1]),0);
});

test('original forest streams expose their nonblocking authored water cells',()=>{
  const data=level('lvl00a'),collider=new BspCollider(data.collision);
  for(const [model,position,top] of [[56,[-1811.5,-164.95,1264],-143],[57,[-1240,-183.95,1355],-156]]){
    assert.equal(collider.contents(position,playerMins,playerMaxs,[model]),WATER);
    assert.equal(collider.trace(position,position,playerMins,playerMaxs).startSolid,false);
    assert.equal(collider.trace(position,position,playerMins,playerMaxs,[model]).startSolid,false);
    assert.equal(collider.contents([position[0],top+1,position[2]],playerMins,playerMaxs,[model]),0,'jumping clear of the surface ends contact');
    const modelData=data.collision.models[model];
    const wetLeaves=data.collision.leaves.slice(modelData.firstLeaf,modelData.firstLeaf+modelData.numLeaves).filter(leaf=>leaf.contents&0x10000);
    assert.ok(wetLeaves.length);
    assert.ok(wetLeaves.every(leaf=>leaf.numSides===0),'the liquid deliberately has no solid collision sides');
  }
});

test('original shaped forest pool does not damage dry corners inside its bounds',()=>{
  const data=level('lvl00a'),collider=new BspCollider(data.collision),bounds=data.collision.models[57];
  for(const position of [[-1250,-170,1500],[-930,-170,1200],[-950,-170,1520]]){
    assert.ok(position.every((value,i)=>value>bounds.min[i]&&value<bounds.max[i]));
    assert.equal(collider.contents(position,playerMins,playerMaxs,[57]),0);
  }
  assert.equal(collider.contents([-1000,-170,1450],playerMins,playerMaxs,[57]),WATER);
});

test('original castle moat is ooze while banks and the bridge remain dry',()=>{
  const data=level('lvl01a'),collider=new BspCollider(data.collision);
  for(const position of [[200,-151.95,1650],[300,-151.95,1600],[-84,-151.95,1450]]){
    assert.equal(collider.contents(position,playerMins,playerMaxs),OOZE);
    assert.equal(collider.trace(position,position,playerMins,playerMaxs).startSolid,false);
    assert.equal(collider.contents([position[0],-123,position[2]],playerMins,playerMaxs)&0x20000,0);
  }
  for(const position of [[0,-31.95,1650],[-84,-31.95,1247],[-416,-45.95,2648]]){
    assert.equal(collider.contents(position,playerMins,playerMaxs)&0x70000,0);
    const player=new PlayerController(collider,position);
    for(let frame=0;frame<60;frame++)player.update(1/60,{forward:0,right:0},0);
    assert.ok(player.grounded);
    assert.equal(collider.contents(player.position,playerMins,playerMaxs)&0x70000,0);
  }
});

test('original water surfaces remain visible, keyed and nonblocking',()=>{
  const forest=level('lvl00a'),castle=level('lvl01a');
  const game=new Gameplay(forest,{deferInit:true});
  for(const model of [56,57]){
    const groups=forest.groups.filter(group=>group.model===model);
    assert.ok(groups.some(group=>visibleLiquidGroup(group,forest.textures)));
    assert.equal(game.modelState(model).visible,true);
    assert.equal(game.modelState(model).solid,false);
  }
  for(const [data,model,texture,opacity] of [[forest,56,17,125/255],[forest,57,17,125/255],[castle,0,53,115/255]]){
    const groups=data.groups.filter(group=>group.model===model&&group.texture===texture&&group.alpha>0&&group.alpha<1);
    assert.ok(groups.length);
    for(const group of groups){
      close(group.alpha,opacity);
      const threshold=surfaceAlphaTest(group,data.textures[texture]);
      assert.ok(threshold>0,'palette-key holes must still be rejected');
      assert.ok(opacity>=threshold,'authored opaque water pixels survive material opacity');
      assert.ok(0<threshold,'transparent key pixels do not survive');
    }
  }
  assert.equal(visibleLiquidGroup({texture:17,alpha:0},forest.textures),false);
  assert.equal(visibleLiquidGroup({texture:17,alpha:1},forest.textures),false,'an opaque editor brush is not water artwork');
  assert.equal(visibleLiquidGroup({texture:0,alpha:.5},[{name:'stone'}]),false);
  assert.equal(surfaceAlphaTest({alpha:1},{colorKey:true}),.5,'foliage retains the original cutout');
});

test('contents damage uses ooze and death flags independently of plain water',()=>{
  assert.equal(liquidDamageRate(0x1000c),0);
  assert.equal(liquidDamageRate(OOZE),3);
  assert.equal(liquidDamageRate(0x5000c),200);
  assert.equal(liquidDamageRate(0x60001),203);
  assert.equal(liquidDamageRate(OOZE,{game:{Player:{OozeDamagePerSecond:7}}}),7);
});

test('trigger damage is continuous and frame-rate independent while leaving stops it immediately',()=>{
  for(const fps of [10,30,60,144]){
    const events=[],game=new Gameplay(contactLevel(),{onEvent:event=>events.push(event)});
    for(let i=0;i<fps*2;i++)game.update(1/fps,[0,0,0]);
    close(game.state.health,8);
    const reactions=events.filter(event=>event.type==='damage');
    assert.ok(reactions.length<=4,'continuous damage must not restart its sound every frame');
    for(let i=0;i<fps;i++)game.update(1/fps,[50,0,0]);
    close(game.state.health,8);
  }
});

test('the real forest trigger applies one health per second only inside the shaped pool',()=>{
  const source=level('lvl00a');
  const data={...source,entities:source.entities.filter(entity=>entity.classname==='%Model%'||entity.DaviName==='lichtwater2')};
  const game=new Gameplay(data,{deferInit:true});
  const trigger=game.find('lichtwater2')[0];assert.ok(trigger);
  for(let i=0;i<60;i++)game.update(1/60,[-1240,-183.95,1355]);
  close(game.state.health,9);
  for(let i=0;i<60;i++)game.update(1/60,[-1250,-170,1500]);
  close(game.state.health,9,'enclosing-box contact cannot damage a dry corner');
  assert.equal(trigger.inside,false);
});

test('environmental damage continues during hit immunity and preserves fractional health through save/load',()=>{
  const data=contactLevel();data.entities=[];
  const game=new Gameplay(data);
  game.damage(1,'enemy');assert.ok(game.hitCooldown>0);
  game.update(.1,[0,0,0],{environmentContents:OOZE});
  close(game.state.health,8.7);
  game.damage(1,'enemy');close(game.state.health,8.7,'ordinary hits still honor the cooldown');
  const restored=new Gameplay(data,{save:JSON.parse(JSON.stringify(game.snapshot()))});
  close(restored.state.health,8.7);close(restored.environmentFeedbackCooldown,game.environmentFeedbackCooldown);
  for(let i=0;i<9;i++)restored.update(.1,[0,0,0],{environmentContents:OOZE});
  close(restored.state.health,6);
  for(let i=0;i<10;i++)restored.update(.1,[0,0,0],{environmentContents:0});
  close(restored.state.health,6);
});

test('cutscenes and completed levels do not accumulate environmental damage',()=>{
  const data=contactLevel();data.entities=[];
  const game=new Gameplay(data);
  game.scripts={cutscene:true};
  for(let i=0;i<20;i++)game.update(.1,[0,0,0],{environmentContents:OOZE});
  close(game.state.health,10);
  game.scripts=null;
  game.update(.1,[0,0,0],{environmentContents:OOZE});close(game.state.health,9.7);
  game.completed=true;
  for(let i=0;i<20;i++)game.update(.1,[0,0,0],{environmentContents:OOZE});
  close(game.state.health,9.7);
});

test('lethal water consumes one life even when death immediately respawns the player',()=>{
  for(const intrinsic of [false,true]){
    const deaths=[];let game;
    game=new Gameplay(contactLevel(200,2),{onEvent:event=>{if(event.type==='death'){deaths.push(event);game.respawn();}}});
    game.update(.1,[0,0,0],{environmentContents:intrinsic?0x40000:0});
    assert.equal(deaths.length,1);
    assert.equal(game.state.lives,2);
    assert.equal(game.state.health,10,'remaining old-position damage must not hit the respawn');
  }
});

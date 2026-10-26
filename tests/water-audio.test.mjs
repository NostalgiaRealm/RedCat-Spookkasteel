import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {GameplayAudio} from '../src/gameplay-audio.js';
import {BspCollider,PlayerController,PLAYER_JUMP} from '../src/collision.js';
import {landingSound} from '../src/locomotion-audio.js';

const level=id=>JSON.parse(readFileSync(new URL(`../data/levels/${id}/level.json`,import.meta.url)));
function fixture(id='lvl00a',position=[-1810,-164.95,1250]) {
  const game=new Gameplay(level(id),{deferInit:true}),events=[];
  const world={yaw:0,player:{position:[...position],grounded:true,stepDisplacement:3.66},collider:new BspCollider(game.level.collision)};
  for(const index of game.liquidModels)if(index&&!game.modelState(index).solid)world.collider.disabledModels.add(index);
  const router=new GameplayAudio({keyed:new Map(),setPlayerListener(){},play:event=>events.push(event)});
  return {game,world,events,router,run(input={forward:1}){for(let i=0;i<60;i++)router.update(1/60,world,game,input);return events.map(e=>e.sound);}};
}

test('both nonblocking forest pools supply water footsteps despite solid-collision exclusion',()=>{
  for(const [model,position] of [[56,[-1810,-164.95,1250]],[57,[-1000,-170,1450]]]){
    const f=fixture('lvl00a',position);
    assert.ok(f.world.collider.disabledModels.has(model));
    assert.equal(f.world.collider.contents(position,[0,0,0],[0,1,0],[model])&0x10000,0,'reproduce original port failure');
    assert.equal(f.game.playerContactContents(position)&0x10000,0x10000);
    assert.deepEqual(f.run(),['rclwater.wav','rcrwater.wav']);
    assert.equal(f.world.collider.trace(position,position.map((v,i)=>i===2?v+10:v),[0,0,0],[0,0,0],[model]).fraction,1);
  }
});

test('all levels select liquid contact from contents rather than visible texture names',()=>{
  const expected=[[0,56,57],[0],[],[0,211],[]];
  for(let i=0;i<5;i++){
    const game=new Gameplay(level(`lvl0${i}a`),{deferInit:true});
    assert.deepEqual(game.liquidContactModels,expected[i]);
    for(const index of game.liquidModels){
      const model=game.level.collision.models[index],p=model.min.map((v,i)=>(v+model.max[i])/2);
      if(!expected[i].length)assert.equal(game.playerContactContents(p),0,'water artwork alone does not author a splash');
    }
  }
});

test('banks, shaped-pool dry corners, bridge decks and airborne feet do not splash',()=>{
  for(const position of [[-1734.56,-136.95,1170.02],[-1250,-170,1500],[-930,-170,1200],[-1810,-140,1250]]){
    const f=fixture('lvl00a',position);
    assert.equal(f.game.playerContactContents(position)&0x10000,0);
    assert.deepEqual(f.run(),['rcwalk1.wav','rcwalk2.wav']);
  }
  const bridge=fixture('lvl01a',[0,-31.95,1650]);
  assert.equal(bridge.game.playerContactContents(bridge.world.player.position)&0x30000,0);
  assert.deepEqual(bridge.run(),['rcwalk1.wav','rcwalk2.wav']);
  const air=fixture();air.world.player.grounded=false;assert.deepEqual(air.run(),[]);
});

test('water walking and ooze retain original dry sound slots; no steps while stopped or in no-clip',()=>{
  assert.deepEqual(fixture().run({forward:1,walk:true}),['rcwalk1.wav']);
  const ooze=fixture('lvl01a',[200,-151.95,1650]);
  assert.equal(ooze.game.playerContactContents(ooze.world.player.position)&0x20000,0x20000);
  assert.deepEqual(ooze.run(),['rcwalk1.wav','rcwalk1.wav']);
  const stopped=fixture();stopped.world.player.stepDisplacement=0;assert.deepEqual(stopped.run(),[]);
  const noClip=fixture();noClip.world.player.noClip=true;assert.deepEqual(noClip.run(),[]);
});

test('water contact follows its brush pose without changing the collision exclusion set',()=>{
  const f=fixture(),original=[...f.world.player.position],moved=original.map((v,i)=>v+(i===0?2000:0));
  f.game.scripts={modelTransforms:new Map([[56,{origin:[0,0,0],translation:[2000,0,0],rotation:[0,0,0,1]}]])};
  assert.equal(f.game.playerContactContents(original)&0x10000,0);
  assert.equal(f.game.playerContactContents(moved)&0x10000,0x10000);
  assert.ok(f.world.collider.disabledModels.has(56));
});

test('liquid jump and landing use native contact slots with impact-scaled landing gain',()=>{
  const jumpSpeed=Math.sqrt(2*PLAYER_JUMP.gravity*PLAYER_JUMP.height);
  for(const contents of [0x10000,0x20000,0x30000]) {
    assert.equal(landingSound(jumpSpeed*.049,contents),null);
    assert.deepEqual(landingSound(jumpSpeed,contents),{sound:'rcwalk1.wav',volume:.5});
    assert.deepEqual(landingSound(jumpSpeed*3,contents),{sound:'rcwalk1.wav',volume:1});
  }
  assert.deepEqual(landingSound(jumpSpeed,0),{sound:'rcland1.wav',volume:.5},'dry ground has its own landing sound');
  for(const [id,position,expected] of [
    ['lvl00a',[-1810,-164.95,1250],'rcwalk1.wav'],
    ['lvl01a',[200,-151.95,1650],'rcwalk1.wav'],
    ['lvl00a',[-1710,-136.95,1190],'rcjump1.wav']
  ]) {
    const f=fixture(id,position);
    f.router.handle({type:'jump',position},f.game);
    assert.equal(f.events[0].sound,expected);
    f.router.handle({type:'land',position,impactSpeed:jumpSpeed},f.game);
    assert.deepEqual(f.events.slice(1),[{sound:expected==='rcwalk1.wav'?'rcwalk1.wav':'rcland1.wav',volume:.5,group:'player:land'}]);
  }
});

test('real pool contact emits one landing per fall, with no repeats while supported or in no-clip',()=>{
  for(const hz of [30,60,120]) {
    const f=fixture(),p=new PlayerController(f.world.collider,[-1810,-164.95,1250],[0,56,57]);
    p.grounded=true;
    p.update(1/hz,{jump:true},0);
    assert.equal(p.didJump,'normal');assert.equal(p.didLand,null);
    let landings=0;
    for(let i=0;i<hz;i++) {
      p.update(1/hz,{},0);
      if(p.didLand>0){
        landings++;
        assert.ok(p.didLand>240&&p.didLand<290,'full takeoff/landing speed retained');
        f.router.handle({type:'land',position:p.position,impactSpeed:p.didLand},f.game);
      }
    }
    assert.equal(landings,1);assert.equal(f.events.length,1);assert.equal(f.events[0].sound,'rcwalk1.wav');
    assert.ok(f.events[0].volume>.46&&f.events[0].volume<.57);
    p.noClip=true;p.update(1/hz,{descend:true},0);assert.equal(p.didLand,null);
    p.didLand=100;p.restoreMotion(p.snapshotMotion());assert.equal(p.didLand,null,'loading does not replay a contact');
  }
});

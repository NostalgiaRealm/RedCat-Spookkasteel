import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Gameplay} from '../src/gameplay.js';
import {PlayerController} from '../src/collision.js';

const level=JSON.parse(readFileSync(new URL('../data/levels/lvl03a/level.json',import.meta.url)));
const idle={forward:0,right:0};
const clear={
  slide:(position,delta)=>({position:position.map((v,i)=>v+delta[i]),hits:[],models:[]}),
  trace:(a,b)=>({fraction:1,end:[...b],normal:[0,1,0],modelIndex:null}),
};
const close=(a,b)=>assert.ok(Math.abs(a-b)<1e-7,`${a} != ${b}`);

test('the authored vertical fan refreshes an airborne launch every tick at 20, 60 and 120 Hz',()=>{
  const game=new Gameplay(level,{deferInit:true}),fan=game.find('wind03')[0];
  const wind=game.environmentVelocity(fan.position);assert.deepEqual(wind,[0,160,-32]);
  for(const dt of [1/20,1/60,1/120]){
    const player=new PlayerController(clear,fan.position),start=[...player.position];
    player.velocityY=-400;player.grounded=false;player.environmentVelocity=wind;
    for(let i=0;i<12;i++)player.update(dt,idle,0);
    close(player.position[1]-start[1],12*dt*(320-400*dt));
    close(player.position[2]-start[2],12*dt*(-64));
    close(player.velocityY,160-800*dt);assert.equal(player.grounded,false);
  }
});

test('leaving or disabling the fan removes external speed but preserves the launched flight',()=>{
  const game=new Gameplay(level,{deferInit:true}),fan=game.find('wind03')[0];
  const player=new PlayerController(clear,fan.position);player.environmentVelocity=game.environmentVelocity(fan.position);
  player.update(.025,idle,0);
  const before=[...player.position],velocity=player.velocityY;
  game.command(fan,'disable');player.environmentVelocity=game.environmentVelocity(fan.position);
  assert.deepEqual(player.environmentVelocity,[0,0,0]);
  player.update(.025,idle,0);
  close(player.position[1]-before[1],(velocity-400*.025)*.025);
  close(player.position[2]-before[2],-32*.025);
  close(player.velocityY,velocity-800*.025);
  player.resetVelocity();assert.equal(player.velocityY,0);assert.deepEqual(player.launchVelocityXZ,[0,0]);
});

test('fan flight respects ceiling and floor collision, clears carry on landing and ignores wind in noclip',()=>{
  const collider={...clear,trace(a,b){
    const upper=b[1]>100,lower=b[1]<0;
    if(!upper&&!lower)return clear.trace(a,b);
    const y=upper?100:0,fraction=(y-a[1])/(b[1]-a[1]);
    return {fraction,end:[b[0],y,b[2]],normal:[0,upper?-1:1,0],modelIndex:0};
  }};
  const player=new PlayerController(collider,[0,98,0]);player.environmentVelocity=[0,160,-32];
  player.update(.025,idle,0);assert.equal(player.position[1],100);assert.equal(player.velocityY,0);
  player.environmentVelocity=[0,0,0];
  for(let i=0;i<60&&!player.grounded;i++)player.update(.025,idle,0);
  assert.equal(player.grounded,true);assert.equal(player.position[1],0);assert.deepEqual(player.launchVelocityXZ,[0,0]);
  player.environmentVelocity=[0,160,-32];player.update(.025,idle,0);
  player.noClip=true;const before=[...player.position];player.update(.025,idle,0);
  assert.deepEqual(player.position,before);assert.equal(player.velocityY,0);assert.deepEqual(player.launchVelocityXZ,[0,0]);
});

test('midpoint gravity retains the original ordinary jump height of 1.3 metres',()=>{
  const player=new PlayerController(clear,[0,0,0]);player.grounded=true;
  const speed=Math.sqrt(2*800*41.6),dt=speed/800/20;
  for(let i=0;i<20;i++)player.update(dt,{...idle,jump:i===0},0);
  close(player.position[1],41.6);close(player.velocityY,0);
  assert.deepEqual(player.launchVelocityXZ,[0,0]);
});

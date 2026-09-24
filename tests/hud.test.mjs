import test from 'node:test';import assert from 'node:assert/strict';import{readFileSync}from'node:fs';
import {hudCommands,enemyPortrait,hudViewport} from '../src/hud.js';
const manifest=JSON.parse(readFileSync(new URL('../assets/hud/manifest.json',import.meta.url)));
const state={health:7,maxHealth:10,lives:3,potions:4,score:9000};
test('original HUD atlas uses full/half/empty hearts, life, potion level total and score',()=>{
 const commands=hudCommands(manifest,state,15,null);
 assert.deepEqual(commands.filter(c=>c.name==='HealthContainer').map(c=>c.frame),[0,0,0,1,2]);
 for(const[name,frames]of Object.entries({LifeNumber:[3],PotionNumber:[4],TotalPotionNumber:[1,5],ScoreNumber:[9,0,0,0]}))assert.deepEqual(commands.filter(c=>c.name===name).map(c=>c.frame),frames);
 assert.equal(commands.some(c=>c.name==='EnemyHealth'),false);
 assert.deepEqual(commands.filter(c=>c.name==='HealthContainer').map(c=>c.x),[45,87,129,171,213]);
 assert.equal(enemyPortrait({enemyType:'knight'}),14);assert.equal(enemyPortrait({enemyType:'guardian'}),15);
 for(const c of commands){assert.ok(c.sx>=0&&c.sy>=0&&c.sx+c.w<=256&&c.sy+c.h<=256,JSON.stringify(c));}
});
test('widescreen leaves health at left, counters at right, enemy meter at bottom',()=>{
 const enemy={enemyType:'witch',health:5,maxHealth:10},commands=hudCommands(manifest,state,15,enemy,960,540);
 assert.equal(commands.find(c=>c.name==='HealthIcon').x,5);
 assert.equal(commands.find(c=>c.name==='PotionIcon').x,830);
 assert.equal(commands.find(c=>c.name==='EnemyPortrait').y,495);
 assert.equal(commands.find(c=>c.name==='EnemyPortrait').frame,16);
 assert.deepEqual(commands.filter(c=>c.name==='EnemyHealth').map(c=>c.frame),[0,0,1,2,2]);
 assert.equal(enemyPortrait({enemyType:'spider',entity:{SubType:'3'}}),8);
});

test('portrait HUD fits health and counters and leaves room above touch controls for the enemy meter',()=>{
 for(const [width,height,pixelRatio] of [[390,844,1],[320,568,1],[390,844,3],[844,390,2]]){
  const viewport=hudViewport(manifest,width*pixelRatio,height*pixelRatio,width*pixelRatio,height*pixelRatio,{bottomInset:200,pixelRatio});
  const commands=hudCommands(manifest,state,50,{enemyType:'witch',health:7,maxHealth:10},viewport.logicalWidth,viewport.logicalHeight);
  for(const c of commands){
   const x=(viewport.x+c.x*viewport.scale)/pixelRatio,y=(viewport.y+c.y*viewport.scale)/pixelRatio;
   assert.ok(x>=0&&y>=0&&x+c.w*viewport.scale/pixelRatio<=width&&y+c.h*viewport.scale/pixelRatio<=height,`${width}x${height}: ${c.name}`);
   if(c.name.startsWith('Enemy'))assert.ok(y+c.h*viewport.scale/pixelRatio<=height-190,'enemy meter clears touch controls');
  }
  assert.equal(viewport.logicalWidth>=640,true);
 }
});

test('desktop widescreen and letterboxed HUD keep the original scale and anchors',()=>{
 const wide=hudViewport(manifest,1920,1080,1920,1080);
 assert.equal(wide.scale,2.25);assert.equal(wide.logicalHeight,480);assert.equal(wide.x,0);assert.equal(wide.y,0);
 const classic=hudViewport(manifest,1280,720,1024,768);
 assert.deepEqual(classic,{scale:1.5,x:160,y:0,logicalWidth:640,logicalHeight:480});
});

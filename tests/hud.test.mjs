import test from 'node:test';import assert from 'node:assert/strict';import{readFileSync}from'node:fs';
import{hudCommands,enemyPortrait}from'../src/hud.js';
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

import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {MeshLambertMaterial,Texture,DoubleSide,FrontSide} from 'three';
import {ghostMaterials,isGhostEnemy} from '../src/ghost-materials.js';

test('ghost material replacement uses native variant tints and leaves shared material and fades independent',()=>{
  const skin=new Texture(),body=new MeshLambertMaterial({map:skin,color:0x778899,side:DoubleSide,opacity:.6,alphaTest:.3}),extra=new MeshLambertMaterial(),replacement=new Texture(),tracked=[];
  for(const [variant,colour] of [[1,[0,1,0]],[2,[1,1,0]],[3,[1,0,0]]]){
    const materials=ghostMaterials([body,extra],replacement,variant,m=>(tracked.push(m),m));
    assert.notEqual(materials[0],body);assert.equal(materials[0].map,replacement);assert.deepEqual(materials[0].color.toArray(),colour);
    assert.equal(materials[0].transparent,true);assert.equal(materials[0].depthWrite,false);assert.equal(materials[0].side,FrontSide);
    assert.ok(materials[0].alphaTest<8/255,'the original faint face samples are not discarded');
    assert.equal(materials[0].opacity,.6,'an existing instance fade still multiplies authored alpha');
    assert.equal(materials[1],extra,'native material replacement only touches slot zero');
  }
  assert.equal(tracked.length,3);assert.equal(new Set(tracked).size,3);
  tracked[0].opacity=.1;assert.equal(tracked[1].opacity,.6);
  assert.equal(body.map,skin);assert.equal(body.transparent,false);assert.equal(body.depthWrite,true);assert.equal(body.alphaTest,.3);assert.equal(body.side,DoubleSide);
});

test('classification follows the original ghost enemy type, never the object name or actor art',()=>{
  const level=JSON.parse(readFileSync(new URL('../data/levels/lvl02a/level.json',import.meta.url)));
  const namedGhost=level.entities.find(e=>e.DaviName==='ghost1'),namedZombie=level.entities.find(e=>e.DaviName==='zombie6');
  assert.equal(namedGhost.Type,'4');assert.equal(namedZombie.Type,'3');
  assert.equal(isGhostEnemy({kind:'enemy',enemyType:'zombie',entity:namedGhost}),false);
  assert.equal(isGhostEnemy({kind:'enemy',enemyType:'ghost',entity:namedZombie}),true);
  assert.equal(isGhostEnemy({kind:'actor',actorFile:'ghostg',entity:{DaviName:'ghost'}}),false);
  assert.equal(isGhostEnemy(null),false);
});

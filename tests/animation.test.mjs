import test from 'node:test';import assert from 'node:assert/strict';import {readFileSync} from 'node:fs';import * as THREE from 'three';import {ActorAnimator} from '../src/animation.js';
const data=JSON.parse(readFileSync(new URL('../assets/actors/redcat.json',import.meta.url)));
function geometry(){const g=new THREE.BufferGeometry();g.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));g.setAttribute('normal',new THREE.Float32BufferAttribute(data.normals,3));return g;}
test('all 16 original RedCat clips produce finite, bounded animated geometry',()=>{
 assert.equal(data.animations.length,16);const g=geometry(),a=new ActorAnimator(data,g);
 for(const clip of data.animations){assert.ok(a.play(clip.name));for(let i=0;i<8;i++){
 a.update(clip.duration/8);assert.ok(g.attributes.position.array.every(Number.isFinite));assert.ok(g.boundingSphere.radius<150);
 const n=g.attributes.normal.array;for(let j=0;j<n.length;j+=3)assert.ok(Math.abs(Math.hypot(n[j],n[j+1],n[j+2])-1)<0.01);
 }}
});
test('animation advances vertices, loops and keeps instance poses separate',()=>{
 const first=geometry(),second=geometry(),a=new ActorAnimator(data,first),b=new ActorAnimator(data,second);a.play('walkfw');b.play('idle');const before=[...first.attributes.position.array],other=[...second.attributes.position.array];a.update(.3);
 assert.notDeepEqual([...first.attributes.position.array],before);assert.deepEqual([...second.attributes.position.array],other);a.update(1000);assert.ok(a.time<a.clip.duration);
});
test('one-shot animation finishes without producing invalid samples',()=>{const a=new ActorAnimator(data,geometry());a.play('death',false);a.update(100);assert.ok(a.finished);assert.equal(a.time,a.clip.duration);});

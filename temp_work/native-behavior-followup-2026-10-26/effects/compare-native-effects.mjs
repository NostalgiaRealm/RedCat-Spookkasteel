import fs from 'node:fs';
import path from 'node:path';
import {fileURLToPath} from 'node:url';
import assert from 'node:assert/strict';
import {deathSmokeParticle} from '../../../src/enemy-death-effects.js';
import {jesterTeleportParticles} from '../../../src/enemy-combat-effects.js';

const work=path.dirname(fileURLToPath(import.meta.url));
const read=name=>JSON.parse(fs.readFileSync(path.join(work,name)));
const smoke=read('native-death-smoke-frames.json'),jester=read('native-jester-frames.json');
const result={boundary:'Unmodified original particle/emitter instructions in private Unicorn memory; supplied floor/phase initialization. No Windows/game-loop or original screenshot comparison.',
  deathSmoke:{frames:smoke.frames.length,counts:0,alpha:0,size:0,maxPosition:0},
  jester:{frames:0,samples:0,counts:0,alpha:0,size:0,maxPosition:0}};
for(const frame of smoke.frames) {
  const actual=deathSmokeParticle(0,frame.tick/60,[0,0,0]),r=result.deathSmoke;
  if(Boolean(actual)!==Boolean(frame.active))r.counts++;
  if(actual&&frame.active) {
    if(Math.round(actual.opacity*255)!==frame.alpha)r.alpha++;
    if(actual.size!==2*Math.fround(20*frame.remaining+60*(1-frame.remaining)))r.size++;
    r.maxPosition=Math.max(r.maxPosition,...actual.position.map((v,k)=>Math.abs(v-frame.position[k])));
  }
}
for(const phase of ['departure','arrival'])for(const frame of jester[phase]) {
  const actual=jesterTeleportParticles({phase,age:frame.tick/60,position:[0,0,0]}),r=result.jester;r.frames++;
  if(actual.length!==frame.particles.length){r.counts++;continue;}
  actual.forEach((p,i)=>{
    r.samples++;const q=frame.particles[i];
    if(Math.round(p.opacity*255)!==q.alpha)r.alpha++;
    const size=2*Math.fround((phase==='arrival'?5:40)*q.remaining+(phase==='arrival'?40:5)*(1-q.remaining));
    if(p.size!==size)r.size++;
    r.maxPosition=Math.max(r.maxPosition,...p.position.map((v,k)=>Math.abs(v-q.position[k])));
  });
}
fs.writeFileSync(path.join(work,'native-effects-differential-report.json'),JSON.stringify(result,null,2)+'\n');
for(const r of [result.deathSmoke,result.jester]){assert.equal(r.counts,0);assert.equal(r.alpha,0);assert.equal(r.size,0);assert.ok(r.maxPosition<.0005);}
console.log(JSON.stringify(result,null,2));

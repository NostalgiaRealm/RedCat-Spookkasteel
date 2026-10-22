import {readFileSync} from 'node:fs';
import {MotionPlayer} from '../../../src/motions.js';
const json=JSON.parse(readFileSync('data/motions/lvl01a.json'));
for(const m of json.motions.filter(m=>/kogel/.test(m.name))){let p=new MotionPlayer(m);let rows=[];for(let t=0;t<=m.duration;t+=.125){const s=p.sample(t);const c=m.origin.map((v,i)=>v+s.translation[i]);rows.push([t,...c.map(v=>Math.round(v*10)/10)]);}console.log(m.name,JSON.stringify(rows));}

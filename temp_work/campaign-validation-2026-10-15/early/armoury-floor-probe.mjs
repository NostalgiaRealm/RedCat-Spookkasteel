import {readFileSync} from 'node:fs';
import {BspCollider} from '../../../src/collision.js';
const level=JSON.parse(readFileSync('data/levels/lvl01a/level.json'));
const c=new BspCollider(level.collision);
const xs=[1500,1512,1528,1544,1560,1576,1592,1608,1624,1640,1656];
for(let z=80;z<=640;z+=16){let row=xs.map(x=>{let t=c.trace([x,100,z],[x,-220,z],[0,0,0],[0,0,0],[0]);return t.startSolid?'wall':Math.round(t.end[1])});console.log(JSON.stringify({z,h:row}));}

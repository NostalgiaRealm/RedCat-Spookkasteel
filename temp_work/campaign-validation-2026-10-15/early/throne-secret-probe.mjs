import {readFileSync} from 'node:fs';
import {BspCollider} from '../../../src/collision.js';
const c=new BspCollider(JSON.parse(readFileSync('data/levels/lvl01a/level.json')).collision);
for(let z=-1840;z<=-1120;z+=32){let row=[];for(let x=-448;x<=-272;x+=16){let h=c.trace([x,180,z],[x,40,z],[0,0,0],[0,0,0],[0]);row.push(h.startSolid?'X':Math.round(h.end[1]));}console.log(z,JSON.stringify(row));}

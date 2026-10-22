import {readFileSync} from 'node:fs';
import {BspCollider} from '../../../src/collision.js';
const c=new BspCollider(JSON.parse(readFileSync('data/levels/lvl01a/level.json')).collision);
for(let z=-432;z>=-576;z-=16){let row=[];for(let x=128;x<=304;x+=16){let h=c.trace([x,110,z],[x,-64,z],[0,0,0],[0,0,0],[0]);row.push(h.startSolid?'X':Math.round(h.end[1]));}console.log(z,JSON.stringify(row));}

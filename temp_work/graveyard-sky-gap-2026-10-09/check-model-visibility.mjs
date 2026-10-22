import {readFileSync} from 'node:fs';
import {BspVisibility} from '../../src/bsp-visibility.js';
const root='data/',l=JSON.parse(readFileSync(root+'levels/lvl02a/level.json')),m=JSON.parse(readFileSync(root+'visibility/lvl02a.json'));
const b=new BspVisibility(l.collision,m,new Uint8Array(readFileSync(root+'visibility/lvl02a.bin')));
for(const p of [[2240.679048124565,105.26586600094487,528.412264482492],[932,592,-1100],[932,592,-700]]){
 b.update(p,p);console.log(p,'leaf',b.findLeaf(p),'active',b.active,'models',[50,51].map(id=>({id,visible:b.boundsVisible(m.modelBounds[id].slice(0,3),m.modelBounds[id].slice(3,6))})));
}

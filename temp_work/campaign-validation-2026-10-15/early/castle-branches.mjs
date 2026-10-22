import fs from 'node:fs';
import {DaviVM} from '../../../src/davi-vm.js';
const p=JSON.parse(fs.readFileSync('data/davi/lvl01a.json'));
const defs=new Map([...p.functions,...p.classes.flatMap(c=>c.members)].map(f=>[f.name,f]));
const calls=[];const host={resolveObject:name=>({daviName:name}),callMethod(o,n,a){calls.push([o.daviName,n,a]);return defs.get(n).type.code===4?o:defs.get(n).type.code===3?'':0},callNative(n,a){calls.push([n,a]);return n==='RcHasAllPotions'?0:defs.get(n).type.code===3?'':0}};
const vm=new DaviVM(p,host);vm.initialize();calls.length=0;
for(const event of p.classes.flatMap(c=>c.members))for(const h of event.handlers||[]){if(!/choice|Max|doorendboss|Mirror|TRcamera/.test(h.owner.name))continue;vm.dispatch(h.owner.name,event.name,h.parameters.filter(x=>x.name!=='@self').map(x=>x.type.code===3?'':0));console.log(h.owner.name,event.name,JSON.stringify(calls.splice(0)));}
for(const f of p.functions.filter(f=>f.kind==='function'&&/CSL103|CSL104|CSL105|CSL106|EndLevel/.test(f.name))){for(const label of new Set(f.instructions.flatMap(i=>[i.a,i.b,i.source,i.rhs]).filter(e=>e?.tag===0&&e.type===3).map(e=>e.value))){vm.call(f.name,[label,0]);console.log(f.name,label,JSON.stringify(calls.splice(0)));}}

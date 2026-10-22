import {readFileSync,writeFileSync} from 'node:fs';
import {DaviVM} from '../../src/davi-vm.js';
const dir=new URL('./',import.meta.url),root=new URL('../../',dir);
const read=p=>JSON.parse(readFileSync(new URL(p,root)));
const maps=read('current_work/replayed-level-intros-2026-10-05/branch-map.json'),dialogue=read('data/dialogue/nl.json'),out=[];
for(const branch of maps){
 const program=read(`data/davi/${branch.level}.json`),level=read(`data/levels/${branch.level}/level.json`);
 const definitions=new Map([...program.functions,...program.classes.flatMap(c=>c.members)].map(f=>[f.name,f]));
 const tokens=new Map(),calls=[];
 const result=definition=>definition.type.code===3?'':definition.type.code===4?null:0;
 const host={resolveObject(name){if(!tokens.has(name))tokens.set(name,{daviName:name});return tokens.get(name);},callMethod(object,name,args){calls.push({object:object.daviName,name,args});return result(definitions.get(name));},callNative(name,args){calls.push({name,args});return name==='GetGameType'?1:result(definitions.get(name));}};
 const vm=new DaviVM(program,host);vm.initialize();calls.length=0;
 const entry={level:branch.level,check:[],cutscenes:[]};
 if(vm.functions.has('checkgamestate')){vm.call('CheckGameState');entry.check=calls.splice(0);}
 for(const entity of branch.entities){
  const controller=entity.classname==='ModelController'?entity:level.entities.find(e=>e.DaviName?.toLowerCase()===entity.CommandOnEnter?.split('.')[0].toLowerCase());
  const functionName=controller?.MotionCommand?.match(/^\s*([A-Za-z_0-9]+)\s*\(/)?.[1];
  const fn=program.functions.find(f=>f.name===functionName);
  const labels=new Set(fn?.instructions.flatMap(i=>[i.a,i.b,i.source,i.rhs]).filter(e=>e?.tag===0&&e.type===3).map(e=>e.value));
  const scene={disabled:entity.DaviName,controller:controller?.DaviName,functionName,events:[],dialogue:[]};
  if(fn)for(const label of labels){calls.length=0;const args=fn.parameters.map(result);args[0]=label;vm.call(functionName,args);if(calls.length)scene.events.push({label,calls:[...calls]});for(const c of calls)if(['CutSceneSay','Say','CommunicatorSay'].includes(c.name)){const key=String(c.args[0]).toLowerCase();scene.dialogue.push({id:key,text:dialogue[key]?.text});}}
  entry.cutscenes.push(scene);
 }
 out.push(entry);console.log(branch.level);
 for(const s of entry.cutscenes){console.log(s.disabled,'=>',s.controller,s.functionName);for(const line of s.dialogue)console.log(' ',line.id,line.text);console.log(' actions',JSON.stringify(s.events.flatMap(e=>e.calls).filter(c=>!['CutSceneSay','Say','StartCutScene','StopCutScene','RcHide','RcShowAtSpawnPoint','FreezeEnemies','UnFreezeEnemies'].includes(c.name))));}
}
writeFileSync(new URL('script-traces.json',dir),JSON.stringify(out,null,2)+'\n');

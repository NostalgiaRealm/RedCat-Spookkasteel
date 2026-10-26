import fs from 'node:fs';
import path from 'node:path';
const root=path.resolve(import.meta.dirname,'../../..');
const result=[];
for(const level of ['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a']){
  const ir=JSON.parse(fs.readFileSync(path.join(root,'data/davi',level+'.json'))),data=JSON.parse(fs.readFileSync(path.join(root,'data/levels',level,'level.json')));
  const commands=[],resetCommands=[];
  const walk=value=>{if(!value||typeof value!=='object')return;for(const [key,child]of Object.entries(value)){if(key==='instructions'&&Array.isArray(child)){for(const instruction of child){const text=JSON.stringify(instruction);if(/42:0\/3c:(15|16)"/.test(text))commands.push(instruction);if(/42:0\/3c:35"/.test(text))resetCommands.push(instruction);}}else if(Array.isArray(child))child.forEach(walk);else if(child&&typeof child==='object')walk(child);}};
  walk(ir);
  const entities=data.entities.filter(e=>e.classname&&!e.classname.startsWith('%'));
  const counts=Object.fromEntries(['DoorModel','ButtonModel','Trigger','CameraTrigger','ModelController','ElevatorModel'].map(type=>[type,entities.filter(e=>e.classname===type).length]));
  result.push({level,counts,targetMethodCalls:commands,resetMethodCalls:resetCommands,zeroUseLimits:entities.filter(e=>e.MaxTriggerTimes==='0'||e.MaxSwitchTimes==='0').map(e=>e.DaviName),zeroStayOpenTimers:entities.filter(e=>e.classname==='DoorModel'&&e.TimeToStayOpen==='0').map(e=>e.DaviName)});
}
fs.writeFileSync(path.join(import.meta.dirname,'world-command-usage.json'),JSON.stringify(result,null,2)+'\n');
console.log(result);

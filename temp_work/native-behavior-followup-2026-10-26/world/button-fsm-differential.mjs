import {readFileSync,writeFileSync} from 'node:fs';
import {Gameplay} from '../../../src/gameplay.js';
import {ScriptHost} from '../../../src/script-host.js';
const source=JSON.parse(readFileSync(new URL('./native-button-fsm-probe.json',import.meta.url)));
const game=new Gameplay({id:'lvl00a',entities:[{classname:'%Model%','%name%':'brush',Model:'1'},{classname:'ButtonModel','%name%':'button',Model:'brush',IsInitiallyEnabled:'1',MaxSwitchTimes:'-1'}]},{deferInit:true});
const host=new ScriptHost(game,{version:27},{motions:{motions:[{model:1,origin:[0,0,0],startTime:0,endTime:2,paths:[{translation:{times:[0,2],values:[0,0,0,0,100,0],interpolation:0}}],events:[]}]}});
const object=game.objects[0],player=host.players.get(object.id);let events=[];
game.onEvent=e=>{if(e.type==='button')events.push('sound');};
game.runEvent=(_o,event)=>events.push(({SwitchOnCommand:'BeforeOn',SwitchOffCommand:'BeforeOff',AfterSwitchOnCommand:'AfterOn',AfterSwitchOffCommand:'AfterOff'})[event]+':phase'+object.buttonPhase);
const ticks=source.ticks.map(row=>{
  events=[];if(row.request)game.command(object,'switch');host.update(row.dtMs/1000);
  return {dtMs:row.dtMs,request:row.request,phase:object.buttonPhase??1,time:player.time,count:object.switchCount,pending:Number(typeof object.pendingButtonSwitch==='boolean'),events};
});
const mismatches=ticks.flatMap((row,i)=>JSON.stringify(row)===JSON.stringify(source.ticks[i])?[]:[{tick:i,native:source.ticks[i],portable:row}]);
const report={sha256:source.sha256,scope:source.scope,ticks:ticks.length,mismatches:mismatches.length,differences:mismatches};
writeFileSync(new URL('./button-fsm-differential.json',import.meta.url),JSON.stringify(report,null,2)+'\n');console.log(JSON.stringify(report,null,2));
if(mismatches.length)process.exitCode=1;

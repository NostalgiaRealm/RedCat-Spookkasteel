import {Gameplay} from '../../source/gameplay.js';
const contactLevel=(dps=1,radius=8)=>({id:'test',entities:[{classname:'Trigger','%name%':'pool',Origin:'0 0 0',DamagePerSecond:String(dps),TriggerRadius:String(radius)}],spawn:{position:[0,0,0],orientation:0}});
const ev=[];const game=new Gameplay(contactLevel(200,2),{onEvent:e=>ev.push(e.type)});
game.update(.1,[0,0,0],{environmentContents:0});
console.log(game.state.health,ev);

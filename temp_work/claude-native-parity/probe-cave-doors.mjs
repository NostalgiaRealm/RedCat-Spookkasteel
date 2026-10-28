// When are the cave Tower doors locked during the authored Dungeon Max battle route? (debug)
import {readFileSync} from 'node:fs';
import {Gameplay} from '../../source/gameplay.js';
import {ScriptHost} from '../../source/script-host.js';
const json=p=>JSON.parse(readFileSync(new URL('../../'+p,import.meta.url)));
const game=new Gameplay(json('data/levels/lvl03a/level.json'),{deferInit:true});
const host=new ScriptHost(game,json('data/davi/lvl03a.json'),{motions:json('data/motions/lvl03a.json'),dialogue:json('data/dialogue/nl.json')});host.initialize();
const o=n=>game.find(n)[0],doors=()=>['door_left_to_tower','door_right_to_tower'].map(n=>o(n).locked);
const adv=s=>{for(let t=0;t<s;t+=.1)host.update(.1);};
console.log('start',doors());adv(60);console.log('after intro',doors());
game.trigger(o('trigger_cuts05'));adv(19.2);console.log('after cuts05',doors(),'cutscene',host.cutscene);
game.setDoor(o('door_left_endbattle'),true);game.setDoor(o('door_left_endbattle'),false);console.log('battle',doors(),'boss enabled',o('Max').enabled);
const lockers=game.level.entities.filter(e=>Object.entries(e).some(([k,v])=>typeof v==='string'&&/to_tower\.lock/i.test(v))).map(e=>e.DaviName||e['%name%']);
console.log('entities that lock tower doors:',lockers);

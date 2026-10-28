// Debug: forest mirror platform pose along its whole motion.
import {readFileSync} from 'node:fs';
import {Gameplay} from '../../../source/gameplay.js';
import {ScriptHost} from '../../../source/script-host.js';
const json=p=>JSON.parse(readFileSync(new URL('../../../'+p,import.meta.url)));
const game=new Gameplay(json('data/levels/lvl00a/level.json'),{deferInit:true});
const host=new ScriptHost(game,json('data/davi/lvl00a.json'),{motions:json('data/motions/lvl00a.json'),dialogue:{}});host.initialize();
const mirror=game.find('mirror')[0],controller=game.find('mirrormodel_mc')[0],motion=host.players.get(controller.id);
for(const t of [0.01,0.5,1,2,3,motion.motion.endTime??motion.endTime]){motion.seek(t);host.applyMotion(controller,motion);console.log(t,game.objectPosition(mirror).map(v=>+v.toFixed(2)));}
console.log('end',motion.motion?.endTime,motion.endTime);

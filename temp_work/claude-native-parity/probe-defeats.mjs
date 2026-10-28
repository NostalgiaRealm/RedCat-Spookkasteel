// Probe defeat-handler timing for shipped bosses and zombies (debug for tests/native-parity-sequences.test.mjs).
import {readFileSync} from 'node:fs';
import {Gameplay} from '../../source/gameplay.js';
import {ScriptHost} from '../../source/script-host.js';
const json=p=>JSON.parse(readFileSync(new URL('../../'+p,import.meta.url)));
function boot(id){const game=new Gameplay(json(`data/levels/${id}/level.json`),{deferInit:true});
  const host=new ScriptHost(game,json(`data/davi/${id}.json`),{motions:json(`data/motions/${id}.json`),dialogue:json('data/dialogue/nl.json')});host.initialize();
  for(let i=0;i<600;i++)host.update(.1);return {game,host};}
for(const [id,name,watch] of [['lvl03a','Max',g=>['door_left_to_tower','door_right_to_tower'].map(n=>g.find(n)[0]?.locked)],
  ['lvl01a','Max',g=>g.find('MCcamera05')[0]?.enabled],['lvl02a','bonecollector',g=>g.find('csmc07')[0]?.enabled],
  ['lvl02a','zombie5',g=>[g.find('planken2_mc')[0]?.visible,g.find('ghost1')[0]?.enabled]]]){
  const {game,host}=boot(id),boss=game.find(name)[0];
  console.log(id,name,'type',boss.enemyType,'enabled',boss.enabled,'health',boss.health,'before',JSON.stringify(watch(game)),'cutscene',host.cutscene);
}

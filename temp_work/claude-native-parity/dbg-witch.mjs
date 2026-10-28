// Reproduction of the Witch flight test in tests/enemy-ambush-flight.test.mjs, logging boss phases.
import {readFileSync} from 'node:fs';
import {Gameplay} from '../../source/gameplay.js';
import {ScriptHost} from '../../source/script-host.js';
import {BspCollider} from '../../source/collision.js';
const json=p=>JSON.parse(readFileSync(new URL('../../'+p,import.meta.url)));
const game=new Gameplay(json('data/levels/lvl04a/level.json'),{deferInit:true});
const host=new ScriptHost(game,json('data/davi/lvl04a.json'),{motions:json('data/motions/lvl04a.json'),dialogue:json('data/dialogue/nl.json')});
host.initialize();for(let i=0;i<100;i++)host.update(.1);
game.command(game.find('trigger_witchmodel')[0],'enable');for(let i=0;i<450;i++)host.update(.1);
const witch=game.find('The_Witch')[0];
const collider=new BspCollider(game.level.collision);collider.modelTransforms=host.modelTransforms;
const models=[...new Set(game.level.groups.map(g=>g.model))].filter(i=>i===0||game.modelState(i).solid);
witch.collisionMins=[-24,0,-24];witch.collisionMaxs=[24,96,24];for(const o of game.triggers)o.enabled=false;
let shots=0;game.onEvent=e=>{if(e.type==='enemyProjectile')shots++;};
for(let i=0;i<1800;i++){game.state.health=10;
  game.update(.05,[332,2373,276],{traceEnemy:(a,b,mins,maxs)=>collider.trace(a,b,mins,maxs,models),lineOfSight:(a,b)=>collider.trace(a,b,[0,0,0],[0,0,0],models,'blocksLOS').fraction>.98});
  if(i%100===0)console.log(i,witch.boss.phase,witch.position.map(v=>Math.round(v)).join(','),'alerted',witch.alerted,'shots',shots,'patrol',witch.patrol?.current,witch.patrol?.target,'approach',witch.boss.approaching);}

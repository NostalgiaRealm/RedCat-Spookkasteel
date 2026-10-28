// Bounded reproduction of the spider descent loop in tests/enemy-ambush-flight.test.mjs.
import {readFileSync} from 'node:fs';
import {Gameplay} from '../../source/gameplay.js';
import {BspCollider} from '../../source/collision.js';
import {placeSpider} from '../../source/enemy-ambush.js';
const level=id=>JSON.parse(readFileSync(new URL(`../../data/levels/${id}/level.json`,import.meta.url)));
for(const id of ['lvl01a','lvl02a','lvl03a']){
  const game=new Gameplay(level(id),{deferInit:true}),spider=game.objects.find(o=>o.enemyType==='spider'),collider=new BspCollider(game.level.collision);
  const trace=(a,b,mins,maxs)=>collider.trace(a,b,mins,maxs,[0],null);
  placeSpider(game,spider,trace);const upper=[...spider.position],lower=spider.ambush.lower;
  spider.enabled=true;game.time+=.1;game.updateEnemy(spider,.1,[lower[0]+30,lower[1],lower[2]],()=>true,trace);
  let i=0;for(;i<2000&&spider.ambush.phase==='descending';i++){game.time+=.1;game.updateEnemy(spider,.1,lower,()=>true,trace);}
  console.log(id,{steps:i,phase:spider.ambush.phase,pos:spider.position.map(v=>+v.toFixed(2)),lower,upper,anim:spider.animationState,alerted:spider.alerted});
}

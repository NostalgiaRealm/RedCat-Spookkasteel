// Path-less Bone Brutus: does save/load reproduce the live fight? (debug)
import {Gameplay} from '../../source/gameplay.js';
const level={id:'lvl01a',spawn:{position:[0,0,0],orientation:0},entities:[{classname:'MovingEnemy','%name%':'guard',DaviName:'guard',Origin:'0 0 0',Type:'8',StartPoint:'',StartOrientation:'6'}]};
const advance=(game,s,p)=>{for(let t=0;t<s-1e-8;t+=.05)game.update(Math.min(.05,s-t),p);};
const setup=g=>{const b=g.objects[0];b.stats={...b.stats,AverageShotsPerSalvo:1,ChanceToMoveAfterSalvo:0};b.salvoSize=1;b.animationDurations={attack:1,charge:1.933343};return b;};
let mismatches=0;
for(let saveAt=.3;saveAt<12;saveAt+=.35){
  const game=new Gameplay(level),b=setup(game);advance(game,saveAt,[0,0,300]);
  const save=JSON.parse(JSON.stringify(game.snapshot())),restored=new Gameplay(level,{save}),c=restored.objects[0];
  c.stats={...b.stats};c.animationDurations={...b.animationDurations};
  const before={pending:b.boneChargePending,relocate:b.relocateAfterSalvo,anim:b.animationState};
  advance(game,6,[0,0,300]);advance(restored,6,[0,0,300]);
  const same=JSON.stringify(game.projectiles.map(p=>[p.kind,p.id,p.age.toFixed(3)]))===JSON.stringify(restored.projectiles.map(p=>[p.kind,p.id,p.age.toFixed(3)]))&&b.aiRandomState===c.aiRandomState;
  if(!same){mismatches++;console.log('save at',saveAt.toFixed(2),before,'live',game.projectiles.length,b.aiRandomState,'restored',restored.projectiles.length,c.aiRandomState);}
}
console.log('mismatching save points:',mismatches);

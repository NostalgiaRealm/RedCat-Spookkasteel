import {readFileSync} from 'node:fs';
import {BspCollider} from '../../../src/collision.js';
import {MovementRecovery} from '../../../src/movement-recovery.js';
const level=JSON.parse(readFileSync('data/levels/lvl01a/level.json'));
const fixture=JSON.parse(readFileSync('temp_work/campaign-validation-2026-10-15/playthrough-1792088801065/castle-crate-pocket-collider-2026-10-18.json'));
const c=new BspCollider(level.collision),models=fixture.models;for(const [index,pose] of fixture.transforms)c.modelTransforms.set(index,pose);for(const index of fixture.disabled)c.disabledModels.add(index);
const mins=[-11,0,-11],maxs=[11,56,11],p=[823.05,-23.95,-907.603],s=[1099.8577,168.05,-931.175],trace=(a,b,mn,mx)=>c.trace(a,b,mn,mx,models),r=new MovementRecovery();
const options={dt:.05,before:p,position:p,intended:[0,0,1],grounded:true,mins,maxs,trace};
console.log({overlap:trace(p,p,mins,maxs),safe:r.safeAt(s,options),trapSafe:r.safeAt(p,options),up:trace(p,[p[0],p[1]+16,p[2]],mins,maxs)});
console.log(Array.from({length:8},(_,i)=>{let a=i*Math.PI/4;return trace(p,[p[0]+Math.cos(a)*64,p[1],p[2]+Math.sin(a)*64],mins,maxs).fraction;}));
r.history.push(s);let result;for(let i=0;i<500&&!result;i++)result=r.update(options);console.log({result,r});
const r2=new MovementRecovery();r2.history.push(s);let done=[];
const old=r2.probeFallPocket;r2.probeFallPocket=function(o){let state=this.pocketProbe,ans=old.call(this,o);if(ans)done.push({ans,queue:state.queue?.length,cursor:state.cursor,at:state.queue?.[state.cursor]});return ans;};
for(let i=0;i<4000;i++){let ans=r2.update(options);if(ans){console.log({i,ans});break;}}
console.log(JSON.stringify({done:done.slice(0,3),probe:r2.pocketProbe&&{size:r2.pocketProbe.queue?.length,cursor:r2.pocketProbe.cursor,direction:r2.pocketProbe.direction}}));

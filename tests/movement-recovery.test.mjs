import test from 'node:test';
import assert from 'node:assert/strict';
import {MovementRecovery} from '../src/movement-recovery.js';
import {BspCollider,PlayerController} from '../src/collision.js';
import {moveEnemy} from '../src/enemies.js';

// Separate convex brush models exercise the real BSP hull sweeps, including
// current transforms and disabled brushes, rather than a mock of the recovery.
function boxes(specs) {
  const data={planes:[],nodes:[],leaves:[],leafSides:[],models:[]};
  for(const [min,max] of specs){
    const firstSide=data.leafSides.length;
    for(let axis=0;axis<3;axis++)for(const sign of [1,-1]){
      const normal=[0,0,0];normal[axis]=sign;
      data.leafSides.push([data.planes.length,0]);data.planes.push([...normal,sign===1?max[axis]:-min[axis]]);
    }
    data.leaves.push({contents:1,firstSide,numSides:6,min,max});
    data.models.push({root:-data.leaves.length,min,max});
  }
  const collider=new BspCollider(data),models=data.models.map((_,i)=>i);
  return {collider,models,trace:(a,b,mins,maxs)=>collider.trace(a,b,mins,maxs,models)};
}

function wellRoofPinch({floorHeight=0,barrier=false}={}) {
  // Two bounded, bevelled brushes reproduce the actual well's pair of contact
  // normals without loading the full map. The hull is clear at rest, but its
  // head and feet are pinched between sloped faces 51 units above the ground.
  const origin=[0,51.15870499741558,0];
  const specs=[[[-500,floorHeight-30,-500],[500,floorHeight,500]],
    [[8.0838,17.95,-16.8936],[28.4638,65.95,36.3433]],
    [[-21.6818,102.5656,-3.9653],[57.0791,117.95,74.796]]];
  if(barrier)specs.push([[-24,-100,-200],[-20,180,200]]);
  const f=boxes(specs),data=f.collider.data;
  for(const [index,normal,gap] of [
    [1,[-.967144787311554,.12438593804836273,.2217184603214264],.00022920583433],
    [2,[.5000004172325134,-.7071067690849304,-.49999961256980896],.05]]){
    const leaf=data.leaves[index],sides=data.leafSides.slice(leaf.firstSide,leaf.firstSide+leaf.numSides);
    const d=normal.reduce((s,v,i)=>s+v*origin[i],0)-gap+
      normal.reduce((s,v,i)=>s+v*(v>0?hull.mins[i]:hull.maxs[i]),0);
    leaf.firstSide=data.leafSides.length;leaf.numSides++;
    data.leafSides.push(...sides,[data.planes.length,0]);data.planes.push([...normal,d]);
  }
  return {...f,origin};
}
const floor=[[-500,-30,-500],[500,0,500]];
const wall=[[20,0,-200],[40,100,200]];
const hull={mins:[-11,0,-11],maxs:[11,56,11]};
const at=(position,trace,extra={})=>({dt:.05,before:[...position],position:[...position],intended:[1,0,0],
  ...hull,grounded:true,trace,...extra});
const finiteClear=(f,p,mins=hull.mins,maxs=hull.maxs)=>{
  assert.ok(p.every(Number.isFinite));assert.equal(f.trace(p,p,mins,maxs).startSolid,false);
};
function tickUntil(recovery,options,count=500){
  for(let i=0;i<count;i++){const result=recovery.update(options);if(result)return result;}
  return null;
}

test('a shallow embedded player hull is nudged to nearby supported body clearance',()=>{
  const f=boxes([floor,wall]),r=new MovementRecovery(),position=[10,.05,0];
  assert.equal(f.trace(position,position,hull.mins,hull.maxs).startSolid,true);
  const result=tickUntil(r,at(position,f.trace,{embedded:true}));
  assert.ok(result);assert.equal(result.reason,'overlap');assert.equal(result.grounded,true);
  finiteClear(f,result.position);assert.ok(Math.hypot(...result.position.map((v,i)=>v-position[i]))<16);
  assert.ok(result.position[0]+hull.maxs[0]+3<20);
});

test('corner recovery clears both obstacles without crossing either solid',()=>{
  const f=boxes([floor,wall,[[-200,0,20],[200,100,40]]]),r=new MovementRecovery(),position=[10,.05,10];
  const result=tickUntil(r,at(position,f.trace,{embedded:true}));
  assert.ok(result);finiteClear(f,result.position);
  assert.ok(result.position[0]<6&&result.position[2]<6);
  assert.equal(f.trace(position.map((v,i)=>v+(i===1?28:0)),result.position.map((v,i)=>v+(i===1?28:0)),[0,0,0],[0,0,0]).fraction,1);
});

test('ordinary pushing against a wall, idle actors and flowing movement do not trigger recovery',()=>{
  const f=boxes([floor,wall]),position=[8.95,.05,0],r=new MovementRecovery();
  for(let i=0;i<180;i++)assert.equal(r.update(at(position,f.trace)),null);
  assert.equal(r.recoveries,0);
  const idle=new MovementRecovery();for(let i=0;i<180;i++)assert.equal(idle.update(at(position,f.trace,{intended:[0,0,0]})),null);
  assert.equal(idle.search,null);
  const moving=new MovementRecovery();for(let i=0;i<80;i++){
    const p=[-200+i*3,.05,0];assert.equal(moving.update(at(p,f.trace,{before:[p[0]-3,p[1],p[2]],autonomous:true})),null);
  }
  assert.equal(moving.recoveries,0);
});

test('a visited clear position is used when local candidates are unsafe and is revalidated',()=>{
  const f=boxes([floor]),r=new MovementRecovery(),old=[-64,.05,0],position=[0,.05,0];
  // Record actual safe travel in <=32-unit steps; discontinuous teleports reset it.
  for(const x of [-64,-48,-32,-16,0])for(let i=0;i<11;i++)r.update(at([x,.05,0],f.trace,{intended:[0,0,0]}));
  assert.ok(r.history.some(p=>p[0]===old[0]));
  const result=tickUntil(r,at(position,f.trace,{autonomous:true,safe:p=>p[0]<-50}));
  assert.ok(result);assert.equal(result.position[0],old[0]);finiteClear(f,result.position);
  assert.equal(r.recoveries,1);
});

test('a newly closed gate prevents recovering through it to previously clear history',()=>{
  const f=boxes([floor,[[-20,0,-200],[-10,100,200]]]),r=new MovementRecovery();
  f.collider.disabledModels.add(1);
  for(const x of [-64,-48,-32,-16,0])for(let i=0;i<11;i++)r.update(at([x,.05,0],f.trace,{intended:[0,0,0]}));
  f.collider.disabledModels.delete(1);
  const position=[2,.05,0],overlap=f.trace(position,position,hull.mins,hull.maxs);
  assert.equal(overlap.startSolid,false);
  assert.equal(r.candidate([-64,.05,0],position,overlap,at(position,f.trace)),null);
  const result=tickUntil(r,at(position,f.trace,{autonomous:true,safe:p=>p[0]<-50}),430);
  assert.equal(result,null,'history across a closed door is not a valid escape');
});

test('history under a moved obstacle is rejected in its current brush pose',()=>{
  const f=boxes([floor,[[-5,0,-20],[5,80,20]]]),r=new MovementRecovery();
  f.collider.modelTransforms.set(1,{translation:[200,0,0]});
  const position=[0,.05,0];for(let i=0;i<11;i++)r.update(at(position,f.trace,{intended:[0,0,0]}));
  assert.equal(r.history.length,1);
  f.collider.modelTransforms.set(1,{translation:[0,0,0]});
  assert.equal(r.safeAt(r.history[0],at(position,f.trace)),false);
  assert.equal(r.candidate(position,[30,.05,0],{startSolid:false},at(position,f.trace)),null);
});

test('ground recovery rejects cliffs, unsupported hull corners and hazardous candidate predicates',()=>{
  const ledge=boxes([[[-100,-30,-100],[0,0,100]]]),r=new MovementRecovery(),options=at([-20,.05,0],ledge.trace);
  assert.equal(r.safeAt([-20,.05,0],options),true);
  assert.equal(r.safeAt([8,.05,0],options),false,'body corner contact cannot substitute for centre-foot support');
  assert.equal(r.candidate([30,.05,0],[-20,.05,0],{startSolid:false},options),null);
  const f=boxes([floor]);
  assert.equal(r.candidate([-24,.05,0],[0,.05,0],{startSolid:false},at([0,.05,0],f.trace,{safe:()=>false})),null);
});

test('shallow recovery never tunnels through a thin obstacle when starting overlapped',()=>{
  const f=boxes([floor,[[20,0,-100],[21,100,100]]]),r=new MovementRecovery(),p=[10,.05,0];
  const hit=f.trace(p,p,hull.mins,hull.maxs);assert.equal(hit.startSolid,true);
  assert.equal(r.candidate([40,.05,0],p,hit,at(p,f.trace)),null);
  assert.ok(r.candidate([0,.05,0],p,hit,at(p,f.trace)));
});

test('history is capped, paused updates do no work, teleports clear old history, and searches are bounded',()=>{
  const f=boxes([floor]),r=new MovementRecovery();
  for(let x=-200;x<=0;x+=10)for(let i=0;i<11;i++)r.update(at([x,.05,0],f.trace,{intended:[0,0,0]}));
  assert.equal(r.history.length,12);
  const saved=JSON.stringify(r),position=[0,.05,0];let traces=0;
  const trace=(...args)=>{traces++;return f.trace(...args);};
  assert.equal(r.update(at(position,trace,{dt:0})),null);assert.equal(traces,0);assert.equal(JSON.stringify(r),saved);
  for(let i=0;i<70;i++){
    traces=0;r.update(at(position,trace,{autonomous:true,safe:()=>false}));
    assert.ok(traces<=12,`recovery work must remain bounded per tick, got ${traces} traces`);
  }
  r.update(at([300,.05,0],f.trace,{intended:[0,0,0]}));
  assert.ok(r.history.every(p=>p[0]>200));assert.equal(r.recoveries,0);
});

test('PlayerController recovers an overlap and clears stale airborne velocity without blocking normal noclip',()=>{
  const f=boxes([floor,wall]),p=new PlayerController(f.collider,[10,.05,0],f.models);
  p.launchVelocityXZ=[35,20];p.velocityY=-30;
  for(let i=0;i<100&&p.movementRecovery.recoveries===0;i++)p.update(.05,{forward:0,right:0},0);
  assert.equal(p.movementRecovery.recoveries,1);finiteClear(f,p.position);
  assert.equal(p.velocityY,0);assert.deepEqual(p.launchVelocityXZ,[0,0]);assert.deepEqual(p.lastSafe,p.position);
  p.noClip=true;p.position=[30,20,0];p.update(.05,{right:1},0);
  assert.ok(p.position[0]>30);assert.equal(p.movementRecovery.history.length,0);assert.equal(p.movementRecovery.recoveries,0);
});

test('ground frogs and flying enemies recover from body overlaps while preserving authored patrol targets',()=>{
  for(const flying of [false,true]){
    const f=boxes([floor,wall]),o={id:flying?'bat':'frog',enemyType:flying?'bat':'frog',enabled:true,visible:true,health:3,
      entity:{classname:'MovingEnemy'},stats:{FallSpeed:160},position:[10,flying?30:.05,0],grounded:!flying,flying,
      collisionMins:[...hull.mins],collisionMaxs:[...hull.maxs],animationState:'walk',patrol:{current:'a',target:'b'},
      pursuit:{route:['a']},flightDetour:{target:'a'},velocityY:0};
    const seen=[];const trace=(a,b,mins,maxs,self)=>{seen.push(self);return f.trace(a,b,mins,maxs);};
    for(let i=0;i<100&&!o.movementRecovery?.recoveries;i++)moveEnemy(o,[1,0,0],.05,trace);
    assert.equal(o.movementRecovery?.recoveries,1);finiteClear(f,o.position,o.collisionMins,o.collisionMaxs);
    assert.deepEqual(o.patrol,{current:'a',target:'b'});assert.equal(o.pursuit,null);assert.equal(o.flightDetour,null);
    assert.equal(o.grounded,!flying);assert.equal(o.velocityY,0);assert.ok(seen.every(self=>self===o));
  }
});

test('authored takeoff, dormant/descending spiders, turret phases and dead actors are excluded',()=>{
  const f=boxes([floor,wall]);
  for(const state of [{ambush:{phase:'dormant'}},{ambush:{phase:'descending'}},{boss:{phase:'rise'}},{health:0},{enabled:false}]){
    const o={id:'held',entity:{classname:'MovingEnemy'},position:[10,.05,0],stats:{},grounded:true,...state};
    for(let i=0;i<80;i++)moveEnemy(o,[1,0,0],.05,f.trace);
    assert.equal(o.movementRecovery?.recoveries||0,0);
  }
  const o={position:[10,30,0],movementRecovery:new MovementRecovery()};
  o.movementRecovery.history.push([0,.05,0]);moveEnemy(o,[0,1,0],.05,null);
  assert.deepEqual(o.position,[10,31,0]);assert.equal(o.movementRecovery.history.length,0);
});

test('PlayerController records dry support only and does not promote water to a safe return point',()=>{
  const f=boxes([floor,[[-100,0,-100],[0,30,100]]]);
  f.collider.data.leaves[1].contents=0x20000;
  const p=new PlayerController(f.collider,[-20,.05,0],f.models);p.grounded=true;
  for(let i=0;i<30;i++)p.update(.05,{forward:0,right:0},0);
  assert.equal(p.movementRecovery.history.length,0);
  p.position=[30,.05,0];
  for(let i=0;i<30;i++)p.update(.05,{forward:0,right:0},0);
  assert.deepEqual(p.movementRecovery.history,[[30,.05,0]]);
});

test('live player physics holding into a wall stays put until the user changes direction',()=>{
  const f=boxes([floor,wall]),p=new PlayerController(f.collider,[0,.05,0],f.models);p.grounded=true;
  for(let i=0;i<150;i++)p.update(.05,{right:1},0);
  assert.equal(p.movementRecovery.recoveries,0);assert.ok(Math.abs(p.position[0]-8.95)<.001);
  const x=p.position[0];p.update(.05,{right:-1},0);assert.ok(p.position[0]<x-5);
});

test('resumed natural travel cancels an unfinished recovery search; loading resets stale history',()=>{
  const f=boxes([floor]),r=new MovementRecovery(),position=[0,.05,0];
  for(let i=0;i<28;i++)r.update(at(position,f.trace,{autonomous:true,safe:()=>false}));
  assert.ok(r.search);
  const advanced=[4,.05,0];assert.equal(r.update(at(advanced,f.trace,{before:position,autonomous:true})),null);
  assert.equal(r.search,null);
  const p=new PlayerController(f.collider,position,f.models);p.movementRecovery.history.push([0,.05,0]);
  p.restoreMotion({velocityY:0,launchVelocityXZ:[0,0],grounded:true});
  assert.equal(p.movementRecovery.history.length,0);
});

test('a shallow well-side wedge leaves the raised base horizontally before settling on lower ground',()=>{
  // The broad base is 16 units tall, with a narrower wall standing on it.
  // The body overlaps that wall by one unit at y=17. A direct diagonal exit
  // cuts through the broad base although sideways-then-down is unobstructed.
  const f=boxes([floor,[[8,0,-80],[40,16,80]],[[20,16,-80],[40,100,80]]]);
  const r=new MovementRecovery(),origin=[10,17,0],exit=[-14,17,0],options=at(origin,f.trace,{embedded:true});
  const overlap=f.trace(origin,origin,hull.mins,hull.maxs);assert.equal(overlap.startSolid,true);
  const down=f.trace(exit,[-14,-1,0],hull.mins,hull.maxs);
  assert.ok(Math.abs(down.end[1]-.05)<1e-6);
  const direct=f.trace(down.end,origin,hull.mins,hull.maxs);
  assert.ok((1-direct.fraction)*Math.hypot(...origin.map((v,i)=>v-down.end[i]))>10,
    'the old diagonal validation intersects the broad base for much more than the shallow wall overlap');
  const result=r.candidate(exit,origin,overlap,options);
  assert.ok(result);assert.deepEqual(result.position,down.end);finiteClear(f,result.position);
  assert.ok(f.trace(exit,result.position,hull.mins,hull.maxs).fraction===1);
  const automatic=tickUntil(new MovementRecovery(),options);
  assert.ok(automatic);finiteClear(f,automatic.position);
  assert.ok(automatic.position[1]<1,'automatic local search finds the surrounding lower floor');
});

test('a non-overlapping player pinched under a sloped well roof escapes diagonally down and resumes walking',()=>{
  const f=wellRoofPinch(),origin=f.origin,p=new PlayerController(f.collider,origin,f.models);
  assert.equal(f.trace(origin,origin,hull.mins,hull.maxs).startSolid,false);
  for(let i=0;i<8;i++){
    const angle=i*Math.PI/4,to=[origin[0]+8*Math.cos(angle),origin[1],origin[2]+8*Math.sin(angle)];
    assert.equal(f.trace(origin,to,hull.mins,hull.maxs).fraction,0,'every old horizontal search axis is blocked');
  }
  const down=f.trace(origin,[0,origin[1]-1,0],hull.mins,hull.maxs);
  assert.equal(down.fraction,0);assert.ok(down.normal[1]<.65,'contact cannot become normal grounded footing');
  const exit=[-32,origin[1]-32,0];
  assert.equal(f.trace(origin,exit,hull.mins,hull.maxs).fraction,1,'diagonal outward/downward escape clears both faces');
  const r=new MovementRecovery(),options=at(origin,f.trace,{grounded:false});
  const candidate=r.candidate(exit,origin,f.trace(origin,origin,hull.mins,hull.maxs),options);
  assert.ok(candidate);assert.ok(Math.abs(candidate.position[1]-.05)<1e-6);
  p.launchVelocityXZ=[156.790159155,1.756699207];p.jumpAge=91;p.jumpKind='normal';
  for(let i=0;i<20;i++)p.update(.025,{},0);
  assert.deepEqual(p.position,origin,'normal physics cannot free the suspended body');assert.equal(p.grounded,false);
  let frames=20,maxTraces=0,traces=0;
  const originalTrace=f.collider.trace.bind(f.collider);
  f.collider.trace=(...args)=>{traces++;return originalTrace(...args);};
  for(;frames<200&&!p.movementRecovery.recoveries;frames++){
    traces=0;p.update(.025,{},0);maxTraces=Math.max(maxTraces,traces);
  }
  assert.equal(p.movementRecovery.recoveries,1);assert.ok(frames<80);
  finiteClear(f,p.position);assert.ok(Math.abs(p.position[1]-.05)<1e-6);
  assert.equal(p.grounded,true);assert.equal(p.velocityY,0);assert.deepEqual(p.launchVelocityXZ,[0,0]);
  assert.ok(maxTraces<=25,`complete player update remains bounded: ${maxTraces} traces`);
  const recovered=[...p.position];for(let i=0;i<10;i++)p.update(.025,{right:-1},0);
  assert.ok(p.position[0]<recovered[0]-20,'player can leave the well normally after recovering');
});

test('extended airborne settling remains bounded and cannot bypass an intervening gate',()=>{
  const f=wellRoofPinch(),r=new MovementRecovery(),origin=f.origin,exit=[-32,origin[1]-32,0];
  const overlap=f.trace(origin,origin,hull.mins,hull.maxs);
  assert.equal(r.candidate(exit,origin,overlap,at(origin,f.trace)),null,'grounded recovery retains its 18-unit support limit');
  const deep=wellRoofPinch({floorHeight:-30});
  assert.equal(r.candidate(exit,origin,overlap,at(origin,deep.trace,{grounded:false})),null,'a floor more than 64 units below the trapped point is unsafe');
  const gate=wellRoofPinch({barrier:true}),beyond=[-40,origin[1]-32,0];
  assert.equal(gate.trace(beyond,beyond,hull.mins,hull.maxs).startSolid,false);
  assert.equal(r.candidate(beyond,origin,overlap,at(origin,gate.trace,{grounded:false})),null,'a clear destination beyond a gate is not a clear route');
  assert.equal(r.candidate(exit,origin,overlap,at(origin,f.trace,{grounded:false,safe:()=>false})),null,'hazard validation also applies to the farther airborne floor');
});

test('normal free fall beside a wall does not trigger the suspended-body recovery',()=>{
  const f=boxes([floor,wall]),p=new PlayerController(f.collider,[8.95,90,0],f.models);
  p.launchVelocityXZ=[156.8,0];
  for(let i=0;i<120;i++)p.update(.025,{right:1},0);
  assert.equal(p.movementRecovery.recoveries,0);assert.equal(p.grounded,true);
  assert.ok(Math.abs(p.position[1]-.05)<1e-6);
});

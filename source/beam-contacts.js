import {transformMotionPoint} from './motions.js';
const numeric=(v,f=0)=>Number.isFinite(Number(v))?Number(v):f;

export function effectPosition(game,object) {
  const pose=game.scripts?.modelTransforms.get(object.modelIndex);
  return pose?transformMotionPoint(object.position,pose.origin,pose):object.position;
}

export function beamEndpoints(game,object,trace=null) {
  const start=effectPosition(game,object),target=game.find(object.entity.BeamEndPoint)[0];
  if(!target)return null;
  let end=effectPosition(game,target);
  if(object.entity.StickToNearestWall==='1'&&trace)end=trace(start,end)?.end||end;
  return {start,end};
}

// Clip (player movement time, distance along beam) against all six sides of
// the moving player box. Unlike enclosing AABBs this does not hit a diagonal
// beam's empty corners, and fast movement cannot tunnel through a thin beam.
export function beamTouchesPlayer(start,end,previous,current,mins=[-11,0,-11],maxs=[11,56,11]) {
  let polygon=[[0,0],[1,0],[1,1],[0,1]];
  for(let axis=0;axis<3;axis++)for(const side of [-1,1]) {
    const delta=current[axis]-previous[axis],length=end[axis]-start[axis];
    const boundary=side===1?maxs[axis]:-mins[axis];
    const signed=p=>side*(start[axis]+p[1]*length-previous[axis]-p[0]*delta)-boundary;
    const clipped=[];
    for(let i=0;i<polygon.length;i++) {
      const a=polygon[i],b=polygon[(i+1)%polygon.length],da=signed(a),db=signed(b),insideA=da<=1e-7,insideB=db<=1e-7;
      if(insideA)clipped.push(a);
      if(insideA!==insideB){const t=da/(da-db);clipped.push(a.map((v,j)=>v+(b[j]-v)*t));}
    }
    polygon=clipped;if(!polygon.length)return false;
  }
  return true;
}

export function updateBeamContacts(game,dt,current,{previous=current,trace=null}={}) {
  if(!(dt>0)||game.scripts?.cutscene||game.state.health<=0||game.completed)return;
  const lives=game.state.lives;
  for(const object of game.beamObjects||(game.beamObjects=game.objects.filter(o=>o.entity.classname==='EffectBeamEntity'))) {
    if(!object.enabled||object.visible===false)continue;
    const e=object.entity;
    if(object.beamContactDelay>0) {
      object.beamContactDelay=Math.max(0,object.beamContactDelay-dt);
      if(object.beamContactDelay<=1e-8){object.beamContactDelay=0;game.runEvent(object,'CommandOnEnter');}
      continue;
    }
    if(e.TriggerOnce==='1'&&object.beamTriggered)continue;
    const endpoints=beamEndpoints(game,object,trace);
    if(!endpoints||!beamTouchesPlayer(endpoints.start,endpoints.end,previous,current))continue;
    object.beamTriggered=true;
    // 0x5754de / 0x575665: elapsed milliseconds * .001 * DamagePerSecond.
    // This is environmental health loss, independent of the hurt animation.
    game.damage(Math.max(0,numeric(e.DamagePerSecond))*dt,object.id,{continuous:true});
    if(e.SoundTriggerFilename)game.emit('scriptSound',{id:`beam-contact:${object.id}`,sound:e.SoundTriggerFilename,position:[...endpoints.start],spatial:true});
    // Native type 3 performs damage without arming the delayed command.
    if(numeric(e.Type)!==3) {
      object.beamContactDelay=Math.max(0,numeric(e.TriggerDelay));
      if(!object.beamContactDelay)game.runEvent(object,'CommandOnEnter');
    }
    if(game.state.lives!==lives||game.state.health<=0)return;
  }
}

// Native boss state transitions recovered from RcHcGame.dat e30781fc… .
// Rendering and collision stay in the host; elapsed phase time is saveable and
// advances only when updateBoss is called, so script freezes pause every phase.
import { enemyRandom } from './enemy-navigation.js';
const n=(v,f=0)=>Number.isFinite(Number(v))?Number(v):f;
const clamp=(v,a,b)=>Math.max(a,Math.min(b,v));
const distance=(a,b)=>Math.hypot(...a.map((v,i)=>v-b[i]));
const vector=v=>Array.isArray(v)?[...v]:String(v||'0 0 0').trim().split(/\s+/).map(Number);
const TYPES=new Set(['maxd','maxj','witch']);
const PHASES=new Set(['idle','shoot','betweenShots','rise','look','lower','teleportOut','invisible','teleportIn','start','fly','recover','salvoWait']);

export function initializeBoss(game,object) {
  if(!TYPES.has(object.enemyType))return;
  object.boss={version:1,type:object.enemyType,phase:'idle',elapsed:0,duration:0,shots:0,released:false,
    home:vector(object.entity.Origin||object.position),started:false,machineMotion:'still',machineSerial:0,machineElapsed:0,
    teleportIndex:-1,hidden:false,invulnerable:false,lowerFrom:n(object.stats.MaxHeight,40)};
  if(object.enemyType==='maxd')object.position[1]=object.boss.home[1]+n(object.stats.MinHeight);
}

function enter(game,o,phase,duration=0,animation=null) {
  Object.assign(o.boss,{phase,elapsed:0,duration:Math.max(0,duration),released:false});
  o.pendingAttack=null;o.attackTimer=0;
  if(animation)game.enemyAnimation(o,animation,duration);
}
function machine(o,motion){o.boss.machineMotion=motion;o.boss.machineSerial++;o.boss.machineElapsed=0;}
function duration(game,o,action,fallback){return n(o.animationDurations?.[action],fallback??game.enemyDuration(o,action));}
function fire(game,o,context) {
  if(!context.visible||context.distance>n(o.stats.AttackRange,100)+5)return;
  game.enemyProjectile(o,context.playerPosition);game.enemyAction(o,'attack');
  game.emit('enemyAttack',{id:o.id,position:[...o.position],ranged:true});
}
function shoot(game,o) {
  const seconds=o.enemyType==='maxd'?n(o.machineDurations?.shoot1,1.0000050067901611):duration(game,o,'attack',2);
  enter(game,o,'shoot',seconds,o.enemyType==='maxd'?'idle':'attack');
  if(o.enemyType==='maxd')machine(o,'shoot1');
}
function salvo(game,o) {
  o.boss.shots=Math.max(1,Math.round(n(o.stats.AverageShotsPerSalvo,2)));
  shoot(game,o);
}
function teleport(game,o) {
  o.boss.invulnerable=true;o.boss.hidden=false;
  enter(game,o,'teleportOut',duration(game,o,'teleport',.9333379864692688),'teleport');
}
function chooseTeleport(game,o,player) {
  // CRcJesterMax appends its own spawn after authored JesterMaxPoint entities.
  // Some released maps have no extra points. Do not invent arena locations.
  const points=game.level.entities.filter(e=>e.classname==='JesterMaxPoint').map(e=>vector(e.Origin));
  points.push([...o.boss.home]);
  let current=o.boss.teleportIndex;
  if(current<0)current=points.length-1;
  let chosen=current;
  for(let attempt=0;attempt<5&&chosen===current;attempt++) {
    const candidate=Math.floor(enemyRandom(o)*points.length);
    if(distance(points[candidate],player)>=n(o.stats.MinPlayerDistance))chosen=candidate;
  }
  o.boss.teleportIndex=chosen;o.position=[...points[chosen]];
  game.emit('bossTeleport',{id:o.id,position:[...o.position]});
}
function relocate(game,o,context) {
  game.navigation.build(context.lineOfSight);
  const target=game.navigation.choose(o,{relocate:true,player:context.playerPosition,canTravel:flightClearance(o,context)});
  if(target){enter(game,o,'fly');o.boss.target=target.id;return true;}
  return false;
}
function flightClearance(o,c) {
  if(!c.traceEnemy)return null;
  return point=>{const hit=c.traceEnemy(o.position,point.position,o.collisionMins||[-12,0,-12],o.collisionMaxs||[12,45,12]);return !hit.startSolid&&hit.fraction>.98;};
}

/** Returns true when the specialized machine handled this enemy tick. */
export function updateBoss(game,o,dt,context) {
  if(!TYPES.has(o.enemyType))return false;
  if(!o.boss)initializeBoss(game,o);
  if(!o.enabled||o.health<=0||game.scripts?.cutscene||game.scripts?.enemiesFrozen)return true;
  const b=o.boss;
  if(!b.started){
    b.started=true;
    if(o.enemyType==='witch')enter(game,o,'start',duration(game,o,'start',3.2666831016540527),'start');
    else if(o.enemyType==='maxj'&&context.visible)teleport(game,o);
  }
  b.elapsed+=dt;
  b.machineElapsed+=dt;
  if(o.enemyType==='maxd')updateDungeon(game,o,context);
  else if(o.enemyType==='maxj')updateJester(game,o,context);
  else updateWitch(game,o,context);
  if(o.enemyType!=='witch') {
    // Max's pedestal and teleport positions are authored anchors, not ground
    // navigation. Applying generic enemy gravity makes the turret sink.
    if(!b.hidden&&context.visible)context.face(context.playerPosition);
  }
  return true;
}

function updateDungeon(game,o,c) {
  const b=o.boss,min=n(o.stats.MinHeight),max=n(o.stats.MaxHeight,40),rise=Math.max(.001,n(o.stats.RiseTime,1));
  switch(b.phase) {
    case 'idle':if(c.visible&&c.distance<=n(o.stats.AttackRange,675))salvo(game,o);break;
    case 'shoot':
      if(!b.released&&b.elapsed>=b.duration*clamp(n(o.stats.DrawMotionPart,.25),0,1)){b.released=true;fire(game,o,c);}
      if(b.elapsed>=b.duration){
        b.shots--;
        if(b.shots>0){machine(o,'still');enter(game,o,'betweenShots',n(o.stats.WaitTimeBetweenShots,1));}
        else {machine(o,'litopen');enter(game,o,'rise',rise,'idle');}
      }break;
    case 'betweenShots':if(b.elapsed>=b.duration)shoot(game,o);break;
    case 'rise':
      o.position[1]=b.home[1]+min+(max-min)*clamp(b.elapsed/b.duration,0,1);
      if(b.elapsed>=b.duration)enter(game,o,'look',n(o.stats.LookTime,2),'idle');break;
    case 'look':if(b.elapsed>=b.duration)lowerDungeon(game,o);break;
    case 'lower':
      o.position[1]=b.home[1]+b.lowerFrom-(b.lowerFrom-min)*clamp(b.elapsed/b.duration,0,1);
      if(b.elapsed>=b.duration){machine(o,'still');enter(game,o,'idle',0,'idle');}break;
    case 'recover':
      if(b.elapsed>=b.duration)lowerDungeon(game,o);break;
  }
}
function lowerDungeon(game,o) {
  const b=o.boss,min=n(o.stats.MinHeight),max=n(o.stats.MaxHeight,40);
  b.lowerFrom=clamp(o.position[1]-b.home[1],min,max);
  machine(o,'litclose');
  enter(game,o,'lower',Math.max(.001,n(o.stats.RiseTime,1)*(b.lowerFrom-min)/Math.max(.001,max-min)),'idle');
}
function updateJester(game,o,c) {
  const b=o.boss;
  switch(b.phase) {
    case 'idle':if(c.visible)teleport(game,o);break;
    case 'teleportOut':
      if(b.elapsed>=b.duration){b.hidden=true;enter(game,o,'invisible',n(o.stats.InvisibleTime,1));}break;
    case 'invisible':
      if(b.elapsed>=b.duration){chooseTeleport(game,o,c.playerPosition);b.hidden=false;enter(game,o,'teleportIn',duration(game,o,'teleport',.9333379864692688),'teleport');}break;
    case 'teleportIn':
      if(b.elapsed>=b.duration){
        b.invulnerable=false;
        // Native 0x404759 compares random with current/max health. At low
        // health he repeatedly teleports more often, not a fixed .9 chance.
        if(enemyRandom(o)<o.health/o.maxHealth)salvo(game,o);else teleport(game,o);
      }break;
    case 'shoot':
      c.face(c.playerPosition);
      if(!b.released&&b.elapsed>=b.duration*clamp(n(o.stats.DrawMotionPart,.5),0,1)){b.released=true;fire(game,o,c);}
      if(b.elapsed>=b.duration){
        b.shots--;
        if(b.shots>0)enter(game,o,'betweenShots',n(o.stats.WaitTimeBetweenShots,1),'idle');
        else teleport(game,o);
      }break;
    case 'betweenShots':if(b.elapsed>=b.duration)shoot(game,o);break;
    case 'recover':if(b.elapsed>=b.duration)teleport(game,o);break;
  }
}
function updateWitch(game,o,c) {
  const b=o.boss;
  switch(b.phase) {
    case 'start':
      if(b.elapsed>=b.duration){enter(game,o,'fly');b.target=o.patrol?.target||null;}break;
    case 'fly': {
      // Follow the tower's authored 3D waypoint network after takeoff or a
      // relocation. Chasing RedCat's feet collapses the flight to floor height.
      let target=b.target&&game.navigation.find(b.target);
      if(!target&&c.visible&&c.distance<=n(o.stats.AttackRange,175)){salvo(game,o);break;}
      if(!target){
        game.navigation.build(c.lineOfSight);
        target=game.navigation.find(o.patrol?.target)||game.navigation.choose(o,{player:c.playerPosition,canTravel:flightClearance(o,c)});
      }
      const start=game.navigation.find(o.patrol?.start);
      const takeoff=!o.patrol?.leftStart&&(target?.id===start?.id||start?.explicit.includes(target?.id));
      const canTravel=flightClearance(o,c);
      if(target&&!takeoff&&canTravel&&!canTravel(target)) {
        // A save from before body-clear flight routing can retain a shortcut
        // through the cauldron. Return to its last reachable waypoint and
        // choose a clear continuation instead of pressing into the same wall.
        const current=game.navigation.find(o.patrol?.current);
        game.navigation.build(c.lineOfSight);
        target=current&&distance(o.position,current.position)>5&&canTravel(current)?current:
          game.navigation.choose(o,{player:c.playerPosition,canTravel});
        b.target=target?.id||null;
        if(o.patrol)o.patrol.target=b.target;
      }
      if(target&&distance(o.position,target.position)>5){
        b.target=target.id;
        // The first explicitly linked flight segment rises through the
        // cauldron from witch110 to witch100. Its decorative BSP top must
        // not turn that authored takeoff route into a permanent wall.
        c.walk(target.position,{authoredFlight:takeoff});
      }
      else {
        if(target&&o.patrol){o.patrol.previous=o.patrol.current;o.patrol.current=target.id;o.patrol.target=null;o.patrol.leftStart=target.id!==o.patrol.start;o.patrol.relocating=false;}
        b.target=null;
        if(c.visible&&c.distance<=n(o.stats.AttackRange,175))salvo(game,o);
        else {const next=game.navigation.choose(o,{player:c.playerPosition,canTravel:!o.patrol?.leftStart?null:flightClearance(o,c)});if(next)b.target=next.id;else game.enemyAnimation(o,'idle');}
      }
      break;
    }
    case 'shoot':
      c.face(c.playerPosition);
      if(!b.released&&b.elapsed>=b.duration*clamp(n(o.stats.DrawMotionPart,.67),0,1)){b.released=true;fire(game,o,c);}
      if(b.elapsed>=b.duration){
        b.shots--;
        if(b.shots>0)enter(game,o,'betweenShots',n(o.stats.WaitTimeBetweenShots),'idle');
        else if(enemyRandom(o)<=n(o.stats.ChanceToMoveAfterSalvo,.3)&&relocate(game,o,c))break;
        else enter(game,o,'salvoWait',n(o.stats.WaitTimeAfterSalvo,1),'idle');
      }break;
    case 'betweenShots':if(b.elapsed>=b.duration)shoot(game,o);break;
    case 'salvoWait':
      if(b.elapsed>=b.duration){if(c.visible&&c.distance<=n(o.stats.AttackRange,175))salvo(game,o);else enter(game,o,'fly');}break;
    case 'recover':
      if(b.elapsed>=b.duration&&!relocate(game,o,c))enter(game,o,'fly');break;
    default:enter(game,o,'fly');
  }
}

export function bossCanTakeDamage(object) {return !object.boss?.hidden&&!object.boss?.invulnerable;}
/** Called before the host changes health. null means ordinary enemy handling. */
export function bossHitResult(game,o,amount) {
  if(!TYPES.has(o.enemyType))return null;
  if(!bossCanTakeDamage(o))return {damage:0,defeated:false,reaction:false};
  if(o.enemyType==='witch')return {damage:Math.min(amount,Math.max(0,o.health-2)),defeated:o.health-amount<=2,reaction:enemyRandom(o)<.5};
  return {damage:amount,defeated:o.health<=amount,reaction:enemyRandom(o)<(o.enemyType==='maxd'?.5:1/3)};
}
/** Call only for nonterminal accepted hits, after changing health. */
export function bossWasHit(game,o,result) {
  if(!o.boss)return;
  if(!result?.reaction){game.enemyAction(o,'hurt');return;}
  if(o.enemyType==='maxj'){teleport(game,o);return;}
  enter(game,o,'recover',duration(game,o,'hurt',.5),'hurt');
}
export function snapshotBossState(o) {return o.boss?JSON.parse(JSON.stringify(o.boss)):null;}
export function restoreBossState(game,o,saved) {
  if(!TYPES.has(o.enemyType))return;
  initializeBoss(game,o);
  if(!saved||saved.version!==1||saved.type!==o.enemyType||!PHASES.has(saved.phase))return;
  const b=o.boss;
  for(const key of ['elapsed','duration','shots','machineSerial','machineElapsed','teleportIndex','lowerFrom'])if(Number.isFinite(saved[key]))b[key]=saved[key];
  if(!Number.isFinite(b.lowerFrom))b.lowerFrom=n(o.stats.MaxHeight,40);
  for(const key of ['started','released','hidden','invulnerable'])if(typeof saved[key]==='boolean')b[key]=saved[key];
  if(Array.isArray(saved.home)&&saved.home.length===3&&saved.home.every(Number.isFinite))b.home=[...saved.home];
  if(['still','shoot1','litopen','litclose'].includes(saved.machineMotion))b.machineMotion=saved.machineMotion;
  b.phase=saved.phase;
  if(saved.target===null||game.navigation.find(saved.target))b.target=saved.target;
}

import { GAMEPLAY_SETTINGS } from './gameplay-settings.js';
import { transformMotionPoint } from './motions.js';
import { moveEnemy, sweepPlayer, resolveZombieSpawn } from './enemies.js';
import { EnemyNavigation, enemyRandom } from './enemy-navigation.js';
import { PLAYER_SHOOT_MOTION, playerShotDefinition, sweepActor, advancePlayerProjectile } from './player-projectiles.js';
import { BspCollider } from './collision.js';
import { visibleLiquidGroup, liquidDamageRate } from './liquids.js';
import { ProjectileHazards, mushroomTrailDefinition } from './projectile-hazards.js';
import { normalizeDifficulty } from './difficulty.js';
import { initializeBoss, updateBoss, bossHitResult, bossWasHit, snapshotBossState, restoreBossState } from './boss-ai.js';
import { playerInventoryLimits } from './player-inventory.js';
import { showTeleporter } from './teleporter-effects.js';
import { updateBeamContacts } from './beam-contacts.js';
import { initializeEnemyAmbush, updateEnemyAmbush, restoreEnemyAmbush } from './enemy-ambush.js';
import { batFlightTarget, batSeparationTarget, clipBatPlayerContact, batOrbitTarget } from './enemy-flight.js';
import { triggerVelocity, buttonTouched, discoverSecret } from './environment-interactions.js';
import { ENEMY_FADE_SECONDS } from './enemy-death-effects.js';

const n = (value, fallback=0) => Number.isFinite(Number(value)) ? Number(value) : fallback;
const clamp = (value,min,max) => Math.max(min,Math.min(max,value));
const v3 = value => {
  const values=Array.isArray(value)?value:typeof value==='string'?value.trim().split(/\s+/).map(Number):[];
  return values.length===3&&values.every(Number.isFinite)?[...values]:[0,0,0];
};
const distance = (a,b) => Math.hypot(...a.map((v,i)=>v-b[i]));
const initial = (e,key,fallback=true) => e[key]===undefined?fallback:n(e[key])!==0;
const ITEMS={ItemCoin:'coin',ItemHealth:'health',ItemPotion:'potion',ItemMirror:'mirror',ItemLife:'life',ItemHart:'hart',ItemHartContainer:'hart'};
const MOVING={1:['spider','spider'],2:['bat','bat'],3:['ghost','ghost'],4:['zombie','zombie'],5:['frog','frog'],6:['skeleton','skeleton'],7:['brutusm','mushroombrutus'],8:['brutusb','bonebrutus'],9:['witch','witch'],10:['guardian','guardian']};
// Native StandingEnemy factory (0x42ade3): 4 is the castle Jester,
// 5 is Dungeon Max with his turret in the caves.
const STANDING={1:['plant','plant'],2:['knight','knight'],3:['gargoyle','gargoyle'],4:['maxj','jestermax'],5:['maxd','dungeonmax']};

function enemyDefinition(entity,settings,difficulty) {
  const [base,config]=(entity.classname==='StandingEnemy'?STANDING:MOVING)[n(entity.Type)]||['spider','spider'];
  const variant=clamp(n(entity.SubType,1),1,3);
  const colored=['spider','bat','ghost'].includes(base);
  return {base,variant,actorFile:colored?base+['g','y','r'][variant-1]:base,
    stats:settings[config+(colored?variant:'')]?.[difficulty]||settings[config]?.[difficulty]||{}};
}

function itemActor(e) {
  const suffix=['s','m','l'][clamp(n(e.Type,1)-1,0,2)];
  return {ItemCoin:'imoney'+suffix,ItemHealth:'ihealth'+suffix,ItemPotion:'ipotion',ItemMirror:'imirror',ItemLife:'ilife',ItemHart:'ihart',ItemHartContainer:'ihart'}[e.classname];
}

/** Portable, deterministic reconstruction of common original entity behavior.
 * Compiled level behavior is supplied by the isolated Davi-Script VM.
 */
export class Gameplay {
  constructor(level,{onEvent=()=>{},save=null,settings=GAMEPLAY_SETTINGS,difficulty='Normal',deferInit=false}={}) {
    difficulty=normalizeDifficulty(save?.version===1&&save.level===level.id?save.difficulty:difficulty);
    this.level=level;this.onEvent=onEvent;this.settings=settings;this.difficulty=difficulty;
    this.time=0;this.hitCooldown=0;this.attackCooldown=0;this.previousUse=false;this.completed=false;
    this.projectiles=[];this.nextProjectileId=1;
    this.hazards=new ProjectileHazards(settings,difficulty);this.environmentFeedbackCooldown=0;
    this.volumeCollider=level.collision?.nodes?new BspCollider(level.collision):null;
    this.liquidModels=new Set((level.groups||[]).filter(g=>visibleLiquidGroup(g,level.textures)).map(g=>g.model));
    this.playerAttackSerial=0;this.playerAttackUntil=0;this.pendingPlayerAttack=null;
    this.navigation=new EnemyNavigation(level,settings.game?.WayPointSystem);
    this.objects=[];this.names=new Map();this.modelObjects=new Map();this.unsupportedCommands=new Set();this.variables=new Map();
    this.state={health:10,maxHealth:10,score:0,potions:0,mirror:0,lives:3,coins:0,kills:0,secrets:0,skill:0};
    this.state.skill=n(settings.game?.['sublevel1_'+(Number(level.id?.slice(3,5))+1)]?.StandardSkill);
    this.checkpoint={position:[...(level.spawn?.position||[0,0,0])],orientation:level.spawn?.orientation||0};
    this.modelNames=new Map(level.entities.filter(e=>e.classname==='%Model%').map(e=>[String(e['%name%']).toLowerCase(),n(e.Model)]));
    const used=new Set();
    for(let i=0;i<level.entities.length;i++) {
      const e=level.entities[i];if(!e.classname||e.classname.startsWith('%'))continue;
      let id=e['%name%']||`entity${i}`;if(used.has(id))id+=`:${i}`;used.add(id);
      const enemy=['MovingEnemy','StandingEnemy'].includes(e.classname);
      const kind=ITEMS[e.classname]?'pickup':enemy?'enemy':({DoorModel:'door',ButtonModel:'button',Trigger:'trigger',CameraTrigger:'trigger',ModelController:'controller',SavePoint:'savepoint',Fairy:'fairy',AdamAnyActor:'actor'})[e.classname]||'logic';
      const object={id,entity:e,kind,subtype:ITEMS[e.classname],position:v3(e.Origin||e.origin),enabled:initial(e,'IsInitiallyEnabled',initial(e,'Active')),visible:true,collected:false,health:1,
        modelIndex:this.modelNames.get(String(e.Model||'').toLowerCase()),open:initial(e,'IsInitiallyOpen',false),locked:initial(e,'IsInitiallyLocked',false),
        switchedOn:initial(e,'IsInitiallySwitchedOn',false),triggerCount:0,switchCount:0,inside:false,attackTimer:0};
      object.openFraction=object.open?1:0;
      if(kind==='pickup')object.actorFile=itemActor(e);
      if(kind==='enemy') {
        const def=enemyDefinition(e,settings,difficulty);object.actorFile=def.actorFile;object.stats=def.stats;
        object.health=Math.max(1,n(def.stats.Health,3));object.maxHealth=object.health;
        object.enemyType=def.base;object.variant=def.variant;object.flying=['bat','ghost','witch'].includes(def.base);
        this.navigation.initialize(object);
        object.ranged=n(def.stats.AverageShotsPerSalvo)>0||def.base==='maxj';object.animationState='idle';object.animationSerial=0;
        object.animationUntil=0;object.salvoRemaining=0;object.nextIdleAt=2+(i%11)*.63;
        initializeBoss(this,object);
        initializeEnemyAmbush(object);
      }
      if(kind==='actor') {object.actorFile=e.ActorFileName;object.health=n(e.Targetable)?3:1;}
      if(kind==='fairy')object.actorFile=null;
      this.objects.push(object);
      for(const name of [e.DaviName,e['%name%'],e.DaviNameGroup])if(name) {
        const key=name.toLowerCase();if(!this.names.has(key))this.names.set(key,[]);this.names.get(key).push(object);
      }
      if(object.modelIndex!==undefined){if(!this.modelObjects.has(object.modelIndex))this.modelObjects.set(object.modelIndex,[]);this.modelObjects.get(object.modelIndex).push(object);}
    }
    this.totalPotions=this.objects.filter(o=>o.subtype==='potion').length;
    this.triggers=this.objects.filter(o=>o.kind==='trigger');
    if(save)this.restore(save);
    else if(!deferInit)for(const world of this.objects.filter(o=>o.entity.classname==='World'))this.runEvent(world,'OnInitCommand');
  }

  runEvent(object,event,args=[],depth=0) {
    if(this.scripts)return this.scripts.dispatch(object,event,args);
    return this.execute(object.entity[event],object,depth);
  }

  emit(type,details={}) {this.onEvent({type,...details});}
  find(name) {return this.names.get(String(name).toLowerCase())||[];}
  unknown(command) {if(!this.unsupportedCommands.has(command)){this.unsupportedCommands.add(command);this.emit('unsupportedCommand',{command});}}

  /** Interpret an explicit whitelist of RedCat member commands and functions. */
  execute(source,context=null,depth=0) {
    if(!source||depth>16)return;
    const text=String(source).replace(/\\+r\\+n/gi,'\n').replace(/\\+[rn]/gi,'\n').replace(/\\+t/gi,' ').replace(/\/\/[^\n]*/g,'').trim();
    if(!text)return;
    // Conditional DS blocks require the original VM; never run both branches.
    if(/\b(?:if|while|for|sub|function)\b/i.test(text)){this.unknown(text);return;}
    const commands=text.match(/(?:"[^"]*"|[^;\n])+/g)||[];
    for(const raw of commands.slice(0,256)) {
      const command=raw.trim();if(!command)continue;
      const member=command.match(/^([\w%-]+)\.(\w+)\s*(?:\((.*?)\))?$/);
      if(member) {
        const targets=this.find(member[1]);if(!targets.length){this.unknown(command);continue;}
        for(const target of targets)this.command(target,member[2].toLowerCase(),depth+1);
        continue;
      }
      const call=command.match(/^(\w+)\s*\((.*)\)$/);
      if(call) {
        const fn=call[1].toLowerCase(),args=(call[2].match(/"[^"]*"|[^,]+/g)||[]).map(s=>s.trim().replace(/^"|"$/g,''));
        if(fn==='rcsetsavepoint') {
          const target=this.find(args[0])[0];this.setCheckpoint(target?.position||this.playerPosition||this.checkpoint.position,n(args[1]),target?.id);continue;
        }
        if(fn==='rcenableskill'){this.state.skill|=1<<clamp(n(args[0]),0,4);continue;}
        if(fn==='rcsethealth'){this.state.health=clamp(n(args[0]),0,this.state.maxHealth);continue;}
        if(['startcutscene','stopcutscene'].includes(fn)){this.emit('cutscene',{active:fn==='startcutscene'});continue;}
        if(['rcnextlevel','rcendlevel'].includes(fn)){this.complete(args[0]||null);continue;}
        this.unknown(command);continue;
      }
      const assignment=command.match(/^(\w+)\s*=\s*(-?[\d.]+)$/);
      if(assignment){this.variables.set(assignment[1].toLowerCase(),n(assignment[2]));continue;}
      this.unknown(command);
    }
  }

  command(object,verb,depth=0) {
    if(depth>16)return;
    const e=object.entity;
    if(verb==='open'||verb==='close') {this.setDoor(object,verb==='open',depth);return;}
    if(verb==='lock'||verb==='unlock'){object.locked=verb==='lock';return;}
    if(verb==='enable'||verb==='disable') {
      const changed=object.enabled!==(verb==='enable');object.enabled=verb==='enable';this.scripts?.objectEnabled(object,object.enabled,changed);this.emit('enable',{id:object.id,modelIndex:object.modelIndex,enabled:object.enabled,kind:object.kind});
      if(changed&&object.enabled&&e.classname==='CameraTrigger'&&n(e.CamActivateOnEnable))this.trigger(object,depth);
      return;
    }
    if(verb==='show'&&e.classname==='TeleporterFX'){showTeleporter(object);return;}
    if(verb==='show'||verb==='hide'){object.visible=verb==='show';this.emit('visibility',{id:object.id,modelIndex:object.modelIndex,visible:object.visible});return;}
    if(['switchon','switchoff','switch','toggle'].includes(verb)){this.switchButton(object,verb==='switchon'?true:verb==='switchoff'?false:!object.switchedOn,depth);return;}
    if(verb==='trigger'){this.trigger(object,depth);return;}
    if(['destroy','kill'].includes(verb)){this.destroy(object,depth);return;}
    this.unknown(`${e.DaviName||object.id}.${verb}`);
  }

  setDoor(object,open,depth=0) {
    // Disabled doors ignore player interaction, but explicit Davi-Script
    // commands still operate them (the graveyard's final double door).
    if(object.open===open)return;
    // Closing an instantly toggled brush through the player would embed the
    // collision hull. Defer timer and script closes until the doorway is clear.
    if(!open&&this.playerPosition&&this.contains(object,this.playerPosition)){
      object.closeAt=this.time+0.25;return;
    }
    if(open&&object.locked){this.runEvent(object,'DoorIsLockedCommand',[],depth+1);this.emit('message',{text:'Deze deur zit op slot.'});return;}
    // Original castle handlers may Open the very door being opened. Publish
    // the transition first so that identical nested requests are idempotent.
    object.open=open;
    if(open)discoverSecret(this,object);
    this.runEvent(object,open?'DoorBeforeOpenCommand':'DoorBeforeCloseCommand',[],depth+1);
    if(object.open!==open)return; // A nested opposite request supersedes this one.
    object.closeAt=null;
    this.emit('door',{id:object.id,modelIndex:object.modelIndex,open});
    if(!this.scripts?.doorMotion(object,open))this.doorMotionComplete(object,depth);
  }

  doorMotionComplete(object,depth=0) {
    const open=object.open;
    this.runEvent(object,open?'DoorAfterOpenCommand':'DoorAfterCloseCommand',[],depth+1);
    // Native CAdamDoorModel starts its stay-open timer after the opening
    // endpoint and AfterOpen callback, not while the motion is still running.
    // A callback may have started another motion or closed this same door.
    if(open&&object.open&&!object.moving){
      const wait=n(object.entity.TimeToStayOpen,-1);
      object.closeAt=wait>0?this.time+wait:null;
    }
  }

  switchButton(object,on=!object.switchedOn,depth=0) {
    const max=n(object.entity.MaxSwitchTimes,-1);
    if(!object.enabled||object.switchedOn===on||(max>=0&&object.switchCount>=max))return;
    object.switchedOn=on;object.switchCount++;
    if(on)discoverSecret(this,object);
    this.runEvent(object,on?'SwitchOnCommand':'SwitchOffCommand',[],depth+1);
    if(!this.scripts?.doorMotion(object,on))this.runEvent(object,on?'AfterSwitchOnCommand':'AfterSwitchOffCommand',[],depth+1);
    this.emit('button',{id:object.id,modelIndex:object.modelIndex,on});
  }

  trigger(object,depth=0) {
    const e=object.entity,max=n(e.MaxTriggerTimes,-1);
    if(!object.enabled||(max>=0&&object.triggerCount>=max))return;
    object.triggerCount++;
    if(object.triggerCount<n(e.MinTriggerTimes,-1))return;
    discoverSecret(this,object);
    if(e.classname==='CameraTrigger')this.scripts?.activateCamera(object);
    this.runEvent(object,'CommandOnEnter',[],depth+1);
    if(e.TargetSubLevel)this.complete(e.TargetSubLevel);
  }

  complete(target=null) {
    if(this.completed)return;this.completed=true;
    const next=target?.toLowerCase().replace(/\.bsp$/,'');
    this.emit('levelComplete',{target:next&&/^lvl\d\da$/.test(next)?next:null,requestedTarget:target,score:this.state.score});
  }

  setCheckpoint(position,orientation=0,id=null) {
    this.checkpoint={position:v3(position),orientation};this.emit('savepoint',{id,position:[...this.checkpoint.position],snapshot:this.snapshot()});
  }

  damage(amount,source=null,{continuous=false}={}) {
    if(this.state.health<=0||!continuous&&this.hitCooldown>0||!(amount>0))return;
    this.state.health=Math.max(0,this.state.health-amount);
    if(!continuous)this.hitCooldown=0.65;
    // Native liquids subtract fractional health every frame; only the hurt
    // reaction is gated. A normal hit must not grant immunity to the moat.
    if(!continuous||this.environmentFeedbackCooldown<=0||this.state.health===0){
      this.emit('damage',{amount,source,health:this.state.health});
      if(continuous)this.environmentFeedbackCooldown=.65;
    }
    if(this.state.health===0){this.pendingPlayerAttack=null;this.playerAttackUntil=0;this.attackCooldown=0;this.state.lives=Math.max(0,this.state.lives-1);this.emit('death',{lives:this.state.lives,checkpoint:this.checkpoint});}
  }

  respawn() {
    this.state.health=this.state.maxHealth;this.hitCooldown=2;this.completed=false;
    this.hazards.clear();this.projectiles=[];this.environmentFeedbackCooldown=0;
    this.pendingPlayerAttack=null;this.playerAttackUntil=0;this.attackCooldown=0;
    for(const object of this.triggers)object.inside=false;
    for(const world of this.objects.filter(o=>o.entity.classname==='World'))this.runEvent(world,'OnPlayerRespawnCommand');
    return [...this.checkpoint.position];
  }

  pickup(object) {
    if(!object.enabled||object.collected)return;
    const type=clamp(n(object.entity.Type,1)-1,0,2),items=this.settings.items||{},limits=playerInventoryLimits(this.settings);
    if(object.subtype==='health'&&this.state.health>=this.state.maxHealth)return;
    object.collected=true;let score=0;
    if(object.subtype==='coin') {this.state.coins+=[1,5,10][type];score=[5,25,50][type];}
    if(object.subtype==='health'){this.state.health=Math.min(this.state.maxHealth,this.state.health+[1,2,20][type]);score=[5,15,25][type];}
    if(object.subtype==='potion'){this.state.potions=Math.min(limits.potions,this.state.potions+1);score=n(items.Potion?.Score,25);}
    if(object.subtype==='mirror'){this.state.mirror=Math.min(limits.mirrors,this.state.mirror+1);score=n(items.Mirror?.Score,75);}
    if(object.subtype==='life'){this.state.lives++;score=n(items.Life?.Score,75);}
    if(object.subtype==='hart'){this.state.maxHealth=Math.min(20,this.state.maxHealth+1);this.state.health=this.state.maxHealth;score=75;}
    this.state.score=Math.min(limits.score,this.state.score+score);if(n(object.entity.IsSecret))this.state.secrets++;
    const feedback={coin:['Geldzak gevonden!','ICoinM.wav'],health:['Je voelt je weer beter.','IHealthM.wav'],potion:['Toverdrank gevonden!','IPotion.wav'],mirror:['Een stuk van de spiegel gevonden!','IMirror.wav'],life:['Een extra leven!','ILife.wav'],hart:['Een extra hart!','IHealthL.wav']}[object.subtype];
    this.emit('pickup',{id:object.id,kind:object.subtype,subtype:object.subtype,score,message:feedback?.[0],sound:feedback?.[1],state:{...this.state}});
    this.runEvent(object,'PickupCommand');
  }

  destroy(object,depth=0) {
    if(object.health<=0)return;object.health=0;object.enabled=false;
    if(object.kind==='actor'){
      const position=object.effectPosition?.()||[...this.objectPosition(object)];
      (this.explosions||=[]).push({id:object.id+':'+this.time,sourceId:object.id,birth:this.time,position,settings:object.actorSettings||{}});
      this.emit('scriptSound',{sound:'Explosion.wav',spatial:true,position});
    }
    if(object.kind==='enemy'){
      this.state.kills++;this.state.score=Math.min(playerInventoryLimits(this.settings).score,this.state.score+n(object.stats.PlayerScore,15));
      object.pendingAttack=null;this.enemyAnimation(object,'death',this.enemyDuration(object,'death'));
      object.deathStartedAt=this.time;
      delete object.deathSmokeAnchors;
      delete object.deathSmokeVelocities;
      object.corpseUntil=this.time+this.enemyDuration(object,'death')+ENEMY_FADE_SECONDS;
      if(object.enemyType==='witch'){object.visible=false;object.corpseUntil=this.time;}
    }
    this.scripts?.enemyDefeated?.(object);
    this.runEvent(object,'AfterDestroyCommand',[],depth+1);
    this.emit('enemyDefeated',{id:object.id,position:[...object.position]});
  }

  enemyDuration(object,action) {
    const fallback={attack:1.2,hurt:.5,death:1.5,charge:1.933343,start:object.enemyType==='skeleton'?2.1333439350128174:3.2666831016540527};
    return Math.max(.1,n(object.animationDurations?.[action],fallback[action]||1));
  }

  enemyAnimation(object,action,duration=0,rate=1) {
    if(object.animationState===action&&!['attack','hurt','death','teleport'].includes(action))return;
    object.animationState=action;object.animationSerial++;object.animationUntil=this.time+duration;object.animationRate=rate;
    if(action!=='idle'&&action!=='attack')this.enemyAction(object,action);
  }

  enemyAction(object,action) {
    this.emit('enemyAction',{id:object.id,actorFile:object.actorFile,action,position:[...object.position]});
  }

  notePlayerAttack(object,hit=false) {
    if(!object||object.kind!=='enemy'||object.enabled===false||object.visible===false||object.health<=0)return;
    // Starting an aimed attack starts its music immediately. Perception stays
    // unchanged until impact; the native hit handler refreshes enemy memory.
    object.lastAttackedAt=this.time;
    if(hit){
      object.alerted=true;object.lastSeenAt=this.time;
      if(this.playerPosition)object.lastSeenPosition=[...this.playerPosition];
    }
    this.scripts?.updateBossMusic?.();
  }

  hurtEnemy(object,amount) {
    if(object.health<=0||!(amount>=0))return;
    this.notePlayerAttack(object,true);
    if(amount===0)return; // Native armored hits still refresh enemy memory.
    const bossHit=bossHitResult(this,object,amount);
    if(bossHit){
      if(bossHit.defeated){this.destroy(object);return;}
      if(!(bossHit.damage>0))return;
      object.health-=bossHit.damage;bossWasHit(this,object,bossHit);return;
    }
    if(object.health<=amount){this.destroy(object);return;}
    object.health-=amount;object.pendingAttack=null;
    if(object.ambush&&object.ambush.phase!=='awake')object.alerted=true;
    this.enemyAnimation(object,'hurt',this.enemyDuration(object,'hurt'));
  }

  enemyProjectile(object,playerPosition) {
    // Native factory enums differ per boss (see docs/patrol-boss-native.md).
    const key=({spider:'RcEnemyShot',frog:'RcPoison',plant:'RcGoo',skeleton:'RcBone',gargoyle:'RcEnemyShot',
      brutusm:'RcMushRoom',brutusb:object.boneSkullPhase?'RcSkull':'RcBone',maxd:'RcMagma',maxj:'RcJesterBall',witch:'RcMagicBall'})[object.enemyType]||'RcEnemyShot';
    const stats=this.settings['projectile'+this.difficulty.toLowerCase()]?.[key]||{};
    const position=[object.position[0],object.position[1]+25,object.position[2]];
    const delta=playerPosition.map((v,i)=>v+(i===1?28:0)-position[i]),length=Math.hypot(...delta)||1;
    const direction=delta.map(v=>v/length),spread=n(object.stats.BulletDeviation);
    // Native shooting perturbs all three normalized direction components by
    // independent +/- BulletDeviation values and then normalizes again.
    if(spread>0)for(let i=0;i<3;i++)direction[i]+=(enemyRandom(object)*2-1)*spread;
    const aimLength=Math.hypot(...direction)||1,speed=n(stats.InitialSpeed,n(stats.Speed,300)),velocity=direction.map(v=>v/aimLength*speed);
    const radius=Math.max(2,n(stats.Size,.4)*6),life=n(stats.MaximumLifeTimeInSeconds,n(stats.MaximumLifeTime,5));
    const kind=key.slice(2).replace(/^./,s=>s.toLowerCase());
    this.projectiles.push({id:`enemy-projectile-${this.nextProjectileId++}`,sourceId:object.id,kind,
      position,velocity,radius,life,damage:n(stats.Damage,1),gravity:n(stats.Gravity),age:0});
    this.emit('enemyProjectile',{id:object.id,kind,position:[...position]});
  }

  updateProjectiles(dt,playerPosition,traceProjectile,lineOfSight=()=>true) {
    const active=[];
    for(const projectile of this.projectiles) {
      // FreezeEnemies stops enemy ammunition; RedCat can still shoot puzzles.
      if(this.scripts?.enemiesFrozen&&projectile.owner!=='player'){active.push(projectile);continue;}
      const start=projectile.position;
      const step=Math.min(dt,Math.max(0,projectile.life-projectile.age));
      projectile.velocity[1]-=projectile.gravity*step;
      const end=projectile.owner==='player'?advancePlayerProjectile(projectile,step):start.map((v,i)=>v+projectile.velocity[i]*step);
      const wall=traceProjectile?.(start,end,projectile.radius,projectile)||{fraction:1,end};
      const wallFraction=clamp(n(wall.fraction,1),0,1);
      if(projectile.owner==='player') {
        let target=null,fraction=wallFraction;
        if(wallFraction<1){
          // Actor collision can be the exact first hit. Looking only at the
          // brush index discarded crate/turret hits before the body sweep.
          target=this.objects.find(o=>o.id===wall.actorId&&o.enabled&&o.visible&&o.health>0&&
            (o.kind==='enemy'||o.kind==='actor'&&(o.actorSettings?.destroyable||n(o.entity.Targetable))))||null;
          target||=(this.modelObjects.get(wall.modelIndex)||[]).find(o=>o.visible&&o.health>0&&(o.entity.OnHitCommand||o.kind==='button'&&n(o.entity.ShootToSwitch)))||null;
        }
        for(const object of this.objects) {
          if(!object.enabled||!object.visible||object.boss?.hidden||object.health<=0||!(object.kind==='enemy'||object.kind==='button'&&n(object.entity.ShootToSwitch)||object.kind==='actor'&&n(object.entity.Targetable)))continue;
          // Brush controls must be hit on their actual transformed brush, not
          // an editor-origin sphere that could activate from behind a wall.
          if(object.modelIndex!==undefined&&object.kind!=='enemy')continue;
          let hit=sweepActor(start,end,object,projectile.radius);
          if(hit!==null&&object.projectileNarrowPhase)hit=object.projectileNarrowPhase(start,end,projectile.radius);
          if(hit!==null&&hit<fraction&&lineOfSight(start,[object.position[0],object.position[1]+25,object.position[2]])){fraction=hit;target=object;}
        }
        projectile.position=start.map((v,i)=>v+(end[i]-v)*fraction);
        projectile.age+=step;
        if(target||wallFraction<1) {
          if(target)this.playerProjectileHit(target,projectile);
          this.emit('playerProjectileImpact',{id:projectile.id,kind:projectile.kind,target:target?.id||null,position:[...projectile.position],end:[...projectile.position]});
        } else if(projectile.age<projectile.life-1e-8)active.push(projectile);
        continue;
      }
      const playerHit=sweepPlayer(start,end,playerPosition,projectile.radius);
      const hitPlayer=playerHit!==null&&playerHit<wallFraction;
      projectile.position=hitPlayer?start.map((v,i)=>v+(end[i]-v)*playerHit):(wall.end||start.map((v,i)=>v+(end[i]-v)*wallFraction));
      projectile.age+=step;
      this.hazards.trace(projectile,start,projectile.position,{dt:step});
      if(hitPlayer||wallFraction<1) {
        const lives=this.state.lives;
        if(hitPlayer)this.damage(projectile.damage,projectile.sourceId);
        this.emit('enemyProjectileImpact',{sourceId:projectile.sourceId,kind:projectile.kind,position:[...projectile.position],hitPlayer});
        if(this.state.lives!==lives||this.state.health<=0){this.projectiles=[];return;}
      } else if(projectile.age<projectile.life-1e-8)active.push(projectile);
    }
    this.projectiles=active;
  }

  playerProjectileHit(target,projectile) {
    this.runEvent(target,'OnHitCommand',[projectile.damage,projectile.type]);
    if(target.kind==='button')this.switchButton(target);
    else if(target.kind==='enemy')this.hurtEnemy(target,projectile.damage);
    else if(target.kind==='actor'){const remaining=target.health-projectile.damage;if(remaining<=0)this.destroy(target);else target.health=remaining;}
  }

  updateEnemy(object,dt,playerPosition,lineOfSight,traceEnemy) {
    object.attackTimer=Math.max(0,object.attackTimer-dt);
    resolveZombieSpawn(object,traceEnemy);
    if(updateEnemyAmbush(this,object,dt,playerPosition,lineOfSight,traceEnemy))return;
    let batContact=clipBatPlayerContact(object,[...object.position],playerPosition,traceEnemy);
    const from=[object.position[0],object.position[1]+25,object.position[2]],to=[playerPosition[0],playerPosition[1]+28,playerPosition[2]];
    const d=distance(object.position,playerPosition),vertical=Math.abs(from[1]-to[1]);
    const heading=Math.atan2(playerPosition[0]-object.position[0],playerPosition[2]-object.position[2]);
    const angle=Math.abs(Math.atan2(Math.sin(heading-(object.yaw??heading)),Math.cos(heading-(object.yaw??heading))));
    const sensed=d<n(object.stats.SenseRange);
    const inView=d<n(object.stats.VisualRange,450)&&angle<=n(object.stats.ViewAngle,Math.PI)/2;
    const visible=(sensed||inView)&&vertical<(object.flying?500:180)&&lineOfSight(from,to);
    if(visible&&!object.alerted){object.alerted=true;this.enemyAction(object,'alert');}
    if(visible){object.lastSeenAt=this.time;object.lastSeenPosition=[...playerPosition];}
    else if(this.time-n(object.lastSeenAt,-100)>n(object.stats.TimeToRememberVisual,2))object.alerted=false;
    const face=target=>{
      const desired=Math.atan2(target[0]-object.position[0],target[2]-object.position[2]);
      const current=object.yaw??desired,diff=Math.atan2(Math.sin(desired-current),Math.cos(desired-current));
      object.yaw=current+clamp(diff,-n(object.stats.RotationPerSec,Math.PI*3)*dt,n(object.stats.RotationPerSec,Math.PI*3)*dt);
    };
    const walk=(target,{authoredFlight=false,circling=false}={})=>{
      if(!circling)target=batFlightTarget(this,object,target,traceEnemy);
      face(target);const delta=target.map((v,i)=>i===1&&!object.flying?0:v-object.position[i]),length=Math.hypot(...delta);
      const step=Math.min(length,n(object.stats.Speed,55)*dt),before=[...object.position];
      if(length>0&&(authoredFlight||traceEnemy||lineOfSight(from,from.map((v,i)=>v+delta[i]/length*step))))moveEnemy(object,delta.map(v=>v/(length||1)*step),dt,authoredFlight?null:traceEnemy);
      else moveEnemy(object,[0,0,0],dt,traceEnemy);
      batContact=clipBatPlayerContact(object,before,playerPosition,traceEnemy)||batContact;
      const moved=distance(before,object.position)>.01;
      this.enemyAnimation(object,moved?'walk':'idle');return moved;
    };
    if(updateBoss(this,object,dt,{playerPosition,visible,distance:d,face,walk,traceEnemy,lineOfSight}))return;
    // CRcTouchBat pursues until its hull touches RedCat. AttackRange belongs to
    // the inherited perception/navigation settings, not a remote melee strike;
    // treating it as one made green bats hover a hundred units away.
    if(object.enemyType==='bat'&&object.variant===1) {
      object.pendingAttack=null;
      // Older saves can contain the shoot1 attack used by the generic AI.
      if(object.animationState==='attack'){this.enemyAnimation(object,'idle');object.attackTimer=0;}
      if(['hurt','start','charge','teleport'].includes(object.animationState)&&this.time<object.animationUntil){moveEnemy(object,[0,0,0],dt,traceEnemy);return;}
      const orbit=object.batContact;
      if(orbit?.wait>0){orbit.wait=Math.max(0,orbit.wait-dt);this.enemyAnimation(object,'idle');return;}
      if(orbit?.remaining>0){
        orbit.remaining=Math.max(0,orbit.remaining-dt);
        const moved=walk(batOrbitTarget(object,playerPosition),{circling:true});
        // Turn away from a blocked orbit instead of holding against the wall.
        if(!moved)orbit.direction*=-1;
        return;
      }
      object.batContact=null;
      if(visible)walk(batSeparationTarget(this,object)||playerPosition);
      else if(object.alerted&&object.lastSeenPosition&&distance(object.position,object.lastSeenPosition)>10)walk(object.lastSeenPosition);
      else {
        const target=this.navigation.target(object,lineOfSight);
        if(target)walk(target.position);
        else {moveEnemy(object,[0,0,0],dt,traceEnemy);this.enemyAnimation(object,'idle');}
      }
      if(batContact&&object.attackTimer===0&&lineOfSight(from,to)) {
        this.damage(n(object.stats.Damage,1),object.id);object.attackTimer=1;
        // Native contact waits 1000 ms, then chooses another movement state;
        // its clockwise / anticlockwise states each run for 2000 ms.
        object.batContact={wait:1,remaining:2,direction:enemyRandom(object)<.5?-1:1};
        object.flightDetour=null;
        this.enemyAction(object,'attack');
        this.emit('enemyAttack',{id:object.id,position:[...object.position],ranged:false,contact:true});
      }
      return;
    }
    // Strikes happen at the authored pose, not when an attack is requested.
    const locked=['attack','hurt','start','charge','teleport'].includes(object.animationState)&&this.time<object.animationUntil;
    if(object.pendingAttack&&this.time>=object.pendingAttack.at) {
      object.pendingAttack=null;
      if(visible&&d<=n(object.stats.AttackRange,100)+5) {
        if(object.ranged)this.enemyProjectile(object,playerPosition);
        else this.damage(n(object.stats.Damage,1),object.id);
        this.enemyAction(object,'attack');
        this.emit('enemyAttack',{id:object.id,position:[...object.position],ranged:object.ranged});
      }
    }
    if(locked){if(visible)face(playerPosition);moveEnemy(object,[0,0,0],dt,traceEnemy);return;}
    const separation=batSeparationTarget(this,object);
    if(separation){walk(separation);return;}
    if(object.boneChargePending){
      // RcBoneBrutusAttackState enters its charge motion and switches ammo
      // after the last shoot motion, before deciding whether to relocate.
      object.boneChargePending=false;object.boneSkullPhase=!object.boneSkullPhase;
      const rate=.9+.2*enemyRandom(object);
      this.enemyAnimation(object,'charge',this.enemyDuration(object,'charge')/rate,rate);
      moveEnemy(object,[0,0,0],dt,traceEnemy);return;
    }
    // Moving ranged enemies relocate between salvos using the level's path
    // graph. Completing an attack no longer means standing permanently still.
    if(object.relocateAfterSalvo){
      object.relocateAfterSalvo=false;
      if(enemyRandom(object)<n(object.stats.ChanceToMoveAfterSalvo)) {
        this.navigation.build(lineOfSight);
        this.navigation.choose(object,{relocate:true,player:playerPosition});
      }
    }
    if(object.patrol?.relocating){
      const target=this.navigation.target(object,lineOfSight,{relocate:true,player:playerPosition});
      if(target){walk(target.position);return;}
    }
    const range=n(object.stats.AttackRange,100),minimum=n(object.stats.MinPlayerDistance);
    if(visible) {
      face(playerPosition);
      if(d<=range&&d>=minimum&&object.attackTimer===0) {
        const duration=this.enemyDuration(object,'attack');
        this.enemyAnimation(object,'attack',duration);
        const strike=object.ranged?n(object.stats.DrawMotionPart,.5):n(object.stats.ShootMotionCollisionStart,.5);
        object.pendingAttack={at:this.time+duration*clamp(strike,0,1)};
        let wait=n(object.stats.WaitTimeBetweenShots,.4);
        if(object.ranged) {
          if(object.salvoRemaining<=0)object.salvoRemaining=Math.max(1,Math.round(n(object.stats.AverageShotsPerSalvo,2)));
          object.salvoRemaining--;
          if(object.salvoRemaining===0){
            wait=n(object.stats.WaitTimeAfterSalvo,wait);object.relocateAfterSalvo=true;
            if(object.enemyType==='brutusb'){object.boneChargePending=true;wait=0;}
          }
        }
        object.attackTimer=duration+Math.max(0,wait);
        moveEnemy(object,[0,0,0],dt,traceEnemy);return;
      }
      if(object.entity.classname==='MovingEnemy'&&d<minimum&&d>0) {
        walk(object.position.map((v,i)=>v+(v-playerPosition[i])/d*(minimum-d+10)));return;
      }
      if(object.entity.classname==='MovingEnemy'&&d>Math.max(range*.8,minimum)) {
        walk(playerPosition);return;
      }
    } else if(object.entity.classname==='MovingEnemy') {
      if(object.alerted&&object.lastSeenPosition&&distance(object.position,object.lastSeenPosition)>10){walk(object.lastSeenPosition);return;}
      const target=this.navigation.target(object,lineOfSight);
      if(target){walk(target.position);return;}
    }
    moveEnemy(object,[0,0,0],dt,traceEnemy);this.enemyAnimation(object,'idle');
    if(visible&&this.time>=object.nextIdleAt){this.enemyAction(object,'idle');object.nextIdleAt=this.time+7+(object.animationSerial%5);}
  }

  objectPosition(object) {
    // Preserve authored attachment anchors in saves and apply the brush pose
    // for both models and pickups, without accumulating transforms.
    const pose=['pickup','actor'].includes(object.kind)&&this.scripts?.modelTransforms.get(object.modelIndex);
    return pose?transformMotionPoint(object.position,pose.origin,pose):object.position;
  }

  environmentVelocity(position) {return triggerVelocity(this,position);}

  contains(object,position,padding=0) {
    const model=this.level.collision?.models?.[object.modelIndex];
    if(!model)return distance(object.position,position)<Math.max(24,n(object.entity.TriggerRadius,24));
    const pose=this.scripts?.modelTransforms.get(object.modelIndex);
    let min=model.min,max=model.max;
    if(pose) {
      min=[Infinity,Infinity,Infinity];max=[-Infinity,-Infinity,-Infinity];
      for(let mask=0;mask<8;mask++){
        const p=transformMotionPoint(model.min.map((v,i)=>mask&(1<<i)?model.max[i]:v),pose.origin,pose);
        for(let i=0;i<3;i++){min[i]=Math.min(min[i],p[i]);max[i]=Math.max(max[i],p[i]);}
      }
    }
    if(!min.every((v,i)=>position[i]+(i===1?56:11)+padding>=v&&position[i]-(i===1?0:11)-padding<=max[i]))return false;
    if(!this.volumeCollider)return true;
    this.volumeCollider.modelTransforms=this.scripts?.modelTransforms||new Map();
    return this.volumeCollider.contents(position,[-11-padding,-padding,-11-padding],[11+padding,56+padding,11+padding],[object.modelIndex])!==0;
  }

  attack(position,forward,target=null) {
    if(this.attackCooldown>1e-8||this.pendingPlayerAttack||this.scripts&&(!this.scripts.weaponsEnabled||this.scripts.cutscene||!(this.state.skill&1)))return false;
    const shot=playerShotDefinition(this.state.skill,this.settings,this.difficulty),duration=PLAYER_SHOOT_MOTION.duration/PLAYER_SHOOT_MOTION.rate;
    this.attackCooldown=Math.max(n(shot.stats.RechargeTime,1),duration);
    this.playerAttackSerial++;this.playerAttackUntil=this.time+duration;
    this.pendingPlayerAttack={at:this.time+duration*PLAYER_SHOOT_MOTION.releaseFraction,position:v3(position),forward:v3(forward),skill:this.state.skill};
    this.notePlayerAttack(target);
    return true;
  }

  releasePlayerAttack(position=null,forward=null,releaseOrigin=null,aimTarget=null) {
    const pending=this.pendingPlayerAttack;
    if(!pending||this.time+1e-8<pending.at)return;
    this.pendingPlayerAttack=null;
    if(this.scripts&&(!this.scripts.weaponsEnabled||this.scripts.cutscene))return;
    const shot=playerShotDefinition(pending.skill,this.settings,this.difficulty),stats=shot.stats;
    const feet=position||pending.position,aim=forward||pending.forward,length=Math.hypot(...aim)||1;
    let dir=aim.map(v=>v/length);
    const boneOrigin=releaseOrigin?.({kind:shot.kind,type:shot.type,serial:this.playerAttackSerial});
    const origin=Array.isArray(boneOrigin)&&boneOrigin.length===3&&boneOrigin.every(Number.isFinite)?[...boneOrigin]:[feet[0],feet[1]+38,feet[2]],speed=n(stats.InitialSpeed,300);
    const target=aimTarget?.();
    if(target){const delta=target.map((v,i)=>v-origin[i]),distance=Math.hypot(...delta)||1;dir=delta.map(v=>v/distance);}
    const projectile={id:`player-projectile-${this.nextProjectileId++}`,sourceId:'redcat',owner:'player',kind:shot.kind,type:shot.type,
      position:[...origin],velocity:dir.map(v=>v*speed),radius:3,life:n(stats.MaximumLifeTimeInSeconds,5),
      damage:n(stats.Damage,1),gravity:n(stats.Gravity),acceleration:n(stats.SpeedIncreasePerSecond),maximumSpeed:n(stats.MaximumSpeed,1000),age:0};
    this.projectiles.push(projectile);
    this.emit('attack',{id:projectile.id,kind:shot.kind,origin,direction:dir});
  }

  update(dt,playerPosition,{attack=false,use=false,forward=[0,0,-1],lineOfSight=()=>true,traceShot=null,traceEnemy=null,traceProjectile=null,traceBeam=null,releaseOrigin=null,aimTarget=null,attackTarget=null,touchedModels=[],environmentContents=0,previousPlayerPosition=playerPosition}={}) {
    dt=clamp(n(dt),0,0.1);this.time+=dt;this.playerPosition=v3(playerPosition);
    this.hitCooldown=Math.max(0,this.hitCooldown-dt);if(!this.scripts?.cutscene)this.attackCooldown=Math.max(0,this.attackCooldown-dt);
    if(this.state.health<=0||this.completed)return;
    if(this.scripts?.cutscene||this.scripts?.enemiesFrozen)for(const object of this.objects)if(object.kind==='enemy') {
      for(const key of ['animationUntil','corpseUntil','deathStartedAt','nextIdleAt','lastSeenAt','lastAttackedAt'])if(Number.isFinite(object[key]))object[key]+=dt;
      if(object.pendingAttack)object.pendingAttack.at+=dt;
    }
    if(this.scripts?.cutscene){
      if(this.pendingPlayerAttack)this.pendingPlayerAttack.at+=dt;
      if(this.playerAttackUntil>this.time-dt)this.playerAttackUntil+=dt;
      return;
    }
    this.environmentFeedbackCooldown=Math.max(0,this.environmentFeedbackCooldown-dt);
    if(this.explosions)this.explosions=this.explosions.filter(effect=>this.time-effect.birth<6);
    const lives=this.state.lives;
    this.damage(liquidDamageRate(environmentContents,this.settings)*dt,'liquid',{continuous:true});
    if(this.state.lives!==lives||this.state.health<=0)return;
    updateBeamContacts(this,dt,playerPosition,{previous:previousPlayerPosition,trace:traceBeam});
    if(this.state.lives!==lives||this.state.health<=0)return;
    this.hazards.advance(dt,{frozen:!!this.scripts?.enemiesFrozen,playerPosition,previousPlayerPosition,damage:(amount,source)=>this.damage(amount,source)});
    if(this.state.lives!==lives||this.state.health<=0)return;
    this.updateProjectiles(dt,this.playerPosition,traceProjectile||traceShot,lineOfSight);
    if(this.state.lives!==lives||this.state.health<=0)return;
    if(attack)this.attack(this.playerPosition,forward,attackTarget?.());
    this.releasePlayerAttack(this.playerPosition,forward,releaseOrigin,aimTarget);
    // Pausing a model's timeline does not remove its solid brush or contact hooks.
    for(const index of touchedModels)for(const object of this.modelObjects.get(index)||[])if(object.kind==='controller'&&object.visible&&object.health>0)this.runEvent(object,'OnTouchCommand');
    const pressedUse=use&&!this.previousUse;this.previousUse=use;
    for(const object of this.objects) {
      if(this.state.lives!==lives||this.state.health<=0)return;
      if(!object.enabled||object.collected||object.health<=0)continue;
      const e=object.entity,position=this.objectPosition(object),d=distance(position,playerPosition);
      if(object.kind==='pickup'&&d<38&&lineOfSight([playerPosition[0],playerPosition[1]+22,playerPosition[2]],[position[0],position[1]+18,position[2]]))this.pickup(object);
      if(object.kind==='trigger') {
        const inside=this.contains(object,playerPosition);
        if(inside&&!object.inside)this.trigger(object);
        if(!inside&&object.inside)this.runEvent(object,'CommandOnLeave');
        object.inside=inside;
        if(inside&&n(e.DamagePerSecond)>0)this.damage(n(e.DamagePerSecond)*dt,object.id,{continuous:true});
        if(this.state.lives!==lives||this.state.health<=0)return;
      }
      if(object.kind==='door') {
        object.openFraction=clamp(object.openFraction+(object.open?1:-1)*dt*2,0,1);
        if(object.closeAt&&this.time>=object.closeAt)this.setDoor(object,false);
        const playerActivated=n(e.TouchToOpen)>0||n(e.TriggerRadius)>0;
        if((pressedUse&&playerActivated&&d<105)||(n(e.TouchToOpen)&&this.contains(object,playerPosition)))this.setDoor(object,true);
      }
      if(object.kind==='button') {
        const touching=buttonTouched(this,object,playerPosition,touchedModels);
        if((pressedUse&&d<105)||(n(e.TouchToSwitch)&&touching&&!object.inside))this.switchButton(object);
        object.inside=touching;
      }
      // SavePoint is the crystal's visual beam effect. The authored trigger's
      // RcSetSavePoint command selects the actual player checkpoint.
      if(object.kind==='enemy'&&!this.scripts?.enemiesFrozen)this.updateEnemy(object,dt,playerPosition,lineOfSight,traceEnemy);
    }
  }

  modelState(index) {
    // An item's Model is its moving support, not geometry owned by the item.
    // Collecting a potion must not remove the bridge beneath the player.
    const objects=(this.modelObjects.get(index)||[]).filter(o=>!['pickup','actor'].includes(o.kind));
    const onlyTriggers=objects.length>0&&objects.every(o=>o.kind==='trigger');
    const door=objects.find(o=>o.kind==='door');
    return {visible:(!onlyTriggers||this.liquidModels.has(index))&&objects.every(o=>o.visible&&!o.collected&&o.health>0)&&!(door?.open&&!door.hasMotion),
      solid:!onlyTriggers&&!(door?.open&&!door.hasMotion)&&objects.every(o=>o.visible&&!o.collected&&o.health>0&&o.entity.PlayerCollision!=='0'),
      open:door?.open||false,openFraction:door?.openFraction||0};
  }

  snapshot() {
    return {version:1,level:this.level.id,difficulty:this.difficulty,state:{...this.state},time:this.time,completed:this.completed,
      hazards:this.hazards.snapshot(),environmentFeedbackCooldown:this.environmentFeedbackCooldown,hitCooldown:this.hitCooldown,
      attackCooldown:this.attackCooldown,playerAttackSerial:this.playerAttackSerial,playerAttackUntil:this.playerAttackUntil,
      pendingPlayerAttack:this.pendingPlayerAttack?{...this.pendingPlayerAttack,position:[...this.pendingPlayerAttack.position],forward:[...this.pendingPlayerAttack.forward]}:null,
      nextProjectileId:this.nextProjectileId,projectiles:this.projectiles.map(p=>({...p,position:[...p.position],velocity:[...p.velocity]})),
      scripts:this.scripts?.snapshot(),checkpoint:{...this.checkpoint,position:[...this.checkpoint.position]},variables:[...this.variables],
      objects:this.objects.map(o=>({id:o.id,position:[...o.position],enabled:o.enabled,visible:o.visible,collected:o.collected,health:o.health,open:o.open,locked:o.locked,switchedOn:o.switchedOn,triggerCount:o.triggerCount,switchCount:o.switchCount,openFraction:o.openFraction,closeAt:o.closeAt,inside:o.inside,volume:o.volume,motionSpeed:o.motionSpeed,
        animationState:o.animationState,animationSerial:o.animationSerial,animationUntil:o.animationUntil,animationRate:o.animationRate,corpseUntil:o.corpseUntil,deathStartedAt:o.deathStartedAt,deathSmokeAnchors:o.deathSmokeAnchors?.map(p=>[...p]),deathSmokeVelocities:o.deathSmokeVelocities?.map(p=>[...p]),effectAge:o.effectAge,teleportEffectAge:o.teleportEffectAge,teleportEffectSerial:o.teleportEffectSerial,beamContactDelay:o.beamContactDelay,beamTriggered:o.beamTriggered,secretFound:o.secretFound,actorAge:o.actorAge,lastAttackedAt:o.lastAttackedAt,rotation:o.rotation?[...o.rotation]:undefined,
        pendingAttack:o.pendingAttack?{...o.pendingAttack}:null,attackTimer:o.attackTimer,salvoRemaining:o.salvoRemaining,
        boss:snapshotBossState(o),ambush:o.ambush?structuredClone(o.ambush):null,flightDetour:o.flightDetour?{...o.flightDetour}:null,batContact:o.batContact?{...o.batContact}:null,
        patrol:o.patrol?{...o.patrol}:null,aiRandomState:o.aiRandomState,relocateAfterSalvo:o.relocateAfterSalvo,boneSkullPhase:o.boneSkullPhase,boneChargePending:o.boneChargePending,lastSeenPosition:o.lastSeenPosition?[...o.lastSeenPosition]:null,
        velocityY:o.velocityY,grounded:o.grounded,lastSeenAt:o.lastSeenAt,nextIdleAt:o.nextIdleAt,alerted:o.alerted,yaw:o.yaw}))};
  }

  restore(save) {
    if(!save||save.version!==1||save.level!==this.level.id)return false;
    // A saved encounter retains its own difficulty. Older saves were all
    // Normal; the next-level preference must not silently retune them.
    this.difficulty=normalizeDifficulty(save.difficulty);
    for(const object of this.objects)if(object.kind==='enemy') {
      const definition=enemyDefinition(object.entity,this.settings,this.difficulty);
      object.stats=definition.stats;object.maxHealth=Math.max(1,n(definition.stats.Health,3));
      object.health=Math.min(object.health,object.maxHealth);
      object.ranged=n(definition.stats.AverageShotsPerSalvo)>0||definition.base==='maxj';
    }
    this.hazards.definition=mushroomTrailDefinition(this.settings,this.difficulty);
    for(const key of Object.keys(this.state))if(Number.isFinite(save.state?.[key]))this.state[key]=Math.max(0,save.state[key]);
    this.state.maxHealth=clamp(this.state.maxHealth,1,20);this.state.health=clamp(this.state.health,0,this.state.maxHealth);
    if(save.checkpoint)this.checkpoint={position:v3(save.checkpoint.position),orientation:n(save.checkpoint.orientation)};
    this.time=n(save.time);this.completed=!!save.completed;this.variables=new Map(Array.isArray(save.variables)?save.variables.filter(pair=>Array.isArray(pair)&&pair.length===2):[]);
    this.hazards.restore(save.hazards);this.environmentFeedbackCooldown=Math.max(0,n(save.environmentFeedbackCooldown));this.hitCooldown=Math.max(0,n(save.hitCooldown));
    this.nextProjectileId=Math.max(1,n(save.nextProjectileId,1));
    this.attackCooldown=Math.max(0,n(save.attackCooldown));this.playerAttackSerial=n(save.playerAttackSerial);this.playerAttackUntil=n(save.playerAttackUntil);
    this.pendingPlayerAttack=save.pendingPlayerAttack&&Number.isFinite(save.pendingPlayerAttack.at)?{...save.pendingPlayerAttack,position:v3(save.pendingPlayerAttack.position),forward:v3(save.pendingPlayerAttack.forward)}:null;
    this.projectiles=(Array.isArray(save.projectiles)?save.projectiles:[]).filter(p=>p&&typeof p.id==='string'&&Array.isArray(p.position)&&p.position.length===3&&p.position.every(Number.isFinite)&&Array.isArray(p.velocity)&&p.velocity.length===3&&p.velocity.every(Number.isFinite)&&['radius','life','damage','gravity','age'].every(key=>Number.isFinite(p[key]))&&p.life>p.age).slice(0,256).map(p=>({...p,position:[...p.position],velocity:[...p.velocity]}));
    const saved=new Map((save.objects||[]).map(o=>[o.id,o]));
    for(const object of this.objects) {
      const value=saved.get(object.id);if(!value)continue;
      if(Number.isFinite(value.health))object.restoredHealth=true;
      for(const key of ['enabled','visible','collected','open','locked','switchedOn','inside','grounded','alerted','relocateAfterSalvo','boneSkullPhase','boneChargePending','beamTriggered','secretFound'])if(typeof value[key]==='boolean')object[key]=value[key];
      for(const key of ['health','triggerCount','switchCount','openFraction','closeAt','volume','motionSpeed','animationSerial','animationUntil','corpseUntil','attackTimer','salvoRemaining','velocityY','lastSeenAt','lastAttackedAt','nextIdleAt','yaw','aiRandomState'])if(Number.isFinite(value[key]))object[key]=value[key];
      if(Number.isFinite(value.deathStartedAt)&&object.health<=0)object.deathStartedAt=value.deathStartedAt;else delete object.deathStartedAt;
      for(const key of ['deathSmokeAnchors','deathSmokeVelocities']) {
        if(object.health<=0&&Array.isArray(value[key])&&value[key].length===15&&value[key].every(p=>Array.isArray(p)&&p.length===3&&p.every(Number.isFinite)))object[key]=value[key].map(p=>[...p]);else delete object[key];
      }
      if(Number.isFinite(value.animationRate)&&value.animationRate>0)object.animationRate=value.animationRate;
      if(Number.isFinite(value.effectAge)&&value.effectAge>=0)object.effectAge=value.effectAge;
      for(const key of ['teleportEffectAge','teleportEffectSerial','beamContactDelay'])if(Number.isFinite(value[key])&&value[key]>=0)object[key]=value[key];
      if(Number.isFinite(value.actorAge)&&value.actorAge>=0)object.actorAge=value.actorAge;
      if(Array.isArray(value.rotation)&&value.rotation.length===3&&value.rotation.every(Number.isFinite))object.rotation=[...value.rotation];
      if(['idle','walk','attack','hurt','death','charge','start','teleport','dormant'].includes(value.animationState))object.animationState=value.animationState;
      object.pendingAttack=value.pendingAttack&&Number.isFinite(value.pendingAttack.at)?{at:value.pendingAttack.at}:null;
      if(object.patrol&&value.patrol&&typeof value.patrol==='object'){
        for(const key of ['start','current','target','previous'])if(value.patrol[key]===null||this.navigation.find(value.patrol[key]))object.patrol[key]=value.patrol[key];
        for(const key of ['leftStart','relocating'])if(typeof value.patrol[key]==='boolean')object.patrol[key]=value.patrol[key];
      }
      if(Array.isArray(value.lastSeenPosition)&&value.lastSeenPosition.length===3&&value.lastSeenPosition.every(Number.isFinite))object.lastSeenPosition=[...value.lastSeenPosition];
      restoreBossState(this,object,value.boss);
      if(value.position)object.position=v3(value.position);
      restoreEnemyAmbush(object,value.ambush);
      if(object.enemyType==='bat'&&this.navigation.find(value.flightDetour?.target)&&Number.isFinite(value.flightDetour.until))object.flightDetour={...value.flightDetour};
      if(object.enemyType==='bat'&&value.batContact&&[value.batContact.wait,value.batContact.remaining].every(Number.isFinite))object.batContact={wait:clamp(value.batContact.wait,0,1),remaining:clamp(value.batContact.remaining,0,2),direction:value.batContact.direction<0?-1:1};
      if(['maxd','maxj'].includes(object.enemyType)&&['maxd','maxj'].includes(value.boss?.type)&&value.boss.type!==object.enemyType) {
        // Version 0.2.5 swapped the original standing-enemy enum. Keep save
        // progress and damage, but discard the other boss's incompatible
        // raised/teleported pose, ammunition and animation state.
        const previous=this.settings[value.boss.type==='maxd'?'dungeonmax':'jestermax']?.[this.difficulty];
        object.health=clamp(object.health/Math.max(1,n(previous?.Health,object.maxHealth))*object.maxHealth,0,object.maxHealth);
        object.position=v3(object.entity.Origin);initializeBoss(this,object);
        object.animationState=object.health>0?'idle':'death';object.animationUntil=this.time;
        object.pendingAttack=null;object.attackTimer=0;
        this.projectiles=this.projectiles.filter(p=>p.sourceId!==object.id);
      }
    }
    if(this.scripts&&save.scripts)this.scripts.restore(save.scripts);
    return true;
  }
}

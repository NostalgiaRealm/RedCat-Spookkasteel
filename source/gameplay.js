import { GAMEPLAY_SETTINGS } from './gameplay-settings.js';
import {restoreLevelSummary} from './debriefing.js';
import { transformMotionPoint } from './motions.js';
import { moveEnemy, sweepPlayer, resolveZombieSpawn } from './enemies.js';
import {updateZombieGraveRise} from './zombie-grave-rise.js';
import { EnemyNavigation, enemyRandom } from './enemy-navigation.js';
import {initializeEnemySalvo,enemySalvoSize,usesTouchPursuit} from './enemy-combat-native.js';
import { PLAYER_SHOOT_MOTION, PLAYER_SUPER_CHARGE, playerShotDefinition, sweepActor, advancePlayerProjectile, restorePlayerProjectileFlight } from './player-projectiles.js';
import { BspCollider } from './collision.js';
import { visibleLiquidGroups, liquidContactModels, liquidDamageRate } from './liquids.js';
import { ProjectileHazards, mushroomTrailDefinition } from './projectile-hazards.js';
import { advanceProjectileAnimation } from './projectile-animation.js';
import { ENEMY_PROJECTILE_GRAVITY_SCALE, enemyProjectileDeviation, enemyProjectileLifetime, restoreEnemyProjectileFlight, retargetMagicProjectile, enemyProjectileFlightBudget, advanceEnemyProjectileFlight } from './enemy-projectiles.js';
import { normalizeDifficulty } from './difficulty.js';
import { initializeBoss, updateBoss, bossHitResult, bossWasHit, snapshotBossState, restoreBossState } from './boss-ai.js';
import { playerInventoryLimits } from './player-inventory.js';
import { showTeleporter } from './teleporter-effects.js';
import { updateBeamContacts } from './beam-contacts.js';
import { initializeEnemyAmbush, updateEnemyAmbush, restoreEnemyAmbush, updateStoneAlert } from './enemy-ambush.js';
import { batFlightTarget, batSeparationTarget, clipBatPlayerContact, cancelBatFlightSearch } from './enemy-flight.js';
import {touchWaypointTarget} from './enemy-waypoint-steering.js';
import { triggerVelocity, playerActivatesModel, withinTriggerRadius, discoverSecret } from './environment-interactions.js';
import { ENEMY_FADE_SECONDS } from './enemy-death-effects.js';
import { beginPlayerReaction, advancePlayerReaction, restorePlayerReaction, PLAYER_RESPAWN_PROTECTION_SECONDS } from './player-lifecycle.js';
import { NATIVE_PROJECTILE_RADIUS, restoreProjectileCollision } from './projectile-collision.js';
import { enemyProjectileOrigins } from './enemy-projectile-origins.js';
import {createProjectileImpact,retainProjectileImpacts,restoreProjectileImpacts} from './projectile-impacts.js';
import {createGargoyleBlast,advanceGargoyleBlasts,restoreGargoyleBlasts} from './gargoyle-blast.js';
import {createRewardEffect,retainRewardEffects,restoreRewardEffects} from './reward-effects.js';
import {nativeExplosionSound,restoreNativeExplosions} from './explosion-native.js';
import {createNativeExplosionDamage,advanceExplosionDamage,advanceExplosionDamageClocks,restoreExplosionDamage} from './explosion-damage.js';
import {restoreSpoutSnapshots} from './spout-effects.js';
import {restoreKnightDebrisState} from './knight-debris.js';
import {damageDestructible,restorePropDamage} from './destructible-damage.js';
import {cancelPendingGraveyardMazeExit,resetGraveyardMaze} from './graveyard-maze.js';
import {pickupPosition} from './pickup-placement.js';
import {enemyMotionRate,nativeEnemyIdleCycle,enemyIdleClip} from './enemy-animation-rules.js';
import {ordinaryEnemyHit,reactToEnemyHit} from './enemy-hit-native.js';
import {usesNativeShooter,nativeShooterActive,updateNativeShooter,restoreNativeShooterState} from './enemy-shooter-native.js';
import {usesNativeStandingShooter,updateNativeStandingShooter,restoreNativeStandingShooter} from './enemy-standing-shooter-native.js';
import {playerLandingImpact} from './player-landing.js';
import {restoreTriggerPhase,updateTriggerContact} from './trigger-contact-native.js';
import {buttonSettled} from './button-controller-native.js';
import {PLAYER_MINS,PLAYER_MAXS,PLAYER_HEIGHT,PLAYER_CENTRE_HEIGHT} from './player-hull.js';
import {KnightPose} from './knight-pose-native.js';
import {enemySightEye,enemySeesPlayer,KNIGHT_STRIKE_SEGMENT,knightStrikeHits,UNAWARE_CHATTER,ENEMY_THINK_RADIUS,ENEMY_THINK_INTERVAL,ENEMY_SIGHT_INTERVAL,newEnemySight,newEnemyThink} from './enemy-perception-native.js';

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
  const section=config==='guardian'&&difficulty==='Easy'?GUARDIAN_EASY_NATIVE:
    settings[config+(colored?variant:'')]?.[difficulty]||settings[config]?.[difficulty]||{};
  return {base,variant,actorFile:colored?base+['g','y','r'][variant-1]:base,stats:withNativeEnemyDefaults(config,section)};
}

// D4: the shipped Guardian.ini opens its Easy block with "[Easy" and no ']'.
// The original's INI parser (0x5a4c70) creates no section, so all 13 Easy keys
// are dropped and Easy guardians keep the loaders' defaults (0x4258a0..0x426eb9).
const GUARDIAN_EASY_NATIVE=Object.freeze({AttackRange:100,Health:5,HitMotionFactor:1,PlayerScore:0,RotationPerSec:3*Math.PI,
  TimeToRememberVisual:2,VisualRange:250,SenseRange:50,MinPlayerDistance:0,ViewAngle:Math.PI,Speed:50,WalkMotionFactor:1,Damage:1});

// CRcEnemy's constructor seeds the shooter fields before the INI section is
// read, so Jester sections that omit them (Easy/Hard) keep these values.
const NATIVE_ENEMY_DEFAULTS={jestermax:{AverageShotsPerSalvo:3,BulletDeviation:.05,MinPlayerDistance:100}};
function withNativeEnemyDefaults(config,stats) {
  const defaults=NATIVE_ENEMY_DEFAULTS[config];
  return defaults?{...defaults,...stats}:stats;
}

// CRcEnemyDie (0x403950/0x403b50) runs AfterDestroyCommand when the death
// motion ends. The port previously ran it at the killing blow for every type;
// defer it for the bosses and zombies whose shipped handlers start scenes.
const DEFERRED_AFTER_DESTROY=new Set(['brutusb','brutusm','maxj','maxd','zombie']);
// Ghosts use CRcDropDeadState (0x405cc0..0x405f50): a 5000 ms concurrent
// sink to the floor and fade from the moment of death.
const DROP_DEAD_SECONDS=5;

function boxesOverlap(a,aMins,aMaxs,b,bMins,bMaxs,tolerance=0) {
  for(let i=0;i<3;i++)if(a[i]+aMins[i]-tolerance>b[i]+bMaxs[i]||b[i]+bMins[i]>a[i]+aMaxs[i]+tolerance)return false;
  return true;
}

function itemActor(e) {
  const suffix=['s','m','l'][clamp(n(e.Type,1)-1,0,2)];
  // Capacity pickups use the larger golden hartcontainer actor, not IHart's
  // small red heart. Its imported INI supplies the size, lighting and spin.
  return {ItemCoin:'imoney'+suffix,ItemHealth:'ihealth'+suffix,ItemPotion:'ipotion',ItemMirror:'imirror',ItemLife:'ilife',ItemHart:'hartcontainer',ItemHartContainer:'hartcontainer'}[e.classname];
}

/** Portable, deterministic reconstruction of common original entity behavior.
 * Compiled level behavior is supplied by the isolated Davi-Script VM.
 */
export class Gameplay {
  constructor(level,{onEvent=()=>{},save=null,settings=GAMEPLAY_SETTINGS,difficulty='Normal',deferInit=false,knightPose=null}={}) {
    difficulty=normalizeDifficulty(save?.version===1&&save.level===level.id?save.difficulty:difficulty);
    this.level=level;this.onEvent=onEvent;this.settings=settings;this.difficulty=difficulty;
    // Optional knight skeleton (bones, animations, settings) for sword strikes
    // without a rendered knight; a rendered one supplies its own pose.
    this.knightPose=knightPose?new KnightPose(knightPose):null;
    this.time=0;this.hitCooldown=0;this.respawnProtection=0;this.hurtSoundUntil=0;this.entryState=null;this.attackCooldown=0;this.previousUse=false;this.completed=false;
    this.projectiles=[];this.gargoyleBlasts=[];this.nextProjectileId=1;this.projectileImpacts=[];
    this.rewardEffects=[];this.explosions=[];this.explosionDamage=[];
    this.hazards=new ProjectileHazards(settings,difficulty);this.environmentFeedbackCooldown=0;
    this.volumeCollider=level.collision?.nodes?new BspCollider(level.collision):null;
    this.liquidModels=new Set([...visibleLiquidGroups(level)].map(g=>g.model));
    this.liquidContactModels=liquidContactModels(level.collision);
    this.playerAttackSerial=0;this.playerAttackUntil=0;this.pendingPlayerAttack=null;
    this.navigation=new EnemyNavigation(level,settings.game?.WayPointSystem);
    this.objects=[];this.dyingEnemies=new Set();this.names=new Map();this.modelObjects=new Map();this.unsupportedCommands=new Set();this.variables=new Map();
    const player=settings.game?.Player||{};
    // Game.ini [Player] InitialLifes (0x437c20); native default 3.
    this.state={health:10,maxHealth:10,score:0,potions:0,mirror:0,lives:Number.isInteger(player.InitialLifes)&&player.InitialLifes>=0?player.InitialLifes:3,coins:0,kills:0,secrets:0,skill:0};
    this.state.skill=n(settings.game?.['sublevel1_'+(Number(level.id?.slice(3,5))+1)]?.StandardSkill);
    // The original cave default (7) includes BIG BENG before its own
    // 30-potion fairy gate. Correct only this fresh loadout; restore below and
    // campaign/carry merging may still supply a legitimately learned bit 4.
    if(level.id==='lvl03a')this.state.skill&=~4;
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
      if(kind==='trigger')object.triggerPhase=0;
      if(kind==='enemy') {
        const def=enemyDefinition(e,settings,difficulty);object.actorFile=def.actorFile;object.stats=def.stats;
        object.health=Math.max(1,n(def.stats.Health,3));object.maxHealth=object.health;
        object.enemyType=def.base;object.variant=def.variant;object.alerted=false;object.flying=['bat','ghost','witch'].includes(def.base);
        this.navigation.initialize(object);
        object.ranged=n(def.stats.AverageShotsPerSalvo)>0||def.base==='maxj';object.animationState='idle';object.animationSerial=0;
        object.animationUntil=0;object.salvoRemaining=0;object.sight=newEnemySight();object.think=newEnemyThink();
        initializeEnemySalvo(object);
        initializeBoss(this,object);
        initializeEnemyAmbush(object);
        if(object.enemyType==='knight'&&this.knightPose)object.knightStrikeSegment=()=>this.knightPose.segment(object,this.time);
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
  find(name) {
    const key=String(name).toLowerCase(),matches=[...new Set(this.names.get(key)||[])];
    // Davi-Script names outrank editor labels. Forest Fairy10 is named
    // fairy11 in the script; editor Fairy11 is a different, later encounter.
    const scripted=matches.filter(o=>[o.entity.DaviName,o.entity.DaviNameGroup].some(value=>value?.toLowerCase()===key));
    return scripted.length?scripted:matches;
  }
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
    if(verb==='lock'||verb==='unlock'){
      // 0x4cd800 plays the DoorType's Lock/Unlock cue only on a state change.
      const locked=verb==='lock',changed=!!object.locked!==locked;object.locked=locked;
      if(changed&&object.kind==='door')this.emit('doorLock',{id:object.id,locked});
      return;
    }
    if(verb==='enable'||verb==='disable') {
      // CRcParticleSystem Enable restarts birth/life timers even if already on.
      // This visual revision is unrelated to EffectSound/EffectMusic commands.
      if(verb==='enable'&&e.classname==='EffectSpoutEntity'){object.spoutEnableSerial=(object.spoutEnableSerial||0)+1;object.effectAge=0;}
      const changed=object.enabled!==(verb==='enable');object.enabled=verb==='enable';this.scripts?.objectEnabled(object,object.enabled,changed);this.emit('enable',{id:object.id,modelIndex:object.modelIndex,enabled:object.enabled,kind:object.kind});
      // CamActivateOnEnable re-activates on every Enable, within the trigger
      // limit, without running CommandOnEnter (D8).
      if(object.enabled&&e.classname==='CameraTrigger'&&n(e.CamActivateOnEnable)) {
        const max=n(e.MaxTriggerTimes,-1);
        if(!(max>0&&object.triggerCount>=max)){object.triggerCount++;this.scripts?.activateCamera(object);}
      }
      return;
    }
    if(verb==='show'&&e.classname==='TeleporterFX'){showTeleporter(object);return;}
    if(verb==='show'||verb==='hide'){object.visible=verb==='show';this.emit('visibility',{id:object.id,modelIndex:object.modelIndex,visible:object.visible});return;}
    if(['switchon','switchoff','switch','toggle'].includes(verb)){this.switchButton(object,verb==='switchon'?true:verb==='switchoff'?false:!object.switchedOn,depth,{explicit:true});return;}
    if(verb==='trigger'){this.trigger(object,depth,{explicit:true});return;}
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
    // A locked door gives only native audible feedback (ErrorSound.wav when
    // UserFeedBack=1); the port's on-screen toast is removed (D3).
    if(open&&object.locked){this.runEvent(object,'DoorIsLockedCommand',[],depth+1);if(n(object.entity.UserFeedBack)===1)this.emit('doorLocked',{id:object.id});return;}
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

  switchButton(object,on=!object.switchedOn,depth=0,{explicit=false}={}) {
    if(!object.enabled&&!explicit||object.switchedOn===on)return;
    if(object.hasMotion){
      // Native requests latch even while disabled or moving. The controller
      // consumes one request at a settled endpoint on a later tick.
      object.pendingButtonSwitch=on;return;
    }
    const max=n(object.entity.MaxSwitchTimes,-1);
    if(max>0&&object.switchCount>=max)return;
    // Defensive source-only fallback for a button without imported motion.
    object.switchedOn=on;object.switchCount++;
    this.beginButtonSwitch(object,depth);
    this.runEvent(object,on?'AfterSwitchOnCommand':'AfterSwitchOffCommand',[],depth+1);
  }

  beginButtonSwitch(object,depth=0) {
    const on=object.switchedOn;
    if(on)discoverSecret(this,object);
    this.emit('button',{id:object.id,modelIndex:object.modelIndex,on});
    this.runEvent(object,on?'SwitchOnCommand':'SwitchOffCommand',[],depth+1);
    this.scripts?.doorMotion(object,on);
  }

  trigger(object,depth=0,{explicit=false,contact=false}={}) {
    const e=object.entity,max=n(e.MaxTriggerTimes,-1);
    // CAdamTriggerModel::Trigger (0x4d4310) is a scripted Enter/Leave pulse,
    // independent of the automatic-contact enable flag. Limits <= 0 are
    // unlimited; positive limits and the minimum still apply to both routes.
    if(!explicit&&!object.enabled||max>0&&object.triggerCount>=max)return;
    object.triggerCount++;
    if(object.triggerCount<n(e.MinTriggerTimes,-1))return;
    if(contact)object.triggerPhase=1;
    discoverSecret(this,object);
    if(e.classname==='CameraTrigger')this.scripts?.activateCamera(object);
    this.runEvent(object,'CommandOnEnter',[],depth+1);
    if(e.TargetSubLevel)this.complete(e.TargetSubLevel);
    if(explicit)this.runEvent(object,'CommandOnLeave',[],depth+1);
  }

  complete(target=null) {
    if(this.completed)return;this.completed=true;
    const next=target?.toLowerCase().replace(/\.bsp$/,'');
    this.emit('levelComplete',{target:next&&/^lvl\d\da$/.test(next)?next:null,requestedTarget:target,score:this.state.score});
  }

  setCheckpoint(position,orientation=0,id=null) {
    this.checkpoint={position:v3(position),orientation};this.emit('savepoint',{id,position:[...this.checkpoint.position],snapshot:this.snapshot()});
  }

  damage(amount,source=null,{continuous=false,force=false}={}) {
    // CRCPlayer slot 7 (0x433820) applies every hit; it refuses only a dead
    // player and the 5 s post-respawn protection byte (+0x23c). There is no
    // per-hit immunity window. Port protections (no-clip, cutscenes, a
    // completed level) remain intentional. A forced change (the script
    // KillPlayer) passes every protection, as 0x439bf0 with force=1 does.
    if(this.completed||this.state.health<=0||!(amount>0))return;
    if(!force&&(this.isPlayerInvulnerable?.()||this.scripts?.cutscene||this.respawnProtection>0))return;
    this.state.health=Math.max(0,this.state.health-amount);
    // The hurt sound is gated by a random 1.0-1.5 s timer (0x433ef5-0x433f8d)
    // and by the previous hurt sound still playing (checked by the mixer).
    const hurtSound=this.time>=this.hurtSoundUntil;
    if(hurtSound&&this.state.health>0)this.hurtSoundUntil=this.time+1+Math.floor(this.hurtRandom()*10000)*.05/1000;
    // Liquids subtract fractional health every frame; their visible reaction
    // stays throttled as before.
    if(!continuous||this.environmentFeedbackCooldown<=0||this.state.health===0){
      // The hit clip follows the health drop (0x432420) and is not restarted
      // while it is already playing.
      if(this.state.health===0)this.playerReaction=beginPlayerReaction('death');
      else if(this.playerReaction?.phase!=='hit')this.playerReaction=beginPlayerReaction('hit');
      this.cancelPlayerCharge();this.pendingPlayerAttack=null;this.playerAttackUntil=0;
      this.emit('damage',{amount,source,health:this.state.health,hurtSound});
      if(continuous)this.environmentFeedbackCooldown=.65;
    }
    // The life is consumed when the death timers finish (0x433fd0), not here.
    if(this.state.health===0){if(this.scripts)this.scripts.camera=null;this.cancelPlayerCharge();this.pendingPlayerAttack=null;this.playerAttackUntil=0;this.attackCooldown=0;cancelPendingGraveyardMazeExit(this);this.emit('death',{lives:this.state.lives,checkpoint:this.checkpoint});}
  }

  hurtRandom() {
    // Local deterministic stream, like the enemy streams; saved with the game.
    this.hurtRandomState=((this.hurtRandomState??0x2a)*1103515245+12345)>>>0;
    return ((this.hurtRandomState>>>16)&0x7fff)/32768;
  }

  land(impactSpeed,position) {
    const impact=playerLandingImpact(impactSpeed,this.settings.game);
    if(!impact)return;
    this.damage(impact.damage,'fall');
    this.emit('land',{position:[...position],impactSpeed});
  }

  respawn() {
    this.cancelPlayerCharge();
    this.state.health=this.state.maxHealth;this.hitCooldown=0;this.respawnProtection=PLAYER_RESPAWN_PROTECTION_SECONDS;this.completed=false;
    this.hazards.clear();this.projectiles=[];this.gargoyleBlasts=[];this.explosionDamage=[];this.environmentFeedbackCooldown=0;
    this.pendingPlayerAttack=null;this.playerAttackUntil=0;this.attackCooldown=0;
    this.playerReaction=beginPlayerReaction('respawn');
    for(const object of this.triggers)object.inside=false;
    for(const world of this.objects.filter(o=>o.entity.classname==='World'))this.runEvent(world,'OnPlayerRespawnCommand');
    resetGraveyardMaze(this);
    return [...this.checkpoint.position];
  }

  /** Script RespawnPlayer (0x436f60): back to the save point with full health and protection. */
  scriptRespawn() {
    if(this.playerReaction?.phase==='respawn')return;
    this.cancelPlayerCharge();
    this.state.health=this.state.maxHealth;this.respawnProtection=PLAYER_RESPAWN_PROTECTION_SECONDS;
    this.pendingPlayerAttack=null;this.playerAttackUntil=0;
    this.playerReaction=beginPlayerReaction('respawn');
    this.playerPosition=[...this.checkpoint.position];
    this.emit('teleport',{position:[...this.checkpoint.position],orientation:this.checkpoint.orientation});
  }

  updatePlayerReaction(dt) {
    if(this.scripts?.cutscene){if(this.playerReaction?.phase==='hit')this.playerReaction=null;return;}
    const completed=advancePlayerReaction(this.playerReaction,dt);
    if(!completed)return;
    const lastReaction=this.playerReaction;
    this.playerReaction=null;
    if(completed==='death') {
      // 0x439ce0: respawn while the decremented count stays >= 0, so
      // InitialLifes=3 gives four attempts. Older saves already deducted.
      const respawns=lastReaction.lifeDeducted?this.state.lives>=0:this.state.lives>0;
      if(respawns){
        if(!lastReaction.lifeDeducted)this.state.lives--;
        const position=this.respawn();this.emit('respawn',{position,orientation:this.checkpoint.orientation,lives:this.state.lives});
      }
      else {this.playerReaction={...lastReaction,finished:true};this.emit('gameOver',{});}
    }
  }

  pickup(object) {
    if(!object.enabled||object.collected)return;
    const type=clamp(n(object.entity.Type,1)-1,0,2),items=this.settings.items||{},limits=playerInventoryLimits(this.settings);
    object.collected=true;let score=0,card=null;
    if(object.subtype==='coin') {this.state.coins+=[1,5,10][type];score=[5,25,50][type];}
    if(object.subtype==='health'){this.state.health=Math.min(this.state.maxHealth,this.state.health+n(items.Medikit?.[['Small','Medium','Large'][type]],[1,2,20][type]));score=[5,15,25][type];}
    if(object.subtype==='potion'){this.state.potions=Math.min(limits.potions,this.state.potions+1);score=n(items.Potion?.Score,25);}
    if(object.subtype==='mirror'){this.state.mirror=Math.min(limits.mirrors,this.state.mirror+1);score=n(items.Mirror?.Score,75);}
    if(object.subtype==='life'){this.state.lives++;score=n(items.Life?.Score,75);}
    // Native ItemHart (0x43d46e -> 0x439c70) adds one complete HUD
    // container (2 max HP); the separate current-health value is unchanged.
    // It awards no points, yet its pickup effect still shows the 75 card.
    if(object.subtype==='hart'){this.state.maxHealth=Math.min(20,this.state.maxHealth+2);card=75;}
    this.state.score=Math.min(limits.score,this.state.score+score);if(n(object.entity.IsSecret))this.state.secrets++;
    this.addRewardEffect('pickup',object,card??score);
    const feedback={coin:['Geldzak gevonden!','ICoinM.wav'],health:['Je voelt je weer beter.','IHealthM.wav'],potion:['Toverdrank gevonden!','IPotion.wav'],mirror:['Een stuk van de spiegel gevonden!','IMirror.wav'],life:['Een extra leven!','ILife.wav'],hart:['Een extra hart!','IHart.wav']}[object.subtype];
    this.emit('pickup',{id:object.id,kind:object.subtype,subtype:object.subtype,score,message:feedback?.[0],sound:feedback?.[1],state:{...this.state}});
    this.runEvent(object,'PickupCommand');
  }

  addRewardEffect(kind,object,score) {
    const origin=this.objectPosition(object);
    // Pickup callers use the entity origin; enemy smoke/score uses the
    // defeated actor's bounding-box centre (native 0x49bc80).
    const position=kind==='enemy'?(object.rewardPosition?.()||origin.map((v,i)=>v+((object.collisionMins?.[i]||0)+(object.collisionMaxs?.[i]||0))/2)):origin;
    const effect=createRewardEffect(kind,score,position,this.time);
    if(effect)this.rewardEffects=retainRewardEffects([...this.rewardEffects,effect],this.time);
  }

  destroy(object,depth=0) {
    if(object.health<=0)return;object.health=0;object.enabled=false;
    if(object.kind==='actor'){
      const position=object.effectPosition?.()||[...this.objectPosition(object)];
      const effect={id:object.id+':'+this.time,sourceId:object.id,birth:this.time,position,
        bounds:object.effectBounds?.(position),scale:object.effectScale?.(),settings:object.actorSettings||{}};
      (this.explosions||=[]).push(effect);
      this.explosionDamage.push(...createNativeExplosionDamage(effect));
      const sound=nativeExplosionSound(object.actorSettings);
      if(sound)this.emit('scriptSound',{...sound,spatial:true,position});
    }
    if(object.kind==='enemy'){
      this.state.kills++;this.state.score=Math.min(playerInventoryLimits(this.settings).score,this.state.score+n(object.stats.PlayerScore,15));
      this.addRewardEffect('enemy',object,n(object.stats.PlayerScore,15));
      object.pendingAttack=null;this.enemyAnimation(object,'death',this.enemyDuration(object,'death'));
      object.deathStartedAt=this.time;
      delete object.deathSmokeAnchors;
      delete object.deathSmokeVelocities;
      object.corpseUntil=object.animationUntil+ENEMY_FADE_SECONDS;
      if(object.enemyType==='witch'){object.visible=false;object.corpseUntil=this.time;}
      if(object.enemyType==='ghost'){
        object.dropDead={fromY:object.position[1],floorY:null};object.corpseUntil=this.time+DROP_DEAD_SECONDS;
        this.dyingEnemies.add(object);
      }
    }
    this.scripts?.enemyDefeated?.(object);
    if(object.kind==='enemy'&&DEFERRED_AFTER_DESTROY.has(object.enemyType)){object.afterDestroyPending=true;this.dyingEnemies.add(object);}
    else this.runEvent(object,'AfterDestroyCommand',[],depth+1);
    this.emit('enemyDefeated',{id:object.id,position:[...object.position]});
  }

  updateDyingEnemies(traceEnemy) {
    for(const object of this.dyingEnemies) {
      const drop=object.dropDead;
      if(drop) {
        if(drop.floorY===null&&traceEnemy) {
          // 0x4298c0: trace from y+1 to y-100*scale; keep the start on a miss.
          const scale=n(object.entity?.Scale,1)>0?n(object.entity.Scale,1):1,[x,y,z]=object.position;
          const hit=traceEnemy([x,y+1,z],[x,y-100*scale,z],object.collisionMins||[-12,0,-12],object.collisionMaxs||[12,45,12],object);
          drop.floorY=hit&&!hit.startSolid&&hit.fraction<1?hit.end[1]:y;
        }
        const f=clamp((object.corpseUntil-this.time)/DROP_DEAD_SECONDS,0,1);
        if(drop.floorY!==null)object.position[1]=drop.fromY*f+(1-f)*drop.floorY;
      }
      if(object.afterDestroyPending&&this.time>=object.animationUntil) {
        object.afterDestroyPending=false;
        this.runEvent(object,'AfterDestroyCommand');
      }
      if(!object.afterDestroyPending&&(!drop||this.time>=object.corpseUntil))this.dyingEnemies.delete(object);
    }
  }

  enemyDuration(object,action) {
    const walkFactor=n(object.stats.WalkMotionFactor,1)>0?n(object.stats.WalkMotionFactor,1):1;
    const fallback={attack:1.2,hurt:.5,death:1.5,charge:1.933343,walkback:1.333340048789978/walkFactor,start:object.enemyType==='skeleton'?2.1333439350128174:object.enemyType==='knight'?1.533318042755127:3.2666831016540527};
    const motion=action==='idle'&&object.enemyType==='bat'&&object.enabled?'idleFlying':action;
    const variant=action==='idle'&&object.animationDurations?.idleClips?.[object.animationIdleClip];
    return Math.max(.1,n(variant||object.animationDurations?.[motion],fallback[action]||1));
  }

  enemyAnimation(object,action,duration=0,rate=null) {
    const idleCycle=action==='idle'&&nativeEnemyIdleCycle(object);
    if(object.animationState===action&&!['attack','hurt','death','teleport'].includes(action)&&
      (action!=='idle'||Number.isFinite(object.animationRate)&&!(idleCycle&&this.time>=object.animationUntil)))return Math.max(0,object.animationUntil-this.time);
    const explicit=Number.isFinite(rate)&&rate!==0;
    if(action==='idle'&&object.enemyType==='gargoyle')object.animationIdleClip=enemyIdleClip(object);
    if(!explicit)rate=enemyMotionRate(object,action);
    if(action==='idle'&&object.enemyType==='plant')object.animationIdleClip=enemyIdleClip(object);
    if(idleCycle&&!duration)duration=this.enemyDuration(object,'idle');
    // One sample controls both pose speed and every gameplay deadline. An
    // explicit rate (Bone Brutus charge) already supplies its scaled duration.
    const seconds=explicit?duration:duration/rate;
    object.animationState=action;object.animationSerial++;object.animationUntil=this.time+seconds;object.animationRate=rate;
    object.animationLoop=action==='idle'?!idleCycle:action==='walk';
    if(action!=='idle'&&action!=='attack')this.enemyAction(object,action);
    return seconds;
  }

  enemyAction(object,action,details={}) {
    this.emit('enemyAction',{id:object.id,actorFile:object.actorFile,enemyType:object.enemyType,action,position:[...object.position],...details});
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
    const bossHit=bossHitResult(this,object,amount);
    if(bossHit){
      // 0x42330c requests hurt before the die call at 0x423320; the voice
      // wrapper then drops the death cue while the hurt cue still plays.
      if(bossHit.defeated){this.enemyAction(object,'hurt');this.destroy(object);return;}
      if(!(bossHit.damage>0))return;
      object.health-=bossHit.damage;bossWasHit(this,object,bossHit);return;
    }
    const hit=ordinaryEnemyHit(object,amount);amount=hit.damage;
    if(object.health<=amount){this.enemyAction(object,'hurt');this.destroy(object);return;}
    object.health-=amount;
    reactToEnemyHit(this,object,hit.react);
  }

  enemyProjectile(object,playerPosition) {
    // Native factory enums differ per boss (see docs/patrol-boss-native.md).
    const key=({spider:'RcEnemyShot',frog:'RcPoison',plant:'RcGoo',skeleton:'RcBone',gargoyle:'RcEnemyShot',
      brutusm:'RcMushRoom',brutusb:object.boneSkullPhase?'RcSkull':'RcBone',maxd:'RcMagma',maxj:'RcJesterBall',witch:'RcMagicBall'})[object.enemyType]||'RcEnemyShot';
    const stats=this.settings['projectile'+this.difficulty.toLowerCase()]?.[key]||{};
    // Read the release pose, including the machine's two barrels for Dungeon
    // Max. Aim and random deviation are evaluated independently per barrel.
    for(const position of enemyProjectileOrigins(object)) {
      const delta=playerPosition.map((v,i)=>v+(i===1?28:0)-position[i]),length=Math.hypot(...delta)||1;
      const direction=delta.map(v=>v/length),spread=n(object.stats.BulletDeviation);
      // Native shooting perturbs all three normalized direction components by
      // independent +/- BulletDeviation values and then normalizes again.
      if(spread>0)for(let i=0;i<3;i++)direction[i]+=enemyProjectileDeviation(spread,enemyRandom(object));
      const aimLength=Math.hypot(...direction)||1,speed=n(stats.InitialSpeed,n(stats.Speed,300)),velocity=direction.map(v=>v/aimLength*speed);
      const radius=NATIVE_PROJECTILE_RADIUS,life=enemyProjectileLifetime(stats,enemyRandom(object));
      const kind=key.slice(2).replace(/^./,s=>s.toLowerCase());
      this.projectiles.push({id:`enemy-projectile-${this.nextProjectileId++}`,sourceId:object.id,kind,
        position,velocity,radius,collisionProfile:'native',life,damage:n(stats.Damage,1),gravity:n(stats.Gravity)*ENEMY_PROJECTILE_GRAVITY_SCALE,gravityUnits:'world',
        ...(object.enemyType==='gargoyle'?{visualEffect:'gargoyleBlast'}:{}),
        ...(kind==='magicBall'?{homingSpeed:speed}:{}),enemyFlightPhase:0,enemyFlightDebt:0,age:0,spriteScale:n(stats.Size,.8)});
      if(object.enemyType==='gargoyle'&&!this.gargoyleBlasts.some(e=>e.sourceId===object.id))
        this.gargoyleBlasts.push(createGargoyleBlast(object.id,position,velocity,playerPosition.map((v,i)=>v+(i===1?28:0)),object.aiRandomState));
      this.emit('enemyProjectile',{id:object.id,kind,position:[...position]});
    }
  }

  updateProjectiles(dt,playerPosition,traceProjectile,lineOfSight=()=>true) {
    if(!this.scripts?.enemiesFrozen)this.gargoyleBlasts=advanceGargoyleBlasts(this.gargoyleBlasts,dt);
    this.projectileImpacts=retainProjectileImpacts(this.projectileImpacts,this.time);
    const active=[];
    for(const projectile of this.projectiles) {
      // FreezeEnemies stops enemy ammunition; RedCat can still shoot puzzles.
      if(this.scripts?.enemiesFrozen&&projectile.owner!=='player'){active.push(projectile);continue;}
      if(projectile.owner==='player') {
        const start=projectile.position;
        const step=Math.min(dt,Math.max(0,projectile.life-projectile.age));
        advanceProjectileAnimation(projectile,step);
        projectile.velocity[1]-=projectile.gravity*step;
        const end=advancePlayerProjectile(projectile,step);
        const wall=traceProjectile?.(start,end,projectile.radius,projectile)||{fraction:1,end};
        const wallFraction=clamp(n(wall.fraction,1),0,1);
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
          const impact=createProjectileImpact(projectile,this.time);
          if(impact)this.projectileImpacts.push(impact);
          this.emit('playerProjectileImpact',{id:projectile.id,kind:projectile.kind,target:target?.id||null,position:[...projectile.position],end:[...projectile.position]});
        } else if(projectile.age<projectile.life-1e-8)active.push(projectile);
        continue;
      }
      const start=projectile.position, budget=enemyProjectileFlightBudget(projectile,dt);
      advanceProjectileAnimation(projectile,budget);
      let remaining=budget, impacted=false;
      // At most seven partial/complete 60 Hz segments fit a 100 ms budget.
      // Each is swept before the next turn or gravity step: no corner cutting.
      while(remaining>1e-10) {
        const from=projectile.position, flight=advanceEnemyProjectileFlight(projectile,remaining), end=flight.end;
        const wall=traceProjectile?.(from,end,projectile.radius,projectile)||{fraction:1,end};
        const wallFraction=clamp(n(wall.fraction,1),0,1);
        const playerHit=sweepPlayer(from,end,playerPosition,projectile.radius);
        const hitPlayer=playerHit!==null&&playerHit<wallFraction;
        projectile.position=hitPlayer?from.map((v,i)=>v+(end[i]-v)*playerHit):(wall.end||from.map((v,i)=>v+(end[i]-v)*wallFraction));
        projectile.age+=flight.step;remaining-=flight.step;
        if(hitPlayer||wallFraction<1) {
          const lives=this.state.lives;
          if(hitPlayer)this.damage(projectile.damage,projectile.sourceId);
          this.emit('enemyProjectileImpact',{sourceId:projectile.sourceId,kind:projectile.kind,position:[...projectile.position],hitPlayer});
          if(this.state.lives!==lives||this.state.health<=0){this.projectiles=[];this.gargoyleBlasts=[];this.hazards.retainProjectiles([]);return;}
          impacted=true;break;
        }
        // 0x446690 homes after the shared movement/collision tick, not after
        // every high-refresh display interpolation of that same tick.
        if(flight.complete)retargetMagicProjectile(projectile,playerPosition);
      }
      // Preserve the separate visual ribbon sampler's per-display schedule.
      this.hazards.trace(projectile,start,projectile.position,{dt:budget-remaining});
      if(!impacted&&projectile.age<projectile.life-1e-8)active.push(projectile);
    }
    this.projectiles=active;
    this.hazards.retainProjectiles(active);
  }

  playerProjectileHit(target,projectile) {
    this.runEvent(target,'OnHitCommand',[projectile.damage,projectile.type]);
    if(target.kind==='button'){if(buttonSettled(target))this.switchButton(target);}
    else if(target.kind==='enemy')this.hurtEnemy(target,projectile.damage);
    else if(target.kind==='actor')damageDestructible(this,target,projectile.damage);
  }

  /**
   * CRcEnemy update (0x422fb0). The think-radius flag is recomputed on every
   * 14th update (+0xe0 > 13), starting false, so an enemy first thinks on its
   * 14th update and only while within ENEMY_THINK_RADIUS of RedCat. A
   * thinking enemy runs its state logic on the cached sight result, then the
   * sight test (testEnemySight).
   */
  updateEnemy(object,dt,playerPosition,lineOfSight,traceEnemy) {
    const think=object.think??=newEnemyThink();
    if(++think.count>=ENEMY_THINK_INTERVAL){think.count=0;think.inRadius=distance(object.position,playerPosition)<=ENEMY_THINK_RADIUS;}
    // The contact cooldown is a timestamp in the original; it runs on regardless.
    if(!think.inRadius){object.attackTimer=Math.max(0,object.attackTimer-dt);return;}
    this.thinkEnemy(object,dt,playerPosition,lineOfSight,traceEnemy);
    if(object.enabled&&object.health>0)this.testEnemySight(object,playerPosition,lineOfSight);
  }

  /**
   * D10: the sight test repeats at most every 500 ms (0x422fb0, int 500 at
   * 0x68f7f0); the first runs on the enemy's first thinking update. Between
   * tests a cached sighting keeps refreshing the last-seen time.
   */
  testEnemySight(object,playerPosition,lineOfSight) {
    const sight=object.sight??=newEnemySight();
    if(this.time-sight.lastCheck>=ENEMY_SIGHT_INTERVAL) {
      sight.lastCheck=this.time;sight.seen=enemySeesPlayer(object,playerPosition,distance(object.position,playerPosition),lineOfSight);
    }
    if(sight.seen){object.lastSeenAt=this.time;object.lastSeenPosition=[...playerPosition];}
  }

  thinkEnemy(object,dt,playerPosition,lineOfSight,traceEnemy) {
    if(object.animationState==='idle'&&object.animationLoop===false&&this.time>=object.animationUntil)this.enemyAnimation(object,'idle');
    this.navigation.syncReservations(this.objects,this.time,playerPosition);
    const recoveries=object.movementRecovery?.recoveries||0;
    if(recoveries!==(object.lastMovementRecovery||0)){
      this.navigation.pursuitJobs.delete(object);cancelBatFlightSearch(this,object);object.lastMovementRecovery=recoveries;
      if(object.patrol?.target)object.patrol.reacquiring=true;
    }
    object.attackTimer=Math.max(0,object.attackTimer-dt);
    const touchDamage=contact=>{
      if(!usesTouchPursuit(object)||!contact||object.attackTimer!==0)return;
      // The original's contact (0x42dd80) comes from the actor's own collision
      // sweep and needs no sight ray. The port detects contact by hull overlap,
      // so it keeps a sight ray to stop hits through walls (intentional).
      const from=enemySightEye(object),to=[playerPosition[0],playerPosition[1]+PLAYER_CENTRE_HEIGHT,playerPosition[2]];
      if(!lineOfSight(from,to))return;
      // Contact damage requests no enemy sound; only RedCat reacts.
      this.damage(n(object.stats.Damage,1),object.id);object.attackTimer=1;
      this.emit('enemyAttack',{id:object.id,position:[...object.position],ranged:false,contact:true});
    };
    if(updateZombieGraveRise(this,object,dt))return;
    resolveZombieSpawn(object,traceEnemy);
    if(updateEnemyAmbush(this,object,dt,playerPosition,lineOfSight,traceEnemy)){
      touchDamage(clipBatPlayerContact(object,[...object.position],playerPosition,traceEnemy));return;
    }
    let batContact=clipBatPlayerContact(object,[...object.position],playerPosition,traceEnemy);
    const d=distance(object.position,playerPosition);
    // CRcEnemy sight (0x423800): 3-D range, view cone and up to two rays; no
    // height limit. See enemy-perception-native.js.
    // The state logic sees the previous sight test's result (D10; the test
    // itself follows in updateEnemy).
    const visible=(object.sight??=newEnemySight()).seen;
    if(visible&&!object.alerted){object.alerted=true;this.enemyAction(object,'alert');}
    // Remembered while now - lastSeen < TimeToRememberVisual (0x422f30).
    if(!visible&&object.alerted&&this.time-n(object.lastSeenAt,-100)>=n(object.stats.TimeToRememberVisual,2)){
      // Losing the target completes the attack/move child; the main state
      // requests one Sound(0) then (0x4030fe / 0x403177).
      object.alerted=false;object.knightSwinging=false;this.enemyAction(object,'idle',{grunt:true});
    }
    const remembers=visible||object.alerted;
    this.unawareChatter(object,playerPosition);
    this.navigation.syncReservation(object);
    if(updateStoneAlert(this,object,dt))return;
    const face=target=>{
      const desired=Math.atan2(target[0]-object.position[0],target[2]-object.position[2]);
      const current=object.yaw??desired,diff=Math.atan2(Math.sin(desired-current),Math.cos(desired-current));
      object.yaw=current+clamp(diff,-n(object.stats.RotationPerSec,Math.PI*3)*dt,n(object.stats.RotationPerSec,Math.PI*3)*dt);
    };
    const walk=(target,{authoredFlight=false,authoredRoute=false,destinationId=null,backward=false}={})=>{
      // A patrol waypoint is already the next graph edge. Searching the full
      // graph again on a blocked patrol caused the graveyard's growing stalls.
      object.waypointActive=authoredRoute;this.navigation.syncReservation(object);
      if(!authoredRoute)target=object.flying?batFlightTarget(this,object,target,traceEnemy):this.navigation.pursuitTarget(object,target,lineOfSight,traceEnemy,this.time,{destinationId});
      else if(object.enemyType==='bat')cancelBatFlightSearch(this,object);
      face(backward?playerPosition:target);const delta=target.map((v,i)=>i===1&&!object.flying?0:v-object.position[i]),length=Math.hypot(...delta);
      const step=Math.min(length,n(object.stats.Speed,55)*dt),before=[...object.position];
      // Fallback for callers without an enemy sweep: the earlier chest ray.
      const from=[object.position[0],object.position[1]+25,object.position[2]];
      if(length>0&&(authoredFlight||traceEnemy||lineOfSight(from,from.map((v,i)=>v+delta[i]/length*step))))moveEnemy(object,delta.map(v=>v/(length||1)*step),dt,authoredFlight?null:traceEnemy);
      else moveEnemy(object,[0,0,0],dt,traceEnemy);
      batContact=clipBatPlayerContact(object,before,playerPosition,traceEnemy)||batContact;
      const moved=distance(before,object.position)>.01;
      if(!backward)this.enemyAnimation(object,moved?'walk':'idle');return moved;
    };
    if(updateBoss(this,object,dt,{playerPosition,visible,distance:d,face,walk,traceEnemy,lineOfSight}))return;
    // CRcTouchBat pursues until its hull touches RedCat. AttackRange belongs to
    // the inherited perception/navigation settings, not a remote melee strike;
    // treating it as one made green bats hover a hundred units away.
    if(usesTouchPursuit(object)) {
      object.pendingAttack=null;
      // Older saves can contain the shoot1 attack used by the generic AI.
      if(object.animationState==='attack'){this.enemyAnimation(object,'idle');object.attackTimer=0;}
      if(['hurt','start','charge','teleport'].includes(object.animationState)&&this.time<object.animationUntil){
        moveEnemy(object,[0,0,0],dt,traceEnemy);touchDamage(batContact);return;
      }
      if(visible||object.alerted){
        // 0x40311e enters the touch movement selector on perception/memory,
        // not AttackRange or a hit. These are neighboring-waypoint choices,
        // not a free-form orbit after contact. Collision remains immediate.
        const target=touchWaypointTarget(this,object,dt,playerPosition,lineOfSight);
        const separation=batSeparationTarget(this,object);
        if(separation)walk(separation,{authoredRoute:true});
        else if(target)walk(target.position,{authoredRoute:!object.patrol.reacquiring,destinationId:object.patrol.reacquiring?target.id:null});
        else if(target===undefined)walk(visible?playerPosition:object.lastSeenPosition||playerPosition);
        else {moveEnemy(object,[0,0,0],dt,traceEnemy);this.enemyAnimation(object,'idle');}
      }else {
        object.batContact=null;
        const target=this.navigation.target(object,lineOfSight);
        if(target)walk(target.position,{authoredRoute:true});
        else {moveEnemy(object,[0,0,0],dt,traceEnemy);this.enemyAnimation(object,'idle');}
      }
      // Collision damage is independent of the current motion/hurt child.
      touchDamage(batContact);
      return;
    }
    // Strikes happen at the authored pose, not when an attack is requested.
    const locked=['attack','hurt','start','charge','teleport'].includes(object.animationState)&&this.time<object.animationUntil;
    if(object.pendingAttack&&this.time>=object.pendingAttack.at) {
      const attack=object.pendingAttack,windowEnd=attack.until??attack.at;
      // Knights enable the strike for .65–.70 of shoot1, rather than testing
      // once at .65. Keep a missed opening test alive until that window closes.
      const inWindow=this.time-dt<=windowEnd;
      // Shooter children commit the release at DrawMotionPart (0x40a649 /
      // 0x4074b0); perception is checked by the parent after completion.
      // A duck behind cover may block the projectile, but cannot erase it.
      const committedShot=object.ranged&&(['plant','gargoyle'].includes(object.enemyType)||usesNativeShooter(object));
      // Knights (0x4050e0 -> 0x42bd00) strike with a sword segment from the
      // BONE01 tip to the body centre, strictly inside the collision window,
      // at most once per swing and without a range or sight test.
      const knightHit=object.enemyType==='knight'&&!object.ranged&&this.time>attack.at&&this.time-dt<windowEnd&&
        knightStrikeHits(object,playerPosition);
      const meleeHit=object.enemyType!=='knight'&&!object.ranged&&inWindow&&visible&&d<=n(object.stats.AttackRange,100)+5;
      if(inWindow&&(committedShot||knightHit||meleeHit)) {
        if(object.ranged)this.enemyProjectile(object,playerPosition);
        else this.damage(n(object.stats.Damage,1),object.id);
        // Sound(2) exists only at ranged releases (0x40a12e, 0x40c344,
        // 0x41c7b7, 0x42a455, 0x42b859); melee strikes are silent.
        if(object.ranged)this.enemyAction(object,'attack');
        this.emit('enemyAttack',{id:object.id,position:[...object.position],ranged:object.ranged});
        object.pendingAttack=null;
      } else if(this.time>=windowEnd)object.pendingAttack=null;
    }
    // Standing enemies keep turning toward RedCat while they see or remember
    // him, in every child state (CRcEnemy::Update 0x423f40 -> 0x424430).
    const standing=object.entity.classname==='StandingEnemy';
    if(locked){if(visible||standing&&remembers||object.animationState==='attack'&&usesNativeShooter(object))face(playerPosition);moveEnemy(object,[0,0,0],dt,traceEnemy);return;}
    if(updateNativeStandingShooter(this,object,{visible,distance:d,
      moveIdle:()=>{face(playerPosition);moveEnemy(object,[0,0,0],dt,traceEnemy);}}))return;
    if(updateNativeShooter(this,object,dt,{playerPosition,visible,distance:d,lineOfSight,
      walk:(target,options)=>{const apart=batSeparationTarget(this,object);return walk(apart||target,apart?{}:options);},
      moveIdle:()=>{face(playerPosition);moveEnemy(object,[0,0,0],dt,traceEnemy);}}))return;
    const separation=batSeparationTarget(this,object);
    if(separation){walk(separation);return;}
    if(object.boneChargePending){
      // RcBoneBrutusAttackState enters its charge motion and switches ammo
      // after the last shoot motion, before deciding whether to relocate.
      object.boneChargePending=false;object.boneSkullPhase=!object.boneSkullPhase;
      const rate=.9+(Math.floor(enemyRandom(object)*32768)%10000)*.00002;
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
      if(target){walk(target.position,{authoredRoute:true});return;}
    }
    const range=n(object.stats.AttackRange,100),minimum=n(object.stats.MinPlayerDistance);
    const committedSalvo=object.salvoRemaining>0&&['plant','gargoyle'].includes(object.enemyType);
    // Knights enter their attack child when remembered and in range (0x422f70),
    // then re-swing at once while the memory lasts (0x40511b-0x40512a).
    const knight=object.enemyType==='knight'&&!object.ranged;
    if(knight&&!remembers)object.knightSwinging=false;
    if(visible||committedSalvo||knight&&remembers) {
      if(visible||standing&&remembers)face(playerPosition);
      const knightReady=knight&&(object.knightSwinging||d<=range);
      if((committedSalvo||(knight?knightReady:d<=range&&d>=minimum))&&object.attackTimer===0) {
        if(knight)object.knightSwinging=true;
        const duration=this.enemyAnimation(object,'attack',this.enemyDuration(object,'attack'));
        const strike=object.ranged?n(object.stats.DrawMotionPart,.5):n(object.stats.ShootMotionCollisionStart,.5);
        object.pendingAttack={at:this.time+duration*clamp(strike,0,1)};
        if(object.enemyType==='knight')object.pendingAttack.until=this.time+duration*clamp(n(object.stats.ShootMotionCollisionEnd,strike),clamp(strike,0,1),1);
        // Native standing-shooter state 0x40a5ee repeats shoot1 immediately
        // within a salvo; only its completed salvo enters the wait state.
        // Knights have no between-swing wait at all (no shooter info).
        let wait=['plant','gargoyle','knight'].includes(object.enemyType)?0:n(object.stats.WaitTimeBetweenShots,.4);
        if(object.ranged) {
          if(object.salvoRemaining<=0)object.salvoRemaining=enemySalvoSize(object);
          object.salvoRemaining--;
          if(object.salvoRemaining===0){
            wait=n(object.stats.WaitTimeAfterSalvo,wait);object.relocateAfterSalvo=object.enemyType!=='gargoyle';
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
      if(target){walk(target.position,{authoredRoute:true});return;}
    }
    moveEnemy(object,[0,0,0],dt,traceEnemy);this.enemyAnimation(object,'idle');
  }

  // Unaware Default states (0x4059d0) re-request Sound(0) every few ms; the
  // voice player drops it while the previous one plays, so frogs, zombies,
  // guardians, ghosts and bats chatter back to back while unaware. Other
  // families are silent while unaware. Enemies beyond the native think radius
  // (0x422fb0) do nothing.
  // The request period is (int)(4 + (rand() % 10000) * 0.0002) ms: the
  // deadline is armed on one update and Sound(0) requested on a later one
  // once it has passed.
  unawareChatter(object,playerPosition) {
    if(object.alerted||!UNAWARE_CHATTER.has(object.enemyType)||this.scripts?.cutscene)return;
    const timer=object.idleTimer??={period:this.chatterPeriod(),deadline:-1};
    if(timer.deadline<0){timer.deadline=this.time+timer.period;return;}
    if(this.time>timer.deadline){timer.period=this.chatterPeriod();timer.deadline=-1;this.enemyAction(object,'idle');}
  }
  chatterPeriod() {
    this.chatterRandomState=((this.chatterRandomState??0x1d)*1103515245+12345)>>>0;
    return Math.trunc(4+((this.chatterRandomState>>>16)&0x7fff)%10000*.0002)/1000;
  }

  objectPosition(object) {
    // Preserve authored attachment anchors in saves and apply the brush pose
    // for both models and pickups, without accumulating transforms.
    const pose=(object.kind==='pickup'||object.kind==='actor')&&this.scripts?.modelTransforms.get(object.modelIndex);
    const position=pickupPosition(object);
    return pose?transformMotionPoint(position,pose.origin,pose):position;
  }

  environmentVelocity(position) {return triggerVelocity(this,position);}

  playerContactContents(position,mins=[0,0,0],maxs=[0,1,0]) {
    if(!this.volumeCollider||!this.liquidContactModels.length)return 0;
    // syncModelStates disables solid collision for water triggers. Their
    // contents still affect RedCat: use the volume collider, as triggers do.
    if(this.scripts?.modelTransforms)this.volumeCollider.modelTransforms=this.scripts.modelTransforms;
    return this.volumeCollider.contents(position,mins,maxs,this.liquidContactModels);
  }

  contains(object,position,padding=0) {
    const model=this.level.collision?.models?.[object.modelIndex];
    if(!model)return distance(object.position,position)<Math.max(24,n(object.entity.TriggerRadius,24));
    const pose=this.scripts?.modelTransforms.get(object.modelIndex);
    let min=model.min,max=model.max;
    if(pose) {
      min=[Infinity,Infinity,Infinity];max=[-Infinity,-Infinity,-Infinity];
      for(let mask=0;mask<8;mask++){
        const p=transformMotionPoint([mask&1?model.max[0]:model.min[0],mask&2?model.max[1]:model.min[1],mask&4?model.max[2]:model.min[2]],pose.origin,pose);
        for(let i=0;i<3;i++){min[i]=Math.min(min[i],p[i]);max[i]=Math.max(max[i],p[i]);}
      }
    }
    for(let i=0;i<min.length;i++)if(!(position[i]+PLAYER_MAXS[i]+padding>=min[i]&&position[i]+PLAYER_MINS[i]-padding<=max[i]))return false;
    if(!this.volumeCollider)return true;
    this.volumeCollider.modelTransforms=this.scripts?.modelTransforms||new Map();
    return this.volumeCollider.contents(position,PLAYER_MINS.map(v=>v-padding),PLAYER_MAXS.map(v=>v+padding),[object.modelIndex])!==0;
  }

  cancelPlayerCharge() {
    if(this.playerCharge)this.emit('player-charge',{active:false,position:this.playerPosition});
    this.playerCharge=null;
  }

  updatePlayerAttackInput(dt,held,position,forward,target=null,canStart=true) {
    if(this.scripts&&(!this.scripts.weaponsEnabled||this.scripts.cutscene||this.scripts.controlLocked)||this.playerReaction||this.state.health<=0||this.completed) {
      this.cancelPlayerCharge();return;
    }
    if(!(this.state.skill&4)) {
      this.cancelPlayerCharge();if(held&&canStart)this.attack(position,forward,target);return;
    }
    if(held) {
      if(!this.playerCharge&&canStart&&this.attackCooldown<=1e-8&&!this.pendingPlayerAttack) {
        this.playerCharge={age:0};this.emit('player-charge',{active:true,position:[...position]});
      } else if(this.playerCharge)this.playerCharge.age=Math.min(PLAYER_SUPER_CHARGE.duration,this.playerCharge.age+dt);
    } else if(this.playerCharge) {
      const chargeFraction=clamp((this.playerCharge.age+dt)/PLAYER_SUPER_CHARGE.duration,0,1);
      this.cancelPlayerCharge();
      this.attack(position,forward,target,{chargeFraction,startFraction:PLAYER_SUPER_CHARGE.holdFraction});
    }
  }

  attack(position,forward,target=null,{chargeFraction=1,startFraction=0}={}) {
    if(this.playerReaction||this.state.health<=0||this.completed||this.attackCooldown>1e-8||this.pendingPlayerAttack||this.scripts&&(!this.scripts.weaponsEnabled||this.scripts.cutscene||!(this.state.skill&1)))return false;
    const duration=PLAYER_SHOOT_MOTION.duration/PLAYER_SHOOT_MOTION.rate;
    // CRcPlayer ends its firing state at shoot1's 80% point (0x433315).
    // The common projectile factory's RechargeTime result is discarded by
    // this caller; waiting for it or the full clip makes held fire too slow.
    this.attackCooldown=duration*(PLAYER_SHOOT_MOTION.finishFraction-startFraction);
    this.playerAttackSerial++;this.playerAttackUntil=this.time+duration*(1-startFraction);
    this.pendingPlayerAttack={at:this.time+duration*(PLAYER_SHOOT_MOTION.releaseFraction-startFraction),position:v3(position),forward:v3(forward),skill:this.state.skill,chargeFraction};
    this.notePlayerAttack(target);
    return true;
  }

  releasePlayerAttack(position=null,forward=null,releaseOrigin=null,aimTarget=null) {
    const pending=this.pendingPlayerAttack;
    if(!pending||this.time<=pending.at)return;
    this.pendingPlayerAttack=null;
    if(this.scripts&&(!this.scripts.weaponsEnabled||this.scripts.cutscene||this.scripts.controlLocked))return;
    const shot=playerShotDefinition(pending.skill,this.settings,this.difficulty),stats=shot.stats;
    const feet=position||pending.position,aim=forward||pending.forward,length=Math.hypot(...aim)||1;
    let dir=aim.map(v=>v/length);
    const boneOrigin=releaseOrigin?.({kind:shot.kind,type:shot.type,serial:this.playerAttackSerial});
    const origin=Array.isArray(boneOrigin)&&boneOrigin.length===3&&boneOrigin.every(Number.isFinite)?[...boneOrigin]:[feet[0],feet[1]+38,feet[2]],speed=n(stats.InitialSpeed,300);
    const target=aimTarget?.();
    if(target){const delta=target.map((v,i)=>v-origin[i]),distance=Math.hypot(...delta)||1;dir=delta.map(v=>v/distance);}
    const projectile={id:`player-projectile-${this.nextProjectileId++}`,sourceId:'redcat',owner:'player',kind:shot.kind,type:shot.type,
      position:[...origin],velocity:dir.map(v=>v*speed),radius:NATIVE_PROJECTILE_RADIUS,collisionProfile:'native',life:n(stats.MaximumLifeTimeInSeconds,5),
      damage:Math.max(1,n(stats.Damage,1)*(shot.type===4?clamp(n(pending.chargeFraction,1),0,1):1)),gravity:n(stats.Gravity),acceleration:n(stats.SpeedIncreasePerSecond),maximumSpeed:n(stats.MaximumSpeed,1000),age:0,playerFlightPhase:0};
    this.projectiles.push(projectile);
    this.emit('attack',{id:projectile.id,kind:shot.kind,origin,direction:dir});
  }

  update(dt,playerPosition,{attack=false,use=false,forward=[0,0,-1],lineOfSight=()=>true,explosionLineOfSight=lineOfSight,traceShot=null,traceEnemy=null,traceProjectile=null,traceBeam=null,releaseOrigin=null,aimTarget=null,attackTarget=null,touchedModels=[],environmentContents=0,previousPlayerPosition=playerPosition}={}) {
    dt=clamp(n(dt),0,0.1);this.time+=dt;this.playerPosition=v3(playerPosition);
    this.rewardEffects=retainRewardEffects(this.rewardEffects,this.time);
    const wasRecovering=this.playerReaction?.phase==='death'||this.playerReaction?.phase==='respawn';
    // Count protection down before a respawn in this frame sets its full five seconds.
    this.respawnProtection=Math.max(0,this.respawnProtection-dt);
    this.updatePlayerReaction(dt);
    // Native checks input before retiring the current firing state. Crossing
    // 80% releases the next controller tick, not another shot on this tick.
    const canStartPlayerAttack=this.attackCooldown<=1e-8;
    this.hitCooldown=Math.max(0,this.hitCooldown-dt);if(!this.scripts?.cutscene)this.attackCooldown=Math.max(0,this.attackCooldown-dt);
    // Do not run interactions against the old death position on the tick that
    // the event handler moves RedCat back to his checkpoint.
    if(this.dyingEnemies.size)this.updateDyingEnemies(traceEnemy);
    if(wasRecovering){advanceExplosionDamageClocks(this,dt);return;}
    if(this.state.health<=0||this.completed){this.cancelPlayerCharge();advanceExplosionDamageClocks(this,dt);return;}
    if(this.scripts?.cutscene||this.scripts?.enemiesFrozen)for(const object of this.objects)if(object.kind==='enemy') {
      // Dialogue freezes combat, but already defeated enemies must finish
      // their death motion, smoke and retirement during the conversation.
      if(this.scripts?.cutscene&&object.health<=0)continue;
      for(const key of ['animationUntil','corpseUntil','deathStartedAt','lastSeenAt','lastAttackedAt'])if(Number.isFinite(object[key]))object[key]+=dt;
      if(object.sight)object.sight.lastCheck+=dt;
      if(object.idleTimer?.deadline>=0)object.idleTimer.deadline+=dt;
      if(object.pendingAttack){object.pendingAttack.at+=dt;if(Number.isFinite(object.pendingAttack.until))object.pendingAttack.until+=dt;}
      if(Number.isFinite(object.nativeShooter?.waitUntil))object.nativeShooter.waitUntil+=dt;
      if(Number.isFinite(object.nativeStandingShooter?.waitUntil))object.nativeStandingShooter.waitUntil+=dt;
    }
    if(this.scripts?.cutscene){
      this.cancelPlayerCharge();this.pendingPlayerAttack=null;this.playerAttackUntil=0;
      advanceExplosionDamageClocks(this,dt);
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
    advanceExplosionDamage(this,dt,playerPosition,explosionLineOfSight);
    if(this.state.lives!==lives||this.state.health<=0)return;
    this.updateProjectiles(dt,this.playerPosition,traceProjectile||traceShot,lineOfSight);
    if(this.state.lives!==lives||this.state.health<=0)return;
    this.updatePlayerAttackInput(dt,attack,this.playerPosition,forward,attackTarget?.(),canStartPlayerAttack);
    this.releasePlayerAttack(this.playerPosition,forward,releaseOrigin,aimTarget);
    // Pausing a model's timeline does not remove its solid brush or contact hooks.
    for(const index of touchedModels)for(const object of this.modelObjects.get(index)||[])if(object.kind==='controller'&&object.visible&&object.health>0)this.runEvent(object,'OnTouchCommand');
    const pressedUse=use&&!this.previousUse;this.previousUse=use;
    for(const object of this.objects) {
      if(this.state.lives!==lives||this.state.health<=0)return;
      if(!object.enabled||object.collected||object.health<=0)continue;
      const e=object.entity;
      if(object.kind==='pickup') {
        const position=this.objectPosition(object);
        // CAdamItem (0x4d69b0 -> 0x4e1d00): the player box overlaps the item
        // actor's bounds (1-unit tolerance), with no line-of-sight test. Items
        // without loaded bounds keep the earlier radius-and-sight check.
        const bounds=object.pickupBounds;
        if(bounds?boxesOverlap(playerPosition,PLAYER_MINS,PLAYER_MAXS,position,bounds.min,bounds.max,1):
          distance(position,playerPosition)<38&&lineOfSight([playerPosition[0],playerPosition[1]+22,playerPosition[2]],[position[0],position[1]+18,position[2]]))this.pickup(object);
      }
      if(object.kind==='trigger') {
        const inside=this.contains(object,playerPosition);
        updateTriggerContact(this,object,inside,dt);
        if(this.state.lives!==lives||this.state.health<=0)return;
      }
      if(object.kind==='door') {
        object.openFraction=clamp(object.openFraction+(object.open?1:-1)*dt*2,0,1);
        // Native radius doors stay open while the player remains in their
        // authored activation area. Touch may start only a settled closed door.
        if(object.closeAt&&this.time>=object.closeAt&&!withinTriggerRadius(object,playerPosition))this.setDoor(object,false);
        if(!object.open&&!object.moving&&playerActivatesModel(this,object,playerPosition,touchedModels))this.setDoor(object,true);
      }
      if(object.kind==='button') {
        const activated=playerActivatesModel(this,object,playerPosition,touchedModels);
        // Native physical contact (0x4cb3a0) is accepted only at a settled
        // endpoint. Script/shot requests separately latch during movement.
        // A motion-less fallback has no native endpoint/FSM delay. Keep its
        // contact latch so it cannot switch every frame with no animation.
        if(activated&&buttonSettled(object)&&(object.hasMotion||!object.inside||pressedUse))this.switchButton(object);
        object.inside=activated;
      }
      // SavePoint is the crystal's visual beam effect. The authored trigger's
      // RcSetSavePoint command selects the actual player checkpoint.
      if(object.kind==='enemy'&&!this.scripts?.enemiesFrozen)this.updateEnemy(object,dt,playerPosition,lineOfSight,traceEnemy);
    }
  }

  modelState(index) {
    // An item's Model is its moving support, not geometry owned by the item.
    // Collecting a potion must not remove the bridge beneath the player.
    // Distant brushes still need immediate script/collision state, but not
    // fresh filtered arrays and repeated scans twice per display frame.
    let count=0,onlyTriggers=true,visible=true,solid=true,door;
    for(const object of this.modelObjects.get(index)||[]) {
      if(object.kind==='pickup'||object.kind==='actor')continue;
      count++;if(object.kind!=='trigger')onlyTriggers=false;
      if(!door&&object.kind==='door')door=object;
      const present=!!(object.visible&&!object.collected&&object.health>0);
      visible=visible&&present;solid=solid&&present&&object.entity.PlayerCollision!=='0';
    }
    onlyTriggers=onlyTriggers&&count>0;
    return {visible:(!onlyTriggers||this.liquidModels.has(index))&&visible&&!(door?.open&&!door.hasMotion),
      solid:!onlyTriggers&&!(door?.open&&!door.hasMotion)&&solid,
      open:door?.open||false,openFraction:door?.openFraction||0};
  }

  snapshot() {
    const explosionDamage=restoreExplosionDamage(this.explosionDamage,this.time);
    return {version:1,healthVersion:2,level:this.level.id,difficulty:this.difficulty,state:{...this.state},time:this.time,completed:this.completed,debriefing:this.debriefing?structuredClone(this.debriefing):null,
      hazards:this.hazards.snapshot(),environmentFeedbackCooldown:this.environmentFeedbackCooldown,hitCooldown:this.hitCooldown,
      respawnProtection:this.respawnProtection,hurtSoundUntil:this.hurtSoundUntil,hurtRandomState:this.hurtRandomState,chatterRandomState:this.chatterRandomState,
      entryState:this.entryState?{...this.entryState}:null,
      spoutEffects:this.spoutSnapshot?this.spoutSnapshot():this.spoutStates,
      footstepState:this.footstepState?{...this.footstepState}:undefined,
      attackCooldown:this.attackCooldown,playerAttackSerial:this.playerAttackSerial,playerAttackUntil:this.playerAttackUntil,
      playerReaction:this.playerReaction?{...this.playerReaction}:null,
      playerCharge:this.playerCharge?{age:this.playerCharge.age}:null,
      pendingPlayerAttack:this.pendingPlayerAttack?{...this.pendingPlayerAttack,position:[...this.pendingPlayerAttack.position],forward:[...this.pendingPlayerAttack.forward]}:null,
      gargoyleBlasts:restoreGargoyleBlasts(this.gargoyleBlasts),
      explosionDamage,
      explosions:restoreNativeExplosions(this.explosions,this.time),
      nextProjectileId:this.nextProjectileId,projectiles:this.projectiles.map(p=>({...p,position:[...p.position],velocity:[...p.velocity]})),
      projectileImpacts:restoreProjectileImpacts(this.projectileImpacts,this.time),
      rewardEffects:restoreRewardEffects(this.rewardEffects,this.time),
      scripts:this.scripts?.snapshot(),checkpoint:{...this.checkpoint,position:[...this.checkpoint.position]},variables:[...this.variables],
      objects:this.objects.map(o=>({id:o.id,position:[...o.position],enabled:o.enabled,visible:o.visible,collected:o.collected,health:o.health,propDamage:o.propDamage,open:o.open,locked:o.locked,switchedOn:o.switchedOn,pendingButtonSwitch:o.pendingButtonSwitch,buttonPhase:o.kind==='button'?(o.buttonPhase??(o.switchedOn?5:1)):undefined,triggerCount:o.triggerCount,switchCount:o.switchCount,openFraction:o.openFraction,closeAt:o.closeAt,inside:o.inside,triggerPhase:o.triggerPhase,volume:o.volume,motionSpeed:o.motionSpeed,
        animationPose:o.animationSnapshot?.()||o.animationPose,machinePose:o.machineAnimationSnapshot?.()||o.machinePose,animationState:o.animationState,animationSerial:o.animationSerial,animationUntil:o.animationUntil,animationRate:o.animationRate,animationLoop:o.animationLoop,animationIdleClip:o.animationIdleClip,corpseUntil:o.corpseUntil,deathStartedAt:o.deathStartedAt,afterDestroyPending:o.afterDestroyPending||undefined,dropDead:o.dropDead?{...o.dropDead}:undefined,deathSmokeAnchors:o.deathSmokeAnchors?.map(p=>[...p]),deathSmokeVelocities:o.deathSmokeVelocities?.map(p=>[...p]),effectAge:o.effectAge,teleportEffectAge:o.teleportEffectAge,teleportEffectSerial:o.teleportEffectSerial,teleportTerminalSoundSerial:o.teleportTerminalSoundSerial,teleporterState:o.teleporterSnapshot?.()||o.teleporterState,beamContactDelay:o.beamContactDelay,beamTriggered:o.beamTriggered,secretFound:o.secretFound,actorAge:o.actorAge,lastAttackedAt:o.lastAttackedAt,rotation:o.rotation?[...o.rotation]:undefined,
        fairyState:o.fairySnapshot?o.fairySnapshot():o.fairyState?structuredClone(o.fairyState):undefined,
        knightDebrisState:o.knightDebrisSnapshot?o.knightDebrisSnapshot():o.knightDebrisState,
        pendingAttack:o.pendingAttack?{...o.pendingAttack}:null,attackTimer:o.attackTimer,salvoRemaining:o.salvoRemaining,salvoSize:o.salvoSize,pursuit:o.pursuit?structuredClone(o.pursuit):null,
        nativeShooter:restoreNativeShooterState(o.nativeShooter),
        nativeStandingShooter:restoreNativeStandingShooter(o.nativeStandingShooter),
        boss:snapshotBossState(o),ambush:o.ambush?structuredClone(o.ambush):null,flightDetour:o.flightDetour?{...o.flightDetour}:null,batContact:o.batContact?{...o.batContact}:null,
        patrol:o.patrol?{...o.patrol}:null,aiRandomState:o.aiRandomState,relocateAfterSalvo:o.relocateAfterSalvo,boneSkullPhase:o.boneSkullPhase,boneChargePending:o.boneChargePending,lastSeenPosition:o.lastSeenPosition?[...o.lastSeenPosition]:null,
        velocityY:o.velocityY,grounded:o.grounded,lastSeenAt:o.lastSeenAt,sight:Number.isFinite(o.sight?.lastCheck)?{...o.sight}:undefined,think:o.think?{...o.think}:undefined,flashStartedAt:Number.isFinite(o.flashStartedAt)?o.flashStartedAt:undefined,idleTimer:o.idleTimer?{...o.idleTimer}:undefined,alerted:o.alerted,knightSwinging:o.knightSwinging,yaw:o.yaw}))};
  }

  restore(save) {
    if(!save||save.version!==1||save.level!==this.level.id)return false;
    this.spoutStates=restoreSpoutSnapshots(save.spoutEffects);
    this.navigation.reservationFrame=null;
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
    // Earlier remake heart containers added 1 HP instead of the native 2.
    // Preserve existing wounds while repairing that capacity exactly once.
    if(save.healthVersion!==2&&this.state.maxHealth>10){
      const capacity=Math.min(20,10+2*(this.state.maxHealth-10));
      if(this.state.health>0)this.state.health+=capacity-this.state.maxHealth;
      this.state.maxHealth=capacity;
    }
    if(save.checkpoint)this.checkpoint={position:v3(save.checkpoint.position),orientation:n(save.checkpoint.orientation)};
    this.time=n(save.time);this.completed=!!save.completed;this.debriefing=this.completed?restoreLevelSummary(save.debriefing,this.level.id):null;this.variables=new Map(Array.isArray(save.variables)?save.variables.filter(pair=>Array.isArray(pair)&&pair.length===2):[]);
    this.hazards.restore(save.hazards);this.environmentFeedbackCooldown=Math.max(0,n(save.environmentFeedbackCooldown));this.hitCooldown=0;
    // Older saves had a 2 s cooldown after respawn; they get the remaining
    // native 5 s window if they were saved inside the respawn clip.
    this.respawnProtection=Number.isFinite(save.respawnProtection)?clamp(save.respawnProtection,0,PLAYER_RESPAWN_PROTECTION_SECONDS)
      :save.playerReaction?.phase==='respawn'?Math.max(0,PLAYER_RESPAWN_PROTECTION_SECONDS-n(save.playerReaction.age)):0;
    this.hurtSoundUntil=n(save.hurtSoundUntil);if(Number.isInteger(save.hurtRandomState))this.hurtRandomState=save.hurtRandomState>>>0;
    if(Number.isInteger(save.chatterRandomState))this.chatterRandomState=save.chatterRandomState>>>0;
    this.entryState=save.entryState&&typeof save.entryState==='object'&&['health','maxHealth','lives','score','mirror','skill'].every(k=>Number.isFinite(save.entryState[k]))?{...save.entryState}:null;
    this.footstepState=save.footstepState?{phase:save.footstepState.phase,side:save.footstepState.side}:undefined;
    this.projectileImpacts=restoreProjectileImpacts(save.projectileImpacts,this.time);
    this.rewardEffects=restoreRewardEffects(save.rewardEffects,this.time);
    this.gargoyleBlasts=restoreGargoyleBlasts(save.gargoyleBlasts);
    this.explosionDamage=restoreExplosionDamage(save.explosionDamage,this.time);
    this.explosions=restoreNativeExplosions(save.explosions,this.time);
    this.nextProjectileId=Math.max(1,n(save.nextProjectileId,1));
    this.attackCooldown=Math.max(0,n(save.attackCooldown));this.playerAttackSerial=n(save.playerAttackSerial);this.playerAttackUntil=n(save.playerAttackUntil);
    this.playerReaction=restorePlayerReaction(save.playerReaction,this.state.health,this.state.lives);
    this.playerCharge=save.playerCharge&&(this.state.skill&4)?{age:clamp(n(save.playerCharge.age),0,PLAYER_SUPER_CHARGE.duration)}:null;
    this.pendingPlayerAttack=save.pendingPlayerAttack&&Number.isFinite(save.pendingPlayerAttack.at)?{...save.pendingPlayerAttack,position:v3(save.pendingPlayerAttack.position),forward:v3(save.pendingPlayerAttack.forward)}:null;
    this.projectiles=(Array.isArray(save.projectiles)?save.projectiles:[]).filter(p=>p&&typeof p.id==='string'&&Array.isArray(p.position)&&p.position.length===3&&p.position.every(Number.isFinite)&&Array.isArray(p.velocity)&&p.velocity.length===3&&p.velocity.every(Number.isFinite)&&['radius','life','damage','gravity','age'].every(key=>Number.isFinite(p[key]))&&p.life>p.age).slice(0,256).map(p=>({...p,position:[...p.position],velocity:[...p.velocity]}));
    for(const projectile of this.projectiles){restoreEnemyProjectileFlight(projectile,this.settings['projectile'+this.difficulty.toLowerCase()]);restorePlayerProjectileFlight(projectile);restoreProjectileCollision(projectile);}
    this.hazards.retainProjectiles(this.projectiles);
    const saved=new Map((save.objects||[]).map(o=>[o.id,o]));
    for(const object of this.objects) {
      const value=saved.get(object.id);if(!value)continue;
      object.movementRecovery?.reset();delete object.lastMovementRecovery;
      if(Number.isFinite(value.health))object.restoredHealth=true;
      for(const key of ['enabled','visible','collected','open','locked','switchedOn','pendingButtonSwitch','inside','grounded','alerted','relocateAfterSalvo','boneSkullPhase','boneChargePending','beamTriggered','secretFound','animationLoop','knightSwinging'])if(typeof value[key]==='boolean')object[key]=value[key];
      for(const key of ['health','triggerCount','switchCount','openFraction','closeAt','volume','motionSpeed','animationSerial','animationUntil','corpseUntil','attackTimer','salvoRemaining','velocityY','lastSeenAt','lastAttackedAt','yaw','aiRandomState'])if(Number.isFinite(value[key]))object[key]=value[key];
      // Optional: a FlashEffect burst still running when saved.
      if(object.entity.classname==='FlashEffect'&&Number.isFinite(value.flashStartedAt))object.flashStartedAt=value.flashStartedAt;else delete object.flashStartedAt;
      // Optional since the native sight and chatter timers; older saves start
      // them fresh (their nextIdleAt is no longer used).
      if(object.kind==='enemy') {
        const sight=value.sight,timer=value.idleTimer;
        object.sight=sight&&Number.isFinite(sight.lastCheck)&&typeof sight.seen==='boolean'?{lastCheck:sight.lastCheck,seen:sight.seen}:newEnemySight();
        const think=value.think;
        object.think=think&&Number.isInteger(think.count)&&think.count>=0&&think.count<ENEMY_THINK_INTERVAL&&typeof think.inRadius==='boolean'?{count:think.count,inRadius:think.inRadius}:newEnemyThink();
        if(timer&&Number.isFinite(timer.period)&&Number.isFinite(timer.deadline))object.idleTimer={period:timer.period,deadline:timer.deadline};else delete object.idleTimer;
      }
      if(object.kind==='trigger')restoreTriggerPhase(object,value.triggerPhase);
      if(object.kind==='button'){delete object.pendingButtonSwitch;if(typeof value.pendingButtonSwitch==='boolean')object.pendingButtonSwitch=value.pendingButtonSwitch;object.buttonPhase=Number.isInteger(value.buttonPhase)&&value.buttonPhase>=1&&value.buttonPhase<=8?value.buttonPhase:undefined;}
      restorePropDamage(object,value.propDamage);
      if(Number.isFinite(value.deathStartedAt)&&object.health<=0)object.deathStartedAt=value.deathStartedAt;else delete object.deathStartedAt;
      // Optional since the death-clip deferral; older saves already ran it.
      object.afterDestroyPending=object.kind==='enemy'&&object.health<=0&&value.afterDestroyPending===true;
      const drop=value.dropDead;
      object.dropDead=object.health<=0&&drop&&Number.isFinite(drop.fromY)&&(drop.floorY===null||Number.isFinite(drop.floorY))?{fromY:drop.fromY,floorY:drop.floorY}:undefined;
      if(object.afterDestroyPending||object.dropDead)this.dyingEnemies.add(object);else this.dyingEnemies.delete(object);
      for(const key of ['deathSmokeAnchors','deathSmokeVelocities']) {
        if(object.health<=0&&Array.isArray(value[key])&&value[key].length===15&&value[key].every(p=>Array.isArray(p)&&p.length===3&&p.every(Number.isFinite)))object[key]=value[key].map(p=>[...p]);else delete object[key];
      }
      object.animationPose=value.animationPose?structuredClone(value.animationPose):undefined;
      object.machinePose=value.machinePose?structuredClone(value.machinePose):undefined;
      if(['idle0','idle1','idle2','idle3','static'].includes(value.animationIdleClip))object.animationIdleClip=value.animationIdleClip;
      if(Number.isFinite(value.animationRate)&&value.animationRate!==0)object.animationRate=value.animationRate;
      if(Number.isFinite(value.effectAge)&&value.effectAge>=0)object.effectAge=value.effectAge;
      for(const key of ['teleportEffectAge','teleportEffectSerial','teleportTerminalSoundSerial','beamContactDelay'])if(Number.isFinite(value[key])&&value[key]>=0)object[key]=value[key];
      if(object.entity.classname==='TeleporterFX'&&value.teleporterState)object.teleporterState=structuredClone(value.teleporterState);
      if(object.entity.classname==='Fairy')object.fairyState=value.fairyState?structuredClone(value.fairyState):undefined;
      object.knightDebrisState=object.health<=0?restoreKnightDebrisState(value.knightDebrisState):undefined;
      if(Number.isFinite(value.actorAge)&&value.actorAge>=0)object.actorAge=value.actorAge;
      if(Array.isArray(value.rotation)&&value.rotation.length===3&&value.rotation.every(Number.isFinite))object.rotation=[...value.rotation];
      if(['idle','walk','walkback','attack','hurt','death','charge','start','retract','teleport','dormant'].includes(value.animationState))object.animationState=value.animationState;
      object.pendingAttack=value.pendingAttack&&Number.isFinite(value.pendingAttack.at)?{at:value.pendingAttack.at,...(Number.isFinite(value.pendingAttack.until)?{until:Math.max(value.pendingAttack.at,value.pendingAttack.until)}:{})}:null;
      object.nativeShooter=usesNativeShooter(object)?restoreNativeShooterState(value.nativeShooter):null;
      object.nativeStandingShooter=usesNativeStandingShooter(object)?restoreNativeStandingShooter(value.nativeStandingShooter):null;
      if(usesNativeStandingShooter(object)&&!object.nativeStandingShooter&&!value.nativeStandingShooter){
        // Preserve an existing committed salvo or remaining old cooldown;
        // loading must not replay its first shot or restart a full wait.
        if(object.pendingAttack||value.animationState==='attack'||n(value.salvoRemaining)>0)
          object.nativeStandingShooter={version:1,phase:'shoot',remaining:clamp(Math.trunc(n(value.salvoRemaining)),0,1024),waitUntil:null};
        else if(n(value.attackTimer)>0)
          object.nativeStandingShooter={version:1,phase:'wait',remaining:0,waitUntil:this.time+n(value.attackTimer)};
      }
      // Only a shooter that runs the native state machine can come from a
      // pre-state-machine save. A path-less Brutus runs the fallback AI, whose
      // pending attack, charge and relocation fields must be kept as saved.
      const legacyShooter=nativeShooterActive(this,object)&&!object.nativeShooter&&!value.nativeShooter;
      // A saved Bone charge has already switched ammo. Adopt its playing
      // clip, without repeating that entry action or resurrecting the salvo.
      if(legacyShooter&&object.enemyType==='brutusb'&&value.animationState==='charge'){
        object.nativeShooter={version:1,phase:'charge',remaining:0,waitUntil:null};
      }
      // Pre-state-machine saves retain the outstanding release and shot
      // count. Adopt that child instead of starting a second full salvo.
      if(legacyShooter&&!object.nativeShooter&&
        (object.pendingAttack||value.animationState==='attack'||n(value.salvoRemaining)>0||object.enemyType==='brutusb'&&value.boneChargePending)){
        const waiting=value.animationState!=='attack'&&!object.pendingAttack;
        const chargeNext=object.enemyType==='brutusb'&&value.boneChargePending;
        object.nativeShooter={version:1,phase:waiting&&!chargeNext?'betweenWait':'shoot',
          remaining:clamp(Math.trunc(n(value.salvoRemaining)),0,1024),
          waitUntil:waiting?this.time+Math.max(0,n(value.attackTimer)):null};
      }
      if(object.patrol&&value.patrol&&typeof value.patrol==='object'){
        for(const key of ['start','current','target','previous'])if(value.patrol[key]===null||this.navigation.find(value.patrol[key]))object.patrol[key]=value.patrol[key];
        for(const key of ['leftStart','relocating','reacquiring'])if(typeof value.patrol[key]==='boolean')object.patrol[key]=value.patrol[key];
      }
      if(legacyShooter&&object.nativeShooter){
        object.boneChargePending=false;object.relocateAfterSalvo=false;
        if(object.patrol)object.patrol.relocating=false;
      }
      if(Array.isArray(value.lastSeenPosition)&&value.lastSeenPosition.length===3&&value.lastSeenPosition.every(Number.isFinite))object.lastSeenPosition=[...value.lastSeenPosition];
      restoreBossState(this,object,value.boss);
      if(value.position)object.position=v3(value.position);
      restoreEnemyAmbush(object,value.ambush);
      cancelBatFlightSearch(this,object);object.flightDetour=null;object.batContact=null;object.waypointActive=false;
      if(object.enemyType==='bat'&&(value.flightDetour?.target===null||this.navigation.find(value.flightDetour?.target))&&Number.isFinite(value.flightDetour?.until))object.flightDetour={target:value.flightDetour.target,until:value.flightDetour.until};
      if(usesTouchPursuit(object)&&value.batContact?.version===2&&[value.batContact.wait,value.batContact.remaining].every(Number.isFinite))object.batContact={version:2,started:value.batContact.started===true,wait:clamp(value.batContact.wait,0,1),remaining:clamp(value.batContact.remaining,0,2),direction:value.batContact.direction<0?-1:1,mode:value.batContact.mode==='closer'?'closer':'circle'};
      // Old free-form pursuit/orbits could leave the body away from its
      // saved edge while retaining a destination. Do not treat that arbitrary
      // approach as a clear authored segment; reacquire with the bounded solver.
      if(usesTouchPursuit(object)&&object.patrol&&value.batContact?.version!==2&&
        (value.batContact||value.alerted&&typeof value.patrol?.reacquiring!=='boolean'))object.patrol.reacquiring=true;
      if(object.kind==='enemy'&&Number.isInteger(value.salvoSize)&&value.salvoSize>=1&&value.salvoSize<=Math.max(1,n(object.stats.AverageShotsPerSalvo,2)))object.salvoSize=value.salvoSize;
      if(object.kind==='enemy'&&value.pursuit&&Array.isArray(value.pursuit.route)&&value.pursuit.route.every(id=>this.navigation.find(id))&&Array.isArray(value.pursuit.goal)&&value.pursuit.goal.length===3&&value.pursuit.goal.every(Number.isFinite)&&Number.isFinite(value.pursuit.until))object.pursuit=structuredClone(value.pursuit);
      if(['maxd','maxj'].includes(object.enemyType)&&['maxd','maxj'].includes(value.boss?.type)&&value.boss.type!==object.enemyType) {
        // Earlier saves swapped the original standing-enemy enum. Keep save
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
    this.navigation.syncReservations(this.objects,this.time,this.playerPosition);
    return true;
  }
}

import { DaviVM } from './davi-vm.js';
import { MotionPlayer } from './motions.js';

const number=(value,fallback=0)=>Number.isFinite(Number(value))?Number(value):fallback;
const clamp=(value,min,max)=>Math.max(min,Math.min(max,value));
const point=value=>String(value||'0 0 0').trim().split(/\s+/).map(Number);
const copy=value=>JSON.parse(JSON.stringify(value));
const isBoss=object=>object.kind==='enemy'&&['brutusm','brutusb','maxd','maxj','witch'].includes(object.enemyType);

/** The portable game side of Davi-Script. The VM knows nothing about rendering,
 * DOM, files or operating systems. Names bind both single objects and groups. */
export class ScriptHost {
  constructor(gameplay,program,{motions={motions:[]},dialogue={}}={}) {
    this.game=gameplay;this.dialogue=dialogue;this.bindings=new Map();this.players=new Map();
    this.modelTransforms=new Map();this.keyItems=new Set();this.missions=new Map();
    this.cutscene=false;this.playerVisible=true;this.enemiesFrozen=false;this.weaponsEnabled=true;
    this.camera=null;this.subtitle=null;this.musicState=null;this.afterBossMusicId=null;this.combatThreats=false;this.combatBoss=false;this.errors=[];this.time=0;this.initialized=false;
    this.vm=new DaviVM(program,this);gameplay.scripts=this;
    const clips=new Map(motions.motions.map(m=>[m.model,m]));
    for(const object of gameplay.objects) {
      const clip=clips.get(object.modelIndex);
      if(!clip||!['controller','door','button'].includes(object.kind))continue;
      const player=new MotionPlayer(clip,{onEvent:event=>gameplay.runEvent(object,'MotionCommand',[event.label,event.time]),onComplete:()=>this.motionComplete(object),
        beforeAdvance:(from,to,p)=>this.beforeMotionAdvance?.(object,p,from,to)!==false});
      this.players.set(object.id,player);player.object=object;object.hasMotion=true;
      player.seek(object.kind==='door'&&object.open||object.kind==='button'&&object.switchedOn?clip.endTime:number(object.entity.InitialPosition,clip.startTime));
      this.applyMotion(object,player);
    }
  }
  initialize(save=null) {
    this.vm.initialize();this.initialized=true;
    if(save){
      this.restore(save);
      // Resume enabled ambience without replaying completed one-shot effects.
      for(const object of this.game.objects)if(object.enabled&&object.entity.classname==='EffectSound'&&number(object.entity.Replay))this.sound(object,true);
      return;
    }
    for(const object of this.game.objects) {
      if(object.kind==='controller'&&object.enabled)this.startMotion(object);
      if(object.enabled&&object.entity.classname==='EffectSound')this.sound(object,true);
    }
    for(const object of this.game.objects.filter(o=>o.entity.classname==='World'))this.game.runEvent(object,'OnInitCommand');
  }
  resolveObject(name) {
    const key=String(name).toLowerCase();
    if(!this.bindings.has(key))this.bindings.set(key,{daviName:String(name)});
    return this.bindings.get(key);
  }
  targets(binding) {return binding?.id?this.game.objects.filter(o=>o.id===binding.id):this.game.find(binding?.daviName??binding);}
  dispatch(object,event,args=[]) {
    let count=0;
    for(const name of new Set([object.entity.DaviName,object.entity.DaviNameGroup,object.entity['%name%']].filter(Boolean))) {
      if(this.vm.hasHandler(name,event))count+=this.vm.dispatch(name,event,args);
    }
    return count;
  }
  callMethod(binding,name,args=[]) {
    const targets=this.targets(binding),verb=name.toLowerCase();
    if(!targets.length)throw new Error(`Davi-Script object not found: ${binding?.daviName??binding}`);
    if(verb==='getone')return {id:targets[0].id,daviName:targets[0].entity.DaviName||targets[0].id};
    for(const object of targets) {
      if(['open','close','lock','unlock','enable','disable','show','hide','switch','switchon','switchoff','trigger','destroy'].includes(verb))this.game.command(object,verb);
      else if(verb==='setto') {const p=this.players.get(object.id);if(p){p.seek(number(args[0]));this.applyMotion(object,p);}}
      else if(verb==='moveto')this.startMotion(object,number(args[0]));
      else if(verb==='setmotionspeed'||verb==='multiplymotionspeed') {
        object.motionSpeed=(verb==='setmotionspeed'?1:number(object.motionSpeed,1))*number(args[0],1);
        const p=this.players.get(object.id);if(p)p.speed=object.motionSpeed;
      } else if(verb==='multiplyvolume') {object.volume=clamp(number(object.volume,1)*number(args[0],1),0,1);this.game.emit('scriptVolume',{id:object.id,volume:object.volume});}
      else if(verb.startsWith('play')) {
        const mode=verb==='playvictory'?'victory':verb.slice(4).replace(/^victory/,'');
        this.afterBossMusicId=null;
        this.selectMusic(object,mode);
      } else if(verb==='stopplaying') {
        if(object.entity.classname==='EffectMusic'){this.afterBossMusicId=null;this.musicState={id:object.id,stop:true};this.game.emit('scriptMusic',this.musicState);}
        else this.game.emit('scriptSound',{id:object.id,stop:true});
      }
      else if(verb==='reset') {object.triggerCount=0;object.switchCount=0;object.inside=false;const p=this.players.get(object.id);if(p){p.stop();p.seek(p.motion.startTime);this.applyMotion(object,p);}}
      else if(['rotatex','rotatey','rotatez'].includes(verb)){object.rotation||=[0,0,0];object.rotation['xyz'.indexOf(verb.at(-1))]+=number(args[0])*Math.PI/180;}
      else if(verb==='enableshadow'||verb==='disableshadow')object.shadow=verb==='enableshadow';
      else if(verb==='setfollowdaviname')object.followName=String(args[0]);
      else if(verb==='setfollowoffset')object.followOffset=args.map(v=>number(v));
      else if(verb==='setfriction')object.friction=number(args[0]);
      else if(verb==='setradius')object.radius=number(args[0]);
      else if(verb==='setradiustime')object.radiusTime=number(args[0]);
      else if(verb==='addcode')object.code=(object.code||'')+String(args[0]);
      else if(verb==='resetcode')object.code=String(args[0]);
      else if(verb==='addfrequency')(object.frequencies||=[]).push(number(args[0]));
      else if(verb==='adddefaultcommand'||verb==='addmissioncommand')(object.missionCommands||=[]).push({command:args[0],argument:args[1],talkScheme:args[2]});
      else if(verb==='startmission')this.game.emit('mission',{id:object.id,commands:object.missionCommands||[]});
      else throw new Error(`Unimplemented Davi-Script method: ${name} (${object.id})`);
    }
    return 0;
  }
  callNative(name,args=[]) {
    const game=this.game,a=args[0];
    switch(name.toLowerCase()) {
      case 'startcutscene':this.cutscene=true;this.game.emit('cutscene',{active:true,fade:number(a)});return 0;
      case 'stopcutscene':this.cutscene=false;this.camera=null;this.subtitle=null;this.game.emit('cutscene',{active:false,fade:number(a)});return 0;
      case 'cutscenesay':case 'say':case 'communicatorsay':this.say(String(a));return 0;
      case 'rchide':this.playerVisible=false;return 0;
      case 'rcshow':this.playerVisible=true;return 0;
      case 'playervisible':this.playerVisible=!!a;return 0;
      case 'freezeenemies':this.enemiesFrozen=true;return 0;
      case 'unfreezeenemies':this.enemiesFrozen=false;return 0;
      case 'rcshowatspawnpoint':this.teleport(String(a),number(args[1]));this.playerVisible=true;return 0;
      case 'rcsetsavepoint': {
        const target=game.find(a)[0];if(!target)throw new Error(`Missing Davi-Script savepoint: ${a}`);
        game.setCheckpoint(target.position,number(args[1]),target.id);return 0;
      }
      case 'rchintmotion':this.hintMotion=number(a);return 0;
      case 'playwavsound':game.emit('scriptSound',{sound:String(a)});return 0;
      case 'rchasallpotions': {
        const conf=game.settings.game?.Player||game.settings.game?.Game||{};
        const keys=['ReqPotionShot','ReqPotionPowerShot','ReqPotionSuperShot','ReqPotionSuperJump','ReqPotionPowerMove'];
        return Number(game.state.potions>=number(conf[keys[number(a)]],[10,20,30,30,0][number(a)]??999));
      }
      case 'rcenableskill':game.state.skill|=1<<clamp(number(a),0,4);game.emit('skill',{skill:number(a)});return 0;
      case 'getgametype':return 0;
      case 'giveplayerkeyitem':this.keyItems.add(String(a).toLowerCase());return 0;
      case 'playerhaskeyitem':return Number(this.keyItems.has(String(a).toLowerCase()));
      case 'enableweapons':this.weaponsEnabled=!!a;return 0;
      case 'looseallweapons':game.state.skill=0;return 0;
      case 'killplayer':game.hitCooldown=0;game.damage(game.state.health);return 0;
      case 'respawnplayer':game.respawn();this.teleport(String(a));return 0;
      case 'addmission':this.missions.set(number(a),{text:args[1],portrait:args[2],sound:args[3],complete:false});return 0;
      case 'completemission':if(this.missions.has(number(a)))this.missions.get(number(a)).complete=true;return 0;
      case 'showmission':game.emit('mission',{mission:this.missions.get(number(a))});return 0;
      case 'showmissions':game.emit('mission',{missions:[...this.missions.values()]});return 0;
      case 'communicatorenable':this.communicatorEnabled=!!a;return 0;
      case 'loadcommportrait':case 'loadcommsounds':case 'setcommportraitanim':return 0; // Portable presentation preloads its own assets.
      case 'debugmessage':game.emit('scriptDebug',{text:String(a)});return 0;
      default:throw new Error(`Unimplemented Davi-Script native: ${name}`);
    }
  }
  say(id) {
    const key=id.replace(/\.wav$/i,'').toLowerCase(),entry=this.dialogue[key];
    // Empty original entries (for example GRintro3's laugh) are intentional.
    // Resource keys are never player-facing dialogue.
    this.subtitle={text:entry?.text??'',voice:entry?.voice||null,until:this.time+Math.max(3,number(entry?.duration,5))};
    this.game.emit('dialogue',{id:key,...this.subtitle});
  }
  teleport(name,orientation=0) {
    // RcShowAtSpawnPoint enumerates EffectEndPoint entities, not PlayerStart.
    // The castle deliberately has both classes named rcpoint1.
    const targets=this.game.find(name),target=targets.find(o=>o.entity.classname==='EffectEndPoint')||targets[0];
    if(!target)throw new Error(`Missing Davi-Script spawn: ${name}`);
    this.game.playerPosition=[...target.position];this.game.emit('teleport',{position:[...target.position],orientation});
  }
  selectMusic(object,mode) {
    const field=Object.keys(object.entity).find(key=>key.toLowerCase()==='music'+mode.toLowerCase());
    const sound=object.entity[field];
    this.musicState=sound?{id:object.id,sound,mode}:{id:object.id,stop:true,mode};
    this.game.emit('scriptMusic',{...this.musicState,volume:number(object.volume,1),crossFade:!!number(object.entity.CrossFade),fadeInTimeSeconds:number(object.entity.FadeInTimeSeconds),fadeOutTimeSeconds:number(object.entity.FadeOutTimeSeconds)});
  }
  enemyDefeated(object) {
    if(isBoss(object)) {
      const music=this.game.objects.find(o=>o.enabled&&o.entity.classname==='EffectMusic');
      if(music)this.afterBossMusicId=music.id;
    }
    this.updateBossMusic();
  }
  updateBossMusic() {
    // RcEnemy's shared threat counter (0x422630/0x422880) switches Action
    // for engaged ordinary enemies, Special for a boss and Ambient when clear.
    // Preserve explicit script choices until the threat state changes.
    const alive=o=>o.kind==='enemy'&&o.enabled&&o.health>0;
    const threats=this.game.objects.some(o=>alive(o)&&!isBoss(o)&&
      (o.alerted||number(o.lastAttackedAt,-Infinity)+number(o.stats?.TimeToRememberVisual,2)>this.game.time)&&
      (!o.ambush||o.ambush.phase==='awake'));
    const boss=this.game.objects.some(o=>alive(o)&&isBoss(o));
    const changed=threats!==this.combatThreats||boss!==this.combatBoss;
    if(this.cutscene&&!this.afterBossMusicId)return;
    this.combatThreats=threats;this.combatBoss=boss;
    if(!changed&&!this.afterBossMusicId)return;
    const music=this.game.objects.find(o=>o.enabled&&o.entity.classname==='EffectMusic'&&(!this.afterBossMusicId||o.id===this.afterBossMusicId));
    this.afterBossMusicId=null;
    if(!music)return;
    const mode=boss?'special':threats?'action':'ambient';
    if(this.musicState?.id!==music.id||this.musicState?.mode!==mode)this.selectMusic(music,mode);
  }
  sound(object,active) {
    const e=object.entity;
    this.game.emit('scriptSound',{id:object.id,sound:e.SoundFileName,stop:!active,loop:number(e.Replay)!==0,volume:number(object.volume,1),
      spatial:number(e.Use3DSound)!==0,position:[...object.position],minReplayDelay:number(e.MinReplayDelaySeconds),maxReplayDelay:number(e.MaxReplayDelaySeconds)});
  }
  objectEnabled(object,enabled,changed) {
    if(changed&&enabled&&isBoss(object)) {
      this.afterBossMusicId=null;this.combatBoss=true;
      const music=this.game.objects.find(o=>o.enabled&&o.entity.classname==='EffectMusic');
      if(music&&(this.musicState?.id!==music.id||this.musicState?.mode!=='special'))this.selectMusic(music,'special');
    }
    if(object.kind==='controller') {
      const p=this.players.get(object.id);
      if(enabled&&changed){if(p&&!p.finished&&object.motionStarted)p.resume();else this.startMotion(object);}else if(!enabled)p?.stop();
    }
    if(changed&&object.entity.classname==='EffectSound')this.sound(object,enabled);
    if(changed&&enabled&&object.entity.classname==='FlashEffect')this.game.emit('flash',{id:object.id});
    if(changed&&enabled)object.activatedAt=this.time;
    if(!enabled&&this.camera?.id===object.id)this.camera=null;
  }
  activateCamera(object) {
    const e=object.entity,points=[];
    for(let i=0;i<number(e.CamScriptPosTotal);i++){const target=this.game.find(e['CamScriptPos'+i])[0];if(target)points.push([...target.position]);}
    if(number(e.CameraMode)===0){this.camera=null;return;}
    this.camera={id:object.id,mode:number(e.CameraMode),points,position:[...(this.game.find(e.CamPos)[0]?.position||object.position)],targetPosition:this.game.find(e.CamTargetPos)[0]?.position||null,offset:point(e.CamOffset),target:e.CamTargetDaviName||null,targetPlayer:number(e.CamTargetPlayer)!==0,start:this.time,duration:number(e.CameraMode)===1?0:Math.max(0,number(e.CamTimeInMode)/1000)};
  }
  startMotion(object,to=null) {
    const player=this.players.get(object.id);if(!player)return false;
    const clip=player.motion;
    const mode=number(object.entity.RepeatMode),loop=object.kind==='controller'?(mode===2?'pingpong':mode===1):false;
    // Native repeat controllers wrap/reflect at the path extent. Extending a
    // loop to an out-of-range event skips the next cycle's first script event.
    const end=loop?clip.endTime:(clip.playbackEndTime??clip.endTime);
    // Repeating controllers do not normally finish. An old save that lost
    // its repeat mode can have completed one lap; restore the authored phase
    // on its next Enable so staggered hazards do not restart as one cluster.
    const from=player.finished?(loop?clamp(number(object.entity.InitialPosition,clip.startTime),clip.startTime,end):clip.startTime):Math.min(player.time,end);
    player.play({from,to:to??end,speed:number(object.motionSpeed,1),loop,loopFrom:clip.startTime,loopTo:end});
    object.moving=true;object.motionStarted=true;return true;
  }
  doorMotion(object,open) {
    const p=this.players.get(object.id);if(!p)return false;
    p.play({from:p.time,to:open?p.motion.endTime:p.motion.startTime,speed:Math.abs(number(object.motionSpeed,1))});object.moving=true;return true;
  }
  motionComplete(object) {
    object.moving=false;
    if(object.kind==='controller')object.enabled=false;
    if(object.kind==='door')this.game.doorMotionComplete(object);
    if(object.kind==='button')this.game.runEvent(object,object.switchedOn?'AfterSwitchOnCommand':'AfterSwitchOffCommand');
  }
  applyMotion(object,player) {
    this.modelTransforms.set(object.modelIndex,{...player.sample(),origin:player.motion.origin});
  }
  update(dt) {
    this.time+=dt;
    this.updateBossMusic();
    for(const [id,player] of this.players) {
      const object=player.object;
      if(player.playing){player.update(dt);this.applyMotion(object,player);}
    }
    if(this.camera?.duration>0&&this.time-this.camera.start>=this.camera.duration)this.camera=null;
    if(this.subtitle&&this.time>=this.subtitle.until){this.subtitle=null;this.game.emit('dialogue',{text:''});}
  }
  skipCutscene({onStep=()=>{},maximumSeconds=300}={}) {
    if(!this.cutscene||this.skippingCutscene)return false;
    // Complete original timelines in order: skills, boss activation, doors,
    // teleports and StopCutScene must run just as during ordinary playback.
    this.skippingCutscene=true;
    try {
      for(let elapsed=0;this.cutscene&&elapsed<maximumSeconds;elapsed+=.05){
        if(![...this.players.values()].some(p=>p.playing))break;
        this.update(.05);onStep();
      }
      return !this.cutscene;
    } finally {this.skippingCutscene=false;}
  }
  snapshot() {
    return {version:1,vm:this.vm.snapshot(),time:this.time,cutscene:this.cutscene,playerVisible:this.playerVisible,enemiesFrozen:this.enemiesFrozen,weaponsEnabled:this.weaponsEnabled,
      poses:copy([...this.modelTransforms]),camera:copy(this.camera),subtitle:copy(this.subtitle),musicState:copy(this.musicState),afterBossMusicId:this.afterBossMusicId,combatThreats:this.combatThreats,combatBoss:this.combatBoss,keyItems:[...this.keyItems],missions:[...this.missions],
      motions:[...this.players].map(([id,p])=>({id,started:!!p.object.motionStarted,time:p.time,from:p.from,to:p.to,speed:p.speed,loop:p.loop,playing:p.playing,finished:p.finished,includeStart:p.includeStart,loopFrom:p.loopFrom,loopTo:p.loopTo}))};
  }
  restore(save) {
    if(save?.version!==1)return;
    this.vm.restore(save.vm);this.time=number(save.time);
    for(const key of ['cutscene','playerVisible','enemiesFrozen','weaponsEnabled'])if(typeof save[key]==='boolean')this[key]=save[key];
    this.camera=save.camera||null;this.subtitle=save.subtitle||null;this.keyItems=new Set(save.keyItems||[]);this.missions=new Map(save.missions||[]);
    const correctedPoses=new Set();
    for(const s of save.motions||[]) {
      const p=this.players.get(s.id);if(!p)continue;
      const savedLoop=s.loop==='pingpong'?'pingpong':!!s.loop;
      const repeat=number(p.object.entity.RepeatMode),nativeLoop=p.object.kind==='controller'?(repeat===2?'pingpong':repeat===1):false;
      // Older saves did not distinguish a never-started controller from a
      // paused one. Resuming its constructor defaults ran repeating rocks
      // only once, then disabled them at the reset end of their path.
      const constructorRange=number(s.from,p.motion.startTime)===p.motion.startTime&&number(s.to,p.motion.playbackEndTime??p.motion.endTime)===(p.motion.playbackEndTime??p.motion.endTime);
      const legacyRepeat=typeof s.started!=='boolean'&&nativeLoop&&!savedLoop&&constructorRange;
      const loop=legacyRepeat?nativeLoop:savedLoop;
      const initial=number(p.object.entity.InitialPosition,p.motion.startTime);
      const legacyUnstarted=legacyRepeat&&!s.playing&&!s.finished&&number(s.time)===initial;
      const end=loop?p.motion.endTime:(p.motion.playbackEndTime??p.motion.endTime);
      const paintingTail=loop===true&&s.time>end&&this.game.level.id==='lvl02a'&&/^puzstuk[1-5]_mc$/.test(p.object.entity.DaviName);
      p.stop();p.play({from:Math.min(number(s.from,p.motion.startTime),end),to:Math.min(number(s.to,end),end),speed:number(s.speed,1),loop,loopFrom:s.loopFrom,loopTo:Math.min(number(s.loopTo,end),end)});
      // paal*e represented the same correct picture as paal*a. Resume after
      // that first marker so the next foot press advances to the next picture,
      // rather than repeating the correct one and replaying its enable.
      const firstMarker=paintingTail?p.motion.events.find(e=>e.time>p.motion.startTime&&e.time<=end):null;
      p.seek(firstMarker?firstMarker.time:Math.min(number(s.time),end));p.includeStart=firstMarker?false:!!s.includeStart;if(!s.playing)p.stop();
      if(firstMarker)correctedPoses.add(p.object.modelIndex);
      p.finished=!!s.finished;p.object.motionStarted=typeof s.started==='boolean'?s.started:!legacyUnstarted;p.object.moving=!!s.playing;this.applyMotion(p.object,p);
      if(paintingTail){
        // Pre-fix saves stopped at paal*e (8.01), missing the paal*a enables
        // at the wrap. Restore those three original side effects only; do not
        // replay CheckGameState and the already completed doorway cutscene.
        const name=({puzstuk2_mc:'mspina',puzstuk4_mc:'mspinb',puzstuk5_mc:'mspinc'})[p.object.entity.DaviName];
        const spider=name&&this.game.find(name)[0];
        if(spider&&spider.health>0&&!spider.enabled)this.game.command(spider,'enable');
      }
      // Older saves started the close timer at the opening request. A door
      // still opening (including a paused opening) must reach its endpoint first.
      if(p.object.kind==='door'&&p.object.open&&p.to>p.time+1e-8)p.object.closeAt=null;
    }
    if(Array.isArray(save.poses))for(const [index,pose] of save.poses)if(!correctedPoses.has(index)&&this.modelTransforms.has(index)&&pose?.origin?.length===3&&pose?.translation?.length===3&&pose?.rotation?.length===4&&[...pose.origin,...pose.translation,...pose.rotation].every(Number.isFinite))this.modelTransforms.set(index,copy(pose));
    this.game.emit('cutscene',{active:this.cutscene,fade:0});
    if(this.subtitle)this.game.emit('dialogue',this.subtitle);
    this.musicState=null;
    const music=this.game.objects.find(o=>o.id===save.musicState?.id&&o.entity.classname==='EffectMusic');
    if(music&&(save.musicState.stop===true||typeof save.musicState.sound==='string')) {
      const matchingModes=Object.keys(music.entity).filter(k=>k.startsWith('Music')&&music.entity[k]?.toLowerCase()===save.musicState.sound?.toLowerCase()).map(k=>k.slice(5).toLowerCase());
      const legacyMode=matchingModes.includes('special')&&this.game.objects.some(o=>isBoss(o)&&o.enabled&&o.health>0)?'special':matchingModes[0];
      const mode=save.musicState.mode||legacyMode;
      this.musicState=save.musicState.stop===true?{id:music.id,stop:true}:{id:music.id,sound:save.musicState.sound,mode};
      this.game.emit('scriptMusic',{...this.musicState,volume:number(music.volume,1)});
    }
    this.afterBossMusicId=music&&save.afterBossMusicId===music.id?music.id:null;
    this.combatThreats=typeof save.combatThreats==='boolean'?save.combatThreats:this.game.objects.some(o=>o.kind==='enemy'&&!isBoss(o)&&o.enabled&&o.health>0&&o.alerted);
    this.combatBoss=typeof save.combatBoss==='boolean'?save.combatBoss:this.game.objects.some(o=>isBoss(o)&&o.enabled&&o.health>0);
    // Older saves can contain a defeated boss with the uncorrected battle loop.
    const bosses=this.game.objects.filter(isBoss);
    if(music&&(!save.musicState?.mode||save.musicState.mode==='special')&&this.musicState?.sound?.toLowerCase()===music.entity.MusicSpecial?.toLowerCase()&&bosses.length&&bosses.every(o=>o.health<=0))this.afterBossMusicId=music.id;
    this.updateBossMusic();
  }
}

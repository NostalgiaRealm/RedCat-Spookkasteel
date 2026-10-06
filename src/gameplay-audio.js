import {FootstepClock} from './locomotion-audio.js';
import {playerInputVelocity} from './player-movement.js';
import {doorMovementSound} from './door-audio.js';
// Sound choices for gameplay actions, separate from level-script ambience.
// Original filename/health thresholds are documented in docs/gameplay-sound-native.md.
export const PLAYER_SOUNDS = {
  shot:'rcshoot1.wav', impact:'rcshoot4.wav', jump:'rcjump1.wav',
  hurt:['rcgen1.wav','rcgen2.wav','rcgen3.wav'], death:'rcgen7.wav'
};
const PLAYER_PROJECTILE_SOUNDS = {
  shot:{fire:PLAYER_SOUNDS.shot,impact:PLAYER_SOUNDS.impact},
  powerShot:{fire:'rcshoot2.wav',impact:'rcshoot5.wav'},
  // Native super-shot release stops rcshoot3's charge loop; it adds no fire cue.
  superShot:{fire:null,impact:'rcshoot6.wav'},
};

export const ENEMY_SOUND_PREFIXES = {
  spiderg:'spiderl', spidery:'spiderll', spiderr:'spiderlll',
  knight:'knight', guardian:'wachter', zombie:'zombie',
  frog:'kikker', skeleton:'bones', gargoyle:'gargoyl', plant:'plant',
  ghostg:'ghostl', ghosty:'ghostll', ghostr:'ghostlll',
  batg:'batl', baty:'batll', batr:'batlll',
};
const ENEMY_ACTION_SUFFIX = {alert:3, attack:4, hurt:5, death:6};
const BAT_IDLE = {batg:'bafxi1.wav',baty:'baiifx1.wav',batr:'baiiifx1.wav'};

export class GameplayAudio {
  constructor(audio, {random = Math.random} = {}) { this.audio=audio; this.random=random;this.steps=new FootstepClock();this.previousWorld=null;this.previousPosition=null;this.authoredDoorSounds=new Map(); }
  update(dt,world,gameplay,input={}) {
    const player=world.player,position=player.position;
    this.audio.setPlayerListener(position);
    // A save can restore a held charge without emitting a fresh input event.
    if(gameplay.playerCharge&&!this.audio.keyed.has('player:charge'))this.handle({type:'player-charge',active:true});
    else if(!gameplay.playerCharge&&this.audio.keyed.has('player:charge'))this.handle({type:'player-charge',active:false});
    if(this.previousWorld!==world){this.steps=new FootstepClock(gameplay.footstepState);this.previousPosition=null;this.previousWorld=world;this.authoredDoorSounds.clear();}
    const moved=Number.isFinite(player.stepDisplacement)?player.stepDisplacement:this.previousPosition?Math.hypot(position[0]-this.previousPosition[0],position[2]-this.previousPosition[2]):0;
    this.previousPosition=[...position];
    const enabled=!player.noClip&&!gameplay.scripts?.cutscene&&gameplay.state.health>0&&!!(input.forward||input.right)&&dt>0&&moved>.001&&moved<256*dt;
    const contents=enabled?world.collider.contents(position,[0,0,0],[0,1,0],[...new Set([0,...gameplay.liquidModels])]):0;
    // Native Wobble samples live input/environment velocity before the 1.4x
    // ground multiplier. Moving-platform displacement is not in this vector.
    const wind=player.environmentVelocity||[0,0,0];
    const speed=Math.hypot(...playerInputVelocity(input,world.yaw||0,true).map((v,i)=>v+(wind[i]||0)))/32;
    // Native footfalls create independent one-shots. The water recordings
    // outlast the next footfall, so a shared replacement key clips their tails.
    for(const sound of this.steps.update(dt,{speed,grounded:player.grounded,enabled,contents,settings:gameplay.settings.game}))this.audio.play({sound,group:'player:step'});
    gameplay.footstepState=this.steps.snapshot();
  }
  handle(event, gameplay=null) {
    const play = options => this.audio.play(options);
    if(event.type==='scriptSound'&&event.doorId&&!event.stop)this.authoredDoorSounds.set(event.doorId,{open:event.doorOpen,time:gameplay?.time});
    if(event.type==='button') {
      const object=gameplay?.objects.find(o=>o.id===event.id);
      // CAdamButtonModel 0x4cb180 selects the same cue on switch-on/off.
      const sound={1:'switchpushbutton.wav',2:'switchhandle.wav',3:'switchtrigger.wav'}[Number(object?.entity.ButtonType)];
      if(sound)play({sound,sourceId:object.id,spatial:true,position:()=>gameplay.objectPosition(object)});
    }
    if(event.type==='player-charge') {
      // Type 11 selects 0x6b52e0 (rcshoot3.WAV) in 0x436b40;
      // releasing/cancelling stops that instance through 0x436a30.
      if(event.active)play({sound:'rcshoot3.wav',key:'player:charge',loop:true});
      else this.audio.stop('player:charge');
    }
    if(event.type==='door') {
      const object=gameplay?.objects.find(o=>o.id===event.id),authored=this.authoredDoorSounds.get(event.id);
      this.authoredDoorSounds.delete(event.id);
      const explicit=authored&&authored.open===event.open&&authored.time===gameplay?.time;
      // A BeforeOpen/Close script can supply its own native cue. Preserve it
      // once, instead of layering an automatic fallback over the same action.
      const sound=explicit?null:doorMovementSound(object,gameplay?.level);
      if(sound)play({sound,key:`door:${event.id}`,sourceId:event.id,spatial:true,position:()=>gameplay.objectPosition(object)});
    }
    if(event.type==='attack') {
      const sound=(PLAYER_PROJECTILE_SOUNDS[event.kind]||PLAYER_PROJECTILE_SOUNDS.shot).fire;
      if(sound)play({sound});
    }
    if(event.type==='playerProjectileImpact') {
      const sound=(PLAYER_PROJECTILE_SOUNDS[event.kind]||PLAYER_PROJECTILE_SOUNDS.shot).impact;
      play({sound,spatial:true,position:event.position});
    }
    if(event.type==='jump')play({sound:PLAYER_SOUNDS.jump,key:'player:jump'});
    if(event.type==='damage' && event.health>0) {
      const variant=event.amount>=40?2:event.amount>=10?1:0;
      play({sound:PLAYER_SOUNDS.hurt[variant],channel:'voices',key:'player:reaction'});
    }
    if(event.type==='death')play({sound:PLAYER_SOUNDS.death,channel:'voices',key:'player:reaction'});
    if(event.type==='pickup' && event.sound) {
      const object=gameplay?.objects.find(o=>o.id===event.id),kind=object?.subtype??event.subtype;
      const suffix=['s','m','l'][Math.max(0,Math.min(2,(Number(object?.entity.Type)||1)-1))];
      // Native item resources distinguish S/M/L. ICoinS is longer than M;
      // substituting M for every bag clipped the audible small-bag flourish.
      const sound=object&&kind==='coin'?`icoin${suffix}.wav`:object&&kind==='health'?`ihealth${suffix}.wav`:event.sound;
      play({sound,group:'pickup'}); // Independent one-shots: another pickup cannot replace its tail.
    }
    if(event.type==='enemyAction') {
      if(['brutusm','brutusb'].includes(event.actorFile)) {
        // Both native Brutus sound functions select localized combat voices.
        const sound={attack:'brin0011.wav',hurt:'brin0003.wav',death:'brin0004.wav'}[event.action];
        const object=gameplay?.objects.find(o=>o.id===event.id);
        if(sound)play({sound,channel:'voices',key:`enemy:${event.id}`,sourceId:event.id,spatial:true,position:object?()=>object.position:event.position});
        return;
      }
      const prefix=ENEMY_SOUND_PREFIXES[event.actorFile];
      const idle=['idle','walk'].includes(event.action),key=`enemy:${event.id}`;
      // Walking/idle chatter must not cut off a newly emitted alert or reaction.
      if(idle&&this.audio.keyed.has(key))return;
      let suffix=idle?(this.random()<.5?1:2):ENEMY_ACTION_SUFFIX[event.action];
      if(event.actorFile==='plant'&&['alert','attack'].includes(event.action))suffix=event.action==='alert'?4:3;
      if(!prefix||!suffix)return;
      const object=gameplay?.objects.find(o=>o.id===event.id);
      const sound=idle&&BAT_IDLE[event.actorFile]||`${prefix}${suffix}.wav`;
      play({sound,key,sourceId:event.id,spatial:true,
        position:object?()=>object.position:event.position});
    }
  }
}

import {FootstepClock} from './locomotion-audio.js';
// Sound choices for gameplay actions, separate from level-script ambience.
// Original filename/health thresholds are documented in docs/gameplay-sound-native.md.
export const PLAYER_SOUNDS = {
  shot:'rcshoot1.wav', impact:'rcshoot4.wav', jump:'rcjump1.wav',
  hurt:['rcgen1.wav','rcgen2.wav','rcgen3.wav'], death:'rcgen7.wav'
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
  constructor(audio, {random = Math.random} = {}) { this.audio=audio; this.random=random;this.steps=new FootstepClock();this.previousWorld=null;this.previousPosition=null; }
  update(dt,world,gameplay,input={}) {
    const player=world.player,position=player.position;
    if(this.previousWorld!==world){this.steps=new FootstepClock();this.previousPosition=null;this.previousWorld=world;}
    const moved=this.previousPosition?Math.hypot(position[0]-this.previousPosition[0],position[2]-this.previousPosition[2]):0;
    this.previousPosition=[...position];
    const enabled=!player.noClip&&!gameplay.scripts?.cutscene&&gameplay.state.health>0&&!!(input.forward||input.right)&&dt>0&&moved<256*dt;
    const contents=enabled?world.collider.contents(position,[0,0,0],[0,1,0],[...new Set([0,...gameplay.liquidModels])]):0;
    for(const sound of this.steps.update(dt,{speed:dt>0?moved/dt/32:0,grounded:player.grounded,enabled,contents,settings:gameplay.settings.game}))this.audio.play({sound,key:'player:step'});
  }
  handle(event, gameplay=null) {
    const play = options => this.audio.play(options);
    if(event.type==='door') {
      const object=gameplay?.objects.find(o=>o.id===event.id),type=Number(object?.entity.DoorType);
      // CAdamDoorModel 0x4cc140, called when opening and closing. Type 4
      // deliberately selects empty.wav; its authored motion may play a sound.
      const sound={1:'opendoornormal.wav',2:'opendoorkey.wav',3:'opendoorsecret.wav'}[type];
      if(sound)play({sound,key:`door:${event.id}`,sourceId:event.id,spatial:true,position:()=>gameplay.objectPosition(object)});
    }
    if(event.type==='attack')play({sound:PLAYER_SOUNDS.shot});
    if(event.type==='playerProjectileImpact')play({sound:PLAYER_SOUNDS.impact,spatial:true,position:event.position});
    if(event.type==='jump')play({sound:PLAYER_SOUNDS.jump,key:'player:jump'});
    if(event.type==='damage' && event.health>0) {
      const variant=event.amount>=40?2:event.amount>=10?1:0;
      play({sound:PLAYER_SOUNDS.hurt[variant],channel:'voices',key:'player:reaction'});
    }
    // The game-over menu pauses simulation immediately; let its short death cue finish.
    if(event.type==='death')play({sound:PLAYER_SOUNDS.death,channel:'voices',key:'player:reaction',pauseWithGame:false});
    if(event.type==='pickup' && event.sound)play({sound:event.sound});
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

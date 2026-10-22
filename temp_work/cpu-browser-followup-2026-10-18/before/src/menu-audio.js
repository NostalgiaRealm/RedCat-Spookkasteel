import {GameAudio} from './audio.js';

export const LEVEL_MENU_VOICES = Array.from({length:5},(_,i)=>[`rcmn${33+i}.wav`,`rcmn${38+i}.wav`]);

// Independent of the paused level mixer: settings remain audible while gameplay
// is paused. Sequencing follows media completion, never estimated WAV durations.
export class MenuAudio {
  constructor({volume=.6,music=new GameAudio({master:volume}),createAudio=url=>new Audio(url)}={}) {
    this.music=music;this.volume=volume;this.createAudio=createAudio;this.generation=0;
    this.voice=null;this.cancelVoice=null;this.musicWanted=false;this.paused=false;
  }
  showMenu(){
    this.stopVoice();this.resume();this.startMusic();
    return this.say(['rcmn9.wav'],{retryOnGesture:true});
  }
  startMusic(){
    this.musicWanted=true;
    if(!this.music.keyed.has('music'))this.music.playMusic({sound:'menumuz.wav'});
    if(this.paused)this.music.pause();
  }
  stopMusic(){this.musicWanted=false;this.music.playMusic({stop:true});}
  setVolume(volume){this.volume=volume;this.music.setMaster(volume);if(this.voice)this.voice.volume=volume;}
  stopVoice(){this.generation++;this.cancelVoice?.();this.cancelVoice=null;this.voice=null;}
  stop(){this.stopVoice();this.stopMusic();}
  async say(files,{retryOnGesture=false}={}){
    this.stopVoice();const generation=this.generation;
    // Preload both halves of a level announcement while the first is speaking.
    const clips=files.map(name=>{const clip=this.createAudio(`assets/voices/${name}`);clip.preload='auto';clip.load?.();return clip;});
    for(const clip of clips){
      if(generation!==this.generation)return false;
      const completed=await new Promise(resolve=>{
        this.voice=clip;clip.volume=this.volume;
        const finish=result=>{clip.onended=null;clip.onerror=null;clip.pause();if(this.voice===clip){this.voice=null;this.cancelVoice=null;}resolve(result);};
        this.cancelVoice=()=>finish(false);clip.onended=()=>finish(true);clip.onerror=()=>finish(false);
        // Autoplay denial must not leave a level-start operation waiting forever.
        this.playVoice=()=>{try{clip.play()?.catch(error=>{if(error?.name==='AbortError'&&this.paused)return;if(error?.name==='NotAllowedError'&&retryOnGesture)return;finish(false);});}catch{finish(false);}};
        if(!this.paused)this.playVoice();
      });
      if(!completed)return false;
    }
    return true;
  }
  selectLevel(index){return this.say(LEVEL_MENU_VOICES[index]||[]);}
  pause(){this.paused=true;this.music.pause();this.voice?.pause();}
  resume(){this.paused=false;if(this.musicWanted)this.music.resume();if(this.voice)this.playVoice();}
}

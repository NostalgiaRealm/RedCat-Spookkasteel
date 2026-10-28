import AUDIO_SETTINGS from './audio-settings.js';
import {ambienceRange, nearbyAmbienceGain, isFairyIdle, FAIRY_IDLE_DISTANCE_SCALE} from './ambience-ranges.js';
import {BspAudioEnvironment, nativeStereoGains, obstructedSource, createStereoRoute} from './spatial-audio.js';
import {advanceMusicFade} from './music-fade.js';

export const soundName = value => String(value || '').replace(/^.*[\\/]/, '').toLowerCase();
const nonnegative = (value, fallback = 1) => Number.isFinite(Number(value)) ? Math.max(0, Number(value)) : fallback;
const clamp = value => Math.min(1, Math.max(0, value));
const finite = (value, fallback=0, maximum=86400) => typeof value==='number'&&Number.isFinite(value)?Math.max(0,Math.min(maximum,value)):fallback;
const point = value => Array.isArray(value)&&value.length===3&&value.every(Number.isFinite)?[...value]:null;
const label = value => typeof value==='string'&&value.length<=512?value:null;
const savedVoice = event => event&&typeof event.voice==='string'&&event.voice.length<=512?{voice:soundName(event.voice),text:typeof event.text==='string'?event.text.slice(0,8192):'',id:label(event.id),until:finite(event.until)}:null;
// CFairy::StartSound (0x47d570) starts IdleFee1 at .4; the native voice
// updater retains this base gain. Keep it separate from saved/script volume
// so older saves also receive the correction, without compounding on reload.
const FAIRY_IDLE_BASE_GAIN = .4;
// The original's sound channel: SoundVolume 80 of 100 in the default
// Settings/Player1.ini, matching the port's full effects channel.
const NATIVE_SOUND_CHANNEL = .8;

// Adam's LinToLog followed by Genesis3D's DirectSound centibel conversion.
// An authored volume of .25 is -20 dB (amplitude .1), not amplitude .25.
export const nativeGainToAmplitude = gain => gain <= 0 ? 0 : 10 ** (.5 * Math.log2(clamp(gain)));

// HTML media can mute very slow playback. Native portal audio instead needs
// actual sample-rate conversion down to .075x, including the matching pitch.
// Music also uses the complete decoded buffer: repeating a WAV media element
// seeks/rebuffers at its end and can estimate a slightly shorter duration.
// Pickup media can report EOF with final samples still queued for output;
// pausing it during release clips that tail. Buffer completion follows the
// audio rendering clock and retains every sample of the original recording.
class BufferedAudioVoice {
  constructor(context, loadBuffer) {
    this.context=context;this.loadBuffer=loadBuffer;this.output=context.createGain();this.output.connect(context.destination);
    this.buffer=null;this.source=null;this.offset=0;this.startedAt=0;this.wanted=false;this.disposed=false;
    this.playbackRate=1;this.loop=false;this._volume=1;this.nativeBuffered=true;
  }
  get paused(){return !this.wanted;}
  get readyState(){return this.buffer?4:0;}
  get duration(){return this.buffer?.duration??NaN;}
  get volume(){return this._volume;}
  set volume(value){this._volume=value;this.output.gain.value=value;}
  get currentTime(){
    const time=this.offset+(this.source?(this.context.currentTime-this.startedAt)*this.playbackRate:0);
    return this.buffer?(this.loop?time%this.buffer.duration:Math.min(time,this.buffer.duration)):time;
  }
  set currentTime(value){const playing=this.wanted;this.stopSource();this.offset=Math.max(0,value);if(playing)this.play().catch(error=>this.onerror?.(error));}
  async play(){
    if(this.disposed)return;
    this.wanted=true;
    this.buffer??=await this.loadBuffer();
    if(this.disposed||!this.wanted||this.source)return;
    // A save can land after the last sample but before onended is dispatched.
    // Complete that one-shot without allocating/restarting an empty source.
    if(!this.loop&&this.offset>=this.buffer.duration){this.offset=this.buffer.duration;this.wanted=false;this.onended?.();return;}
    if(this.context.state!=='running')await this.context.resume();
    if(this.disposed||!this.wanted||this.source)return;
    const source=this.context.createBufferSource();source.buffer=this.buffer;source.playbackRate.value=this.playbackRate;source.loop=this.loop;
    // Duration -> sample-index rounding can put the boundary just past the
    // buffer and repeat a stale sample (battle music at 48 kHz, tower at
    // 22.05/44.1 kHz). Round infinitesimally inward, retaining the last frame.
    source.loopStart=0;source.loopEnd=this.buffer.duration*(1-Number.EPSILON);
    source.connect(this.output);this.source=source;this.startedAt=this.context.currentTime;
    source.onended=()=>{
      if(this.source!==source)return;
      this.source=null;source.disconnect();this.offset=this.buffer.duration;this.wanted=false;this.onended?.();
    };
    // Only loops wrap: a restored one-shot at its exact end must finish,
    // rather than replaying its entire recording from zero.
    source.start(0,this.loop?this.offset%this.buffer.duration:Math.min(this.offset,this.buffer.duration));
  }
  stopSource(){
    if(!this.source)return;
    this.offset=this.currentTime;const source=this.source;this.source=null;
    source.onended=null;source.stop();source.disconnect();
  }
  pause(){this.wanted=false;this.stopSource();}
  dispose(){this.disposed=true;this.pause();this.output.disconnect();}
}

/** Portable sound mixing; all gains are kept separately so changing the master
 * volume never discards an authored gain or a Davi-Script MultiplyVolume. */
export class GameAudio {
  constructor({settings = AUDIO_SETTINGS, master = .6, channels = {effects:1, music:1, voices:1}, createAudio = url => new Audio(url), random = Math.random,
    createContext = () => {const Context=globalThis.AudioContext||globalThis.webkitAudioContext;return Context?new Context():null;},
    fetchAudio = url => fetch(url)} = {}) {
    this.settings = settings; this.master = clamp(master); this.createAudio = createAudio; this.random = random;
    this.channels = channels;
    this.sounds = new Set(); this.keyed = new Map(); this.listener = [0, 0, 0]; this.playerListener = null; this.paused = false;
    this.dialogueQueue = []; this.dialogueActive = null;
    this.spatial = settings.spatial; this.levelId = null;
    this.createContext=createContext;this.context=null;this.contextAttempted=false;this.world=null;this.environment=null;
    this.listenerQuaternion=[0,0,0,1];this.clock=0;this.worldEpoch=0;
    this.fetchAudio=fetchAudio;this.bufferCache=new Map();
    this.musicPositions=new Map();
    this.musicBufferCache=new Map();
  }
  play({sound, key = null, sourceId = null, group = null, channel = 'effects', volume = 1, position = null,
    spatial = false, loop = false, minReplayDelay = 0, maxReplayDelay = 0, playbackRate = 1, nativeFrequency = false, startTime = 0, onEnded = null} = {}) {
    if (key) this.stop(key);
    const name = soundName(sound); if (!name) return null;
    const url=`assets/${channel === 'voices' ? 'voices' : 'audio'}/${encodeURIComponent(name)}`;
    // DirectSound frequency zero selects the original sample frequency.
    const rate=nativeFrequency?(nonnegative(playbackRate)||1):nonnegative(playbackRate);
    // DirectSound repeats the fairy's PCM buffer continuously. HTML WAV loops
    // rebuffer at each seam (12–15 ms gaps measured for IdleFee1), making the
    // short sparkle sound repeat in distinct bursts instead of flowing.
    const buffered=(channel==='music'||group==='pickup'||isFairyIdle({channel,name,loop})||nativeFrequency&&rate<.25)&&this.ensureContext();
    const element=buffered?new BufferedAudioVoice(this.context,()=>this.loadAudioBuffer(url,channel==='music')):this.createAudio(url);
    element.playbackRate = buffered&&nativeFrequency?rate:Math.max(.25, Math.min(4, rate));
    element.preservesPitch = false;
    const minDelay = nonnegative(minReplayDelay, 0), maxDelay = Math.max(minDelay, nonnegative(maxReplayDelay, 0));
    const record = {key, sourceId, group, channel, name, element, volume: nonnegative(volume),
      authoredGain: this.settings.gains[name] ?? 1, position, spatial, loop, nativeFrequency, minDelay, maxDelay, wait: null, pendingStartTime:null};
    element.preload = 'auto';
    element.loop = loop && maxDelay === 0;
    // Set the media's pending start position before play(), so resuming a
    // background track never briefly plays its introduction a second time.
    if(nonnegative(startTime,0)>0)this.seek(record,nonnegative(startTime,0));
    if((spatial||ambienceRange(this.levelId,record))&&position)this.attachStereo(record);
    this.sounds.add(record); if (key) this.keyed.set(key, record);
    this.applyGain(record);
    element.onended = () => {
      if (!this.sounds.has(record)) return;
      if (loop) record.wait = minDelay + this.random() * (maxDelay - minDelay);
      else { this.release(record); onEnded?.('ended'); }
    };
    element.onerror = () => { if (!this.sounds.has(record)) return; this.release(record); onEnded?.('error'); };
    if (!this.paused) this.start(record);
    return record;
  }
  // Authored motion timestamps can arrive before a WAV has loaded or finished.
  // Advance dialogue only on media completion, never a subtitle timeout.
  queueDialogue(event, {onStart = null, onEnd = null, startTime = 0} = {}) {
    if (!event.voice) return;
    this.dialogueQueue.push({event:{...event}, onStart, onEnd, startTime});
    this.startNextDialogue();
  }
  startNextDialogue() {
    if (this.dialogueActive || !this.dialogueQueue.length) return;
    const item = this.dialogueQueue.shift(); this.dialogueActive = item;
    item.onStart?.(item.event);
    item.record = this.play({key:'voice', channel:'voices', sound:item.event.voice, startTime:item.startTime, onEnded:reason=>{
      if (this.dialogueActive !== item) return;
      this.dialogueActive = null; item.onEnd?.(item.event, reason); this.startNextDialogue();
    }});
  }
  stopDialogue() {
    this.dialogueQueue.length = 0; this.dialogueActive = null; this.stop('voice');
  }
  get dialoguePending() { return !!this.dialogueActive || this.dialogueQueue.length > 0; }
  get pickupsPending() { for(const record of this.sounds)if(record.group==='pickup')return true;return false; }
  playMusic({sound,id=null,volume=1,stop=false,crossFade=false,fadeInTimeSeconds=0,fadeOutTimeSeconds=0}={}) {
    const current=this.keyed.get('music'),name=soundName(sound);
    if(stop||!name){for(const record of this.sounds)if(record.channel==='music')this.release(record);this.musicPositions.clear();return null;}
    if(current?.name===name){current.volume=nonnegative(volume);current.sourceId=id;this.applyGain(current);return current;}
    const fadeIn=Math.max(0,Number(fadeInTimeSeconds)||0),fadeOut=Math.max(0,Number(fadeOutTimeSeconds)||0);
    // A short encounter can end while the ambient track is still fading out.
    // Reverse that same voice instead of starting a second copy from zero.
    const returning=[...this.sounds].find(record=>record.channel==='music'&&record.name===name);
    if(current&&crossFade&&fadeOut>0){this.keyed.delete('music');current.key=null;current.fade={from:current.fadeGain??1,to:0,duration:fadeOut,elapsed:0,release:true};}
    else this.stop('music');
    const record=returning||this.play({key:'music',sourceId:id,channel:'music',sound,volume,loop:true,startTime:this.musicPositions.get(name)||0});
    if(record){
      record.key='music';record.sourceId=id;record.volume=nonnegative(volume);this.keyed.set('music',record);
      record.fadeGain=returning?(record.fadeGain??1):(fadeIn>0?0:1);
      record.fade=fadeIn>0?{from:record.fadeGain,to:1,duration:fadeIn,elapsed:0}:null;
      if(!record.fade)record.fadeGain=1;
      this.applyGain(record);
    }
    return record;
  }
  start(record) {
    if (this.paused || !this.sounds.has(record)) return;
    if(record.pendingStartTime!==null&&!this.seek(record,record.pendingStartTime))return;
    // HTMLMediaElement.play() restarts media whose position is already at EOF.
    // Deliver the pending completion instead, preserving a just-finished tail.
    if(!record.element.loop&&Number.isFinite(record.element.duration)&&record.element.duration>0&&record.element.currentTime>=record.element.duration){record.element.onended?.();return;}
    if(record.stereo&&this.context?.state!=='running')this.context.resume()?.catch(()=>{});
    const attempt = record.element.play();
    attempt?.catch(error => {
      // A gesture can resume a browser-blocked sound; pause can abort a pending play.
      if (!['NotAllowedError', 'AbortError'].includes(error?.name) && this.sounds.has(record)) record.element.onerror?.();
    });
  }
  seek(record, seconds) {
    const element=record.element,duration=Number(element.duration);
    const time=duration>0&&Number.isFinite(duration)?(element.loop?seconds%duration:Math.min(seconds,duration)):seconds;
    try {
      element.currentTime=time;
      // HAVE_NOTHING may accept a default start time but still report zero.
      // Retain our requested clock until metadata confirms a real seek.
      if(element.nativeBuffered||element.readyState!==0){record.pendingStartTime=null;element.onloadedmetadata=null;return true;}
    } catch { /* Embedded media may reject a seek until metadata arrives. */ }
    // Do not briefly play the start of the WAV while waiting.
    record.pendingStartTime=seconds;
    element.onloadedmetadata=()=>{if(this.sounds.has(record)&&this.seek(record,seconds)&&record.wait===null)this.start(record);};
    return false;
  }
  release(record) {
    if(record.channel==='music') {
      const time=nonnegative(record.pendingStartTime??record.element.currentTime,0),duration=Number(record.element.duration);
      this.musicPositions.set(record.name,duration>0&&Number.isFinite(duration)?time%duration:time);
    }
    record.element.onended = null; record.element.onerror = null; record.element.onloadedmetadata=null;record.element.pause();
    record.stereo?.disconnect();record.stereo=null;
    if(typeof record.element.dispose==='function')record.element.dispose();
    else {
      // A paused HTML media element can retain its browser player/decoder until
      // collection. Release that resource now, including pending media loads.
      record.element.removeAttribute?.('src');record.element.load?.();
    }
    this.sounds.delete(record);
    if (record.key && this.keyed.get(record.key) === record) this.keyed.delete(record.key);
  }
  stop(key) { const record = this.keyed.get(key); if (record) this.release(record); }
  reset() { this.stopDialogue(); for (const record of this.sounds) this.release(record); this.musicPositions.clear();this.musicBufferCache.clear();this.bufferCache.clear();this.playerListener=null; this.world=null;this.environment=null;this.worldEpoch++;this.paused = false; }
  pause() { this.paused = true; for (const {element} of this.sounds) element.pause(); }
  resume() {
    this.paused = false;
    for (const record of this.sounds) if (record.wait === null) this.start(record);
  }
  setMaster(value) { this.master = clamp(value); for (const record of this.sounds) this.applyGain(record); }
  setLevel(id) { this.levelId = id; this.spatial = this.settings.levels?.[id] ?? this.settings.spatial; }
  async setSpatialWorld(world) {
    const epoch=++this.worldEpoch;this.world=world;this.environment=null;
    if(!world)return;
    const [metadata,pvs]=await Promise.all([
      fetch(`data/visibility/${world.id}.json`).then(r=>{if(!r.ok)throw new Error('Ontbrekende geluidszichtbaarheid');return r.json();}),
      fetch(`data/visibility/${world.id}.bin`).then(r=>{if(!r.ok)throw new Error('Ontbrekende geluidszichtbaarheid');return r.arrayBuffer();})
    ]);
    if(this.worldEpoch===epoch){this.environment=new BspAudioEnvironment(world,metadata,new Uint8Array(pvs));this.environment.refreshPortals();}
  }
  ensureContext() {
    if(!this.contextAttempted){this.contextAttempted=true;try{this.context=this.createContext();}catch{this.context=null;}}
    return this.context;
  }
  loadAudioBuffer(url,music=false) {
    const cache=music?this.musicBufferCache:this.bufferCache,limit=music?2:8;
    if(!cache.has(url)) {
      // Retain at most two music buffers (ambient/combat), separately from the
      // small shared portal/pickup sounds. Changing levels clears both caches.
      if(cache.size>=limit)cache.delete(cache.keys().next().value);
      const pending=this.fetchAudio(url).then(response=>{if(!response.ok)throw new Error(`Cannot load ${url}`);return response.arrayBuffer();})
        .then(bytes=>this.context.decodeAudioData(bytes));
      cache.set(url,pending);
      pending.catch(()=>{if(cache.get(url)===pending)cache.delete(url);});
    }
    return cache.get(url);
  }
  attachStereo(record) {
    this.ensureContext();
    // Embedded browsers without Web Audio keep the existing media mixer.
    // Dialogue/UI keep their media path; nonspatial music connects directly.
    if(this.context) {
      const context=this.context;
      if(record.element.nativeBuffered) {
        record.element.output.disconnect();
        // Reuse the normal mono upmix and native channel attenuation, with
        // the decoded voice's gain as input instead of a MediaElementSource.
        record.stereo=createStereoRoute({destination:context.destination,
          createMediaElementSource:()=>record.element.output,createGain:()=>context.createGain(),
          createChannelSplitter:n=>context.createChannelSplitter(n),createChannelMerger:n=>context.createChannelMerger(n)},record.element);
      } else record.stereo=createStereoRoute(context,record.element);
    }
  }
  setPlayerListener(position) { this.playerListener=Array.isArray(position)?[...position]:null; }
  setScriptVolume(sourceId, value) {
    for (const record of this.sounds) if (record.sourceId === sourceId) {
      record.volume = nonnegative(value); this.applyGain(record);
    }
  }
  applyGain(record) {
    record.currentPosition = typeof record.position==='function' ? record.position() : record.position;
    const range = ambienceRange(this.levelId, record);
    const fairy=isFairyIdle(record),listener=fairy&&this.playerListener?this.playerListener:this.listener;
    const spatial=fairy?{...this.spatial,minDistanceMeters:(this.spatial?.minDistanceMeters??5)*FAIRY_IDLE_DISTANCE_SCALE}:this.spatial;
    const positioned=(record.spatial||range)&&record.currentPosition;
    let position=record.currentPosition;
    record.pan=0;record.stereoGains={left:1,right:1};
    if(positioned) {
      const changed=!record.lastListener||Math.hypot(...listener.map((v,i)=>v-record.lastListener[i]))>32||Math.hypot(...position.map((v,i)=>v-record.lastSource[i]))>32;
      if(changed||this.clock>=(record.nextObstructionCheck??0)) {
        // Fleurifee deliberately follows the player's hearing position with a
        // threefold range, so an overview camera/PVS cannot silence her idle.
        record.obstruction=this.environment?.query(listener,position,{visibility:!fairy})||{audible:true,blocked:false,distanceScale:1};
        record.nextObstructionCheck=this.clock+.1;record.lastListener=[...listener];record.lastSource=[...position];
      }
      position=obstructedSource(listener,position,record.obstruction.distanceScale);
      const stereo=nativeStereoGains(this.listener,record.currentPosition,this.listenerQuaternion);
      record.pan=stereo.pan;record.stereoGains={left:stereo.left,right:stereo.right};record.stereo?.apply(stereo);
    }
    record.distanceGain = positioned ? (record.obstruction.audible?
      (range ? nearbyAmbienceGain(listener, position, range) : distanceGain(listener, position, spatial)):0) : 1;
    let gain = (this.channels[record.channel] ?? 1) * clamp(record.authoredGain) * record.volume * (fairy?FAIRY_IDLE_BASE_GAIN:1) * record.distanceGain*(record.fadeGain??1);
    // An instance gain above 1 (the gargoyle alert's 1.5, 0x553610) is stored
    // unclamped, but DirectSound refuses a volume above 0 dB: the channel keeps
    // its last accepted level, starting from the gain-1 start volume. The test
    // uses the original's product, whose sound channel is SoundVolume 80 when
    // the port's effects channel is full, so an accepted boost can reach 1.25
    // here: exactly full gain in the original, 1.25x an unboosted cue.
    let amplitude;
    if(record.volume>1) {
      if(gain*NATIVE_SOUND_CHANNEL<=1)record.acceptedGain=gain;
      else gain=record.acceptedGain??=gain/record.volume;
      amplitude=gain>0?10**(.5*Math.log2(gain)):0;
    } else amplitude=nativeGainToAmplitude(gain);
    const volume = clamp(this.master * amplitude);
    // Both media volume and buffered gains reach the browser's audio backend.
    // Retain full-rate calculation/fades, but do not resend an identical gain.
    if(record.element.volume!==volume)record.element.volume=volume;
  }
  update(dt, listener = this.listener) {
    this.listener = [...listener];
    this.clock+=Math.max(0,dt);this.environment?.refreshPortals();
    if(this.world?.camera)this.listenerQuaternion=this.world.camera.quaternion.toArray();
    for (const record of this.sounds) {
      if(!this.paused&&record.fade){const fade=record.fade,result=advanceMusicFade(fade,dt);record.fadeGain=result.gain;if(result.done){record.fade=null;if(fade.release){this.release(record);continue;}}}
      this.applyGain(record);
      if (!this.paused && record.wait !== null) {
        record.wait -= Math.max(0, dt);
        if (record.wait <= 0) { record.wait = null; this.seek(record,0); this.start(record); }
      }
    }
  }
  // Diagnostic snapshot() below intentionally stays independent of the save
  // schema. Save actual source clocks, not wall time: loading/pause duration
  // must not advance a WAV or a delayed replay.
  saveState() {
    const active=this.dialogueActive,serialize=record=>({
      key:record.key,sourceId:record.sourceId,group:record.group,channel:record.channel,sound:record.name,
      volume:record.volume,position:point(record.currentPosition),followSource:typeof record.position==='function',
      spatial:record.spatial,loop:record.loop,playbackRate:record.element.playbackRate,nativeFrequency:record.nativeFrequency,
      minReplayDelay:record.minDelay,maxReplayDelay:record.maxDelay,wait:record.wait,
      currentTime:finite(record.pendingStartTime??record.element.currentTime),fadeGain:record.fadeGain??1,
      fade:record.fade?{...record.fade}:null
    });
    return {version:1,level:this.levelId,
      sounds:[...this.sounds].filter(record=>record!==active?.record).slice(0,512).map(serialize),
      musicPositions:[...this.musicPositions].slice(-32),
      dialogue:[...(active?[{event:savedVoice(active.event),currentTime:finite(active.record?.pendingStartTime??active.record?.element.currentTime)}]:[]),
        ...this.dialogueQueue.map(item=>({event:savedVoice(item.event),currentTime:finite(item.startTime)}))].filter(item=>item.event).slice(0,128)};
  }
  restoreState(save, {positionForSource=null,onDialogueStart=null,onDialogueEnd=null}={}) {
    if(save?.version!==1||save.level!==this.levelId||!Array.isArray(save.sounds)||!Array.isArray(save.dialogue))return false;
    const paused=this.paused;
    // Script/effect restoration has recreated authoritative source bindings.
    // Keep their moving positions, then replace playback only, without replaying
    // any scripts, pickup events, random loop delays or dialogue triggers.
    const positions=new Map([...this.sounds].filter(record=>record.key).map(record=>[record.key,record.position]));
    this.pause();this.stopDialogue();for(const record of [...this.sounds])this.release(record);
    this.musicPositions.clear();
    for(const item of Array.isArray(save.musicPositions)?save.musicPositions.slice(-32):[])if(Array.isArray(item)&&typeof item[0]==='string'&&item[0].length<=512)this.musicPositions.set(soundName(item[0]),finite(item[1]));
    const keys=new Set();
    for(const entry of save.sounds.slice(0,512)) {
      if(!entry||typeof entry.sound!=='string'||!entry.sound||entry.sound.length>512||!['music','effects','voices'].includes(entry.channel))continue;
      const key=label(entry.key);if(key==='voice'||key&&keys.has(key))continue;if(key)keys.add(key);
      const sourceId=label(entry.sourceId),existing=key?positions.get(key):null;
      const position=typeof existing==='function'?existing:entry.followSource&&sourceId?positionForSource?.(sourceId)||point(entry.position):point(entry.position);
      const record=this.play({sound:entry.sound,key,sourceId,group:label(entry.group),channel:entry.channel,
        volume:finite(entry.volume,1,100),position,spatial:entry.spatial===true,loop:entry.loop===true,
        playbackRate:finite(entry.playbackRate,1,100),nativeFrequency:entry.nativeFrequency===true,
        minReplayDelay:finite(entry.minReplayDelay),maxReplayDelay:finite(entry.maxReplayDelay),startTime:finite(entry.currentTime)});
      record.wait=entry.wait===null||!record.loop?null:finite(entry.wait);
      record.fadeGain=finite(entry.fadeGain,1,1);
      if(entry.fade&&Number.isFinite(entry.fade.duration)&&Number.isFinite(entry.fade.elapsed))record.fade={
        from:finite(entry.fade.from,0,1),to:finite(entry.fade.to,1,1),duration:finite(entry.fade.duration),
        elapsed:finite(entry.fade.elapsed),...(entry.fade.release===true?{release:true}:{})};
      this.applyGain(record);
    }
    onDialogueEnd?.(null,'restored');
    for(const item of save.dialogue.slice(0,128)) {
      const event=savedVoice(item?.event);if(event)this.queueDialogue(event,{startTime:finite(item.currentTime),onStart:onDialogueStart,onEnd:onDialogueEnd});
    }
    if(!paused)this.resume();
    return true;
  }
  snapshot() {
    return [...this.sounds].map(r => ({key:r.key, sourceId:r.sourceId, channel:r.channel, sound:r.name,
      authoredGain:r.authoredGain, scriptVolume:r.volume, distanceGain:r.distanceGain, volume:r.element.volume,
      spatial:r.spatial, position:r.currentPosition, loop:r.loop, paused:r.element.paused, waiting:r.wait,
      pan:r.pan,stereoGains:r.stereoGains,blocked:r.obstruction?.blocked??false,audible:r.obstruction?.audible??true,stereoConnected:!!r.stereo,
      readyState:r.element.readyState, currentTime:r.element.currentTime}));
  }
}

// World-unit conversion and native distance model are documented in docs/audio.md.
export function distanceGain(listener, source, {minDistanceMeters = 5, maxDistanceFactor = 25} = {}) {
  const distance = Math.hypot(...source.map((v, i) => v - listener[i]));
  const minimum = minDistanceMeters * 32;
  const maximum = minimum * maxDistanceFactor;
  if (distance <= minimum) return 1;
  // geSound3D produces a logarithmic control value; Adam's LogToLin converts
  // that value to amplitude before the per-WAV and script gains are applied.
  const fraction = Math.log(Math.min(maximum, distance) / minimum) / Math.log(maxDistanceFactor);
  return 2 ** (-10 * fraction);
}

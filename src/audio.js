import AUDIO_SETTINGS from './audio-settings.js';
import {ambienceRange, nearbyAmbienceGain, isFairyIdle, FAIRY_IDLE_DISTANCE_SCALE} from './ambience-ranges.js';
import {BspAudioEnvironment, nativeStereoGains, obstructedSource, createStereoRoute} from './spatial-audio.js';

export const soundName = value => String(value || '').replace(/^.*[\\/]/, '').toLowerCase();
const nonnegative = (value, fallback = 1) => Number.isFinite(Number(value)) ? Math.max(0, Number(value)) : fallback;
const clamp = value => Math.min(1, Math.max(0, value));

// Adam's LinToLog followed by Genesis3D's DirectSound centibel conversion.
// An authored volume of .25 is -20 dB (amplitude .1), not amplitude .25.
export const nativeGainToAmplitude = gain => gain <= 0 ? 0 : 10 ** (.5 * Math.log2(clamp(gain)));

// HTML media can mute very slow playback. Native portal audio instead needs
// actual sample-rate conversion down to .075x, including the matching pitch.
// Music also uses the complete decoded buffer: repeating a WAV media element
// seeks/rebuffers at its end and can estimate a slightly shorter duration.
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
    source.start(0,this.offset%this.buffer.duration);
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
    const buffered=(channel==='music'||nativeFrequency&&rate<.25)&&this.ensureContext();
    const element=buffered?new BufferedAudioVoice(this.context,()=>this.loadAudioBuffer(url,channel==='music')):this.createAudio(url);
    element.playbackRate = buffered&&nativeFrequency?rate:Math.max(.25, Math.min(4, rate));
    element.preservesPitch = false;
    const minDelay = nonnegative(minReplayDelay, 0), maxDelay = Math.max(minDelay, nonnegative(maxReplayDelay, 0));
    const record = {key, sourceId, group, channel, name, element, volume: nonnegative(volume),
      authoredGain: this.settings.gains[name] ?? 1, position, spatial, loop, minDelay, maxDelay, wait: null};
    element.preload = 'auto';
    element.loop = loop && maxDelay === 0;
    // Set the media's pending start position before play(), so resuming a
    // background track never briefly plays its introduction a second time.
    if(nonnegative(startTime,0)>0)element.currentTime=nonnegative(startTime,0);
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
  queueDialogue(event, {onStart = null, onEnd = null} = {}) {
    if (!event.voice) return;
    this.dialogueQueue.push({event:{...event}, onStart, onEnd});
    this.startNextDialogue();
  }
  startNextDialogue() {
    if (this.dialogueActive || !this.dialogueQueue.length) return;
    const item = this.dialogueQueue.shift(); this.dialogueActive = item;
    item.record = this.play({key:'voice', channel:'voices', sound:item.event.voice, onEnded:reason=>{
      if (this.dialogueActive !== item) return;
      this.dialogueActive = null; item.onEnd?.(item.event, reason); this.startNextDialogue();
    }});
    item.onStart?.(item.event);
  }
  stopDialogue() {
    this.dialogueQueue.length = 0; this.dialogueActive = null; this.stop('voice');
  }
  get dialoguePending() { return !!this.dialogueActive || this.dialogueQueue.length > 0; }
  get pickupsPending() { return [...this.sounds].some(record=>record.group==='pickup'); }
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
    if(record.stereo&&this.context?.state!=='running')this.context.resume()?.catch(()=>{});
    const attempt = record.element.play();
    attempt?.catch(error => {
      // A gesture can resume a browser-blocked sound; pause can abort a pending play.
      if (!['NotAllowedError', 'AbortError'].includes(error?.name) && this.sounds.has(record)) record.element.onerror?.();
    });
  }
  release(record) {
    if(record.channel==='music') {
      const time=nonnegative(record.element.currentTime,0),duration=Number(record.element.duration);
      this.musicPositions.set(record.name,duration>0&&Number.isFinite(duration)?time%duration:time);
    }
    record.element.onended = null; record.element.onerror = null; record.element.pause();
    record.stereo?.disconnect();record.stereo=null;
    record.element.dispose?.();
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
      // small shared portal sounds. Changing levels clears both caches.
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
    record.element.volume = clamp(this.master * nativeGainToAmplitude((this.channels[record.channel] ?? 1) * clamp(record.authoredGain) * record.volume * record.distanceGain)*(record.fadeGain??1));
  }
  update(dt, listener = this.listener) {
    this.listener = [...listener];
    this.clock+=Math.max(0,dt);this.environment?.refreshPortals();
    if(this.world?.camera)this.listenerQuaternion=this.world.camera.quaternion.toArray();
    for (const record of this.sounds) {
      if(!this.paused&&record.fade){const fade=record.fade;fade.elapsed+=Math.max(0,dt);const t=Math.min(1,fade.elapsed/fade.duration);record.fadeGain=fade.from+(fade.to-fade.from)*t;if(t>=1){record.fade=null;if(fade.release){this.release(record);continue;}}}
      this.applyGain(record);
      if (!this.paused && record.wait !== null) {
        record.wait -= Math.max(0, dt);
        if (record.wait <= 0) { record.wait = null; record.element.currentTime = 0; this.start(record); }
      }
    }
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

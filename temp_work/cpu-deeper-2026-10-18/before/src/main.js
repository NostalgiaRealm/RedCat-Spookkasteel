import * as THREE from 'three';
import { CastleWorld } from './world.js';
import { Gameplay } from './gameplay.js';
import { ScriptHost } from './script-host.js';
import { GameAudio } from './audio.js';
import { MenuAudio } from './menu-audio.js';
import { SliderAudio, SLIDER_VOICES } from './slider-audio.js';
import { QuitMenu } from './quit-menu.js';
import { PlayerProfiles } from './player-profiles.js';
import { PlayerMenu } from './player-menu.js';
import { GameplayAudio } from './gameplay-audio.js';
import { grantCheatSupplies, setNoClip } from './cheats.js';
import { nativePlayerYaw } from './actor-placement.js';
import { OriginalHud } from './hud.js';
import { OriginalDebriefing, awardLevelSummary } from './debriefing.js';
import { canTogglePlayerCamera } from './camera-control.js';
import { CutsceneSkipHold } from './cutscene-skip.js';
import { AutosaveClock } from './autosave.js';
import { RecoverySaves, IndexedDBRecoveryStorage } from './recovery-saves.js';
import { DIFFICULTIES, normalizeDifficulty } from './difficulty.js';
import { validAdventureSave, readCampaignProgress, completeCampaignLevel, canStartCampaignLevel, chapterArtwork, campaignSkills, earnCampaignSkill, isCampaignLevelReplay, recordPlayedCampaignLevel } from './campaign-progress.js';
import { TouchControls, normalizeTouchPreference, isMobileWeb, touchControlsEnabled } from './touch-controls.js';
import { IntroPlayback } from './intro-playback.js';
import { TouchIntroHint, OpeningHint, TOUCH_INTRO_HINT_KEY, DESKTOP_INTRO_HINT_KEY, CONTROLLER_INTRO_HINT_TEXT } from './touch-intro-hint.js';
import { FullscreenPreference, normalizeFullscreenPreference } from './fullscreen-preference.js';
import { GamepadInput } from './gamepad-input.js';
import { GamepadMenu } from './gamepad-menu.js';
import { RenderQuality, normalizeRenderScale, scaledRenderSize } from './render-quality.js';
import { AndroidHost } from './android-host.js';
import { OriginalLoadingScreen } from './loading-screen.js';
const androidHost=new AndroidHost();
const $=id=>document.getElementById(id);
const LEVELS=[{id:'lvl00a',name:'Het Bos',subtitle:'Waar het avontuur begint'},{id:'lvl01a',name:'Het Kasteel',subtitle:'Achter de kasteeldeur'},{id:'lvl02a',name:'Het Kerkhof',subtitle:'Tussen de oude graven'},{id:'lvl03a',name:'De Grotten',subtitle:'Diep onder het kasteel'},{id:'lvl04a',name:'De Toren',subtitle:'Het geheim van de heks'}];
const DEFAULTS={resolution:'native',renderScale:100,showFps:false,fullscreen:true,fov:65,sensitivity:1,volume:0.6,autoIntro:true,camera:'third',noClip:false,difficulty:'Normal',touchControls:'auto'};
const SETTINGS_KEY='redcat.settings.v1',SAVE_KEY='redcat.save.v1',PROGRESS_KEY='redcat.progress.v1';
const PLAYER_OPTIONS_KEY='redcat.player-options.v1';
const PLAYER_KEYS=new Set([SAVE_KEY,PROGRESS_KEY,PLAYER_OPTIONS_KEY,TOUCH_INTRO_HINT_KEY,DESKTOP_INTRO_HINT_KEY]);
let profiles=null,profileInitError=null,profileSwitching=false,worldProfileId=null;
try{profiles=new PlayerProfiles({storage:localStorage});}catch(error){profileInitError=error;}
function storageKey(key){return PLAYER_KEYS.has(key)&&profiles?profiles.key(key):key;}
function readStored(key){try{return JSON.parse(localStorage.getItem(storageKey(key))||'null');}catch{return null;}}
const stored=readStored(SETTINGS_KEY)||{};
let campaign=readCampaignProgress(readStored(PROGRESS_KEY),readStored(SAVE_KEY));
const settings={...DEFAULTS,...stored};
// Existing single-player gameplay options belong to the migrated player only.
const playerOptions=readStored(PLAYER_OPTIONS_KEY)||(profiles?.activeId==='legacy'?{difficulty:stored.difficulty,noClip:stored.noClip}:{});
settings.difficulty=playerOptions.difficulty??DEFAULTS.difficulty;settings.noClip=playerOptions.noClip??false;
settings.renderScale=normalizeRenderScale(settings.renderScale);
settings.showFps=settings.showFps===true;
const renderQuality=new RenderQuality();
settings.fullscreen=normalizeFullscreenPreference(stored.fullscreen);
if(!Number.isFinite(settings.fov)||settings.fov<45||settings.fov>90)settings.fov=65;
if(!Number.isFinite(settings.sensitivity)||settings.sensitivity<0.2||settings.sensitivity>2)settings.sensitivity=1;
if(!Number.isFinite(settings.volume)||settings.volume<0||settings.volume>1)settings.volume=.6;
if(!['first','third'].includes(settings.camera))settings.camera='third';
settings.noClip=settings.noClip===true;
settings.difficulty=normalizeDifficulty(settings.difficulty);
settings.touchControls=normalizeTouchPreference(settings.touchControls);
const touchEnvironment={navigator,matchMedia:window.matchMedia.bind(window),desktop:!!window.desktop};
const mobileWeb=isMobileWeb(touchEnvironment);
$('difficulty').replaceChildren(...DIFFICULTIES.map(({value,label})=>new Option(label,value)));
if(![...$('resolution').options].some(o=>o.value===settings.resolution))settings.resolution='native';
let selected=0,world=null,gameplay=null,mode='menu',pausedFromSettings=false,toastTimer,lastFrame=performance.now(),chapterTransition=null;
let levelReplaySelected=false;
let streamingWait=null;
const autosave=new AutosaveClock();
let recoveryError=false;
let pendingRecoveryCapture=Promise.resolve(true);
function createRecovery(playerId=profiles?.activeId){
  return new RecoverySaves({storage:new IndexedDBRecoveryStorage({name:profiles?profiles.recoveryDatabase(playerId):'redcat-recovery-saves'}),onError:()=>{
    if(playerId!==profiles?.activeId)return;
    recoveryError=true;toast('Herstelpunten konden niet worden bewaard. Controleer de beschikbare lokale opslag.');if($('recovery-saves').open)renderRecoveryChoices();
  }});
}
let recovery=createRecovery();
let renderer=null,worldRenderDirty=true,lastRenderedWorld=null;const keys=new Set();let mouseAttack=false;const audio=new GameAudio({master:settings.volume});const menuAudio=new MenuAudio({volume:settings.volume});const sliderAudio=new SliderAudio(menuAudio);
let touchControls=null,touchEnabled=false;
const gamepad=new GamepadInput(),gamepadMenu=new GamepadMenu();
let controllerActive=false,controllerFrame=null;
const touchIntroHint=new TouchIntroHint({seen:readStored(TOUCH_INTRO_HINT_KEY)===true,
  remember:()=>store(TOUCH_INTRO_HINT_KEY,true),show:(text,duration)=>toast(text,duration)});
const desktopIntroHint=new OpeningHint({seen:readStored(DESKTOP_INTRO_HINT_KEY)===true,
  remember:()=>store(DESKTOP_INTRO_HINT_KEY,true),show:(text,duration)=>toast(controllerActive?CONTROLLER_INTRO_HINT_TEXT:text,duration)});
const gameplayAudio=new GameplayAudio(audio);
const originalHud=new OriginalHud($('original-hud')),skipHold=new CutsceneSkipHold();
originalHud.ready.catch(showError);
const debriefing=new OriginalDebriefing($('debriefing'),continueDebriefing,{mobile:mobileWeb});
debriefing.ready.catch(showError);
const loadingScreen=new OriginalLoadingScreen($('loading'));
loadingScreen.ready.catch(showError);
try {renderer=new THREE.WebGLRenderer({canvas:$('game'),antialias:true,powerPreference:'high-performance'});renderer.outputColorSpace=THREE.SRGBColorSpace;renderer.setPixelRatio(1);}catch(error){showError(new Error('WebGL 2 is niet beschikbaar. Controleer je grafische stuurprogramma. '+error.message));}
renderer?.domElement.addEventListener('webglcontextrestored',()=>{worldRenderDirty=true;});
function showError(error){console.error(error);$('fatal-message').textContent=error.message||String(error);$('fatal').hidden=false;$('loading').hidden=true;mode='error';touchControls?.reset();syncTouchUI();}
function toast(message,duration=3500){$('toast').textContent=message;$('toast').classList.add('visible');clearTimeout(toastTimer);toastTimer=setTimeout(()=>$('toast').classList.remove('visible'),duration);}
function store(key,value){try{
  if(PLAYER_KEYS.has(key)&&profileInitError)throw profileInitError;
  if(key===SETTINGS_KEY&&profiles)localStorage.setItem(profiles.key(PLAYER_OPTIONS_KEY),JSON.stringify({difficulty:value.difficulty,noClip:value.noClip}));
  localStorage.setItem(storageKey(key),JSON.stringify(value));return true;
}catch{toast('Opslaan is niet gelukt: lokale opslag is niet beschikbaar.');return false;}}
function refreshContinue(){const hasSave=validSave(readStored(SAVE_KEY));$('continue').hidden=!hasSave;$('start').hidden=hasSave;$('start-over').hidden=!hasSave;$('play-level').hidden=!hasSave||!levelReplaySelected;$('load-save').disabled=!hasSave;}
function refreshPlayerName(){$('current-player').textContent=profiles?`Speler: ${profiles.active.name}`:'Spelerlijst niet beschikbaar';}
async function selectPlayer(id){
  if(!profiles||profileSwitching||mode!=='menu')throw new Error('Ga eerst terug naar het hoofdmenu om van speler te wisselen.');
  if(id===profiles.activeId)return true;
  if(!profiles.list().some(player=>player.id===id))throw new Error('Deze speler bestaat niet meer.');
  // Save while the old player still owns both the world and the storage keys.
  // A defeated world keeps its last living save and can still be retired.
  if(world&&gameplay&&gameplay.state.health>0&&!saveGame(true))throw new Error('Het huidige avontuur kon niet worden opgeslagen. Wisselen is afgebroken.');
  if(!store(PLAYER_OPTIONS_KEY,{difficulty:settings.difficulty,noClip:settings.noClip}))throw new Error('De instellingen van deze speler konden niet worden opgeslagen.');
  profileSwitching=true;const previousRecovery=recovery;let nextRecovery;
  try{
    await pendingRecoveryCapture;await previousRecovery.flush();
    nextRecovery=createRecovery(id);await nextRecovery.ready;
    profiles.select(id);
    // A menu keeps its old world around for a quick resume. Retire it here so
    // quit/autosave/Android callbacks cannot write it into the next adventure.
    stopAudio();world?.dispose();world=null;gameplay=null;worldProfileId=null;
    recovery=nextRecovery;recoveryError=!recovery.available;pendingRecoveryCapture=Promise.resolve(true);
    await previousRecovery.storage.close();
    campaign=readCampaignProgress(readStored(PROGRESS_KEY),readStored(SAVE_KEY));
    const options=readStored(PLAYER_OPTIONS_KEY)||{};
    settings.difficulty=normalizeDifficulty(options.difficulty);settings.noClip=options.noClip===true;
    selected=Math.max(0,LEVELS.findIndex(level=>level.id===readStored(SAVE_KEY)?.level));levelReplaySelected=false;
    for(const [hint,key] of [[touchIntroHint,TOUCH_INTRO_HINT_KEY],[desktopIntroHint,DESKTOP_INTRO_HINT_KEY]])Object.assign(hint,{seen:readStored(key)===true,pending:false,openingSeen:false});
    autosave.reset();clearInputs();streamingWait=null;renderQuality.reset();debriefing.hide();
    clearTimeout(toastTimer);$('toast').classList.remove('visible');$('subtitle').hidden=true;document.body.classList.remove('in-cutscene');
    refreshPlayerName();refreshContinue();renderChapters();updateCheatControls();syncTouchUI();
    return true;
  }catch(error){if(nextRecovery&&nextRecovery!==recovery)await nextRecovery.storage.close();throw error;}
  finally{profileSwitching=false;}
}
async function removePlayer(id){
  if(!profiles||profileSwitching||mode!=='menu')throw new Error('Ga eerst terug naar het hoofdmenu.');
  const list=profiles.list(),remaining=list.find(player=>player.id!==id);
  if(!remaining)throw new Error('Maak eerst een andere speler aan.');
  const databaseName=profiles.recoveryDatabase(id);
  if(id===profiles.activeId)await selectPlayer(remaining.id);
  const {cleanupErrors}=profiles.remove(id);refreshPlayerName();
  // The removed player's database is no longer open; never touch another
  // player's recovery timeline or the shared display/audio preferences.
  const removed=await new Promise(resolve=>{
    try{const request=indexedDB.deleteDatabase(databaseName);request.onsuccess=()=>resolve(true);request.onerror=request.onblocked=()=>resolve(false);}catch{resolve(false);}
  });
  if(!removed||cleanupErrors.length)return 'Speler verwijderd. Sluit andere spelvensters om alle oude opslag op te ruimen.';
  return 'Speler verwijderd.';
}
function validSave(save){return validAdventureSave(save);}
function adventureSnapshot(){return {version:1,level:world.id,position:[...world.player.position],lastSafe:[...world.player.lastSafe],playerMotion:world.player.snapshotMotion(),playerAnimation:world.snapshotPlayerAnimation(),noClip:world.player.noClip,yaw:world.yaw,pitch:world.pitch,game:gameplay.snapshot(),audio:audio.saveState(),savedAt:new Date().toISOString()};}
function saveGame(silent=false){
  if(profileSwitching||!world||!gameplay||worldProfileId!==profiles?.activeId)return false;
  // Death animations and game-over menus must not replace a usable save.
  if(gameplay.state.health<=0){if(!silent)toast('Je avontuur is niet opgeslagen. Probeer het opnieuw zodra RedCat terug is.');return false;}
  const save=adventureSnapshot(),ok=store(SAVE_KEY,save);
  pendingRecoveryCapture=recovery.capture(save).then(saved=>{if(saved)recoveryError=false;return saved;});
  refreshContinue();if(ok){autosave.reset();if(!silent)toast('Je avontuur is opgeslagen.');}return ok;
}
function renderRecoveryChoices(){
  const choices=recovery.choices();
  $('recovery-options').replaceChildren(...choices.map(choice=>{
    const button=document.createElement('button');button.type='button';button.className='secondary recovery-choice';
    button.dataset.recoveryMinutes=choice.minutes;button.disabled=!choice.save;
    const title=document.createElement('b');title.textContent=`${choice.minutes} minuten geleden`;
    const detail=document.createElement('small');
    if(choice.save){
      const level=LEVELS.find(level=>level.id===choice.save.level),stamp=new Date(choice.save.savedAt);
      detail.textContent=(level?.name||'Opgeslagen avontuur')+(Number.isFinite(stamp.getTime())?' · '+stamp.toLocaleString('nl-NL',{dateStyle:'short',timeStyle:'short'}):'');
    }else detail.textContent='Nog niet genoeg speeltijd opgeslagen';
    button.append(title,detail);button.onclick=()=>loadRecoverySave(choice.minutes);return button;
  }));
  $('recovery-status').textContent=recoveryError?'Herstelpunten opslaan is niet gelukt. Eerder bewaarde punten blijven beschikbaar.':choices.some(choice=>choice.save)?'Het gekozen herstelpunt wordt je huidige avontuur.':'Herstelpunten worden tijdens het spelen elke minuut bewaard.';
}
async function showRecoverySaves(){
  if(!['menu','paused'].includes(mode)||$('recovery-saves').open)return;
  $('recovery-status').textContent='Herstelpunten laden…';$('recovery-options').replaceChildren();$('recovery-saves').showModal();
  await recovery.ready;if($('recovery-saves').open)renderRecoveryChoices();
}
async function loadRecoverySave(minutes){
  if(!['menu','paused'].includes(mode))return false;
  const save=recovery.choices().find(choice=>choice.minutes===minutes)?.save;
  if(!save)return false;
  $('recovery-saves').close();
  if(!await loadAdventure(save))return false;
  saveGame(true);toast(`Avontuur van ongeveer ${minutes} minuten geleden geladen.`);return true;
}
function scriptedSound(event){
  const key=event.id?`effect:${event.id}`:null;
  if(event.stop){audio.stop(key);return;}
  audio.play({...event,key,sourceId:event.id});
}
function stopAudio(){chapterTransition=null;audio.reset();}
function startMusic(){const object=gameplay.objects.find(o=>o.enabled&&o.entity.classname==='EffectMusic'&&o.entity.MusicAmbient);if(object){if(gameplay.scripts){if(!gameplay.scripts.musicState)gameplay.scripts.selectMusic(object,'ambient');}else audio.play({key:'music',sourceId:object.id,channel:'music',sound:object.entity.MusicAmbient,volume:object.volume??1,loop:true});}}
function resolutionSize(){if(settings.resolution==='native')return [Math.min(7680,Math.round(innerWidth*devicePixelRatio)),Math.min(4320,Math.round(innerHeight*devicePixelRatio))];return settings.resolution.split('x').map(Number);}
function resize(){if(!renderer)return;worldRenderDirty=true;const [baseW,baseH]=resolutionSize();const [w,h]=scaledRenderSize(baseW,baseH,renderQuality.scale(settings.renderScale));renderer.setSize(w,h,false);if(world){world.camera.aspect=baseW/baseH;world.camera.fov=settings.fov;world.camera.updateProjectionMatrix();}$('render-info').textContent=`${w} × ${h} · ${settings.camera==='third'?'Derde persoon':'Eerste persoon'}`;}
function renderChapters(){
  if(!canStartCampaignLevel(campaign,selected)){selected=0;levelReplaySelected=false;}
  $('level-list').replaceChildren(...LEVELS.map((level,i)=>{
    const unlocked=canStartCampaignLevel(campaign,i),b=document.createElement('button');
    b.className='level-card'+(selected===i?' selected':'')+(unlocked?'':' locked');
    b.disabled=!unlocked;b.dataset.level=level.id;
    b.setAttribute('aria-pressed',String(selected===i));
    b.setAttribute('aria-label',`${level.name}${unlocked?'':' · Vergrendeld'}`);
    b.title=unlocked?level.subtitle:`Voltooi ${LEVELS[i-1]?.name||'het vorige level'} om dit level vrij te spelen.`;
    b.innerHTML=`<img alt="" width="150" height="171"><span class="selected-mark">✓</span><div class="card-info"><small>0${i+1}</small><b>${level.name}</b></div>`;
    const img=b.querySelector('img');let hovered=false,pressed=false;
    const paint=()=>{img.src=chapterArtwork(i,{unlocked,hovered,pressed,selected:selected===i});};
    b.onpointerenter=()=>{hovered=true;paint();};b.onpointerleave=()=>{hovered=false;pressed=false;paint();};
    b.onfocus=()=>{hovered=true;paint();};b.onblur=()=>{hovered=false;pressed=false;paint();};
    b.onpointerdown=()=>{pressed=true;paint();};b.onpointerup=()=>{pressed=false;paint();};
    b.onclick=()=>{
      if(!unlocked)return;selected=i;levelReplaySelected=true;menuAudio.selectLevel(i);renderChapters();
      // Browsing chapters never replaces a save. Level Spelen is the separate
      // replay action; preserve keyboard/controller focus on the selected card.
      $('level-list').querySelector(`[data-level="${level.id}"]`).focus({preventScroll:true});
    };paint();return b;
  }));
  $('start').firstChild.textContent=selected===0?'Start avontuur ':'Start dit level ';
  $('play-level').title=`${LEVELS[selected].name} spelen`;
  refreshContinue();
}

let pendingAdventureLevel=null,pendingAdventureOrigin=null,pendingNewAdventure=false;
async function requestAdventureStart(index=selected,origin=document.activeElement,newAdventure=index===0){
  if(profileSwitching||mode!=='menu'||$('new-adventure-warning').open)return;
  const playerId=profiles?.activeId;
  await recovery.ready;
  if(profileSwitching||profiles?.activeId!==playerId||playerMenu.openDialog||mode!=='menu'||$('new-adventure-warning').open)return;
  if(!validSave(readStored(SAVE_KEY))&&!recovery.choices().some(choice=>choice.save)){startLevel(index,null,null,{resetRecovery:true,newAdventure});return;}
  pendingAdventureLevel=index;pendingAdventureOrigin=origin;pendingNewAdventure=newAdventure;
  $('confirm-new-adventure').textContent=newAdventure?'Nieuw avontuur starten':`${LEVELS[index].name} starten`;
  $('new-adventure-warning').showModal();$('cancel-new-adventure').focus();
}
function cancelAdventureStart(){
  menuAudio.stopVoice();
  pendingAdventureLevel=null;pendingNewAdventure=false;$('new-adventure-warning').close();
  const origin=pendingAdventureOrigin;pendingAdventureOrigin=null;
  (origin?.isConnected&&!origin.hidden?origin:$('continue').hidden?$('start'):$('continue')).focus();
}
function confirmAdventureStart(){
  if(pendingAdventureLevel===null)return;
  const index=pendingAdventureLevel,newAdventure=pendingNewAdventure;pendingAdventureLevel=null;pendingAdventureOrigin=null;pendingNewAdventure=false;
  $('new-adventure-warning').close();startLevel(index,null,null,{resetRecovery:true,newAdventure});
}

function clearInputs(){keys.clear();mouseAttack=false;touchControls?.reset();gamepad.reset();controllerFrame=null;skipHold.reset();updateSkipIndicator();}
function syncTouchUI(){touchControls?.setContext({playing:mode==='playing'&&!controllerActive,cutscene:!!gameplay?.scripts?.cutscene,noClip:!!world?.player.noClip});$('game-menu').hidden=mode!=='playing'||controllerActive||!(touchEnabled||mobileWeb);}
function syncSkipLabel(){
  $('cutscene-skip').setAttribute('aria-label',controllerActive?'Houd X of vierkant twee seconden ingedrukt om over te slaan':touchEnabled?'Houd Overslaan twee seconden ingedrukt':'Houd E twee seconden ingedrukt om over te slaan');
  const label=$('cutscene-skip').querySelector('b');
  label.textContent=controllerActive?'X /':touchEnabled?'2s':'E';
  if(controllerActive){
    // Draw the PlayStation button outline without relying on a font glyph.
    const square=document.createElement('span');square.className='controller-square';square.setAttribute('aria-hidden','true');
    label.append(square);
  }
}
function setControllerActive(active){
  if(controllerActive===active)return;
  controllerActive=active;document.body.classList.toggle('controller-input',active);
  if(active){keys.clear();mouseAttack=false;document.exitPointerLock?.();}
  else gamepadMenu.reset();
  syncSkipLabel();syncTouchUI();
}
function syncTouchSettings(){
  touchEnabled=touchControlsEnabled(settings.touchControls,touchEnvironment);touchControls?.setEnabled(touchEnabled);
  document.body.classList.toggle('touch-input',touchEnabled);
  syncSkipLabel();
  if(touchEnabled)document.exitPointerLock?.();
  updateCheatControls();syncTouchUI();
}
function toggleCamera(){if(!canTogglePlayerCamera(world))return;settings.camera=settings.camera==='third'?'first':'third';resize();store(SETTINGS_KEY,settings);}
function pause(){if(mode!=='playing')return;mode='paused';worldRenderDirty=true;clearInputs();syncTouchUI();document.exitPointerLock?.();$('pause').hidden=false;audio.pause();saveGame(true);}
function resume(){menuAudio.stop();if(!world||androidSuspended())return;if(gameplay.completed&&chapterTransition?.world!==world)return loadSave();if(gameplay.state.health<=0&&!(gameplay.playerReaction?.phase==='death'&&!gameplay.playerReaction.finished&&gameplay.state.lives>0))return startLevel(selected,null,null,{resumeReplayLevel:gameplay.scripts?.replayLevel===true});clearInputs();mode='playing';$('pause').hidden=true;$('settings').hidden=true;$('cheats').hidden=true;if(androidHost.enabled)audio.context?.resume()?.catch(()=>{});audio.resume();lastFrame=performance.now();syncTouchUI();requestLook();}
function requestLook(event){if(controllerActive||touchEnabled||(mobileWeb&&!event)||event?.pointerType==='touch'||event?.sourceCapabilities?.firesTouchEvents)return;if(mode==='playing'&&!document.pointerLockElement){const result=$('game').requestPointerLock?.();result?.catch(()=>{if(event?.isTrusted)toast('Klik in het spel om rond te kijken.');});}}
async function returnMenu(){if(world)saveGame(true);levelReplaySelected=false;mode='menu';menuAudio.showMenu();clearInputs();syncTouchUI();document.exitPointerLock?.();stopAudio();debriefing.hide();$('menu').hidden=false;$('hud').hidden=true;$('pause').hidden=true;$('settings').hidden=true;$('cheats').hidden=true;document.body.classList.remove('in-cutscene');$('subtitle').hidden=true;refreshContinue();renderChapters();}
const dialogueStarted=line=>{$('subtitle').textContent=line.text||'';$('subtitle').hidden=!line.text;};
const dialogueEnded=()=>{$('subtitle').hidden=true;};
function handleGameEvent(event){
  // Skipping executes every script callback but suppresses transient audio/UI.
  if(gameplay?.scripts?.skippingCutscene&&['dialogue','scriptSound','scriptMusic','flash','message'].includes(event.type))return;
  gameplayAudio.handle(event,gameplay);
  if(event.type==='cutscene'){document.body.classList.toggle('in-cutscene',event.active);if(!event.active&&!audio.dialoguePending)$('subtitle').hidden=true;}
  if(event.type==='dialogue'){
    if(event.voice)audio.queueDialogue(event,{
      onStart:dialogueStarted,
      onEnd:dialogueEnded
    });
    else if(!audio.dialoguePending){$('subtitle').textContent=event.text||'';$('subtitle').hidden=!event.text;}
  }
  if(event.type==='skill'){campaign=earnCampaignSkill(campaign,event.skill);store(PROGRESS_KEY,campaign);}
  if(event.type==='scriptSound')scriptedSound(event);
  if(event.type==='scriptMusic')audio.playMusic(event);
  if(event.type==='scriptVolume')audio.setScriptVolume(event.id,event.volume);
  if(event.type==='teleport'&&world){world.player.position=[...event.position];world.player.position[1]+=1;world.player.lastSafe=[...world.player.position];world.player.resetVelocity();world.player.movementRecovery.reset();if(world.redcat)delete world.redcat.userData.motionState;world.yaw=nativePlayerYaw(event.orientation);world.updateCamera(1,true);}
  if(event.type==='flash'){$('script-flash').classList.remove('flash');void $('script-flash').offsetWidth;$('script-flash').classList.add('flash');}
  if(event.type==='message')toast(event.message || event.text || '');
  if(event.type==='pickup'){const label={coin:'Geldzakje verzameld',potion:'Toverdrank verzameld',health:'Een hartje erbij',mirror:'Spiegelstuk gevonden!',life:'Een extra leven!',hart:'Meer levenskracht!'}[event.subtype] || 'Voorwerp verzameld';toast(event.message || `${label} · +${event.score||0}`);}
  if(event.type==='door'&&!gameplay?.objects.find(o=>o.id===event.id)?.hasMotion)world?.setModel(event.modelIndex,!event.open);
  if(event.type==='visibility' && event.modelIndex!=null)world?.setModel(event.modelIndex,event.visible);
  if(event.type==='savepoint'){queueMicrotask(()=>saveGame(true));toast('Bewaarpunt bereikt. Je avontuur is opgeslagen.');}
  if(event.type==='death')world?.player.resetVelocity();
  if(event.type==='respawn'&&world){
    world.player.position=[...event.position];world.player.position[1]+=1;
    world.player.lastSafe=[...world.player.position];world.player.resetVelocity();
    world.player.movementRecovery.reset();
    world.yaw=nativePlayerYaw(event.orientation);world.updateCamera(1,true);
    toast(`Je bent terug bij het bewaarpunt. Nog ${event.lives} levens.`);
  }
  if(event.type==='gameOver'){pause();toast('Geen levens meer. Start het level opnieuw.');}
  if(event.type==='levelComplete'){
    awardLevelSummary(gameplay);
    campaign=completeCampaignLevel(campaign,world.id);store(PROGRESS_KEY,campaign);renderChapters();saveGame(true);
    chapterTransition={world,current:LEVELS.findIndex(l=>l.id===world.id),progress:{...gameplay.state},remaining:.8};
  }
}
function advanceChapterTransition(dt){
  if(!chapterTransition||chapterTransition.world!==world||mode!=='playing')return;
  chapterTransition.remaining-=dt;
  // IMirror lasts over three seconds. A wall-clock 800 ms transition used to
  // reset it mid-recording, and could also cut the last buffered dialogue line.
  if(chapterTransition.remaining>0||audio.pickupsPending||audio.dialoguePending)return;
  showDebriefing();
}
function showDebriefing(){
  if(!world||!gameplay.completed)return;
  const summary=awardLevelSummary(gameplay);
  chapterTransition=null;mode='debriefing';clearInputs();syncTouchUI();
  document.exitPointerLock?.();audio.reset();document.body.classList.remove('in-cutscene');
  $('hud').hidden=true;$('subtitle').hidden=true;$('pause').hidden=true;
  debriefing.show(summary);saveGame(true);
}
function continueDebriefing(){
  if(mode!=='debriefing'||!debriefing.canContinue())return;
  const current=LEVELS.findIndex(l=>l.id===world.id),progress={...gameplay.state};
  debriefing.hide();current<4?startLevel(current+1,null,progress):playIntro(true);
}
async function startLevel(index,save=null,progress=null,{resetRecovery=false,newAdventure=false,resumeReplayLevel=null}={}){
  if(profileSwitching||profileInitError){toast(profileInitError?.message||'De speler wordt gewisseld.');return false;}
  if(!canStartCampaignLevel(campaign,index)){toast('Dit level is nog vergrendeld. Voltooi eerst het vorige level.');return false;}
  if(!renderer){showError(new Error('Geen WebGL-renderer beschikbaar.'));return;}
  levelReplaySelected=false;
  const fromMenu=mode==='menu';
  menuAudio.stop();const menuStart=fromMenu?menuAudio.say(['rcmn32.wav']):Promise.resolve();
  const resetSkills=newAdventure&&index===0&&!save&&!progress;
  const replayLevel=resetSkills?false:typeof resumeReplayLevel==='boolean'?resumeReplayLevel:isCampaignLevelReplay(campaign,index,{save});
  mode='loading';clearInputs();syncTouchUI();document.exitPointerLock?.();stopAudio();debriefing.hide();
  clearTimeout(toastTimer);$('toast').classList.remove('visible');
  touchIntroHint.start({level:LEVELS[index].id,touch:touchEnabled,restored:!!save||replayLevel});
  desktopIntroHint.start({level:LEVELS[index].id,enabled:!touchEnabled||controllerActive,restored:!!save||replayLevel});
  loadingScreen.show(index);$('menu').hidden=true;$('pause').hidden=true;$('settings').hidden=true;$('cheats').hidden=true;$('fatal').hidden=true;$('hud').hidden=true;
  await menuStart;
  let next;
  try {
    if(world){world.dispose();world=null;gameplay=null;}
    next=new CastleWorld(renderer,settings);
    await Promise.all([loadingScreen.ready,debriefing.ready,recovery.ready]);
    loadingScreen.setProgress(.05);
    await next.load(LEVELS[index].id,(_message,progress)=>loadingScreen.setProgress(progress));
    loadingScreen.setProgress(.65);
    world=next;worldProfileId=profiles.activeId;gameplay=new Gameplay(world.level,{onEvent:handleGameEvent,deferInit:true,difficulty:save?normalizeDifficulty(save.game.difficulty):settings.difficulty});
    if(progress){const skill=gameplay.state.skill;Object.assign(gameplay.state,progress,{potions:0,skill:skill|progress.skill});}
    if(save){
      if(!gameplay.restore(save.game))throw new Error('Het opgeslagen avontuur is ongeldig.');world.player.position=[...save.position];world.yaw=save.yaw;world.pitch=save.pitch;
      const safe=save.lastSafe;
      world.player.lastSafe=Array.isArray(safe)&&safe.length===3&&safe.every(Number.isFinite)?[...safe]:[...gameplay.checkpoint.position];
      if(typeof save.noClip==='boolean')settings.noClip=save.noClip;
    }
    if(!resetSkills)gameplay.state.skill|=campaignSkills(campaign);
    world.player.noClip=settings.noClip;if(save)world.player.restoreMotion(save.playerMotion);store(SETTINGS_KEY,settings);
    gameplay.playerPosition=[...world.player.position];
    const scripts=new ScriptHost(gameplay,world.scriptProgram,{motions:world.motions,dialogue:world.dialogue,isDialoguePlaying:()=>audio.dialoguePending,replayLevel});
    await world.attachGameplay(gameplay);loadingScreen.setProgress(.8);audio.setLevel(world.id);await audio.setSpatialWorld(world);audio.pause();audio.update(0,world.camera.position.toArray());startMusic();scripts.initialize(save?.game.scripts);world.syncModels();world.syncActors(0);
    if(save){world.cameraControl.restore(world);world.restorePlayerAnimation(save.playerAnimation);}
    world.updateCamera(1,true);audio.update(0,world.camera.position.toArray());selected=index;renderQuality.reset();resize();updateCheatControls();renderHud();
    await world.geometryStream.settle();world.updateRenderResidency();world.effects?.update(0);
    // Restore after script/effect reconstruction, while every voice is paused.
    // This replaces reconstruction audio without replaying script callbacks.
    if(save?.audio&&audio.restoreState(save.audio,{
      positionForSource:id=>{const object=gameplay.objects.find(o=>o.id===id);return object?()=>gameplay.objectPosition(object):null;},
      onDialogueStart:dialogueStarted,onDialogueEnd:dialogueEnded
    }))for(const state of world.effects?.entries.values()||[]){
      // Legacy visual saves restart the fairy idle on their first tick. A
      // restored voice already has its saved cursor and must not be replaced.
      if(state.resumeFairyAudio&&audio.keyed.has(`effect:fairy:${state.object.id}:idlefee1.wav`))state.resumeFairyAudio=false;
    }
    loadingScreen.setProgress(.95);
    $('level-name').textContent=LEVELS[index].name;$('objective').textContent='Verzamel toverdrank en vind het spiegelstuk.';
    // A successful new adventure replaces its own recovery timeline only now,
    // after assets and scripts loaded. Other level transitions keep history.
    const initialSave=adventureSnapshot();
    if(await recovery.capture(initialSave,{reset:resetRecovery}))recoveryError=false;
    // New adventures relearn abilities; chapter replays keep them. Commit only
    // after loading succeeds so cancelling or a failed load preserves ownership.
    if(resetSkills)campaign=readCampaignProgress({...campaign,earnedSkills:gameplay.state.skill});
    campaign=recordPlayedCampaignLevel(campaign,world.id,{newAdventure:resetSkills});store(PROGRESS_KEY,campaign);
    if(resetRecovery){store(SAVE_KEY,initialSave);refreshContinue();}
    loadingScreen.setProgress(1);mode='playing';streamingWait=null;loadingScreen.hide();$('hud').hidden=false;lastFrame=performance.now();autosave.reset();syncTouchUI();if(androidSuspended())suspendForAndroid();else audio.resume();requestLook();
    return true;
  }catch(error){next?.dispose();world=null;gameplay=null;showError(error);}
}
async function loadAdventure(save){if(profileSwitching||profileInitError)return false;if(!validSave(save)){toast('Geen geldig opgeslagen avontuur gevonden.');return false;}campaign=readCampaignProgress(campaign,save);store(PROGRESS_KEY,campaign);const index=LEVELS.findIndex(l=>l.id===save.level);const dead=save.game.state?.health<=0&&!(save.game.playerReaction?.phase==='death'&&save.game.state.lives>0);const ok=await startLevel(index,dead?null:save,null,{resumeReplayLevel:dead?save.game.scripts?.replayLevel===true:null});if(ok&&save.game.completed)showDebriefing();return ok===true;}
async function loadSave(){return loadAdventure(readStored(SAVE_KEY));}
function showSettings(){menuAudio.say(['mn_red24.wav']);pausedFromSettings=mode==='playing'||mode==='paused';if(mode==='playing')pause();$('pause').hidden=true;$('settings').hidden=false;$('resolution').value=settings.resolution;$('render-scale').value=settings.renderScale;$('render-scale-value').textContent=settings.renderScale+'%';$('show-fps').checked=settings.showFps;$('fullscreen').disabled=!window.desktop&&!androidHost.enabled&&(!document.fullscreenEnabled||!document.documentElement.requestFullscreen);$('fullscreen').checked=settings.fullscreen&&!$('fullscreen').disabled;$('fov').value=settings.fov;$('fov-value').textContent=settings.fov+'°';$('sensitivity').value=settings.sensitivity;$('volume').value=settings.volume;$('auto-intro').checked=settings.autoIntro;$('camera-mode').value=settings.camera;$('difficulty').value=settings.difficulty;$('touch-controls-setting').value=settings.touchControls;sliderAudio.reset(Object.fromEntries(Object.keys(SLIDER_VOICES).map(id=>[id,$(id).value])));}
function closeSettings({keepVoice=false}={}){sliderAudio.cancel();if(!keepVoice)menuAudio.stopVoice();menuAudio.setVolume(settings.volume);$('settings').hidden=true;$('cheats').hidden=true;if(pausedFromSettings)$('pause').hidden=false;}
function showCheats(){sliderAudio.cancel();menuAudio.stopVoice();
  $('settings').hidden=true;$('cheats').hidden=false;$('cheat-noclip').checked=settings.noClip;
  $('cheat-supplies').disabled=!pausedFromSettings||!gameplay||gameplay.completed||gameplay.state.health<=0;
  $('cheat-unlock-levels').disabled=canStartCampaignLevel(campaign,LEVELS.length-1);
  $('cheat-status').textContent=$('cheat-supplies').disabled?'Start een level om je voorraad aan te vullen.':'';
}
function closeCheats(){$('cheats').hidden=true;$('settings').hidden=false;$('open-cheats').focus();}
function updateCheatControls(){
  if(touchEnabled){$('controls-hint').textContent=settings.noClip?'Stick · vliegen · Omhoog / Omlaag · Schieten · Menu':'Stick · bewegen · veeg rechts · kijken · Spring · Schieten · Menu';return;}
  $('controls-hint').textContent=settings.noClip?'NO-CLIP · WASD / pijlen · vliegen · SPATIE · omhoog · SHIFT · omlaag · CTRL / klik · aanval · ESC · menu':'WASD / pijlen · bewegen · SPATIE · springen · CTRL / klik · aanval · E · gebruiken · ESC · menu';
}
function applyNoClip(){
  let enabled=$('cheat-noclip').checked,result;
  if(world&&pausedFromSettings){result=setNoClip(world,enabled);enabled=result.enabled;world.syncPlayer(0,{});world.updateCamera(1,true);worldRenderDirty=true;}
  settings.noClip=enabled;$('cheat-noclip').checked=enabled;store(SETTINGS_KEY,settings);updateCheatControls();
  if(world&&pausedFromSettings)saveGame(true);
  $('cheat-status').textContent=result?.blocked?'Er is nu geen vrije plek om veilig te landen. Vrij vliegen blijft aan.':result?.returned?'Vrij vliegen uit. Je bent terug op een veilige plek.':enabled?'Vrij vliegen aan. Spatie omhoog, Shift omlaag.':'Vrij vliegen uit.';
}
function applyCheatSupplies(){
  if($('cheat-supplies').disabled||!gameplay)return;
  const state=grantCheatSupplies(gameplay);renderHud();saveGame(true);
  $('cheat-status').textContent=`${state.mirror} spiegelstukken · ${state.potions} toverdrank · ${state.score} punten`;
}
function applyUnlockAllLevels(){
  const unlocked={...campaign,highestUnlocked:LEVELS.length-1};
  if(!store(PROGRESS_KEY,unlocked)){
    $('cheat-status').textContent='Levels konden niet worden opgeslagen. Probeer het opnieuw.';return;
  }
  campaign=unlocked;renderChapters();$('cheat-unlock-levels').disabled=true;
  $('cheat-status').textContent='Alle vijf levels zijn vrijgespeeld en opgeslagen.';
}
function renderHud(){
  if(!gameplay||!world)return;
  const state=gameplay.state;
  for(const key of ['health','lives','score','potions','mirror']) {
    const element=$(key),value=String(state[key]||0);
    if(element.textContent!==value)element.textContent=value;
  }
  originalHud.render(state,gameplay.totalPotions,world.targeting?.locked?world.targeting.target:null,$('game').width,$('game').height,{bottomInset:touchEnabled&&!controllerActive?200:0});
}
function updateSkipIndicator(){
  const active=mode==='playing'&&!!gameplay?.scripts?.cutscene;
  $('cutscene-skip').hidden=!active;
  $('skip-progress').style.strokeDashoffset=100*(1-skipHold.progress);
  $('cutscene-skip').setAttribute('aria-valuenow',String(Math.round(skipHold.progress*100)));
}
function skipDialogue(){
  const host=gameplay.scripts;
  const fairies=world.effects?.collectCutsceneFairies();
  audio.stopDialogue();
  const finished=host.skipCutscene({onStep:()=>{world.effects?.collectCutsceneFairies(fairies);world.syncModels();world.syncMountedActorCollisions();}});
  if(finished&&fairies)world.effects.finishSkippedFairies(fairies);
  world.syncModels();world.syncActors(0);world.syncPlayer(0,{});world.updateCamera(1,true);
  $('subtitle').hidden=true;
  if(host.musicState)handleGameEvent({type:'scriptMusic',...host.musicState});
  // Restore looping sounds to their final script-controlled enabled state.
  for(const object of gameplay.objects)if(object.entity.classname==='EffectSound'&&Number(object.entity.Replay))host.sound(object,object.enabled);
  if(!finished)toast('Deze scène kan nu niet worden overgeslagen.');
}
async function applySettings(){
  sliderAudio.cancel();menuAudio.say(['rcmn1.wav']);
  const updated={resolution:$('resolution').value,renderScale:normalizeRenderScale(Number($('render-scale').value)),showFps:$('show-fps').checked,fullscreen:$('fullscreen').checked,fov:Number($('fov').value),sensitivity:Number($('sensitivity').value),volume:Number($('volume').value),autoIntro:$('auto-intro').checked,camera:$('camera-mode').value,difficulty:normalizeDifficulty($('difficulty').value),touchControls:normalizeTouchPreference($('touch-controls-setting').value)};
  try {
    const [width,height]=updated.resolution==='native'?[Math.max(800,Math.round(screen.width*.85)),Math.max(600,Math.round(screen.height*.85))]:updated.resolution.split('x').map(Number);
    if(window.desktop)await window.desktop.applyDisplay({width,height,fullscreen:updated.fullscreen});
    else if(androidHost.enabled)androidHost.setFullscreen(updated.fullscreen);
    else if(updated.fullscreen&&!document.fullscreenElement){
      // Gamepad button polling is not a browser user-activation gesture. Keep
      // settings usable and defer only fullscreen until a real click/keypress.
      if(controllerActive&&!navigator.userActivation?.isActive){
        fullscreenPreference?.dispose();fullscreenPreference=new FullscreenPreference(document,{shouldRequest:()=>$('settings').hidden&&$('cheats').hidden});
      }else await document.documentElement.requestFullscreen();
    }
    else if(!updated.fullscreen&&document.fullscreenElement)await document.exitFullscreen();
    if(updated.resolution!==settings.resolution||updated.renderScale!==settings.renderScale)renderQuality.reset();Object.assign(settings,updated);fullscreenPreference?.setEnabled(updated.fullscreen);store(SETTINGS_KEY,settings);clearInputs();syncTouchSettings();audio.setMaster(settings.volume);menuAudio.setVolume(settings.volume);$('intro-video').volume=settings.volume;resize();closeSettings({keepVoice:true});
  }catch(error){toast('Beeldinstellingen konden niet worden toegepast.');console.error(error);}
}
let introReturn='menu';
const introPlayback=new IntroPlayback($('intro-video'),$('intro-play'),{mutedAutoplay:!window.desktop,onError:introFailed});
function playIntro(outro=false){menuAudio.stop();introReturn=outro?'menu':mode;mode='intro';clearInputs();syncTouchUI();document.exitPointerLock?.();audio.pause();$('intro').hidden=false;const format=$('intro-video').canPlayType('video/webm; codecs="vp9, opus"')?'webm':'mp4';return introPlayback.start(`assets/media/${outro?'outronl':'intronl'}.${format}`,settings.volume);}
function finishIntro(){introPlayback.stop();$('intro').hidden=true;if(introReturn==='playing' || introReturn==='paused'){mode='paused';$('pause').hidden=false;}else returnMenu();}
function introFailed(){if(mode!=='intro')return;finishIntro();showError(new Error('Het filmpje kon niet worden afgespeeld. Controleer of de CD-media zijn geïmporteerd met tools/import_assets.py.'));}
function suspendForAndroid(){
  clearInputs();pause();audio.pause();menuAudio.pause();
  audio.context?.suspend()?.catch(()=>{});
  if(mode==='intro')introPlayback.suspend();
  androidHost.setKeepAwake(false);
  if(frameRequest){cancelAnimationFrame(frameRequest);frameRequest=0;}
}
function androidBack(){
  if(mode==='loading')return;
  if(mode==='playing'){pause();return;}
  const root=controllerMenuRoot();
  if(root?.id==='pause'){returnMenu();return;}
  if(root?.id==='menu'){quitMenu.open();return;}
  controllerBack(root);
}
if(androidHost.enabled){
  $('intro-play').onclick=()=>{if(!androidSuspended())introPlayback.activate();};
  // Native lifecycle messages cover audio focus; visibility covers the brief
  // interval before Android delivers its pause callback.
  document.addEventListener('visibilitychange',()=>{
    if(document.hidden)suspendForAndroid();
    else if(androidHost.active){lastFrame=performance.now();scheduleFrame();startAutomaticIntro();}
  });
}
$('start').onclick=()=>requestAdventureStart();$('start-over').onclick=()=>{menuAudio.say(['rcmn29.wav']);requestAdventureStart(0,$('start-over'));};$('continue').onclick=loadSave;$('resume').onclick=resume;$('restart').onclick=()=>startLevel(selected);$('save').onclick=()=>saveGame();$('return-menu').onclick=returnMenu;
$('play-level').onclick=()=>{if(levelReplaySelected)requestAdventureStart(selected,$('play-level'),false);};
$('game-menu').onclick=pause;$('load-save').onclick=loadSave;
$('open-about').onclick=()=>$('about').showModal();$('close-about').onclick=()=>{$('about').close();menuAudio.say(['rcmn2.wav']);};
$('open-recovery').onclick=showRecoverySaves;$('pause-recovery').onclick=showRecoverySaves;$('close-recovery').onclick=()=>{$('recovery-saves').close();menuAudio.say(['rcmn2.wav']);};
$('cancel-new-adventure').onclick=cancelAdventureStart;$('confirm-new-adventure').onclick=confirmAdventureStart;
$('new-adventure-warning').addEventListener('cancel',event=>{event.preventDefault();cancelAdventureStart();});
$('open-settings').onclick=showSettings;$('pause-settings').onclick=showSettings;$('close-settings').onclick=()=>{closeSettings();menuAudio.say(['rcmn2.wav']);};$('apply-settings').onclick=applySettings;$('render-scale').oninput=()=>$('render-scale-value').textContent=$('render-scale').value+'%';$('fov').oninput=()=>$('fov-value').textContent=$('fov').value+'°';
for(const id of Object.keys(SLIDER_VOICES))$(id).addEventListener('input',()=>{if($('settings').hidden)return;if(id==='volume')menuAudio.setVolume(Number($('volume').value));sliderAudio.input(id,$(id).value);});
function announceDifficultySelector(){if($('settings').hidden)return;sliderAudio.cancel();menuAudio.say(['rcmn30.wav']);}
// pointerdown precedes native picker selection; a click handler can instead fire
// after change and overwrite the selected difficulty's announcement.
$('difficulty').addEventListener('pointerdown',event=>{if(event.button===0)announceDifficultySelector();});
$('difficulty').addEventListener('keydown',event=>{if(!event.repeat&&(event.key===' '||event.key==='Enter'||event.key==='F4'||event.altKey&&event.key==='ArrowDown'))announceDifficultySelector();});
$('difficulty').addEventListener('change',()=>{
  if($('settings').hidden)return;
  const voice={Easy:'mn_red02.wav',Normal:'mn_red03.wav',Hard:'mn_red04.wav'}[$('difficulty').value];
  if(voice){sliderAudio.cancel();menuAudio.say([voice]);}
});

$('open-cheats').onclick=showCheats;$('close-cheats').onclick=closeCheats;$('back-cheats').onclick=closeCheats;$('cheat-supplies').onclick=applyCheatSupplies;$('cheat-noclip').onchange=applyNoClip;$('cheat-unlock-levels').onclick=applyUnlockAllLevels;
$('open-help').onclick=()=>$('help').hidden=false;$('close-help').onclick=()=>{$('help').hidden=true;menuAudio.say(['rcmn2.wav']);};$('fatal-close').onclick=()=>{$('fatal').hidden=true;returnMenu();};$('play-intro').onclick=()=>playIntro();$('skip-intro').onclick=finishIntro;$('intro-video').onended=finishIntro;$('intro-video').onerror=introFailed;
async function quitGame(){saveGame(true);await pendingRecoveryCapture;stopAudio();if(androidHost.enabled)androidHost.quit();else if(window.desktop)await window.desktop.quit();else window.close();}
const quitMenu=new QuitMenu({dialog:$('quit-confirmation'),openButton:$('open-quit'),yesButton:$('quit-yes'),noButton:$('quit-no'),status:$('quit-status'),audio:menuAudio,closeGame:quitGame,browser:!window.desktop&&!androidHost.enabled});
const playerMenu=new PlayerMenu({profiles,audio:menuAudio,selectPlayer,removePlayer,error:profileInitError,canOpen:()=>{
  if(mode!=='menu'||profileSwitching)return false;
  clearInputs();return true;
}});
$('game').addEventListener('click',requestLook);
window.addEventListener('keydown',e=>{
  if(e.isTrusted)setControllerActive(false);
  if(playerMenu.openDialog||$('new-adventure-warning').open||$('recovery-saves').open||$('about').open)return;
  if(mode==='debriefing'){if(['ControlLeft','ControlRight','Space','Enter'].includes(e.code)){e.preventDefault();if(!e.repeat)continueDebriefing();}return;}
  if(e.code==='Escape'){if($('quit-confirmation').open){e.preventDefault();quitMenu.cancel();return;}if(mode==='intro'){finishIntro();return;}if(!$('cheats').hidden){closeCheats();return;}if(!$('settings').hidden){closeSettings();return;}if(!$('help').hidden){$('help').hidden=true;return;}if(mode==='playing')pause();else if(mode==='paused')resume();return;}
  if(mode!=='playing')return;e.preventDefault();keys.add(e.code);
  if(e.repeat)return;
  if(e.code==='KeyP')pause();if(e.code==='KeyV')toggleCamera();
  if(e.code==='F5')saveGame();if(e.code==='F9')loadSave();
});
window.addEventListener('keyup',e=>keys.delete(e.code));
window.addEventListener('mousemove',e=>{if(mode==='playing'&&document.pointerLockElement)world?.look(e.movementX,e.movementY);});
window.addEventListener('mousedown',e=>{if(!touchEnabled&&!e.sourceCapabilities?.firesTouchEvents&&e.button===0&&mode==='playing'&&document.pointerLockElement)mouseAttack=true;});
window.addEventListener('mouseup',()=>mouseAttack=false);
document.addEventListener('pointerlockchange',()=>{if(!touchEnabled&&!controllerActive&&!document.pointerLockElement&&mode==='playing')pause();});
window.addEventListener('pointerdown',event=>{if(event.isTrusted)setControllerActive(false);if(!androidSuspended())menuAudio.resume();},{capture:true});
window.addEventListener('keydown',()=>{if(!androidSuspended())menuAudio.resume();},{capture:true});
window.addEventListener('blur',()=>{clearInputs();pause();menuAudio.pause();});window.addEventListener('focus',()=>{if(!androidSuspended())menuAudio.resume();});document.addEventListener('visibilitychange',()=>{if(document.hidden){clearInputs();pause();menuAudio.pause();}else if(!androidSuspended())menuAudio.resume();});
window.addEventListener('resize',()=>{clearInputs();resize();});window.addEventListener('beforeunload',()=>saveGame(true));
let fullscreenPreference=window.desktop||androidHost.enabled?null:new FullscreenPreference(document,{
  enabled:settings.fullscreen,shouldRequest:()=>$('settings').hidden&&$('cheats').hidden,
});
function readInput(){const touch=touchControls?.readInput()||{},pad=controllerFrame?.input||{},clamp=value=>Math.max(-1,Math.min(1,value));return {
  forward:clamp(Number(keys.has('KeyW')||keys.has('ArrowUp'))-Number(keys.has('KeyS')||keys.has('ArrowDown'))+(touch.forward||0)+(pad.forward||0)),
  right:clamp(Number(keys.has('KeyD'))-Number(keys.has('KeyA'))+(touch.right||0)+(pad.right||0)),
  turn:Number(keys.has('ArrowLeft'))-Number(keys.has('ArrowRight')),
  jump:keys.has('Space')||!!touch.jump||!!pad.jump,
  descend:keys.has('ShiftLeft')||keys.has('ShiftRight')||!!touch.descend||!!pad.descend,
  walk:keys.has('ShiftLeft')||keys.has('ShiftRight')||!!touch.walk||!!pad.walk,
  attack:mouseAttack||keys.has('ControlLeft')||keys.has('ControlRight')||!!touch.attack||!!pad.attack,
  use:(keys.has('KeyE')||!!touch.use||!!pad.use)&&!skipHold.consumed
};}
function controllerMenuRoot(){
  for(const id of ['player-delete-dialog','player-name-dialog','player-list','quit-confirmation','new-adventure-warning','recovery-saves','about'])if($(id).open)return $(id);
  for(const id of ['fatal','intro','cheats','settings','help','pause','debriefing','menu'])if(!$(id).hidden)return $(id);
  return null;
}
function controllerBack(root){
  switch(root?.id){
    case 'player-delete-dialog':case 'player-name-dialog':case 'player-list':playerMenu.back(root.id);break;
    case 'quit-confirmation':quitMenu.cancel();break;
    case 'new-adventure-warning':cancelAdventureStart();break;
    case 'recovery-saves':$('recovery-saves').close();break;
    case 'about':$('about').close();break;
    case 'cheats':closeCheats();break;
    case 'settings':closeSettings();break;
    case 'help':$('help').hidden=true;break;
    case 'intro':finishIntro();break;
    case 'pause':resume();break;
    case 'fatal':$('fatal-close').click();break;
  }
}
function pollController(dt){
  const root=controllerMenuRoot(),enabled=!document.hidden&&document.hasFocus();
  controllerFrame=gamepad.poll(dt,{enabled,context:mode==='playing'&&!root?'gameplay':`menu:${root?.id||mode}`});
  const status=!gamepad.status.available?'Controller niet beschikbaar. Gebruik in een browser HTTPS of localhost.':gamepad.connected?`Controller: ${gamepad.id}`:'Controller: sluit een controller aan en druk op een knop.';
  if($('controller-status').textContent!==status)$('controller-status').textContent=status;
  if(controllerFrame.disconnected){pause();return;}
  if(!enabled)return;
  if(controllerFrame.active)setControllerActive(true);
  const actions=controllerFrame.actions;
  if(actions.pause){
    if(mode==='playing')pause();else if(root?.id==='pause')resume();else if(root?.id==='intro')finishIntro();
    return;
  }
  if(mode==='playing'&&!root){
    if(actions.camera)toggleCamera();
    gamepadMenu.reset();
  }else if(controllerActive&&root){
    if(actions.cancel)controllerBack(root);else{const scroll=controllerFrame.scroll;gamepadMenu.update(root,actions);gamepadMenu.scroll(root,scroll*650*dt);}
  }
}
function waitForWorldView(now){
  if(!world||mode!=='playing'){
    if(streamingWait?.overlay&&mode!=='loading')$('loading').hidden=true;
    streamingWait=null;return false;
  }
  const stream=world.geometryStream;if(!stream)return false;
  // The world updates residency after moving the camera. Only poll it here
  // while that view is incomplete; scanning twice on ordinary frames adds
  // work without preparing any additional camera position.
  if(!stream.readyForView)stream.update();
  if(stream.error){showError(stream.error);streamingWait=null;return true;}
  if(!stream.readyForView){
    if(!streamingWait){streamingWait={since:now,overlay:false};audio.pause();}
    if(now-streamingWait.since>250&&!streamingWait.overlay){
      streamingWait.overlay=true;loadingScreen.show(selected,{streaming:true});
    }
    // No simulation, dialogue, recovery clock or autosave advances behind a
    // loading view. The frame clock still advances, avoiding a catch-up step.
    return true;
  }
  if(streamingWait){if(streamingWait.overlay)$('loading').hidden=true;streamingWait=null;audio.resume();}
  return false;
}
let frameRequest=0;
function androidSuspended(){return androidHost.enabled&&(!androidHost.active||document.hidden);}
function scheduleFrame(){if(!frameRequest&&!androidSuspended())frameRequest=requestAnimationFrame(frame);}
function frame(now){frameRequest=0;if(androidSuspended())return;scheduleFrame();androidHost.setKeepAwake(mode==='playing'||mode==='intro');const realDt=Math.max(0,(now-lastFrame)/1000),dt=Math.min(realDt,0.05);lastFrame=now;pollController(dt);syncTouchUI();const waiting=waitForWorldView(now);const rendering=!!world&&mode==='playing'&&!waiting&&!document.hidden;
if(renderQuality.sample(realDt,rendering,settings.renderScale))resize();
$('fps-counter').hidden=!settings.showFps||!rendering;
if(settings.showFps&&rendering){const label=renderQuality.fps===null?'FPS: …':`${Math.round(renderQuality.fps)} FPS`;if($('fps-counter').textContent!==label)$('fps-counter').textContent=label;}
if(waiting)return;if(world&&mode==='playing'){
  recovery.advance(realDt);
  try{if(skipHold.update(realDt,keys.has('KeyE')||!!touchControls?.readInput().use||!!controllerFrame?.input.use,!!gameplay.scripts?.cutscene))skipDialogue();updateSkipIndicator();const input=readInput();if(controllerFrame)world.look(controllerFrame.look.x*900*dt,controllerFrame.look.y*900*dt);world.update(dt,input);syncTouchUI();gameplayAudio.update(dt,world,gameplay,input);audio.update(dt,world.camera.position.toArray());}catch(error){showError(error);return;}
  if(mode==='playing'){autosave.update(realDt,()=>saveGame(true));if(recovery.needsCapture)saveGame(true);}
  renderHud();
  touchIntroHint.update({playing:mode==='playing',touch:touchEnabled&&!controllerActive,cutscene:!!gameplay.scripts?.cutscene,camera:gameplay.scripts?.camera});
  desktopIntroHint.update({playing:mode==='playing',enabled:!touchEnabled||controllerActive,cutscene:!!gameplay.scripts?.cutscene,camera:gameplay.scripts?.camera});
  advanceChapterTransition(realDt);
}if(mode==='debriefing')debriefing.update(realDt);
// Paused menus keep their last completed world frame. Redraw after display,
// camera/context changes or pending streaming, while controller/UI polling
// continues at the normal display refresh rate.
if(world&&!document.hidden&&(mode==='playing'||mode==='paused'&&(worldRenderDirty||lastRenderedWorld!==world||world.geometryStream?.readyForView===false))){world.render();lastRenderedWorld=world;worldRenderDirty=false;}}
touchControls=new TouchControls({onLook:(dx,dy)=>{if(mode==='playing')world?.look(dx,dy);},onGesture:()=>{if(mode==='playing'&&!streamingWait)audio.resume();},onAction:action=>{if(mode!=='playing')return;if(action==='camera')toggleCamera();}});
syncTouchSettings();
window.__redcat={get world(){return world;},get gameplay(){return gameplay;},get mode(){return mode;},get settings(){return settings;},get audio(){return audio;},get touchEnabled(){return touchEnabled;},get controllerActive(){return controllerActive;},get recovery(){return recovery;},profiles,playerMenu,gamepad,touchControls,readInput,startLevel,pause,resume,saveGame,loadSave,resize,renderHud};
store(PROGRESS_KEY,campaign);store(PLAYER_OPTIONS_KEY,{difficulty:settings.difficulty,noClip:settings.noClip});refreshPlayerName();renderChapters();refreshContinue();resize();scheduleFrame();
if(window.desktop){
  const [width,height]=settings.resolution==='native'?[Math.max(800,Math.round(screen.width*.85)),Math.max(600,Math.round(screen.height*.85))]:resolutionSize();
  window.desktop.applyDisplay({width,height,fullscreen:!!settings.fullscreen}).catch(console.error);
}
let autoIntroPending=settings.autoIntro&&!new URLSearchParams(location.search).has('skipIntro');
function startAutomaticIntro(){if(autoIntroPending&&!androidSuspended()){autoIntroPending=false;if(mode==='menu')playIntro();}}
androidHost.connect({onSuspend:suspendForAndroid,onForeground:()=>{menuAudio.resume();lastFrame=performance.now();scheduleFrame();startAutomaticIntro();},onBack:androidBack});
if(androidHost.enabled)androidHost.setFullscreen(settings.fullscreen);
startAutomaticIntro();
if(mode==='menu')menuAudio.showMenu();

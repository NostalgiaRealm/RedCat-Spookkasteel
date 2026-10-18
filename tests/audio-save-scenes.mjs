import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

// Isolated profile: never open or alter the player's desktop save files.
const out=path.resolve(`temp_work/audio-save-2026-10-15/browser-${Date.now()}`);
// A relative temp path avoids Linux's 108-byte Unix socket path limit while
// retaining all browser files inside the project's persistent temp_work.
await mkdir('temp_work/audio-tmp',{recursive:true});
const env={...process.env,TMPDIR:'temp_work/audio-tmp'},port='4497';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:port},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let context;
try {
  context=await chromium.launchPersistentContext(`${out}/profile`,{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,env,
    viewport:{width:960,height:540},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required',`--crash-dumps-dir=${out}`]});
  const page=await context.newPage(),errors=[];
  page.on('pageerror',error=>errors.push(error.stack));
  page.on('response',response=>{if(response.status()>=400)errors.push(`${response.status()} ${response.url()}`);});
  await page.goto(`http://127.0.0.1:${port}/?skipIntro`);await page.waitForFunction(()=>window.__redcat);
  await page.evaluate(async()=>{const app=window.__redcat;await app.startLevel(0);app.pause();});
  const result=await page.evaluate(async()=>{
    const app=window.__redcat,audio=app.audio;
    for(const player of app.gameplay.scripts.players.values())player.stop();
    app.gameplay.scripts.cutscene=false;app.gameplay.scripts.camera=null;
    audio.stopDialogue();
    const fairy=app.gameplay.find('fairy11')[0],fairyState=app.world.effects.entries.get(fairy.id);
    fairy.enabled=true;for(let i=0;i<20;i++)app.world.effects.updateFairy(fairyState,.05);
    const fairyKey=`effect:fairy:${fairy.id}:idlefee1.wav`,idle=audio.keyed.get(fairyKey);
    if(idle.element.readyState===0)await new Promise(resolve=>idle.element.addEventListener('loadedmetadata',resolve,{once:true}));
    idle.element.currentTime=.23;
    // Real media and decoded WAV paths, saved during a crossfade and dialogue.
    const music=audio.keyed.get('music');music.element.currentTime=7.25;
    const effect=app.gameplay.objects.find(o=>o.entity.classname==='EffectMusic');
    const fight=audio.playMusic({sound:effect.entity.MusicAction,crossFade:true,fadeInTimeSeconds:2,fadeOutTimeSeconds:2});
    fight.element.currentTime=1.25;
    const pickup=audio.play({sound:'icoinl.wav',group:'pickup'});pickup.element.currentTime=.25;
    audio.queueDialogue({voice:'rcgen44.wav',text:'Continuity test, current line'});
    audio.queueDialogue({voice:'rcgen44.wav',text:'Continuity test, next line'});
    const voice=audio.keyed.get('voice');
    if(voice.element.readyState===0)await new Promise(resolve=>voice.element.addEventListener('loadedmetadata',resolve,{once:true}));
    voice.element.currentTime=.55;
    // Advance only the fade; every sample clock remains paused.
    audio.paused=false;audio.update(.4);audio.paused=true;
    app.saveGame(true);const before=audio.saveState();
    const stored=JSON.parse(localStorage.getItem('redcat.save.v1'));
    await app.loadSave();app.pause();
    const after=app.audio.saveState();
    const immediate=JSON.parse(localStorage.getItem('redcat.save.v1')).audio;
    const subtitle=document.getElementById('subtitle').textContent;
    const restoredVoice=app.audio.keyed.get('voice');
    if(restoredVoice.element.readyState===0)await new Promise(resolve=>restoredVoice.element.addEventListener('loadedmetadata',resolve,{once:true}));
    const afterMetadata=app.audio.saveState();
    const restoredIdle=app.audio.keyed.get(fairyKey);
    app.world.effects.updateFairy(app.world.effects.entries.get(fairy.id),.025);
    const sameFairyVoice=app.audio.keyed.get(fairyKey)===restoredIdle;
    return {before,stored:stored.audio,after,immediate,afterMetadata,subtitle,
      sameFairyVoice,allPaused:app.audio.snapshot().every(record=>record.paused),queued:app.audio.dialogueQueue.length};
  });
  await writeFile(`${out}/report.json`,JSON.stringify({result,errors},null,2)+'\n');
  assert.deepEqual(result.stored,result.before);
  assert.deepEqual(result.after.dialogue,result.before.dialogue);
  assert.deepEqual(result.after.sounds,result.before.sounds);
  assert.deepEqual(result.immediate.dialogue,result.before.dialogue);
  assert.deepEqual(result.afterMetadata.dialogue,result.before.dialogue);
  assert.equal(result.subtitle,'Continuity test, current line');
  assert.ok(result.sameFairyVoice,'first effect update must not restart restored fairy idle');
  assert.equal(result.queued,1);assert.ok(result.allPaused);assert.deepEqual(errors,[]);
  console.log('PASS real menu save/load preserves WAV offsets, music layers/fades, pickup tails, queued dialogue and subtitles while paused.');
  console.log(out);
}finally{await context?.close();server.kill();}

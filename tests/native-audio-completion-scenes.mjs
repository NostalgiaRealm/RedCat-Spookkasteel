import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4197'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage(),errors=[],bad=[];page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)bad.push(r.url());});
  await page.goto('http://127.0.0.1:4197/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  await page.evaluate(async()=>{const app=window.__redcat;await app.startLevel(0);app.pause();for(const p of app.gameplay.scripts.players.values())p.stop();app.gameplay.scripts.cutscene=false;app.gameplay.scripts.camera=null;for(const o of app.gameplay.objects)if(['enemy','trigger','pickup'].includes(o.kind))o.enabled=false;app.audio.reset();app.audio.pause();});
  const results={};
  const decoded=async()=>{await page.waitForFunction(()=>window.__redcat.audio.snapshot().length>0&&window.__redcat.audio.snapshot().every(s=>s.readyState>=2));return page.evaluate(()=>window.__redcat.audio.snapshot());};
  await page.evaluate(()=>{const a=window.__redcat,g=a.gameplay,d=g.objects.find(o=>o.kind==='door'&&o.entity.DoorType==='1');d.locked=false;d.open=false;g.setDoor(d,true);});
  results.door=await decoded();assert.ok(results.door.some(s=>s.sound==='opendoornormal.wav'));
  results.brutus=[];
  for(const action of ['attack','hurt','death']){await page.evaluate(action=>{const a=window.__redcat,g=a.gameplay,b=g.find('brutus')[0];a.audio.reset();a.audio.pause();b.enabled=true;b.health=30;if(action==='attack')g.enemyAction(b,action);if(action==='hurt')g.hurtEnemy(b,1);if(action==='death')g.destroy(b);},action);const sounds=await decoded();assert.ok(sounds.some(s=>s.sound==={attack:'brin0011.wav',hurt:'brin0003.wav',death:'brin0004.wav'}[action]));results.brutus.push({action,sounds});}
  results.footsteps=await page.evaluate(async()=>{const a=window.__redcat,w=a.world,g=a.gameplay,{GameplayAudio}=await import('./src/gameplay-audio.js');a.audio.reset();a.audio.pause();const router=new GameplayAudio(a.audio);g.scripts.cutscene=false;g.scripts.enemiesFrozen=true;for(const p of g.scripts.players.values())p.stop();const input={forward:1,right:0};
    // Run the production router against actual player/collider positions.
    for(let i=0;i<80;i++){w.update(.025,input);router.update(.025,w,g,input);}return {position:w.player.position,grounded:w.player.grounded,sounds:a.audio.snapshot()};});
  assert.ok(results.footsteps.sounds.some(s=>/^rcwalk[12]\.wav$/.test(s.sound)));await decoded();
  results.music=[];
  for(let i=0;i<5;i++){const modes=await page.evaluate(async i=>{const a=window.__redcat,{Gameplay}=await import('./src/gameplay.js'),{ScriptHost}=await import('./src/script-host.js'),id=`lvl0${i}a`,level=await fetch(`data/levels/${id}/level.json`).then(r=>r.json()),program=await fetch(`data/davi/${id}.json`).then(r=>r.json()),events=[];
    const g=new Gameplay(level,{deferInit:true,onEvent:e=>{if(e.type==='scriptMusic'){events.push(e);a.audio.playMusic(e);}}}),h=new ScriptHost(g,program),music=g.objects.find(o=>o.entity.classname==='EffectMusic');for(const o of g.objects)if(o.kind==='enemy')o.enabled=false;
    a.audio.reset();a.audio.pause();h.selectMusic(music,'ambient');const enemy=g.objects.find(o=>o.kind==='enemy'&&!['brutusm','brutusb','witch','maxd','maxj'].includes(o.enemyType));enemy.enabled=true;enemy.alerted=true;if(enemy.ambush)enemy.ambush.phase='awake';h.update(.05);return events;},i);assert.equal(modes.at(-1).mode,'action');assert.equal(modes.at(-1).sound,i<3?'Endbosses.wav':'spookkort3.wav');results.music.push({level:i,modes,sounds:await decoded()});}
  await page.evaluate(async()=>{const a=window.__redcat,{discoverSecret}=await import('./src/environment-interactions.js');a.audio.reset();a.audio.pause();const o={id:'secret-cue-test',entity:{IsSecret:'1'},position:[0,0,0]};discoverSecret(a.gameplay,o);discoverSecret(a.gameplay,o);});results.secret=await decoded();assert.equal(results.secret.filter(s=>s.sound==='secretfound.wav').length,1);
  assert.deepEqual(errors,[]);assert.deepEqual(bad,[]);await mkdir('artifacts',{recursive:true});await writeFile('artifacts/native-audio-completion.json',JSON.stringify(results,null,2)+'\n');
  console.log('PASS decoded native door, Brutus voices, real player footsteps, five authored action tracks and SecretFound cue.');
}finally{await browser?.close();server.kill();}

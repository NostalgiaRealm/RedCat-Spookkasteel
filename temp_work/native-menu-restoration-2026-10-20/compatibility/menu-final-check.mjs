import assert from 'node:assert/strict';
import {spawn} from 'node:child_process';
import {mkdir,writeFile,readFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import {chromium} from 'playwright';

const base='temp_work/native-menu-restoration-2026-10-20/compatibility';
const output=`${base}/final-${new Date().toISOString().replace(/[:.]/g,'-')}`;
await mkdir(output,{recursive:true});
const manifest=JSON.parse(await readFile('assets/help/manifest.json','utf8'));
const report={checks:[],pageErrors:[],badResponses:[],screenshots:[],scope:'Only final Startinfo/Help/controller extras/quickplay launch changes'};
const check=name=>{report.checks.push(name);console.log(`PASS ${name}`);};
const port=Number(process.env.NATIVE_MENU_TEST_PORT||4387);
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:String(port),TMPDIR:'temp_work'},stdio:['ignore','pipe','pipe']});
let serverLog='',context,page;
server.stdout.on('data',data=>serverLog+=data);server.stderr.on('data',data=>serverLog+=data);
await new Promise((resolve,reject)=>{server.stdout.on('data',data=>{if(String(data).includes('RedCat:'))resolve();});server.on('error',reject);server.once('exit',code=>reject(new Error(`server ${code}`)));});
const screenshot=async name=>{const path=`${output}/${name}.png`;await page.screenshot({path});report.screenshots.push(path);};
const pageIs=async name=>page.waitForFunction(name=>document.querySelector('.native-menu-frame').dataset.page===name,name);
const home=async()=>{while(await page.locator('.native-menu-frame').getAttribute('data-page')!=='home')await page.locator('#native-previous').click();};
async function verifyHelpLinks(topicId){
  await page.locator('#native-help').click();await page.locator('#native-help-content h2').waitFor();
  const topic=manifest.topics.find(t=>t.id===topicId);
  assert.equal(await page.locator('#native-help-content h2').textContent(),topic.title);
  assert.equal(await page.locator('#native-help-content .help-topic-link').count(),4);
  for(const link of topic.links){
    const before=await page.locator('#native-help-content').textContent();
    assert.ok(before.includes(link.label));
    await page.locator(`[data-help-target="${link.target}"]`).click();
    assert.equal(await page.locator('#native-help-content h2').textContent(),manifest.topics.find(t=>t.id===link.target).title);
    await page.locator('#native-help-back').click();
    assert.equal(await page.locator('#native-help-content h2').textContent(),topic.title);
  }
  await page.locator('#native-help-close').click();
}
try{
  context=await chromium.launchPersistentContext(resolve(output,'profile'),{
    executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,
    viewport:{width:800,height:600},hasTouch:true,env:{...process.env,TMPDIR:'temp_work'},
    args:['--use-angle=swiftshader','--enable-unsafe-swiftshader','--autoplay-policy=no-user-gesture-required'],
  });
  await context.addInitScript(()=>{
    localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:0,touchControls:'on',controlDevice:'keyboard',renderScale:25}));
    localStorage.setItem('redcat.save.v1',JSON.stringify({version:1,level:'lvl02a',position:[0,0,0],yaw:0,pitch:0,game:{version:1,level:'lvl02a',difficulty:'Hard',state:{health:10,score:1234}}}));
    localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:2}));
  });
  page=await context.newPage();
  page.on('pageerror',error=>report.pageErrors.push(String(error)));
  page.on('response',res=>{if(res.status()>=400)report.badResponses.push({url:res.url(),status:res.status()});});
  await page.goto(`http://127.0.0.1:${port}/?skipIntro`);
  await page.waitForFunction(()=>window.__redcat?.originalMenu);
  await page.evaluate(()=>{
    window.__finalVoices=[];
    __redcat.menuAudio.say=files=>{
      __finalVoices.push([...files]);
      if(files.includes('rcmn43.wav'))return new Promise(resolve=>{window.__releaseQuickplay=resolve;});
      return Promise.resolve(true);
    };
  });
  const rawSave=await page.evaluate(()=>localStorage.getItem('redcat.save.v1'));
  await page.locator('#native-next').click();await pageIs('startinfo');
  assert.equal(await page.locator('#native-start-level').textContent(),'Het Kerkhof');
  assert.equal(await page.locator('#native-start-score').textContent(),'1234');
  assert.equal(await page.locator('#native-start-difficulty').textContent(),'Moeilijk');
  assert.equal(await page.locator('#native-start-player').textContent(),await page.evaluate(()=>__redcat.profiles.active.name));
  assert.match(await page.locator('#native-start-picture').getAttribute('src'),/10020000\.png$/);
  for(const [device,image,label] of [['keyboard','11020000','Toetsenbord'],['gamepad','11010000','Gamepad'],['joystick','11030000','Joystick']]){
    await page.evaluate(device=>{__redcat.settings.controlDevice=device;__redcat.originalMenu.refresh();},device);
    const img=page.locator('#native-start-control-picture');
    assert.match(await img.getAttribute('src'),new RegExp(`${image}\\.png$`));
    assert.equal(await img.getAttribute('alt'),label);
    await img.evaluate(img=>img.decode());
  }
  await page.evaluate(()=>{__redcat.settings.controlDevice='keyboard';__redcat.originalMenu.refresh();});
  for(const id of ['native-start-picture','native-start-control-picture']){
    await page.locator(`#${id}`).evaluate(img=>img.decode());
    const box=await page.locator(`#${id}`).boundingBox();assert.ok(box&&box.x>=0&&box.y>=0&&box.x+box.width<=801&&box.y+box.height<=601);
  }
  await screenshot('startinfo-original-800x600');
  check('Startinfo presents native chapter and input artwork, saved player/score/difficulty, and keyboard/gamepad/joystick variants.');
  await page.evaluate(async()=>{
    const {GamepadMenu}=await import('/src/gamepad-menu.js');
    const nav=window.__finalNav=new GamepadMenu(),root=document.querySelector('#menu'),summary=document.querySelector('#native-start-extras summary');
    summary.focus();nav.update(root);nav.update(root,{confirm:true});
  });
  assert.equal(await page.locator('#native-start-extras').evaluate(e=>e.open),true);
  await page.evaluate(()=>__finalNav.update(document.querySelector('#menu'),{down:true}));
  assert.equal(await page.evaluate(()=>document.activeElement.id),'start-over');
  await page.evaluate(()=>{
    const root=document.querySelector('#menu'),summary=document.querySelector('#native-start-extras summary');
    summary.focus();__finalNav.update(root);__finalNav.update(root,{confirm:true});
  });
  assert.equal(await page.locator('#native-start-extras').evaluate(e=>e.open),false);
  assert.equal(await page.evaluate(()=>localStorage.getItem('redcat.save.v1')),rawSave);
  check('Controller navigation can open/close Meer opties and reach restart without changing the saved adventure.');
  await verifyHelpLinks('h_startscreenmenu_advent');
  await home();
  await page.locator('#open-settings').click();await page.locator('#open-key-settings').click();
  await page.locator('#key-binding-jump').click();await page.locator('#native-key-help').click();
  await page.locator('#native-help-content h2').waitFor();
  assert.equal(await page.locator('#native-help-content h2').textContent(),'Hoe stel ik een andere toets in?');
  assert.equal(await page.evaluate(()=>__redcat.keySettings.capture),null);
  await page.locator('#native-help-close').click();
  assert.equal(await page.locator('#key-settings').evaluate(e=>e.open),true);
  await page.locator('#cancel-key-settings').click();await page.locator('#close-settings').click();
  check('Key-settings Help opens the original contextual topic, cancels active key capture, and returns to the unchanged draft.');
  await page.locator('[data-menu-choice="quickplay"]').click();await page.locator('#native-next').click();await pageIs('quickplay');
  await page.locator('[data-level="lvl00a"]').click();await page.locator('#native-next').click();
  await page.locator('[data-difficulty="Easy"]').click();await page.locator('#native-next').click();await pageIs('startinfo');
  assert.equal(await page.locator('#native-start-mode').textContent(),'Snelspel');
  assert.equal(await page.locator('#native-start-score').textContent(),'0');
  assert.equal(await page.locator('#native-start-difficulty').textContent(),'Makkelijk');
  await verifyHelpLinks('h_startscreenmenu_quickplay');
  check('All eight original Startinfo Help links navigate to their intended topics and back.');
  await page.locator('#play-level').click();await page.locator('#confirm-new-adventure').click();
  await page.waitForFunction(()=>typeof window.__releaseQuickplay==='function');
  await page.locator('#loading').waitFor({state:'visible'});
  assert.equal(await page.locator('#loading-mode').textContent(),'Snelspel');
  assert.deepEqual(await page.evaluate(()=>__finalVoices.at(-1)),['rcmn43.wav']);
  assert.equal(await page.evaluate(()=>__finalVoices.some(files=>files.includes('rcmn32.wav'))),false);
  await screenshot('quickplay-loading');
  await page.evaluate(()=>__releaseQuickplay());
  await page.waitForFunction(()=>__redcat.mode==='playing'||__redcat.mode==='error',null,{timeout:120000});
  assert.equal(await page.evaluate(()=>__redcat.mode),'playing');
  assert.equal(await page.evaluate(()=>__redcat.world.id),'lvl00a');
  check('Quickplay uses RCMN43, shows Snelspel on the original loading screen, then starts the selected level.');
  report.voices=await page.evaluate(()=>__finalVoices);
  assert.deepEqual(report.pageErrors,[]);assert.deepEqual(report.badResponses,[]);
  report.passed=true;
}catch(error){report.failure=error.stack||String(error);if(page)await screenshot('failure').catch(()=>{});throw error;}
finally{await writeFile(`${output}/report.json`,JSON.stringify(report,null,2)+'\n');await writeFile(`${output}/server.log`,serverLog);await context?.close();server.kill();console.log(`Report: ${output}/report.json`);}

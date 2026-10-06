import assert from 'node:assert/strict';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import {chromium} from 'playwright';
process.env.TMPDIR='current_work';
const output=resolve(`current_work/controller-support-2026-10-03/scenes-${Date.now()}`);
await mkdir(output,{recursive:true});
const report={checks:[],errors:[]},port=Number(process.env.CONTROLLER_TEST_PORT||4331);
const check=name=>{report.checks.push(name);console.log(`PASS ${name}`);};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:String(port)},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let context,page;
try {
  context=await chromium.launchPersistentContext(resolve(output,'profile'),{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl'],viewport:{width:1000,height:800}});
  page=await context.newPage();
  await page.route('**/controller-fixture.html',route=>route.fulfill({contentType:'text/html',body:`<style>[hidden]{display:none}#scope{height:120px;overflow:auto}button{display:block}</style><div id="scope"><button id="first">First</button><button disabled>Disabled</button><div hidden><button>Hidden</button></div><button style="visibility:hidden">Invisible</button><select id="select"><option>A</option><option disabled>B</option><option>C</option></select><input id="range" type="range" min="0" max="1" step=".1" value=".5"><input id="toggle" type="checkbox"><button id="last">Last</button><div style="height:1000px"></div></div><dialog id="dialog"><button autofocus id="cancel">Cancel</button><button id="confirm">Confirm</button></dialog>`}));
  await page.goto(`http://127.0.0.1:${port}/controller-fixture.html`);
  await page.evaluate(async()=>{
    const {GamepadMenu}=await import('/src/gamepad-menu.js'),menu=new GamepadMenu(),root=document.getElementById('scope');
    const expect=(value,message)=>{if(!value)throw new Error(message);};
    const id=()=>document.activeElement.id;let clicks=0,changes=0;
    document.getElementById('first').onclick=()=>clicks++;
    root.addEventListener('change',()=>changes++);
    menu.update(root,{confirm:true});expect(id()==='first'&&clicks===0,'new scope consumes old confirm');
    menu.update(root,{confirm:true});expect(clicks===1,'confirm clicks once');
    menu.update(root,{down:true});expect(id()==='select','hidden and disabled skipped');
    menu.update(root,{right:true});expect(document.getElementById('select').value==='C','select skips disabled option');
    menu.update(root,{confirm:true});expect(document.getElementById('select').value==='A','confirm cycles closed select');
    menu.update(root,{down:true});menu.update(root,{right:true});expect(document.getElementById('range').value==='0.6','range increments');
    menu.update(root,{down:true});menu.update(root,{confirm:true});expect(document.getElementById('toggle').checked,'checkbox toggles');expect(changes===4,'all changes dispatch events');
    menu.update(root,{down:true});expect(id()==='last','last button focused');
    menu.update(root,{right:true});expect(id()==='first','horizontal focus wraps');
    menu.scroll(root,500);expect(root.scrollTop>0,'right stick can scroll long panel');
    const dialog=document.getElementById('dialog');dialog.showModal();menu.update(dialog,{confirm:true});expect(id()==='cancel'&&dialog.open,'dialog autofocus avoids accidental activation');
    expect(!document.getElementById('first').classList.contains('gamepad-focus'),'old highlight removed');
    menu.reset();expect(!document.querySelector('.gamepad-focus'),'reset clears highlight');
  });
  check('menu focus, hidden/disabled controls, select/range/checkbox changes, scrolling and modal safety');
  await page.close();page=await context.newPage();page.on('pageerror',error=>report.errors.push(String(error)));
  await page.addInitScript(()=>{
    if(!localStorage.getItem('redcat.settings.v1'))localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:0,resolution:'1280x720'}));
    window.testPad={index:0,id:'Simulated standard controller',mapping:'standard',connected:true,axes:[0,0,0,0],buttons:Array.from({length:17},()=>({pressed:false,value:0}))};
    window.testPads=[window.testPad];Object.defineProperty(navigator,'getGamepads',{value:()=>window.testPads,configurable:true});
  });
  await page.goto(`http://127.0.0.1:${port}/?skipIntro`);await page.bringToFront();await page.waitForFunction(()=>window.__redcat);
  const frames=async(n=4)=>page.evaluate(async n=>{for(let i=0;i<n;i++)await new Promise(requestAnimationFrame);},n);
  const button=async(index,pressed)=>{await page.evaluate(({index,pressed})=>window.testPad.buttons[index]={pressed,value:Number(pressed)},{index,pressed});await frames();};
  const tap=async index=>{await button(index,true);await button(index,false);};
  const axes=async value=>{await page.evaluate(value=>window.testPad.axes=value,value);await frames();};
  const focus=()=>page.evaluate(()=>document.activeElement.id);
  const navigate=async id=>{for(let i=0;i<30&&await focus()!==id;i++)await tap(13);assert.equal(await focus(),id,`controller reaches ${id}`);};
  assert.equal(await page.evaluate(()=>window.__redcat.controllerActive),false,'neutral pad does not steal input');
  await tap(2);assert.equal(await focus(),'start');
  await navigate('open-settings');await tap(0);await page.waitForFunction(()=>!document.getElementById('settings').hidden);
  await navigate('difficulty');await tap(15);assert.equal(await page.locator('#difficulty').inputValue(),'Hard');
  await navigate('sensitivity');await tap(15);assert.equal(await page.locator('#sensitivity').inputValue(),'1.1');
  await navigate('auto-intro');await tap(0);assert.equal(await page.locator('#auto-intro').isChecked(),true);await tap(0);
  await page.screenshot({path:resolve(output,'controller-settings-focus.png')});
  await navigate('apply-settings');await tap(0);await page.waitForFunction(()=>document.getElementById('settings').hidden);
  assert.equal(await page.evaluate(()=>window.__redcat.settings.sensitivity),1.1);
  await navigate('open-help');await tap(0);await page.waitForFunction(()=>!document.getElementById('help').hidden);
  await axes([0,0,0,1]);await frames(35);assert.ok(await page.locator('#help>.panel').evaluate(e=>e.scrollTop)>0);await axes([0,0,0,0]);await tap(1);
  await page.waitForFunction(()=>document.getElementById('help').hidden);
  await navigate('open-about');await tap(0);await page.waitForFunction(()=>document.getElementById('about').open);await tap(1);assert.equal(await page.locator('#about').evaluate(e=>e.open),false);
  await navigate('open-recovery');await tap(0);await page.waitForFunction(()=>document.getElementById('recovery-saves').open);await tap(1);
  check('controller navigates actual settings, help, About and recovery menus');

  await navigate('start');await tap(0);await page.waitForFunction(()=>window.__redcat.mode==='playing'&&window.__redcat.gameplay.scripts.cutscene,null,{timeout:60000});
  assert.equal(await page.evaluate(()=>window.__redcat.readInput().jump),false,'start confirm does not become a jump');
  const before=await page.evaluate(()=>({yaw:window.__redcat.world.yaw,pitch:window.__redcat.world.pitch}));
  await axes([0,0,1,.5]);await frames(12);
  assert.deepEqual(await page.evaluate(()=>({yaw:window.__redcat.world.yaw,pitch:window.__redcat.world.pitch})),before,'authored camera rejects stick look');
  await axes([0,0,0,0]);await button(2,true);
  await page.waitForTimeout(1000);assert.equal(await page.evaluate(()=>window.__redcat.gameplay.scripts.cutscene),true);
  await page.waitForFunction(()=>!window.__redcat.gameplay.scripts.cutscene,null,{timeout:6000});await button(2,false);
  assert.equal(await page.locator('#cutscene-skip b').textContent(),'X /');
  assert.equal(await page.locator('#cutscene-skip .controller-square').count(),1);
  check('forest opens through controller with safe confirm, fixed camera and held two-second cutscene skip');

  const yaw=await page.evaluate(()=>window.__redcat.world.yaw);await axes([0,0,1,0]);await frames(10);assert.ok(await page.evaluate(()=>window.__redcat.world.yaw)<yaw-.05);await axes([0,0,0,0]);
  await axes([.5,-.5,0,0]);assert.ok(await page.evaluate(()=>window.__redcat.readInput().forward)>.2);assert.ok(await page.evaluate(()=>window.__redcat.readInput().right)>.2);await axes([0,0,0,0]);
  await button(4,true);assert.equal(await page.evaluate(()=>window.__redcat.readInput().walk),true);await button(4,false);
  await button(0,true);assert.equal(await page.evaluate(()=>window.__redcat.readInput().jump),true);await button(0,false);
  await button(7,true);await frames(20);assert.equal(await page.evaluate(()=>window.__redcat.readInput().attack),true);await button(7,false);assert.equal(await page.evaluate(()=>window.__redcat.readInput().attack),false);
  const camera=await page.evaluate(()=>window.__redcat.settings.camera);await tap(3);assert.notEqual(await page.evaluate(()=>window.__redcat.settings.camera),camera);await tap(3);
  check('controller analog movement, look, jump, walk, held firing and camera toggle reach gameplay');

  await button(9,true);await page.waitForFunction(()=>window.__redcat.mode==='paused');await frames(12);assert.equal(await page.evaluate(()=>window.__redcat.mode),'paused');await button(9,false);
  await navigate('pause-settings');await tap(0);await navigate('open-cheats');await tap(0);await navigate('cheat-noclip');await tap(0);
  assert.equal(await page.evaluate(()=>window.__redcat.world.player.noClip),true);await tap(1);await tap(1);await tap(9);await page.waitForFunction(()=>window.__redcat.mode==='playing');
  const altitude=await page.evaluate(()=>window.__redcat.world.player.position[1]);await button(0,true);await frames(8);await button(0,false);assert.ok(await page.evaluate(()=>window.__redcat.world.player.position[1])>altitude);
  const high=await page.evaluate(()=>window.__redcat.world.player.position[1]);await button(1,true);await frames(8);await button(1,false);assert.ok(await page.evaluate(()=>window.__redcat.world.player.position[1])<high);
  await tap(9);await page.waitForFunction(()=>window.__redcat.mode==='paused');await navigate('resume');await button(0,true);await page.waitForFunction(()=>window.__redcat.mode==='playing');assert.equal(await page.evaluate(()=>window.__redcat.readInput().jump),false);await button(0,false);
  await axes([0,-1,0,0]);await page.evaluate(()=>window.testPads=[]);await page.waitForFunction(()=>window.__redcat.mode==='paused');assert.equal(await page.evaluate(()=>window.__redcat.readInput().forward),0);
  await page.evaluate(()=>{window.testPad.axes=[0,0,0,0];window.testPads=[window.testPad];});await frames();await tap(9);await page.waitForFunction(()=>window.__redcat.mode==='playing');
  check('controller cheats/free flight, pause/resume held-input isolation, disconnect pause and reconnect');

  // Real keyboard/mouse input can take over without disconnecting the controller.
  await page.keyboard.press('Escape');await page.waitForFunction(()=>window.__redcat.mode==='paused');assert.equal(await page.evaluate(()=>window.__redcat.controllerActive),false);
  await page.locator('#return-menu').click();await tap(2);await navigate('start-over');await tap(0);await page.waitForFunction(()=>document.getElementById('new-adventure-warning').open);
  assert.equal(await focus(),'cancel-new-adventure');await tap(1);assert.equal(await page.locator('#new-adventure-warning').evaluate(e=>e.open),false);
  check('keyboard takeover and controller save-overwrite cancellation');

  // Separate desktop profile state: verify the actual opening, ten-second toast,
  // persistent first-time marker and no hint after loading an existing save.
  await page.evaluate(()=>{localStorage.removeItem('redcat.desktop-intro-hint.v1');window.testPads=[];});await page.reload();await page.waitForFunction(()=>window.__redcat);
  await page.evaluate(()=>{window.testPads=[];window.hintShown=[];const toast=document.getElementById('toast');new MutationObserver(()=>{if(toast.classList.contains('visible')&&toast.textContent.startsWith('Klik om rond te kijken'))window.hintShown.push({at:performance.now(),cutscene:window.__redcat.gameplay.scripts.cutscene,camera:window.__redcat.gameplay.scripts.camera});}).observe(toast,{attributes:true,childList:true});});
  await page.evaluate(()=>window.__redcat.startLevel(0));await page.waitForFunction(()=>window.__redcat.gameplay.scripts.cutscene);assert.equal(await page.evaluate(()=>window.hintShown.length),0);
  await page.waitForFunction(()=>window.hintShown.length===1,null,{timeout:30000});assert.equal(await page.evaluate(()=>window.hintShown[0].cutscene),false);assert.equal(await page.evaluate(()=>window.hintShown[0].camera),null);
  await page.waitForFunction(()=>performance.now()-window.hintShown[0].at>9400);assert.equal(await page.locator('#toast').evaluate(e=>e.classList.contains('visible')),true);
  await page.waitForFunction(()=>!document.getElementById('toast').classList.contains('visible'));assert.equal(await page.evaluate(()=>localStorage.getItem('redcat.desktop-intro-hint.v1')),'true');
  await page.evaluate(()=>{window.__redcat.saveGame(true);window.__redcat.pause();});await page.reload();await page.waitForFunction(()=>window.__redcat);await page.evaluate(()=>window.__redcat.loadSave());await frames(8);
  assert.equal(await page.locator('#toast').evaluate(e=>e.classList.contains('visible')&&e.textContent.startsWith('Klik om rond te kijken')),false);
  check('desktop hint waits for forest opening, remains ten seconds, and stays dismissed after reload/save load');
  assert.deepEqual(report.errors,[]);
} catch(error){report.failure=String(error.stack||error);if(page)await page.screenshot({path:resolve(output,'failure.png')}).catch(()=>{});throw error;}
finally{await writeFile(resolve(output,'report.json'),JSON.stringify(report,null,2));await context?.close();server.kill();console.log(output);}

import assert from 'node:assert/strict';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import {chromium,devices} from 'playwright';

const output='temp_work/menu-input-device-2026-10-20';
await mkdir(output,{recursive:true});
const report={checks:[],errors:[],badResponses:[]};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4389',TMPDIR:'temp_work'},stdio:['ignore','pipe','pipe']});
let log='',context;
server.stdout.on('data',data=>log+=data);server.stderr.on('data',data=>log+=data);
await new Promise((resolve,reject)=>{server.stdout.on('data',data=>{if(String(data).includes('RedCat:'))resolve();});server.once('error',reject);server.once('exit',code=>reject(new Error(`server exited ${code}`)));});
async function verify(page,label,art){
  await page.waitForFunction(label=>document.querySelector('#native-start-control-label').textContent===label,label);
  const image=page.locator('#native-start-control-picture');
  assert.equal(await image.getAttribute('alt'),label);
  assert.ok((await image.getAttribute('src')).endsWith(art));
  await image.evaluate(image=>image.decode());
  await page.locator('#native-start-control-label').scrollIntoViewIfNeeded();
  assert.ok(await page.locator('#native-start-control-label').isVisible());
  const [img,caption]=await Promise.all([image.boundingBox(),page.locator('#native-start-control-label').boundingBox()]);
  assert.ok(caption.y>=img.y+img.height-1,'caption stays below artwork');
  assert.ok(caption.x>=0&&caption.x+caption.width<=(await page.evaluate(()=>innerWidth))+1,'caption fits horizontally');
}
async function setTouch(page,preference){
  await page.evaluate(()=>__redcat.originalMenu.home());
  await page.locator('#open-settings').click();
  await page.locator('#open-advanced-settings').click();
  await page.locator('#touch-controls-setting').selectOption(preference);
  await page.locator('#apply-settings').click();
  await page.locator('#native-next').click();
}
try{
  for(const mobile of [false,true]){
    const name=mobile?'mobile':'desktop';
    context=await chromium.launchPersistentContext(resolve(output,`${name}-profile`),{
      executablePath:'/usr/bin/google-chrome',headless:true,env:{...process.env,TMPDIR:'temp_work'},
      args:['--use-angle=swiftshader','--enable-unsafe-swiftshader','--autoplay-policy=no-user-gesture-required'],
      ...(mobile?devices['Pixel 7']:{}),viewport:mobile?{width:390,height:844}:{width:800,height:600},deviceScaleFactor:1,
    });
    await context.addInitScript(()=>{
      localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:0,touchControls:'auto',controlDevice:'keyboard'}));
      localStorage.setItem('redcat.save.v1',JSON.stringify({version:1,level:'lvl00a',position:[0,0,0],yaw:0,pitch:0,game:{version:1,level:'lvl00a',difficulty:'Normal',state:{health:10,score:100}}}));
    });
    const page=await context.newPage();
    page.on('pageerror',error=>report.errors.push(String(error)));
    page.on('response',response=>{if(response.status()>=400)report.badResponses.push(response.url());});
    await page.goto('http://127.0.0.1:4389/?skipIntro');
    await page.waitForFunction(()=>window.__redcat?.originalMenu);
    await page.evaluate(()=>{__redcat.menuAudio.say=()=>Promise.resolve(true);});
    await page.locator('#native-next').click();
    await verify(page,mobile?'Aanraakscherm':'Muis en toetsenbord',mobile?'kde-touchscreen.svg':'11020000.png');
    await page.screenshot({path:`${output}/${name}-startinfo.png`});
    report.checks.push(`${name}: automatic input has the correct visible caption, artwork and accessible label`);
    if(mobile){
      await page.setViewportSize({width:320,height:568});
      await verify(page,'Aanraakscherm','kde-touchscreen.svg');
      await page.screenshot({path:`${output}/small-phone-startinfo.png`});
      await setTouch(page,'off');
      await verify(page,'Muis en toetsenbord','11020000.png');
      await setTouch(page,'auto');
      await verify(page,'Aanraakscherm','kde-touchscreen.svg');
      report.checks.push('mobile: disabling touch changes the caption to mouse/keyboard; automatic restores touchscreen');
    }else{
      await page.evaluate(()=>__redcat.originalMenu.home());
      await page.locator('#open-settings').click();
      assert.equal(await page.locator('[data-control="keyboard"]').textContent(),'Muis en toetsenbord');
      await page.screenshot({path:`${output}/desktop-settings.png`});
      await page.locator('#close-settings').click();
      await page.locator('#native-next').click();
      await setTouch(page,'on');
      await verify(page,'Aanraakscherm','kde-touchscreen.svg');
      report.checks.push('desktop: settings identifies both mouse and keyboard; explicit touch enable shows touchscreen');
    }
    await page.evaluate(()=>{
      __redcat.gamepad._getGamepads=()=>[{id:'Test controller',index:0,connected:true,mapping:'standard',axes:[0,0,0.6,0],buttons:Array.from({length:17},()=>({pressed:false,value:0}))}];
    });
    await verify(page,'Gamepad','11010000.png');
    await page.evaluate(()=>{__redcat.gamepad._getGamepads=()=>[];});
    await verify(page,'Aanraakscherm','kde-touchscreen.svg');
    report.checks.push(`${name}: controller activity updates Startinfo, disconnect returns to enabled touch input`);
    await context.close();context=null;
  }
  const response=await fetch('http://127.0.0.1:4389/assets/icons/kde-touchscreen.svg');
  assert.equal(response.headers.get('content-type'),'image/svg+xml');
  assert.deepEqual(report.errors,[]);assert.deepEqual(report.badResponses,[]);
  report.passed=true;
}catch(error){report.failure=String(error.stack||error);throw error;}
finally{
  await writeFile(`${output}/report.json`,JSON.stringify(report,null,2)+'\n');
  await writeFile(`${output}/server.log`,log);
  await context?.close();server.kill();console.log(JSON.stringify(report,null,2));
}

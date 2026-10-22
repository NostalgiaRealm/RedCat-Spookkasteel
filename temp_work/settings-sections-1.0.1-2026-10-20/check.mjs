import assert from 'node:assert/strict';
import {spawn} from 'node:child_process';
import {writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import {chromium,devices} from 'playwright';
const output='temp_work/settings-sections-1.0.1-2026-10-20';
const report={checks:[],errors:[],badResponses:[]};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4389',TMPDIR:'temp_work'},stdio:['ignore','pipe','pipe']});
let log='',context;
server.stdout.on('data',d=>log+=d);server.stderr.on('data',d=>log+=d);
await new Promise((resolve,reject)=>{server.stdout.on('data',d=>{if(String(d).includes('RedCat:'))resolve();});server.once('error',reject);server.once('exit',c=>reject(new Error(`server exited ${c}`)));});
async function screenshot(page,name){
  await page.evaluate(async()=>{
    const urls=new Set([...document.querySelectorAll('#settings,#settings *')].flatMap(el=>[...getComputedStyle(el).backgroundImage.matchAll(/url\("?([^"()]+)"?\)/g)].map(m=>m[1])));
    await Promise.all([...urls].map(async url=>{const img=new Image();img.src=url;await img.decode();}));
  });
  await page.screenshot({path:`${output}/${name}.png`});
}
try{
  for(const [name,width,height,mobile] of [['desktop',800,600,false],['tablet',700,900,true],['phone',390,844,true],['small-phone',320,568,true]]){
    context=await chromium.launchPersistentContext(resolve(output,`${name}-profile`),{executablePath:'/usr/bin/google-chrome',headless:true,env:{...process.env,TMPDIR:'temp_work'},args:['--use-angle=swiftshader','--enable-unsafe-swiftshader','--autoplay-policy=no-user-gesture-required'],...(mobile?devices['Pixel 7']:{}),viewport:{width,height},deviceScaleFactor:1});
    await context.addInitScript(()=>localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:0,touchControls:'auto'})));
    const page=await context.newPage();
    page.on('pageerror',e=>report.errors.push(String(e)));
    page.on('response',r=>{if(r.status()>=400)report.badResponses.push(r.url());});
    await page.goto('http://127.0.0.1:4389/?skipIntro');
    await page.waitForFunction(()=>window.__redcat?.originalMenu);
    await page.evaluate(()=>{__redcat.menuAudio.say=()=>Promise.resolve(true);});
    assert.match(await page.locator('#about').textContent(),/Versie\s+1\.0\.1/);
    await page.locator('#open-settings').click();
    assert.equal(await page.locator('#native-settings-advanced').getAttribute('open'),null);
    assert.equal(await page.locator('#native-settings-more').getAttribute('open'),null);
    const rects=await page.evaluate(()=>{const rect=id=>{const r=document.querySelector(id).getBoundingClientRect();return {x:r.x,y:r.y,width:r.width,height:r.height}};return {music:rect('.native-music-slider'),button:rect('#open-more-settings')};});
    assert.ok(rects.button.y>=rects.music.y+rects.music.height,'More button is below music');
    assert.ok(Math.abs((rects.button.x+rects.button.width/2)-(rects.music.x+rects.music.width/2))<1,'More button centered below music');
    await page.locator('#open-more-settings').scrollIntoViewIfNeeded();
    await screenshot(page,`${name}-base`);
    await page.locator('#open-advanced-settings').click();
    assert.deepEqual(await page.locator('#native-settings-advanced input, #native-settings-advanced select').evaluateAll(els=>els.map(el=>el.id)),['resolution','render-scale']);
    await page.waitForFunction(()=>document.querySelector('#open-advanced-settings').getAttribute('aria-expanded')==='true');
    await page.locator('#resolution').selectOption('1280x720');
    await page.locator('#render-scale').fill('150');
    await screenshot(page,`${name}-advanced`);
    await page.locator('#open-more-settings').click();
    assert.equal(await page.locator('#native-settings-advanced').getAttribute('open'),null);
    await page.waitForFunction(()=>document.querySelector('#open-more-settings').getAttribute('aria-expanded')==='true');
    assert.deepEqual(await page.locator('#native-settings-more input, #native-settings-more select').evaluateAll(els=>els.map(el=>el.id)),['touch-controls-setting','difficulty','show-fps','fullscreen','camera-mode','fov','sensitivity','volume','auto-intro']);
    assert.equal(await page.locator('#resolution').inputValue(),'1280x720');
    assert.equal(await page.locator('#render-scale').inputValue(),'150');
    assert.ok(await page.locator('#open-cheats').isVisible());
    assert.ok(await page.locator('#open-help').isVisible());
    assert.ok(await page.locator('#open-about').isVisible());
    await page.locator('#camera-mode').selectOption('first');
    await page.locator('#fov').fill('80');
    await page.locator('#show-fps').check();
    await page.locator('#difficulty').selectOption('Easy');
    await page.locator('#native-settings-more summary').scrollIntoViewIfNeeded();
    await screenshot(page,`${name}-more`);
    const overflow=await page.evaluate(()=>[...document.querySelectorAll('#settings button,#settings input,#settings select,#settings summary')].filter(el=>el.checkVisibility()).filter(el=>{const r=el.getBoundingClientRect();return r.x< -1||r.right>innerWidth+1}).map(el=>el.id||el.tagName));
    assert.deepEqual(overflow,[],`${name}: controls fit horizontally`);
    await page.locator('#apply-settings').click();
    const settings=await page.evaluate(()=>({...__redcat.settings}));
    assert.equal(settings.resolution,'1280x720');assert.equal(settings.renderScale,150);assert.equal(settings.camera,'first');assert.equal(settings.fov,80);assert.equal(settings.showFps,true);assert.equal(settings.difficulty,'Easy');
    const saved=await page.evaluate(()=>JSON.parse(localStorage.getItem('redcat.settings.v1')));
    assert.equal(saved.resolution,'1280x720');assert.equal(saved.camera,'first');
    await page.locator('#open-settings').click();
    assert.equal(await page.locator('#native-settings-more').getAttribute('open'),null);
    await page.locator('#open-advanced-settings').click();
    assert.equal(await page.locator('#render-scale').inputValue(),'150');
    await page.locator('#render-scale').fill('75');
    await page.locator('#open-more-settings').click();
    await page.locator('#sensitivity').fill('1.6');
    await page.locator('#close-settings').click();
    assert.deepEqual(await page.evaluate(()=>({...__redcat.settings})),settings,'Cancel keeps applied settings');
    report.checks.push(`${name} ${width}x${height}: placement, section contents, draft preservation, OK persistence, Annuleren and version passed`);
    await context.close();context=null;
  }
  assert.deepEqual(report.errors,[]);assert.deepEqual(report.badResponses,[]);report.passed=true;
}catch(error){report.failure=String(error.stack||error);throw error;}
finally{await writeFile(`${output}/report.json`,JSON.stringify(report,null,2)+'\n');await writeFile(`${output}/server.log`,log);await context?.close();server.kill();console.log(JSON.stringify(report,null,2));}

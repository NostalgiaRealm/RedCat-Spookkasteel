// Het Kerkhof on an emulated phone and on desktop: default resolution and MSAA,
// the one-time MSAA default, Volle schermresolutie, and a screenshot.
import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4540'},stdio:['ignore','pipe','inherit']});
await new Promise(resolve=>server.stdout.once('data',resolve));
const browser=await chromium.launch({executablePath:process.env.CHROME_PATH,headless:true,args:['--enable-unsafe-swiftshader','--autoplay-policy=no-user-gesture-required']});
const run=async(name,device,stored)=>{
  const context=await browser.newContext(device),page=await context.newPage(),errors=[];
  page.on('pageerror',e=>errors.push(e.message));page.on('console',m=>{if(m.type()==='error')errors.push(m.text());});
  await page.addInitScript(stored=>{if(!localStorage.getItem('redcat.settings.v1'))localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,...stored}));localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));},stored);
  await page.goto('http://127.0.0.1:4540/?skipIntro');await page.waitForFunction(()=>window.__redcat?.originalMenu);
  await page.evaluate(()=>window.__redcat.startLevel(2));await page.waitForFunction(()=>window.__redcat.mode==='playing',null,{timeout:120000});
  await page.evaluate(()=>{window.__redcat.renderQuality.updateSettings=()=>false;});
  await page.waitForTimeout(5000);
  const state=()=>page.evaluate(()=>{const a=window.__redcat,g=document.getElementById('game');return {level:a.gameplay.level?.id,mode:a.mode,canvas:[g.width,g.height],msaa:a.settings.msaa,resolution:a.settings.resolution,hasFull:!!document.querySelector('#resolution [value="full"]')};});
  const result={name,...await state(),errors};
  await page.screenshot({path:`temp_work/scene-output/kerkhof-${name}.png`});
  await context.close();return result;
};
const phone={viewport:{width:800,height:360},deviceScaleFactor:2,isMobile:true,hasTouch:true};
for(const [name,device,stored] of [['phone-default',phone,{}],['phone-old-4x',phone,{msaa:4}],['phone-kept-2x',phone,{msaa:2,phoneMsaaChecked:true}],['phone-full',phone,{resolution:'full'}],['desktop',{viewport:{width:1280,height:720}},{}]])
  console.log(JSON.stringify(await run(name,device,stored)));
await browser.close();server.kill();

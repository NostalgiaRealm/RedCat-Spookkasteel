import assert from 'node:assert/strict';
import {chromium,devices} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
process.env.TMPDIR='current_work';
const output=resolve(`current_work/about-debriefing-2026-10-01/check-${Date.now()}`);
await mkdir(output,{recursive:true});
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4321'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let context;const report={layouts:[],errors:[]};
try {
 for(const mobile of [false,true]) {
  context=await chromium.launchPersistentContext(resolve(output,mobile?'mobile':'desktop'),{executablePath:'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl'],...(mobile?devices['Pixel 7']:{}),viewport:mobile?{width:390,height:844}:{width:1280,height:720}});
  const page=context.pages()[0];page.on('pageerror',e=>report.errors.push(String(e)));
  await page.addInitScript(()=>localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false})));
  await page.goto('http://127.0.0.1:4321/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  await page.locator('#open-about').click();
  const about=page.locator('#about');
  const content=await about.textContent();
  for(const text of ['🫰 Doneren','Doneer om dit project te ondersteunen via:','Of met cryptovaluta:','0xd2489447b93d2925ec7bfc8da96130547bac4167','1B1XsKaiJzdW4mFtvkpbyTyuTAvc53MTah','0xbd1bd031e9da5fd509bf1e8b2adaab895dfd606c','LMMp1yyS2iwhESkh633a6SzmFA3mEHhzXT','💾 Website','📺 YouTube','0.9.4'])assert.ok(content.includes(text),text);
  const links=await about.locator('a').evaluateAll(links=>links.map(a=>({href:a.href,target:a.target,rel:a.rel})));
  assert.deepEqual(links.map(l=>l.href),['https://ko-fi.com/nostalgiarealm','https://www.nostalgiarealm.com/','https://www.youtube.com/@Nostalgia_Realm']);
  for(const link of links){assert.equal(link.target,'_blank');assert.match(link.rel,/noopener/);}
  const sizes=mobile?[[390,844],[320,568],[844,390]]:[[1280,720]];
  for(const [width,height] of sizes) {
   await page.setViewportSize({width,height});
   const layout=await about.evaluate(dialog=>{const b=dialog.getBoundingClientRect();return {x:b.x,y:b.y,width:b.width,height:b.height,clientWidth:dialog.clientWidth,scrollWidth:dialog.scrollWidth};});
   assert.ok(layout.x>=0&&layout.y>=0&&layout.x+layout.width<=width+1&&layout.y+layout.height<=height+1,JSON.stringify(layout));
   assert.ok(layout.scrollWidth<=layout.clientWidth+1,'About content should wrap instead of overflowing horizontally');
   report.layouts.push({mobile,width,height,about:layout});
   await about.evaluate(d=>d.scrollTop=0);await page.screenshot({path:resolve(output,`about-${width}x${height}.png`)});
  }
  await page.locator('#close-about').click();
  await page.evaluate(async mobile=>{
   const {OriginalDebriefing}=await import('./src/debriefing.js');
   window.continued=0;const d=window.testDebriefing=new OriginalDebriefing(document.querySelector('#debriefing'),()=>window.continued++,{mobile});await d.ready;
   d.show({level:'lvl02a',rows:['Potion','Money','Enemy','Secret'].map(kind=>({kind,found:5,total:10,bonus:75})),oldScore:100,bonus:300,newScore:400});
  },mobile);
  assert.equal(await page.locator('#debriefing button').textContent(),'KLIK/TIK hier om verder te gaan');
  assert.equal(await page.locator('#debriefing button').isDisabled(),true);
  await page.evaluate(()=>window.testDebriefing.update(1));
  assert.equal(await page.locator('#debriefing button').isDisabled(),false);
  for(const [width,height] of sizes) {
   await page.setViewportSize({width,height});await page.evaluate(()=>window.testDebriefing.render());
   const r=await page.locator('#debriefing button').boundingBox();assert.ok(r.x>=0&&r.y>=0&&r.x+r.width<=width+1&&r.y+r.height<=height+1);
   await page.screenshot({path:resolve(output,`debriefing-${width}x${height}.png`)});
  }
  if(mobile)await page.locator('#debriefing button').tap();else await page.locator('#debriefing button').click();
  assert.equal(await page.evaluate(()=>window.continued),1);
  await context.close();context=null;
 }
 assert.deepEqual(report.errors,[]);console.log('PASS About text, exact addresses/links, desktop/mobile layout, universal debriefing prompt, click and tap');
} finally {await writeFile(resolve(output,'report.json'),JSON.stringify(report,null,2));await context?.close();server.kill();console.log(output);}
